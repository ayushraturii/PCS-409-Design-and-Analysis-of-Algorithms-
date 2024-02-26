#include <iostream>
#include<vector>

using namespace std;
class Main{
    public:
    void insertionSort(vector<int> &arr)
    {
        int cmp=0,shift=0,j;
        for(int i=1;i<arr.size();i++)
        {
            int t=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>t)
            {
                arr[j+1]=arr[j];
                shift++;
                cmp++;
                j--;
            }
            arr[j+1]=t;
            shift++;
        }
        cout<<cmp<<"\t"<<shift<<endl;

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
        ob[i].insertionSort(arr);
        ob[i].display(arr);

        arr.clear();

    }
}
