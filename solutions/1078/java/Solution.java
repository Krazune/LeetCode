// 1078. Occurrences After Bigram
import java.util.ArrayList;

class Solution
{
	public String[] findOcurrences(String text, String first, String second)
	{
		String[] words = text.split(" ");
		ArrayList<String> thirdWords = new ArrayList<String>();

		for (int wordIndex = 2; wordIndex < words.length; ++wordIndex)
		{
			if (words[wordIndex - 2].equals(first) && words[wordIndex - 1].equals(second))
			{
				thirdWords.add(words[wordIndex]);
			}
		}

		return thirdWords.toArray(new String[thirdWords.size()]);
	}
}