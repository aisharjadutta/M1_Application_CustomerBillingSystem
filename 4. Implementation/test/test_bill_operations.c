#include "../unity/unity.h"
#include "../inc/bill_operations.h"

/* Prototypes for all the test functions */
void test_total_bill(void);
void test_net_total(void);
void test_grand_total(void);
void test_negative_total(void);
void test_negative_net_total(void);
void test_negative_grand_total(void);

void setUp(){}
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

  RUN_TEST(test_total_bill);
  RUN_TEST(test_net_total);
  RUN_TEST(test_grand_total);
  RUN_TEST(test_negative_total);
  RUN_TEST(test_negative_net_total);
  RUN_TEST(test_negative_grand_total);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_total_bill(void){
    TEST_ASSERT_EQUAL(135, total_bill(5,27));
    TEST_ASSERT_EQUAL(25, total_bill(5,5));
}

void test_net_total(void){
    TEST_ASSERT_EQUAL(36, net_total(40));
    TEST_ASSERT_EQUAL(72, net_total(80));
    TEST_ASSERT_EQUAL(121.5, net_total(135));
}

void test_grand_total(void){
    TEST_ASSERT_EQUAL(94.4, grand_total(80));
    TEST_ASSERT_EQUAL(165.2, grand_total(140));
    TEST_ASSERT_EQUAL(143.37, grand_total(121.5));

}
void test_negative_total(void){
  TEST_ASSERT_EQUAL(0, total_bill(-5,-76));
  TEST_ASSERT_EQUAL(0, total_bill(-32000,-7600));
  TEST_ASSERT_EQUAL(0, total_bill(25,-63));
  TEST_ASSERT_EQUAL(0, total_bill(-5,34));
}
void test_negative_net_total(void){
  TEST_ASSERT_EQUAL(0, net_total(-32000));
  TEST_ASSERT_EQUAL(0, net_total(-1));
}

void test_negative_grand_total(void){
  TEST_ASSERT_EQUAL(0, grand_total(-32000));
  TEST_ASSERT_EQUAL(0, grand_total(-1));
}