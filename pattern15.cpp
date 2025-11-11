#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=n-1;i>=0;i--){
        for(char ch='A';ch<='A'+i;ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print1(n);
    return 0;
}
/*
A B C D E 
A B C D 
A B C 
A B 
A
*/