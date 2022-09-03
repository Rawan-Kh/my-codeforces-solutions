#include<bits/stdc++.h>

using namespace std;
int main(){
int low=0,up=0;
string a ;
cin>>a;

//make it lower case 'from A to a 32 letter to reach' 
//small letters start from 92 in Ascii
for(int i =0; i<a.size();i++){
    if (a[i]< 92){
        up++;
    }
    else if (a[i]>= 92){
        low++;
    }
}
//////
    if(up <= low){
       for(int i =0; i<a.size();i++){
    if (a[i]< 92){
        a[i]+= 32;
    }
    }
    }
    else if(low < up){
        for(int i =0; i<a.size();i++){
         if (a[i]>= 92){
        a[i]-= 32;
    }
    }
    }
  cout<<a;
}
