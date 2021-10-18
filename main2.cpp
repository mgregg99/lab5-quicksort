#include <iostream>
using namespace std;

int *ptr;
int arraysize;

void redo(){
    int neww[99];
    arraysize = 99;


    ptr = neww;

}

int main(){
    int apple[9];
    arraysize = 9;

    

    for(int i = 0; i < arraysize -1; i++){
        apple[i] = i + 1;
    }
    ptr = apple;

    for(int i = 0; i < arraysize -1; i++){
        apple[i] = i + 1;
        cout << *(ptr + i) << endl;
    }

    redo();



    for(int i = 0; i < arraysize -1; i++){
        apple[i] = i + 1;
        cout << *(ptr + i) << endl;
    }

    return 1;
}