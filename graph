#include <iostream>
#include <list>
using namespace std;

class Graph
{
private:
    int V;
    list<int> *adj;
public:
    Graph(int v);
    void BFS(int i);
    void DFS(int i);
    void add_edege(int v, int w);
};
Graph::Graph(int v)
{
    V = v;
    adj = new list<int>[v];
}
void Graph::BFS(int s)
{
    bool *visited = new bool[V];
    for(int i = 0;i<V;i++)
    {
        visited[i] = false;
    }
    list<int> que;
    visited[s] = true;
    que.push_back(s);
    list <int>:: iterator i;
    while(!que.empty())
    {
        s = que.front();
        cout << s << "-";
        que.pop_front();

        for(i = adj[s].begin();i!=adj[s].end();++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                que.push_back(*i);
            }
        }

    }
}
void Graph::DFS(int s)
{
    bool *visited = new bool[V];
    for(int i = 0;i<V;i++)
    {
        visited[i] = false;
    }
    list <int> stc;
    visited[s] = true;
    stc.push_back(s);
    list <int>::iterator i;
    while(!stc.empty())
    {
        s = stc.back();
        cout << s << "-";
        stc.pop_back();
        for(i = adj[s].begin(); i!=adj[s].end();++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                stc.push_back(*i);
            }
        }
    }

}
void Graph::add_edege(int v,int w)
{
    adj[v].push_back(w);
}
int main(){
  Graph g(4);
  g.add_edege(0, 1);
    g.add_edege(0, 2);
  g.add_edege(1, 2);
  g.add_edege(2, 0);
  g.add_edege(2, 3);
    g.add_edege(3, 3);
    g.BFS(2);
    cout << endl;
    g.DFS(2);


}
