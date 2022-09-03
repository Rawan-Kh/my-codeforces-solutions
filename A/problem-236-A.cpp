#include<bits/stdc++.h>

using namespace std;
int main(){
int len,check;
string a ;
cin>>a;
sort(a.begin(),a.end());
len = a.size();
for(int i =0 ;i<len;i++){
if(a[i]!=a[i-1]){
    check++;
}
}

if(check %2 == 0){
    cout<<"CHAT WITH HER!";
}
else if(check % 2 != 0){
    cout<<"IGNORE HIM!";
}
//another even and odd way
//  if(check&1)
//         cout<<"CHAT WITH HER!"<<endl;
//     else
//         cout<<"IGNORE HIM!"<<endl;

}
