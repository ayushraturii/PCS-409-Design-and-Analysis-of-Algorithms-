#include <iostream>
#include <vector>
using namespace std;
class indices
{
public :
   vector <int> triplets(vector <int> &arr)
    {
        int i=0,j=0;
        vector <int>ans(3,-1);
        for(int k=arr.size();k>=2;k--)
        {
            i=0;
            j=k-1;
            while(i<j)
            {
                if(arr[k]==arr[i]+arr[j])
                {
                    ans[0]=i;
                    ans[1]=j;
                    ans[2]=k;
                    break;
                }
                else if(arr[k]>arr[i]+arr[j])
                    i++;
                else
                    j--;
            }
        }
        return ans;
    }
};
int main()
{
    int n;
    cout<<"enter n:";
    cin >> n;
    indices ob[n];
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
for (int i = 0; i < n; i++)
	{
    vector <int> ans =ob[i].triplets(ar);
    for (int i = 0; i <=2; i++)
	{
	    cout<< ans[i];
	}
	  ar.clear ();
	}
  return 0;
}
