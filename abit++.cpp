#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,i,c=0;
    string s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        if((s[1] == '+') || (s[n-1]=='+'))
        {
          c++;
        }
        else if((s[1] == '-') ||(s[n-1] == '-')){
                c--;
        }
    }
cout<<c<<endl;
return(0);
}
