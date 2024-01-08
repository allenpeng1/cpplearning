#include<iostream>
#include<functional>

using namespace std;

function<void()> ptr = nullptr;

int subscribe(const function<void()> &callback);

int test(const function<void()> &callback)
{
    auto sub = [callback](){subscribe(callback);};
    sub();
}



int subscribe(const function<viod()> &callback)
{
    ptr = callback;
    ptr();
}




int main()
{
    auto callback = []{
        cout << "my test" << endl;
    };

    test(callback);
    ptr();
    return 0;
}


