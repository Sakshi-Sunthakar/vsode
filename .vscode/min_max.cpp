#include<iostream>
#include<climits>

using namespace std;

int128_t mini=int_MIN,maxi=0,min1,max1,j,i;

void min_max(unsigned long long  int arr[]);

int main()
{
    
    unsigned long long int arr[5];
    
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    min_max(arr);

    return 0;
}
void min_max(unsigned long  long int arr[]) 
{
    for(int i=0;i<5;i++)
    {
        int min1=0,max1=0;

        for(int j=0;j<5;j++)
        {
            
            if(arr[i]==arr[j])
            {
        
                continue;
            }
            max1=max1+arr[j];
            min1=min1+arr[j];
        
        }
    
        if(max1>maxi)
        {
            maxi=max1;
        }
        
        if(mini>min1)
        {
            mini=min1;
        }
    }   
    
    cout<<mini<<" "<<maxi;

}














