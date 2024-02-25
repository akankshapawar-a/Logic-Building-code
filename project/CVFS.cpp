#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
//#include<io.h>

#define MAXINODE 50

#define READ 1
#define WRITE 2

#define MAXFILESIZE 2048

#define REGULAR 1
#define SPECIAL 2

#define START 0
#define CURRENT 1;
#define END 2

typedef struct superblock
{
int ToatlInodes;
int FreeInodes;
}SUPERBLOCK,8PSUPERBLOCK;

typedef struct inode{
char FileName[50];
int InodeNumber;
int FileSize;
int FileActualSize;
int FileType;
char *Buffer;
int LinkCount;
int ReferenceCount;
int permission ;
struct inode *next;
}INODE,*PINODE,**PPINODE;

typedef struct filetable{
int readoffset;
int writeoffset;
int count;
int mode;
PINODE ptrinode;
}FILETABLE,*PFILETABLE;

typedef struct ufdt
{
PFILETABLE ptrfiletable;
}UFDT;

UFDT UFDTArr[50];
SUPERBLOCK SUPERBLOCKobj;
PINODE head=NULL;

void man(char *name){
if(name==NULL)return;
if(strcmp(name,"*create")==0){
printf("Description:Used to create new regular file\n");
printf("Usage: read File");
}

else if(strcmp(name,'write')==0)
{
    printf("Description : Used to write into regular file\n");
    printf("Usage: read File_name No_of_Bytes_To_Read\n");

}
else if(strcmp(name,"write")==0){
        printf("Description : Used to write into regular file\n");
printf("Usage:write File_name\nAfter this enter the data that we want to write\n");
}
else if(strcmp(name,"Is")==0){
    printf("Description:Used to list all information of files\n");
    printf("Usage:Is\n");
    else if(strcmp(,"stat")==0){
            printf("Description:Used to list all information of files\n");
printf("Usage: stat File_name\n");


    }
    else if(strcmp(name,"fstat")==0){
        printf("Description:Used to list all information of files\n");
printf("Usage: stat File_Descriptior\n");

    }

    else if(strcmp(name,"truncate")==0){
        printf("Description:used to remove data from file\n");
        printf("Usage: truncate File_name\n");

    }
    else if(strcmp(name,"open")==0){
        printf("Description:used to open existing file \n");
        printf("Usage: open File_name mode\n");

    }
    else if(strcmp(name,"close")==0){
        printf("Description:used to close opened file \n");
        printf("Usage: close File_name \n");

    }
    else if(strcmp(name,"closeall")==0){
        printf("Description:used to close all opened file \n");
        printf("Usage: closeall\n");

    }
    else if(strcmp(name,"Iseek")==0){
        printf("Description:used to change file offset \n");
        printf("Usage: Iseek File_Name ChangeInOffset StartPoint\n");
 
  }
  else if(strcmp(name,"open")==0){
        printf("Description:used to open existing file \n");
        printf("Usage: open File_name mode\n");

    }
    else if(strcmp(name,"rm")==0){
        printf("Description:used to delete the file \n");
        printf("Usage: rm File_name \n");

    }
    else{
        printf("ERROR: No manual entry available\n");
    }
}

void DisplayHelp(){
    printf("Is: To List out all files\n");
    printf("clear: To clear console\n");
    printf("open: To open the file\n");
    printf("close: To close the file\n");
    printf("closeall: To close all opened  files\n");
    printf("read: To Read the contents from file\n");
    printf("write: To Write contents into file\n");
    printf("exit: To Terminate file system \n");
    printf("stat: To Display information of file using name\n");
    printf("fstat: To Display information of file using file descriptor\n");
    printf("truncat : To Remove all data from file\n");
     printf("rm: To Delet the file\n");
}

int GetFDFromName(char *name){
    int i=0;
    while(i<50){
        if(UFDTArr[i].ptrfiletable !=NULL)
            if(strcmp((UFDTArr[i].ptrfiletable->ptrinode->FileName),name)==0)
               break;
            i++;
    }

    if(i==50)  return -1;
      else     return i;
}

PINODE Get_Inode(char *name){
    PINODE temp=head;
    int i=0;
    if(name ==NULL)
    return NULL;

while(temp!=NULL){
    if(strcmp(name,temp->FileName)==0)
    break;
temp=temp->next;
}
return temp;
}


}
