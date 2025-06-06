#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <double> bucketsort(const vector<double>& nums, int n){
	vector<vector<double>> buckets(n);
	vector<double>sortednums;
	int range = 1;
	double min = 97.0;
	double max = 99.0; 
	for(double num:nums){
		int index = (num-min)/range;
		buckets[index].push_back(num);
	}
	for(auto& bucket:buckets){
		sort(bucket.begin(), bucket.end());
		sortednums.insert(sortednums.end(), bucket.begin(), bucket.end());
		
	}
	return sortednums;
}
int main(){
	vector<double>nums = {98.6, 98.0, 97.1, 99.0, 98.9, 97.8, 98.5, 98.2, 98.0, 97.1}; 
	vector<double>sortednums = bucketsort(nums,3);
	for (double num : sortednums) {
        cout << num << " ";
    }
}
