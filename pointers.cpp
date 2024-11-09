// 18.10.24

#include <iostream>
#include <iomanip>
using namespace std;  //cin-cout için 

// void swap(float a1,float a2){
//     float temp;
//     temp = a1;
//     a1 = a2;
//     a2 = temp;
// }

// void swap2(float *a1, float *a2){
//     float temp;
//     temp = *a1;
//     *a1 = *a2;
//     *a2 = temp;
// }

int len(char *a){
    int i = 0;
    while(a[i]!='\0') i++;
    return i;

}

void upper2(char *a){
    int i = 0;
    while(a[0] != '\0'){
        if(a[i] >= 'a' && a[i] <= 'z'){
        a[i] -= ('a' - 'A');
        i++;
        }
    }

}



int main(){

    // int *iptr;
    // int a = 10;
    // iptr = &a;
    // cout <<*iptr <<endl << iptr << endl << &iptr << endl;
    
    // int *iptr;
    // int a[] = {5,10,15,20};  // dizinin ismi aslinda dizinin baslangic adresini gosteren bir pointer
    // iptr = a;                // bu yuzden pointerin dizinin basini gostermesini istedigimde adres operatorunu kullanmaya gerek yok, isimle atama yeterli
    // cout <<*iptr <<endl << &a << endl << iptr << endl << &iptr << endl;

    // float a1 = 15.3, a2 = 24.5;
    // cout << a1 << "    " << a2 << endl;
    // // swap(a1,a2); // doesnt swap the numbers because the function is called by value and works on copies of the given variables, the variables in main function remains the same
    // swap2(&a1, &a2);  // call by pointer
    // cout << a1 << "    " << a2 << endl;
 
    char arr[] = "busra";
    cout << arr << endl;  // we can print out a char array like this because we know where the array ends -since char arrays has NULL character at the end, other  types of arrays cannot be printed like this -int, float etc.
    int length = len(arr);
    cout << length << endl;
    upper2(arr);
    cout << arr << endl;

    return 0;

}