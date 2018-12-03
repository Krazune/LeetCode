// 705. Design HashSet
#include <vector>
#include <list>
#include <iterator>

using namespace std;

#define BUCKET_COUNT 10000

class MyHashSet
{
	vector<list<int>> buckets;

	int getBucket(int key)
	{
		return key % BUCKET_COUNT;
	}

	list<int>::iterator getValueIterator(int bucket, int key)
	{
		list<int>::iterator bucketsBegin = buckets[bucket].begin();
		list<int>::iterator bucketsEnd = buckets[bucket].end();

		for (list<int>::iterator valueIterator = bucketsBegin; valueIterator != bucketsEnd; advance(valueIterator, 1))
		{
			if ((*valueIterator) == key)
			{
				return valueIterator;
			}
		}

		return buckets[bucket].end();
	}

	public:
	MyHashSet()
	{
		buckets = vector<list<int>>(BUCKET_COUNT, list<int>());
	}

	void add(int key)
	{
		int bucket = getBucket(key);
		list<int>::iterator valueFound = getValueIterator(bucket, key);

		if (valueFound != buckets[bucket].end())
		{
			*valueFound = key;

			return;
		}

		buckets[bucket].push_front(key);
	}

	void remove(int key)
	{
		int bucket = getBucket(key);
		list<int>::iterator valueFound = getValueIterator(bucket, key);

		if (valueFound != buckets[bucket].end())
		{
			buckets[bucket].erase(valueFound);
		}
	}

	bool contains(int key)
	{
		int bucket = getBucket(key);
		list<int>::iterator valueFound = getValueIterator(bucket, key);

		return valueFound != buckets[bucket].end();
	}
};