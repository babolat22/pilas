#include <iostream>
#include <queue>
using namespace std;
void printQueue(queue <int> micola)
{
   queue <int> secqueue = micola;
   while (!secqueue.empty())
   {
      cout << '\t' << secqueue.front();
      secqueue.pop();
   }
   cout << '\n';
}
int main()
   {
      queue <int> micola;
      micola.push(2);
      micola.push(4);
      micola.push(6);
      micola.push(8);
      cout << "Mostrando mi cola ...";
      printQueue(micola);
      cout << "\nmicola.size() : " << micola.size();
      cout << "\nmicola.front() : " << micola.front();
      cout << "\nmicola.back() : " << micola.back();
      cout << "\nmicola.pop() : ";
      micola.pop();
      printQueue(micola);
      return 0;
   }
