//Program to print alphabetic pattern.

#include<iostream>

using namespace std;

int main()
{

    int n;

    cout<<"Rows=";
    cin>>n;

    for( int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<((char)(64+i));
        }
        cout<<endl;
    }
}
