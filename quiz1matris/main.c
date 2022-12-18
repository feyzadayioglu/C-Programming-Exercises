#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int nilpotent_mi(int matris[9][9]){



    int N=9;
    int matriscarpim[9][9];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
                matriscarpim[i][j]=0;
            for(int k=0; k<N; k++){
                matriscarpim[i][j] = matriscarpim[i][j] + matris[i][k] * matris[k][j];

            }
            if(matriscarpim[i][j]!=0){
                return 0;
            matriscarpim[i][j] = 0;
        }
        printf("\n");
    }


}
return 1;
}


int main()
{
    srand(time(NULL));
    int N;
    int matris[9][9];
    printf("matrisin boyutunu giriniz:");
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            matris[i][j] = rand() % 40-20 ;

        }
    }

    printf("olusturulan matris\n");
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
  if(nilpotent_mi(matris)==1)
    printf("matris nilpotentdir");
  else
    printf("matris nilpotent degildir");


    return 0;
}
