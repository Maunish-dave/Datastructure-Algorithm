#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool findsum(int b,set<int> s)
{
    int prev = 0,sum=0;
    auto it = s.find(b);
    if(it != s.end()){
        return true;
    }
    else{

            for(int x: s){
            sum = sum + x;
            if(sum > b){
                return  findsum((sum-b),s);

            }
            else if(sum == b){
                return true;
            }
        }
    }
    return false;
}

void demo(){
  set<int> s;
  cout << "enter the number of values to be entered  "; int a,c; cin >> a;
  for(int i = 0;i<a;i++){
     cin >> c;
    s.insert(c);
  }

  cout << "enter the value whose sum is to be found " ; int b; cin >> b;
cout << findsum(b,s) << endl;
}

int main()
{
    demo();
    return 0;
}

