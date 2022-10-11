#define STB_DS_IMPLEMENTATION
#include <stb_ds.h>
#include <utest.h>

UTEST(array, arrins)
{
	int *arr = NULL;
	ASSERT_EQ(0, arrlen(arr));
	ASSERT_EQ((size_t)0, arrlenu(arr));
	arrins(arr, 0, 42);
	ASSERT_EQ(1, arrlen(arr));
	ASSERT_EQ((size_t)1, arrlenu(arr));
	ASSERT_EQ(42, arr[0]);
	arrfree(arr);
}

UTEST(array, arrinsn)
{
	int *arr = NULL;
	arrins(arr, 0, 42);
	arrinsn(arr, 0, 1);
	ASSERT_EQ(2, arrlen(arr));
	ASSERT_EQ(42, arr[1]);
	arr[0] = 23;
	arrinsn(arr, 1, 2);
	ASSERT_EQ(4, arrlen(arr));
	ASSERT_EQ(23, arr[0]);
	ASSERT_EQ(42, arr[3]);
}

