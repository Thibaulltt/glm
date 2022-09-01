#include "../matrix.hpp"

namespace glm {

namespace elementwise {

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<C, R, bool, Q> lessThan(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y)
	{
		mat<C, R, bool, Q> Result(true);
		for(length_t i = 0; i < C; ++i)
			for(length_t j = 0; j < R; ++j)
				Result[i][j] = x[i][j] < y[i][j];
		return Result;
	}

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<C, R, bool, Q> lessThanEqual(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y)
	{
		mat<C, R, bool, Q> Result(true);
		for(length_t i = 0; i < C; ++i)
			for(length_t j = 0; j < R; ++j)
				Result[i][j] = x[i][j] <= y[i][j];
		return Result;
	}

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<C, R, bool, Q> greaterThan(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y)
	{
		mat<C, R, bool, Q> Result(true);
		for(length_t i = 0; i < C; ++i)
			for(length_t j = 0; j < R; ++j)
				Result[i][j] = x[i][j] > y[i][j];
		return Result;
	}

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<C, R, bool, Q> greaterThanEqual(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y)
	{
		mat<C, R, bool, Q> Result(true);
		for(length_t i = 0; i < C; ++i)
			for(length_t j = 0; j < R; ++j)
				Result[i][j] = x[i][j] >= y[i][j];
		return Result;
	}

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<C, R, bool, Q> equal(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y)
	{
		mat<C, R, bool, Q> Result(true);
		for(length_t i = 0; i < C; ++i)
			for(length_t j = 0; j < R; ++j)
				Result[i][j] = x[i][j] == y[i][j];
		return Result;
	}

	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<C, R, bool, Q> notEqual(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y)
	{
		mat<C, R, bool, Q> Result(true);
		for(length_t i = 0; i < C; ++i)
			for(length_t j = 0; j < R; ++j)
				Result[i][j] = x[i][j] != y[i][j];
		return Result;
	}

}// namespace elementwise

}// namespace glm