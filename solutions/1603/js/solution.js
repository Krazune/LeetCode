// 1603. Design Parking System
var ParkingSystem = function(big, medium, small)
{
	this._big = big;
	this._bigParked = 0;

	this._medium = medium;
	this._mediumParked = 0;

	this._small = small;
	this._smallParked = 0;
};

ParkingSystem.prototype.addCar = function(carType)
{
	switch (carType)
	{
		case 1:
		if (this._bigParked < this._big)
		{
			++this._bigParked;

			return true;
		}
		break;

		case 2:
		if (this._mediumParked < this._medium)
		{
			++this._mediumParked;

			return true;
		}
		break;

		case 3:
		if (this._smallParked < this._small)
		{
			++this._smallParked;

			return true;
		}
		break;
	}

	return false;
};