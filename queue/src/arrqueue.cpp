#include "../include/arrqueue.h"
#include <iostream>
#include <string>

arrqueue::arrqueue():m_front(START), m_rear(EMPTY){}

arrqueue::arrqueue(const int64_t & elem):m_front(START), m_rear(EMPTY)
{
    push(elem);
}


arrqueue::arrqueue(const arrqueue & _queue)
{
    if(&_queue != this){
        this->m_front = _queue.m_front;
        this->m_rear = _queue.m_rear;
        std::copy(_queue.m_queue, _queue.m_queue + (m_front - m_rear), this->m_queue);
    }
}

arrqueue & arrqueue::operator=(const arrqueue & _queue)
{
    if(&_queue != this){
        this->m_front = _queue.m_front;
        this->m_rear = _queue.m_rear;
        std::copy(_queue.m_queue, _queue.m_queue + (m_front - m_rear), this->m_queue);
    }

    return *this;
}

arrqueue::~arrqueue()
{

}

int64_t arrqueue::pop()
{
    if(isEmpty()){
        std::cout<<"Can't pop element, the Queue is Empty!! \n";
        return -100000000;
    }
    return m_queue[m_rear++];
}

void arrqueue::push(const int64_t & elem)
{
    if(isFull()) {
        std::cout<<"Can't push an element, the Queue is Full!! \n";
        return;
    }

    m_queue[m_front++] = elem;
}

int64_t arrqueue::top()
{
    if(isEmpty()) {
        return EMPTY;
    }

    return m_queue[m_front];
}

bool arrqueue::isEmpty()
{
    return m_front==EMPTY;
}

bool arrqueue::isFull()
{
    return m_rear == m_front;
}

const char * PASS = "PASSED";
const char * FAILED = "FAILED";

void test(void);
bool test_def_cnts();
bool test_def_cnts2();
bool test_cpy_cnts();
bool test_assig_op();
bool test_push();
bool test_pop();
int main (int argc, char * argv[])
{
    test();
    return 0;
}

void test()
{
   
   if(test_def_cnts()) {
        std::cout<<"default constructor: "<<PASS<<"\n";
   } else {
        std::cout<<"default constructor: "<<FAILED<<"\n";
   }

    if(test_def_cnts2()) {
        std::cout<<"default constructor: "<<PASS<<"\n";
    } else {
        std::cout<<"default constructor: "<<FAILED<<"\n";
    }

    if(test_cpy_cnts()) {
        std::cout<<"Copy Constructor: "<<PASS<<"\n";
    } else {
        std::cout<<"Copy Constructor: "<<FAILED<<"\n";
    }

    if(test_assig_op()) {
        std::cout<<"assigment operator test: "<<PASS<<"\n";
    } else {
        std::cout<<"assigment operator test: "<<FAILED<<"\n";
    }

    if(test_push()) {
        std::cout<<"push test: "<<PASS<<"\n";
    } else {
        std::cout<<"push test: "<<FAILED<<"\n";
    }

    if(test_pop()) {
        std::cout<<"pop test: "<<PASS<<"\n";
    } else {
        std::cout<<"pop test: "<<FAILED<<"\n";
    }
}

bool test_def_cnts()
{
    arrqueue myq{5};
    if(myq.isEmpty())
        return false;
    return true;
}

bool test_def_cnts2()
{
    arrqueue myq{};
    if(myq.isEmpty())
        return false;
    return true;
}

bool test_cpy_cnts()
{
    arrqueue myq{5};
    arrqueue myq2{myq};
    if(myq2.isEmpty())
        return false;
    return true;
}

bool test_assig_op()
{
    arrqueue myq{5};
    arrqueue myq2 = myq;
    if(myq2.isEmpty())
        return false;
    return true;
}

bool test_push()
{
    arrqueue myq;
    myq.push(69);
    myq.push(69);
    myq.push(23);
    myq.push(18);
    if(myq.isEmpty())
        return false;
    return true;
}

{
    arrqueue myq{};
    if(myq.isEmpty())
        return false;
    return true;
}
