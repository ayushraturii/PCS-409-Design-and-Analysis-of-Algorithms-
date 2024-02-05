#include <iostream>
#include <vector>
using namespace std;
class search
{
public:
//jump search
int jump_Search(vector<int> arr,int key)
{
    int i=0;
    int step = 2;
    int n=arr.size();
    while(arr.at(step)<= key && step < n) 
    { 
        i = step;  
        step += 2;
        if(step > n - 1)  
            return -1;
    }
    for(int j=i;j<step;j++)
    {
        if(arr.at(j)==key)
            return j;
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
	    int f=ob[i].jump_Search(v, key);
        if(f!=-1)
            cout<<"present "<<f;
        else
            cout<<"Not present "<<f;
	    v.clear ();
	}
    return 0;
}