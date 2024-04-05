unsigned int val;
unsigned int adc(int no, int ch);
unsigned int adc(int no, int ch) {
    switch (no) {
        case 0:
            AD0CR = 0x00200600 | (1 << ch); // Select channel
            AD0CR |= (1 << 24); // Start conversion
            while ((AD0GDR & (1U << 31)) == 0);
            val = AD0GDR;
            break;
        case 1:
            AD1CR = 0x00200600 | (1 << ch); // Select channel
            AD1CR |= (1 << 24); // Start conversion
            while ((AD1GDR & (1U << 31)) == 0);
            val = AD1GDR;
            break;
    }
    val = (val >> 6) & 0x03FF; // Bit 6:15 is 10 bit AD value

    return val;
}