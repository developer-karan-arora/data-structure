#include <bits/stdc++.h>
using namespace std;

double Median(vector<int>& A, vector<int>& B){
	int n = A.size();
	int m = B.size();
	if (n > m) return Median(B, A); // Swapping to make A smaller

	int start = 0;
	int end = n;
	int realmidinmergedarray = (n + m + 1) / 2;

	while (start <= end) {
		int mid = (start + end) / 2;
		int leftAsize = mid;
		int leftBsize = realmidinmergedarray - mid;

		int leftA = (leftAsize > 0) ? A[leftAsize - 1] : INT_MIN; 
		int leftB = (leftBsize > 0) ? B[leftBsize - 1] : INT_MIN;
		int rightA = (leftAsize < n) ? A[leftAsize] : INT_MAX;
		int rightB = (leftBsize < m) ? B[leftBsize] : INT_MAX;

		if (leftA <= rightB and leftB <= rightA) {
			if ((m + n) % 2 == 0){
				return (max(leftA, leftB)+ min(rightA, rightB))/ 2.0;
            }
			return max(leftA, leftB);
		}
		else if (leftA > rightB) end = mid - 1;
		else start = mid + 1;
	}
	return 0.0;
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> v;
    int n1 = nums1.size(),n2 = nums2.size(),n3 = min(n1,n2);
    int i1 = 0,i2 = 0;

    while (i1 < n1 && i2 < n2) {
        if (nums1[i1] <= nums2[i2]) v.push_back(nums1[i1++]);
        else v.push_back(nums2[i2++]);
    }
    while (i1 < n1) v.push_back(nums1[i1++]);
    while (i2 < n2) v.push_back(nums2[i2]);

    int n = v.size();
    float ans = 0;

    if (n%2!=0) ans = v[n/2];
    else ans =( v[n/2] + v[(n-1)/2])/2;
    
    return ans;
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> v;
    int n1 = nums1.size(),n2 = nums2.size(),n3 = min(n1,n2);
    int i1 = 0,i2 = 0;

    for(int i=0;i<nums1.size();i++) v.push_back(nums1[i]);
    for(int i=0;i<nums2.size();i++) v.push_back(nums2[i]);
    sort(v.begin(),v.end());

    int n = v.size();
    float ans = 0;

    if (n%2!=0) ans = v[n/2];
    else ans =( v[n/2] + v[(n-1)/2])/2;
    
    return ans;
}
        
// Driver code
int main(){
	vector<int> arr1 = { -5, 3, 6, 12, 15 };
	vector<int> arr2 = { -12, -10, -6, -3, 4, 10 };
	cout << "Median of the two arrays are" << endl;
	cout << Median(arr1, arr2);
	return 0;
}
