#include <stdio.h>
#include <list>
#include <stdlib.h>

using namespace std;


class Grafo
{
	int V;
	list<int> *adj;

public:
	Grafo(int V);
	void addArest(int v1, int v2);
	int BFS(int raiz);
	int grauDeSaida(int v);
	void clearGraph();
};

Grafo::Grafo(int V){
	this->V = V;
	adj = new list<int>[V];
}

void Grafo::clearGraph() {
	for (int i = 0; i < V; ++i)
	{
		adj[i].clear();
	}

	this->V = 0;
}

void Grafo::addArest(int v1, int v2){
	adj[v1].push_back(v2);
}

int Grafo::grauDeSaida(int v){
	return adj[v].size();
}

int Grafo::BFS(int raiz){
	bool *visitado = new bool[V];

	for (int i = 0; i < V; ++i)
	{
		visitado[i] = false;
	}

	list<int> fila;

	visitado[raiz] = true;

	fila.push_back(raiz);

	list<int>::iterator i;

	while(!fila.empty()){
		raiz = fila.front();
		fila.pop_front();

		for (i = adj[raiz].begin(); i != adj[raiz].end(); ++i)
		{
			if (!visitado[*i]){
				visitado[*i] = true;
				fila.push_back(*i);
			}
		}
	}
	for (int i = 1; i < V; ++i)
	{
		if (!visitado[i]) return 0;
	}

	return 1;
}

int main(int argc, char const *argv[])
{
	int pts, ptc, e, l, count = 1;

	while(1){
		e = 0;
		l = 0;
		scanf("%d %d", &e, &l);
		if (!(e || l)) break;
		e++;
		Grafo graph(e);
		for (int i = 0; i < l; ++i)
		{
			scanf("%d %d", &pts, &ptc);
			graph.addArest(pts, ptc);
		}

		if (graph.BFS(1)) printf("Teste %d\nnormal\n", count);

		else printf("Teste %d\nfalha\n", count);
		
		graph.clearGraph();
		printf("\n");
		count++;
	}
	return 0;
}