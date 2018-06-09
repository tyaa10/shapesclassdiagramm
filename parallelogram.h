#pragma once
#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H
#include "shape.h"
#include "circle.h"
#include "quadrilateral.h"
#include <iostream>

class parallelogram : public quadrilateral {

public:
	parallelogram(string col, string nam, int h, int w, double ang, double ang2);
	void parallelogram::draw();

		void setAngle(double, double);
		double getAngle2();
		double getAngle();
		double CalArea(double w, double h);
private:
	double angle;
	double angle2;






};
#endif;