#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int findlongestlength(const vector<int>& nums){
	int longestlength = 0;
	unordered_set<int> numberSet(nums.begin(), nums.end());
	int beginnum = 0;
	for(int num:nums){
		if(numberSet.find(num-1) == numberSet.end()){
			beginnum = num;
			int length = 1;
			while(numberSet.find(beginnum+1) != numberSet.end()){
				length++;
				beginnum++;
			}
			if(longestlength < length){
				longestlength = length;
			}
		}
			
		}
		return longestlength;
	}

int main(){
	vector<int>nums = {19, 13, 15, 12, 18, 14, 17, 11}; 
	cout<<findlongestlength(nums);
}
