#include <iostream>

using namespace std;

int main()
{
    int sum=0,user=0;

    cout<< "Rules:\n--> There are 21 Matchsticks.\n--> You can pick up at max 4 matchsticks in one go.\n--> Whoever picked up the last matchstick will loss the game.\n\n\n";

    for(int i=1;sum!=21;++i)
    {
       cout<<"User's turn : ";
       cin>>user;
       sum+=user;
       while(user<1 || user>4)
       {
          sum-=user;
          cout<<"User can't pick matchsticks more than 4 or less than 1...  ";
          cin>>user;
          sum+=user;
          while(sum>21)
          {
             sum-=user;
             cout<<"Only 1 Matchstick left for picking up....  ";
             cin>>user;
             sum+=user;
          }
       }
       //sum+=user;
       cout<<"\nMatchsticks picked = "<<sum<<"\n\n";
       if(sum==21)
         break;
       cout<<"CPU's turn : "<<i*5-sum;
       sum=i*5;
       cout<<"\n\nMatchsticks picked = "<<sum<<"\n\n";

    }

    cout<<"CPU wins :) \n";
    return 0;
}
