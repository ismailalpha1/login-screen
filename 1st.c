#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(){
    char ch;
    int i;
    char pass[20];

    ch = getch();

    if(ch==13)
    {
        pass[i]='\0';
        break;
    }else{
        pass[i++] = ch;
        printf["*"];
    }

    printf("You entered : %s\n ", pass);

    FILE * ptr;
    ptr = fopen("password.txt","r")
    fscanf(ptr, "%s",saved_pass);

    fclose(ptr);
    printf("Saved password %s\n", saved_pass);
    int l = strcmp[pass,saved_pass]; //to compare two strings

    if(l==0)
    {
        printf("LOGIN SUCCESSFULLY\n");
    }else{
        printf("INCORRECT PASSWORD\n");
    }
    return 0;
}

