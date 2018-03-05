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

inline bool Priority_Queue::chgPrioirity(int priority)
{
    return false;
}

inline unsigned int Priority_Queue::minPrioirty()
{
    return false;
}

inline bool Priority_Queue::contains(unsigned int queue_element)
{
    return false;
}

inline bool Priority_Queue::Insert(unsigned int queue_element)
{
    return false;
}

inline unsigned int Priority_Queue::top()
{
    return false;
}

inline unsigned int Priority_Queue::size()
{
    return false;
}

#endif /* PRIORITY_QUEUE_HPP_ */
