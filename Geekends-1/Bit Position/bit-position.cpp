#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long ans = n^m;
        int c = 1;
        while(ans%2){
            ans = ans >> 1;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}

