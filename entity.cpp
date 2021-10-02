#include <string>
#include "include/entity.h"
using namespace std;

// Constructor implementation
Entity::Entity(int x, int y, char placeholder, std::string name, bool blocks)
{
    m_x = x;
    m_y = y;
    m_placeholder = placeholder;
    m_name = name;
    m_blocks = blocks;    
};