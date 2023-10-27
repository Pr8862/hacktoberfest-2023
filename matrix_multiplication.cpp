#include<iostream>
using namespace std;

int main(){

    int r1, c1, r2, c2;

    cout<<"Enter number of rows and columns of first matrix: ";
    cin>>r1>>c1;

    int A[r1][c1];

    cout<<"Enter elements of first matrix: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }

    cout<<"Enter number of rows and columns of second matrix: ";
    cin>>r2>>c2;

    int B[r2][c2];

    cout<<"Enter elements of second matrix: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }

    if(c1!=r2){
        cout<<"Multiplication of "<<r1<<"X"<<c1<<"and"<<r2<<"X"<<c2<<"not possible"<<endl;
    }
    else{
        int C[r1][c2];

        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                C[i][j] = 0;
                for(int k=0;k<r2;k++){
                    C[i][j] += A[i][k] * B[k][j];
                }
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

// dont define function as there is problem in passing dimensions of array which are user input

// #include<iostream>
// using namespace std;

// int r1, c1, r2, c2;

// void MatrixMulti(int A[][c1], int B[][c2]){
//     int C[r1][c2];

//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             C[i][j] = 0;
//             for(int k=0;k<r2;k++){
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//             cout<<C[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){

    // cout<<"Enter number of rows and columns of first matrix: ";
    // cin>>r1>>c1;

    // int A[r1][c1];

    // cout<<"Enter elements of first matrix: ";
    // for(int i=0;i<r1;i++){
    //     for(int j=0;j<c1;j++){
    //         cin>>A[i][j];
    //     }
    // }

    // cout<<"Enter number of rows and columns of second matrix: ";
    // cin>>r2>>c2;

    // int B[r2][c2];

    // cout<<"Enter elements of second matrix: ";
    // for(int i=0;i<r2;i++){
    //     for(int j=0;j<c2;j++){
    //         cin>>B[i][j];
    //     }
    // }

    // if(c1!=r2){
    //     cout<<"Multiplication of "<<r1<<"X"<<c1<<"and"<<r2<<"X"<<c2<<"not possible"<<endl;
    // }
    // else{
    //     MatrixMulti(A, B);
    // }

    // return 0;
// }
