// 1656. Design an Ordered Stream
#include <vector>
#include <string>

using namespace std;

class OrderedStream
{
	vector<string> stream;
	int currentChunkIndex = 0;

	public:
	OrderedStream(int n) : stream(n, "") {}

	vector<string> insert(int idKey, string value)
	{
		stream[idKey - 1] = value;

		vector<string> chunk;

		for (; currentChunkIndex < stream.size(); ++currentChunkIndex)
		{
			if (stream[currentChunkIndex] == "")
			{
				break;
			}

			chunk.push_back(stream[currentChunkIndex]);
		}

		return chunk;
	}

	private:
};