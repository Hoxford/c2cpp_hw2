/*
 * shortest_path.hpp
 *
 *  Created on: Mar 4, 2018
 *      Author: storm
 */

#ifndef SHORTEST_PATH_HPP_
#define SHORTEST_PATH_HPP_

#include <list>

using namespace std;

class Shortest_Path
{
public:
    Shortest_Path(){};
    ~Shortest_Path(){};
    //list of vertices in G(V,E).
    //vertices(List);
    //find shortest path between u-w and returns the sequence of vertices representing shortest path u-v1-v2-…-vn-w.
    list<int> path(int u, int w);
    //return the path cost associated with the shortest path.
    unsigned int path_size(int u, int w);
};

inline list<int> Shortest_Path::path(int u, int w)
{
    list<int> path;
    return path;
}

unsigned int Shortest_Path::path_size(int u, int w)
{
    return 0;
}

#endif /* SHORTEST_PATH_HPP_ */
