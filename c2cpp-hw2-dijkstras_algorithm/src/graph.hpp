/*
 * graph.hpp
 *
 *  Created on: Mar 4, 2018
 *      Author: Matt B
 */

#ifndef INC_GRAPH_HPP_
#define INC_GRAPH_HPP_

using namespace std;

class Graph
{
public:
    Graph()
    {
        total_vertices = total_edges = 0;
    }

    ~Graph()
    {

    }

    // returns the number of vertices in the graph
    unsigned int V();
    //returns the number of edges in the graph
    unsigned int E();
    //tests whether there is an edge from node x to node y.
    bool adjacent(unsigned int node_x, unsigned int y);
    //lists all nodes y such that there is an edge from x to y.
    vector<int>* neighbors(unsigned int node_x);
    //adds to G the edge from x to y, if it is not there.
    bool add(unsigned int x, unsigned int y);
    //removes the edge from x to y, if it is there.
    bool remove(unsigned int node_x, unsigned int node_y);
    //returns the value associated with the node x.
    int get_node_value (unsigned int node_x);
    //sets the value associated with the node x to a.
    bool set_node_value(unsigned int node_x, int a);
    //returns the value associated to the edge (x,y).
    unsigned int get_edge_value(unsigned int node_x, unsigned int node_y);
    //sets the value associated to the edge (x,y) to v.
    bool set_edge_value(unsigned int node_x, unsigned int node_y, unsigned int v);

private:
    unsigned int total_vertices;
    unsigned int total_edges;
};

inline unsigned int Graph::V()
{
    return 0;
}

inline unsigned int Graph::E()
{
    return 0;
}

inline bool Graph::adjacent(unsigned int node_x, unsigned int y)
{
    return false;
}

inline vector<int>* Graph::neighbors(unsigned int node_x)
{
    return NULL;
}

inline bool Graph::add(unsigned int x, unsigned int y)
{
    return false;
}

inline bool Graph::remove(unsigned int node_x, unsigned int node_y)
{
    return false;
}

inline int Graph::get_node_value (unsigned int node_x)
{
    return 0;
}

inline bool Graph::set_node_value(unsigned int node_x, int a)
{
    return false;
}

inline unsigned int Graph::get_edge_value(unsigned int node_x, unsigned int node_y)
{
    return 0;
}

inline bool Graph::set_edge_value(unsigned int node_x, unsigned int node_y, unsigned int v)
{
    return false;
}

#endif /* INC_GRAPH_HPP_ */
