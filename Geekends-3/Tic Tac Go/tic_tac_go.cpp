#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int c[9]={0};
        int cnt=0,f=1;
        
        for(int i=0;i<9;i++){
            int b;
            cin>>b;
            if(i%2==0)
                c[b-1]=1;
            else
                c[b-1]=-1;
            int s1=c[2]+c[4]+c[6];
            int s2=c[0]+c[4]+c[8];
            int s3=c[0]+c[1]+c[2];
            int s4=c[3]+c[4]+c[5];
            int s5=c[6]+c[7]+c[8];
            int s6=c[0]+c[3]+c[6];
            int s7=c[1]+c[4]+c[7];
            int s8=c[2]+c[5]+c[8];
            if(s1==3 || s2==3 || s3==3 || s4==3 || s5==3 || s6==3 || s7==3 || s8==3){
                if(f){
                    cnt=i+1;
                    f=0;
                }
            }
            else if(s1==-3 || s2==-3 || s3==-3 || s4==-3 || s5==-3 || s6==-3 || s7==-3 || s8==-3){
                if(f){
                    cnt=i+1;
                    f=0;
                }
            }
            
        }
        cout<<cnt<<" ";
        
    }
    return 0;
}
