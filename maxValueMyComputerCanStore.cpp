#include <iostream>
using namespace std;
int main()
{
    size_t max_value = (size_t)-1;
    cout << max_value << endl;

    int *ptr = (int *)malloc(sizeof(int) * (max_value));
    for(size_t i = 0; i < max_value;i++)
    {
        cout << ptr[i] << endl;
    }
    cout << "done"<<endl;
    return 0;
}