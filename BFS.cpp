#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,vector<int>>v;
    int n;
    cin>>n;
     int s,z;
    cin>>s>>z;
      int x,y;
    for(int i=0;i<n;i++)
    {
         cin>>x>>y;
         v[x].push_back(y);
    }

    vector<bool>used(n);
    vector<int>p(n),d(n);
    queue<int>q;
    q.push(s);
    used[s]=true;
    p[s]=-1;
    while(!q.empty())
    {
        int v1=q.front();
        q.pop();
        for(int u:v[v1])
        {
            if(!used[u])
            {
                used[u]=true;
                q.push(u);
                d[u]=d[v1]+1;
                p[u]=v1;
            }
        }
    }
    if (!used[z]) {
    cout << "No path!";
} else {
    vector<int> path;
    for (int v = z; v != -1; v = p[v])
        path.push_back(v);

    reverse(path.begin(), path.end());
    cout << "Path: ";
    for (int v : path)
        cout << v << " ";
}
   return 0;
}
