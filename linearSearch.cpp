#include<bits/stdc++.h>
using namespace std;
void linearSearch(int arr[], int n, int x){
  for(int i=0;i<n;i++){
    if(x==arr[i]){
      cout<<"Element at index:"<<i<<endl;
    }
  }
  
} 
int main(){
  int n;
  cout<<"Enter size of array:"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter element inside array:"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    int find;
    cout<<"Enter element that need to be fined"<<endl;
    cin>>find;
    linearSearch(arr, n, find);
    
}
