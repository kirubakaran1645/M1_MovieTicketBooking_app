#include "unity.h"
#include "decleration.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_changeticketprice(void)
{
    int price1=700;
    TEST_ASSERT_EQUAL(700,changeticketprice(price1));
    
}

int main(void)
{
  UNITY_BEGIN();
  
  RUN_TEST(test_changeticketprice);
  return UNITY_END();
}
