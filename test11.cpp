#include<bits/stdc++.h>
using namespace std;
bool greater(string a,string b){
    int i,my_size = a.size() > b.size() ? a.size():b.size();
    for( i = 0;i < my_size;i++){
        if(a[i] > b[i]) return true;
        if(a[i] < b[i]) return false;
    }
    if(a.size() > b.size()) return true;
    else return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a,b,c;
    cin >> a >> b >> c;
    string temp;
    if(greater(a,b)) temp = a;
    else temp = b;
    if(greater(c,temp)) temp =c;
    cout << temp << endl;
    return 0;
}
