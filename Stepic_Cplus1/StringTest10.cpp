#include <iostream>
#include <string>
using namespace std;
int d(string s)
{
  int c1 = 0, c = 0;
  for(auto ch : s){
    if(ch>='0' && ch <='9') 
        c1++;
  }
  if(c1 == s.length() && c1 > 0)
      if(stoi(s)>=0 && stoi(s)<=255) 
        c = 1;
  return c;
}
int main() 
{
    string s, s_temp;
    getline(cin, s);
    s += ".";
    int c = 0;    
    for(auto ch : s){
      if(ch == '.') 
        c++;
        if(ch != '.') {
            s_temp += ch;
        }
      else{
    
        c += d(s_temp);
        s_temp="";
      }
    }
    c--;
    if(c == 7) 
    {
      cout << "YES";
    }
    else
    {
      cout << "NO";
    }
  return 0;
}