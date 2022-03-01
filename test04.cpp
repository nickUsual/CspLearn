#include<bits/stdc++.h>
using namespace std;
int a[10][10] ={};
int main(){
    a[0][0] = 1;
    int n;
    scanf("%d",&n);
    for(int i = 1;i < n;i++){
        a[i][0] = 1;
        for(int j = 1;j < i;j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
        a[i][i] = 1;
    }
    for(int i = 0;i < n;i++){
        for(int j = 0 ;j <= i;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
