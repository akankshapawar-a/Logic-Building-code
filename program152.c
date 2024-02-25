//print AscII value in from 0 to 127


#include<stdio.h>
int main(){
int iCnt=0;
for(int iCnt=97;iCnt<127;iCnt++){
printf("%c\t%d\n",iCnt,iCnt);
}
return 0;
}
