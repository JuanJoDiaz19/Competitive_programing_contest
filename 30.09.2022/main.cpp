#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    int sum=0;
    int inisum=0;
    cin>>n>>k;
      int arr[n];
    for (int i = 0; i < n; ++i)
    {
      cin>>arr[i];
      inisum=inisum+arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < k; ++i)
    {
      sum=sum+arr[i];
    }
   cout<<abs(inisum-(2*sum))<<endl;


  }
}