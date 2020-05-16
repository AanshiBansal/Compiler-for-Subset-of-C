#include<stdio.h>

void main()
{
    int i, j, k = 1;
    for(i = 0 ; i < 3 ; i++) {
        for(j = 0 ; j < 2 ; j++) {
            k++;
        }
    }
    printf("%d", k);
}