#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<=n;i++)
            if(i%3==0 || i%5==0)
        cout<<i<<endl;
        
    return 0;
    
}
