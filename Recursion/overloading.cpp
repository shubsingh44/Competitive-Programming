#include <iostream>
using namespace std;

class printData {
   public:
      int print(int i) {
        cout << "Printing int: " << i << endl;
        return 0;
      }
      void print(double f) {
        cout << "Printing float: " << f << endl;
        cout<<"hello";
      }
      void print(char* c) {
        cout << "Printing character: " << c << endl;
      }
};

int main(void) {
   printData pd;

   // Call print to print integer
  int c= pd.print(5);

   // Call print to print float
   pd.print(500.263);

   // Call print to print character
   pd.print("Hello C++");

   return 0;
}
