#include<iostream>
#include<vector>
using namespace std;

    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;
        for(int i=0; i<size; i++){
             sum = sum + nums[i];
        }

        int totalSum = ((size)*(size+1))/2;
        int ans = totalSum - sum;
        return ans;
    }

int main(){

    vector<int> nums = {3,0,2};
    int finalAns = missingNumber(nums);
    cout << finalAns;

    return 0;
}