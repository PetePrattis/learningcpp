#include <iostream>

using namespace std;

int printSomething(int x, int a, int b, int c)
{ int answer= x + a + b + c;
cout << "the answer is ";
   return answer;

}

int main ()
{
    cout << printSomething (10, 20, 30, 40);
    return 0;
}
