#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    int space=2*n-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        
        for(int j=0;j<space;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        space-=2;
        cout << endl;
    }
}
void print2(int n){
    for(int i=1;i<n+1;i++){
        int space=2*i;
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        
        for(int j=0;j<space;j++){
            cout << " ";
        }
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        space+=2;
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print1(n);
    print2(n);
    return 0;
}

/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/