#include <iostream>
using namespace std;

int main() {
   int currentPrice;
   int lastMonthsPrice;
   int change;
   int mortgage;

   cin >> currentPrice;
   cin >> lastMonthsPrice;
   mortgage = (currentPrice * 0.051) / 12;
   change = currentPrice - lastMonthsPrice;
   cout << "This house is $" << currentPrice << ". The change is $" << change << "since last month." << endl;
   cout << "The estimated monthly mortgage is $" << mortgage << endl;

   /* Type your code here. */

   return 0;
}
