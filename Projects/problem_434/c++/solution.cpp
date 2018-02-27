// 434. Number of Segments in a String
#include <string>

class Solution
{
    public:
    int countSegments(std::string input)
    {
        bool inSegment = false;
        int segmentCount = 0;
        
        for (char character : input)
        {
            if (character != ' ')
            {
                if (!inSegment)
                {
                    inSegment = true;
                    segmentCount++;
                }
            }
            else
            {
                inSegment = false;
            }
        }
        
        return segmentCount;
    }
};
