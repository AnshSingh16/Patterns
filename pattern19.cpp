#include<bits/stdc++.h>
using namespace std;
void print1(int n) {
    int spaces=0;
    for(int i= 0;i<n;i++) {
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        for(int j=1;j<=spaces;j++){
            cout << " ";
        }
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        spaces+=2;
        cout << endl;
    }
}
void print2(int n) {
    int spaces=2*n-2;
    for(int i= 0;i<n;i++) {
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=1;j<=spaces;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        spaces-=2;
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    print1(n);
    print2(n);
    return 0;

}

/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********  

*/