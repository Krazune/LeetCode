// 208. Implement Trie (Prefix Tree)
#include <unordered_map>
#include <cstddef>
#include <string>

using namespace std;

struct TrieNode
{
	unordered_map<char, TrieNode*> nodes;
	bool isWord;

	TrieNode(bool isWord) : isWord(isWord) { }
};

class Trie
{
	TrieNode* root;

	public:
	Trie()
	{
		root = new TrieNode(false);
	}

	void insert(string word)
	{
		int wordSize = word.size();
		TrieNode* currentNode = root;

		for (int characterIndex = 0; characterIndex < wordSize; characterIndex++)
		{
			char character = word[characterIndex];
			TrieNode* nodeFound = currentNode->nodes[character];

			if (nodeFound != NULL)
			{
				currentNode = nodeFound;
			}
			else
			{
				for (; characterIndex < wordSize; characterIndex++)
				{
					character = word[characterIndex];

					TrieNode* newNode = new TrieNode(false);

					currentNode->nodes[character] = newNode;

					currentNode = newNode;
				}
			}
		}

		currentNode->isWord = true;
	}

	bool search(string word)
	{
		int wordSize = word.size();
		TrieNode* currentNode = root;

		for (int characterIndex = 0; characterIndex < wordSize; characterIndex++)
		{
			char character = word[characterIndex];
			TrieNode* nodeFound = currentNode->nodes[character];

			if (nodeFound != NULL)
			{
				currentNode = nodeFound;
			}
			else
			{
				return false;
			}
		}

		return currentNode->isWord;
	}

	bool startsWith(string prefix)
	{
		int prefixSize = prefix.size();
		TrieNode* currentNode = root;

		for (int characterIndex = 0; characterIndex < prefixSize; characterIndex++)
		{
			char character = prefix[characterIndex];
			TrieNode* nodeFound = currentNode->nodes[character];

			if (nodeFound != NULL)
			{
				currentNode = nodeFound;
			}
			else
			{
				return false;
			}
		}

		return true;
	}
};