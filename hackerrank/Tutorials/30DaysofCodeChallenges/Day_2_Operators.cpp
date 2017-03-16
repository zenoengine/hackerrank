#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mealCost = 0;
    int tipPercent = 0;
    int taxPercent = 0;
    
    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;
    
    double totalCost = mealCost + mealCost*(double(tipPercent)/100) + mealCost*(double(taxPercent)/100) + 0.5;
    cout << "The total meal cost is " << int(totalCost) << " dollars." << endl;
    return 0;
}
