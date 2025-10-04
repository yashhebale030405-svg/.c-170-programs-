/*
 * Program 128: Dijkstra-like simple single-source (weights >=0) using array (inefficient)
 * Concept: graph as adjacency matrix, shortest paths (for learning)
 * Note: small educational example, O(n^2)
 */
#include <stdio.h>
#include <limits.h>

int main() {
    int n; if (scanf("%d",&n)!=1) return 0;
    int g[n][n];
    for (int i=0;i<n;i++) for (int j=0;j<n;j++) scanf("%d",&g[i][j]);
    int src; scanf("%d",&src);
    int dist[n], vis[n];
    for (int i=0;i<n;i++) { dist[i]=INT_MAX; vis[i]=0; }
    dist[src]=0;
    for (int it=0; it<n; ++it) {
        int u=-1, best=INT_MAX;
        for (int i=0;i<n;i++) if(!vis[i] && dist[i]<best) { best=dist[i]; u=i; }
        if (u==-1) break;
        vis[u]=1;
        for (int v=0; v<n; ++v) {
            if (g[u][v]>=0 && dist[u]!=INT_MAX && dist[u]+g[u][v] < dist[v])
                dist[v] = dist[u] + g[u][v];
        }
    }
    for (int i=0;i<n;i++) printf("%d ", dist[i]==INT_MAX ? -1 : dist[i]);
    printf("\n");
    return 0;
}
