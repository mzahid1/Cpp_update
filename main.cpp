#include <iostream>

using namespace std;

int main()
{
    float decimalPounds;
    int rm_decimal_from_decimalPounds;
    float frac_of_decimalPounds;
    int newShillings;
    float oldTotalPence;
    float oldShillings;
    int rm_decimal_from_oldShillings;
    float oldPence;
    int rm_decimal_from_oldPence;


    cout << "Enter decimal pounds: ";
    cin >> decimalPounds;

    rm_decimal_from_decimalPounds = static_cast<int>(decimalPounds);  // This will be pounds in old system

    frac_of_decimalPounds = decimalPounds - rm_decimal_from_decimalPounds; // Result will be zero point something

    newShillings = frac_of_decimalPounds * 100;

    oldTotalPence = newShillings / 0.41667; // These are the total pence in old system

    oldShillings = oldTotalPence / 12;

    rm_decimal_from_oldShillings = static_cast<int>(oldShillings); // This will be shillings in old system

    oldPence = oldTotalPence - (rm_decimal_from_oldShillings * 12);

    rm_decimal_from_oldPence = static_cast<int>(oldPence); // This will be pence in old system

    cout << "Equivalent in old notation: "
         << rm_decimal_from_decimalPounds << "."
         << rm_decimal_from_oldShillings << "."
         << rm_decimal_from_oldPence << endl;

    return 0;
}
