#include <iostream>
#include <vector>
using namespace std;
class binary
{
public :
   int binarysearch(vector <int> &arr,int val)
    {
        int low=0,high=arr.size(),mid=low+(high-low)/2,lb=0/*lower bound*/,ub=0/*upper bound*/;
        while(low<=high)
        {
            if(arr[mid]==val)
            {
                lb=mid;
                high=mid-1;
            }
            else if(val>arr[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        low=0;high=arr.size();mid=low+(high-low)/2;
        while(low<=high)
        {
            if(arr[mid]==val)
            {
                ub=mid;
                low = mid+1;
            }
            else if(val>arr[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
             mid=low+(high-low)/2;
    }
    return ub-lb+1;
}
};
int main()
{
    int n;
    cout<<"enter n:";
    cin >> n;
    binary ob[n];
    vector < int >ar;
    int a;
    for (int i = 0; i < n; i++)
	{
	  int siz;
	  cout<<"enter size";
	  cin >> siz;
	  for (int j = 0; j < siz; j++)
		{
		    cout<<"enter num";
            cin >> a;
            ar.push_back (a);
		}
	  int key;
	  cout<<"enter key";
	  cin >> key;
	  cout<<ob[i].binarysearch(ar, key);
	  ar.clear ();
	}
  return 0;
}
