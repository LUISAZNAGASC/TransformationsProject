// LAST UPDATED DATE : 27/03/2025

#include "../../Scripts/Transformations/VectorThree.hpp"

std::ostream& operator<<(std::ostream& ostreamComponent, const VectorThree& thisVectorThree)
{
	ostreamComponent << "{ ";
	ostreamComponent << "X: ";
	ostreamComponent << thisVectorThree.GetX();
	ostreamComponent << ", ";
	ostreamComponent << "Y: ";
	ostreamComponent << thisVectorThree.GetY();
	ostreamComponent << ", ";
	ostreamComponent << "Z: ";
	ostreamComponent << thisVectorThree.GetZ();
	ostreamComponent << " }";

	return ostreamComponent;
}

VectorThree::VectorThree() : m_vectorThreeX(0.0), m_vectorThreeY(0.0), m_vectorThreeZ(0.0)
{

}

VectorThree::VectorThree(const double vectorThreeX, const double vectorThreeY, const double vectorThreeZ) : m_vectorThreeX(vectorThreeX), m_vectorThreeY(vectorThreeY), m_vectorThreeZ(vectorThreeZ)
{

}

VectorThree::VectorThree(const VectorThree& otherVectorThree) : m_vectorThreeX(otherVectorThree.GetX()), m_vectorThreeY(otherVectorThree.GetY()), m_vectorThreeZ(otherVectorThree.GetZ())
{

}

VectorThree::~VectorThree()
{

}

const bool VectorThree::operator==(const VectorThree& otherVectorThree) const
{
	const bool vectorThreeXComparison = GetX() == otherVectorThree.GetX();
	const bool vectorThreeYComparison = GetY() == otherVectorThree.GetY();
	const bool vectorThreeZComparison = GetZ() == otherVectorThree.GetZ();

	return vectorThreeXComparison && vectorThreeYComparison && vectorThreeZComparison;
}

const bool VectorThree::operator!=(const VectorThree& otherVectorThree) const
{
	const bool vectorThreeXComparison = GetX() != otherVectorThree.GetX();
	const bool vectorThreeYComparison = GetY() != otherVectorThree.GetY();
	const bool vectorThreeZComparison = GetZ() != otherVectorThree.GetZ();

	return vectorThreeXComparison || vectorThreeYComparison || vectorThreeZComparison;
}

const VectorThree& VectorThree::operator=(const VectorThree& otherVectorThree)
{
	if (this == &otherVectorThree)
	{
		return *this;
	}
	else
	{
		const double vectorThreeXResult = otherVectorThree.GetX();
		const double vectorThreeYResult = otherVectorThree.GetY();
		const double vectorThreeZResult = otherVectorThree.GetZ();

		m_vectorThreeX = vectorThreeXResult;
		m_vectorThreeY = vectorThreeYResult;
		m_vectorThreeZ = vectorThreeZResult;

		return *this;
	}
}

const VectorThree VectorThree::operator+(const VectorThree& otherVectorThree) const
{
	const double vectorThreeXResult = GetX() + otherVectorThree.GetX();
	const double vectorThreeYResult = GetY() + otherVectorThree.GetY();
	const double vectorThreeZResult = GetZ() + otherVectorThree.GetZ();

	return VectorThree(vectorThreeXResult, vectorThreeYResult, vectorThreeZResult);
}

const VectorThree VectorThree::operator-(const VectorThree& otherVectorThree) const
{
	const double vectorThreeXResult = GetX() - otherVectorThree.GetX();
	const double vectorThreeYResult = GetY() - otherVectorThree.GetY();
	const double vectorThreeZResult = GetZ() - otherVectorThree.GetZ();

	return VectorThree(vectorThreeXResult, vectorThreeYResult, vectorThreeZResult);
}

const VectorThree VectorThree::operator*(const VectorThree& otherVectorThree) const
{
	const double vectorThreeXResult = GetX() * otherVectorThree.GetX();
	const double vectorThreeYResult = GetY() * otherVectorThree.GetY();
	const double vectorThreeZResult = GetZ() * otherVectorThree.GetZ();

	return VectorThree(vectorThreeXResult, vectorThreeYResult, vectorThreeZResult);
}

const VectorThree VectorThree::operator/(const VectorThree& otherVectorThree) const
{
	const double vectorThreeXResult = GetX() / otherVectorThree.GetX();
	const double vectorThreeYResult = GetY() / otherVectorThree.GetY();
	const double vectorThreeZResult = GetZ() / otherVectorThree.GetZ();

	return VectorThree(vectorThreeXResult, vectorThreeYResult, vectorThreeZResult);
}

const VectorThree& VectorThree::operator+=(const VectorThree& otherVectorThree)
{
	const double vectorThreeXResult = GetX() + otherVectorThree.GetX();
	const double vectorThreeYResult = GetY() + otherVectorThree.GetY();
	const double vectorThreeZResult = GetZ() + otherVectorThree.GetZ();

	m_vectorThreeX = vectorThreeXResult;
	m_vectorThreeY = vectorThreeYResult;
	m_vectorThreeZ = vectorThreeZResult;

	return *this;
}

const VectorThree& VectorThree::operator-=(const VectorThree& otherVectorThree)
{
	const double vectorThreeXResult = GetX() - otherVectorThree.GetX();
	const double vectorThreeYResult = GetY() - otherVectorThree.GetY();
	const double vectorThreeZResult = GetZ() - otherVectorThree.GetZ();

	m_vectorThreeX = vectorThreeXResult;
	m_vectorThreeY = vectorThreeYResult;
	m_vectorThreeZ = vectorThreeZResult;

	return *this;
}

const VectorThree& VectorThree::operator*=(const VectorThree& otherVectorThree)
{
	const double vectorThreeXResult = GetX() * otherVectorThree.GetX();
	const double vectorThreeYResult = GetY() * otherVectorThree.GetY();
	const double vectorThreeZResult = GetZ() * otherVectorThree.GetZ();

	m_vectorThreeX = vectorThreeXResult;
	m_vectorThreeY = vectorThreeYResult;
	m_vectorThreeZ = vectorThreeZResult;

	return *this;
}

const VectorThree& VectorThree::operator/=(const VectorThree& otherVectorThree)
{
	const double vectorThreeXResult = GetX() / otherVectorThree.GetX();
	const double vectorThreeYResult = GetY() / otherVectorThree.GetY();
	const double vectorThreeZResult = GetZ() / otherVectorThree.GetZ();

	m_vectorThreeX = vectorThreeXResult;
	m_vectorThreeY = vectorThreeYResult;
	m_vectorThreeZ = vectorThreeZResult;

	return *this;
}

const VectorThree VectorThree::operator*(const double vectorThreeFactor) const
{
	const double vectorThreeXResult = GetX() * vectorThreeFactor;
	const double vectorThreeYResult = GetY() * vectorThreeFactor;
	const double vectorThreeZResult = GetZ() * vectorThreeFactor;

	return VectorThree(vectorThreeXResult, vectorThreeYResult, vectorThreeZResult);
}

const VectorThree VectorThree::operator/(const double vectorThreeFactor) const
{
	const double vectorThreeXResult = GetX() / vectorThreeFactor;
	const double vectorThreeYResult = GetY() / vectorThreeFactor;
	const double vectorThreeZResult = GetZ() / vectorThreeFactor;

	return VectorThree(vectorThreeXResult, vectorThreeYResult, vectorThreeZResult);
}

const VectorThree& VectorThree::operator*=(const double vectorThreeFactor)
{
	const double vectorThreeXResult = GetX() * vectorThreeFactor;
	const double vectorThreeYResult = GetY() * vectorThreeFactor;
	const double vectorThreeZResult = GetZ() * vectorThreeFactor;

	m_vectorThreeX = vectorThreeXResult;
	m_vectorThreeY = vectorThreeYResult;
	m_vectorThreeZ = vectorThreeZResult;

	return *this;
}

const VectorThree& VectorThree::operator/=(const double vectorThreeFactor)
{
	const double vectorThreeXResult = GetX() / vectorThreeFactor;
	const double vectorThreeYResult = GetY() / vectorThreeFactor;
	const double vectorThreeZResult = GetZ() / vectorThreeFactor;

	m_vectorThreeX = vectorThreeXResult;
	m_vectorThreeY = vectorThreeYResult;
	m_vectorThreeZ = vectorThreeZResult;

	return *this;
}

const double VectorThree::GetX() const
{
	return m_vectorThreeX;
}

const double VectorThree::GetY() const
{
	return m_vectorThreeY;
}

const double VectorThree::GetZ() const
{
	return m_vectorThreeZ;
}

const bool VectorThree::Compare(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree)
{
	const bool vectorThreeEqualityComparison = firstVectorThree == secondVectorThree;
	const bool vectorThreeDifferenceComparison = firstVectorThree != secondVectorThree;

	return vectorThreeEqualityComparison && vectorThreeDifferenceComparison;
}

const double VectorThree::GetDistance(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree)
{
	const double vectorThreeXDifference = firstVectorThree.GetX() - secondVectorThree.GetX();
	const double vectorThreeYDifference = firstVectorThree.GetY() - secondVectorThree.GetY();
	const double vectorThreeZDifference = firstVectorThree.GetZ() - secondVectorThree.GetZ();

	return std::sqrt(vectorThreeXDifference * vectorThreeXDifference + vectorThreeYDifference * vectorThreeYDifference + vectorThreeZDifference * vectorThreeZDifference);
}

const double VectorThree::GetRealMagnitude(const VectorThree& otherVectorThree)
{
	const double vectorThreeXSquared = otherVectorThree.GetX() * otherVectorThree.GetX();
	const double vectorThreeYSquared = otherVectorThree.GetY() * otherVectorThree.GetY();
	const double vectorThreeZSquared = otherVectorThree.GetZ() * otherVectorThree.GetZ();

	return std::sqrt(vectorThreeXSquared + vectorThreeYSquared + vectorThreeZSquared);
}

const double VectorThree::GetSquaredMagnitude(const VectorThree& otherVectorThree)
{
	const double vectorThreeXSquared = otherVectorThree.GetX() * otherVectorThree.GetX();
	const double vectorThreeYSquared = otherVectorThree.GetY() * otherVectorThree.GetY();
	const double vectorThreeZSquared = otherVectorThree.GetZ() * otherVectorThree.GetZ();

	return vectorThreeXSquared + vectorThreeYSquared + vectorThreeZSquared;
}

const VectorThree VectorThree::GetClampedMagnitude(const VectorThree& otherVectorThree, const double vectorThreeLength)
{
	const double vectorThreeSquaredMagnitude = GetSquaredMagnitude(otherVectorThree);

	double vectorThreeXResult;
	double vectorThreeYResult;
	double vectorThreeZResult;

	if (vectorThreeSquaredMagnitude > vectorThreeLength * vectorThreeLength)
	{
		const double vectorThreeRealMagnitude = GetRealMagnitude(otherVectorThree);

		const double vectorThreeXNormalized = otherVectorThree.GetX() / vectorThreeRealMagnitude;
		const double vectorThreeYNormalized = otherVectorThree.GetY() / vectorThreeRealMagnitude;
		const double vectorThreeZNormalized = otherVectorThree.GetZ() / vectorThreeRealMagnitude;

		vectorThreeXResult = vectorThreeXNormalized * vectorThreeLength;
		vectorThreeYResult = vectorThreeYNormalized * vectorThreeLength;
		vectorThreeZResult = vectorThreeZNormalized * vectorThreeLength;
	}
	else
	{
		vectorThreeXResult = otherVectorThree.GetX();
		vectorThreeYResult = otherVectorThree.GetY();
		vectorThreeZResult = otherVectorThree.GetZ();
	}

	return VectorThree(vectorThreeXResult, vectorThreeYResult, vectorThreeZResult);
}

const VectorThree VectorThree::GetNormalization(const VectorThree& otherVectorThree)
{
	const float vectorThreeRealMagnitude = GetRealMagnitude(otherVectorThree);

	double vectorThreeXResult;
	double vectorThreeYResult;
	double vectorThreeZResult;

	if (vectorThreeRealMagnitude > 0.0)
	{
		vectorThreeXResult = otherVectorThree.GetX() / vectorThreeRealMagnitude;
		vectorThreeYResult = otherVectorThree.GetY() / vectorThreeRealMagnitude;
		vectorThreeZResult = otherVectorThree.GetZ() / vectorThreeRealMagnitude;
	}
	else
	{
		vectorThreeXResult = 0.0;
		vectorThreeYResult = 0.0;
		vectorThreeZResult = 0.0;
	}

	return VectorThree(vectorThreeXResult, vectorThreeYResult, vectorThreeZResult);
}

const double VectorThree::GetDotProduct(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree)
{
	const double vectorThreeXScalar = firstVectorThree.GetX() * secondVectorThree.GetX();
	const double vectorThreeYScalar = firstVectorThree.GetY() * secondVectorThree.GetY();
	const double vectorThreeZScalar = firstVectorThree.GetZ() * secondVectorThree.GetZ();

	return vectorThreeXScalar + vectorThreeYScalar + vectorThreeZScalar;
}

const VectorThree VectorThree::GetCrossProduct(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree)
{
	const double vectorThreeXResult = firstVectorThree.GetY() * secondVectorThree.GetZ() - firstVectorThree.GetZ() * secondVectorThree.GetY();
	const double vectorThreeYResult = firstVectorThree.GetZ() * secondVectorThree.GetX() - firstVectorThree.GetX() * secondVectorThree.GetZ();
	const double vectorThreeZResult = firstVectorThree.GetX() * secondVectorThree.GetY() - firstVectorThree.GetY() * secondVectorThree.GetX();

	return VectorThree(vectorThreeXResult, vectorThreeYResult, vectorThreeZResult);
}

const VectorThree VectorThree::GetUnclampedInterpolation(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, const double elapsedTime)
{
	const double vectorThreeXResult = firstVectorThree.GetX() + (secondVectorThree.GetX() - firstVectorThree.GetX()) * elapsedTime;
	const double vectorThreeYResult = firstVectorThree.GetY() + (secondVectorThree.GetY() - firstVectorThree.GetY()) * elapsedTime;
	const double vectorThreeZResult = firstVectorThree.GetZ() + (secondVectorThree.GetZ() - firstVectorThree.GetZ()) * elapsedTime;

	return VectorThree(vectorThreeXResult, vectorThreeYResult, vectorThreeZResult);
}

const VectorThree VectorThree::GetClampedInterpolation(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, double elapsedTime)
{
	VectorThree vectorThreeDesiredState;

	const double vectorThreeMinimumTime = 0.0;
	const double vectorThreeMaximumTime = 1.0;

	if (elapsedTime <= vectorThreeMinimumTime)
	{
		elapsedTime = vectorThreeMinimumTime;

		vectorThreeDesiredState = firstVectorThree;
	}
	else if (elapsedTime >= vectorThreeMaximumTime)
	{
		elapsedTime = vectorThreeMaximumTime;

		vectorThreeDesiredState = secondVectorThree;
	}
	else
	{
		vectorThreeDesiredState = GetUnclampedInterpolation(firstVectorThree, secondVectorThree, elapsedTime);
	}

	return vectorThreeDesiredState;
}

const VectorThree VectorThree::GetQuadraticBezierCurve(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, const VectorThree& thirdVectorThree, const double elapsedTime)
{
	const VectorThree vectorThreeDesiredABPoint = GetClampedInterpolation(firstVectorThree, secondVectorThree, elapsedTime);
	const VectorThree vectorThreeDesiredBCPoint = GetClampedInterpolation(secondVectorThree, thirdVectorThree, elapsedTime);

	return GetClampedInterpolation(vectorThreeDesiredABPoint, vectorThreeDesiredBCPoint, elapsedTime);
}

const VectorThree VectorThree::GetCubicBezierCurve(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, const VectorThree& thirdVectorThree, const VectorThree& fourthVectorThree, const double elapsedTime)
{
	const VectorThree vectorThreeDesiredABCPoint = GetQuadraticBezierCurve(firstVectorThree, secondVectorThree, thirdVectorThree, elapsedTime);
	const VectorThree vectorThreeDesiredBCDPoint = GetQuadraticBezierCurve(secondVectorThree, thirdVectorThree, fourthVectorThree, elapsedTime);

	return GetClampedInterpolation(vectorThreeDesiredABCPoint, vectorThreeDesiredBCDPoint, elapsedTime);
}