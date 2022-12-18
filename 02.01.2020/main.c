#include <stdio.h>
#include <stdlib.h>
int main(){
int i,j;
int N=6;
int a[6]={3,4,12,1,34,16};

for(i=0;i<6;i++){

    for(j=1;j<N-i;j++){
        if(a[j-1]>a[j]){
            int gecici=a[j];
            a[j]=a[j-1];
            a[j-1]=gecici;
        }

    }

}
for(i=0;i<N;i++)
printf("%d,",a[j-1]);
i++;





















return 0;
}


