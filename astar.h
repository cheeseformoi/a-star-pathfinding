#ifndef ASTAR_H
#define ASTAR_H

#include <cmath>
#include <vector>

struct Node
{
    int x, y; // location
    float f, g, h; // total, actual and heuristic cost
    Node* parent; // parent node
   
    // constructor for values, parent has default value null 
    Node(int x_, int y_, Node* parent_ = nullptr) : x(x_), y(y_), parent(parent_), f(0), g(0), h(0) {}

    bool operator<(const Node& other)
    {
        return this->f < other.f;
    }
};

float findH(int x1, int y1, int x2, int y2)
{
    return abs(x2 - x1) + abs(y2 - y1);
}   

#endif
