#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n, int k){
	
	for (int i = 0; i <n; i+=k)
	{
  int left= i;
  int right = min(i+k-1, n-1);
  while(left < right){
    swap(arr[left++], arr[right--]);

		}
	}
}
int main(){

	int n,k;
	cout<<"enter n"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter array elements "<<endl;
	for (int i = 0; i < n; ++i)
	cin>>arr[i];

	cout<<"enter k"<<endl;
	cin>>k;
	if(k==0){
		cout<<"enter value of k > 0"<<endl;
		cin>>k;
		}

	reverse(arr, n, k);
	for (int i = 0; i < n; ++i)
	cout<<arr[i]<<" ";
	return 0;
}
