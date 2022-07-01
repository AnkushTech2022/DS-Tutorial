#include<bits/stdc++.h>
using namespace std;
int arraySum(int arr[], int n){
  int i=0, sum=0;
  for(i=0;i<n;i++){
    sum=sum+arr[i];
  }
  return sum;
}
int main(){
  int n;
  cout<<"Enter the size of array: "<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter element in array:"<<endl;
  
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"sum of array element is "<<arraySum(arr, n)<<endl;
  return 0;
  
}
