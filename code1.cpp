#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline (cin, str);
    
     string sy="_";
    for(int i=0;i<str.size();i++)
    {
        if(isupper(str[0]))
        {
            str[0]=tolower(str[0]);
        }
        if(str[i]=='_')
        {
            str.erase(str.begin()+i);
            str[i]=toupper(str[i]);
        }
        else if( i!=0 && isupper(str[i]))
        {
            // str.insert(i, sy);
            str[i]=tolower(str[i]);
            str.insert(i, sy);
            
            
        }
        
        
    }
   
    // for(int i=0;i<str.size();i++)
    // {
    //     if(isupper(str[i]))
    //     {
    //         // str.insert(i, sy);
    //         str[i]=tolower(str[i]);
    //         str.insert(i, sy);
            
            
    //     }
        
    // }
    
    cout<<str<<endl;
    return 0;
}
