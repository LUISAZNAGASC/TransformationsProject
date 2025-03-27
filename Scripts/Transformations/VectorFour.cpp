// LAST UPDATED DATE : 27/03/2025

#include "../../Scripts/Transformations/VectorFour.hpp"

std::ostream& operator<<(std::ostream& ostreamComponent, const VectorFour& thisVectorFour)
{
	ostreamComponent << "{ ";
	ostreamComponent << "X: ";
	ostreamComponent << thisVectorFour.GetX();
	ostreamComponent << ", ";
	ostreamComponent << "Y: ";
	ostreamComponent << thisVectorFour.GetY();
	ostreamComponent << ", ";
	ostreamComponent << "Z: ";
	ostreamComponent << thisVectorFour.GetZ();
	ostreamComponent << ", ";
	ostreamComponent << "W: ";
	ostreamComponent << thisVectorFour.GetW();
	ostreamComponent << " }";

	return ostreamComponent;
}

VectorFour::VectorFour() : m_vectorFourX(0.0), m_vectorFourY(0.0), m_vectorFourZ(0.0), m_vectorFourW(0.0)
{

}

VectorFour::VectorFour(const double vectorFourX, const double vectorFourY, const double vectorFourZ, const double vectorFourW) : m_vectorFourX(vectorFourX), m_vectorFourY(vectorFourY), m_vectorFourZ(vectorFourZ), m_vectorFourW(vectorFourW)
{

}

VectorFour::VectorFour(const VectorFour& otherVectorFour) : m_vectorFourX(otherVectorFour.GetX()), m_vectorFourY(otherVectorFour.GetY()), m_vectorFourZ(otherVectorFour.GetZ()), m_vectorFourW(otherVectorFour.GetW())
{

}

VectorFour::~VectorFour()
{

}

const bool VectorFour::operator==(const VectorFour& otherVectorFour) const
{
	const bool vectorFourXComparison = GetX() == otherVectorFour.GetX();
	const bool vectorFourYComparison = GetY() == otherVectorFour.GetY();
	const bool vectorFourZComparison = GetZ() == otherVectorFour.GetZ();
	const bool vectorFourWComparison = GetW() == otherVectorFour.GetW();

	return vectorFourXComparison && vectorFourYComparison && vectorFourZComparison && vectorFourWComparison;
}

const bool VectorFour::operator!=(const VectorFour& otherVectorFour) const
{
	const bool vectorFourXComparison = GetX() != otherVectorFour.GetX();
	const bool vectorFourYComparison = GetY() != otherVectorFour.GetY();
	const bool vectorFourZComparison = GetZ() != otherVectorFour.GetZ();
	const bool vectorFourWComparison = GetW() != otherVectorFour.GetW();

	return vectorFourXComparison || vectorFourYComparison || vectorFourZComparison || vectorFourWComparison;
}

const VectorFour& VectorFour::operator=(const VectorFour& otherVectorFour)
{
	if (this == &otherVectorFour)
	{
		return *this;
	}
	else
	{
		const double vectorFourXResult = otherVectorFour.GetX();
		const double vectorFourYResult = otherVectorFour.GetY();
		const double vectorFourZResult = otherVectorFour.GetZ();
		const double vectorFourWResult = otherVectorFour.GetW();

		m_vectorFourX = vectorFourXResult;
		m_vectorFourY = vectorFourYResult;
		m_vectorFourZ = vectorFourZResult;
		m_vectorFourW = vectorFourWResult;

		return *this;
	}
}

const VectorFour VectorFour::operator+(const VectorFour& otherVectorFour) const
{
	const double vectorFourXResult = GetX() + otherVectorFour.GetX();
	const double vectorFourYResult = GetY() + otherVectorFour.GetY();
	const double vectorFourZResult = GetZ() + otherVectorFour.GetZ();
	const double vectorFourWResult = GetW() + otherVectorFour.GetW();

	return VectorFour(vectorFourXResult, vectorFourYResult, vectorFourZResult, vectorFourWResult);
}

const VectorFour VectorFour::operator-(const VectorFour& otherVectorFour) const
{
	const double vectorFourXResult = GetX() - otherVectorFour.GetX();
	const double vectorFourYResult = GetY() - otherVectorFour.GetY();
	const double vectorFourZResult = GetZ() - otherVectorFour.GetZ();
	const double vectorFourWResult = GetW() - otherVectorFour.GetW();

	return VectorFour(vectorFourXResult, vectorFourYResult, vectorFourZResult, vectorFourWResult);
}

const VectorFour VectorFour::operator*(const VectorFour& otherVectorFour) const
{
	const double vectorFourXResult = GetX() * otherVectorFour.GetX();
	const double vectorFourYResult = GetY() * otherVectorFour.GetY();
	const double vectorFourZResult = GetZ() * otherVectorFour.GetZ();
	const double vectorFourWResult = GetW() * otherVectorFour.GetW();

	return VectorFour(vectorFourXResult, vectorFourYResult, vectorFourZResult, vectorFourWResult);
}

const VectorFour VectorFour::operator/(const VectorFour& otherVectorFour) const
{
	const double vectorFourXResult = GetX() / otherVectorFour.GetX();
	const double vectorFourYResult = GetY() / otherVectorFour.GetY();
	const double vectorFourZResult = GetZ() / otherVectorFour.GetZ();
	const double vectorFourWResult = GetW() / otherVectorFour.GetW();

	return VectorFour(vectorFourXResult, vectorFourYResult, vectorFourZResult, vectorFourWResult);
}

const VectorFour& VectorFour::operator+=(const VectorFour& otherVectorFour)
{
	const double vectorFourXResult = GetX() + otherVectorFour.GetX();
	const double vectorFourYResult = GetY() + otherVectorFour.GetY();
	const double vectorFourZResult = GetZ() + otherVectorFour.GetZ();
	const double vectorFourWResult = GetW() + otherVectorFour.GetW();

	m_vectorFourX = vectorFourXResult;
	m_vectorFourY = vectorFourYResult;
	m_vectorFourZ = vectorFourZResult;
	m_vectorFourW = vectorFourWResult;

	return *this;
}

const VectorFour& VectorFour::operator-=(const VectorFour& otherVectorFour)
{
	const double vectorFourXResult = GetX() - otherVectorFour.GetX();
	const double vectorFourYResult = GetY() - otherVectorFour.GetY();
	const double vectorFourZResult = GetZ() - otherVectorFour.GetZ();
	const double vectorFourWResult = GetW() - otherVectorFour.GetW();

	m_vectorFourX = vectorFourXResult;
	m_vectorFourY = vectorFourYResult;
	m_vectorFourZ = vectorFourZResult;
	m_vectorFourW = vectorFourWResult;

	return *this;
}

const VectorFour& VectorFour::operator*=(const VectorFour& otherVectorFour)
{
	const double vectorFourXResult = GetX() * otherVectorFour.GetX();
	const double vectorFourYResult = GetY() * otherVectorFour.GetY();
	const double vectorFourZResult = GetZ() * otherVectorFour.GetZ();
	const double vectorFourWResult = GetW() * otherVectorFour.GetW();

	m_vectorFourX = vectorFourXResult;
	m_vectorFourY = vectorFourYResult;
	m_vectorFourZ = vectorFourZResult;
	m_vectorFourW = vectorFourWResult;

	return *this;
}

const VectorFour& VectorFour::operator/=(const VectorFour& otherVectorFour)
{
	const double vectorFourXResult = GetX() / otherVectorFour.GetX();
	const double vectorFourYResult = GetY() / otherVectorFour.GetY();
	const double vectorFourZResult = GetZ() / otherVectorFour.GetZ();
	const double vectorFourWResult = GetW() / otherVectorFour.GetW();

	m_vectorFourX = vectorFourXResult;
	m_vectorFourY = vectorFourYResult;
	m_vectorFourZ = vectorFourZResult;
	m_vectorFourW = vectorFourWResult;

	return *this;
}

const VectorFour VectorFour::operator*(const double vectorFourFactor) const
{
	const double vectorFourXResult = GetX() * vectorFourFactor;
	const double vectorFourYResult = GetY() * vectorFourFactor;
	const double vectorFourZResult = GetZ() * vectorFourFactor;
	const double vectorFourWResult = GetW() * vectorFourFactor;

	return VectorFour(vectorFourXResult, vectorFourYResult, vectorFourZResult, vectorFourWResult);
}

const VectorFour VectorFour::operator/(const double vectorFourFactor) const
{
	const double vectorFourXResult = GetX() / vectorFourFactor;
	const double vectorFourYResult = GetY() / vectorFourFactor;
	const double vectorFourZResult = GetZ() / vectorFourFactor;
	const double vectorFourWResult = GetW() / vectorFourFactor;

	return VectorFour(vectorFourXResult, vectorFourYResult, vectorFourZResult, vectorFourWResult);
}

const VectorFour& VectorFour::operator*=(const double vectorFourFactor)
{
	const double vectorFourXResult = GetX() * vectorFourFactor;
	const double vectorFourYResult = GetY() * vectorFourFactor;
	const double vectorFourZResult = GetZ() * vectorFourFactor;
	const double vectorFourWResult = GetW() * vectorFourFactor;

	m_vectorFourX = vectorFourXResult;
	m_vectorFourY = vectorFourYResult;
	m_vectorFourZ = vectorFourZResult;
	m_vectorFourW = vectorFourWResult;

	return *this;
}

const VectorFour& VectorFour::operator/=(const double vectorFourFactor)
{
	const double vectorFourXResult = GetX() / vectorFourFactor;
	const double vectorFourYResult = GetY() / vectorFourFactor;
	const double vectorFourZResult = GetZ() / vectorFourFactor;
	const double vectorFourWResult = GetW() / vectorFourFactor;

	m_vectorFourX = vectorFourXResult;
	m_vectorFourY = vectorFourYResult;
	m_vectorFourZ = vectorFourZResult;
	m_vectorFourW = vectorFourWResult;

	return *this;
}

const double VectorFour::GetX() const
{
	return m_vectorFourX;
}

const double VectorFour::GetY() const
{
	return m_vectorFourY;
}

const double VectorFour::GetZ() const
{
	return m_vectorFourZ;
}

const double VectorFour::GetW() const
{
	return m_vectorFourW;
}

const bool VectorFour::Compare(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour)
{
	const bool vectorFourEqualityComparison = firstVectorFour == secondVectorFour;
	const bool vectorFourDifferenceComparison = firstVectorFour != secondVectorFour;

	return vectorFourEqualityComparison && vectorFourDifferenceComparison;
}

const double VectorFour::GetDistance(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour)
{
	const double vectorFourXDifference = firstVectorFour.GetX() - secondVectorFour.GetX();
	const double vectorFourYDifference = firstVectorFour.GetY() - secondVectorFour.GetY();
	const double vectorFourZDifference = firstVectorFour.GetZ() - secondVectorFour.GetZ();
	const double vectorFourWDifference = firstVectorFour.GetW() - secondVectorFour.GetW();

	return std::sqrt(vectorFourXDifference * vectorFourXDifference + vectorFourYDifference * vectorFourYDifference + vectorFourZDifference * vectorFourZDifference + vectorFourWDifference * vectorFourWDifference);
}

const double VectorFour::GetRealMagnitude(const VectorFour& otherVectorFour)
{
	const double vectorFourXSquared = otherVectorFour.GetX() * otherVectorFour.GetX();
	const double vectorFourYSquared = otherVectorFour.GetY() * otherVectorFour.GetY();
	const double vectorFourZSquared = otherVectorFour.GetZ() * otherVectorFour.GetZ();
	const double vectorFourWSquared = otherVectorFour.GetW() * otherVectorFour.GetW();

	return std::sqrt(vectorFourXSquared + vectorFourYSquared + vectorFourZSquared + vectorFourWSquared);
}

const double VectorFour::GetSquaredMagnitude(const VectorFour& otherVectorFour)
{
	const double vectorFourXSquared = otherVectorFour.GetX() * otherVectorFour.GetX();
	const double vectorFourYSquared = otherVectorFour.GetY() * otherVectorFour.GetY();
	const double vectorFourZSquared = otherVectorFour.GetZ() * otherVectorFour.GetZ();
	const double vectorFourWSquared = otherVectorFour.GetW() * otherVectorFour.GetW();

	return vectorFourXSquared + vectorFourYSquared + vectorFourZSquared + vectorFourWSquared;
}

const VectorFour VectorFour::GetClampedMagnitude(const VectorFour& otherVectorFour, const double vectorFourLength)
{
	const double vectorFourSquaredMagnitude = GetSquaredMagnitude(otherVectorFour);

	double vectorFourXResult;
	double vectorFourYResult;
	double vectorFourZResult;
	double vectorFourWResult;

	if (vectorFourSquaredMagnitude > vectorFourLength * vectorFourLength)
	{
		const double vectorFourRealMagnitude = GetRealMagnitude(otherVectorFour);

		const double vectorFourXNormalized = otherVectorFour.GetX() / vectorFourRealMagnitude;
		const double vectorFourYNormalized = otherVectorFour.GetY() / vectorFourRealMagnitude;
		const double vectorFourZNormalized = otherVectorFour.GetZ() / vectorFourRealMagnitude;
		const double vectorFourWNormalized = otherVectorFour.GetW() / vectorFourRealMagnitude;

		vectorFourXResult = vectorFourXNormalized * vectorFourLength;
		vectorFourYResult = vectorFourYNormalized * vectorFourLength;
		vectorFourZResult = vectorFourZNormalized * vectorFourLength;
		vectorFourWResult = vectorFourWNormalized * vectorFourLength;
	}
	else
	{
		vectorFourXResult = otherVectorFour.GetX();
		vectorFourYResult = otherVectorFour.GetY();
		vectorFourZResult = otherVectorFour.GetZ();
		vectorFourWResult = otherVectorFour.GetW();
	}

	return VectorFour(vectorFourXResult, vectorFourYResult, vectorFourZResult, vectorFourWResult);
}

const VectorFour VectorFour::GetNormalization(const VectorFour& otherVectorFour)
{
	const float vectorFourRealMagnitude = GetRealMagnitude(otherVectorFour);

	double vectorFourXResult;
	double vectorFourYResult;
	double vectorFourZResult;
	double vectorFourWResult;

	if (vectorFourRealMagnitude > 0.0)
	{
		vectorFourXResult = otherVectorFour.GetX() / vectorFourRealMagnitude;
		vectorFourYResult = otherVectorFour.GetY() / vectorFourRealMagnitude;
		vectorFourZResult = otherVectorFour.GetZ() / vectorFourRealMagnitude;
		vectorFourWResult = otherVectorFour.GetW() / vectorFourRealMagnitude;
	}
	else
	{
		vectorFourXResult = 0.0;
		vectorFourYResult = 0.0;
		vectorFourZResult = 0.0;
		vectorFourWResult = 0.0;
	}

	return VectorFour(vectorFourXResult, vectorFourYResult, vectorFourZResult, vectorFourWResult);
}

const double VectorFour::GetDotProduct(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour)
{
	const double vectorFourXScalar = firstVectorFour.GetX() * secondVectorFour.GetX();
	const double vectorFourYScalar = firstVectorFour.GetY() * secondVectorFour.GetY();
	const double vectorFourZScalar = firstVectorFour.GetZ() * secondVectorFour.GetZ();
	const double vectorFourWScalar = firstVectorFour.GetW() * secondVectorFour.GetW();

	return vectorFourXScalar + vectorFourYScalar + vectorFourZScalar + vectorFourWScalar;
}

const VectorFour VectorFour::GetUnclampedInterpolation(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour, const double elapsedTime)
{
	const double vectorFourXResult = firstVectorFour.GetX() + (secondVectorFour.GetX() - firstVectorFour.GetX()) * elapsedTime;
	const double vectorFourYResult = firstVectorFour.GetY() + (secondVectorFour.GetY() - firstVectorFour.GetY()) * elapsedTime;
	const double vectorFourZResult = firstVectorFour.GetZ() + (secondVectorFour.GetZ() - firstVectorFour.GetZ()) * elapsedTime;
	const double vectorFourWResult = firstVectorFour.GetW() + (secondVectorFour.GetW() - firstVectorFour.GetW()) * elapsedTime;

	return VectorFour(vectorFourXResult, vectorFourYResult, vectorFourZResult, vectorFourWResult);
}

const VectorFour VectorFour::GetClampedInterpolation(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour, double elapsedTime)
{
	VectorFour vectorFourDesiredState;

	const double vectorFourMinimumTime = 0.0;
	const double vectorFourMaximumTime = 1.0;

	if (elapsedTime <= vectorFourMinimumTime)
	{
		elapsedTime = vectorFourMinimumTime;

		vectorFourDesiredState = firstVectorFour;
	}
	else if (elapsedTime >= vectorFourMaximumTime)
	{
		elapsedTime = vectorFourMaximumTime;

		vectorFourDesiredState = secondVectorFour;
	}
	else
	{
		vectorFourDesiredState = GetUnclampedInterpolation(firstVectorFour, secondVectorFour, elapsedTime);
	}

	return vectorFourDesiredState;
}

const VectorFour VectorFour::GetQuadraticBezierCurve(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour, const VectorFour& thirdVectorFour, const double elapsedTime)
{
	const VectorFour vectorFourDesiredABPoint = GetClampedInterpolation(firstVectorFour, secondVectorFour, elapsedTime);
	const VectorFour vectorFourDesiredBCPoint = GetClampedInterpolation(secondVectorFour, thirdVectorFour, elapsedTime);

	return GetClampedInterpolation(vectorFourDesiredABPoint, vectorFourDesiredBCPoint, elapsedTime);
}

const VectorFour VectorFour::GetCubicBezierCurve(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour, const VectorFour& thirdVectorFour, const VectorFour& fourthVectorFour, const double elapsedTime)
{
	const VectorFour vectorFourDesiredABCPoint = GetQuadraticBezierCurve(firstVectorFour, secondVectorFour, thirdVectorFour, elapsedTime);
	const VectorFour vectorFourDesiredBCDPoint = GetQuadraticBezierCurve(secondVectorFour, thirdVectorFour, fourthVectorFour, elapsedTime);

	return GetClampedInterpolation(vectorFourDesiredABCPoint, vectorFourDesiredBCDPoint, elapsedTime);
}