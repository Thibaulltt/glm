/// @ref ext_matrix_relational
/// @file glm/ext/matrix_elementwise_comparison.hpp
///
/// @defgroup ext_matrix_elementwise_comparison GLM_EXT_matrix_elementwise_comparison
/// @ingroup ext
///
/// Exposes element-wise comparison functions for matrix types that may take a user defined epsilon values.
///
/// Include <glm/ext/matrix_elementwise_comparison.hpp> to use the features of this extension.
///
/// @see ext_vector_relational
/// @see ext_scalar_relational
/// @see ext_quaternion_relational
/// @see ext_matrix_relational

#pragma once

#include "../detail/qualifier.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_matrix_elementwise_comparison extension included")
#endif

namespace glm
{
namespace elementwise
{
	/// @addtogroup ext_matrix_elementwise_comparison
	/// @{

	/// Perform a element-wise comparison of x < y.
	/// Returns true for all indices of the matrix where x < y.
	///
	/// @tparam C Integer between 1 and 4 included that qualify the number of columns of the matrix.
	/// @tparam R Integer between 1 and 4 included that qualify the number of rows of the matrix.
	/// @tparam T Floating-point or integer data types.
	/// @tparam Q Value from qualifier enum.
	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR mat<C, R, bool, Q> lessThan(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y);

	/// Perform a element-wise comparison of x <= y.
	/// Returns true for all indices of the matrix where x <= y.
	///
	/// @tparam C Integer between 1 and 4 included that qualify the number of columns of the matrix.
	/// @tparam R Integer between 1 and 4 included that qualify the number of rows of the matrix.
	/// @tparam T Floating-point or integer data types.
	/// @tparam Q Value from qualifier enum.
	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR mat<C, R, bool, Q> lessThanEqual(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y);

	/// Perform a element-wise comparison of x > y.
	/// Returns true for all indices of the matrix where x > y.
	///
	/// @tparam C Integer between 1 and 4 included that qualify the number of columns of the matrix.
	/// @tparam R Integer between 1 and 4 included that qualify the number of rows of the matrix.
	/// @tparam T Floating-point or integer data types.
	/// @tparam Q Value from qualifier enum.
	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR mat<C, R, bool, Q> greaterThan(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y);

	/// Perform a element-wise comparison of x >= y.
	/// Returns true for all indices of the matrix where x >= y.
	///
	/// @tparam C Integer between 1 and 4 included that qualify the number of columns of the matrix.
	/// @tparam R Integer between 1 and 4 included that qualify the number of rows of the matrix.
	/// @tparam T Floating-point or integer data types.
	/// @tparam Q Value from qualifier enum.
	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR mat<C, R, bool, Q> greaterThanEqual(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y);

	/// Perform a element-wise comparison of x == y.
	/// Returns true for all indices of the matrix where x == y.
	///
	/// @tparam C Integer between 1 and 4 included that qualify the number of columns of the matrix.
	/// @tparam R Integer between 1 and 4 included that qualify the number of rows of the matrix.
	/// @tparam T Floating-point or integer data types.
	/// @tparam Q Value from qualifier enum.
	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR mat<C, R, bool, Q> equal(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y);

	/// Perform a element-wise comparison of x != y.
	/// Returns true for all indices of the matrix where x != y.
	///
	/// @tparam C Integer between 1 and 4 included that qualify the number of columns of the matrix.
	/// @tparam R Integer between 1 and 4 included that qualify the number of rows of the matrix.
	/// @tparam T Floating-point or integer data types.
	/// @tparam Q Value from qualifier enum.
	template<length_t C, length_t R, typename T, qualifier Q>
	GLM_FUNC_DECL GLM_CONSTEXPR mat<C, R, bool, Q> notEqual(mat<C, R, T, Q> const& x, mat<C, R, T, Q> const& y);

	/// @}
}// namespace elementwise
}// namespace glm

#include "matrix_elementwise_comparison.inl"
