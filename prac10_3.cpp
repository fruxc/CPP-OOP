#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> StringVec;

   StringVec.push_back("Shardul");
   StringVec.push_back("Pramod");
   StringVec.push_back("Rane");

   cout << "Index Ke Saath:" << endl;

   int i;
   for(i=0; i < StringVec.size(); i++)
   {
      cout <<i<<": "<<StringVec[i] << endl;
   }

   cout << endl << "Constant Ascending Iterator:" << endl;

   vector<string>::const_iterator citr;
   for(citr=StringVec.begin(); citr!=StringVec.end(); citr++)
   {
      cout << *citr << endl;
   }

   cout << endl << "Reverse Iterator:" << endl;

   vector<string>::reverse_iterator ritr;
   for(ritr=StringVec.rbegin(); ritr!=StringVec.rend(); ++ritr)
   {
      cout << *ritr << endl;
   }

   cout << endl << "Accessing Vector Methods:" << endl;

   cout <<"Size Of Vector"<<StringVec.size() << endl;
   cout<<"\nBefore Swapping"<<endl;
   
   cout <<"Element At 1: "<<StringVec[1] << endl;
	swap(StringVec[0], StringVec[1]);
   cout<<"\nAfter Swapping"<<endl;
   cout <<"Element At 1: "<< StringVec[1] << endl;
	return 0;
}
