#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int>adjacent[200005];
bool visited[200005];
bool blocked[200005];
int sz;
void dfs(int u)
{
    visited[u] = true;
    sz++;
    for(int i = 0 ; i < adjacent[u].size() ; i++)
    {
        int v = adjacent[u][i];
        if(!visited[v] && blocked[v] == 0)
        {
            dfs(v);
        }
        else if(blocked[v])
        {
            sz++;
        }
    }
}
int main(){
    int n;
    cout<<"enter no of nodes\n";
    cin>>n;
    cout<<"enter adjacent vertices\n";
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int u,v;
        cin>>u>>v;
        adjacent[u].push_back(v);
        adjacent[v].push_back(u);
    }
    cout<<"blocked or not\n";
    for(int i = 1 ; i <= n ; i++)
    {
        int u;
        cin>>u;
        blocked[i] = u;
    }
    int ans = 1;
    cout<<"max=";
    for(int i = 1 ; i <= n ; i++)
    {
        if(visited[i] == false && blocked[i] == 0)
        {
            sz = 0;
            dfs(i);
            ans = max(ans,sz);
        }
    }
    cout<<ans<<endl;
    return 0;
}
