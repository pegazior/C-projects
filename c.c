#include <stdio.h>

int main(void){

int ara[4];
int i = 0, ele = 0;
for(i=0; i<4;i++){
scanf("%d", &ele);
ara[i] = ele;
ele = ele +1;
printf("%d - %d\n",i,ara[i]);
}


return 0;
}
