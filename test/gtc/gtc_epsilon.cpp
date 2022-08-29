#include <glm/gtc/epsilon.hpp>
#include <glm/gtc/constants.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/vector_relational.hpp>

int test_defined()
{
	glm::epsilonEqual(glm::vec2(), glm::vec2(), glm::vec2());
	glm::epsilonEqual(glm::vec3(), glm::vec3(), glm::vec3());
	glm::epsilonEqual(glm::vec4(), glm::vec4(), glm::vec4());

	glm::epsilonNotEqual(glm::vec2(), glm::vec2(), glm::vec2());
	glm::epsilonNotEqual(glm::vec3(), glm::vec3(), glm::vec3());
	glm::epsilonNotEqual(glm::vec4(), glm::vec4(), glm::vec4());

	glm::epsilonNotEqual(glm::mat2x3(), glm::mat2x3(), glm::mat2x3());
	glm::epsilonNotEqual(glm::mat2(), glm::mat2(), glm::mat2());
	glm::epsilonNotEqual(glm::mat2x4(), glm::mat2x4(), glm::mat2x4());

	glm::epsilonNotEqual(glm::mat3x2(), glm::mat3x2(), glm::mat3x2());
	glm::epsilonNotEqual(glm::mat3(), glm::mat3(), glm::mat3());
	glm::epsilonNotEqual(glm::mat3x4(), glm::mat3x4(), glm::mat3x4());

	glm::epsilonNotEqual(glm::mat4x2(), glm::mat4x2(), glm::mat4x2());
	glm::epsilonNotEqual(glm::mat4(), glm::mat4(), glm::mat4());
	glm::epsilonNotEqual(glm::mat4x3(), glm::mat4x3(), glm::mat4x3());

	glm::epsilonEqual(glm::vec2(), glm::vec2(), 0.0f);
	glm::epsilonEqual(glm::vec3(), glm::vec3(), 0.0f);
	glm::epsilonEqual(glm::vec4(), glm::vec4(), 0.0f);
	glm::epsilonEqual(glm::quat(), glm::quat(), 0.0f);

	glm::epsilonNotEqual(glm::mat2(), glm::mat2(), 0.0f);

	glm::epsilonNotEqual(glm::vec2(), glm::vec2(), 0.0f);
	glm::epsilonNotEqual(glm::vec3(), glm::vec3(), 0.0f);
	glm::epsilonNotEqual(glm::vec4(), glm::vec4(), 0.0f);
	glm::epsilonNotEqual(glm::quat(), glm::quat(), 0.0f);

	return 0;
}

template<typename T>
int test_equal()
{
	int Error(0);
	
	{
		T A = glm::epsilon<T>();
		T B = glm::epsilon<T>();
		Error += glm::epsilonEqual(A, B, glm::epsilon<T>() * T(2)) ? 0 : 1;
	}

	{
		T A(0);
		T B = static_cast<T>(0) + glm::epsilon<T>();
		Error += glm::epsilonEqual(A, B, glm::epsilon<T>() * T(2)) ? 0 : 1;
	}

	{
		T A(0);
		T B = static_cast<T>(0) - glm::epsilon<T>();
		Error += glm::epsilonEqual(A, B, glm::epsilon<T>() * T(2)) ? 0 : 1;
	}

	{
		T A = static_cast<T>(0) + glm::epsilon<T>();
		T B = static_cast<T>(0);
		Error += glm::epsilonEqual(A, B, glm::epsilon<T>() * T(2)) ? 0 : 1;
	}

	{
		T A = static_cast<T>(0) - glm::epsilon<T>();
		T B = static_cast<T>(0);
		Error += glm::epsilonEqual(A, B, glm::epsilon<T>() * T(2)) ? 0 : 1;
	}

	return Error;
}

int main()
{
	int Error(0);

	Error += test_defined();
	Error += test_equal<float>();
	Error += test_equal<double>();

	return Error;
}


