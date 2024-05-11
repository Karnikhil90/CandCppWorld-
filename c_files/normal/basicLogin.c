#include<stdio.h>
//#include "../string/lib.c"
#include <string.h>
#define length(arr) (sizeof(arr) / sizeof(arr[0]))

// Function prototype 
void choice();
void login();

char* uid_list[] = {"1", "niku", "radha", "ram", "nikhil", "krishna"};
char* pass_list[] = {"1", "niku", "radha", "ram", "nikhil", "krishna"};

void choice() {
    char input_choice[2];
    printf("1. Log in\n");
    printf("2. Sign up\n");
    printf("Enter Your choice : ");
    scanf("%1s", input_choice); // Limit input to 1 character
    printf("DEBUG: input test = {%s}\n", input_choice);
    if (input_choice[0] != '0') {
        if (input_choice[0] == '1') 
            login();
        else 
            printf("ERROR : Invalid input\n");
    }
}

void login() {
    char input_uid[20]; // Maximum UID length assumed to be 20
    char input_password[20]; // Maximum password length assumed to be 20
    int i, isExist = 0;
    printf("Enter your uid : ");
    scanf("%19s", input_uid); // Limit input to 19 characters
    for(i = 0; i < length(uid_list); i++) {
        if (strcmp(uid_list[i], input_uid) == 0) {
            printf("Enter your password : ");
            scanf("%19s", input_password); // Limit input to 19 characters
            if (strcmp(pass_list[i], input_password) == 0) {
                printf("LOGIN SUCCESSFUL.....\n");
                isExist = 1;
                break;
            } else
                printf("Your password is wrong\n");
        }
    }
    if(isExist == 0)
        printf("NO DATA FOUND....\n");
}

int main(void) {
    choice();
    return 0;
}
