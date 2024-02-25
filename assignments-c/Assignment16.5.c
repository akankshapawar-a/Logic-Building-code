/*

enter any number :3
1	2	3	
4	5	6	
7	8	9
*/

#include <stdio.h>
void Display(int iNo){
    int i=0;
    int j=0;
    int count=0;
    for(i=1;i<=iNo;i++){
        for(j=1;j<=iNo;j++){
           
            count++;
            if(j==iNo-1){
                printf("%d\t",count);
            }
            else{
                printf("%d\t",count);
            }
        }
        printf("\n");
    }
}

int main() {
  
  int iValue =0;
  printf("enter any number :");
  scanf("%d",&iValue);
  Display(iValue);

    return 0;
}