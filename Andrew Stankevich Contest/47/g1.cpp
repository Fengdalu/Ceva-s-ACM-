const double dp[11][11] = {{0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.250000000000000,0.333333333333333,0.375000000000000,0.400000000000000,0.416666666666667,0.428571428571429,0.437500000000000,0.444444444444444,0.450000000000000},{0.000000000000000,0.000000000000000,0.312500000000000,0.407407407407407,0.425781250000000,0.425600000000000,0.420524691358025,0.414410662224073,0.408447265625000,0.402987349489407,0.398100000000000},{0.000000000000000,0.000000000000000,0.343750000000000,0.432098765432099,0.430664062500000,0.417280000000000,0.403163580246914,0.390373058844529,0.379180908203125,0.369455875628715,0.360990000000000},{0.000000000000000,0.000000000000000,0.363281250000000,0.439719554945892,0.426101684570312,0.408652800000000,0.393054722031702,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.376953125000000,0.440701790038781,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.387207031250000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.395263671875000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000}};
const double dp1[11][11] = {{0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.250000000000000,0.333333333333333,0.375000000000000,0.400000000000000,0.416666666666667,0.428571428571429,0.437500000000000,0.444444444444444,0.450000000000000},{0.000000000000000,0.000000000000000,0.312500000000000,0.432098765432099,0.488281250000000,0.521600000000000,0.543981481481481,0.560183256976260,0.572509765625000,0.582228318853833,0.590100000000000},{0.000000000000000,0.000000000000000,0.343750000000000,0.481481481481481,0.536132812500000,0.567040000000000,0.588348765432099,0.604569524602844,0.617584228515625,0.628359498043997,0.637470000000000},{0.000000000000000,0.000000000000000,0.363281250000000,0.511354976375552,0.560379028320312,0.586429440000000,0.604798358672458,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.376953125000000,0.530796457179631,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.387207031250000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.395263671875000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000},{0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000,0.000000000000000}};