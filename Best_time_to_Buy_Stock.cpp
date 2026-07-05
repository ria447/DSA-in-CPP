#include <iostream>
using namespace std;

//1st Approach

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


//2nd Approach

int maxProfit(vector<int>& prices) 
{
      int best_buy = prices[0], max_profit = INT_MIN, profit;

      if (prices.size() <= 1)
            return 0;
      else
      {
            for(int i = 1; i < prices.size(); i++)
            {
                best_buy = min(best_buy, prices[i]);
                profit = prices[i] - best_buy;
                max_profit = max(max_profit, profit);

            }   
      }
        
      return max_profit;
    
}

int main()
{
  vec<int> prices = {7,1,5,3,6,4};

  int answer = maxProfit(prices);
  return answer;
}


//output: 5
