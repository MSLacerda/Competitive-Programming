#include <bits/stdc++.h>

#define MEM(a, b) memset(a, (b), sizeof(a))



using namespace std;



int main() {
    int n,q,temp1, temp2;
    vector<vector<int>> graph; 


    scanf("%d %d", &n, &q);

    for (int i = 0; i < n; i++) graph.push_back(i);


    for(int i = 0; i < n-1; i++) {
        scanf("%d %d", &temp1, &temp2);
        graph[temp1].push(temp2);
    }

}