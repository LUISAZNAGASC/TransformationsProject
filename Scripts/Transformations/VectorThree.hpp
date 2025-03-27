// LAST UPDATED DATE : 27/03/2025

#ifndef _VECTOR_THREE_HPP_
#define _VECTOR_THREE_HPP_

#include <iostream>
#include <cmath>

#pragma once
class VectorThree
{
private:
	double m_vectorThreeX;
	double m_vectorThreeY;
	double m_vectorThreeZ;

	friend std::ostream& operator<<(std::ostream& ostreamComponent, const VectorThree& thisVectorThree);

protected:

public:
	explicit VectorThree();
	explicit VectorThree(const double vectorThreeX, const double vectorThreeY, const double vectorThreeZ);
	VectorThree(const VectorThree& otherVectorThree);
	~VectorThree();

	const bool operator==(const VectorThree& otherVectorThree) const;
	const bool operator!=(const VectorThree& otherVectorThree) const;

	const VectorThree& operator=(const VectorThree& otherVectorThree);

	const VectorThree operator+(const VectorThree& otherVectorThree) const;
	const VectorThree operator-(const VectorThree& otherVectorThree) const;
	const VectorThree operator*(const VectorThree& otherVectorThree) const;
	const VectorThree operator/(const VectorThree& otherVectorThree) const;

	const VectorThree& operator+=(const VectorThree& otherVectorThree);
	const VectorThree& operator-=(const VectorThree& otherVectorThree);
	const VectorThree& operator*=(const VectorThree& otherVectorThree);
	const VectorThree& operator/=(const VectorThree& otherVectorThree);

	const VectorThree operator*(const double vectorThreeFactor) const;
	const VectorThree operator/(const double vectorThreeFactor) const;

	const VectorThree& operator*=(const double vectorThreeFactor);
	const VectorThree& operator/=(const double vectorThreeFactor);

	const double GetX() const;
	const double GetY() const;
	const double GetZ() const;

	static const bool Compare(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree);

	static const double GetDistance(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree);

	static const double GetRealMagnitude(const VectorThree& otherVectorThree);
	static const double GetSquaredMagnitude(const VectorThree& otherVectorThree);
	static const VectorThree GetClampedMagnitude(const VectorThree& otherVectorThree, const double vectorThreeLength);

	static const VectorThree GetNormalization(const VectorThree& otherVectorThree);

	static const double GetDotProduct(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree);
	static const VectorThree GetCrossProduct(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree);

	static const VectorThree GetUnclampedInterpolation(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, const double elapsedTime);
	static const VectorThree GetClampedInterpolation(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, double elapsedTime);
	static const VectorThree GetQuadraticBezierCurve(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, const VectorThree& thirdVectorThree, const double elapsedTime);
	static const VectorThree GetCubicBezierCurve(const VectorThree& firstVectorThree, const VectorThree& secondVectorThree, const VectorThree& thirdVectorThree, const VectorThree& fourthVectorThree, const double elapsedTime);
};

#endif