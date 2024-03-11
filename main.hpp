//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        /***************************************************
         * Code your program here
         ***************************************************/
         return rand() % 100;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        /***************************************************
         * Code your program here
         ***************************************************/
         int avg = (rdnum1 + rdnum2 + rdnum3) / 3;
         int closest, val1, val2, val3, min;

        val1 = abs(rdnum1 - avg);
        val2 = abs(rdnum2 - avg);
        val3 = abs(rdnum3 - avg);

        closest = rdnum1;
        min = val1;

        if (min > val2) {
                closest = rdnum2;
                min = val2;
        }
        if (min > val3) {
                closest = rdnum3;
                min = val3;
        }
        if (min > val1) {
                closest = rdnum1;
                min = val1;
        }

         return closest;
}