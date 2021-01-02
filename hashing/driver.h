#ifndef DRIVER_H
#define DRIVER_H
#include<fstream>
using namespace std;

/*Brief:
 *  Takes in file to open for input and the function to call.
 *Params:
 *  const char *str
 *  int(*func_ptr)(int* arr,int size,int data)
 * Returns:
 *  VOID
 */ 
#define DRIVER_CODE(str,func_ptr,data)  \
{                                       \
    ifstream in(str);                   \
    if(in.is_open()){                   \
        int n;                          \
        in>>n;                          \
        int arr[n];                     \
        for(int i=0;i<n;i++){           \
            in>>arr[i];                 \
        }                               \
        std::cout<<func_ptr(arr,n,data);\
        in.close() ;                    \
    }                                   \
}                                       \

#endif /* DRIVER_H */
