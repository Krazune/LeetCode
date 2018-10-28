// 722. Remove Comments
#include <vector>
#include <string>

using namespace std;

class Solution
{
	enum State
	{
		CODE_CHARACTER,
		SLASH,
		LINE_COMMENT,
		BLOCK_COMMENT,
		BLOCK_COMMENT_ASTERISK
	};

	public:
	vector<string> removeComments(vector<string>& source)
	{
		vector<string> lines;
		int lineCount = source.size();
		State currentState = CODE_CHARACTER;
		string line;

		for (int lineIndex = 0; lineIndex < lineCount; lineIndex++)
		{
			int characterCount = source[lineIndex].size();

			for (int characterIndex = 0; characterIndex < characterCount; characterIndex++)
			{
				char currentCharacter = source[lineIndex][characterIndex];

				switch (currentState)
				{
					case CODE_CHARACTER:
					if (currentCharacter == '/')
					{
						currentState = SLASH;
					}
					else
					{
						line += currentCharacter;
					}
					break;

					case SLASH:
					if (currentCharacter == '/')
					{
						currentState = LINE_COMMENT;
					}
					else if (currentCharacter == '*')
					{
						currentState = BLOCK_COMMENT;
					}
					else
					{
						line += '/';
						line += currentCharacter;
						currentState = CODE_CHARACTER;
					}
					break;

					case BLOCK_COMMENT:
					if (currentCharacter == '*')
					{
						currentState = BLOCK_COMMENT_ASTERISK;
					}
					break;

					case BLOCK_COMMENT_ASTERISK:
					if (currentCharacter == '/')
					{
						currentState = CODE_CHARACTER;
					}
					else if (currentCharacter != '*')
					{
						currentState = BLOCK_COMMENT;
					}
					break;
				}

				if (currentState == LINE_COMMENT)
				{
					currentState = CODE_CHARACTER;
					break;
				}
			}

			if (currentState == SLASH)
			{
				line += '/';
				currentState = CODE_CHARACTER;
			}

			if (currentState == CODE_CHARACTER && line.size() > 0)
			{
				lines.push_back(line);

				line = "";
			}
		}

		return lines;
	}
};