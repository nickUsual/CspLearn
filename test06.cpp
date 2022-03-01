#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin >> a >>b;
    int my_size = a.size() < b.size() ? a.size():b.size();
    for(int i = 0;i < my_size;i++ ){
        if(a[i] != b[i]){
            cout << int(a[i] - b[i]) << endl;
            break;
        }
    }
    return 0;
}
