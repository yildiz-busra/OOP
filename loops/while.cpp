#include <iostream>
using namespace std;

int main(){

//statement_1  >> before starting the loop, variable declerations
//loop(statement_2; statement_3)  >> conditional statement for loop , required  >> keeps track of the loop, exm: i++, j++   
//  statement_4  >> code to execute within the loop, body of the loop

    int i=0,n,t;
    cout<<"N:";
    cin>>n;
    int sum=0;
    while(i<n){
        cout<<"["<<i+1<<"]:";
        cin>>t;
        sum+=t;
        cout<<"Toplam: "<<sum<<endl;
        i++;
    }

}