#include <iostream>
using namespace std;

int main(){

//statement_1  >> before starting the loop, variable declerations
//loop(statement_2; statement_3)  >> conditional statement for loop , required  >> keeps track of the loop, exm: i++, j++   
//  statement_4  >> code to execute within the loop, body of the loop

  int i,n,t;
  cout<<"N:";
  cin>>n;
  int sum=0;
  for(i=0;i<n;i++){
    cout<<"["<<i+1<<"]:";
    cin>>t;
    sum+=t;
    cout<<"sum: "<<sum<<endl;
  }

// >>>>> a different way to write the same loop

// for(int i=0,t,top=0;i<n;top+=t,cout<<"Toplam: "<<top<<endl,i++){
//     cout<<"["<<i+1<<"]:";
//     cin>>t;
// }


}