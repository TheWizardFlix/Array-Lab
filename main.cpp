#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double avg(double vals[], int size) {
    if (size == 0) return 0;

    double sum = 0;
    for (int i = 0; i < size; i++) sum += vals[i];

    return round((sum / size) * 10) / 10.0;
}

int main() {
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < numsSize; i++) cout << nums[i] << " ";
    cout << endl;

    for (int i = numsSize - 1; i >= 0; i--) cout << nums[i] << " ";
    cout << endl;

    int evenCount = 0;
    for (int i = 0; i < numsSize; i++) if (nums[i] % 2 == 0) evenCount++;
    cout << evenCount << endl;

    double sales[5];
    string days[5] = {"MondDay","Tuesday","Wednesday","Thursday","friday"};
    int salesSize = sizeof(sales) / sizeof(sales[0]);

    for (int i = 0; i < salesSize; i++) {
        cout << "Enter sales for " << days[i] << ": ";
        cin >> sales[i];
    }

    string cont = "yes";
    while (cont == "yes" || cont == "Yes") {
        int day;

        cout << "Pick a day (1-" << salesSize << "): ";
        cin >> day;

        if (day >= 1 && day <= salesSize) {
            cout << sales[day - 1] << endl;
        } else {
            cout << "INvalid day" << endl;
        }

        cout << "Continue????? ";
        cin >> cont;
    }

    int ages[20];
    int agesSize = sizeof(ages) / sizeof(ages[0]);

    for (int i = 0; i < agesSize; i++) {
        cout << "Enter age # " << i + 1 << ": ";
        cin >> ages[i];
    }

    int countAbove15 = 0;
    for (int i = 0; i < agesSize; i++) if (ages[i] > 15) countAbove15++;
    cout << countAbove15 << endl;

    double grades[] = {85.8, 93.7, 76, 88.5, 100, 91.3};
    int gradesSize = sizeof(grades) / sizeof(grades[0]);

    cout << avg(grades, gradesSize) << endl;

    return 0;
}
