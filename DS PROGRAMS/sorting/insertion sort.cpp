#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
    int i,j,k,temp,m;
    for(i=0;i<n;i++)
    {
        m=a[i];
        j=i;
        while(a[j-1]>m && j>0)
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=m;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int i,a[20],n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    insertionsort(a,n);
    return 0;
}
