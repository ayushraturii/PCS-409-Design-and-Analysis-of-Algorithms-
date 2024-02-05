#include <iostream>
#include <vector>
using namespace std;
class search
{
public:
//binary search
int binary_search (vector < int >v, int key)
{
    int lb=0;
    int ub=v.size()-1;
    int mid;
    while(lb<=ub)
    {
        mid=lb+(ub-lb)/2;
        if(v.at(mid)>key)
            ub=mid-1;
        else if(v.at(mid)<key)
            lb=mid+1;
        else
            return mid+1;
    }
	return -1;
}
};

int main ()
{
    int t_case;
    cin >> t_case;
    search ob[t_case];
    vector < int >v;
    int num;
    for (int i = 0; i < t_case; i++)
	{
	    int siz;
	    cin >> siz;
	    for (int j = 0; j < siz; j++)
	    {
	    	cin >> num;
	        v.push_back(num);
	    }
	    int key;
	    cin >> key;
	    int f=ob[i].binary_search(v, key);
        if(f!=-1)
            cout<<"present "<<f;
        else
            cout<<"Not present "<<f;
	    v.clear ();
	}
    return 0;
}