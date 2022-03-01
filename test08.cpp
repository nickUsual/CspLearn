#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[21];
    a[0] = 0,a[1] = 1;
    for(int i = 2; i < 21;i++){
        a[i] = a[i-1] + a[i-2];
    }
    for(int i = 1;i < 21;i++){
        cout << a[i] << endl;
    }
    return 0;
}
