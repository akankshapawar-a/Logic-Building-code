//toggle the case 

/*

enter a character:AKANKsha
akankSHA
enter a character:AKANKaha
akankAHA

*/

#include<stdio.h>

void Display(char *str){
while(*str!='\0'){

if((*str>='a') && (*str<='z')){
*str=(*str-32);
}

else if((*str>='A') && (*str<='Z')){
*str=(*str+32);
}

str++;
}


}

int main(){
char Arr[20];
printf("enter a character:");
scanf("%[^'\n']s",Arr);
Display(Arr);
printf("%s",Arr);
return 0;

}