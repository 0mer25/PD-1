#include <stdio.h>

int main() {

    int e;
    printf("Dizinin eleman sayısını giriniz : ");
    scanf("%d" , &e);

    int d[e];

    for(int i = 0 ; i < e ; i++)
    {
        scanf("%d" , &d[i]);
    }
    printf("İlk dizi : ");
    for(int i = 0 ; i < e ; i++)
    {
        printf("%d  " , d[i]);
    }

    int j = e - 1;
    for(int i = 0 ; i < e/2 ; i++)
    {

        int t = d[i];
        d[i] = d[j];
        d[j] = t;

        j--;
    }
    printf("\n");
    printf("Dizinin tersi : ");
    for(int i = 0 ; i < e ; i++)
    {
        printf("%d  " , d[i]);
    }

    return 0;
}
