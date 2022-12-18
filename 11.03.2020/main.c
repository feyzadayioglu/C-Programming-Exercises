#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int transpoze[3][3];
int satir,sutun;
for(satir=0;satir<3;satir++){
    for(sutun=0;sutun<3;sutun++){

     if(satir!=sutun){
    int  temp=matris[satir][sutun];
     matris[satir][sutun]=transpoze[sutun][satir];
     transpoze[sutun][satir]=temp;
     printf("%d",transpoze[sutun][satir]);

     }
     printf("\n");
}
}


    return 0;
}
