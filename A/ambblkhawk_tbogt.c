void main()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U1 = 0;
    l_U2 = 0;
    l_U64 = 1;
    l_U72 = 837858166;
    l_U73 = -183203150;
    l_U68 = {l_U74._fU4[0]};
    WAIT( 0 );
    if (IS_PLAYER_PLAYING( sub_68() ))
    {
        if (NOT (IS_CHAR_DEAD( sub_111() )))
        {
            GET_CHAR_COORDINATES( sub_111(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( l_U68._fU0, l_U68._fU4, l_U68._fU8, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref fVar2 );
            if (fVar2 > 75.00000000)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_68(), 0 )))
                {
                    if (sub_259())
                    {
                        if (sub_1193())
                        {
                            sub_1274();
                        }
                        else
                        {
                            l_U1 = 3;
                        }
                    }
                    else
                    {
                        l_U1 = 3;
                    }
                }
                else
                {
                    l_U1 = 3;
                }
            }
            else
            {
                l_U64 = 0;
            }
        }
    }
    while (l_U64)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_68() ))
        {
            if (NOT (IS_CHAR_DEAD( sub_111() )))
            {
                if (sub_259())
                {
                    switch (l_U1)
                    {
                        case 0:
                        sub_3529();
                        break;
                        case 1:
                        sub_3616();
                        break;
                        case 2:
                        sub_4065();
                        break;
                        case 3: break;
                    }
                    sub_4191();
                }
                else
                {
                    l_U64 = 0;
                }
            }
            else
            {
                l_U64 = 0;
            }
        }
        else
        {
            l_U64 = 0;
        }
    }
    sub_4246();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_68()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_111()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_259()
{
    if (IS_PLAYER_PLAYING( sub_68() ))
    {
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (NOT g_U12379)
            {
                if (NOT sub_308())
                {
                    if (sub_1148())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_308()
{
    if (NOT (IS_CHAR_INJURED( sub_111() )))
    {
        if (sub_340( sub_111() ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_340(unknown uParam0)
{
    if (((sub_353( uParam0, 1, 0 )) || (sub_353( uParam0, 2, 0 ))) || (sub_353( uParam0, 0, 0 )))
    {
        return 1;
    }
    return 0;
}

int sub_353(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_381( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_381(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_111(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_1148()
{
    int Result;

    Result = 1;
    return Result;
}

int sub_1193()
{
    int iVar2;
    int iVar3;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 10000, ref iVar2 );
    GET_GAME_TIMER( ref iVar3 );
    if ((iVar3 - g_U9308) > 180000)
    {
        return 1;
        if (iVar2 < 5000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1274()
{
    int iVar2;

    l_U73 = sub_1283();
    REQUEST_MODEL( l_U73 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100000, ref iVar2 );
    if (iVar2 < 33333)
    {
        l_U72 = 837858166;
    }
    else if (iVar2 < 66666)
    {
        l_U72 = 2027357303;
    }
    else
    {
        l_U72 = -1660661558;
    }
    REQUEST_MODEL( l_U72 );
    sub_1425();
    return;
}

void sub_1283()
{
    GET_CURRENT_COP_MODEL( ref l_U73 );
    return l_U73;
}

void sub_1425()
{
    int I;
    int iVar3;
    float fVar4;
    float fVar5;
    boolean bVar6;

    iVar3 = 99;
    fVar4 = 1E8;
    bVar6 = false;
    l_U15[0] = {1412.00000000, 1324.00000000, 12.00000000};
    l_U15[1] = {553.00000000, 842.00000000, 20.00000000};
    l_U15[2] = {153.00000000, 1732.00000000, 32.00000000};
    l_U15[3] = {560.00000000, -404.00000000, 40.00000000};
    l_U15[4] = {502.00000000, 270.00000000, 45.00000000};
    l_U15[5] = {-722.00000000, 1167.00000000, 20.00000000};
    l_U15[6] = {1760.38200000, 43.15860000, 3.92690000};
    l_U15[7] = {1500.91800000, 548.32610000, 27.89020000};
    l_U15[8] = {1444.84900000, -557.87650000, 3.43310000};
    l_U15[9] = {754.00520000, 2111.74700000, 6.70400000};
    l_U15[10] = {-880.98440000, 96.75930000, -0.19580000};
    l_U15[11] = {-103.08000000, -1102.39600000, -0.86550000};
    l_U15[12] = {-489.26490000, 1808.77500000, 2.64670000};
    l_U15[13] = {-1672.09000000, -724.36570000, 7.64110000};
    l_U15[14] = {-1713.40700000, 1040.59900000, -0.13390000};
    l_U15[15] = {-960.57880000, 2027.64600000, -0.15500000};
    for ( I = 0; I < 16; I++ )
    {
        fVar5 = VDIST( l_U68, l_U15[I] );
        if (fVar5 < fVar4)
        {
            iVar3 = I;
            fVar4 = fVar5;
            bVar6 = true;
        }
    }
    if (bVar6)
    {
        l_U2 = iVar3;
        sub_1895();
    }
    else
    {
        SCRIPT_ASSERT( "BAD BEDDOES LOGIC" );
    }
    return;
}

void sub_1895()
{
    switch (l_U2)
    {
        case 0:
        l_U3._fU0 = {1256.01200000, 1301.26800000, 23.41080000};
        l_U3._fU12 = 270.00000000;
        l_U3._fU16 = {1594.59500000, 1317.63100000, 45.45550000};
        l_U3._fU28 = {2010.00000000, 1272.00000000, 28.79000000};
        break;
        case 1:
        l_U3._fU0 = {783.13550000, 1032.86600000, 48.39870000};
        l_U3._fU12 = 145.00000000;
        l_U3._fU16 = {388.81340000, 651.61440000, 52.25380000};
        l_U3._fU28 = {212.00000000, 316.75000000, 50.00000000};
        break;
        case 2:
        l_U3._fU0 = {5.73780000, 1827.88800000, 40.50830000};
        l_U3._fU12 = 180.00000000;
        l_U3._fU16 = {228.21750000, 1598.52800000, 76.52280000};
        l_U3._fU28 = {329.00000000, 1389.75000000, 50.00000000};
        break;
        case 3:
        l_U3._fU0 = {602.10470000, -624.15300000, 99.90450000};
        l_U3._fU12 = 10.00000000;
        l_U3._fU16 = {569.05620000, -287.95500000, 59.79770000};
        l_U3._fU28 = {589.00000000, -83.00000000, 48.00000000};
        break;
        case 4:
        l_U3._fU0 = {451.10240000, 530.10100000, 54.43490000};
        l_U3._fU12 = 190.00000000;
        l_U3._fU16 = {576.80580000, 123.57880000, 92.14730000};
        l_U3._fU28 = {638.00000000, -79.00000000, 42.00000000};
        break;
        case 5:
        l_U3._fU0 = {-714.07180000, 958.56950000, 33.82430000};
        l_U3._fU12 = 357.00000000;
        l_U3._fU16 = {-691.31190000, 1299.73700000, 48.45170000};
        l_U3._fU28 = {-652.00000000, 1538.00000000, 24.00000000};
        break;
        case 6:
        l_U3._fU0 = {2083.40000000, -36.40000000, 58.00000000};
        l_U3._fU12 = 98.73690000;
        l_U3._fU16 = {1538.44800000, -74.45150000, 58.73450000};
        l_U3._fU28 = {1147.64100000, -199.02030000, 60.36480000};
        break;
        case 7:
        l_U3._fU0 = {1576.89500000, 1233.51000000, 43.13370000};
        l_U3._fU12 = 168.01100000;
        l_U3._fU16 = {1456.10200000, 572.60580000, 75.78990000};
        l_U3._fU28 = {1361.79400000, 118.70490000, 98.82570000};
        break;
        case 8:
        l_U3._fU0 = {1361.91400000, -1013.85400000, 60.06860000};
        l_U3._fU12 = 349.61500000;
        l_U3._fU16 = {1642.44000000, -338.64100000, 68.08280000};
        l_U3._fU28 = {1858.91700000, 162.32570000, 91.68720000};
        break;
        case 9:
        l_U3._fU0 = {10.98030000, 2159.91700000, 60.34100000};
        l_U3._fU12 = 264.40810000;
        l_U3._fU16 = {886.41750000, 2092.85200000, 60.95790000};
        l_U3._fU28 = {1548.30100000, 1729.22200000, 69.99320000};
        break;
        case 10:
        l_U3._fU0 = {-868.00000000, -210.00000000, 55.00000000};
        l_U3._fU12 = 11.39330000;
        l_U3._fU16 = {-886.19510000, 104.46060000, 100.90920000};
        l_U3._fU28 = {-1082.43200000, 644.91660000, 100.84180000};
        break;
        case 11:
        l_U3._fU0 = {602.99080000, -1597.34900000, 49.10060000};
        l_U3._fU12 = 47.75400000;
        l_U3._fU16 = {-378.81930000, -960.40920000, 79.39600000};
        l_U3._fU28 = {-977.16110000, -641.49230000, 115.59010000};
        break;
        case 12:
        l_U3._fU0 = {-905.58120000, 1229.54400000, 90.13440000};
        l_U3._fU12 = 311.92070000;
        l_U3._fU16 = {-427.15820000, 1741.40000000, 102.25050000};
        l_U3._fU28 = {162.83400000, 2096.73800000, 79.04540000};
        break;
        case 13:
        l_U3._fU0 = {-2569.85500000, -605.82750000, 58.84990000};
        l_U3._fU12 = 245.61510000;
        l_U3._fU16 = {-1719.43800000, -755.77090000, 111.60120000};
        l_U3._fU28 = {-925.35550000, -456.80690000, 156.32140000};
        break;
        case 14:
        l_U3._fU0 = {-1987.25300000, 473.21880000, 68.80820000};
        l_U3._fU12 = 347.57400000;
        l_U3._fU16 = {-1695.49900000, 1202.62200000, 60.18240000};
        l_U3._fU28 = {-1346.57200000, 1700.75400000, 85.41650000};
        break;
        case 15:
        l_U3._fU0 = {-742.98390000, 2381.92200000, 69.14390000};
        l_U3._fU12 = 141.97940000;
        l_U3._fU16 = {-980.56810000, 1932.66700000, 92.55790000};
        l_U3._fU28 = {-1192.00700000, 1518.14300000, 128.32840000};
        break;
        default: break;
    }
    return;
}

void sub_3529()
{
    if ((NOT (HAS_MODEL_LOADED( l_U72 ))) || (NOT (HAS_MODEL_LOADED( sub_1283() ))))
    {
        REQUEST_MODEL( l_U72 );
        REQUEST_MODEL( l_U73 );
    }
    else
    {
        l_U1 = 1;
    }
    return;
}

void sub_3616()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    GET_CHAR_COORDINATES( sub_111(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    GET_DISTANCE_BETWEEN_COORDS_3D( l_U68._fU0, l_U68._fU4, l_U68._fU8, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref fVar5 );
    if (fVar5 > 75.00000000)
    {
        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar6, l_U3._fU0._fU0, l_U3._fU0._fU4, l_U3._fU0._fU8, 2.00000000 )))
        {
            CREATE_CAR( l_U72, l_U3._fU0._fU0, l_U3._fU0._fU4, l_U3._fU0._fU8, ref l_U3._fU44, 1 );
            SET_CAR_HEADING( l_U3._fU44, l_U3._fU12 );
            SET_HELI_BLADES_FULL_SPEED( l_U3._fU44 );
            CREATE_CHAR_INSIDE_CAR( l_U3._fU44, 6, l_U73, ref l_U3._fU40 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U3._fU40 );
            OPEN_SEQUENCE_TASK( ref l_U71 );
            TASK_HELI_MISSION( 0, l_U3._fU44, 0, 0, l_U3._fU16._fU0, l_U3._fU16._fU4, l_U3._fU16._fU8, 4, 20.00000000, 5, -1, (ROUND( l_U3._fU16._fU8 )) + 1, 40 );
            TASK_HELI_MISSION( 0, l_U3._fU44, 0, 0, l_U3._fU28._fU0, l_U3._fU28._fU4, l_U3._fU28._fU8, 4, 20.00000000, 5, -1, (ROUND( l_U3._fU28._fU8 )) + 1, 40 );
            CLOSE_SEQUENCE_TASK( l_U71 );
            TASK_PERFORM_SEQUENCE( l_U3._fU40, l_U71 );
            CLEAR_SEQUENCE_TASK( l_U71 );
            l_U1 = 2;
        }
    }
    return;
}

void sub_4065()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( l_U3._fU40 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U3._fU40, 29, ref iVar2 );
        if (iVar2 == 7)
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U3._fU40 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U3._fU44 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U72 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U73 );
            l_U1 = 3;
        }
    }
    return;
}

void sub_4191()
{
    return;
}

void sub_4246()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U3._fU40 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U3._fU44 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U72 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U73 );
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U65 );
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U66 );
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U67 );
    TERMINATE_THIS_SCRIPT();
    return;
}
