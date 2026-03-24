#include<bits/stdc++.h>
using namespace std;
void targetSum(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum > target)
        {
            right--;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            cout << arr[left] << " and " << arr[right] << endl;
            left++;
            right--;
        }
    }
}
int main() {
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int T;
	cin>>T;

    sort(arr,arr+n);

	targetSum(arr,n,T);
	return 0;
}


// Sample Input
// 5
// 1
// 3
// 4
// 2
// 5
// 5
// Sample Output
// 1 and 4
// 2 and 3