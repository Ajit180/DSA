#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void bfstraversal(int start, vector<vector<int>>&adj, vector<bool>&visited){

    queue<int>q;
    q.push(start);
    visited[start]=true;

    while (!q.empty())
    {
        int node =q.front();
        q.pop();
        cout<<node<<"  ";

        for (int neighbour:adj[node])
        {
            if (!visited[neighbour])//jab tak visited neighbour false
            //hai tab tak yai conditions chalega jaise hi true huwa to if 
            //block execute nahi hoga  mtlb ! matlb false to false = false 
            //hoga tab exceute hoga
            {
                visited[neighbour]=true;
                q.push(neighbour);
            }
            
        }
        
    }
    
}

int main(){

     int n,m;
    cout<<"Enter the Number of nodes "<<endl;
    cin>>n;
    cout<<"Enter the Number of Edges"<<endl;
    cin>>m;

    vector<vector<int>>adj(n);
    cout<<"Enter the edge of (u,v):"<<endl;

    for (int i = 0; i <m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);//asuming the undirected graph

    }
    
    vector<bool>visited(n,false);
    cout<<"The BFS Traversal from the node "<<endl;
    bfstraversal(0,adj,visited);

    return 0;
}