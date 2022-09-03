#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x,move;
    // cout<<"started\n";
    for(int i=0 ;i<5;i++){
        for(int j=0 ;j<5; j++){
            cin>>x;
            if(x==1){
                //at any position it needs 2 moves to reach mid of row or mid of col
                move = abs(2-i) + abs(2-j); 
            }
        }
    }
   cout<<move;
}