//============================================================================
// Name        : main.cpp
// Author      : Matt B
// Version     :
// Copyright   : Coursera HW
// Description : Dijkstra's Algorithm for a map graph assignment
//============================================================================

/* Basic problem:
 * Write a set of constructors for declaring and initializing
 * a graph. An edge will have a positive cost that is its distance. Have a
 * procedure that produces a randomly generated set of edges with positive
 * distances. Assume the graphs are undirected. The random graph procedure
 * should have edge density as a parameter and distance range as a parameter.
 * So a graph whose density is 0.1 would have 10% of its edges picked at random
 * and its edge distance would be selected at random from the distance range.
 * The procedure should run through all possible undirected edges, say (i,j)
 * and place the edge in the graph if a random probability calculation is less
 * than the density. Compute for a set of randomly generated graphs an average
 * shortest path.
 */

/* Turn in:
 * Printout of program, 200 words on what you learned, and output showing the average
 * path length calculation. Use densities: 20% and 40% on a graph of 50 nodes with
 * a distance range of 1.0 to 10.0. To get an average path length, compute the
 * 49 paths.
 */


#include <iostream>
#include <vector>
#include <list>

#include "graph.hpp"
#include "priority_queue.hpp"
#include "shortest_path.hpp"

using namespace std;

template <typename T1, typename T2>
class Priority_Queue
{
public:
    Priority_Queue(){}
    ~Priority_Queue(){}
    //chgPrioirity(PQ, priority): changes the priority (node value) of queue element.
    bool chgPrioirity(int priority);
    //removes the top element of the queue.
    unsigned int minPrioirty();
    //does the queue contain queue_element.
    bool contains(unsigned int queue_element);
    //insert queue_element into queue
    bool Insert(unsigned int queue_element);
    //returns the top element of the queue.
    unsigned int top();
    //return the number of queue_elements.
    unsigned int size();
};

template <typename T1, typename T2>
inline bool Priority_Queue<T1, T2>::chgPrioirity(int priority)
{
    return false;
}

template <typename T1, typename T2>
inline unsigned int Priority_Queue<T1, T2>::minPrioirty()
{
    return false;
}

template <typename T1, typename T2>
inline bool Priority_Queue<T1, T2>::contains(unsigned int queue_element)
{
    return false;
}

template <typename T1, typename T2>
inline bool Priority_Queue<T1, T2>::Insert(unsigned int queue_element)
{
    return false;
}

template <typename T1, typename T2>
inline unsigned int Priority_Queue<T1, T2>::top()
{
    return false;
}

template <typename T1, typename T2>
inline unsigned int Priority_Queue<T1, T2>::size()
{
    return false;
}

class Shortest_Path
{
public:
    //the constructor will determine the shortest path between start and end
    Shortest_Path(Graph * graph, unsigned int start, unsigned int end);
    ~Shortest_Path();
    //returns the shortest path between start and end
    list<unsigned int> *path();
    //return the path cost associated with the shortest path.
    unsigned int path_size(int u, int w);
private:
    unsigned int path_exists(unsigned int node_a, unsigned int node_b);
    Priority_Queue<unsigned int, float> pQueue;
    list<unsigned int> shortest_path_;
    unsigned int start_;
    unsigned int end_;
    Graph * graph_;
};

Shortest_Path::Shortest_Path(Graph * graph, unsigned int start, unsigned int end)
{
//    shortest_path_ = NULL;
    start_ = start;
    end_ = end;
    graph_ = graph;

}

Shortest_Path::~Shortest_Path()
{

}

inline list<unsigned int> *Shortest_Path::path()
{
    for(unsigned int i = 0; i < graph_->total_vertices_; i++)
    {
        if(graph_->)
    }
    return &shortest_path_;
}

unsigned int Shortest_Path::path_size(int u, int w)
{
    return 0;
}

unsigned int Shortest_Path::path_exists(unsigned int node_a, unsigned int node_b)
{

}

class Graph
{
public:
    Graph(unsigned int verticies, float max_range, double density);

    ~Graph();

    // returns the number of vertices in the graph
    unsigned int V();
    //returns the number of edges in the graph
    unsigned int E();
    //tests whether there is an edge from node x to node y.
    bool adjacent(unsigned int node_x, unsigned int y);
    //lists all nodes y such that there is an edge from x to y.
    vector<unsigned int>* neighbors(unsigned int node_x);
    //returns the value associated with the node x.
    int get_node_value (unsigned int node_x);
    //sets the value associated with the node x to a.
    bool set_node_value(unsigned int node_x, int a);
    //returns the value associated to the edge (x,y).
    float get_edge_value(unsigned int node_x, unsigned int node_y);
    //sets the value associated to the edge (x,y).
    bool set_edge_value(unsigned int node_x, unsigned int node_y, float value);
private:
    //adds to G the edge from x to y, if it is not there, only used by the constructor.
    bool add_edge(unsigned int x, unsigned int y, float range);
    //removes the edge from x to y, if it is there, only used by the constructor.
    bool remove_edge(unsigned int node_x, unsigned int node_y);

    float density_;
    unsigned int total_vertices_;
    unsigned int total_edges_;
    float max_range_;
    vector<vector<double>>graph_;
    vector<int>values_;
};

inline unsigned int Graph::V()
{
    return total_vertices_;
}

inline unsigned int Graph::E()
{
    return total_edges_;
}

inline bool Graph::adjacent(unsigned int node_x, unsigned int node_y)
{
    return (graph_[node_y][node_x] == -1) ? false : true;
}

inline vector<unsigned int>* Graph::neighbors(unsigned int node_x)
{
    assert((node_x <= total_vertices_)&&(node_x >= 1));
    vector<unsigned int>neighbors;

    for(unsigned int y = 0; y < total_vertices_; y++)
    {
        if(graph_[node_x][y] != -1)
        {
            neighbors.push_back(y + 1);
        }
    }

    bool is_empty = neighbors.empty();
    return((is_empty == true) ? NULL : &neighbors);
}

inline bool Graph::add_edge(unsigned int node_x, unsigned int node_y, float range)
{
    if(graph_[node_y][node_x] == -1)
    {
        if(graph_[node_x][node_y] == -1)
        {
            graph_[node_y][node_x] = range;
            graph_[node_x][node_y] = range;
            cout <<"[" << node_y << "][" << node_x <<"] = "<<range<<endl;
        }
        else
        {
            cout <<"cant exist!"<<endl;
            return false;
        }
    }
    else
    {
        cout <<"edge exists"<<endl;
        return false;
    }

    return true;
}

inline bool Graph::remove_edge(unsigned int node_x, unsigned int node_y)
{
    if(graph_[node_y][node_x] != -1)
    {
        if(graph_[node_x][node_y] != -1)
        {
            graph_[node_y][node_x] = -1;
            graph_[node_x][node_y] = -1;
        }
        else
        {
            cout <<"cant exist!"<<endl;
            return false;
        }
    }
    else
    {
        return false;
    }
    return true;
}

inline int Graph::get_node_value(unsigned int node_x)
{
    assert((node_x <= total_vertices_)&&(node_x >= 1));
    return values_[(node_x - 1)];
}

inline bool Graph::set_node_value(unsigned int node_x, int a)
{
    assert((node_x <= total_vertices_)&&(node_x >= 1));
    values_[(node_x - 1)] = a;
    return true;
}

inline float Graph::get_edge_value(unsigned int node_x, unsigned int node_y)
{
    return graph_[node_y][node_x];
}

inline bool Graph::set_edge_value(unsigned int node_x, unsigned int node_y, float value)
{
    assert((node_x <= total_vertices_)&&(node_x >= total_vertices_));
    assert((value <= max_range_)&&(value >= 0.0));
    graph_[node_y - 1][node_x - 1] = value;
    graph_[node_x - 1][node_y - 1] = value;

    return true;
}

Graph::Graph(unsigned int verticies, float max_range, double density)
{
    assert(density <= 1);
    assert((max_range >= 1.0)&(max_range <= 10.0));
    density_ = density;
    total_vertices_ = verticies;
    total_edges_ = 0;
    max_range_ = max_range;
    graph_.resize(verticies, vector<double>(verticies,-1));
    values_.resize(verticies, 0);

    srand(time(nullptr));

    for(unsigned int y = 0; y < total_vertices_; y++)
    {
        for(unsigned int x = 0; x < total_vertices_; x++)
        {
            if(y == x)
            {
                continue;
            }
            else
            {
                double random = rand() % 10;
                double edge_probability = random/10.0;
                if(edge_probability <= density_)
                {
                    int mod = max_range * 10;
                    float random = rand() % mod;
                    float edge_range = random/(10.0) + 0.1;
                    add_edge(x,y,edge_range);
                }
            }
        }
    }
}

Graph::~Graph()
{
    graph_.clear();
    graph_.shrink_to_fit();
    values_.clear();
    values_.shrink_to_fit();
}



int main() {
    int verticies = 50;
    float max_range = 9.5;
    float density = 0.2;
    Graph * graph = new Graph(verticies, max_range, density);

    Shortest_Path * Path = new Shortest_Path(graph, 10, 30);
    for(int x = 0; x < verticies; x++)
    {
        for(int y = 0; y < verticies; y++)
        {
            Path->path();
        }
    }
    cout << "-fin-" << endl;
    return 0;
}
