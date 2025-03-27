double pot(double base, int expoente) {
	// referencia: https://graphics.stanford.edu/~seander/bithacks.html#IntegerAbs
	unsigned int exp;
	int const mask = expoente >> sizeof(int) * 8 - 1;

	exp = (expoente + mask) ^ mask;

	double resultado = 1.0;

	while (exp) {
		if (exp & 1) {
			resultado *= base;
		}
		exp /= 2;
		base *= base;
	}
	if (expoente < 0) {
		return 1.0 / resultado;
	}
	return resultado;
}