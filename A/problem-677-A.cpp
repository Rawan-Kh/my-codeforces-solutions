#include<bits/stdc++.h>

using namespace std;

int main(){
    int i, n , h, person, w=0;
    cin>> n >>h ;

    for(i=0 ; i < n; i++){
     cin>>person;
     if(person < h){
        w ++;
     }else{
         w +=2;
     }
    }
    cout<<w;
}
