#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <list>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%lld", &a)
#define sc2(a, b) scanf("%lld %lld", &a, &b)
#define LLI long long int
#define ULL unsigned long int;

using namespace std;

class Graph{
	int V;
	list<int> *adj;
public:
	Graph(int V);
	void addAresta(int s, int c);
	int BFS(int raiz);
};


Graph::Graph(int V) {
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addAresta(int s, int c){
	adj[s].push_back(c);
}

int Graph::BFS(int raiz){
	int count = 0;
	bool *visitado = new bool[V];
	for (int i = 0; i < V; ++i) visitado[i] = false;

		list<int> fila;
	visitado[raiz] = true;
	fila.push_back(raiz);

	list<int>::iterator i;
	while(!fila.empty()){
		raiz = fila.front();
		fila.pop_front();

		for (i = adj[raiz].begin(); i != adj[raiz].end(); ++i)
		{
			count++;
			if(!visitado[*i]){
				visitado[*i] = true;
				fila.push_back(*i);
			}
		}
	}

	return count;
}


int main(int argc, char const *argv[])
{
	int n,raiz,vert, arest, s,c;
	scanf("%d", &n);

	fr(i, 0, n){
		scanf("%d", &raiz);
		scanf("%d %d", &vert, &arest);
		Graph g(vert);
		fr(j,0,arest){
			scanf("%d %d", &s, &c);
			g.addAresta(s, c);
		}
		printf("%d\n", g.BFS(raiz)*2);
	}


	return 0;
}


