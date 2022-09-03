#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
// cout<<"started";
cin>>n;
int a[n];
for(int i=0 ;i <n;i++){
    cin>>a[i];
}
// int n = sizeof(arr) / sizeof(arr[0]) = length of array; 
/*Here we take two parameters, the beginning of the
array and the length n upto which we want the array to
be sorted*/
sort(a ,a+ n);
for(int s=0;s<n;s++){
cout<<a[s]<<" ";
}
}