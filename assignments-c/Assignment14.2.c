/* 2. Accept number from user and display below pattern.
 Input: 5 Output: 5
Output : 5 # 4  # 3  #  2 # 1 #
*/

#include<stdio.h>
void Display(int iNo){
int i=0;

for(i=iNo;i>=1;i--){

printf("%d\t#\t",i);
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