// Copyright (c) Microsoft
// All rights reserved
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License.
// You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
// THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED,
// INCLUDING WITHOUT LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE, MERCHANTABLITY OR NON-INFRINGEMENT.
// See the Apache Version 2.0 License for specific language governing permissions and limitations under the License.
/// <tags>P1</tags>
/// <summary>Create an array with different rank +ve dimension</summary>

#include "./../../../constructor.h"
#include <amptest_main.h>

runall_result test_main()
{
	accelerator::set_default(require_device().get_device_path());

	runall_result result;

	result &= REPORT_RESULT((test_array_rank<int, 1>()));
	result &= REPORT_RESULT((test_array_rank<int, 5>()));

    return result;
}

