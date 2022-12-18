#include <stdio.h>
#include <stdlib.h>
int main()
{  int a[3][3];
   int i,j;
   int toplam=0;
   for(i=0;i<3;i++){
    printf("a dizisinin %d.satiri:",i+1);
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
   }
      for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        printf("%d ",a[i][j]);
    }
      for(j=0;j<3;j++){
      toplam=toplam+a[i][j];
   }
      printf("%d ",toplam);
      printf("\n");
      toplam=0;
   }
     int toplam2=0;
     printf("-------\n");
     for(j=0;j<3;j++){
     for(i=0;i<3;i++){
        toplam2=toplam2+a[i][j];
  }
     printf("%d ",toplam2);
     toplam2=0;
   }

    return 0;
}
