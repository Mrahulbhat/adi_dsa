class Solution {
    
    public:
      int evenlyDivides(int n) {
          int temp=n;
          int count=0;
          while(temp>0)
          {
              int rem = temp%10;
              if(rem!=0 && n%rem==0) //number / ind digit
              {
                  count++;
              }
              temp=temp/10;
          }
          return count;
      }
  };
  

  // rem shud not be 0 (divide by zero error)
  // create a temp var to store n so that original number doesnt change