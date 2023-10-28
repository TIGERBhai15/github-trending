#include<iostream>
using namespace std;
void sort(int a[],int n)
{
    int i,j,t=0;
    for(i=0;i<n;i++)
    {
    for (j=i+1;j<n;j++)
    {
      if (a[i]>a[j])
      {
         t=a[i];
         a[i]=a[j];
         a[j]=t;
      }
    }
    }
}
void kthsmallest(int arr[],int n,int k)
{
    sort(arr,n);
    int i ;
    i= arr[k-1];
    cout<<i;
}
int main()
{
    int arr[20],n,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    kthsmallest(arr,n,k);
}
