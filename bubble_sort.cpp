#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[20],n;
    cout<<"ENTER NO. OF ELEMENTS: ";
    cin>>n;
    cout<<"ENTER THE ELEMENTS IN THE ARRAY: \n";
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"] = ";
        cin>>a[i];
        cout<<endl;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }

    cout<<"SORTED ARRAY IS: \n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
