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

    char letter = ' ';
    if (avarage < 40)
        letter = 'F';
    else if (avarage < 45)
        letter = 'D';
    else if (avarage < 60)
        letter = 'C';
    else if (avarage < 80)
        letter = 'B';
    else if (avarage <= 100)
        letter = 'A';
    else
        letter = 'E';

    cout << avarage << " -> ";
    switch (letter)
    {
    case 'A':
        cout << "Great" << endl;
        break;
    case 'B':
        cout << "You did well" << endl;
        break;
    case 'C':
        cout << "Good job, you passed" << endl;
        break;
    case 'D':
        cout << "There'll be some intersting stuff next year" << endl;
        break;
    default:
        cout << "Missing points" << endl;
    }
}
