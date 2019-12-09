#include <stdio.h>
#include <time.h>  
                                                                                                                                                                                                                                            
int main(void){                                                                                                                                                                                                                                                
        int liczba=0;
        int i=0;
        for(i=0; i<5; i++){
        srand(time(0));
        liczba= rand() % 6 + 1;
        i = liczba;
        if(liczba != 6){
                printf("pudlo! wybrales %d\n", liczba);
}else{                                                                                                                                                                                                                                
                 printf("bingo! wybrales %d\n", liczba);
}
}
return 0;
}
