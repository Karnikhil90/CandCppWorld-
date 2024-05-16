// @date 16-05-2024

#include <iostream>
#include <cstring>
using namespace std;

char name[2] = "1";
char pass[2] = "1";

int main(){
    char iname[10], ipass[10];
    cout << "Enter name: \n";
    cin >> iname;
    cout << "Enter pass: \n";
    cin >> ipass;

    if(strcmp(iname, name) == 0 && strcmp(ipass, pass) == 0){
        cout << "Login successful.\n";
    }else{
        cout << "Failed to login.\n";
    }
    cout <<"END\n";
    return 0;
}
