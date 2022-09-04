#include<bits/stdc++.h>

using namespace std;
int main(){
    int n ,s=0 , d=0,turn=1,big;
    cin>>n;
    int cards[n];
    for(int i=0 ;i<n;i++){
        cin>>cards[i];
    }
// the perfect hinted solution
    int i=0 ,  j=n-1 ;
    while(i<=j)
	{
		if(turn%2!=0)
		{
			big=cards[i]>cards[j]?cards[i++]:cards[j--] ;
			s+=big;
			turn++ ;
		}
		else
		{
			big=cards[i]>cards[j]?cards[i++]:cards[j--] ;
			d+=big;
			turn++ ;
		}
	}

// wrong due missunderstand
    // for(int i=1 ;i<=n;i++){
    // if(cards[i-1]<cards[n-i]){
    //         s += cards[n-i];
    //         cards[n-i] =0;
    //         d+= cards[i-1];
    //         cards[i-1]=0;
    // }else{
    //     s+=cards[i-1];
    //     cards[i-1]=0;
    //     d+=cards[n-i];
    //     cards[n-i]=0;

    // }
    // }
    cout<<s<<" "<<d;
}