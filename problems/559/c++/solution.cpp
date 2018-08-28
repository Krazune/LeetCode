// 559. Maximum Depth of N-ary Tree
#include <cstddef>
#include <queue>

using namespace std;

class Solution
{
	public:
	int maxDepth(Node* root)
	{
		if (root == NULL)
		{
			return 0;
		}

		queue<Node*> nodes;
		int depth = 0;

		nodes.push(root);

		while (!nodes.empty())
		{
			depth++;

			int levelNodeCount = nodes.size();

			for (int levelNodeIndex = 0; levelNodeIndex < levelNodeCount; levelNodeIndex++)
			{
				Node* currentNode = nodes.front();

				nodes.pop();

				for (Node* currentChildren : currentNode->children)
				{
					nodes.push(currentChildren);
				}
			}
		}

		return depth;
	}
};