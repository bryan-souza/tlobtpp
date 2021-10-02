#include <string>
#include <iostream>
#include "include/entity.h"
using namespace std;


int main()
{
    Entity player(0, 0, '@', "Player", true);
    cout << "Name: " << player.m_name << endl;
    cout << "Position: (" << player.m_x << ", " << player.m_y << ")" << endl;
    cout << "Placeholder: " << player.m_placeholder << endl;
    cout << "Blocks?: " << player.m_blocks << endl;
    return 0;
}
