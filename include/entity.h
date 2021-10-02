#pragma once
#include <string>

#ifndef ENTITY_H
#define ENTITY_H

class Entity
{
public:
    int m_x, m_y;
    char m_placeholder;
    std::string m_name;
    bool m_blocks;

    // Constructor prototype
    Entity(int x, int y, char placeholder, std::string name, bool blocks = false);
};

#endif