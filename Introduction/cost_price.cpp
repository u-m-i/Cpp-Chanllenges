/**
 * Cost price with the formula (selling_price * 100)/(100+profit_percent)
 */

int main()
{
	double profit, price;

	std::cin >> price >> profit;

	std::cout << (price * 100.0)/(100.0 + profit) << std::endl;

	return 0;
}
