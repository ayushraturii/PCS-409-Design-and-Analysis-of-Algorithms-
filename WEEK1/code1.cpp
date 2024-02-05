#include <iostream>
#include <vector>
using namespace std;
class search
{
public:
//linear search
int linear_search (vector < int >v, int key)
{
    int i;
	for (i = 0; i < v.size (); i++)
	{
		if (v[i] == key)
		{
			cout << "present " << i + 1;
			return i + 1;
		}
	}
	cout << "Not present "<<i+1;
	return i+1;
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
	    ob[i].linear_search (v, key);
	    v.clear ();
	}
    return 0;
}