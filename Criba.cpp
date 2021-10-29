#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm> 
using namespace std;


vector<int> criba_eratostenes(int n)
{
    vector<int> criba;
    int current_primo;  

    for (int i = 2; i <= n; i++)
        criba.push_back(i);
        
    if (n == 2 || n == 3) 
        return criba;

    vector<int>::iterator it = criba.begin();

    current_primo = *it;  

    do
    {
        vector<int>::iterator it2 = it + 1;

        for(; it2 <= criba.end(); it2++)
            if(*it2 % current_primo == 0)
                criba.erase(it2);

        it++;
        current_primo = *it;

    } while (pow(current_primo, 2) < n);

    return criba;
}

int main()
{
    int n=0;      
    int y;      
    vector<int> num_primos;
    int x;
    

    cin >> y;
    int num_ingresados[y];
    
    for(int i=0; i<y; i++){
        cin>>num_ingresados[i];
        if(num_ingresados[i]>n)
            n=num_ingresados[i];
        
    }
    n+=10;
    num_primos = criba_eratostenes(n);

    
    for(int i=0; i<y; i++){
        x=num_ingresados[i];
        
       if(find(num_primos.begin(), num_primos.end(), x) != num_primos.end()) {
             cout << "SI\n";
        } else {
             cout << "NO\n";
            }
    }
    


    return 0;
}