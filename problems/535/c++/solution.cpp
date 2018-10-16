// 535. Encode and Decode TinyURL
#include <unordered_map>
#include <string>
#include <functional>
#include <cstddef>

using namespace std;

class Solution
{
	unordered_map<string, string> urls;

	public:
	string encode(string longUrl)
	{
		string shortUrl = to_string(hash<string>{}(longUrl));

		urls[shortUrl] = longUrl;

		return shortUrl;
	}

	string decode(string shortUrl)
	{
		return urls[shortUrl];
	}
};