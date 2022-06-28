#include<bits/stdc++.h>
using namespace std;
void insertAtBegin(int arr[], int n, int element){
  for(int i=n;i>=0;i--){
    arr[i+1]=arr[i];
  }
  arr[0]=element;
  n=n+1;
  cout<<"After inserting new element at the begin"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int n, element;
  cout<<"Enter size of array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter element in array"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Before inserting array is"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  cout<<"enter new element"<<endl;
  cin>>element;
  insertAtBegin(arr, n, element);
}
