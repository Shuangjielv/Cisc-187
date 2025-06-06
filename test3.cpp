#include <iostream>
#include <vector>
#include <limits>
using namespace std;
int findmaxprofit(const vector<int>& nums){
	int max=numeric_limits<int>::min();
    int min=numeric_limits<int>::max();
    int maxprofit = 0;
    for(int num:nums){
    	if(num<min){
    		min = num;
		}
		if(num>max){
			max = num;
		}
	}
	maxprofit = max-min;
	return maxprofit;
}
int main(){
	vector<int> nums = {10, 7, 5, 8, 11, 2, 6};
	cout<<findmaxprofit(nums)<<endl;
}
