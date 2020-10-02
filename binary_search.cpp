#include<bits/stdc++.h>

using namespace std;
int binarysearch(int a[],int n,int x);

int main()
{
    int a[]={2,5,7,8,12,34,56};

    int ind= binarysearch(a,7,12);
    if(ind==-1)
        cout<<"ELEMENT NOT FOUND!!";
    else
        cout<<"ELEMENT FOUND AT INDEX: "<<ind;
    return 0;
}

int binarysearch(int a[],int n,int x)
{
    int beg=0,last=n-1,ind=-1;
    while(ind==-1)
    {
        int mid=(beg+last)/2;
        if(a[mid]==x)
            ind=mid;
        else if(a[mid]>x)
        {
            last=mid-1;
        }
        else
            beg=mid+1;
    }
    return ind;
}
