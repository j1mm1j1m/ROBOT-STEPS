#include<iostream>
using namespace std;
int main() {
 srand(time(0));
 int step;
 int x = 0;
 int y = 0;
 int direct;
 int steps = 25;
 for (int step = 1; step <= steps; step++) {
 direct = rand() % 4 + 1;
 switch (direct) {
 case 1:
 y++;
 break;
 case 2:
 y--;
 break;
 case 3:
 x++;
 break;
 case 4:
 x--;
 break;
 }
 cout << "Step: " << step << "Robot is: " << abs(y) << " blocks ";
 if (y > 0) {
 cout << " North ";
 }
 else if (y < 0) {
 cout << " South ";
 }
 else {
 cout << " neither North or South ";
 }
 cout << " and " << abs(x) << " blocks ";
 if (x > 0) {
 cout << " East";
 }
 else if (x < 0) {
 cout << " West";
 }
 else {
 cout << " neither East or West";
 }
 cout << " of the starting point. \n\n";
 }
 return 0;
}

