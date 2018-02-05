#include<cstdio>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){

        int n;
        scanf("%d",&n);
        int a[n][n];
        int s=0,e=n-1;
        while(s<=e){
            int c=1;
            for(int i=s;i<=e;i++){
                a[i][s] = c;
                c++;
            }
            for(int i=s+1;i<=e;i++){
                a[e][i] = c;
                c++;
            }
            for(int i=e-1;i>=s;i--){
                a[i][e] = c;
                c++;
            }
            for(int i=e-1;i>s;i--){
                a[s][i] = c;
                c++;
            }
            s++;e--;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
}
