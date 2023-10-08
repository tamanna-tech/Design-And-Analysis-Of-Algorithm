#include <stdio.h>
#include <limits.h>

int minimumDist(int dist[], int Tset[], int n) {
    int min = INT_MAX, index,i;      
    for(i = 0; i < n; i++) {
        if(Tset[i] == 0 && dist[i] <= min) {
            min = dist[i];
            index = i;
        }
    }
    return index;
}

void Dijkstra(int graph[6][6], int src) {
    int dist[6];                        
    int Tset[6];
    int i,j;
    for( i = 0; i < 6; i++) {
        dist[i] = INT_MAX;
        Tset[i] = 0;    
    }

    dist[src] = 0;

    for(i = 0; i < 6; i++) {
        int m = minimumDist(dist, Tset, 6);
        Tset[m] = 1;
        for(j = 0; j < 6; j++) {
            if(!Tset[j] && graph[m][j] && dist[m] != INT_MAX && dist[m] + graph[m][j] < dist[j])
                dist[j] = dist[m] + graph[m][j];
        }
    }

    printf("Vertex\t\tDistance from source\n");
 

   for(i = 0; i < 6; i++) {
        char str = 'A' + i;
        printf("%c\t\t\t%d\n", str, dist[i]);
    }
}

int main() {
    int graph[6][6]={{0,10,20,0,0,0},{0,0,0,50,10,0},{0,0,0,20,33,0},
                     {0,0,0,0,20,2},{0,0,0,0,0,1},{0,0,0,0,0,0}};
    Dijkstra(graph, 0);
    printf("\n Tamanna kc");
    printf("\n Roll number -34 -");
    return 0;                        
}


