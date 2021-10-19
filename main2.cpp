// #include <iostream>
// using namespace std;

// int *ptr;
// int arraysize;

// void redo(){
//     int neww[9];
//     arraysize = 9;

//     ptr = &neww[0];
   

//     for (int i = 0; i < arraysize; i++){
//         *(ptr + i) = i + 10;
//     }
     
// }

// int main(){
//     int apple[9];
//     arraysize = 9;

    

//     for(int i = 0; i < arraysize; i++){
//         apple[i] = i + 1;
//     }
//     ptr = apple;

//     for(int i = 0; i < arraysize; i++){
//         apple[i] = i + 1;
//         cout << *(ptr + i) << endl;
//     }

//     redo();

//     cout << "-----------------" << endl;

//     for(int i = 0; i < arraysize; i++){
//         apple[i] = i + 1;
//         cout << *(ptr + i) << endl;
//     }

//     return 1;
// }

#include <iostream>
using namespace std;

int main() {
    float arr[5];
    
   // Insert data using pointer notation
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {

        // store input number in arr[i]
        int temp = 0;
        cin >> temp;
        *(arr + i) = temp;

    }

    // Display data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {

        // display value of arr[i]
        cout << *(arr + i) << endl ;

    }

    return 0;
}