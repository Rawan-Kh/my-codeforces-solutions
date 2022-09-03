#include<bits/stdc++.h>

using namespace std;
// int main(){
// int mags ,magnet=0;
// cin>>mags;
// int conn[mags];

// for(int i =0 ;i<mags;i++){
//     cin>>conn[i];
// }
// for(int c =0 ;c<mags;c++){
//     if(conn[c]==conn[c+1]){
//         magnet++;
//         c++;
//     }
//     else if(conn[c]!=conn[c-1] && conn[c]!=conn[c+1]){
//         magnet++;
//     }
// }
// cout<<magnet;
// }

//hinted solution
int a, pas = 1;
string b, c;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a - 1; i++) {
        cin >> c;
        if (b != c) {
            pas++;
            b = c;
        }
    }
    cout << pas;
}
