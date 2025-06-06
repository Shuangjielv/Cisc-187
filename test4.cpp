#include <iostream>
#include <vector>
using namespace std;
int findmaxproduct(const vector<int>& nums){
	int max1=0,max2=0,min1=0,min2=0,maxproduct=0;
	for(int num:nums){
		if(num>max1){
			max2 = max1;
			max1 = num;
		}else if(num>max2){
			max2 = num;
		}
		if(num<min1){
			min2 = min1;
			min1 = num;
		}else if(num<min2){
			min2 = num;
		}
	}
	if(max1*max2 > min1*min2){
		maxproduct = max1*max2;
	}else{
		maxproduct = min1*min2;
	}
	return maxproduct;
}
int main(){
	vector<int> nums = {5, -10, -6, 9, 4};
	cout<<findmaxproduct(nums)<<endl;
}
