#include<iostream>
#include<vector>
using namespace std;

void rearrangeArray(vector<int> nums){
    int size = nums.size();
    vector<int> ans(size, 0);
    int positiveNums = 0;
    int negetiveNums = 1;
    for(int index=0; index<size; index++){
        if(nums[index]>0){
            ans[positiveNums] = nums[index];
            positiveNums+=2;
        }
        else{
            ans[negetiveNums] = nums[index];
            negetiveNums+=2;
        }
    }

    for(int index=0; index<size; index++){
        cout << ans[index] << " ";
    }
}

int main(){

    vector<int> nums = {-3,2,3,-1,2,-1,-2};
    rearrangeArray(nums);

    return 0;
}