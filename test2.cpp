#include <iostream>
#include <vector>
using namespace std;
int findnumber( const vector<int>& nums, int n){
	int sum = n*(n+1)/2;
	int sumarray = 0;
	int number = 0;
	for(int num:nums){
		sumarray = sumarray + num;
	}
	number = sum - sumarray;
	return number;
} 
int main(){
	vector<int> nums = {0, 1, 2, 3, 5};
	cout<<findnumber(nums,nums.size());
}
