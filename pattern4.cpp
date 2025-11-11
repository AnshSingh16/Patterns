#include<bits/stdc++.h>
using namespace std;
void print1(int n) {
    for(int i= 1;i<n+1;i++) {
        for(int j=0;j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    
    }
}
int main() {
    int n;
    cin >> n;
    print1(n);
    return 0;

}
/* 
   1
   2 2
   3 3 3
   4 4 4 4
   5 5 5 5 5
   */
    