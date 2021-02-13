#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
// #include "main.h"
#include <stdio.h>


// Write functions for tests (and suite init/cleanup if necessary).

/*
void j_test()
{
  printf("Running j_practice.c \n");
  
  
  printf("Exiting j_practice.c \n");
}

*/

int t_add(int a, int b)
{
  return a+b;
}

void test_add(void)
{
    CU_ASSERT(t_add(14,16) == 30);
    CU_ASSERT(t_add(0,0) == 0);
    CU_ASSERT(t_add(-1,30) == 29);
    CU_ASSERT(t_add(-18,21) == 3);
}
int j_test()

{
  
  printf("Running j_test.c \n");
  
    CU_initialize_registry(); // Initialize the test registry
    CU_pSuite suite1 = CU_add_suite("test_addition", 0, 0); //Add suites to the test registry
    CU_add_test(suite1, "\n\n ... testing addition ... \n\n", test_add); //Add tests to the suites
  
  //Run tests using an appropriate interface
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
  
  
    CU_cleanup_registry(); //Cleanup the test registry
  
     printf("Exiting j_test.c \n");
  
  return 0;
}
