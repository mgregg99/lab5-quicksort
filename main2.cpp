#include <iostream>
using namespace std;

int *ptr;
int arraysize;

void redo(){
    int neww[9];
    arraysize = 9;

    ptr = neww;
   

    for (int i = 0; i < arraysize; i++){
        *(ptr + i) = i + 10;
    }
     
}

int main(){
    int apple[9];
    arraysize = 9;

    ptr = apple;

    for(int i = 0; i < arraysize; i++){
        apple[i] = i + 1;
        cout << *(ptr + i) << endl;
    }

    //redo();

    cout << "-----------------" << endl;

    for(int i = 0; i < arraysize; i++){
        apple[i] = i + 1;
        cout << *(ptr + i) << endl;
    }

    return 1;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5];
//     int *ptr = arr;
    
//    // Insert data using pointer notation
//     cout << "Enter 5 numbers: ";
//     for (int i = 0; i < 5; ++i) {

//         // store input number in arr[i]
//         int temp = 0;
//         cin >> temp;
//         *(ptr + i) = temp;

//     }

//     // Display data using pointer notation
//     cout << "Displaying data: " << endl;
//     for (int i = 0; i < 5; ++i) {

//         // display value of arr[i]
//         cout << *(ptr + i) << endl ;

//     }

//     return 0;
// }