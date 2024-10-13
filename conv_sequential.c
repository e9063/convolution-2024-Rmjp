#include<stdio.h>
#include<stdlib.h>

int main(){
    // ---- input and malloc A, F ----
    int NA, NF;
    scanf("%d %d", &NA, &NF);
    int *A = malloc(sizeof(int) * NA);
    int *F = malloc(sizeof(int) * NF);
    int *R = malloc(sizeof(int) * NA - NF + 1);

    for(int i = 0; i < NA; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < NF; i++){
        scanf("%d", &F[i]);
    }
    // ---- end input and malloc----

    // implement here

    for(int i=0; i<NA-NF+1; i++){
        R[i] = 0;
        for(int j=0; j<NF; j++){        
            R[i] += A[i+j] * F[NF-j-1];
        }
    }

    // ---- output ----

    for(int i = 0; i < NA - NF + 1; i++){
        printf("%d\n", R[i]);
    }

    // ---- free memory ----
    free(F);
    free(A);
    free(R);
    // ---- end free ----
    return 0;
}

