#include "containers/list.h"
#include "gtest/gtest.h"


TEST(List, push_front)
{
    List<int> list;
    list.push_front(10);
    EXPECT_EQ(list.front(), 10);
}

TEST(List,pop_front)
{
    List<int> list;
    list.push_front(2);
    list.push_front(3);
    list.pop_front();
    EXPECT_EQ(list.front(), 2);
}



int main(int argc, char *argv[])
{

    List<int> l;
    l.push_front(5);
    l.push_front(4);
    l.push_front(9);
    l.push_front(2);
    try
    {
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
    }
    catch(const char& e)
    {
        std::cerr << e << endl;
    }


    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
