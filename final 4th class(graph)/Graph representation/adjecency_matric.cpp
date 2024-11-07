#include<stdio.h>
#include<stdlib.h>
class graph
{

    int adjmat[100][100];
    int nvertices;
    bool directed;

public:
    graph(int n,bool dir)
    {
        nvertices = n;
        directed = dir;
        for(int i= 0; i < nvertices; i++)
        {
            for(int j = 0; j < nvertices; j++)
            {
                adjmat[i][j] = 0;
            }
        }
    }


    void addedge(int v,int u)
    {
        adjmat[v][u] = 1;
        if(!directed)
        {
            adjmat[u][v]=1;
        }

    }

    void print()
    {
        for(int i = 0; i<nvertices; i++)
        {
            for(int j = 0; j<nvertices; j++)
            {
                printf("%d ",adjmat[i][j]);
            }
            printf("\n");
        }


    }


};

int main()
{
    graph graph(4,false);
   //graph.print();
   graph.addedge(0,1);
   graph.addedge(0,2);
   graph.addedge(0,3);
   graph.addedge(1,3);
   graph.addedge(2,3);
    graph.print();




}
