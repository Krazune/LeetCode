// 297. Serialize and Deserialize Binary Tree
#include <string>
#include <queue>
#include <vector>
#include <cstddef>

using namespace std;

class Codec
{
	public:
	string serialize(TreeNode* root)
	{
		if (root == NULL)
		{
			return "";
		}

		queue<TreeNode*> subtreesLeft;
		vector<TreeNode*> nodes;

		subtreesLeft.push(root);

		while (!subtreesLeft.empty())
		{
			TreeNode* currentNode = subtreesLeft.front();

			subtreesLeft.pop();

			nodes.push_back(currentNode);

			if (currentNode != NULL)
			{
				subtreesLeft.push(currentNode->left);
				subtreesLeft.push(currentNode->right);
			}
		}

		int lastNodeIndex = nodes.size() - 1;

		for (; lastNodeIndex > 0; lastNodeIndex--)
		{
			if (nodes[lastNodeIndex] != NULL)
			{
				break;
			}
		}

		string serializedTree;

		serializedTree += to_string(nodes[0]->val);

		for (int valueIndex = 1; valueIndex <= lastNodeIndex; valueIndex++)
		{
			string nodeValue;

			if (nodes[valueIndex] == NULL)
			{
				nodeValue = 'n';
			}
			else
			{
				nodeValue = to_string(nodes[valueIndex]->val);
			}

			serializedTree += ',' + nodeValue;
		}

		return serializedTree;
	}

	TreeNode* deserialize(string data)
	{
		if (data == "")
		{
			return NULL;
		}

		vector<TreeNode*> nodes;
		string currentNodeValue;

		for (int dataIndex = 0; dataIndex < data.size(); dataIndex++)
		{
			if (data[dataIndex] == ',')
			{
				TreeNode* newNode = NULL;

				if (currentNodeValue != "n")
				{
					newNode = new TreeNode(stoi(currentNodeValue));
				}

				nodes.push_back(newNode);
				currentNodeValue = "";
			}
			else
			{
				currentNodeValue += data[dataIndex];
			}
		}

		nodes.push_back(new TreeNode(stoi(currentNodeValue)));

		TreeNode* root = nodes[0];
		queue<TreeNode*> parents;
		bool placingLeftNode = true;

		parents.push(root);

		for (int nodeIndex = 1; nodeIndex < nodes.size(); nodeIndex++)
		{
			TreeNode* currentParent = parents.front();
			TreeNode* currentNode = nodes[nodeIndex];

			if (placingLeftNode)
			{
				if (currentNode != NULL)
				{
					currentParent->left = currentNode;
					parents.push(currentNode);
				}
			}
			else
			{
				parents.pop();

				if (currentNode != NULL)
				{
					currentParent->right = currentNode;
					parents.push(currentNode);
				}
			}

			placingLeftNode = !placingLeftNode;
		}

		return root;
	}
};