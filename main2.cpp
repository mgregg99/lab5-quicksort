#include <iostream>
using namespace std;

int *ptr;

void redo(){
    int neww[9];
    ptr = neww;

}

int main(){
    int apple[9];

    

for(int i = 0; i < 9; i++){
    apple[i] = i + 1;
}
ptr = apple;

for(int i = 0; i < 9; i++){
    apple[i] = i + 1;
    cout << *(ptr + i) << endl;
}

redo();



return 1;
}