void main()
{
    l_U0 = -1;
    l_U60 = 0;
    sub_20();
    sub_1309();
    sub_2598();
    sub_3889();
    sub_5176();
    sub_6463();
    while (true)
    {
        WAIT( 0 );
        if (NOT l_U60)
        {
            for ( l_U8 = 0; l_U8 <= 49; l_U8++ )
            {
                ADD_STUNT_JUMP( l_U61[l_U8], l_U212[l_U8], l_U514[l_U8], l_U665[l_U8], l_U363[l_U8], l_U9[l_U8] );
            }
            ProtectedSet(g_U9192, 50);
            l_U60 = 1;
        }
        else
        {
            TERMINATE_THIS_SCRIPT();
        }
    }
    return;
}

void sub_20()
{
    l_U61[0] = {1273.05000000, 891.17000000, 30.20000000};
    l_U61[1] = {-222.27000000, 132.04000000, 14.72000000};
    l_U61[2] = {699.36190000, 1366.30800000, 25.22880000};
    l_U61[3] = {948.20620000, 1423.62000000, 25.23000000};
    l_U61[4] = {256.39000000, -255.39000000, 4.93000000};
    l_U61[5] = {966.00000000, 693.88000000, 26.63000000};
    l_U61[6] = {-996.02000000, 865.49000000, 22.19000000};
    l_U61[7] = {-1626.88000000, 977.08000000, 30.06000000};
    l_U61[8] = {-1436.28000000, -477.00000000, 50.67000000};
    l_U61[9] = {-1263.00000000, 1775.84300000, 29.89080000};
    l_U61[10] = {-1037.76000000, 1438.78700000, 40.00000000};
    l_U61[11] = {1046.29700000, 653.26790000, 36.43690000};
    l_U61[12] = {950.83600000, 756.10790000, 25.02020000};
    l_U61[13] = {1332.05000000, 459.89940000, 28.11640000};
    l_U61[14] = {1336.65600000, 397.92100000, 32.55530000};
    l_U61[15] = {-529.89160000, 363.67440000, 25.48720000};
    l_U61[16] = {-1037.47600000, 1199.00000000, 26.29280000};
    l_U61[17] = {1724.24000000, 337.94000000, 22.95000000};
    l_U61[18] = {-89.32000000, 1657.44000000, 18.97000000};
    l_U61[19] = {-966.97910000, 1570.16200000, 26.35030000};
    l_U61[20] = {876.94000000, 1406.20000000, 25.32000000};
    l_U61[21] = {235.11000000, -647.56000000, 7.70000000};
    l_U61[22] = {-795.05000000, 899.35000000, 13.09000000};
    l_U61[23] = {-831.11000000, 825.35000000, 3.54000000};
    l_U61[24] = {-1761.18000000, -51.20000000, 16.25000000};
    l_U61[25] = {-70.15000000, -411.56000000, 14.66000000};
    l_U61[26] = {-1420.74000000, 883.51000000, 22.92000000};
    l_U61[27] = {-1017.72000000, 1006.40000000, 21.17000000};
    l_U61[28] = {2027.53000000, 378.01000000, 18.00000000};
    l_U61[29] = {860.41000000, 488.52000000, 13.74000000};
    l_U61[30] = {-537.95000000, 1463.89000000, 18.60000000};
    l_U61[31] = {-1805.73000000, -467.76000000, 46.67000000};
    l_U61[32] = {408.80000000, -186.18000000, 1.81000000};
    l_U61[33] = {-4.48000000, 1398.43000000, 20.37000000};
    l_U61[34] = {896.57000000, 261.37000000, 42.25000000};
    l_U61[35] = {162.74000000, 747.90000000, 8.49000000};
    l_U61[36] = {-1325.75000000, 899.62000000, 23.33000000};
    l_U61[37] = {-182.00000000, 1631.88000000, 20.19000000};
    l_U61[38] = {-77.00000000, 1574.16000000, 21.93000000};
    l_U61[39] = {-1635.21000000, 832.59000000, 30.10000000};
    l_U61[40] = {-198.57000000, 185.00000000, 14.96000000};
    l_U61[41] = {-838.97000000, 1688.67000000, 1.79000000};
    l_U61[42] = {1482.70000000, 288.98000000, 24.69000000};
    l_U61[43] = {256.75000000, 558.50000000, 1.06000000};
    l_U61[44] = {-1319.58000000, -7.11000000, 12.70000000};
    l_U61[45] = {1167.33000000, 552.26000000, 31.90000000};
    l_U61[46] = {-1424.97000000, -118.48000000, 6.33000000};
    l_U61[47] = {169.89000000, 458.66000000, 28.71000000};
    l_U61[48] = {2016.47000000, 722.67000000, 13.95000000};
    l_U61[49] = {865.18000000, 1515.82000000, 16.60000000};
    return;
}

void sub_1309()
{
    l_U212[0] = {1275.48000000, 897.80000000, 39.63000000};
    l_U212[1] = {-219.09000000, 135.45000000, 22.54000000};
    l_U212[2] = {712.58000000, 1362.41700000, 36.99530000};
    l_U212[3] = {944.70060000, 1437.13000000, 30.16710000};
    l_U212[4] = {260.56000000, -253.85000000, 9.40000000};
    l_U212[5] = {972.98000000, 695.25000000, 30.06000000};
    l_U212[6] = {-992.66000000, 870.60000000, 30.56000000};
    l_U212[7] = {-1615.70000000, 980.32000000, 40.25000000};
    l_U212[8] = {-1406.03000000, -458.81000000, 64.83000000};
    l_U212[9] = {-1259.80000000, 1790.84300000, 40.89080000};
    l_U212[10] = {-1040.76600000, 1451.27500000, 49.00000000};
    l_U212[11] = {1045.33000000, 663.16160000, 43.44070000};
    l_U212[12] = {948.83600000, 770.92250000, 39.02100000};
    l_U212[13] = {1340.92800000, 456.47310000, 35.11640000};
    l_U212[14] = {1330.40100000, 395.93170000, 40.55570000};
    l_U212[15] = {-519.72040000, 368.14050000, 16.46660000};
    l_U212[16] = {-1047.84400000, 1197.00000000, 35.80640000};
    l_U212[17] = {1735.59000000, 340.85000000, 31.69000000};
    l_U212[18] = {-85.97000000, 1664.52000000, 26.37000000};
    l_U212[19] = {-972.25230000, 1566.00400000, 32.12520000};
    l_U212[20] = {873.36000000, 1417.64000000, 29.70000000};
    l_U212[21] = {237.31000000, -640.68000000, 15.75000000};
    l_U212[22] = {-791.11000000, 906.29000000, 21.59000000};
    l_U212[23] = {-820.55000000, 822.52000000, 15.28000000};
    l_U212[24] = {-1751.30000000, -47.06000000, 25.72000000};
    l_U212[25] = {-75.55000000, -404.80000000, 24.09000000};
    l_U212[26] = {-1415.14000000, 886.55000000, 27.85000000};
    l_U212[27] = {-1015.56000000, 1010.86000000, 25.29000000};
    l_U212[28] = {2035.28000000, 382.61000000, 25.60000000};
    l_U212[29] = {862.19000000, 499.34000000, 20.53000000};
    l_U212[30] = {-529.12000000, 1468.38000000, 25.50000000};
    l_U212[31] = {-1796.28000000, -449.83000000, 58.78000000};
    l_U212[32] = {415.05000000, -175.19000000, 10.66000000};
    l_U212[33] = {-1.25000000, 1404.70000000, 28.75000000};
    l_U212[34] = {898.95000000, 264.00000000, 51.91000000};
    l_U212[35] = {167.43000000, 749.13000000, 17.42000000};
    l_U212[36] = {-1318.75000000, 906.72000000, 28.32000000};
    l_U212[37] = {-180.48000000, 1638.05000000, 22.99000000};
    l_U212[38] = {-70.50000000, 1590.63000000, 30.95000000};
    l_U212[39] = {-1629.59000000, 836.97000000, 36.11000000};
    l_U212[40] = {-193.42000000, 189.75000000, 24.34000000};
    l_U212[41] = {-814.79000000, 1691.37000000, 15.72000000};
    l_U212[42] = {1490.45000000, 292.78000000, 32.52000000};
    l_U212[43] = {264.78000000, 567.43000000, 10.23000000};
    l_U212[44] = {-1312.30000000, -9.56000000, 19.33000000};
    l_U212[45] = {1170.24000000, 559.31000000, 39.00000000};
    l_U212[46] = {-1415.16000000, -115.03000000, 12.72000000};
    l_U212[47] = {180.05000000, 460.68000000, 37.54000000};
    l_U212[48] = {2012.42000000, 738.16000000, 19.39000000};
    l_U212[49] = {868.18000000, 1530.05000000, 21.83000000};
    return;
}

void sub_2598()
{
    l_U514[0] = {1326.99000000, 877.01000000, 13.48000000};
    l_U514[1] = {-197.51000000, 126.54000000, 13.94000000};
    l_U514[2] = {712.48670000, 1385.19700000, 13.28880000};
    l_U514[3] = {922.87000000, 1414.25000000, 24.75000000};
    l_U514[4] = {249.41000000, -245.87000000, 11.35000000};
    l_U514[5] = {965.00000000, 709.32000000, 25.00000000};
    l_U514[6] = {-950.04120000, 820.35710000, 4.13860000};
    l_U514[7] = {-1652.32000000, 928.04000000, 29.67000000};
    l_U514[8] = {-1376.74000000, -458.49000000, 2.06000000};
    l_U514[9] = {-1308.99900000, 1787.64800000, 18.00000000};
    l_U514[10] = {-1073.23400000, 1435.60800000, 23.46040000};
    l_U514[11] = {984.70760000, 654.15630000, 24.97400000};
    l_U514[12] = {906.14750000, 750.61440000, 25.00000000};
    l_U514[13] = {1332.00900000, 446.40880000, 36.50680000};
    l_U514[14] = {1336.39100000, 374.85260000, 30.52240000};
    l_U514[15] = {-515.87770000, 389.40570000, 4.65880000};
    l_U514[16] = {-1032.65700000, 1177.37100000, 15.40130000};
    l_U514[17] = {1693.27000000, 245.26000000, 19.66000000};
    l_U514[18] = {-60.81000000, 1620.72000000, 12.41000000};
    l_U514[19] = {-978.24000000, 1485.22000000, 25.60000000};
    l_U514[20] = {830.92000000, 1395.95000000, 18.70000000};
    l_U514[21] = {281.24000000, -655.66000000, 4.05000000};
    l_U514[22] = {-696.53000000, 890.51000000, 3.28000000};
    l_U514[23] = {-838.08500000, 765.79630000, 3.57000000};
    l_U514[24] = {-1763.88000000, -4.38000000, 8.26000000};
    l_U514[25] = {-119.52170000, -411.27120000, 13.61300000};
    l_U514[26] = {-1427.27000000, 826.46000000, 18.65000000};
    l_U514[27] = {-1082.35000000, 993.77000000, 12.83000000};
    l_U514[28] = {2014.45000000, 325.45000000, 9.48000000};
    l_U514[29] = {794.56000000, 480.56000000, 7.39000000};
    l_U514[30] = {-576.61000000, 1405.10000000, 14.60000000};
    l_U514[31] = {-1895.80000000, -443.65000000, 12.58000000};
    l_U514[32] = {396.70000000, -171.70000000, -0.18000000};
    l_U514[33] = {15.06000000, 1379.39000000, 10.82000000};
    l_U514[34] = {760.54000000, 257.03000000, 27.80000000};
    l_U514[35] = {152.55000000, 695.31000000, 7.27000000};
    l_U514[36] = {-1325.82000000, 934.16000000, 19.04000000};
    l_U514[37] = {-164.24000000, 1628.59000000, 19.46000000};
    l_U514[38] = {-45.94000000, 1591.51000000, 25.01000000};
    l_U514[39] = {-1642.90000000, 865.99000000, 29.45000000};
    l_U514[40] = {-198.49000000, 157.91000000, 14.34000000};
    l_U514[41] = {-846.59000000, 1712.26000000, -2.57000000};
    l_U514[42] = {1455.99000000, 351.84000000, 14.74000000};
    l_U514[43] = {254.06000000, 572.29000000, -0.31000000};
    l_U514[44] = {-1330.83000000, -20.33000000, 5.71000000};
    l_U514[45] = {1178.78000000, 541.27000000, 28.14000000};
    l_U514[46] = {-1437.09000000, -209.77000000, 4.93000000};
    l_U514[47] = {165.01000000, 487.51000000, 14.30000000};
    l_U514[48] = {2081.25000000, 725.19000000, 10.75000000};
    l_U514[49] = {811.21000000, 1485.45000000, 13.98000000};
    return;
}

void sub_3889()
{
    l_U665[0] = {1398.54000000, 911.10000000, 20.90000000};
    l_U665[1] = {-183.23000000, 149.39000000, 19.20000000};
    l_U665[2] = {760.17890000, 1410.52600000, 18.24230000};
    l_U665[3] = {894.50000000, 1428.78000000, 39.58000000};
    l_U665[4] = {266.63000000, -223.13000000, 6.06000000};
    l_U665[5] = {975.32000000, 769.47000000, 34.00000000};
    l_U665[6] = {-972.55760000, 849.42070000, 12.84720000};
    l_U665[7] = {-1641.15000000, 954.72000000, 43.91000000};
    l_U665[8] = {-1354.82000000, -439.15000000, 9.27000000};
    l_U665[9] = {-1265.29800000, 1815.73400000, 23.00000000};
    l_U665[10] = {-1120.80300000, 1460.64100000, 28.42850000};
    l_U665[11] = {1020.97400000, 667.47620000, 30.27290000};
    l_U665[12] = {848.84260000, 772.76780000, 10.00000000};
    l_U665[13] = {1343.75600000, 400.32110000, 31.50740000};
    l_U665[14] = {1331.55000000, 362.96280000, 40.81330000};
    l_U665[15] = {-553.48320000, 460.07020000, 9.89160000};
    l_U665[16] = {-1049.75800000, 1150.50400000, 41.13270000};
    l_U665[17] = {1727.81000000, 285.98000000, 47.90000000};
    l_U665[18] = {-50.71000000, 1636.22000000, 25.53000000};
    l_U665[19] = {-963.60000000, 1520.45000000, 32.50000000};
    l_U665[20] = {852.41000000, 1421.81000000, 32.21000000};
    l_U665[21] = {314.71000000, -636.50000000, 9.33000000};
    l_U665[22] = {-682.87000000, 919.54000000, 23.45000000};
    l_U665[23] = {-810.82920000, 793.63980000, 14.81050000};
    l_U665[24] = {-1742.91000000, 33.64000000, 19.53000000};
    l_U665[25] = {-137.54000000, -404.83000000, 23.72870000};
    l_U665[26] = {-1398.40000000, 865.15000000, 22.89000000};
    l_U665[27] = {-1042.72000000, 1017.09000000, 17.80000000};
    l_U665[28] = {2047.00000000, 335.83000000, 16.71000000};
    l_U665[29] = {820.71000000, 502.87000000, 13.12000000};
    l_U665[30] = {-557.58000000, 1440.23000000, 20.94000000};
    l_U665[31] = {-1864.77000000, -418.59000000, 24.94000000};
    l_U665[32] = {419.79000000, -132.85000000, 10.33000000};
    l_U665[33] = {53.38000000, 1409.99000000, 22.26000000};
    l_U665[34] = {865.46000000, 263.41000000, 37.97000000};
    l_U665[35] = {177.14000000, 713.60000000, 10.27000000};
    l_U665[36] = {-1318.69000000, 946.83000000, 36.74000000};
    l_U665[37] = {-132.61000000, 1648.30000000, 25.68000000};
    l_U665[38] = {-9.11000000, 1633.28000000, 40.85000000};
    l_U665[39] = {-1616.46000000, 891.55000000, 37.34000000};
    l_U665[40] = {-159.74000000, 137.20000000, 21.52000000};
    l_U665[41] = {-820.74000000, 1778.97000000, 7.55000000};
    l_U665[42] = {1499.42000000, 382.86000000, 26.58000000};
    l_U665[43] = {279.98000000, 609.50000000, 4.86000000};
    l_U665[44] = {-1300.46000000, -55.10000000, 19.26000000};
    l_U665[45] = {1214.35000000, 559.83000000, 36.37000000};
    l_U665[46] = {-1412.19000000, -192.21000000, 22.03000000};
    l_U665[47] = {182.34000000, 507.35000000, 20.89000000};
    l_U665[48] = {2026.60000000, 761.09000000, 20.90000000};
    l_U665[49] = {828.87000000, 1518.72000000, 20.06000000};
    return;
}

void sub_5176()
{
    l_U363[0] = {1305.00000000, 886.00000000, 40.00000000};
    l_U363[1] = {-219.99000000, 119.27000000, 19.11000000};
    l_U363[2] = {726.59000000, 1367.01000000, 26.47000000};
    l_U363[3] = {922.81000000, 1413.72000000, 25.61000000};
    l_U363[4] = {256.60000000, -228.34000000, 13.36000000};
    l_U363[5] = {966.02000000, 713.91000000, 28.98000000};
    l_U363[6] = {-986.21000000, 856.43000000, 17.68000000};
    l_U363[7] = {-1650.79000000, 943.71000000, 31.13000000};
    l_U363[8] = {-1354.65000000, -444.80000000, 2.68000000};
    l_U363[9] = {-1259.63000000, 1779.33000000, 31.19000000};
    l_U363[10] = {-1067.34000000, 1453.01000000, 35.86000000};
    l_U363[11] = {1034.96600000, 662.04970000, 32.47690000};
    l_U363[12] = {895.30000000, 763.00000000, 30.97000000};
    l_U363[13] = {1339.59900000, 451.66470000, 33.78390000};
    l_U363[14] = {1333.81000000, 397.75000000, 33.06000000};
    l_U363[15] = {-532.99000000, 394.55000000, 14.64000000};
    l_U363[16] = {-1032.22000000, 1151.26000000, 35.92000000};
    l_U363[17] = {1720.06000000, 269.87000000, 25.49000000};
    l_U363[18] = {-49.17000000, 1623.48000000, 24.00000000};
    l_U363[19] = {-978.46000000, 1508.15000000, 26.44000000};
    l_U363[20] = {833.07000000, 1405.95000000, 20.99000000};
    l_U363[21] = {284.71000000, -644.95000000, 8.94000000};
    l_U363[22] = {-695.38000000, 898.28000000, 4.63000000};
    l_U363[23] = {-840.28000000, 809.69000000, 5.41000000};
    l_U363[24] = {-1752.01000000, 9.90000000, 18.14000000};
    l_U363[25] = {-131.85000000, -401.21000000, 26.02000000};
    l_U363[26] = {-1424.02000000, 875.61000000, 20.04000000};
    l_U363[27] = {-1042.72000000, 993.77000000, 17.80000000};
    l_U363[28] = {2027.06000000, 350.06000000, 15.41000000};
    l_U363[29] = {825.19000000, 487.63000000, 11.09000000};
    l_U363[30] = {-562.29000000, 1430.88000000, 16.92000000};
    l_U363[31] = {-1834.57000000, -443.15000000, 54.12000000};
    l_U363[32] = {399.26000000, -177.96000000, 0.58000000};
    l_U363[33] = {38.73000000, 1390.23000000, 15.41000000};
    l_U363[34] = {869.47000000, 255.96000000, 41.43000000};
    l_U363[35] = {162.92000000, 719.57000000, 12.87000000};
    l_U363[36] = {-1325.91000000, 933.37000000, 24.86000000};
    l_U363[37] = {-146.72000000, 1646.45000000, 20.97000000};
    l_U363[38] = {-64.84000000, 1597.45000000, 32.79000000};
    l_U363[39] = {-1630.11000000, 865.10000000, 30.92000000};
    l_U363[40] = {-192.25000000, 157.83000000, 22.29000000};
    l_U363[41] = {-835.56000000, 1691.58000000, 3.18000000};
    l_U363[42] = {1479.34000000, 339.17000000, 26.93000000};
    l_U363[43] = {256.00000000, 580.85000000, 5.09000000};
    l_U363[44] = {-1314.00000000, -17.12000000, 10.91000000};
    l_U363[45] = {1171.43000000, 552.86000000, 32.36000000};
    l_U363[46] = {-1420.41000000, -151.90000000, 6.06000000};
    l_U363[47] = {181.69000000, 458.01000000, 29.22000000};
    l_U363[48] = {2052.00000000, 745.69000000, 13.62000000};
    l_U363[49] = {843.53000000, 1507.30000000, 18.79000000};
    return;
}

void sub_6463()
{
    l_U9[0] = 1000;
    l_U9[1] = 1000;
    l_U9[2] = 1000;
    l_U9[3] = 1000;
    l_U9[4] = 1000;
    l_U9[5] = 1000;
    l_U9[6] = 1000;
    l_U9[7] = 1000;
    l_U9[8] = 1000;
    l_U9[9] = 1000;
    l_U9[10] = 1000;
    l_U9[11] = 1000;
    l_U9[12] = 1000;
    l_U9[13] = 1000;
    l_U9[14] = 1000;
    l_U9[15] = 1000;
    l_U9[16] = 1000;
    l_U9[17] = 1000;
    l_U9[18] = 1000;
    l_U9[19] = 1000;
    l_U9[20] = 1000;
    l_U9[21] = 1000;
    l_U9[22] = 2500;
    l_U9[23] = 1000;
    l_U9[24] = 1000;
    l_U9[25] = 1000;
    l_U9[26] = 1000;
    l_U9[27] = 1000;
    l_U9[28] = 1000;
    l_U9[29] = 1000;
    l_U9[30] = 1000;
    l_U9[31] = 1000;
    l_U9[32] = 1000;
    l_U9[33] = 1000;
    l_U9[34] = 1000;
    l_U9[35] = 1000;
    l_U9[36] = 1000;
    l_U9[37] = 1000;
    l_U9[38] = 1000;
    l_U9[39] = 1000;
    l_U9[40] = 1000;
    l_U9[41] = 1000;
    l_U9[42] = 1000;
    l_U9[43] = 1000;
    l_U9[44] = 1000;
    l_U9[45] = 1000;
    l_U9[46] = 1000;
    l_U9[47] = 1000;
    l_U9[48] = 1000;
    l_U9[49] = 1000;
    return;
}
