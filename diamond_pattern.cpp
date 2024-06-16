#include <iostream>
using namespace std;

int main()
{
    int i, j,n,count_star;
    //for part 1
    cout<<"enter no of rows:";
    cin>>n;
    for(i=1;i<=n/2;i++)
    {    
    
    	count_star=0;
        for(j=1;j<=(n/2+1)-i;j++)
        {
            cout<<"*";
            count_star++;
        }

        for(j=1;j<=n-2*count_star;j++)
        {
            cout<<" ";
        }

        for(j=1;j<=(n/2+1)-i;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    //for part 2;
     for(i=n/2;i>=1;i--)
    {
       
    	count_star=0;
        for(j=1;j<=(n/2+1)-i;j++)
        {
            cout<<"*";
            count_star++;
        }

        for(j=1;j<=n-2*count_star;j++)
        {
            cout<<" ";
        }

        for(j=1;j<=(n/2+1)-i;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }


}
