// 722. Remove Comments
#include <vector>
#include <string>

using namespace std;

class Solution
{
	public:
	vector<string> removeComments(vector<string>& source)
	{
		vector<string> lines;
		int lineCount = source.size();

		for (int lineIndex = 0; lineIndex < lineCount; lineIndex++)
		{
			string line;

			for (int characterIndex = 0; characterIndex < source[lineIndex].size(); characterIndex++)
			{
				if (source[lineIndex][characterIndex] == '/')
				{
					if (characterIndex < source[lineIndex].size() - 1)
					{
						if (source[lineIndex][characterIndex + 1] == '/')
						{
							break;
						}
						else if (source[lineIndex][characterIndex + 1] == '*')
						{
							characterIndex += 2;
							bool commentFinished = false;

							do
							{
								for (; characterIndex < source[lineIndex].size(); characterIndex++)
								{
									if (source[lineIndex][characterIndex] == '*' && characterIndex < source[lineIndex].size() - 1 && source[lineIndex][characterIndex + 1] == '/')
									{
										characterIndex++;
										commentFinished = true;
										break;
									}
								}

								if (!commentFinished)
								{
									lineIndex++;
									characterIndex = 0;
								}
							} while(!commentFinished);
						}
						else
						{
							line += source[lineIndex][characterIndex];
						}
					}
					else
					{
						line += source[lineIndex][characterIndex];
					}
				}
				else
				{
					line += source[lineIndex][characterIndex];
				}
			}

			if (line.size() > 0)
			{
				lines.push_back(line);
			}
		}

		return lines;
	}
};