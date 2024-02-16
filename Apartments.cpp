#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;

int main(){
  
  ll n,m,k,max_Count =0 ;
  cin>>n>>m>>k;
   
  ll desiredSize[n], apartmentSize[m+1];  
  
  apartmentSize[m] = INT_MAX; // storing at the end of the array to break the while loop
  
  for(int i=0;i<n;i++){
    cin>>desiredSize[i];
  }
  
  for(int i=0;i<m;i++){
    cin>>apartmentSize[i];
  }
  
  sort(desiredSize, desiredSize+n);
  
  sort(apartmentSize,apartmentSize+m);
  
  int i=0,j=0;
  
  while(i<n ||j<m+1){
     
     // case 1: apartmentSize is in the  the desired size range
     
     if(apartmentSize[j]>= desiredSize[i]-k && apartmentSize[j]<=desiredSize[i]+k){
         max_Count++;
         i++;
         j++;
     }
     else if(apartmentSize[j]<desiredSize[i]-k){
       j++;
     }
     else if(desiredSize[i]+k<apartmentSize[j]){
       i++;
     }
  }
  
  cout<<max_Count<<endl;
  
}
