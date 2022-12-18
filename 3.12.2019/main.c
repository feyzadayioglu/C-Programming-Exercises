#include <stdio.h>
#include <stdlib.h>

void cati(){
   printf("   /\\ \n");
   printf("  /  \\ \n");
   printf(" /    \\ \n");
   printf("/      \\ \n");


}void taban(){
    printf("-------- \n");
}void duvar(){
    printf("|       |\n");
    printf("|       |\n");
    printf("|       |\n");
}
int main(){
    int a;

   cati();
   taban();
for(a=1;a<26;a++){
    duvar();
    taban();
}



    return 0;
}
