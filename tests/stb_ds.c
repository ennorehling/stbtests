#define STB_DS_IMPLEMENTATION
#include <stb_ds.h>
#include <utest.h>

UTEST(array, arrins)
{
	int *arr = NULL;
	ASSERT_EQ(0, arrlen(arr));
	arrins(arr, 0, 42);
	ASSERT_EQ(1, arrlen(arr));
	ASSERT_EQ(42, arr[0]);
	arrfree(arr);
}
