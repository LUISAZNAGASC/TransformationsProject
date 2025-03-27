// LAST UPDATED DATE : 27/03/2025

#ifndef _VECTOR_TWO_HPP_
#define _VECTOR_TWO_HPP_

#include <iostream>
#include <cmath>

#pragma once
class VectorTwo
{
private:
	double m_vectorTwoX;
	double m_vectorTwoY;

	friend std::ostream& operator<<(std::ostream& ostreamComponent, const VectorTwo& thisVectorTwo);

protected:

public:
	explicit VectorTwo();
	explicit VectorTwo(const double vectorTwoX, const double vectorTwoY);
	VectorTwo(const VectorTwo& otherVectorTwo);
	~VectorTwo();

	const bool operator==(const VectorTwo& otherVectorTwo) const;
	const bool operator!=(const VectorTwo& otherVectorTwo) const;

	const VectorTwo& operator=(const VectorTwo& otherVectorTwo);

	const VectorTwo operator+(const VectorTwo& otherVectorTwo) const;
	const VectorTwo operator-(const VectorTwo& otherVectorTwo) const;
	const VectorTwo operator*(const VectorTwo& otherVectorTwo) const;
	const VectorTwo operator/(const VectorTwo& otherVectorTwo) const;

	const VectorTwo& operator+=(const VectorTwo& otherVectorTwo);
	const VectorTwo& operator-=(const VectorTwo& otherVectorTwo);
	const VectorTwo& operator*=(const VectorTwo& otherVectorTwo);
	const VectorTwo& operator/=(const VectorTwo& otherVectorTwo);

	const VectorTwo operator*(const double vectorTwoFactor) const;
	const VectorTwo operator/(const double vectorTwoFactor) const;

	const VectorTwo& operator*=(const double vectorTwoFactor);
	const VectorTwo& operator/=(const double vectorTwoFactor);

	const double GetX() const;
	const double GetY() const;

	static const bool Compare(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo);

	static const double GetDistance(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo);

	static const double GetRealMagnitude(const VectorTwo& otherVectorTwo);
	static const double GetSquaredMagnitude(const VectorTwo& otherVectorTwo);
	static const VectorTwo GetClampedMagnitude(const VectorTwo& otherVectorTwo, const double vectorTwoLength);

	static const VectorTwo GetNormalization(const VectorTwo& otherVectorTwo);

	static const double GetDotProduct(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo);

	static const VectorTwo GetUnclampedInterpolation(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, const double elapsedTime);
	static const VectorTwo GetClampedInterpolation(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, double elapsedTime);
	static const VectorTwo GetQuadraticBezierCurve(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, const VectorTwo& thirdVectorTwo, const double elapsedTime);
	static const VectorTwo GetCubicBezierCurve(const VectorTwo& firstVectorTwo, const VectorTwo& secondVectorTwo, const VectorTwo& thirdVectorTwo, const VectorTwo& fourthVectorTwo, const double elapsedTime);
};

#endif