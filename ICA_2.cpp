#include <iostream>

using namespace std;

//prompt user for 5 quiz scores and store in array then print the average
int main()
{
  int quizArray [5] = {};
  double sum =0.0;
  int userInput;

  for (int i = 0; i < 5; ++i)  {
    cout << "Input your 5 quiz scores one at a time: " << endl;
    cin >> userInput;
    quizArray [i] = userInput;
    sum += userInput;
  }

  cout << "Your average quiz score is: " << sum/5 << endl;

  return 0;
}
