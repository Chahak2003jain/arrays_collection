#include<bits/stdc++.h>
using namespace std;

void right_rotate(vector<int>&nums,int k)
{
    int l=nums.size();
    k=k%l;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    cout<<"Array after rotation"<<endl;
    for(auto i:nums)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>nums {1,2,3,4,5,6,7,8,9};
    int k;
    cout<<"Enter the number of times array  must be rotated:"<<endl;
    cin>>k;
    right_rotate(nums,k);
}