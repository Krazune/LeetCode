// 71. Simplify Path
import java.util.Stack;

class Solution
{
	public String simplifyPath(String path)
	{
		String[] pathParts = path.split("/");
		Stack<String> pathStack = new Stack<String>();

		for (int pathPartIndex = 0; pathPartIndex < pathParts.length; ++pathPartIndex)
		{
			if (pathParts[pathPartIndex].equals(".") || pathParts[pathPartIndex].equals(""))
			{
				continue;
			}

			if (pathParts[pathPartIndex].equals(".."))
			{
				if (!pathStack.empty())
				{
					pathStack.pop();
				}
			}
			else
			{
				pathStack.push(pathParts[pathPartIndex]);
			}
		}

		if (pathStack.empty())
		{
			return "/";
		}

		String canonicalPath = "";

		for (String pathPart : pathStack)
		{
			canonicalPath += "/" + pathPart;
		}

		return canonicalPath;
	}
}