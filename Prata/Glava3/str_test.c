#include<stdio.h>
#include<string.h>

int main(void){
 
    char s0[] = "дисфункция" ;
    char s1[] = "фун" ;

    if(strstr(s0, s1))
        puts("Подстрока найдена") ;

    return 0 ;
}