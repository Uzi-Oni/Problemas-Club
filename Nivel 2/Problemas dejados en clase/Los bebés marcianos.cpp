#include <iostream>
#include <string>
#include <stack>


using namespace std;
int main()
{
  stack<string> q;
  int N;
  char E;
  string S;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>E;
        cin>>S;
        if(E=='F'){
            q.push(S);
        }
        else if(E=='B'){
            cout<<S<<" "<<q.top()<<endl;
            q.pop();
            
        }
    }
  return 0;
}