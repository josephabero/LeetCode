#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map_nums;
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++) {
            map_nums.insert({ nums[i], i });
        }
            
        for(int i=0 ; i < nums.size(); i++) {
            int complement = target - nums[i];
            cout << i << " " << map_nums.count(complement) << endl;
            if(map_nums.count(complement) && i != map_nums[complement]) {
                result.push_back(i);
                result.push_back(map_nums[complement]);
                break;
            }
        }
        return result;
    }
};