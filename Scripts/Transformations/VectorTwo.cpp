// LAST UPDATED DATE : 27/03/2025

#include "../../Scripts/Transformations/VectorTwo.hpp"

std::ostream& operator<<(std::ostream& ostreamComponent, const VectorTwo& thisVectorTwo)
{
	ostreamComponent << "{ ";
	ostreamComponent << "X: ";
	ostreamComponent << thisVectorTwo.GetX();
	ostreamComponent << ", ";
	ostreamComponent << "Y: ";
	ostreamComponent << thisVectorTwo.GetY();
	ostreamComponent << " }";

	return ostreamComponent;
}

VectorTwo::VectorTwo() : m_vectorTwoX(0.0), m_vectorTwoY(0.0)
{

}

VectorTwo::VectorTwo(const double vectorTwoX, const double vectorTwoY) : m_vectorTwoX(vectorTwoX), m_vectorTwoY(vectorTwoY)
{

}

VectorTwo::VectorTwo(const VectorTwo& otherVectorTwo) : m_vectorTwoX(otherVectorTwo.GetX()), m_vectorTwoY(otherVectorTwo.GetY())
{

}

VectorTwo::~VectorTwo()
{

}

const bool VectorTwo::operator==(const VectorTwo& otherVectorTwo) const
{
	const bool vectorTwoXComparison = GetX() == otherVectorTwo.GetX();
	const bool vectorTwoYComparison = GetY() == otherVectorTwo.GetY();

	return vectorTwoXComparison && vectorTwoYComparison;
}

const bool VectorTwo::operator!=(const VectorTwo& otherVectorTwo) const
{
	const bool vectorTwoXComparison = GetX() != otherVectorTwo.GetX();
	const bool vectorTwoYComparison = GetY() != otherVectorTwo.GetY();

	return vectorTwoXComparison || vectorTwoYComparison;
}

const VectorTwo& VectorTwo::operator=(const VectorTwo& otherVectorTwo)
{
	if (this == &otherVectorTwo)
	{
		return *this;
	}
	else
	{
		const double vectorTwoXResult = otherVectorTwo.GetX();
		const double vectorTwoYResult = otherVectorTwo.GetY();

		m_vectorTwoX = vectorTwoXResult;
		m_vectorTwoY = vectorTwoXResult;

		return *this;
	}
}

const VectorTwo VectorTwo::operator+(const VectorTwo& otherVectorTwo) const
{
	const double vectorTwoXResult = GetX() + otherVectorTwo.GetX();
	const double vectorTwoYResult = GetY() + otherVectorTwo.GetY();

	return VectorTwo(vectorTwoXResult, vectorTwoYResult);
}

const VectorTwo VectorTwo::operator-(const VectorTwo& otherVectorTwo) const
{
	const double vectorTwoXResult = GetX() - otherVectorTwo.GetX();
	const double vectorTwoYResult = GetY() - otherVectorTwo.GetY();

	return VectorTwo(vectorTwoXResult, vectorTwoYResult);
}

const VectorTwo VectorTwo::operator*(const VectorTwo& otherVectorTwo) const
{
	const double vectorTwoXResult = GetX() * otherVectorTwo.GetX();
	const double vectorTwoYResult = GetY() * otherVectorTwo.GetY();

	return VectorTwo(vectorTwoXResult, vectorTwoYResult);
}

const VectorTwo VectorTwo::operator/(const VectorTwo& otherVectorTwo) const
{
	const double vectorTwoXResult = GetX() / otherVectorTwo.GetX();
	const double vectorTwoYResult = GetY() / otherVectorTwo.GetY();

	return VectorTwo(vectorTwoXResult, vectorTwoYResult);
}

const VectorTwo& VectorTwo::operator+=(const VectorTwo& otherVectorTwo)
{
	const double vectorTwoXResult = GetX() + otherVectorTwo.GetX();
	const double vectorTwoYResult = GetY() + otherVectorTwo.GetY();

	m_vectorTwoX = vectorTwoXResult;
	m_vectorTwoY = vectorTwoYResult;

	return *this;
}

const VectorTwo& VectorTwo::operator-=(const VectorTwo& otherVectorTwo)
{
	const double vectorTwoXResult = GetX() - otherVectorTwo.GetX();
	const double vectorTwoYResult = GetY() - otherVectorTwo.GetY();

	m_vectorTwoX = vectorTwoXResult;
	m_vectorTwoY = vectorTwoYResult;

	return *this;
}

const VectorTwo& VectorTwo::operator*=(const VectorTwo& otherVectorTwo)
{
	const double vectorTwoXResult = GetX() * otherVectorTwo.GetX();
	const double vectorTwoYResult = GetY() * otherVectorTwo.GetY();

	m_vectorTwoX = vectorTwoXResult;
	m_vectorTwoY = vectorTwoYResult;

	return *this;
}

const VectorTwo& VectorTwo::operator/=(const VectorTwo& otherVectorTwo)
{
	const double vectorTwoXResult = GetX() / otherVectorTwo.GetX();
	const double vectorTwoYResult = GetY() / otherVectorTwo.GetY();

	m_vectorTwoX = vectorTwoXResult;
	m_vectorTwoY = vectorTwoYResult;

	return *this;
}

const VectorTwo VectorTwo::operator*(const double vectorTwoFactor) const
{
	const double vectorTwoXResult = GetX() * vectorTwoFactor;
	const double vectorTwoYResult = GetY() * vectorTwoFactor;

	return VectorTwo(vectorTwoXResult, vectorTwoYResult);
}

const VectorTwo VectorTwo::operator/(const double vectorTwoFactor) const
{
	const double vectorTwoXResult = GetX() / vectorTwoFactor;
	const double vectorTwoYResult = GetY() / vectorTwoFactor;

	return VectorTwo(vectorTwoXResult, vectorTwoYResult);
}

const VectorTwo& VectorTwo::operator*=(const double vectorTwoFactor)
{
	const double vectorTwoXResult = GetX() * vectorTwoFactor;
	const double vectorTwoYResult = GetY() * vectorTwoFactor;

	m_vectorTwoX = vectorTwoXResult;
	m_vectorTwoY = vectorTwoYResult;

	return *this;
}

const VectorTwo& VectorTwo::operator/=(const double vectorTwoFactor)
{
	const double vectorTwoXResult = GetX() / vectorTwoFactor;
	const double vectorTwoYResult = GetY() / vectorTwoFactor;

	m_vectorTwoX = vectorTwoXResult;
	m_vectorTwoY = vectorTwoYResult;

	return *this;
}

const double VectorTwo::GetX() const
{
	return m_vectorTwoX;
}

const double VectorTwo::GetY() const
{
	return m_vectorTwoY;
}

const bool VectorTwo::Compare(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo)
{
	const bool vectorTwoEqualityComparison = firstVectorTwo == secondVectorTwo;
	const bool vectorTwoDifferenceComparison = firstVectorTwo != secondVectorTwo;

	return vectorTwoEqualityComparison && vectorTwoDifferenceComparison;
}

const double VectorTwo::GetDistance(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo)
{
	const double vectorTwoXDifference = firstVectorTwo.GetX() - secondVectorTwo.GetX();
	const double vectorTwoYDifference = firstVectorTwo.GetY() - secondVectorTwo.GetY();

	return std::sqrt(vectorTwoXDifference * vectorTwoXDifference + vectorTwoYDifference * vectorTwoYDifference);
}

const double VectorTwo::GetRealMagnitude(const VectorTwo& otherVectorTwo)
{
	const double vectorTwoXSquared = otherVectorTwo.GetX() * otherVectorTwo.GetX();
	const double vectorTwoYSquared = otherVectorTwo.GetY() * otherVectorTwo.GetY();

	return std::sqrt(vectorTwoXSquared + vectorTwoYSquared);
}

const double VectorTwo::GetSquaredMagnitude(const VectorTwo& otherVectorTwo)
{
	const double vectorTwoXSquared = otherVectorTwo.GetX() * otherVectorTwo.GetX();
	const double vectorTwoYSquared = otherVectorTwo.GetY() * otherVectorTwo.GetY();

	return vectorTwoXSquared + vectorTwoYSquared;
}

const VectorTwo VectorTwo::GetClampedMagnitude(const VectorTwo& otherVectorTwo, const double vectorTwoLength)
{
	const double vectorTwoSquaredMagnitude = GetSquaredMagnitude(otherVectorTwo);

	double vectorTwoXResult;
	double vectorTwoYResult;

	if (vectorTwoSquaredMagnitude > vectorTwoLength * vectorTwoLength)
	{
		const double vectorTwoRealMagnitude = GetRealMagnitude(otherVectorTwo);

		const double vectorTwoXNormalized = otherVectorTwo.GetX() / vectorTwoRealMagnitude;
		const double vectorTwoYNormalized = otherVectorTwo.GetY() / vectorTwoRealMagnitude;

		vectorTwoXResult = vectorTwoXNormalized * vectorTwoLength;
		vectorTwoYResult = vectorTwoYNormalized * vectorTwoLength;
	}
	else
	{
		vectorTwoXResult = otherVectorTwo.GetX();
		vectorTwoYResult = otherVectorTwo.GetY();
	}

	return VectorTwo(vectorTwoXResult, vectorTwoYResult);
}

const VectorTwo VectorTwo::GetNormalization(const VectorTwo& otherVectorTwo)
{
	const float vectorTwoRealMagnitude = GetRealMagnitude(otherVectorTwo);

	double vectorTwoXResult;
	double vectorTwoYResult;

	if (vectorTwoRealMagnitude > 0.0)
	{
		vectorTwoXResult = otherVectorTwo.GetX() / vectorTwoRealMagnitude;
		vectorTwoYResult = otherVectorTwo.GetY() / vectorTwoRealMagnitude;
	}
	else
	{
		vectorTwoXResult = 0.0;
		vectorTwoYResult = 0.0;
	}

	return VectorTwo(vectorTwoXResult, vectorTwoYResult);
}

const double VectorTwo::GetDotProduct(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo)
{
	const double vectorTwoXScalar = firstVectorTwo.GetX() * secondVectorTwo.GetX();
	const double vectorTwoYScalar = firstVectorTwo.GetY() * secondVectorTwo.GetY();

	return vectorTwoXScalar + vectorTwoYScalar;
}

const VectorTwo VectorTwo::GetUnclampedInterpolation(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, const double elapsedTime)
{
	const double vectorTwoXResult = firstVectorTwo.GetX() + (secondVectorTwo.GetX() - firstVectorTwo.GetX()) * elapsedTime;
	const double vectorTwoYResult = firstVectorTwo.GetY() + (secondVectorTwo.GetY() - firstVectorTwo.GetY()) * elapsedTime;

	return VectorTwo(vectorTwoXResult, vectorTwoYResult);
}

const VectorTwo VectorTwo::GetClampedInterpolation(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, double elapsedTime)
{
	VectorTwo vectorTwoDesiredState;

	const double vectorTwoMinimumTime = 0.0;
	const double vectorTwoMaximumTime = 1.0;

	if (elapsedTime <= vectorTwoMinimumTime)
	{
		elapsedTime = vectorTwoMinimumTime;

		vectorTwoDesiredState = firstVectorTwo;
	}
	else if (elapsedTime >= vectorTwoMaximumTime)
	{
		elapsedTime = vectorTwoMaximumTime;

		vectorTwoDesiredState = secondVectorTwo;
	}
	else
	{
		vectorTwoDesiredState = GetUnclampedInterpolation(firstVectorTwo, secondVectorTwo, elapsedTime);
	}

	return vectorTwoDesiredState;
}

const VectorTwo VectorTwo::GetQuadraticBezierCurve(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, const VectorTwo& thirdVectorTwo, const double elapsedTime)
{
	const VectorTwo vectorTwoDesiredABPoint = GetClampedInterpolation(firstVectorTwo, secondVectorTwo, elapsedTime);
	const VectorTwo vectorTwoDesiredBCPoint = GetClampedInterpolation(secondVectorTwo, thirdVectorTwo, elapsedTime);

	return GetClampedInterpolation(vectorTwoDesiredABPoint, vectorTwoDesiredBCPoint, elapsedTime);
}

const VectorTwo VectorTwo::GetCubicBezierCurve(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, const VectorTwo& thirdVectorTwo, const VectorTwo& fourthVectorTwo, const double elapsedTime)
{
	const VectorTwo vectorTwoDesiredABCPoint = GetQuadraticBezierCurve(firstVectorTwo, secondVectorTwo, thirdVectorTwo, elapsedTime);
	const VectorTwo vectorTwoDesiredBCDPoint = GetQuadraticBezierCurve(secondVectorTwo, thirdVectorTwo, fourthVectorTwo, elapsedTime);

	return GetClampedInterpolation(vectorTwoDesiredABCPoint, vectorTwoDesiredBCDPoint, elapsedTime);
}