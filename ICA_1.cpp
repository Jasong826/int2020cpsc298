#include <iostream>

using namespace std;

//prompt user input and print out grade
int main()  
{
  int userGrade;

  cout << "Please input grade: " << endl;
  cin >> userGrade;

  if (userGrade < 69) {
    cout << "You got an F" << endl;
  }
  else if (userGrade < 80) {
      cout << "You got a C" << endl;
    }
  else if (userGrade < 90) {
      cout << "You got a B" << endl;
   }
   else {
     cout << "You got an A!!" << endl;
   }

   return 0;
}
