#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[2][3],b[3][2];
    for(int i = 0;i < 2 ;i++){
        for(int j = 0;j < 3;j++){
            scanf("%d",&a[i][j]);
            b[j][i] = a[i][j];
        }
    }
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
