#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() {

int random_num,estimated_num, attempts_by_user=0;
srand(time(0));

random_num= rand()% 100 + 1;

cout << "----------- NUMBER GUESSING GAME ---------" << std::endl;

do
{
cout << "Enter any number to guess correct number! (between 1 and 100): ";
cin >> estimated_num;
attempts_by_user++;

if (estimated_num < random_num)
{
cout << "Too low number you entered! Please Try again." << endl;
}
else if (estimated_num > random_num)
{
cout << "Too high number you entered! Please Try again." << endl;
}
 else
{
cout << "Congratulations! Your entered number is correct ! "<<endl;
cout << "You guessed correct number in " << attempts_by_user<< " attempts." <<endl;
}
}
while (estimated_num != random_num);

return 0;

}