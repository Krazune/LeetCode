// 478. Generate Random Point in a Circle
var Solution = function(radius, x_center, y_center)
{
	this._radius = radius;
	this._x = x_center;
	this._y = y_center;
};

Solution.prototype.randPoint = function()
{
	let randomRadian = Math.random() * Math.PI * 2;
	let distance = Math.sqrt(Math.random()) * this._radius; // Doesn't include the circumference.

	let point = new Array(2);

	point[0] = this._x + distance * Math.cos(randomRadian);
	point[1] = this._y + distance * Math.sin(randomRadian);

	return point;
};