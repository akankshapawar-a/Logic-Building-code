#include<stdio.h>
#include<stdbool.h>
bool strRevX(char *str){
char *start=NULL;
char *end=NULL;
start=str;
end=str;
while(*end!='\0'){
end++;
}
end--;
    while(start < end)
    {
        if(*start != *end)
        {
            break;
        }
        start++;
        end--;
    }

    if(start < end)
    {
        return false;
    }
    else
    {
        return true;
    }



   
}
int main(){
char Arr[20];
bool bRes=false;
printf("enter string");
scanf("%[^'\n']s",Arr);
bRes=strRevX(Arr);
if(bRes==true){
printf("String is pallindrome\n");
}
else{
printf("String is not pallindrome\n");
}

return 0;
}