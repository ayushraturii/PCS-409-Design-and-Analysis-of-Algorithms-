#include <iostream> 
#include<vector>

using namespace std;
class Main{
    public:
    void selectionSort(vector<int> &arr)
    {
        int cmp=0,swaps=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            int min=i;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[min]>arr[j])
                {
                    min=j;
                    
                }
                cmp++;
            }
            if(min!=i)
            {
                swap(arr[i],arr[min]);
                swaps++;
                
            }
        }
        cout<<cmp<<"\t"<<swaps<<endl;
    }
    void display(vector<int> arr)
    {
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<"\t";
        }
        cout<<endl;
    }
};
int main()
{
    int t;
    cout<<"ENter Test Case"<<endl;
    cin>>t;
    Main ob[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cout<<"Enter size of vector";
        cin>>n;
        vector<int> arr;
        for(int j=0;j<n;j++)
        {
            int a;
            cin>>a;
            arr.push_back(a);
        }
        ob[i].selectionSort(arr);
        ob[i].display(arr);
        
        arr.clear();

    }
}
