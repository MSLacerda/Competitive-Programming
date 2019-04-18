#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int id_1, id_2, qtd_1, qtd_2;
    float vl_1, vl_2;

    scanf("%d %d %f", &id_1, &qtd_1, &vl_1);  
    scanf("%d %d %f", &id_2, &qtd_2, &vl_2);  

    printf("VALOR A PAGAR: R$ %.2f\n", (qtd_1*vl_1)+(qtd_2*vl_2));
}
