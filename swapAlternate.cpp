#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

 void swapAleternate(int arr[],int n)
 {
 	
 	for(int i=0;i<n-1;i=i+2)
 	{
 		if(i+1<n)
 		{
 			swap(arr[i],arr[i+1]);
		 }
	 }
 
 }
 
 void printArray(int arr[],int n)
 {
 	for(int i =0;i<n;i++)
 	{
 		cout<<arr[i]<<" ";
	 }
 }

int main()
{
	int arr[6]={1,2,3,4,5,6};
	
	swapAleternate(arr,6);
	printArray(arr,6);
	
	
}
