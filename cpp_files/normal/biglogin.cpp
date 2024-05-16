/*
@author NIKHIL KARMAKAR
? I'M JUST TRY TO LEARIN THE C++ 
TODO: SUPER BASIC LOGIN STUFF 
@date 16-05-2024
*/




#include <iostream>
#include <string>
using namespace std;

// USER DATA STORED 
string ID[5] = {"niku","ram","sham","1","CPP"};
string PASS[5] ={"niku","ram","sham","1","CPP"};

int main(){
    // INPUT VARIABLES
    string id , pass;
    bool islogin = false; // AS IT'S SOUNDS ITS FOR CHEAKING 

    printf("Enter ID: ");
    cin >> id;

    for(int8_t i = 0; i < 5; i++){ // SEARCHING FOR THE USER 
        if(ID[i] == id){
            printf("Enter PASS: ");
            cin >> pass;
            if(PASS[i] == pass && pass != ""){
                printf("login success....\n");
                islogin = true; // IF LOGIN THEN TOGGLED 
            }else{
                printf("login failure.....\n");
            }
        }
    }
    if(!islogin)
        printf("User does not exist......\n");

    return 0;
}
