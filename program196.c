#include<stdio.h>
#include<stdbool.h>
bool Stringcmp(char *str1 ,char  *str2){
while((*str1!='\0') && (*str2!='\0')&& (*str1==*str2)){

 str1++;
 str2++;
}
return ((*str1=='\0') && (*str2=='\0'));
}
int main(){
char Arr[20];
char Brr[20];
bool cRes=false;
printf("enter the string:");
scanf("%[^'\n']s",Arr);
printf("enter the string:");
scanf(" %[^'\n']s",Brr);
cRes=Stringcmp(Arr,Brr);
if(cRes==true){
        printf("Both the strings are identical\n");

}else{
          printf("Both the strings are difference\n");

}

return 0;
}