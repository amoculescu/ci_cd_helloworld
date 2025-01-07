add_test([=[TestCustomMath.square]=]  /home/runner/work/ci_cd_helloworld/ci_cd_helloworld/build/src/test/all_tests [==[--gtest_filter=TestCustomMath.square]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TestCustomMath.square]=]  PROPERTIES WORKING_DIRECTORY /home/runner/work/ci_cd_helloworld/ci_cd_helloworld/build/src/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  all_tests_TESTS TestCustomMath.square)
