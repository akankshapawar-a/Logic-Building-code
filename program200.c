#include<stdio.h>
void strRevX(char *str){
char *start=NULL;
char *end=NULL;
char temp='\0';
start=str;
end=str;
while(*end!='\0'){
end++;
}
end--;


while(start<end){
temp=*start;
*start=*end;
*end=temp;
start++;
end--;
}
}
int main(){
char Arr[20];
printf("enter string");
scanf("%[^'\n']s",Arr);
strRevX(Arr);
 printf("Reverse string is : %s\n",Arr);

return 0;
}