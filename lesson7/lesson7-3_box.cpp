#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void fun_b(box * box);
void fun_a(box& _box);

int main(int argc, char const *argv[])
{
    box buff = {"IBM", 4.25, 45.3, 49.2};
    box & buf = buff;
    fun_b(&buff);
    fun_a(buf);
    
    return 0;
}

void fun_a(box& _box)
{
    std::cout << "The info of box is: \n";
    std::cout << _box.maker << "    ";
    std::cout << _box.height << "    ";
    std::cout << _box.width << "    ";
    std::cout << _box.length << "    ";
    std::cout << _box.volume << std::endl;   
}

void fun_b(box * box)
{
    box->volume = box->height * box->width * box->length;
}
