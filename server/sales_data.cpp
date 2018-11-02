#include "sales_data.h"

using namespace std;

double Sales_data::avg_price() const {
	if (units_sold)
		return revenue / units_sold;
	return 0;
}

Sales_data& Sales_data::combine(const Sales_data& rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}