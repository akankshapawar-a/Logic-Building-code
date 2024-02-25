#include<stdio.h>
int firstoccurance(char * str){
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


printf("enter the string:");
scanf("%[^'\n']s",Arr);
firstoccurance(Arr);

printf("print the string:%s",Arr);


return 0;
}