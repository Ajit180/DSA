#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
    unordered_map< int, list<int> > adj;

    void addEdge(int u , int v, bool direction){

        //direction = 0->unordered graph
        //direction = 1->ordered graph 
        //create an edge from u to v
        adj[u].push_back(v);  // adj[]--> means key    and push_back()--> list value to that key

        if (direction==0)
        {
            adj[v].push_back(u);// adj[]--> means key    and push_back()--> list value to that key
        }
    }

    void printlist(){
       for(auto i:adj){
        cout<<i.first<<" ->";
        for(auto j:i.second){
            cout<<j<<" , ";
        }
        cout<<endl;
       }
    }

};

int main(){

    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of edges "<<endl;
    cin>>m;

    graph g;
    for (int i = 0; i < m; i++)
    {
        int u , v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    //printing the graph

    g.printlist();
    



    return 0;
}