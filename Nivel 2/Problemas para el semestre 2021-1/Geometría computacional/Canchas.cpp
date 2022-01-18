
#include <bits/stdc++.h>

using namespace std; 
  
struct Punto { 
     long long x, y; 
}; 
  

long long areaentredosrect(Punto x1, Punto y1, 
                    Punto x2, Punto y2) 
{ 

    long long area1 = abs(x1.x - y1.x) * 
                abs(x1.y - y1.y); 
  

    long long area2 = abs(x2.x - y2.x) * 
                abs(x2.y - y2.y); 
  

    long long areaI = (min(y1.x, y2.x) -  
                 max(x1.x, x2.x)) *  
                (min(y1.y, y2.y) - 
                 max(x1.y, x2.y)); 
  
    return (area1 + area2 - areaI); 
} 
  

int main() 
{ 
    
    Punto x1;
    Punto x2;
    Punto y1;
    Punto y2;
    cin>>x1.x>>x1.y>>y1.x>>y1.y>>x2.x>>x2.y>>y2.x>>y2.y;
    
    if(y1.x<x1.x)
        swap(y1.x,x1.x);
    
    if(y1.y<x1.y)
        swap(y1.y,x1.y);
    
    if(y2.x<x2.x)
        swap(y2.x,x2.x);
    
    if(y2.y<x2.y)
        swap(y2.y,x2.y);
        
    cout << areaentredosrect(x1, y1, x2, y2); 
    return 0; 
} 