/**
 * Calculate the profit and the profit percentage
 */

int main()
{
	double selling_price, cost;

	std::cin >> cost >> selling_price;

	// Profit
	std::cout << (selling_price - cost) << '\n';
	
	// Profit percentage
	std::cout << ((selling_price - cost) / cost) * 100 << std::endl;

	return 0;
}
