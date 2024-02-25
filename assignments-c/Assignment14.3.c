/*3. Accept number from user and display below pattern.
Input: 5
Output :1 * 2 * 3 * 4 * 5 *
*/

#include<stdio.h>
void Display(int iNo){
int i=0;
int j=0;
for(i=1;i<=iNo;i++){

printf("%d\t*\t",i);
}

printf("\n");


}
int main(){
int iValue1=0;

printf("enter any number:");
scanf("%d",&iValue1);
Display(iValue1);
return 0;

}