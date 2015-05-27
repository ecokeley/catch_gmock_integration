#include "gmock_catch_interceptor.hpp"

#include "catch/catch.hpp"

using namespace ::testing;

namespace cokeley {

gmock_catch_interceptor::gmock_catch_interceptor() {
}

gmock_catch_interceptor::~gmock_catch_interceptor() {
}

void gmock_catch_interceptor::OnTestPartResult(
		const ::testing::TestPartResult & gmock_assertion_result) {
//	printf("%s in %s:%d\n%s\n",
//			gmock_assertion_result.failed() ? "*** Failure" : "Success",
//			gmock_assertion_result.file_name(),
//			gmock_assertion_result.line_number(),
//			gmock_assertion_result.summary());
	REQUIRE_FALSE(gmock_assertion_result.failed()); // inverse logic
}

void gmock_catch_interceptor::OnTestProgramStart(const UnitTest& unit_test) {
	//printf("OnTestProgramStart\n");
}
void gmock_catch_interceptor::OnTestIterationStart(const UnitTest& unit_test,
		int iteration) {
	//printf("OnTestIterationStart\n");
}
void gmock_catch_interceptor::OnEnvironmentsSetUpStart(
		const UnitTest& unit_test) {
	//printf("OnEnvironmentsSetUpStart\n");
}
void gmock_catch_interceptor::OnEnvironmentsSetUpEnd(
		const UnitTest& unit_test) {
	//printf("OnEnvironmentsSetUpEnd\n");
}
void gmock_catch_interceptor::OnTestCaseStart(const TestCase& test_case) {
	//printf("OnTestCaseStart\n");
}
void gmock_catch_interceptor::OnTestStart(const TestInfo& test_info) {
	//printf("OnTestStart\n");
}
void gmock_catch_interceptor::OnTestEnd(const TestInfo& test_info) {
	//printf("OnTestEnd\n");
}
void gmock_catch_interceptor::OnTestCaseEnd(const TestCase& test_case) {
	//printf("OnTestCaseEnd\n");
}
void gmock_catch_interceptor::OnEnvironmentsTearDownStart(
		const UnitTest& unit_test) {
	//printf("OnEnvironmentsTearDownStart\n");
}
void gmock_catch_interceptor::OnEnvironmentsTearDownEnd(
		const UnitTest& unit_test) {
	//printf("OnEnvironmentsTearDownEnd\n");
}
void gmock_catch_interceptor::OnTestIterationEnd(const UnitTest& unit_test,
		int iteration) {
	//printf("OnTestIterationEnd\n");
}
void gmock_catch_interceptor::OnTestProgramEnd(const UnitTest& unit_test) {
	//printf("OnTestProgramEnd\n");
}

} /* namespace cokeley */

