#include "../include/countFractures.h"


unsigned int countFractures (unsigned int n, unsigned int m) {
    if ((n == 0) || (m == 0)) {
        return 0;
    }

    unsigned int result = n * m - 1;
    return result;
}