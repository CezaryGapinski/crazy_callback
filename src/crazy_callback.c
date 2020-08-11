#include "crazy_callback.h"
#include "crazy_lib.h"

int crazy_callback(void)
{
    TCrazyType t = { AEnum2, BEnum2 };

    return crazy_call(t);
}
