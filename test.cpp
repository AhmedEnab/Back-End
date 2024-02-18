#include <iostream>
#include <string>
using namespace std;
int main(){
    int size;
    cout << "Enter Array Size" << endl;
    cin >> size;
    int* arr = new int [size];
    cout << "Enter Array element" << endl;
    for(int i = 0 ; i<size ; i++){
        cin >> arr[i];
    }
    for(int i = 1 ; i < size ; i++){
        int temp = arr[i];
        for (int l = i-1 ; temp < arr[l] && l>=0 ; l--  ){
            swap(arr[l] , arr[l+1]);
        }
    }
    for(int i = 0 ; i<size ; i++){
        cout << arr[i] << endl;
    }
    return 0;
}


// #include <iostream>
// void print( int x , int z);
// using namespace std;
// int main(){
//     print(9 , 12);
// }
// void print( int x , int z){
//     if (x == z+1){
//         return ;
//     }
//     cout << x << endl;
//     print( x+1 , z);
// }






