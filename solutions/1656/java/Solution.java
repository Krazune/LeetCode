// 1656. Design an Ordered Stream
import java.util.List;
import java.util.ArrayList;

class OrderedStream
{
	private ArrayList<String> stream;
	private int currentChunkIndex = 0;

	public OrderedStream(int n)
	{
		stream = new ArrayList<String>();

		for (int i = 0; i < n; ++i)
		{
			stream.add("");
		}
	}

	public List<String> insert(int idKey, String value)
	{
		stream.set(idKey - 1, value);

		List<String> chunk = new ArrayList<String>();

		for (; currentChunkIndex < stream.size(); ++currentChunkIndex)
		{
			if (stream.get(currentChunkIndex) == "")
			{
				break;
			}

			chunk.add(stream.get(currentChunkIndex));
		}

		return chunk;
	}
}