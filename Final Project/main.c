#include <stdio.h>
#include <string.h>
#include <conio.h>

//created by chaitanya

int main()
{
    char username[15];
    char password[12];
    char usernamex[15];
    char passwordx[12];
    printf("Selamat Datang Silahkan Login/Mendaftar\n");
    printf("=======================================\n");
    printf("Masukkan user id anda : ");
    scanf("%s",&usernamex);
    printf("Masukkan Password anda : ");
    scanf("%s",&passwordx);


    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(usernamex,username)==0) {
        printf("\nusername benar");
        }
    else{
        printf("\nusername salah");
    }

    if (strcmp(passwordx,password)==0) {
        printf("\nPassword anda benar");
    }
    else{
        printf("\npassword salah");
        }
    return 0;
}