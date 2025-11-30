#include <iostream>
using namespace std;

int main()
{
    int i;
    int n;
    cout<<"enter the n:";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}
