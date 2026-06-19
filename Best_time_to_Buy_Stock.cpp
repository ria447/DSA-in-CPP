#include <iostream>
using namespace std;

int maxProfit(vector<int> prices) 
{
      int MaxProfit = 0, BestBuy = prices[0];

      for (int i = 1; i < prices.size(); i++)
      {
          if (prices[i] < BestBuy)
          {
              BestBuy = prices[i];
          }
          if (prices[i] > BestBuy)
          {
            MaxProfit = max(MaxProfit, prices[i] - BestBuy);
          }
      }

      return MaxProfit;
}

int main()
{
  vec<int> prices = {7,1,5,3,6,4};

  int answer = maxProfit(prices);
  return answer;
}


//output: 5
