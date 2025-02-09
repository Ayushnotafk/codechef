#include <bits/stdc++.h>;
using namespace std;
  
int main(){
int t,b;
cin>>t>>b;
int arr[t];
for (int i = 0; i < t; i++) {
    cin>>arr[i];
}
int c=0;
for (int i = 0; i < t; i++) {
    if(arr[i]>0)
    if(arr[i]>=arr[b-1])c++;
}
cout<<c<<endl;
}