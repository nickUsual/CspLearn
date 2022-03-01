#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a;

    cin >> a;
    for(auto i:a){
        cout << char('a' + int(i-'a'));
    }
    getchar();
    return 0;
}
