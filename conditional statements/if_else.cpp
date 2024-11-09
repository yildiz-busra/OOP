#include <iostream>
using namespace std;

#define MIDTERM_K .45
#define FINAL_K .55

int main()
{
    double midterm, final, avarage;

    cout << "Midterm: ";
    cin >> midterm;
    cout << "Final: ";
    cin >> final;
    avarage = final * FINAL_K + MIDTERM_K * midterm;

    if (avarage < 40)
    {
        cout << avarage << "--> Failed\n";
    }
    if (avarage < 55)
    {
        cout << avarage << "--> Passed conditionally\n";
    }
    else
    {
        cout << avarage << "--> Passed\n";
    }
}