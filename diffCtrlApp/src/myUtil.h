#ifndef MY_UTIL
#define MY_UTIL

/* CONVERSION TABLES

 Y = f(X)

 where X is the stage position, and Y is the actuator tip position.
*/

#define convTableVScrapBottow_Size 301
#define convTableVScrapTop_Size    300
#define convTableHScrapOut_Size    10
#define convTableHScrapIn_Size     10

// Vertical Scraper - Bottow Blade - Movement Conversion Table
// X values (linear stage)
static const epicsFloat64 convTableVScrapBottow_X[convTableVScrapBottow_Size] =
{
 13.847850, 13.862800, 13.880350, 13.898000, 13.915850, 13.933300, 13.951050, 13.968650, 13.986250, 14.003950,
 14.021550, 14.039350, 14.056950, 14.074650, 14.092300, 14.110000, 14.127650, 14.145300, 14.162900, 14.180600,
 14.198300, 14.215950, 14.233600, 14.251300, 14.268850, 14.286500, 14.304300, 14.322250, 14.339700, 14.357300,
 14.374900, 14.392700, 14.410250, 14.427800, 14.445500, 14.463150, 14.480850, 14.498500, 14.516200, 14.533850,
 14.551500, 14.569200, 14.586800, 14.604500, 14.622100, 14.639800, 14.657500, 14.675150, 14.692750, 14.710450,
 14.728100, 14.745850, 14.763400, 14.781100, 14.798750, 14.816450, 14.834100, 14.851900, 14.869400, 14.887300,
 14.904700, 14.922650, 14.940050, 14.958100, 14.975350, 14.993300, 15.010650, 15.028300, 15.045950, 15.063800,
 15.081350, 15.098950, 15.116650, 15.134300, 15.151950, 15.169550, 15.187250, 15.204850, 15.222600, 15.240250,
 15.257850, 15.275500, 15.293250, 15.310850, 15.328500, 15.346250, 15.364300, 15.381550, 15.399550, 15.416850,
 15.434900, 15.452150, 15.469900, 15.487600, 15.505500, 15.522800, 15.540550, 15.558100, 15.575750, 15.593400,
 15.611100, 15.628800, 15.646450, 15.664200, 15.681750, 15.699350, 15.717150, 15.734800, 15.752450, 15.770050,
 15.787650, 15.805400, 15.823000, 15.841250, 15.858500, 15.876050, 15.893700, 15.911400, 15.929000, 15.946850,
 15.964250, 15.981950, 15.999650, 16.017300, 16.034950, 16.052600, 16.070300, 16.087900, 16.105650, 16.123750,
 16.140950, 16.158550, 16.176200, 16.193850, 16.211700, 16.229300, 16.247050, 16.264550, 16.282300, 16.299950,
 16.317450, 16.335200, 16.352850, 16.370450, 16.388150, 16.405800, 16.424250, 16.441200, 16.459050, 16.476700,
 16.494050, 16.511750, 16.529400, 16.547200, 16.564750, 16.582350, 16.600050, 16.617850, 16.635350, 16.653050,
 16.670700, 16.688350, 16.706000, 16.723750, 16.741300, 16.759650, 16.776700, 16.794300, 16.812150, 16.829600,
 16.847450, 16.865100, 16.882650, 16.900300, 16.917900, 16.936100, 16.953250, 16.971250, 16.988700, 17.006250,
 17.024100, 17.041700, 17.059150, 17.076800, 17.095100, 17.112200, 17.129800, 17.147550, 17.165250, 17.182750,
 17.200550, 17.218200, 17.236150, 17.253450, 17.271100, 17.288700, 17.306600, 17.324150, 17.341750, 17.359400,
 17.377150, 17.394750, 17.412400, 17.430500, 17.447700, 17.465400, 17.484250, 17.500700, 17.518300, 17.536000,
 17.553650, 17.571500, 17.589200, 17.606650, 17.624300, 17.642100, 17.659650, 17.677250, 17.694950, 17.712600,
 17.730300, 17.748000, 17.765650, 17.783400, 17.801150, 17.818550, 17.836300, 17.854100, 17.871600, 17.889400,
 17.906850, 17.924550, 17.942550, 17.959850, 17.977850, 17.995350, 18.012900, 18.030600, 18.048100, 18.065900,
 18.083500, 18.101450, 18.118850, 18.136800, 18.154300, 18.172050, 18.189500, 18.207200, 18.224900, 18.242650,
 18.260200, 18.277800, 18.295450, 18.313200, 18.331100, 18.348550, 18.366100, 18.383750, 18.401400, 18.419150,
 18.437000, 18.454600, 18.472200, 18.489700, 18.507400, 18.525200, 18.542700, 18.560500, 18.578050, 18.595850,
 18.613300, 18.631200, 18.648800, 18.666550, 18.684000, 18.701600, 18.719350, 18.737200, 18.754650, 18.772300,
 18.789950, 18.807700, 18.825300, 18.843350, 18.860600, 18.878250, 18.896250, 18.913650, 18.931250, 18.949050,
 18.966650, 18.984300, 19.002100, 19.019500, 19.037500, 19.054850, 19.072500, 19.090400, 19.108050, 19.125500,
 19.142150
};
// Y values (scraper tip)
static const epicsFloat64 convTableVScrapBottow_Y[convTableVScrapBottow_Size] =
{
 -6.1422350, -6.1206432, -6.0917178, -6.0618912, -6.0317867, -6.0020446, -5.9712043, -5.9414556, -5.9112101, -5.8810549,
 -5.8509166, -5.8210095, -5.7911345, -5.7610219, -5.7311776, -5.7010436, -5.6709812, -5.6411626, -5.6110211, -5.5808195,
 -5.5507897, -5.5206630, -5.4903938, -5.4597680, -5.4295836, -5.3990200, -5.3691442, -5.3389264, -5.3092723, -5.2794760,
 -5.2487101, -5.2187706, -5.1889706, -5.1584581, -5.1279355, -5.0972459, -5.0670174, -5.0368583, -5.0071733, -4.9766454,
 -4.9463482, -4.9163615, -4.8860973, -4.8559443, -4.8255307, -4.7953168, -4.7652375, -4.7346963, -4.7047593, -4.6746841,
 -4.6443774, -4.6137905, -4.5834502, -4.5534340, -4.5238455, -4.4940913, -4.4642217, -4.4333527, -4.4034958, -4.3724392,
 -4.3426289, -4.3107385, -4.2804445, -4.2491246, -4.2192270, -4.1881146, -4.1586931, -4.1277745, -4.0974383, -4.0663207,
 -4.0361709, -4.0055632, -3.9749568, -3.9447471, -3.9140812, -3.8839118, -3.8533991, -3.8231203, -3.7932845, -3.7630095,
 -3.7330995, -3.7025661, -3.6724663, -3.6425655, -3.6123433, -3.5824513, -3.5512861, -3.5216326, -3.4905886, -3.4604442,
 -3.4296683, -3.3998857, -3.3658959, -3.3364930, -3.3040145, -3.2749819, -3.2444398, -3.2137428, -3.1832301, -3.1525697,
 -3.1222210, -3.0914154, -3.0607324, -3.0271850, -2.9973854, -2.9673225, -2.9366411, -2.9057236, -2.8751439, -2.8444151,
 -2.8137623, -2.7808796, -2.7509417, -2.7184371, -2.6892781, -2.6591290, -2.6286407, -2.5979552, -2.5672012, -2.5363287,
 -2.5047225, -2.4739205, -2.4438722, -2.4125592, -2.3821399, -2.3515347, -2.3205560, -2.2896760, -2.2569827, -2.2251321,
 -2.1964275, -2.1665852, -2.1362175, -2.1060764, -2.0755988, -2.0457728, -2.0149897, -1.9841615, -1.9536017, -1.9237804,
 -1.8927671, -1.8621173, -1.8316232, -1.8010862, -1.7689606, -1.7382250, -1.7044979, -1.6756624, -1.6456476, -1.6149190,
 -1.5853075, -1.5549699, -1.5246776, -1.4943499, -1.4639610, -1.4337269, -1.4031280, -1.3697909, -1.3400022, -1.3093811,
 -1.2791616, -1.2484588, -1.2181910, -1.1865853, -1.1560144, -1.1237116, -1.0954889, -1.0661206, -1.0361835, -1.0061061,
 -0.9759774, -0.9455854, -0.9154266, -0.8850691, -0.8546988, -0.8209755, -0.7915252, -0.7604635, -0.7310036, -0.6986031,
 -0.6678920, -0.6372908, -0.6067992, -0.5758095, -0.5420051, -0.5136492, -0.4840441, -0.4536757, -0.4233814, -0.3935307,
 -0.3636343, -0.3331401, -0.2996840, -0.2697614, -0.2395199, -0.2093556, -0.1778870, -0.1473592, -0.1157990, -0.0855549,
 -0.0537488, -0.0231320,  0.0074370,  0.0398863,  0.0699066,  0.1015852,  0.1370076,  0.1644266,  0.1947827,  0.2251609,
  0.2553257,  0.2856114,  0.3159449,  0.3454411,  0.3753825,  0.4061419,  0.4381437,  0.4682843,  0.4989312,  0.5301120,
  0.5614438,  0.5916908,  0.6226288,  0.6539253,  0.6846141,  0.7153407,  0.7473116,  0.7787394,  0.8092092,  0.8413755,
  0.8723733,  0.9029452,  0.9353522,  0.9658430,  0.9980563,  1.0282296,  1.0596835,  1.0917670,  1.1231029,  1.1553188,
  1.1873217,  1.2192069,  1.2503306,  1.2826343,  1.3138594,  1.3450106,  1.3761052,  1.4078774,  1.4396928,  1.4715637,
  1.5030447,  1.5345184,  1.5657193,  1.5974400,  1.6291407,  1.6605979,  1.6923751,  1.7247341,  1.7571941,  1.7892087,
  1.8218073,  1.8538425,  1.8856713,  1.9172844,  1.9493830,  1.9814794,  2.0134079,  2.0458774,  2.0777065,  2.1104757,
  2.1424159,  2.1744577,  2.2069468,  2.2389018,  2.2702406,  2.3021800,  2.3342919,  2.3664062,  2.3983824,  2.4305344,
  2.4622457,  2.4942668,  2.5262555,  2.5588240,  2.5904212,  2.6226610,  2.6552655,  2.6872480,  2.7202113,  2.7527814,
  2.7846247,  2.8162523,  2.8490346,  2.8807107,  2.9135543,  2.9456147,  2.9773437,  3.0100675,  3.0420520,  3.0736783,
  3.103685
};

// Vertical Scraper - Top Blade - Movement Conversion Table
// X values (linear stage)
static const epicsFloat64 convTableVScrapTop_X[convTableVScrapTop_Size] =
{
 -19.032100, -19.015900, -18.997200, -18.979300, -18.961000, -18.942700, -18.924300, -18.906000, -18.887650, -18.869300,
 -18.851000, -18.832700, -18.814300, -18.796000, -18.777700, -18.759400, -18.741000, -18.722700, -18.704350, -18.686050,
 -18.667800, -18.649450, -18.631150, -18.612800, -18.594500, -18.576150, -18.557800, -18.539450, -18.521150, -18.502850,
 -18.484550, -18.466150, -18.447900, -18.429550, -18.411200, -18.392850, -18.374450, -18.356250, -18.337900, -18.319600,
 -18.301300, -18.282750, -18.264650, -18.246250, -18.227950, -18.209650, -18.191300, -18.173000, -18.154650, -18.136200,
 -18.118050, -18.099650, -18.081400, -18.063050, -18.044700, -18.026300, -18.008050, -17.989750, -17.971450, -17.953050,
 -17.934800, -17.916450, -17.898150, -17.879750, -17.861400, -17.843100, -17.824750, -17.806500, -17.788150, -17.769850,
 -17.751500, -17.733150, -17.714850, -17.696500, -17.678250, -17.659850, -17.641550, -17.623300, -17.604900, -17.586550,
 -17.568250, -17.549950, -17.531600, -17.513350, -17.494950, -17.476700, -17.458350, -17.440050, -17.421650, -17.403350,
 -17.385000, -17.366750, -17.348400, -17.330050, -17.311750, -17.293400, -17.275100, -17.256800, -17.238400, -17.220100,
 -17.201800, -17.183500, -17.165150, -17.146800, -17.128450, -17.110250, -17.091800, -17.073500, -17.055100, -17.036850,
 -17.018500, -17.000200, -16.981900, -16.963600, -16.945200, -16.926950, -16.908600, -16.890300, -16.871900, -16.853600,
 -16.835300, -16.816950, -16.798450, -16.780250, -16.762000, -16.743650, -16.725350, -16.707000, -16.688700, -16.670350,
 -16.652050, -16.633750, -16.615200, -16.597100, -16.578700, -16.560450, -16.542100, -16.523750, -16.505450, -16.487100,
 -16.468800, -16.450400, -16.432100, -16.413800, -16.395500, -16.377250, -16.358700, -16.340550, -16.322200, -16.303800,
 -16.285500, -16.267250, -16.248900, -16.230550, -16.212300, -16.193850, -16.175650, -16.157250, -16.138950, -16.120650,
 -16.102350, -16.083900, -16.065650, -16.047350, -16.029050, -16.010700, -15.992400, -15.974050, -15.955750, -15.937400,
 -15.919100, -15.900550, -15.882450, -15.864100, -15.845500, -15.827450, -15.809100, -15.790800, -15.772450, -15.754100,
 -15.735800, -15.717450, -15.699150, -15.680850, -15.662350, -15.644200, -15.625900, -15.607450, -15.589200, -15.570900,
 -15.552550, -15.534300, -15.515950, -15.497650, -15.479300, -15.460950, -15.442650, -15.424300, -15.406000, -15.387700,
 -15.369400, -15.350750, -15.332700, -15.314350, -15.295900, -15.277750, -15.259400, -15.241000, -15.222700, -15.204400,
 -15.186050, -15.167750, -15.149250, -15.131100, -15.112750, -15.094400, -15.076100, -15.057800, -15.039500, -15.021100,
 -15.002800, -14.984500, -14.966200, -14.947850, -14.929550, -14.911250, -14.892650, -14.874450, -14.856250, -14.837750,
 -14.819550, -14.801250, -14.782900, -14.764650, -14.746250, -14.728050, -14.709650, -14.691350, -14.673050, -14.654700,
 -14.636350, -14.617950, -14.599550, -14.581200, -14.563000, -14.544700, -14.526100, -14.507900, -14.489800, -14.471450,
 -14.453100, -14.434350, -14.416450, -14.397700, -14.379100, -14.362300, -14.341300, -14.326600, -14.307300, -14.291200,
 -14.271450, -14.256150, -14.236100, -14.216350, -14.198800, -14.180150, -14.162100, -14.142500, -14.125150, -14.106750,
 -14.088300, -14.068400, -14.051750, -14.033250, -14.013950, -13.995850, -13.977850, -13.960300, -13.941200, -13.923350,
 -13.901000, -13.868350, -13.850250, -13.831600, -13.813000, -13.796200, -13.778300, -13.757800, -13.741200, -13.722150,
 -13.704750, -13.686300, -13.668250, -13.649350, -13.631700, -13.615450, -13.595100, -13.578350, -13.562300, -13.544200
};
// Y values (scraper tip)
static const epicsFloat64 convTableVScrapTop_Y[convTableVScrapTop_Size] =
{
  5.5088293,  5.4836346,  5.4490036,  5.4153021,  5.3815311,  5.3485312,  5.3151249,  5.2820579,  5.2488739,  5.2155316,
  5.1815766,  5.1471356,  5.1143386,  5.0802304,  5.0452651,  5.0102257,  4.9745573,  4.9394731,  4.9043534,  4.8696122,
  4.8353517,  4.8002846,  4.7667521,  4.7328061,  4.6987497,  4.6647573,  4.6302581,  4.5964773,  4.5612174,  4.5265216,
  4.4913026,  4.4571490,  4.4241520,  4.3906986,  4.3572633,  4.3235031,  4.2895875,  4.2562301,  4.2209914,  4.1872906,
  4.1538239,  4.1183485,  4.0846996,  4.0489302,  4.0144208,  3.9793745,  3.9451974,  3.9110577,  3.8763918,  3.8423323,
  3.8095111,  3.7749576,  3.7421626,  3.7074139,  3.6735012,  3.6393257,  3.6045804,  3.5705139,  3.5359324,  3.5029401,
  3.4696230,  3.4367992,  3.4039111,  3.3701253,  3.3373227,  3.3029888,  3.2693250,  3.2359201,  3.2017333,  3.1673244,
  3.1327948,  3.0984475,  3.0641941,  3.0300288,  2.9968608,  2.9625918,  2.9288003,  2.8960733,  2.8627367,  2.8299382,
  2.7966794,  2.7629232,  2.7292935,  2.6945982,  2.6606192,  2.6260652,  2.5929195,  2.5607948,  2.5279179,  2.4953916,
  2.4620994,  2.4294895,  2.3959716,  2.3627730,  2.3306195,  2.2974635,  2.2649231,  2.2317123,  2.1988414,  2.1663898,
  2.1339592,  2.1016419,  2.0690330,  2.0377238,  2.0057546,  1.9739056,  1.9416585,  1.9092246,  1.8769569,  1.8440927,
  1.8117076,  1.7787902,  1.7472763,  1.7163701,  1.6844479,  1.6534359,  1.6218076,  1.5904456,  1.5582497,  1.5263952,
  1.4944517,  1.4625606,  1.4301801,  1.3977686,  1.3652555,  1.3331479,  1.3008375,  1.2688015,  1.2365752,  1.2052222,
  1.1742068,  1.1427290,  1.1106667,  1.0797794,  1.0480866,  1.0158628,  0.9836183,  0.9516128,  0.9191328,  0.8880615,
  0.8565307,  0.8260211,  0.7946695,  0.7635431,  0.7322167,  0.7012788,  0.6694576,  0.6388766,  0.6068918,  0.5748192,
  0.5431555,  0.5118055,  0.4796487,  0.4480624,  0.4169705,  0.3845978,  0.3533555,  0.3225572,  0.2917405,  0.2609596,
  0.2295156,  0.1978680,  0.1659740,  0.1337187,  0.1021745,  0.0696571,  0.0392539,  0.0084477, -0.0214494, -0.0524702,
 -0.0830178, -0.1146457, -0.1449531, -0.1761556, -0.2071869, -0.2375425, -0.2695584, -0.3011045, -0.3325418, -0.3639287,
 -0.3954540, -0.4271575, -0.4580921, -0.4891843, -0.5210858, -0.5507616, -0.5815962, -0.6122343, -0.6430739, -0.6742266,
 -0.7060446, -0.7378107, -0.7693723, -0.8001270, -0.8295345, -0.8599655, -0.8901153, -0.9199243, -0.9503247, -0.9812197,
 -1.0118103, -1.0423170, -1.0719385, -1.1034009, -1.1346402, -1.1660319, -1.1972425, -1.2279187, -1.2581252, -1.2890176,
 -1.3193079, -1.3489726, -1.3788061, -1.4093838, -1.4400355, -1.4707389, -1.5015065, -1.5326675, -1.5635652, -1.5951112,
 -1.6251106, -1.6554638, -1.6847311, -1.7145052, -1.7438084, -1.7736071, -1.8044413, -1.8342248, -1.8639072, -1.8943954,
 -1.9249849, -1.9553109, -1.9863852, -2.0169956, -2.0485189, -2.0790413, -2.1095027, -2.1395368, -2.1684154, -2.1974268,
 -2.2271676, -2.2572902, -2.2876202, -2.3174967, -2.3475276, -2.3781573, -2.4091651, -2.4379421, -2.4666700, -2.4960316,
 -2.5253072, -2.5547585, -2.5831528, -2.6139692, -2.6421829, -2.6735057, -2.7031332, -2.7297311, -2.7572558, -2.7866632,
 -2.8175870, -2.8430381, -2.8772254, -2.9078594, -2.9372215, -2.9657455, -2.9956786, -3.0240924, -3.0535368, -3.0835332,
 -3.1133681, -3.1454471, -3.1741444, -3.2041426, -3.2345878, -3.2640192, -3.2911336, -3.3192063, -3.3478704, -3.3760592,
 -3.4105749, -3.4640628, -3.4926448, -3.5216358, -3.5491869, -3.5783576, -3.6093570, -3.6405334, -3.6680636, -3.6973030,
 -3.7252912, -3.7538259, -3.7816196, -3.8113113, -3.8380320, -3.8628124, -3.8946398, -3.9226245, -3.9528520, -3.9815847
};

// Horizontal Scraper - Outer Blade - Movement Conversion Table
// X values (linear stage)
static const epicsFloat64 convTableHScrapOut_X[convTableHScrapOut_Size] =
{
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
};
// Y values (scraper tip)
static const epicsFloat64 convTableHScrapOut_Y[convTableHScrapOut_Size] =
{
 0, 0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5
};

// Horizontal Scraper - Inner Blade - Movement Conversion Table
// X values (linear stage)
static const epicsFloat64 convTableHScrapIn_X[convTableHScrapIn_Size] =
{
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
};
// Y values (scraper tip)
static const epicsFloat64 convTableHScrapIn_Y[convTableHScrapIn_Size] =
{
 0, 2, 4, 6, 8, 10, 12, 14, 16, 18
};

/* Functions */

epicsInt32 binarySearch(const epicsFloat64 *arr, epicsUInt16 lo, epicsUInt16 up, epicsFloat64 value);
epicsInt8 interpolateFromTable(const epicsFloat64 *arrX, const epicsFloat64 *arrY, epicsUInt16 arrSize, epicsFloat64* result, epicsFloat64 value);

#endif
