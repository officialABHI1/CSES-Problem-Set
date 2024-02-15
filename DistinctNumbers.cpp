#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;

int main(){
  
  ll n,dist_Count =0 ;
  cin>>n;
  
  ll arr[n+1];   // 2 2 3 3 3 0 
  
  arr[n] = 0; // storing at the end of the array to break the while loop
  
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  
  sort(arr,arr+n);
  
  int i=0,j=i;
  
  while(j<n){ // i =2 , j=2
    
    while(arr[i]==arr[j] && j<=n){
       j++;
    }
    // j = 5
    
    dist_Count++; // 2
    
    //cout<<arr[i]<<" -> "<<(j-i)<<endl;
    
    i=j; // i = 2
  }
  
  cout<<dist_Count<<endl;
  
}
