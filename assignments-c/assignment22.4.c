//#include<stdio.h>
/*
4. Write a program which accept string from user and check whether it contains vowels in it or not.
enter a character:marvellous
True
enter a character:Demo
True
enter a character:xyz
False

*/
/*
#include<stdbool.h>
bool Display(char *str){

while(*str!='\0'){
if((*str=='a')||(*str=='A')||(*str=='e')|| (*str=='E')||(*str=='i')||(*str=='I')||(*str=='o')||(*str=='O')||(*str=='u')||(*str=='U')){
break;
}
str++;
}
if((*str=='a')||(*str=='A')||(*str=='e')|| (*str=='E')||(*str=='i')||(*str=='I')||(*str=='o')||(*str=='O')||(*str=='u')||(*str=='U')){
return true;
}
else{
return false;
}

}

int main(){
char Arr[20];
bool iRes=false;
printf("enter a character:");
scanf("%[^'\n']s",Arr);
iRes=Display(Arr);
if(iRes==true){
printf("True");
}
else{
printf("False");

}
return 0;

}
*/


/*
4. Write a program which accept string from user and check whether it contains vowels in it or not.
enter a character:marvellous
True
enter a character:Demo
True
enter a character:xyz
False

*/
#include<stdio.h>
#include<stdbool.h>
bool Display(char *str){
int count=0;
while(*str!='\0'){
if((*str=='a')||(*str=='A')||(*str=='e')|| (*str=='E')||(*str=='i')||(*str=='I')||(*str=='o')||(*str=='O')||(*str=='u')||(*str=='U')){
count++;
}
str++;
}
if(count==1){
return true;
}
else{
return false;
}

}

int main(){
char Arr[20];
bool iRes=false;
printf("enter a character:");
scanf("%[^'\n']s",Arr);
iRes=Display(Arr);
if(iRes==true){
printf("True");
}
else{
printf("False");

}
return 0;

}