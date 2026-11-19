#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<=n;i++)
        {    if(i%4==0)
        count=count+1;
        }
    cout<<count;
    return 0;
    
}
