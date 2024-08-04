#include <bits/stdc++.h>

/* Театральная площадь в столице Берляндии представляет собой прямоугольник n × m метров. По случаю очередного юбилея города,
было принято решение о замощении площади квадратными гранитными плитами. Каждая плита имеет размер a × a.

Какое наименьшее количество плит понадобится для замощения площади? Разрешено покрыть плитами большую поверхность, чем театральная площадь,
но она должна быть покрыта обязательно. Гранитные плиты нельзя ломать или дробить, а разрешено использовать только целиком.
Границы плит должны быть параллельны границам площади.

Входные данные
В первой строке записано три целых натуральных числа n, m и a (1 ≤ n, m, a ≤ 109).

Выходные данные
Выведите искомое количество плит.*/

int main() {
	long long int n, m, a, res_1 = 1, res_2 = 1;
	std::cin >> n >> m >> a;
	// 12 13 4
	while (n - a > 0) {
		res_1++;
		n = n - a;
	}

	while(m - a > 0)
	{
		res_2++;
		m = m - a;
	}

	std::cout << res_1 * res_2 << std::endl;

	return 0;
}