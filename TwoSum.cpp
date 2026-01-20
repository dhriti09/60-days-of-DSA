#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
   unordered_map<int, int> numToIndex; 
   for (int i = 0; i < nums.size(); i++) {
       int complement = target - nums[i];
       if (numToIndex.find(complement) != numToIndex.end()) {
           return {numToIndex[complement], i};
       }
       numToIndex[nums[i]] = i;
   }
   return {};
}
int main() {
   vector<int> nums = {2, 7, 11, 15};
   int target = 9;
   vector<int> result = twoSum(nums, target);
   cout << "[" << result[0] << ", " << result[1] << "]" << endl; 
}