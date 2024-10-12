#include <iostream>
#include <iomanip>
using namespace std;  //cin-cout için 

//karakter dizilerinin somunda default olarak NULL karakteri bulunur. diğer dizilerde yok.
//dizi tanımmlama
//diziye ilk değer atama
//dizi işleme - dizi üzerinde gezinme

#define SIZE 5

int main(){
    
    //arasınav notlarını tutan bir dizi tanımlayıp değer atama
    float midterm[SIZE] = {45,50,65,89,89};
    float final[SIZE] = {66,48,19,78,65};
    string name[SIZE] = {
        "Zafer", "Yavuz", "Betül", "Ahmet", "Elif"
    };
    // for (int i=0;i<SIZE;i++){
    //     cin >> midterm[i];
    // }
    cout << setw(4) << right << "ID" << setw(12) << right << "NAME" << setw(10) << right << "MIDTERM" << setw(10) << right << "FINAL" << endl;
    for (int i=0;i<36;i++){
        cout << "-";
    }
    cout << endl;
    for (int i=0;i<SIZE;i++){
        cout << setw(4) << right << i << setw(12) << right <<  name[i] << setw(10) << right <<  midterm[i] <<  setw(10) << right <<  final[i] << endl;
    }


    return 0;
}

