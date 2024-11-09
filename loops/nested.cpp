#include <iostream>
using namespace std;

int main(){

//statement_1  >> before starting the loop, variable declerations
//loop(statement_2; statement_3)  >> conditional statement for loop , required  >> keeps track of the loop, exm: i++, j++   
//  statement_4  >> code to execute within the loop, body of the loop

/*
  statement1;
  do{
    statement4;
    statement3;
  }while(statement2);
*/

    int i=0,n,sum;
    cout<<"N:";
    cin>>n;
    //int sum=0;
    for(int i=1;i<=n;i++){
        sum=0;
        for(int j=1;j<=i;j++){
            sum+=j;
    }
    cout<<"sum [1..."<<i<<"]: "<<sum<<endl;
  }

}