#include <iostream>
#include "tv.h"

using namespace std;

int main(int argc, char *argv[])
{
    Tv v(Tv::Off, 1);
    v.setting();
    Remote re(Tv::TV);
    v.setting();
    re.show_state();

    re.onoff(v);
    v.setting();

    v.changeRemoteState(re);
    re.show_state();

    return 0;


}
