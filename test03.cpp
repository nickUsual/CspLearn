#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10],temp;
    for(int i =0;i < 10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i < 9;i++){
        if(a[i] > a[9]){
            for(int j = i;j<9;j++){
                 temp = a[j];
                 a[j] = a[9];
                 a[9] = temp;

            }
            break;
        }
    }
    for(int i = 0;i < 10;i++){
        printf("%d\n",a[i]);
    }
    getchar();
    return 0;
}
