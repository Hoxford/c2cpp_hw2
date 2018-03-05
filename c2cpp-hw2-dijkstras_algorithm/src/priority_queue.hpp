/*
 * priority_queue.hpp
 *
 *  Created on: Mar 4, 2018
 *      Author: Matt B
 */

#ifndef PRIORITY_QUEUE_HPP_
#define PRIORITY_QUEUE_HPP_

#include <iostream>
#include <vector>
#include <list>

using namespace std;

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

#endif /* PRIORITY_QUEUE_HPP_ */
