// 706. Design HashMap
#include <vector>
#include <list>
#include <pair>
#include <iterator>

using namespace std;

#define BUCKET_COUNT 10000

class MyHashMap
{
	vector<list<pair<int, int>>> buckets;

	int getBucket(int key)
	{
		return key % BUCKET_COUNT;
	}

	list<pair<int, int>>::iterator getPairIterator(int bucket, int key)
	{
		list<pair<int, int>>::iterator bucketsBegin = buckets[bucket].begin();
		list<pair<int, int>>::iterator bucketsEnd = buckets[bucket].end();

		for (list<pair<int, int>>::iterator pairIterator = bucketsBegin; pairIterator != bucketsEnd; advance(pairIterator, 1))
		{
			if ((*pairIterator).first == key)
			{
				return pairIterator;
			}
		}

		return buckets[bucket].end();
	}

	public:
	MyHashMap()
	{
		buckets = vector<list<pair<int,int>>>(BUCKET_COUNT, list<pair<int, int>>());
	}

	void put(int key, int value)
	{
		int bucket = getBucket(key);
		list<pair<int, int>>::iterator pairFound = getPairIterator(bucket, key);

		if (pairFound != buckets[bucket].end())
		{
			(*pairFound).second = value;

			return;
		}

		pair<int, int> newPair(key, value);

		buckets[bucket].push_front(newPair);
	}

	int get(int key)
	{
		int bucket = getBucket(key);
		list<pair<int, int>>::iterator pairFound = getPairIterator(bucket, key);

		if (pairFound != buckets[bucket].end())
		{
			return (*pairFound).second;
		}

		return -1;
	}

	void remove(int key)
	{
		int bucket = getBucket(key);
		list<pair<int, int>>::iterator pairFound = getPairIterator(bucket, key);

		if (pairFound != buckets[bucket].end())
		{
			buckets[bucket].erase(pairFound);
		}
	}
};