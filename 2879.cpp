#include <bits/stdc++.h>


using namespace std;


int main() {

    int n,temp, count; 
    scanf("%d", &n);

    count = 0; 
    temp = 0;
    
    for(int i = 0; i < n; i++)
    {   

        scanf("%d", &temp);
        if (temp != 1) count++;
    }
    
    printf ("%d\n", count);
}

