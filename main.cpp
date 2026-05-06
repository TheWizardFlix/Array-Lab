#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

double avg(const vector<double>& vals) {
    if (vals.empty()) return 0;

    double sum = 0;
    for (double v : vals) sum += v;

    return round((sum / vals.size()) * 10) / 10.0;
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};

    for (int n : nums) cout << n << " ";
    cout << endl;
    
    
    
    
    for (int i = (int)nums.size() - 1; i >= 0; i--) cout << nums[i] << " ";
    cout << endl;

    int evenCount = 0;
    for (int n : nums) if (n % 2 == 0) evenCount++;
    cout << evenCount << endl;

    vector<double> sales(5);
    vector<string> days = {"MondDay","Tuesday","Wednesday","Thursday","friday"};







    for (int i = 0; i < 5; i++) {
        cout << "Enter sales for " << days[i] << ": ";
        cin >> sales[i];
    }
    
    
    
    
    

    string cont = "yes";
    while (cont == "yes" || cont == "Yes") {
        int day;
        cout << "Pick a day (1-5): ";
        cin >> day;

        if (day >= 1 && day <= 5) {
            cout << sales[day - 1] << endl;
        } else {
            cout << "INvalid day" << endl;
        }

        cout << "Continue????? ";
        cin >> cont;
    }



    vector<int> ages(20);
    for (int i = 0; i < 20; i++) {
        cout << "Enter age # " << i + 1 << ": ";
        cin >> ages[i];
    }



    int countAbove15 = 0;
    for (int a : ages) if (a > 15) countAbove15++;
    cout << countAbove15 << endl;

    vector<double> grades = {85.8, 93.7, 76, 88.5, 100, 91.3};

  
    cout << avg(grades) << endl;

    return 0;
}
