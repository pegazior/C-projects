#include <stdio.h>
int main(void){
        int liczba=0,check=0,qq=1;
        int min,max=0;
        scanf("%d %d\n", &min, &max);
        check = (liczba == -999);
        qq = (liczba >= min && liczba <=max);
        while(!check ){
        scanf("%d ",&liczba);
        if(qq){
        printf("Nothing to report\n");

             }else{
            printf("Alert!\n");
            }


}



return 0;
}
