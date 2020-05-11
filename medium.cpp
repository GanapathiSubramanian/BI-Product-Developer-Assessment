//using reversal algorithm with O(n) time complexity

#include<iostream>

using namespace std;

//function to reverse the elements within the given limits as start and end
void rvereseArray(int arr[], int start, int end) 
{ 
    while (start < end) { 
        int temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    } 
} 

//wrapper function
void leftRotate(int arr[], int d, int n) 
{ 
    if (d == 0) 
        return; 
    rvereseArray(arr, 0, d );  //reversal from 0 to d
    rvereseArray(arr, d+1, n-1);  // reversal from d+1 to n-1
    rvereseArray(arr, 0, n-1);  //complete array reversal from 0 to n-1
} 

//main function
int main(){
	int n,d;
	cin>>n; //number of elements
	cin>>d; //number of rotations
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	leftRotate(arr,d,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
