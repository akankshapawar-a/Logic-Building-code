#include<stdio.h>
/*enter rows and col:5
7
A       B       C       D       E       F       G
a       b       c       d       e       f       g
H       I       J       K       L       M       N
h       i       j       k       l       m       n
O       P       Q       R       S       T       U
*/

void Display(int iRow,int iCol){
int i=0;
int j=0;
char c='A';
char ch='a';
for(i=1;i<=iRow;i++){
for(j=1;j<=iCol;j++){
if(i%2==0){
printf("%c\t",ch);
ch++;
}
else{
printf("%c\t",c);
c++;

}
}
printf("\n");
}

}
int main(){
int iValue1=0;
int iValue2=0;
printf("enter rows and col:");
scanf("%d %d",&iValue1,&iValue2);
Display(iValue1,iValue2);
return 0;

}