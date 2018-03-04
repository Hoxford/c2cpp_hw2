/*
 * priority_queue.hpp
 *
 *  Created on: Mar 4, 2018
 *      Author: Matt B
 */

#ifndef PRIORITY_QUEUE_HPP_
#define PRIORITY_QUEUE_HPP_

class PriorityQueue
{
public:
    PriorityQueue(){}
    ~PriorityQueue(){}
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

inline bool PriorityQueue::chgPrioirity(int priority)
{
    return false;
}

inline unsigned int PriorityQueue::minPrioirty()
{
    return false;
}

inline bool PriorityQueue::contains(unsigned int queue_element)
{
    return false;
}

inline bool PriorityQueue::Insert(unsigned int queue_element)
{
    return false;
}

inline unsigned int PriorityQueue::top()
{
    return false;
}

inline unsigned int PriorityQueue::size()
{
    return false;
}

#endif /* PRIORITY_QUEUE_HPP_ */
