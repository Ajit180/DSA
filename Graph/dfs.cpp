#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void dfs(int start,vector<vector<int>>&adj,vector<bool>&visited){

     stack<int>s;
     s.push(start);
     //visited[start]=true;

     while (!s.empty())
     {
        int node = s.top();
        s.pop();

        if (!visited[node])
        {
            visited[node]=true;
            cout<<node<<"  ";
        }

        //Add all unvisited neighbours to the stack
        for(int neighbour:adj[node]){

            

            if (!visited[neighbour])
            {
                s.push(neighbour);
            }
            
        }

        

     }
     


};

int main(){

    int n,m;
    cout<<"Enter the Number of Nodes:"<<endl;
    cin>>n;
    cout<<"Enter the Number of Edges"<<endl;
    cin>>m;

    vector<vector<int>>adj(n);
    cout<<"Enter the edges of (u,v):"<<endl;

    for (int i = 0; i < n; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool>visited(n,false);
    dfs(0,adj,visited);
    

    return 0;
}


