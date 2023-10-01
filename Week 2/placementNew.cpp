#include <iostream>

using namespace std;

int main()
{
    unsigned char buffer[sizeof(int) *2];   // Allocate a buffer of 8 bytes

    int *pInt = new (buffer) int (3);       // Placement new, construct an int in the buffer
    int *qInt = new (buffer + sizeof(int)) int (5); // Placement new, construct an int in the buffer

    int *pBuffer = (int*)buffer;                    // Cast the buffer to an int pointer
    int *qBuffer = (int*) (buffer + sizeof(int));

    cout << "Buffer Addr\tInt Addr" << endl;
    cout << pBuffer << "\t" << pInt << endl;
    cout << qBuffer << "\t" << qInt << endl;

    return 0;
}