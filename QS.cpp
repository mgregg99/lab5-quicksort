#include <iostream>
#include <string>
#include <sstream>
#include "QS.h"
using namespace std;




QS::QS() {
    QS::createArray(0);
}
QS::~QS() {}

/*
* sortAll()
*
* Sorts elements of the array.  After this function is called, every
* element in the array is less than or equal its successor.
*
* Does nothing if the array is empty.
*/
void QS::sortAll(){
    QS::quicksort(0, insert - 1);
}
void QS::quicksort(int first, int last){
    if(last - first < 1){
        return;
    }

    int pivot = medianOfThree(first, last);
    pivot = partition(first, last, pivot);
    QS::quicksort(first, pivot - 1);
    QS::quicksort(pivot + 1, last);
}

int QS::medianOfThree(int left, int right){
    if (insert < 1 || left < 0 || right < 0 || left > insert || right > insert || left > right || left == right || left > insert - 1 || right > insert - 1){
        return -1;
    }

    int middle = (left + right) / 2;
    int placeholder;
    bool made = true;

    if (arrayptr[left] > arrayptr[middle]){
        placeholder = arrayptr[middle];
        arrayptr[middle] = arrayptr[left];
        arrayptr[left] = placeholder;
    }
    if (arrayptr[middle] > arrayptr[right]){
        placeholder = arrayptr[right];
        arrayptr[right] = arrayptr[middle];
        arrayptr[middle] = placeholder;
    }
    if (arrayptr[left] > arrayptr[middle]){
        placeholder = arrayptr[middle];
        arrayptr[middle] = arrayptr[left];
        arrayptr[left] = placeholder;
    }
    return middle;
    
}
/*
* Partitions a subarray around a pivot value selected according to
* median-of-three pivot selection. Because there are multiple ways to partition a list,
* we will follow the algorithm on page 611 of the course text when testing this function.
*
* The values which are smaller than the pivot should be placed to the left
* of the pivot; the values which are larger than the pivot should be placed
* to the right of the pivot.
*
* Returns -1 if the array is null, if either of the given integers is out of
* bounds, or if the first integer is not less than the second integer, or if the
* pivot is not within the sub-array designated by left and right.
*
* @param left
* 		the left boundary for the subarray to partition
* @param right
* 		the right boundary for the subarray to partition
* @param pivotIndex
* 		the index of the pivot in the subarray
* @return
*		the pivot's ending index after the partition completes; -1 if
* 		provided with bad input
*/
int QS::partition(int left, int right, int pivotIndex){
    if(insert < 1 || left < 0 || right < 0 || left > insert || right > insert || left > right || left == right || left > insert - 1 || right > insert - 1 || pivotIndex < left || pivotIndex > right){
        return -1;
    }

    int placeholder;
    placeholder = arrayptr[pivotIndex];
    arrayptr[pivotIndex] = arrayptr[left];
    arrayptr[left] = placeholder;

    int up = left + 1;
    int down = right;

    do{
        while((arrayptr[up] <= arrayptr[left]) && (up < right)){
            up++;
        }
        while (arrayptr[down] > arrayptr[left] && down > left){
            down--;
        }
        if (up < down){
            placeholder = arrayptr[up];
            arrayptr[up] = arrayptr[down];
            arrayptr[down] = placeholder;
        }
        
        
    } while (up < down);
    placeholder = arrayptr[left];
    arrayptr[left] = arrayptr[down];
    arrayptr[down] = placeholder;

    return down;
}

string QS::getArray() const{
    stringstream ss;
    if (insert == 0){
        return "";
    }
    for (int i = 0; i < insert; i++){
        ss << *(arrayptr + i);
        if (i != insert - 1){
            ss << ",";
        }
    }
    string temp = ss.str();
    return temp;
}

int QS::getSize() const{
    return insert;
}

bool QS::addToArray(int value){
    if (insert == sizeArray){
        return false;
    }
    *(arrayptr + insert) = value;
    insert++;
    return true;
}

bool QS::createArray(int capacity){

    if (capacity < 0){
        return false;
    }

    arrayptr = new int[capacity];
    sizeArray = capacity;
    insert = 0;
    return true;
}

void QS::clear(){
    QS::createArray(0);
}