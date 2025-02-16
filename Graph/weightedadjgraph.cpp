#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter the Number of Nodes"<<endl;
    cin>>n;
    cout<<"Enter the Number of Edges"<<endl;
    cin>>m;

    vector<vector<pair<int,int>>>adj(n);

    cout<<"Enter the edges in the format of (u v weight)"<<endl;

    for (int i = 0; i < m; i++)
    {
        int u,v,weight;
         cin>>u>>v>>weight;
         adj[u].emplace_back(v,weight);// Add edge u -> v with weight
         adj[v].emplace_back(u,weight);// Add edge v -> u with weight (for undirected graph)
    }
    
    //printing

    for (int i = 0; i < n; i++)//n=node number
    {
        cout<<"node"<<i<<":";
        for (const auto& neighbor:adj[i]){
            
            cout<<"->("<<neighbor.first<<" ,"<<neighbor.second<<" )";
        }
        cout<<endl;
       
    }
    


    return 0;
}