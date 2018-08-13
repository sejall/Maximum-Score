#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],c,d=0,sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                 c=a[0][j];
                if (a[j]<a[0])
                    {a[j]=a[0];
                    c=a[j];
                    }


            }
            if(c>d)
            {sum=sum+c;
            d=c;
            }
            else
            {
                sum=0;
                break;
            }
        }
        if(sum>0)
            cout<<sum<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
