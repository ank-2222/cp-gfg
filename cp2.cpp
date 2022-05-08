#include <iostream>
using namespace std;

int main(void) {
   char str[] = "A string.";
   char *ptr = str;
   cout << str[0] <<' '<< *ptr <<' '<<ptr[3]<<"\n";
   ptr += 2;
   cout <<*ptr<<' '<< ptr[2] <<' '<< ptr[5];

   return 0;
}