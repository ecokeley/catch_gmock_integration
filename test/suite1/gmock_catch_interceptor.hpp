#ifndef TEST_GMOCK_CATCH_INTERCEPTOR_HPP_
#define TEST_GMOCK_CATCH_INTERCEPTOR_HPP_

#include "gmock/gmock.h"

namespace cokeley {

class gmock_catch_interceptor: public ::testing::EmptyTestEventListener {
public:
	gmock_catch_interceptor();
	virtual ~gmock_catch_interceptor();
	// Called after a failed assertion or a SUCCEED() invocation.
	virtual void OnTestPartResult(::testing::TestPartResult const & test_part_result);

	virtual void OnTestProgramStart(const ::testing::UnitTest& /*unit_test*/);
	virtual void OnTestIterationStart(const ::testing::UnitTest& /*unit_test*/, int /*iteration*/);
	virtual void OnEnvironmentsSetUpStart(const ::testing::UnitTest& /*unit_test*/);
	virtual void OnEnvironmentsSetUpEnd(const ::testing::UnitTest& /*unit_test*/);
	virtual void OnTestCaseStart(const ::testing::TestCase& /*test_case*/);
	virtual void OnTestStart(const ::testing::TestInfo& /*test_info*/);
	virtual void OnTestEnd(const ::testing::TestInfo& /*test_info*/);
	virtual void OnTestCaseEnd(const ::testing::TestCase& /*test_case*/);
	virtual void OnEnvironmentsTearDownStart(const ::testing::UnitTest& /*unit_test*/);
	virtual void OnEnvironmentsTearDownEnd(const ::testing::UnitTest& /*unit_test*/);
	virtual void OnTestIterationEnd(const ::testing::UnitTest& /*unit_test*/, int /*iteration*/);
	virtual void OnTestProgramEnd(const ::testing::UnitTest& /*unit_test*/);
};

} /* namespace cokeley */

#endif /* TEST_GMOCK_CATCH_INTERCEPTOR_HPP_ */
