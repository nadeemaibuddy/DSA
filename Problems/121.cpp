#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>prices={7,1,5,3,6,4},po(prices.size(),0);
    int minprice=prices[0];
    int profit=0;
    for(int i=0;i<prices.size();i++)
    {
        if(prices[i]<minprice)
        {
            minprice=prices[i];
        }
        if(prices[i]-minprice>profit)
        {
            profit=prices[i]-minprice;
        }
    }
    cout<<profit;


















    // for(int i=0;i<prices.size();i++)
    // {
    //     int profit=0;
    //     for(int j=i+1;j<po.size();j++)
    //     {
    //         if(prices[j]-prices[i]>profit)
    //         {
    //             profit=prices[j]-prices[i];
    //         }
    //     }
    //     po[i]=profit;
    // }
    // for(int i=0;i<po.size();i++)
    // {
    //     if(l<po[i])
    //     {
    //         l=po[i];
    //     }
    // }
    // cout<<l;














    
    // for(int i=0;i<prices.size();i++)
    // {
    //     int l=0;
    //     for(int j=i+1;j<prices.size();j++)
    //     {
    //         if(prices[i]<prices[j]||profit[i]>=0||l!=0)
    //         {
    //             if(l>=prices[j])
    //             {
    //                 profit[i]=l-prices[i];
                    
    //             }
    //             l=prices[j];
                
    //         }
    //         else{
    //             profit[i]=0;
                
    //         }

    //     }
    // }
    
    // for(int i=0;i<profit.size();i++)
    // {
    //     cout<<profit[i]<<endl;
    // }
}