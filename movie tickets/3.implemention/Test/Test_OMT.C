#include "unity.h"
#include "unity_internals.h"
#include "food.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_insert_movie(void)
    {
     TEST_ASSERT_EQUAL("movie code");
     TEST_ASSERT_EQUAL("movie name");
     TEST_ASSERT_EQUAL("release date");
     TEST_ASSERT_EQUAL("Ticket price");

     TEST_ASSERT_EQUAL("Record insert successful");
      }

void test_view_all_movie(void)
    {
    TEST_ASSERT_EQUAL("insert_movie");
    }
    
    void test_find_movie(void)
        {
        TEST_ASSERT_EQUAL("view_all_movie");
        }
         
         void test_Book_ticket(void)
         {
         TEST_ASSERT_EQUAL("find_movie");
         }
         
         
         void test_fill_details(void);
         {
         TEST_ASSERT_EQUAL(" name");
         TEST_ASSERT_EQUAL("mobile number");
         TEST_ASSERT_EQUAL("Total number of tickets");
         TEST_ASSERT_EQUAL("cost per tickets");
         TEST_ASSERT_EQUAL("Total amount");
         }
         
         
         int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_insert_movie);
	  	RUN_TEST(test_view_all_movie);
	  	RUN_TEST(test_find_movie);
	  	RUN_TEST(test_book_ticket);
	  	RUN_TEST(test_fill_details);

  		return UNITY_END();
	}
         
         
        
        
