#include<iostream>
#include<utility>
#include <vector>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int myints[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
    vector<int> myvector (myints, myints+8);            // 10 20 30 30 20 10 10 20
                                                                                                //-----------REPLACE----------
    replace(myvector.begin(), myvector.begin()+5,20, 99); // 10 99 30 30 99 10 10 99

    cout << "myvector contains:";
    for(vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    cout << ' ' << *it;
    cout << '\n';
	
	return 0;
}

/*    
--------COPY-----------
int main () {
  int myints[]={10,20,30,40,50,60,70};
  std::vector<int> myvector (7);

  std::copy ( myints, myints+7, myvector.begin() );

  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it = myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';

  return 0;
}
*/

/*     
--------------FILL--------------
int main () {
  std::vector<int> myvector (8);                       // myvector: 0 0 0 0 0 0 0 0

  std::fill (myvector.begin(),myvector.begin()+4,5);   // myvector: 5 5 5 5 0 0 0 0
  std::fill (myvector.begin()+3,myvector.end()-2,8);   // myvector: 5 5 5 8 8 8 0 0

  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}  */



