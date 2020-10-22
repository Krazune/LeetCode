// 478. Generate Random Point in a Circle
#include <vector>
#include <random>
#include <chrono>
#include <cmath>

using namespace std;

class Solution
{
	private:
	double radius;
	double x;
	double y;
	default_random_engine rng;
	uniform_real_distribution<double> distribution;

	public:
	Solution(double radius, double x_center, double y_center) : radius(radius), x(x_center), y(y_center), rng(chrono::system_clock::now().time_since_epoch().count()), distribution(0, radius * 2) {}

	vector<double> randPoint()
	{
		double originX = x - radius;
		double originY = y - radius;
		double randomX = distribution(rng);	// Doesn't include circumference.
		double randomY = distribution(rng);	// Doesn't include circumference.

		while (!isInside(randomX, randomY))
		{
			randomX = originX + distribution(rng);	// Doesn't include circumference.
			randomY = originY + distribution(rng);	// Doesn't include circumference.
		}

		vector<double> randomPoint(2);

		randomPoint[0] = randomX;
		randomPoint[1] = randomY;

		return randomPoint;
	}

	private:
	bool isInside(double pointX, double pointY)
	{
		double a = pow(abs(pointX - x), 2);
		double b = pow(abs(pointY - y), 2);
		double d = sqrt(a + b);

		return d <= radius;
	}
};