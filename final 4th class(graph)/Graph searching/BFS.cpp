
#include<iostream>
#include<vector>
#include<queue>

using namespace std;


class graph
{

    int vertices;
    vector<vector<int>> adjlist;

public:
    graph(int n)
    {
        vertices = n;
        adjlist.resize(vertices);

    }
    void addedge(int src,int dest)
    {
        adjlist[src].push_back(dest);
        adjlist[dest].push_back(src);
    }
    void print()
    {
        for(int i = 0; i< vertices; i++)
        {

            printf("%d",i);
            for(int vertex:adjlist[i])
            {
                printf("--->%d",vertex);
            }
            printf("\n");

        }

    }

    // bfs searching code
    void BFS(int startvertex)
    {
        vector<bool> visited(vertices,false);
        queue<int> q;
        visited [startvertex] = true;
        q.push(startvertex);


        while(!q.empty())
        {
            int current_vertex = q.front();
            q.pop();
            printf("\nvisited vertex : %d \n",current_vertex);
            for(int vertex:adjlist[current_vertex])
            {
                if(!visited[vertex])
                {
                    visited[vertex] = true;
                    q.push(vertex);
                }

            }

        }


    }


};


int main()
{
    graph graph(4);
    //graph.print();
    graph.addedge(0,1);
    graph.addedge(0,2);
    graph.addedge(0,3);
    graph.addedge(1,3);
    graph.addedge(2,3);
    graph.BFS(0);
    graph.print();

}

