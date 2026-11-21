#include "font_16pt.h"

font_16pt::font_16pt(){
    font_map['0'] = zero;
    font_map['1'] = one;
    font_map['2'] = two;
    font_map['3'] = three;
    font_map['4'] = four;
    font_map['5'] = five;
    font_map['6'] = six;
    font_map['7'] = seven;
    font_map['8'] = eight;
    font_map['9'] = nine;
    font_map['#'] = hash;
    font_map['A'] = upper_a;
    font_map['B'] = upper_b;
    font_map['C'] = upper_c;
    font_map['D'] = upper_d;
    font_map['E'] = upper_e;
    font_map['F'] = upper_f;
    font_map['G'] = upper_g;
    font_map['H'] = upper_h;
    font_map['I'] = upper_i;
    font_map['J'] = upper_j;
    font_map['K'] = upper_k;
    font_map['L'] = upper_l;
    font_map['M'] = upper_m;
    font_map['N'] = upper_n;
    font_map['O'] = upper_o;
    font_map['P'] = upper_p;
    font_map['Q'] = upper_q;
    font_map['R'] = upper_r;
    font_map['S'] = upper_s;
    font_map['T'] = upper_t;
    font_map['U'] = upper_u;
    font_map['V'] = upper_v;
    font_map['W'] = upper_w;
    font_map['X'] = upper_x;
    font_map['Y'] = upper_y;
    font_map['Z'] = upper_z;
    font_map['a'] = lower_a;
    font_map['b'] = lower_b;
    font_map['c'] = lower_c;
    font_map['d'] = lower_d;
    font_map['e'] = lower_e;
    font_map['f'] = lower_f;
    font_map['g'] = lower_g;
    font_map['h'] = lower_h;
    font_map['i'] = lower_i;
    font_map['j'] = lower_j;
    font_map['k'] = lower_k;
    font_map['l'] = lower_l;
    font_map['m'] = lower_m;
    font_map['n'] = lower_n;
    font_map['o'] = lower_o;
    font_map['p'] = lower_p;
    font_map['q'] = lower_q;
    font_map['r'] = lower_r;
    font_map['s'] = lower_s;
    font_map['t'] = lower_t;
    font_map['u'] = lower_u;
    font_map['v'] = lower_v;
    font_map['w'] = lower_w;
    font_map['x'] = lower_x;
    font_map['y'] = lower_y;
    font_map['z'] = lower_z;
    font_map['-'] = dash;
    font_map['.'] = decimal;
    font_map['%'] = percent;
    font_map['|'] = vertical_bar;
}

const uint16_t* font_16pt::get_letter(const uint8_t letter){
    return font_map[letter];
}