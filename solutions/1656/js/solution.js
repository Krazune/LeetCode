// 1656. Design an Ordered Stream
var OrderedStream = function(n)
{
	this.stream = new Array(n).fill("");
	this.currentChunkIndex = 0;
};

OrderedStream.prototype.insert = function(idKey, value)
{
	this.stream[idKey - 1] = value;

	let chunk = new Array();

	for (; this.currentChunkIndex < this.stream.length; ++this.currentChunkIndex)
	{
		if (this.stream[this.currentChunkIndex] == "")
		{
			break;
		}

		chunk.push(this.stream[this.currentChunkIndex]);
	}

	return chunk;
};