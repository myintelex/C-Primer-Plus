#include "cow.h"

int main()
{
    Cow huahuaniu;
    Cow yili("Yili", "Sweet", 20);
    huahuaniu = yili;
    huahuaniu.show_cow();
    yili.show_cow();
}