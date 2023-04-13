void int2bitstr(int I, char *str) {
	unsigned int tmp = 1 << 31;
	for(int i = 0; i < 32; i++){
		int bit = (I & tmp) ? 1 : 0;
		char c = bit ? '1':'0';
		str[i] = c;
		tmp >>= 1;
	}
	str[32] = '\0';
}

int get_exp_value(float f) {
	unsigned f2u(float f);
	unsigned int ui = f2u(f);
	int exp_bits = (ui & 0x7F800000) >> 23;
	int exp_val = exp_bits -127;
	if(exp_bits == 0xFF){
		exp_val = 128;
	}else if(exp_bits == 0){
		exp_val = 0;
	}
	return exp_val;
}

