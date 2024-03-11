#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "stuff.h"



int main(){
 printf("the quiz game\n");
 SetConsoleTitle("the quiz game");
 scanf("%i", &answer);
 if(answer == 69420){
 	printf("\n%d\n", MY_MACRO(69420));
 	scanf("%i", &answer);
 	system("cls");
 }else{
  system("cls");
 }
 newquestion();
 printf("\n\n");
 system("pause");
}

