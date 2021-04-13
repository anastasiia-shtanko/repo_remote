#pragma once

#include <iostream>

using namespace std;

template< typename T >
class List
{

public:
    List();
    List(const int listSize);
    ~List();

    void push_front( const T& t );
    void pop_front();
    bool empty();
    void clear();

    struct Element
    {
        Element() : p_next( nullptr ),t(nullptr) { };
        Element( const T& t ) : t( t ), p_next( nullptr ) { };

        T t;
        Element* p_next;
    };
    class Iterator {
public:
    explicit Iterator( Element* El )
        : iter( El)
    {}
    ~Iterator()
    {}

    bool operator==( const Iterator& other ) const
    {
        if( this == &other )
            return true;
        return iter == other.iter;
    }

    bool operator!=( const Iterator& other ) const
    {
        return !operator==( other );
    }

    T operator*() const
    {
        if(iter)
            return iter->t;
        return T();
    }

    void operator++()
    {
        if( !iter )
            throw "Iterator exception.";

        iter = iter->p_next;
    }

    Element* iter;
};
    T front() const;
    Iterator begin() const;
    Iterator end() const;
    void erase_after(Element* setEl);
    void insert_after(Element* setEl,const T& t);
    void swap(List<T> *l2);


    size_t size() const;
private:
    Element* p_last;
    Element* p_first;
    size_t sizeNum=0;
};


template< typename T >
List <T>::List()
    :p_last(nullptr),p_first(nullptr)
{

}

template< typename T >
List <T>::List(const int listSize)
{
    for(int i=0;i<listSize;++i)
    {
        push_front('0');
    }
    sizeNum = listSize;
}

template< typename T >
List< T >::~List()
{
    clear();
}

template< typename T >
void List< T >::push_front( const T &t )
{
   Element* newEl = new Element( t );
   if(p_last)
   {
       p_last->p_next=newEl;
   }
   newEl->p_next=nullptr;
   p_last = newEl;
   ++sizeNum;
   if(sizeNum==1)
   {
       p_first=newEl;
   }
}

template< typename T >
void List< T >::pop_front()
{
    if( p_last )
    {
        for(Element* el=p_first;el!=nullptr;el=el->p_next)
        {
            if(el->p_next==p_last)
            {
                el->p_next=nullptr;
                delete p_last;
                p_last=el;
            }
        }
        --sizeNum;
    }
}

template< typename T >
bool List< T >::empty()
{
    if(p_last)
    {
        return false;
    }
    return true;
}

template< typename T >
void List< T >::clear()
{
    while( sizeNum>0 )
    {
        pop_front();
    }
}

template< typename T >
T List< T >::front() const
{
    return p_last->t;
}

template< typename T >
typename List< T >::Iterator List<T>::begin() const
{
    return Iterator(p_first);
}

template< typename T >
typename List< T >::Iterator List< T >::end() const
{
    return Iterator( NULL );
}

template< typename T >
void List< T >::erase_after(Element* setEl)
{
    if( p_last )
    {
        for(Element* el=p_first;el!=p_last;el=el->p_next)
        {
            if(el->p_next==setEl)
            {
                el->p_next=setEl->p_next;
                delete setEl; break;
            }
        }
    }
}

template< typename T >
void List< T >::insert_after(Element* setEl,const T& t)
{
    if( p_last )
    {
        Element* newEl = new Element( t );
        newEl->p_next=setEl->p_next;
        setEl->p_next=newEl;
        if(p_last==setEl)
        {
            p_last=newEl;
        }
    }
    else push_front(t);
}

template< typename T >
size_t List< T >::size() const
{
    return sizeNum;
}

template< typename T >
void List< T >::swap(List<T> *l2)
{
    List<T> templ;
    templ.p_first=this->p_first;
    templ.p_last=this->p_last;
    templ.sizeNum=this->sizeNum;

    this->p_first=l2->p_first;
    this->p_last=l2->p_last;
    this->sizeNum=l2->sizeNum;

    l2->p_first=templ.p_first;
    l2->p_last=templ.p_last;
    l2->sizeNum=templ.sizeNum;
}