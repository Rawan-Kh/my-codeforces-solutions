#include<bits/stdc++.h>

using namespace std;
int main(){
    int probs ,v,t,d,solved=0;
    // cout<<"start\n";
    cin>>probs;
    for(int i=0 ;i<probs;i++){
        cin>>v>>t>>d;
        // if((v==t==1)||(v==d==1)||(d==t==1)) wrong
         if (v + d + t >= 2)
        {
            solved++;
        }
    }
    cout<<solved;
}
