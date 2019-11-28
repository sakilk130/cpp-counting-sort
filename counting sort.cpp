#include<iostream>
using namespace std;
void counting_sort(int a[],int n,int max)
{
     int count[100]={0},i,j;
     for(i=0;i<n;++i)
      count[a[i]]=count[a[i]]+1;
     cout<<"Sorted ="<<" ";
     for(i=0;i<=max;++i)
      for(j=1;j<=count[i];++j)
        cout<<i<<" ";
}
int main()
{
    int a[100],n,i,max=0;
    while(n!=0){
    cout<<"\nEnter no. of element="<<endl;
    cin>>n;
    cout<<"Enter elements=";
    for(i=0;i<n;++i)
    {
     cin>>a[i];
     if(a[i]>max)
      max=a[i];


    }
    counting_sort(a,n,max);
    }
    return 0;
}
