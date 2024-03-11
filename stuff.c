#include <stdio.h>
#include <stdlib.h>

int funny = 1;
int answer = 0;
int start = 0;



void newquestion(){
	if(funny <= 5){
	
	switch (funny) {
  case 1:
    printf("question 1\nwhat is 2+2\n1-'4'      2-'22'\n3-'IDK'      4-'fish'");
    break;
  case 2:
    printf("question 2\nwhat is a microphone\n1-'true'\n2-'false'");
    break;
  case 3:
    printf("question 3\nwhat is the smallest natural number\n1-0		2-1\n3-4		4-3");
    break;
  case 4:
    printf("question 4\nwhat direction is north\n1-'left'		2-'up'\n3-'down'		4-'right'");
    break;
  case 5:
    printf("question 5\ndid you enjoy\n1-'yes'");
    break;
	}
	
	printf("\n");
	askanswer();
	}else{
		printf("\n\n");
	}
}
void askanswer(){
	printf("enter answer number");
	scanf("%i", &answer);
	switch (funny) {
  case 1:
     if(answer == 4){
     
     	funny++;
     	printf("\ncorrect\n");
     	scanf("%i", &answer);
 		system("cls");
     	newquestion();
     }else{
     	printf("\nincorrect\n");
     	funny = 0;
     }
     break;
	
  case 2:
      if(answer == 1){
      
     	 funny++;
     	printf("\ncorrect\n");
     	scanf("%i", &answer);
 		system("cls");
     	newquestion();
     }else{
     	printf("\nincorrect\n");
     	funny = 0;
       }
		break;
  case 3:
     if(answer == 3){
     	funny++;
     	printf("\ncorrect\n");
     	scanf("%i", &answer);
 		system("cls");
     	newquestion();
     }else{
     	printf("\nincorrect\n");
     	funny = 0;
     }
     break;
     case 4:
     if(answer == 2){
     	funny++;
     	printf("\ncorrect\n");
     	scanf("%i", &answer);
 		system("cls");
     	newquestion();
     }else{
     	printf("\nincorrect\n");
     	funny = 0;
     }
     break;
     case 5:
     	funny++;
     	printf("\ncorrect\n");
     	newquestion();
     break;
	
}
}

