#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
            // integer
            int intVar = 10;
            cout << "integer type: " << intVar << endl;

            // double
            double dbleVar = 3.141600;
            cout << "double type: " << dbleVar << endl; // extra zeroes doesn't appear

            //  character
            char charVar = 'x';
            cout << "character type: " << charVar << endl;

            //  string
            string strVar = "I am learning c++ for embedding system";
            cout << "string type: " << strVar << endl;

            // boolean
            bool is_active = true;
            cout << "boolean: " << is_active << endl;

            // float
            float pi = 3.14;
            cout << "float: " << pi << endl;

            // constant (not to be changed)
            const float PI = 3.1416;
            cout << "const float: " << PI << endl;

            //  type checking
            cout << "type check:" << typeid(intVar).name() << endl;

            // Float consumes 4 bytes of memory for storage. Double consumes 8 bytes of memory for storage
            cout << "float: " << sizeof(float) << endl;   // float: 4
            cout << "double: " << sizeof(double) << endl; // double: 8

            // loat has comparatively less precision and is used to store decimal numbers with fewer digits.
            // Double has almost twice the precision as float and is used to store decimal numbers with more digits.
            // flota can stores up to 7 decimal points and rounds off the rest of the digits.
            // double can store up to 15 decimal points without rounding them off.
            // long and long int are identical. So are long long and long long int. In both cases, the int is optional

            long longVar = 22222222222;        // l
            long int longIntVar = 33333333333; //  l 
            long long int longLongIntVar = 44444444444444; // x // -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807                           
            unsigned long long int unsLongLongIntVar = 121212121212121212121212121; // unsigned long long int:  0 to 18,446,744,073,709,551,615

            cout << "long type: " << typeid(longVar).name() << endl; // same as integer
            cout << "long int type: " << typeid(longIntVar).name() << endl;
            cout << "long long int type: " << typeid(longLongIntVar).name() << endl;
            cout << "unsigned long long int type: " << typeid(unsLongLongIntVar).name() << endl;
            cout << "unsigned long long int size: " << sizeof(unsigned long long int) << endl;   // 8 bytes of memory
            

            //  unsigned int and unsigned are of same type
            unsigned int a = 1;
            unsigned b = 2; // can never be negative
            signed c = 4;   // an integer is bydefault unsigned

            cout << "signed: " << typeid(c).name() << endl; // same as integer
            cout << "intVar type: " << typeid(intVar).name() << endl;
            cout << "unsigned int: " << typeid(a).name() << endl;
            cout << "unsigned: " << typeid(b).name() << endl;

            //  short and short int are same as type
            short int shortInt = 1;
            short shortInt2 = 2;

            cout << "short int: " << typeid(shortInt).name() << endl;
            cout << "short: " << typeid(shortInt2).name() << endl;

            return 0;
}
