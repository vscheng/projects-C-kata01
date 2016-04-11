#include <stdlib.h>
#include <stdint.h>
#include <check.h>

#include "../include/other.h"

START_TEST(test_greeting)
{
}
END_TEST

Suite * greeting_suite(void)
{
    Suite *s;
    TCase *tc_core;
    TCase *tc_limits;

    s = suite_create("Greeting");

    /* Core test case */
    tc_core = tcase_create("Core");

// tcase_add_checked_fixture(tc_core, setup, teardown);
    tcase_add_test(tc_core, test_greeting);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = greeting_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
