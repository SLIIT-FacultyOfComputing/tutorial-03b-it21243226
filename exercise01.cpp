#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << "No" <<  setw(15) << "Name" << setw(10) << "Marks" << endl;
 for (int r = 0; r < 5; r++) {
     cout << r+1;
     cout << setw(15);
     cout << names[r];
     cout << setw(10);
     cout << marks[r] << endl;
 }
}