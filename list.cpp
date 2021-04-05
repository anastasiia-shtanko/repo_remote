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
    Iterator( Element* El ) 
<<<<<<< HEAD
        : iter( El) 
=======
        : iter( El ) 
>>>>>>> 5761d70e907f8946d41ea9f7af966a26b72905c6
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
<<<<<<< HEAD
        if( !iter )
            throw "Iterator exception.";
                
        iter = iter->p_next;
=======
        if( iter )
            iter = iter->p_next;
>>>>>>> 5761d70e907f8946d41ea9f7af966a26b72905c6
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

<<<<<<< HEAD
=======

>>>>>>> 5761d70e907f8946d41ea9f7af966a26b72905c6
int main()
{
    List<int> l;
    l.push_front(5);
    l.push_front(4);
    l.push_front(9);
    l.push_front(2);
<<<<<<< HEAD
    try
    {
=======
>>>>>>> 5761d70e907f8946d41ea9f7af966a26b72905c6
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase_after(l.begin().iter->p_next);
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.insert_after(l.begin().iter,10);
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.pop_front();
    cout<<"l - ";
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size: "<<l.size()<<endl;
    cout<<"Front element: "<<l.front()<<endl;


    List<int> l2;
    l2.push_front(3);
    l2.push_front(8);
    l2.push_front(7);
    l2.push_front(1);
    l2.push_front(15);
    cout<<"l2 - ";
    for(auto i:l2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //////////////////////////////////////////////////
    l.swap(&l2);
    cout<<"Swaped lists: "<<endl;
    cout<<"l - ";
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"l2 - ";
    for(auto i:l2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
<<<<<<< HEAD
    }
    catch(const char& e)
    {
        std::cerr << e << endl;
    }
    
    
=======
>>>>>>> 5761d70e907f8946d41ea9f7af966a26b72905c6

    return 0;
}


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
    for(auto i=this->begin();i!=this->end();++i)
    {
        templ.push_front(*i);
    }
    this->clear();

    for(auto i:*l2)
    {
        this->push_front(i);
    }
    l2->clear();

    for(auto i:templ)
    {
        l2->push_front(i);
    }
    templ.clear();
<<<<<<< HEAD

=======
>>>>>>> 5761d70e907f8946d41ea9f7af966a26b72905c6
}