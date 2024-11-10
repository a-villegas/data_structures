/**
* @file Implementation of an array based queue data structure:
*
*/
#ifndef ARRQUEUE_H
#define ARRQUEUE_H
#include <stdint.h>
/** The maximum capacity for the queue */
constexpr int64_t MaxSize = 1000;
constexpr int64_t EMPTY = -1;
constexpr int64_t START = 0;

/**
 * @class arrqueue: is the implementation of a queue based array
 * 
 */
class arrqueue{
    private:
        /** An array of size MaxSize to store internal data */
        int64_t m_queue[MaxSize];
        /** The index to the front of the queue */
        int64_t m_front;
        /** The index to the back of the queue */
        int64_t m_rear;
    
    public:
        /** @brief Default constructor */
        arrqueue();
        /**
        *  @brief Default constructor 
        *  @param elem: The data element to be pushed on to the queue
        */
        arrqueue(const int64_t & elem);
        /** 
        * @brief Default copy constructor
        * @param elem: The data element to be pushed on to the queue
        */
        arrqueue(const arrqueue & _queue);
        /** 
        * @brief Default move constructor 
        * @param _queue: The data to be moved on to the queue object
        */            
        arrqueue(arrqueue && _quueue);
        /** 
        * @brief Default assigment operator 
        *  @param _queue: The data to be copied on to the queue object
        */ 
        arrqueue& operator= (const arrqueue & _queue);
        /** 
        * @brief Default move assigment operator
        *  @param _queue: The data element to be moved onto the queue object
        */ 
        arrqueue& operator= (arrqueue && _queue);
        /** @brief Destructor */ 
        ~arrqueue();
        /** 
        * @brief friend print function 
        * @param queue: The queue object that is going to be printed
        */  
        friend void printqueue(const arrqueue & queue);
        /**
        *  @brief push elements onto the queue at the front
        *  @param elem: The data element to be pushed on to the queue
        */   
        void push(const int64_t & elem);
        /** @brief pop elements from the queue */
        int64_t pop();
        /** @brief returns the element at the top of queue wo popping it
        *           from the queue.
        */
        int64_t top();
        /**
        *  @brief checks if the queue is empty
        *  @return boolean: true is empty, false otherwise
        */
        bool isEmpty();
        /**
        *  @brief Checks if the queue is full
        *  @return boolean: true if full, false otherwise
        */
        bool isFull();
};
#endif /* arrqueue.h */

