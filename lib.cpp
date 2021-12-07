#include "lib.h"
float maggiore(int n,const float v[])
{
    float vmaggiore=v[0];
    for (int i = 1; i < n; ++i)
    {
        if(vmaggiore<v[i]){
            vmaggiore=v[i];
        }
    }
    return vmaggiore;
}
