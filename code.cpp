#include<iostream>
using namespace std;

int main()
{
    int run,time;
    cin >> run;
    
    while(run!=0)
    {
        cin >> time ;
         if ((time >= 1) && (time <= 4))
         {
             cout << "YES"<<endl;
             
         }
         else
         {
             cout << "NO"<<endl;
         }
         run--;
    }
    return 0;
}

// or can also use for loop

for (int i=0; i<run; i++)
    {
        cin >> time ;
         if ((time >= 1) && (time <= 4))
         {
             cout << "YES"<<endl;   
         }
         else
         {
             cout << "NO"<<endl;
         }
    }
    return 0;
}
