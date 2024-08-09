#include<bits/stdc++.h>
using namespace std;

int main()
{
    //find avg of pos and neg numbers
    vector<int> nums;
    int n,poscnt=0;
    cout<<"Enter n ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        nums.push_back(num);

    }
    for(int i=0;i<n;i++)
    {
        
        if(nums[i]>0)
        {
            poscnt++;
        }

    }
    cout<<"pos nos:"<<poscnt<<endl;
    return 0;
}