#include <iostream>
double PrecipitationCalculator::ComputeMonthlyAveragePrecipitation(int month, double monthPrecipitation, int days[], double recordMonthPrecipitation[]){
	double monthAverage = monthPrecipitation/days[month];
	if( monthAverage > recordMonthPrecipitation[month] ){
		std::cout << "New monthly record was observed in month" << month << std::endl;
		recordMonthPrecipitation[month] = monthAverage;
	}
	return (monthAverage);