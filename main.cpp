#include <iostream>

using namespace std;

int main()
{
    char x ;
    cin >> x ;
     if(x>='A'&& x<='Z')
    {
        x+=32;
    }
    else
    {
        x-=32;
    }
    cout << x << std::endl;
    return 0;
}
