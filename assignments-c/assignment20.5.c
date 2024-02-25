/*
Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive)
enter a character:d
Your exam at 10:30 AM
enter a character:f
no such div is there
*/
#include<stdio.h>
#include<stdbool.h>
bool check(char ch){
if(ch=='A' || ch=='a'){
  printf("Your exam at 7AM ");
}
 else if(ch=='B' || ch=='b'){
  printf("Your exam at 8:30 AM ");
}
 else if(ch=='C' || ch=='c'){
  printf("Your exam at 9:20 AM ");
}
 else if(ch=='D' || ch=='d'){
  printf("Your exam at 10:30 AM ");
}
else{
printf("no such div is there");
}


}

int main(){
char c='\0';

printf("enter a character:");
scanf("%c",&c);
check(c);

return 0;

}