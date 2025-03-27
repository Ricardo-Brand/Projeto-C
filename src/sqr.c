double raiz(double a) {
	double parada = 0.0000001, x;
	x = 0;

	if (a > 1) {
		x = a; //'a' é o valor inicial de entrada
	}

	else if (a <= 1) {
		x = 1;
	}

	while (((x * x) - a) > parada) {
		x = 0.5 * (x + (a / x)); // x_n+1 = x_n - (f(x_n) / f'(x_n))
	}

	return x;
}