void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U6 = 0;
    l_U7 = 0;
    l_U8 = 0;
    l_U9 = 0;
    l_U10 = 1;
    l_U76 = 6;
    l_U114 = nil;
    l_U127 = nil;
    l_U145 = 1;
    l_U180 = nil;
    l_U200 = 1;
    l_U276 = 6;
    l_U285 = 0;
    l_U286 = -1;
    l_U287 = 0;
    l_U288 = 0;
    l_U293 = 1;
    l_U471 = 0;
    l_U472 = 0;
    l_U521 = 0;
    l_U522 = 0;
    l_U568 = 0;
    l_U569 = 0;
    l_U570 = 0;
    l_U572 = 1;
    l_U573 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    if (l_U472)
    {
        l_U471 = 1;
        l_U472 = 0;
    }
    while (true)
    {
        WAIT( 0 );
        switch (l_U471)
        {
            case 0:
            if (g_U15811[24])
            {
                l_U471 = 1;
            }
            sub_304();
            break;
            case 1:
            if (((NOT g_U12379) AND (NOT IS_AUTO_SAVE_IN_PROGRESS())) AND (NOT g_U10953._fU4))
            {
                if (l_U521 > 1000)
                {
                    if (g_U43002 == 0)
                    {
                        PRINT_HELP( "BASE_HELP" );
                        g_U43002 = 1;
                        sub_410();
                        l_U471 = 2;
                    }
                }
                else
                {
                    l_U521++;
                }
            }
            if ((g_U43003 == 0) AND (g_U15811[29] == 1))
            {
                if (l_U522 > 500)
                {
                    if ((((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT IS_AUTO_SAVE_IN_PROGRESS())) AND (NOT g_U10953._fU4)) AND (NOT g_U12379))
                    {
                        PRINT_HELP( "RACE_HELP" );
                        g_U43003 = 1;
                    }
                }
                else
                {
                    l_U522++;
                }
            }
            break;
            case 2:
            if ((g_U43003 == 0) AND (g_U15811[29] == 1))
            {
                if (l_U522 > 500)
                {
                    if ((((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT IS_AUTO_SAVE_IN_PROGRESS())) AND (NOT g_U10953._fU4)) AND (NOT g_U12379))
                    {
                        PRINT_HELP( "RACE_HELP" );
                        g_U43003 = 1;
                    }
                }
                else
                {
                    l_U522++;
                }
            }
            sub_304();
            if (g_U12379)
            {
                if (l_U573 == 0)
                {
                    sub_5287();
                    l_U573 = 1;
                }
            }
            else if (l_U573 == 1)
            {
                sub_410();
                l_U573 = 0;
            }
            if (NOT (IS_CHAR_INJURED( sub_5397() )))
            {
                if (sub_5451())
                {
                    if ((sub_5769()) AND (sub_7574( 2, 1 )))
                    {
                        if (sub_7835( 2, ref l_U516, 0 ))
                        {
                            sub_8463( 2, ref l_U516 );
                            g_U12379 = 1;
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                            SET_PLAYER_CONTROL( sub_5938(), 0 );
                            DO_SCREEN_FADE_OUT( 500 );
                            l_U471 = 3;
                        }
                    }
                    else
                    {
                        sub_8463( 2, ref l_U516 );
                    }
                }
                else
                {
                    sub_8463( 2, ref l_U516 );
                    if (l_U573 == 1)
                    {
                        sub_410();
                        l_U573 = 0;
                    }
                }
            }
            else
            {
                sub_8463( 2, ref l_U516 );
            }
            break;
            case 3:
            if (IS_SCREEN_FADED_OUT())
            {
                REQUEST_SCRIPT( "baseJumping" );
                while (NOT (HAS_SCRIPT_LOADED( "baseJumping" )))
                {
                    WAIT( 0 );
                }
                START_NEW_SCRIPT_WITH_ARGS( "baseJumping", ref l_U524, 42, 8192 );
                sub_9036();
                sub_5287();
                l_U471 = 4;
            }
            break;
            case 4:
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "baseJumping" )) == 0)
            {
                g_U12379 = 0;
                l_U471 = 2;
            }
            break;
        }
    }
    return;
}

void sub_304()
{
    return;
}

void sub_410()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    for ( I = 0; I < 15; I++ )
    {
        if (NOT (DOES_BLIP_EXIST( l_U495[I] )))
        {
            uVar3 = {sub_454( ref I )};
            ADD_BLIP_FOR_CONTACT( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U495[I] );
            CHANGE_BLIP_DISPLAY( l_U495[I], 2 );
            if (g_U42975[I] == 0)
            {
                CHANGE_BLIP_SPRITE( l_U495[I], 106 );
            }
            else
            {
                CHANGE_BLIP_SPRITE( l_U495[I], 122 );
            }
            CHANGE_BLIP_PRIORITY( l_U495[I], 0 );
            SET_BLIP_AS_SHORT_RANGE( l_U495[I], 1 );
        }
    }
    return;
}

void sub_454(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;

    sub_466( ref uVar3, uParam0 );
    return uVar3._fU0;
}

void sub_466(int iParam0, unknown uParam1)
{
    switch ((uParam1^))
    {
        case 0:
        iParam0->_fU0 = {-346.50270000, -100.84520000, 14.00000000};
        iParam0->_fU12 = {-285.06000000, -101.46000000, 419.15790000};
        iParam0->_fU24 = 190.81560000;
        iParam0->_fU28 = {-156.01960000, -447.27440000, 13.77584000};
        iParam0->_fU40 = {14.31995000, 0.00000000, -0.03245800};
        iParam0->_fU52 = 50.00000000;
        iParam0->_fU56 = {-154.53390000, -457.71870000, 46.18357000};
        iParam0->_fU68 = {39.07172000, 0.00000100, 19.56269000};
        iParam0->_fU80 = 19.00000000;
        iParam0->_fU84 = {-158.98000000, -424.55000000, 13.84000000};
        iParam0->_fU96 = "TARGET_EMPIRE_STATE";
        iParam0->_fU100 = 0;
        iParam0->_fU104 = 1;
        break;
        case 1:
        iParam0->_fU0 = {27.89800000, 178.81650000, 13.76290000};
        iParam0->_fU12 = {13.21000000, 190.98000000, 228.52330000};
        iParam0->_fU24 = 315.00000000;
        iParam0->_fU28 = {14.60024000, 184.22420000, 229.88580000};
        iParam0->_fU40 = {-5.10476000, 0.00000000, -2.48655000};
        iParam0->_fU52 = 33.00000000;
        iParam0->_fU56 = {14.60020000, 184.22420000, 229.88630000};
        iParam0->_fU68 = {-45.67015000, 0.00000000, -7.07020000};
        iParam0->_fU80 = 13.00000000;
        iParam0->_fU84 = {40.51150000, 388.33550000, 13.84650000};
        iParam0->_fU96 = "TARGET_JUMP_CHRYSLER";
        iParam0->_fU100 = 1;
        iParam0->_fU104 = 1;
        break;
        case 2:
        iParam0->_fU0 = {-29.05440000, 68.82000000, 13.77910000};
        iParam0->_fU12 = {-24.37390000, 53.98560000, 219.31030000};
        iParam0->_fU24 = 166.54790000;
        iParam0->_fU28 = {-58.23420000, -133.53010000, 15.72584000};
        iParam0->_fU40 = {13.30715000, 0.00000000, -51.12603000};
        iParam0->_fU52 = 45.00000000;
        iParam0->_fU56 = {-56.30007000, -122.71320000, 18.56240000};
        iParam0->_fU68 = {41.23338000, -0.00000000, -13.19962000};
        iParam0->_fU80 = 26.00000000;
        iParam0->_fU84 = {-53.36210000, -126.91790000, 13.80330000};
        iParam0->_fU96 = "TRUCK_JUMP_GETALIFE";
        iParam0->_fU100 = 2;
        iParam0->_fU104 = 2;
        break;
        case 3:
        iParam0->_fU0 = {-188.80130000, -570.40890000, 3.93260000};
        iParam0->_fU12 = {155.62000000, 546.12000000, 109.10000000};
        iParam0->_fU24 = 110.13930000;
        iParam0->_fU28 = {-390.03160000, -702.94010000, 1.22218400};
        iParam0->_fU40 = {11.92392000, 0.00000000, -32.23373000};
        iParam0->_fU52 = 45.00000000;
        iParam0->_fU56 = {-374.00660000, -697.05460000, 2.59080000};
        iParam0->_fU68 = {23.49767000, -0.00000100, -48.73491000};
        iParam0->_fU80 = 27.00000000;
        iParam0->_fU84 = {-382.72000000, -694.52000000, -0.40000000};
        iParam0->_fU96 = "TARGET_JUMP_PANORAMIC";
        iParam0->_fU100 = 3;
        iParam0->_fU104 = 2;
        break;
        case 4:
        iParam0->_fU0 = {-187.71410000, 346.46700000, 14.00000000};
        iParam0->_fU12 = {-172.56840000, 339.48400000, 244.48130000};
        iParam0->_fU24 = 169.68370000;
        iParam0->_fU28 = {-213.67330000, 156.38410000, 13.97084000};
        iParam0->_fU40 = {50.87465000, 0.00000100, -12.07994000};
        iParam0->_fU52 = 5.00000000;
        iParam0->_fU56 = {-213.67330000, 156.38410000, 13.98000000};
        iParam0->_fU68 = {11.56976000, 0.00000000, -12.07997000};
        iParam0->_fU80 = 45.00000000;
        iParam0->_fU84 = {-206.56900000, 191.33510000, 13.80520000};
        iParam0->_fU96 = "TRUCK_JUMP_PIRATE";
        iParam0->_fU100 = 4;
        iParam0->_fU104 = 2;
        break;
        case 5:
        iParam0->_fU0 = {-174.27040000, 205.10870000, 13.75790000};
        iParam0->_fU12 = {-166.03890000, 211.12660000, 247.10180000};
        iParam0->_fU24 = 15.03800000;
        iParam0->_fU28 = {-164.86290000, 210.25530000, 249.98770000};
        iParam0->_fU40 = {-56.03924000, -0.00000100, 25.12206000};
        iParam0->_fU52 = 45.00000000;
        iParam0->_fU56 = {-164.86290000, 230.53480000, 249.98700000};
        iParam0->_fU68 = {-56.03924000, -0.00000100, 25.12206000};
        iParam0->_fU80 = 30.00000000;
        iParam0->_fU84 = {-204.12360000, 381.43890000, 14.13970000};
        iParam0->_fU96 = "TARGET_JUMP_BAWSAQ";
        iParam0->_fU100 = 5;
        iParam0->_fU104 = 1;
        break;
        case 6:
        iParam0->_fU0 = {-218.71780000, 229.59520000, 13.76960000};
        iParam0->_fU12 = {-239.34840000, 231.52530000, 227.49400000};
        iParam0->_fU24 = 283.04350000;
        iParam0->_fU28 = {-240.81760000, 230.51020000, 229.71280000};
        iParam0->_fU40 = {-22.57453000, 0.00000000, -71.68533000};
        iParam0->_fU52 = 28.00000000;
        iParam0->_fU56 = {-240.81760000, 230.51020000, 229.71200000};
        iParam0->_fU68 = {-48.35759000, -0.00000000, -71.68532000};
        iParam0->_fU80 = 20.00000000;
        iParam0->_fU84 = {-68.20920000, 261.70260000, 13.83380000};
        iParam0->_fU96 = "TRUCK_JUMP_METV";
        iParam0->_fU100 = 6;
        iParam0->_fU104 = 2;
        break;
        case 7:
        iParam0->_fU0 = {-180.13420000, 17.25550000, 13.72320000};
        iParam0->_fU12 = {-161.47400000, 14.37160000, 211.07350000};
        iParam0->_fU24 = 2.86430000;
        iParam0->_fU28 = {-207.94270000, 317.87880000, 15.61697000};
        iParam0->_fU40 = {-2.05868900, 0.00000000, -173.51340000};
        iParam0->_fU52 = 27.00000000;
        iParam0->_fU56 = {-208.16650000, 319.84230000, 58.62914000};
        iParam0->_fU68 = {24.86241000, -0.00000000, -173.51340000};
        iParam0->_fU80 = 20.00000000;
        iParam0->_fU84 = {-206.45340000, 303.06420000, 13.97100000};
        iParam0->_fU96 = "TARGET_JUMP_TRIANGLE";
        iParam0->_fU100 = 7;
        iParam0->_fU104 = 1;
        break;
        case 8:
        iParam0->_fU0 = {938.65240000, -926.97650000, 13.73270000};
        iParam0->_fU12 = {829.03000000, -1002.37200000, 650.07350000};
        iParam0->_fU24 = 45.00000000;
        iParam0->_fU28 = {807.17410000, -1009.67400000, 663.60280000};
        iParam0->_fU40 = {-73.67423000, -0.00000000, -13.28706000};
        iParam0->_fU52 = 45.00000000;
        iParam0->_fU56 = {836.09370000, -1009.67400000, 663.60000000};
        iParam0->_fU68 = {-67.71549000, -0.00000000, 10.08961000};
        iParam0->_fU80 = 45.00000000;
        iParam0->_fU84 = {1340.45300000, -693.06420000, 7.30000000};
        iParam0->_fU96 = "HELI_CONEY_ISLAND";
        iParam0->_fU100 = 8;
        iParam0->_fU104 = 0;
        iParam0->_fU108 = {855.51760000, -964.19230000, 550.78770000};
        iParam0->_fU120 = {941.91250000, -873.17710000, 325.50110000};
        iParam0->_fU132 = {1107.11100000, -810.20810000, 170.80970000};
        iParam0->_fU144 = {1230.65200000, -739.80860000, 53.53185000};
        break;
        case 9:
        iParam0->_fU0 = {1282.68600000, 603.22330000, 37.99520000};
        iParam0->_fU12 = {1318.33000000, 604.85000000, 171.00000000};
        iParam0->_fU24 = 270.09590000;
        iParam0->_fU28 = {1316.53400000, 604.86400000, 170.79710000};
        iParam0->_fU40 = {1.33111700, 0.00000000, -91.38768000};
        iParam0->_fU52 = 41.00000000;
        iParam0->_fU56 = {1316.76000000, 604.85810000, 172.52500000};
        iParam0->_fU68 = {-31.00939000, 0.00000000, -95.93240000};
        iParam0->_fU80 = 39.00000000;
        iParam0->_fU84 = {1573.35200000, 545.38440000, 28.08000000};
        iParam0->_fU96 = "TARGET_MEADOWS_PARK";
        iParam0->_fU100 = 9;
        iParam0->_fU104 = 1;
        break;
        case 10:
        iParam0->_fU0 = {2133.23700000, 429.33000000, 20.82650000};
        iParam0->_fU12 = {1790.60400000, 323.10460000, 800.05570000};
        iParam0->_fU24 = 270.00000000;
        iParam0->_fU28 = {1807.83900000, 327.73360000, 812.93900000};
        iParam0->_fU40 = {-68.41459000, 0.00000000, 122.25180000};
        iParam0->_fU52 = 39.00000000;
        iParam0->_fU56 = {1776.19600000, 327.73360000, 812.93820000};
        iParam0->_fU68 = {-72.65725000, 0.00000000, -157.11150000};
        iParam0->_fU80 = 39.00000000;
        iParam0->_fU84 = {1643.35200000, 426.38440000, 28.08000000};
        iParam0->_fU96 = "HELI_FRANCISCOPSTATION";
        iParam0->_fU100 = 10;
        iParam0->_fU104 = 0;
        iParam0->_fU108 = {1776.51800000, 272.19230000, 583.78770000};
        iParam0->_fU120 = {1770.91200000, 218.17710000, 463.50110000};
        iParam0->_fU132 = {1581.11100000, 131.20810000, 268.80970000};
        iParam0->_fU144 = {1628.65200000, 367.80860000, 66.53185000};
        break;
        case 11:
        iParam0->_fU0 = {-1287.54500000, 884.57500000, 18.56640000};
        iParam0->_fU12 = {-1290.97100000, 931.95730000, 172.86160000};
        iParam0->_fU24 = 354.41390000;
        iParam0->_fU28 = {-1256.34400000, 1173.41400000, 31.27084000};
        iParam0->_fU40 = {30.00611000, 0.00000000, 170.94390000};
        iParam0->_fU52 = 3.00000000;
        iParam0->_fU56 = {-1256.34400000, 1173.41400000, 31.22000000};
        iParam0->_fU68 = {-0.01688200, 0.00000000, 129.23260000};
        iParam0->_fU80 = 24.00000000;
        iParam0->_fU84 = {-1300.92900000, 1156.48400000, 30.54810000};
        iParam0->_fU96 = "TRUCK_ALDERNEY_BUILDING";
        iParam0->_fU100 = 11;
        iParam0->_fU104 = 2;
        break;
        case 12:
        iParam0->_fU0 = {-2160.69000000, 165.47350000, 11.04610000};
        iParam0->_fU12 = {-2159.97100000, 165.95730000, 650.86160000};
        iParam0->_fU24 = 350.00000000;
        iParam0->_fU28 = {-2164.35100000, 180.96880000, 661.07310000};
        iParam0->_fU40 = {-65.99049000, 0.00000000, -103.29740000};
        iParam0->_fU52 = 45.00000000;
        iParam0->_fU56 = {-2167.59300000, 158.68140000, 659.05060000};
        iParam0->_fU68 = {-47.65578000, 0.00000100, -129.76800000};
        iParam0->_fU80 = 45.00000000;
        iParam0->_fU84 = {-1594.36900000, -22.89910000, 9.20000000};
        iParam0->_fU96 = "HELI_ALDERNEY_HELI_FIRE";
        iParam0->_fU100 = 12;
        iParam0->_fU104 = 0;
        iParam0->_fU108 = {-2041.51800000, 181.19230000, 500.78770000};
        iParam0->_fU120 = {-1972.91200000, 25.17706000, 321.50110000};
        iParam0->_fU132 = {-1867.11100000, -61.20800000, 129.80930000};
        iParam0->_fU144 = {-1652.65200000, -6.80859400, 33.53185000};
        break;
        case 13:
        iParam0->_fU0 = {-1191.15000000, 1692.54500000, 35.42050000};
        iParam0->_fU12 = {-765.97080000, 1580.95700000, 650.86160000};
        iParam0->_fU24 = 270.00000000;
        iParam0->_fU28 = {-758.41860000, 1581.80600000, 630.36910000};
        iParam0->_fU40 = {-69.67563000, -0.00000000, -127.66060000};
        iParam0->_fU52 = 45.00000000;
        iParam0->_fU56 = {-775.26880000, 1585.50500000, 664.14060000};
        iParam0->_fU68 = {-61.53965000, -0.00000000, -147.02660000};
        iParam0->_fU80 = 45.00000000;
        iParam0->_fU84 = {-750.36930000, 1424.89900000, 0.50463000};
        iParam0->_fU96 = "HELI_ALDERNEY_MANSION";
        iParam0->_fU100 = 13;
        iParam0->_fU104 = 0;
        iParam0->_fU108 = {-766.51760000, 1439.19200000, 486.78770000};
        iParam0->_fU120 = {-715.91250000, 1570.17700000, 332.50110000};
        iParam0->_fU132 = {-650.11090000, 1696.20800000, 184.80930000};
        iParam0->_fU144 = {-711.65200000, 1497.80900000, 37.58184000};
        break;
        case 14:
        iParam0->_fU0 = {-708.67500000, 340.91720000, 3.07100000};
        iParam0->_fU12 = {-718.97080000, -1702.95700000, 800.86160000};
        iParam0->_fU24 = 50.00000000;
        iParam0->_fU28 = {-741.33760000, -1705.32400000, 816.50840000};
        iParam0->_fU40 = {-34.84431000, -0.00000100, -37.00923000};
        iParam0->_fU52 = 45.00000000;
        iParam0->_fU56 = {-711.84740000, -1724.88700000, 815.85430000};
        iParam0->_fU68 = {-41.89388000, 0.00000000, -29.55850000};
        iParam0->_fU80 = 45.00000000;
        iParam0->_fU84 = {-608.11000000, -770.04000000, 20.02000000};
        iParam0->_fU96 = "HELI_WESTMINISTER";
        iParam0->_fU100 = 14;
        iParam0->_fU104 = 0;
        iParam0->_fU108 = {-702.51760000, -1604.19200000, 663.78770000};
        iParam0->_fU120 = {-657.91250000, -1373.17700000, 459.50110000};
        iParam0->_fU132 = {-631.11090000, -1077.20800000, 217.80930000};
        iParam0->_fU144 = {-612.65200000, -902.80860000, 128.53180000};
        break;
    }
    return;
}

void sub_5287()
{
    int I;

    for ( I = 0; I < 15; I++ )
    {
        if (DOES_BLIP_EXIST( l_U495[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U495[I] );
        }
    }
    return;
}

void sub_5397()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_5451()
{
    int I;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    fVar3 = 1.60000000;
    if ((NOT g_U12379) AND (NOT sub_5473()))
    {
        GET_CHAR_COORDINATES( sub_5397(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        for ( I = 0; I < 15; I++ )
        {
            uVar4 = {sub_454( ref I )};
            if ((VDIST( uVar4, uVar7 )) < 100.00000000)
            {
                if (IS_BIT_SET( g_U10938._fU0, 4 ))
                {
                    ;
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_5397(), uVar4._fU0, uVar4._fU4, uVar4._fU8 + fVar3, fVar3, fVar3, fVar3, 1 ))
                {
                    sub_466( ref l_U524, ref I );
                    l_U520 = I;
                    if (l_U524._fU104 == 0)
                    {
                        StrCopy( ref l_U516, "bj_prmpt2", 16 );
                    }
                    else
                    {
                        StrCopy( ref l_U516, "bj_prmpt", 16 );
                    }
                    if (l_U573 == 0)
                    {
                        sub_5287();
                        l_U573 = 1;
                    }
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_5473()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_5769()
{
    if ((IS_AUTO_SAVE_IN_PROGRESS()) || (g_U10953._fU4))
    {
        return 0;
    }
    if (IS_CHAR_DEAD( sub_5397() ))
    {
        PRINTSTRING( "IF (IS_CHAR_DEAD(PLAYER_CHAR_ID())\n" );
        return 0;
    }
    if (NOT sub_5451())
    {
        PRINTSTRING( "IF NOT PLAYER_IS_AT_ANY_BASE_JUMP_LAUNCH_POS\n" );
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_5938() )))
    {
        PRINTSTRING( "IF NOT (IS_PLAYER_PLAYING(PLAYER_ID())\n" );
        return 0;
    }
    if (g_U12379)
    {
        PRINTSTRING( "IF (g_onMission)\n" );
        return 0;
    }
    if (g_U12381)
    {
        PRINTSTRING( "IF (g_onActivityPhonecall\n" );
        return 0;
    }
    if ((sub_6126()) || (sub_6176()))
    {
        PRINTSTRING( "OR (IS_PLAYER_LOOKING_AT_NETWORK_CELLPHONE\n" );
        return 0;
    }
    if (NOT g_U22957)
    {
        PRINTSTRING( "IF NOT (g_allowStrandUpdates)n" );
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5938() )))
    {
        PRINTSTRING( "IF NOT (CAN_PLAYER_START_MISSION(PLAYER_ID()))n" );
        return 0;
    }
    if (NOT (sub_6409( 1, 1 )))
    {
        PRINTSTRING( "IF NOT (CAN_PLAYER_START_CUTSCENE()\n" );
        return 0;
    }
    if (sub_6750())
    {
        PRINTSTRING( "IF NOT (Check_If_Friend_Activity_Setup()\n" );
        return 0;
    }
    if (IS_BIT_SET( g_U10938._fU0, 4 ))
    {
        PRINTSTRING( "IF (IS_BIT_SET(g_replay.flags, REP_DO_REPLAY)\n" );
        return 0;
    }
    if (NOT sub_7440())
    {
        PRINTSTRING( "IF NOT (Check_If_Contact_Point_Triggering_Delay_Expired(\n" );
        return 0;
    }
    return 1;
}

void sub_5938()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_6126()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_6176()
{
    if (g_U560 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_6409(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_5397() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5397(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_5397() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5397(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_5397()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_5397() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5397() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5938() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5938() )))
    {
        return 0;
    }
    return 1;
}

int sub_6750()
{
    int I;
    unknown uVar3;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        if (sub_6776( I ))
        {
            uVar3 = sub_6878( I );
            if (g_U20825[uVar3]._fU0)
            {
                if (NOT (g_U14925[I]._fU80._fU0 == 0))
                {
                    PRINTSTRING( ".....Check_If_Friend_Activity_Setup: " );
                    PRINTINT( I );
                    PRINTSTRING( " strand setup\n" );
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_6776(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: return 1;
    }
    return 0;
}

int sub_6878(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 9;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_7109( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_7109(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_7440()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

int sub_7574(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_5938() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_5938() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_5938() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_5473())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_5397() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_7726())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_7726()
{
    return sub_7737( 0, 0 );
}

int sub_7737(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((uParam1) AND (g_U560 != 9))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

int sub_7835(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_7574( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U283)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_5938(), 0 );
                l_U283 = 1;
            }
            g_U10534 = uParam0;
            l_U284 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_8116();
                l_U282 = 1;
                g_U10535 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U10535 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U281 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U281)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U281 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_8116()
{
    return sub_7737( 1, 1 );
}

void sub_8463(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((g_U10534 == iParam0) AND (l_U284))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U284 = 0;
                if (l_U282)
                {
                    sub_8690();
                    l_U282 = 0;
                }
            }
            if (l_U283)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_5938(), 1 );
                l_U283 = 0;
            }
            if (l_U281)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U281 = 0;
            }
        }
    }
    return;
}

void sub_8690()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_9036()
{
    PRINTNL();
    PRINTNL();
    PRINTSTRING( "*******************************************************" );
    PRINTSTRING( "g_AreBasejumpStatsNeeded = TRUE & Requesting BasejumpScreen.sc" );
    PRINTNL();
    PRINTSTRING( "*******************************************************" );
    PRINTNL();
    g_U43592 = 0;
    g_U43591 = 0;
    g_U43588 = 0;
    g_U43628 = 0;
    g_U43589 = 1;
    REQUEST_SCRIPT( "BasejumpScreen" );
    return;
}
