/*  Accept number from user and display below pattern.
 Input :5
Output:A B C D E
*/
#include<stdio.h>
void Display(int iNo){
int i=0;

char ch='\0';
for(i=1,ch='A';i<=iNo;i++,ch++){

printf("%c\t",ch);
}

printf("\n");


}
int main(){
int iValue1=0;

printf("enter any number:");
scanf("%d ",&iValue1);
Display(iValue1);
return 0;

}