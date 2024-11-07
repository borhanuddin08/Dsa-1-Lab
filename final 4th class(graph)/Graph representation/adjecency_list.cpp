
#include<iostream>
#include<vector>

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
    graph.print();

}
