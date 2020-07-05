int BLACKPEARL_walk_count;
float BLACKPEARL_walk_verts[186];
int BLACKPEARL_walk_types[62];
int BLACKPEARL_walk_graph[124];

void BLACKPEARL_walk_init()
{
	BLACKPEARL_walk_count = 62;

	BLACKPEARL_walk_verts[0 ] = 5.037079;
	BLACKPEARL_walk_verts[1 ] = 5.841306;
	BLACKPEARL_walk_verts[2 ] = 11.994502;
	BLACKPEARL_walk_verts[3 ] = -2.624084;
	BLACKPEARL_walk_verts[4 ] = 7.312722;
	BLACKPEARL_walk_verts[5 ] = 20.256277;
	BLACKPEARL_walk_verts[6 ] = 2.274848;
	BLACKPEARL_walk_verts[7 ] = 7.303512;
	BLACKPEARL_walk_verts[8 ] = 19.931242;
	BLACKPEARL_walk_verts[9 ] = 3.776256;
	BLACKPEARL_walk_verts[10] = 7.324034;
	BLACKPEARL_walk_verts[11] = 17.836555;
	BLACKPEARL_walk_verts[12] = -3.253476;
	BLACKPEARL_walk_verts[13] = 7.304264;
	BLACKPEARL_walk_verts[14] = 16.808102;
	BLACKPEARL_walk_verts[15] = 4.878138;
	BLACKPEARL_walk_verts[16] = 7.308694;
	BLACKPEARL_walk_verts[17] = 13.973062;
	BLACKPEARL_walk_verts[18] = 3.195433;
	BLACKPEARL_walk_verts[19] = 5.882837;
	BLACKPEARL_walk_verts[20] = 11.075254;
	BLACKPEARL_walk_verts[21] = 2.752182;
	BLACKPEARL_walk_verts[22] = 5.845958;
	BLACKPEARL_walk_verts[23] = 4.496304;
	BLACKPEARL_walk_verts[24] = 3.726744;
	BLACKPEARL_walk_verts[25] = 5.840250;
	BLACKPEARL_walk_verts[26] = -2.522217;
	BLACKPEARL_walk_verts[27] = -0.989670;
	BLACKPEARL_walk_verts[28] = 5.821157;
	BLACKPEARL_walk_verts[29] = -2.816426;
	BLACKPEARL_walk_verts[30] = -3.181283;
	BLACKPEARL_walk_verts[31] = 5.828152;
	BLACKPEARL_walk_verts[32] = -2.507291;
	BLACKPEARL_walk_verts[33] = -4.964917;
	BLACKPEARL_walk_verts[34] = 5.856668;
	BLACKPEARL_walk_verts[35] = 11.745420;
	BLACKPEARL_walk_verts[36] = -4.792438;
	BLACKPEARL_walk_verts[37] = 7.302926;
	BLACKPEARL_walk_verts[38] = 14.100883;
	BLACKPEARL_walk_verts[39] = -2.744502;
	BLACKPEARL_walk_verts[40] = 5.848134;
	BLACKPEARL_walk_verts[41] = 9.860538;
	BLACKPEARL_walk_verts[42] = 5.308794;
	BLACKPEARL_walk_verts[43] = 5.866906;
	BLACKPEARL_walk_verts[44] = 5.789945;
	BLACKPEARL_walk_verts[45] = 4.609360;
	BLACKPEARL_walk_verts[46] = 5.824201;
	BLACKPEARL_walk_verts[47] = -0.230565;
	BLACKPEARL_walk_verts[48] = -5.299810;
	BLACKPEARL_walk_verts[49] = 5.826267;
	BLACKPEARL_walk_verts[50] = -0.503177;
	BLACKPEARL_walk_verts[51] = -5.392909;
	BLACKPEARL_walk_verts[52] = 5.859137;
	BLACKPEARL_walk_verts[53] = 5.855410;
	BLACKPEARL_walk_verts[54] = -3.722292;
	BLACKPEARL_walk_verts[55] = 8.269275;
	BLACKPEARL_walk_verts[56] = -8.753293;
	BLACKPEARL_walk_verts[57] = 4.003379;
	BLACKPEARL_walk_verts[58] = 8.276275;
	BLACKPEARL_walk_verts[59] = -8.573936;
	BLACKPEARL_walk_verts[60] = -0.204929;
	BLACKPEARL_walk_verts[61] = 8.255659;
	BLACKPEARL_walk_verts[62] = -6.778229;
	BLACKPEARL_walk_verts[63] = 2.120707;
	BLACKPEARL_walk_verts[64] = 8.346508;
	BLACKPEARL_walk_verts[65] = -14.433086;
	BLACKPEARL_walk_verts[66] = 0.037481;
	BLACKPEARL_walk_verts[67] = 5.795038;
	BLACKPEARL_walk_verts[68] = -4.760103;
	BLACKPEARL_walk_verts[69] = 4.216158;
	BLACKPEARL_walk_verts[70] = 5.869479;
	BLACKPEARL_walk_verts[71] = 9.844748;
	BLACKPEARL_walk_verts[72] = 4.059679;
	BLACKPEARL_walk_verts[73] = 5.853862;
	BLACKPEARL_walk_verts[74] = 7.356257;
	BLACKPEARL_walk_verts[75] = 4.012272;
	BLACKPEARL_walk_verts[76] = 5.852778;
	BLACKPEARL_walk_verts[77] = 0.809231;
	BLACKPEARL_walk_verts[78] = 3.143495;
	BLACKPEARL_walk_verts[79] = 8.273914;
	BLACKPEARL_walk_verts[80] = -12.214993;
	BLACKPEARL_walk_verts[81] = -3.243711;
	BLACKPEARL_walk_verts[82] = 8.279313;
	BLACKPEARL_walk_verts[83] = -12.312717;
	BLACKPEARL_walk_verts[84] = -3.271523;
	BLACKPEARL_walk_verts[85] = 8.322594;
	BLACKPEARL_walk_verts[86] = -13.682786;
	BLACKPEARL_walk_verts[87] = -3.459368;
	BLACKPEARL_walk_verts[88] = 8.291814;
	BLACKPEARL_walk_verts[89] = -10.121349;
	BLACKPEARL_walk_verts[90] = -0.001911;
	BLACKPEARL_walk_verts[91] = 5.791462;
	BLACKPEARL_walk_verts[92] = -6.146911;
	BLACKPEARL_walk_verts[93] = 5.921764;
	BLACKPEARL_walk_verts[94] = 7.180055;
	BLACKPEARL_walk_verts[95] = 17.633089;
	BLACKPEARL_walk_verts[96] = -6.035600;
	BLACKPEARL_walk_verts[97] = 7.203559;
	BLACKPEARL_walk_verts[98] = 17.509199;
	BLACKPEARL_walk_verts[99] = -6.583918;
	BLACKPEARL_walk_verts[100] = 7.087767;
	BLACKPEARL_walk_verts[101] = -3.187550;
	BLACKPEARL_walk_verts[102] = 0.936451;
	BLACKPEARL_walk_verts[103] = 18.187233;
	BLACKPEARL_walk_verts[104] = 15.151675;
	BLACKPEARL_walk_verts[105] = -1.128260;
	BLACKPEARL_walk_verts[106] = 18.217752;
	BLACKPEARL_walk_verts[107] = 15.202055;
	BLACKPEARL_walk_verts[108] = -1.296471;
	BLACKPEARL_walk_verts[109] = 19.188147;
	BLACKPEARL_walk_verts[110] = 0.210117;
	BLACKPEARL_walk_verts[111] = 1.182520;
	BLACKPEARL_walk_verts[112] = 20.342806;
	BLACKPEARL_walk_verts[113] = 16.837204;
	BLACKPEARL_walk_verts[114] = -1.043100;
	BLACKPEARL_walk_verts[115] = 20.342806;
	BLACKPEARL_walk_verts[116] = 15.452576;
	BLACKPEARL_walk_verts[117] = -2.502984;
	BLACKPEARL_walk_verts[118] = 23.270224;
	BLACKPEARL_walk_verts[119] = 1.956973;
	BLACKPEARL_walk_verts[120] = -2.905232;
	BLACKPEARL_walk_verts[121] = 8.307689;
	BLACKPEARL_walk_verts[122] = -13.902128;
	BLACKPEARL_walk_verts[123] = 3.276173;
	BLACKPEARL_walk_verts[124] = 9.318663;
	BLACKPEARL_walk_verts[125] = -17.314970;
	BLACKPEARL_walk_verts[126] = 2.104664;
	BLACKPEARL_walk_verts[127] = 9.390394;
	BLACKPEARL_walk_verts[128] = -19.596987;
	BLACKPEARL_walk_verts[129] = 1.301600;
	BLACKPEARL_walk_verts[130] = 9.968489;
	BLACKPEARL_walk_verts[131] = -23.864079;
	BLACKPEARL_walk_verts[132] = -1.178771;
	BLACKPEARL_walk_verts[133] = 9.968489;
	BLACKPEARL_walk_verts[134] = -23.864079;
	BLACKPEARL_walk_verts[135] = 3.256591;
	BLACKPEARL_walk_verts[136] = 8.283871;
	BLACKPEARL_walk_verts[137] = -12.287849;
	BLACKPEARL_walk_verts[138] = 3.390782;
	BLACKPEARL_walk_verts[139] = 8.298786;
	BLACKPEARL_walk_verts[140] = -10.165197;
	BLACKPEARL_walk_verts[141] = 6.744597;
	BLACKPEARL_walk_verts[142] = 7.087767;
	BLACKPEARL_walk_verts[143] = -3.219182;
	BLACKPEARL_walk_verts[144] = 1.233746;
	BLACKPEARL_walk_verts[145] = 19.154146;
	BLACKPEARL_walk_verts[146] = 0.122375;
	BLACKPEARL_walk_verts[147] = 1.384591;
	BLACKPEARL_walk_verts[148] = 22.348980;
	BLACKPEARL_walk_verts[149] = 1.378585;
	BLACKPEARL_walk_verts[150] = -1.848129;
	BLACKPEARL_walk_verts[151] = 9.864262;
	BLACKPEARL_walk_verts[152] = -21.374884;
	BLACKPEARL_walk_verts[153] = -2.004912;
	BLACKPEARL_walk_verts[154] = 9.386274;
	BLACKPEARL_walk_verts[155] = -19.552704;
	BLACKPEARL_walk_verts[156] = -2.549826;
	BLACKPEARL_walk_verts[157] = 9.296535;
	BLACKPEARL_walk_verts[158] = -16.268335;
	BLACKPEARL_walk_verts[159] = -4.414920;
	BLACKPEARL_walk_verts[160] = 8.366255;
	BLACKPEARL_walk_verts[161] = -13.641523;
	BLACKPEARL_walk_verts[162] = 4.644307;
	BLACKPEARL_walk_verts[163] = 8.287543;
	BLACKPEARL_walk_verts[164] = -11.254434;
	BLACKPEARL_walk_verts[165] = -4.129048;
	BLACKPEARL_walk_verts[166] = 5.848269;
	BLACKPEARL_walk_verts[167] = 0.855615;
	BLACKPEARL_walk_verts[168] = -4.060656;
	BLACKPEARL_walk_verts[169] = 5.839946;
	BLACKPEARL_walk_verts[170] = 4.131675;
	BLACKPEARL_walk_verts[171] = -4.186248;
	BLACKPEARL_walk_verts[172] = 5.854537;
	BLACKPEARL_walk_verts[173] = 7.349939;
	BLACKPEARL_walk_verts[174] = 5.033018;
	BLACKPEARL_walk_verts[175] = 5.767950;
	BLACKPEARL_walk_verts[176] = -3.320982;
	BLACKPEARL_walk_verts[177] = 4.911339;
	BLACKPEARL_walk_verts[178] = 8.232509;
	BLACKPEARL_walk_verts[179] = -6.306452;
	BLACKPEARL_walk_verts[180] = -4.969502;
	BLACKPEARL_walk_verts[181] = 8.239008;
	BLACKPEARL_walk_verts[182] = -6.367268;
	BLACKPEARL_walk_verts[183] = -5.065397;
	BLACKPEARL_walk_verts[184] = 5.767949;
	BLACKPEARL_walk_verts[185] = -3.443253;

	BLACKPEARL_walk_types[0 ] = 0;
	BLACKPEARL_walk_types[1 ] = 0;
	BLACKPEARL_walk_types[2 ] = 0;
	BLACKPEARL_walk_types[3 ] = 0;
	BLACKPEARL_walk_types[4 ] = 0;
	BLACKPEARL_walk_types[5 ] = 0;
	BLACKPEARL_walk_types[6 ] = 0;
	BLACKPEARL_walk_types[7 ] = 0;
	BLACKPEARL_walk_types[8 ] = 0;
	BLACKPEARL_walk_types[9 ] = 0;
	BLACKPEARL_walk_types[10] = 0;
	BLACKPEARL_walk_types[11] = 0;
	BLACKPEARL_walk_types[12] = 0;
	BLACKPEARL_walk_types[13] = 0;
	BLACKPEARL_walk_types[14] = 0;
	BLACKPEARL_walk_types[15] = 0;
	BLACKPEARL_walk_types[16] = 0;
	BLACKPEARL_walk_types[17] = 0;
	BLACKPEARL_walk_types[18] = 0;
	BLACKPEARL_walk_types[19] = 0;
	BLACKPEARL_walk_types[20] = 0;
	BLACKPEARL_walk_types[21] = 0;
	BLACKPEARL_walk_types[22] = 2;
	BLACKPEARL_walk_types[23] = 1;
	BLACKPEARL_walk_types[24] = 1;
	BLACKPEARL_walk_types[25] = 1;
	BLACKPEARL_walk_types[26] = 1;
	BLACKPEARL_walk_types[27] = 1;
	BLACKPEARL_walk_types[28] = 1;
	BLACKPEARL_walk_types[29] = 1;
	BLACKPEARL_walk_types[30] = 3;
	BLACKPEARL_walk_types[31] = 5;
	BLACKPEARL_walk_types[32] = 5;
	BLACKPEARL_walk_types[33] = 5;
	BLACKPEARL_walk_types[34] = 4;
	BLACKPEARL_walk_types[35] = 4;
	BLACKPEARL_walk_types[36] = 4;
	BLACKPEARL_walk_types[37] = 6;
	BLACKPEARL_walk_types[38] = 6;
	BLACKPEARL_walk_types[39] = 6;
	BLACKPEARL_walk_types[40] = 0;
	BLACKPEARL_walk_types[41] = 0;
	BLACKPEARL_walk_types[42] = 0;
	BLACKPEARL_walk_types[43] = 0;
	BLACKPEARL_walk_types[44] = 0;
	BLACKPEARL_walk_types[45] = 1;
	BLACKPEARL_walk_types[46] = 1;
	BLACKPEARL_walk_types[47] = 5;
	BLACKPEARL_walk_types[48] = 4;
	BLACKPEARL_walk_types[49] = 6;
	BLACKPEARL_walk_types[50] = 0;
	BLACKPEARL_walk_types[51] = 0;
	BLACKPEARL_walk_types[52] = 0;
	BLACKPEARL_walk_types[53] = 0;
	BLACKPEARL_walk_types[54] = 0;
	BLACKPEARL_walk_types[55] = 1;
	BLACKPEARL_walk_types[56] = 1;
	BLACKPEARL_walk_types[57] = 1;
	BLACKPEARL_walk_types[58] = 0;
	BLACKPEARL_walk_types[59] = 0;
	BLACKPEARL_walk_types[60] = 0;
	BLACKPEARL_walk_types[61] = 0;

	BLACKPEARL_walk_graph[0 ] = ( 1)*256 + ( 2);
	BLACKPEARL_walk_graph[1 ] = ( 1)*256 + ( 3);
	BLACKPEARL_walk_graph[2 ] = ( 1)*256 + ( 4);
	BLACKPEARL_walk_graph[3 ] = ( 2)*256 + ( 4);
	BLACKPEARL_walk_graph[4 ] = ( 2)*256 + ( 3);
	BLACKPEARL_walk_graph[5 ] = ( 3)*256 + ( 4);
	BLACKPEARL_walk_graph[6 ] = ( 3)*256 + (31);
	BLACKPEARL_walk_graph[7 ] = ( 4)*256 + (32);
	BLACKPEARL_walk_graph[8 ] = ( 1)*256 + ( 5);
	BLACKPEARL_walk_graph[9 ] = ( 3)*256 + ( 5);
	BLACKPEARL_walk_graph[10] = ( 4)*256 + (12);
	BLACKPEARL_walk_graph[11] = ( 2)*256 + (12);
	BLACKPEARL_walk_graph[12] = (12)*256 + (11);
	BLACKPEARL_walk_graph[13] = ( 5)*256 + ( 0);
	BLACKPEARL_walk_graph[14] = ( 0)*256 + (23);
	BLACKPEARL_walk_graph[15] = ( 0)*256 + ( 6);
	BLACKPEARL_walk_graph[16] = (11)*256 + (13);
	BLACKPEARL_walk_graph[17] = (11)*256 + ( 6);
	BLACKPEARL_walk_graph[18] = ( 6)*256 + (13);
	BLACKPEARL_walk_graph[19] = ( 6)*256 + (23);
	BLACKPEARL_walk_graph[20] = (13)*256 + (23);
	BLACKPEARL_walk_graph[21] = (11)*256 + (24);
	BLACKPEARL_walk_graph[22] = (13)*256 + (56);
	BLACKPEARL_walk_graph[23] = (57)*256 + (56);
	BLACKPEARL_walk_graph[24] = (13)*256 + (57);
	BLACKPEARL_walk_graph[25] = (17)*256 + (57);
	BLACKPEARL_walk_graph[26] = (17)*256 + (56);
	BLACKPEARL_walk_graph[27] = (24)*256 + (14);
	BLACKPEARL_walk_graph[28] = (24)*256 + ( 7);
	BLACKPEARL_walk_graph[29] = ( 7)*256 + (25);
	BLACKPEARL_walk_graph[30] = ( 7)*256 + (56);
	BLACKPEARL_walk_graph[31] = (56)*256 + (55);
	BLACKPEARL_walk_graph[32] = (56)*256 + (25);
	BLACKPEARL_walk_graph[33] = (24)*256 + (25);
	BLACKPEARL_walk_graph[34] = (55)*256 + (16);
	BLACKPEARL_walk_graph[35] = (55)*256 + (10);
	BLACKPEARL_walk_graph[36] = (25)*256 + (15);
	BLACKPEARL_walk_graph[37] = (15)*256 + ( 8);
	BLACKPEARL_walk_graph[38] = (25)*256 + ( 8);
	BLACKPEARL_walk_graph[39] = ( 8)*256 + ( 9);
	BLACKPEARL_walk_graph[40] = ( 8)*256 + (10);
	BLACKPEARL_walk_graph[41] = ( 8)*256 + (22);
	BLACKPEARL_walk_graph[42] = ( 8)*256 + (30);
	BLACKPEARL_walk_graph[43] = (10)*256 + (16);
	BLACKPEARL_walk_graph[44] = (10)*256 + (55);
	BLACKPEARL_walk_graph[45] = (22)*256 + (10);
	BLACKPEARL_walk_graph[46] = (22)*256 + (55);
	BLACKPEARL_walk_graph[47] = (23)*256 + (24);
	BLACKPEARL_walk_graph[48] = ( 7)*256 + (13);
	BLACKPEARL_walk_graph[49] = (23)*256 + (56);
	BLACKPEARL_walk_graph[50] = ( 7)*256 + (55);
	BLACKPEARL_walk_graph[51] = ( 8)*256 + (58);
	BLACKPEARL_walk_graph[52] = (10)*256 + (61);
	BLACKPEARL_walk_graph[53] = (61)*256 + (33);
	BLACKPEARL_walk_graph[54] = (58)*256 + (47);
	BLACKPEARL_walk_graph[55] = (58)*256 + (59);
	BLACKPEARL_walk_graph[56] = (60)*256 + (61);
	BLACKPEARL_walk_graph[57] = (59)*256 + (19);
	BLACKPEARL_walk_graph[58] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[59] = (61)*256 + (18);
	BLACKPEARL_walk_graph[60] = (61)*256 + (29);
	BLACKPEARL_walk_graph[61] = (18)*256 + (29);
	BLACKPEARL_walk_graph[62] = (29)*256 + (27);
	BLACKPEARL_walk_graph[63] = (29)*256 + (40);
	BLACKPEARL_walk_graph[64] = (19)*256 + (20);
	BLACKPEARL_walk_graph[65] = (19)*256 + (46);
	BLACKPEARL_walk_graph[66] = (18)*256 + (19);
	BLACKPEARL_walk_graph[67] = (29)*256 + (46);
	BLACKPEARL_walk_graph[68] = (18)*256 + (46);
	BLACKPEARL_walk_graph[69] = (19)*256 + (29);
	BLACKPEARL_walk_graph[70] = (20)*256 + (26);
	BLACKPEARL_walk_graph[71] = (20)*256 + (27);
	BLACKPEARL_walk_graph[72] = (27)*256 + (28);
	BLACKPEARL_walk_graph[73] = (27)*256 + (40);
	BLACKPEARL_walk_graph[74] = (28)*256 + (40);
	BLACKPEARL_walk_graph[75] = (28)*256 + (53);
	BLACKPEARL_walk_graph[76] = (26)*256 + (46);
	BLACKPEARL_walk_graph[77] = (26)*256 + (54);
	BLACKPEARL_walk_graph[78] = (26)*256 + (45);
	BLACKPEARL_walk_graph[79] = (45)*256 + (46);
	BLACKPEARL_walk_graph[80] = (21)*256 + (26);
	BLACKPEARL_walk_graph[81] = (21)*256 + (45);
	BLACKPEARL_walk_graph[82] = (52)*256 + (53);
	BLACKPEARL_walk_graph[83] = (52)*256 + (40);
	BLACKPEARL_walk_graph[84] = (21)*256 + (41);
	BLACKPEARL_walk_graph[85] = (52)*256 + (41);
	BLACKPEARL_walk_graph[86] = (52)*256 + (42);
	BLACKPEARL_walk_graph[87] = (52)*256 + (51);
	BLACKPEARL_walk_graph[88] = (41)*256 + (51);
	BLACKPEARL_walk_graph[89] = (50)*256 + (51);
	BLACKPEARL_walk_graph[90] = (50)*256 + (44);
	BLACKPEARL_walk_graph[91] = (50)*256 + (43);
	BLACKPEARL_walk_graph[92] = (43)*256 + (44);
	BLACKPEARL_walk_graph[93] = (32)*256 + (35);
	BLACKPEARL_walk_graph[94] = (35)*256 + (38);
	BLACKPEARL_walk_graph[95] = (31)*256 + (34);
	BLACKPEARL_walk_graph[96] = (34)*256 + (37);
	BLACKPEARL_walk_graph[97] = (47)*256 + (48);
	BLACKPEARL_walk_graph[98] = (48)*256 + (49);
	BLACKPEARL_walk_graph[99] = (33)*256 + (36);
	BLACKPEARL_walk_graph[100] = (36)*256 + (39);
	BLACKPEARL_walk_graph[101] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[102] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[103] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[104] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[105] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[106] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[107] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[108] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[109] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[110] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[111] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[112] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[113] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[114] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[115] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[116] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[117] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[118] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[119] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[120] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[121] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[122] = (-1)*256 + (-1);
	BLACKPEARL_walk_graph[123] = (-1)*256 + (-1);
}