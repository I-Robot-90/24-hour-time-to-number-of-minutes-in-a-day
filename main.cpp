#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int combine(int int1, int int2){
    int1 *= 10;
    int newVal = int1 + int2;
    return newVal;
}

int main() {
    /**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
        string duration;
        cin >> duration; cin.ignore();
        vector<int> digits;


    for(char& c : duration) {
        if (isdigit(c))
            digits.push_back(c);
    }

    int first = digits.at(0);
    int intValue1 = first - '0';

    int second = digits.at(1);
    int intValue2 = second - '0';

    int third = digits.at(2);
    int intValue3 = third - '0';

    int fourth = digits.at(3);
    int intValue4 = fourth - '0';

    cout << (combine(intValue1, intValue2) * 60) + combine(intValue3, intValue4)  << endl;
    }



