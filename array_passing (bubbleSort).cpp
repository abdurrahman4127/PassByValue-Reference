#include <bits/stdc++.h>
using namespace std;

// print array
void printArray(int A[], int size){
    for(int i=0; i<size; i++){
        cout << A[i] << " ";
    }

    cout << endl;
}

//swapping via dereferencing
void swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

// //sorting (more efficient)
// void bubbleSort(int A[], int n){
//     // outer loop iterates 1 to n-1 times
//     for(int i=0; i<=(n-2); i++){  // (i=1 to n-1) or (i=0 to n-2)
//         for(int j=0; j<=(n-2-i); j++){  //iterates n-2-i times
//             if(A[j] > A[j+1]){
//                 swap(&A[j], &A[j+1]);
//             }
//         }
//     }
// }


//sorting
void bubbleSort(int A[], int n){
    // outer loop iterates 1 to n-1 times
    for(int i=0; i<n; i++){   
        for(int j=0; j<n; j++){   
            if(A[i] <= A[j]){
                swap(&A[i], &A[j]);   // referencing
            }
        }
    }
}


int main(){
    int A[] = {9, 4, 7, 8, 1, 2, 3};
    int size = sizeof(A) / sizeof(A[0]);

    // before sorting
    printArray(A, size);

    // sort by STL: sort(A, A+size); printArray(A, size);

    // after sorting
    bubbleSort(A, size);
    printArray(A, size);

    return 0;
}