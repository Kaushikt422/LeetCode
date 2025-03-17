#include <unordered_map>
#include <vector>

class Solution {
public:
    bool divideArray(std::vector<int>& nums) {
        std::unordered_map<int, int> freq;

        // Count occurrences of each number
        for (int num : nums) {
            freq[num]++;
        }

        // Check if every number has an even count
        for (const  pair<const int,int>  key : freq) {
            if (key.second % 2 != 0) {
                return false;
            }
        }

        return true;
    }
};
