// LAST UPDATED DATE : 27/03/2025

#ifndef _VECTOR_FOUR_HPP_
#define _VECTOR_FOUR_HPP_

#include <iostream>
#include <cmath>

#pragma once
class VectorFour
{
private:
	double m_vectorFourX;
	double m_vectorFourY;
	double m_vectorFourZ;
	double m_vectorFourW;

	friend std::ostream& operator<<(std::ostream& ostreamComponent, const VectorFour& thisVectorFour);

protected:

public:
	explicit VectorFour();
	explicit VectorFour(const double vectorFourX, const double vectorFourY, const double vectorFourZ, const double vectorFourW);
	VectorFour(const VectorFour& otherVectorFour);
	~VectorFour();

	const bool operator==(const VectorFour& otherVectorFour) const;
	const bool operator!=(const VectorFour& otherVectorFour) const;

	const VectorFour& operator=(const VectorFour& otherVectorFour);

	const VectorFour operator+(const VectorFour& otherVectorFour) const;
	const VectorFour operator-(const VectorFour& otherVectorFour) const;
	const VectorFour operator*(const VectorFour& otherVectorFour) const;
	const VectorFour operator/(const VectorFour& otherVectorFour) const;

	const VectorFour& operator+=(const VectorFour& otherVectorFour);
	const VectorFour& operator-=(const VectorFour& otherVectorFour);
	const VectorFour& operator*=(const VectorFour& otherVectorFour);
	const VectorFour& operator/=(const VectorFour& otherVectorFour);

	const VectorFour operator*(const double vectorFourFactor) const;
	const VectorFour operator/(const double vectorFourFactor) const;

	const VectorFour& operator*=(const double vectorFourFactor);
	const VectorFour& operator/=(const double vectorFourFactor);

	const double GetX() const;
	const double GetY() const;
	const double GetZ() const;
	const double GetW() const;

	static const bool Compare(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour);

	static const double GetDistance(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour);

	static const double GetRealMagnitude(const VectorFour& otherVectorFour);
	static const double GetSquaredMagnitude(const VectorFour& otherVectorFour);
	static const VectorFour GetClampedMagnitude(const VectorFour& otherVectorFour, const double vectorFourLength);

	static const VectorFour GetNormalization(const VectorFour& otherVectorFour);

	static const double GetDotProduct(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour);

	static const VectorFour GetUnclampedInterpolation(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour, const double elapsedTime);
	static const VectorFour GetClampedInterpolation(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour, double elapsedTime);
	static const VectorFour GetQuadraticBezierCurve(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour, const VectorFour& thirdVectorFour, const double elapsedTime);
	static const VectorFour GetCubicBezierCurve(const VectorFour& firstVectorFour, const VectorFour& secondVectorFour, const VectorFour& thirdVectorFour, const VectorFour& fourthVectorFour, const double elapsedTime);
};

#endif