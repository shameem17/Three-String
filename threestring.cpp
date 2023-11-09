#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    //test case input
    cin>>t;
    string a,b,c;
    while(t--)
    {
        cin>>a>>b>>c;
        int l=a.length();
        int f=0;
        for(int i=0;i<l;i++)
        {
            if((a[i]==c[i]&&c[i]!=b[i])||(a[i]==c[i]&&c[i]==b[i]))
            {
                f++;
            }
            else if((c[i]==b[i]&&c[i]!=a[i])||(a[i]==c[i]&&c[i]==b[i]))
            {
                f++;
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
            if(f==l)
            {
                cout<<"YES"<<endl;
            }

        }
    }
    //return
    return 0;
}
