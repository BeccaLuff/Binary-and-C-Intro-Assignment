#include <stdio.h>
#include<stdlib.h>

int main() {
    
    int n;
    int i = 0;
    double* list;
    int seed; 
    int rando; 
    double mean = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter another integer: ");
    scanf("%d", &seed);

    list = (double*)malloc(n * sizeof(double));
    if (list == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    srand(seed);

    while(i<n){
      rando = rand();
      printf("%d \n", rando);
      list[i] = rando;
      mean +=list[i]/n;
      i++;
    }
    
    free(list);
    printf("The mean is: %f \n",mean);
    return 0;
}
