void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 0;
    l_U124 = 0;
    l_U125 = 0;
    ProtectedSet(l_U126, 0);
    ProtectedSet(l_U127, 0);
    l_U128 = 0;
    l_U129 = 0;
    l_U131 = 0;
    l_U132 = 0;
    l_U134 = 0;
    ProtectedSet(l_U240, 0.00000000);
    ProtectedSet(l_U241, 0.00000000);
    l_U249 = 0.00000000;
    l_U252 = 45.00000000;
    l_U270 = 0;
    l_U272 = -1;
    l_U286 = 15.00000000;
    l_U287 = 35.00000000;
    l_U288 = 16.00000000;
    l_U289 = 0.00000000;
    l_U295 = 1000.00000000;
    l_U296 = 7500.00000000;
    l_U305 = 1;
    l_U306 = 30.00000000;
    l_U307 = 30.00000000;
    l_U308 = 2.00000000;
    l_U318 = 0.00000000;
    l_U319 = 0.00000000;
    l_U331 = 1;
    l_U332 = 0;
    l_U333 = -1;
    l_U334 = 1;
    l_U335 = -1;
    l_U336 = -1;
    l_U337 = 15.00000000;
    l_U364 = 0;
    l_U365 = -1949702649;
    l_U366 = 2075870698;
    l_U371 = 0.12000000;
    l_U382 = 0;
    l_U383 = -1;
    l_U384 = 0;
    l_U385 = 0;
    l_U390 = 1;
    l_U391 = 1;
    l_U516 = 0;
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 0;
    l_U522 = 0;
    l_U523 = 0;
    l_U524 = 0;
    l_U525 = 0;
    l_U526 = 0;
    l_U527 = 0;
    l_U2042 = 0;
    l_U2047 = 0;
    l_U2048 = 0;
    l_U2049 = 0;
    l_U2050 = 0;
    l_U2051 = 0;
    l_U2052 = 0;
    l_U2076 = 0;
    l_U2077 = 0;
    l_U2082 = 0;
    l_U2086 = 0;
    l_U2087 = 0;
    l_U2088 = 0;
    l_U2089 = 0;
    l_U2090 = 0;
    l_U2091 = 0;
    l_U2092 = 0;
    l_U2093 = 0;
    l_U2097 = 0;
    l_U2098 = 0;
    l_U2099 = 0;
    l_U2103 = 0;
    l_U2104 = 0;
    l_U2105 = 0;
    l_U2106 = 0;
    l_U2107 = 0;
    l_U2108 = 0;
    l_U2109 = 0;
    l_U2110 = 0;
    l_U2111 = 0;
    l_U2112 = 0;
    l_U2116 = 0;
    l_U2117 = 0;
    l_U2118 = 0;
    l_U2119 = 0;
    l_U2120 = 0;
    l_U2121 = 0;
    l_U2122 = 0;
    l_U2123 = 0;
    l_U2124 = 0;
    l_U2125 = 1;
    l_U2126 = 0;
    l_U2127 = 0;
    l_U2128 = 0;
    l_U2130 = 0;
    l_U2131 = 0;
    l_U2132 = 0;
    l_U2133 = 1;
    l_U2134 = 0;
    l_U2135 = 0;
    l_U2136 = 0;
    l_U2137 = 0;
    l_U2138 = 0;
    l_U2139 = 0;
    l_U2140 = 0;
    l_U2141 = 0;
    l_U2144 = 0;
    l_U2148 = 0;
    l_U2149 = 0;
    l_U2151 = 0;
    l_U2152 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_955();
        sub_3129();
    }
    while (true)
    {
        WAIT( 0 );
        sub_3663();
        sub_5104( ref l_U255 );
        if (l_U2088)
        {
            sub_5195();
        }
        switch (l_U516)
        {
            case 0:
            g_U10460 = 0;
            sub_5524();
            break;
            case 1:
            sub_14069();
            break;
            case 2:
            sub_17210();
            break;
            case 3:
            sub_25871();
            break;
            case 4:
            sub_26874();
            break;
            case 5:
            sub_36989();
            break;
            case 6:
            sub_38925();
            break;
            case 7:
            sub_44851();
            break;
            case 8:
            sub_55817();
            break;
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_47828();
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 33 ))
        {
            sub_4367();
        }
    }
    return;
}

void sub_955()
{
    sub_964();
    return;
}

void sub_964()
{
    int iVar2;

    iVar2 = 4;
    sub_978( iVar2 );
    sub_2119( iVar2 );
    return;
}

void sub_978(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_1022();
        sub_1230();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1355();
            sub_1407();
            g_U11095 = 1;
        }
    }
    sub_1500();
    sub_1639();
    uVar5 = sub_1752( uParam0 );
    sub_2028( uVar5, 0 );
    return;
}

void sub_1022()
{
    if (g_U10993)
    {
        return;
    }
    sub_1049( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_1170();
    }
    return;
}

void sub_1049(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    iVar3 = g_U20913[iParam0]._fU100;
    iVar3--;
    g_U20913[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1170()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1230()
{
    sub_1239();
    return;
}

void sub_1239()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1355()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1407()
{
    sub_1416();
    return;
}

void sub_1416()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1500()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12306[J]._fU144[I]._fU36)
            {
                g_U12306[J]._fU28 = 1;
            }
            g_U12306[J]._fU144[I]._fU36 = 0;
        }
    }
    return;
}

void sub_1639()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1661();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1661()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1752(unknown uParam0)
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
        case 8: return 8;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1983( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_1983(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2028(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 22))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U20853[iParam0] = iVar4;
    if (bParam1)
    {
        g_U20853[iParam0] += 30000;
    }
    return;
}

void sub_2119(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2128();
    if (g_U0)
    {
        return;
    }
    if (g_U94._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12303)
    {
        return;
    }
    iVar3 = g_U14838[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12306[iParam0]._fU12)
    {
        return;
    }
    if (g_U10959._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10959._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_2888())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_2954();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_2128()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_2166( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_2166( 1, g_U572[I] )) != 0)
            {
                sub_2452( I );
            }
        }
    }
    if (NOT sub_2618())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    if (g_U94._fU0 == 1015)
    {
        g_U94._fU92 = 1;
    }
    return;
}

int sub_2166(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_2452(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2537( g_U572 - 1 );
    return;
}

void sub_2537(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2618()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_2166( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2888()
{
    if ((g_U10959._fU4 == 0) AND (g_U10959._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_2954()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_3129()
{
    sub_3139( 0 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 2331.02000000, 481.54000000, 100.00000000, 2386.32000000, 280.83000000, -100.00000000 );
    if (NOT l_U2076)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 2317.70000000, 474.24000000, 100.00000000, 2386.32000000, 280.83000000, -100.00000000 );
    }
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 369.46640000, 1547.84900000, 30.00000000, 387.45900000, 1524.52100000, -10.00000000, 1 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3405(), 1 );
    if (NOT g_U11004)
    {
        SET_FAKE_WANTED_LEVEL( 0 );
        g_U11004 = 1;
        SET_MAX_WANTED_LEVEL( 6 );
    }
    SET_CREATE_RANDOM_COPS( 1 );
    STOP_SOUND( l_U2153 );
    RELEASE_SOUND_ID( l_U2153 );
    MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    if (DOES_CAM_EXIST( l_U2290 ))
    {
        SET_CAM_ACTIVE( l_U2290, 0 );
        SET_CAM_PROPAGATE( l_U2290, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U2290 );
        END_CAM_COMMANDS( ref l_U2144 );
    }
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_BLOCK_CAMERA_TOGGLE( 0 );
    g_U10956 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3139(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 >= 4) AND (g_U8944 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_3405()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3663()
{
    if (sub_3678( ref l_U528._fU0 ))
    {
        CLEAR_PRINTS();
        PRINT_NOW( "god_5", 7500, 1 );
        sub_3782( 4, "E1E2_DIES", "E1E2AUD", 10000, 0 );
        sub_4367();
    }
    if (NOT l_U2097)
    {
        if (l_U2052)
        {
            if ((sub_4646( ref l_U528._fU0 )) > 200.00000000)
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U528._fU0 )))
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "god_4", 7500, 1 );
                    sub_4367();
                }
            }
        }
        if (NOT l_U2098)
        {
            if (sub_4897( ref l_U852 ))
            {
                l_U2097 = 1;
                l_U516 = 8;
            }
        }
    }
    return;
}

int sub_3678(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        return IS_CHAR_INJURED( (uParam0^) );
    }
    return 0;
}

void sub_3782(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    sub_3825( uParam0, ref cVar7, uParam2, uParam3, uParam4, 0 );
    return;
}

void sub_3825(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
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
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U815 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U814 = 1;
        g_U815 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_4367()
{
    if (NOT g_U11004)
    {
        SET_FAKE_WANTED_LEVEL( 0 );
        g_U11004 = 1;
        SET_MAX_WANTED_LEVEL( 6 );
        ALTER_WANTED_LEVEL( sub_4409(), 2 );
        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_4409() );
    }
    g_U39202++;
    PLAY_AUDIO_EVENT( "mc_fail" );
    sub_4493();
    sub_3129();
    return;
}

void sub_4409()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4493()
{
    sub_4502();
    return;
}

void sub_4502()
{
    int iVar2;

    iVar2 = 4;
    sub_4516( iVar2 );
    sub_2119( iVar2 );
    return;
}

void sub_4516(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_4409(), 150 );
    CLEAR_HELP();
    sub_978( uParam0 );
    return;
}

void sub_4646(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_COORDINATES( sub_3405(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
            GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
            return Result;
        }
    }
    return Result;
}

int sub_4897(unknown uParam0)
{
    int I;
    int iVar4;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[I]._fU0 ))
        {
            if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
            {
                GET_CHAR_HEALTH( (uParam0^)[I]._fU0, ref iVar4 );
                if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^)[I]._fU0, sub_3405(), 0 )) || (iVar4 < ProtectedGet((uParam0^)[I]._fU40))) || (IS_CHAR_RESPONDING_TO_EVENT( (uParam0^)[I]._fU0, 9 )))
                {
                    return 1;
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_5104(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3405() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3405(), uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (IS_VEH_DRIVEABLE( (uParam0^) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_5195()
{
    if ((sub_5213( sub_3405(), ref l_U2226 )) < 50.00000000)
    {
        if (NOT l_U2087)
        {
            l_U2153 = GET_SOUND_ID();
            PLAY_SOUND_FROM_POSITION( l_U2153, l_U2266, l_U2226 );
            l_U2087 = 1;
        }
    }
    else if (l_U2087)
    {
        STOP_SOUND( l_U2153 );
        l_U2087 = 0;
    }
    return;
}

float sub_5213(unknown uParam0, int iParam1)
{
    float Result;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    Result = 0.00000000;
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, iParam1->_fU0, iParam1->_fU4, iParam1->_fU8, ref Result );
            return Result;
        }
    }
    return -1.00000000;
}

void sub_5524()
{
    vector vVar2;

    vVar2 = {378.91730000, 1547.93700000, 15.41920000};
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U2268 );
    if (DOES_VEHICLE_EXIST( l_U2268 ))
    {
        if (IS_VEH_DRIVEABLE( l_U2268 ))
        {
            if (sub_5607( ref l_U2268, ref vVar2, 100.00000000, 0 ))
            {
                SET_CAR_AS_MISSION_CAR( l_U2268 );
                CLEAR_AREA( 378.91730000, 1547.93700000, 15.41920000, 10.00000000, 1 );
                SET_CAR_HEADING( l_U2268, 246.24240000 );
                SET_CAR_COORDINATES( l_U2268, 378.91730000, 1547.93700000, 15.41920000 );
                l_U2133 = 1;
            }
        }
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    sub_5891( "E1E2AUD" );
    sub_6012( 0, sub_3405(), "johnny", 0 );
    LOAD_ADDITIONAL_TEXT( "E1E2AUD", 6 );
    LOAD_ADDITIONAL_TEXT( "eliza_2", 0 );
    if (IS_BIT_SET( g_U10959._fU0, 7 ))
    {
        g_U39149[13] = 0;
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        START_CUTSCENE_NOW( "ET02_AA" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "ET02_AA" );
        sub_6362();
        sub_10132();
    }
    else
    {
        switch (g_U39149[13])
        {
            case 0:
            sub_6362();
            sub_10132();
            break;
            case 1:
            sub_6362();
            sub_13043();
            break;
        }
    }
    return;
}

int sub_5607(unknown uParam0, int iParam1, float fParam2, boolean bParam3)
{
    vector vVar6;
    float fVar9;

    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    fVar9 = 0.00000000;
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_DISTANCE_BETWEEN_COORDS_3D( vVar6.x, vVar6.y, vVar6.z, iParam1->_fU0, iParam1->_fU4, iParam1->_fU8, ref fVar9 );
            if (bParam3)
            {
                if (fVar9 >= fParam2)
                {
                    return 1;
                }
            }
            else if (fVar9 <= fParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_5891(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_5908();
    return;
}

void sub_5908()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U6._fU16[I]._fU0 = nil;
        StrCopy( ref l_U6._fU16[I]._fU4, "", 32 );
        l_U6._fU344[I] = 0;
    }
    return;
}

void sub_6012(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6092( "\n PED NUMBER ", uParam0 );
    sub_6132( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6092(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6132(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6362()
{
    if (NOT l_U2042)
    {
        sub_6382();
        l_U2184 = {2355.27300000, 410.44300000, 7.34200000};
        l_U2196 = {383.08650000, 1539.85200000, 18.70000000};
        l_U528._fU4 = -1607044224;
        l_U528._fU12 = {2361.43300000, 412.00050000, 5.08030000};
        l_U528._fU36 = 93.83950000;
        l_U2187 = {2355.27300000, 410.44270000, 4.94220000};
        l_U2163 = 3.82110000;
        l_U2166[0] = 7.55140000;
        l_U2199[0] = {2356.08500000, 428.30000000, 5.08030000};
        l_U2166[1] = 156.37640000;
        l_U2199[1] = {375.64130000, 1540.41700000, 15.32920000};
        l_U2166[2] = 19.75620000;
        l_U2199[2] = {2363.53400000, 421.48240000, 5.08030000};
        l_U1323._fU144._fU12 = {2345.16500000, 420.33480000, 4.96850000};
        l_U1323._fU144._fU24 = 7.83240000;
        l_U1323._fU144._fU4 = 2046537925;
        l_U1323._fU0._fU4 = -370395528;
        l_U1323._fU72._fU4 = -370395528;
        l_U2190 = {2359.59100000, 408.12960000, 5.08020000};
        l_U2164 = 49.65190000;
        l_U2193 = {2359.36400000, 402.87900000, 5.08020000};
        l_U2165 = 73.22890000;
        l_U546[0]._fU144._fU12 = {2335.35400000, 465.64760000, 4.97060000};
        l_U546[0]._fU144._fU24 = 193.79440000;
        l_U546[0]._fU144._fU4 = 1127131465;
        l_U546[0]._fU144._fU52 = 1385;
        l_U546[0]._fU144._fU32 = 2500;
        l_U546[0]._fU0._fU4 = -999506922;
        l_U546[0]._fU72._fU4 = -999506922;
        l_U608[0]._fU12 = {2328.58200000, 393.24590000, 5.01750000};
        l_U608[0]._fU24 = 359.14870000;
        l_U608[0]._fU4 = 2046537925;
        l_U608[0]._fU52 = 1387;
        l_U608[0]._fU32 = 2000;
        l_U669[0]._fU4 = -370395528;
        l_U742[0]._fU4 = -370395528;
        l_U608[1]._fU12 = {2328.51600000, 381.09170000, 5.62900000};
        l_U608[1]._fU24 = 359.14870000;
        l_U608[1]._fU4 = 2046537925;
        l_U608[1]._fU52 = 1388;
        l_U608[1]._fU32 = 0.00000000;
        l_U669[1]._fU4 = -370395528;
        l_U742[1]._fU4 = -370395528;
        l_U608[2]._fU12 = {2340.63500000, 316.54410000, 5.03920000};
        l_U608[2]._fU24 = 349.86930000;
        l_U608[2]._fU4 = 2046537925;
        l_U608[2]._fU52 = 1389;
        l_U608[2]._fU32 = 1500;
        l_U669[2]._fU4 = -370395528;
        l_U742[2]._fU4 = -370395528;
        l_U608[3]._fU12 = {2322.33900000, 371.12220000, 5.04110000};
        l_U608[3]._fU24 = 1.92570000;
        l_U608[3]._fU4 = 1127131465;
        l_U608[3]._fU52 = 1390;
        l_U608[3]._fU32 = 1000;
        l_U669[3]._fU4 = -999506922;
        l_U742[3]._fU4 = -999506922;
        l_U998[0]._fU12 = {2334.55800000, 309.00540000, 4.99500000};
        l_U998[0]._fU24 = 339.82480000;
        l_U998[0]._fU4 = -956048545;
        l_U998[0]._fU52 = 1392;
        l_U998[0]._fU32 = 0.00000000;
        l_U1134[0]._fU4 = 8772846;
        l_U998[1]._fU12 = {2340.83000000, 308.21660000, 4.99500000};
        l_U998[1]._fU24 = 340.13300000;
        l_U998[1]._fU4 = -956048545;
        l_U998[1]._fU52 = 1393;
        l_U998[1]._fU32 = 1500;
        l_U1134[1]._fU4 = 8772846;
        l_U998[2]._fU12 = {2340.83000000, 310.21660000, 4.99500000};
        l_U998[2]._fU24 = 340.13300000;
        l_U998[2]._fU4 = -956048545;
        l_U998[2]._fU52 = 1393;
        l_U998[2]._fU32 = 0.00000000;
        l_U1134[2]._fU4 = 8772846;
        l_U998[3]._fU12 = {2338.33000000, 301.30320000, 4.99500000};
        l_U998[3]._fU24 = 340.11190000;
        l_U998[3]._fU4 = -956048545;
        l_U998[3]._fU52 = 1394;
        l_U998[3]._fU32 = 0.00000000;
        l_U1134[3]._fU4 = 8772846;
        l_U998[4]._fU12 = {2332.24000000, 302.69790000, 4.98210000};
        l_U998[4]._fU24 = 340.08630000;
        l_U998[4]._fU4 = -956048545;
        l_U998[4]._fU52 = 1395;
        l_U998[4]._fU32 = 0.00000000;
        l_U1134[4]._fU4 = 8772846;
        l_U998[5]._fU12 = {2327.76700000, 369.10330000, 5.05120000};
        l_U998[5]._fU24 = 1.33660000;
        l_U998[5]._fU4 = -956048545;
        l_U998[5]._fU52 = 1396;
        l_U998[5]._fU32 = 0.00000000;
        l_U1134[5]._fU4 = 8772846;
        l_U998[6]._fU12 = {2322.50200000, 364.39460000, 5.04740000};
        l_U998[6]._fU24 = 1.83900000;
        l_U998[6]._fU4 = -956048545;
        l_U998[6]._fU52 = 1397;
        l_U998[6]._fU32 = 0.00000000;
        l_U1134[6]._fU4 = 8772846;
        l_U998[7]._fU12 = {2328.82200000, 321.58580000, 4.90030000};
        l_U998[7]._fU24 = 358.03630000;
        l_U998[7]._fU4 = -956048545;
        l_U998[7]._fU52 = 1398;
        l_U998[7]._fU32 = 3000;
        l_U998[7]._fU28 = 1.20000000;
        l_U1134[7]._fU4 = 8772846;
        l_U998[8]._fU12 = {2324.77700000, 337.91450000, 5.09130000};
        l_U998[8]._fU24 = 359.47250000;
        l_U998[8]._fU4 = -956048545;
        l_U998[8]._fU52 = 1399;
        l_U998[8]._fU32 = 4000;
        l_U998[8]._fU28 = 1.20000000;
        l_U1134[8]._fU4 = 8772846;
        l_U815[0]._fU12 = {2338.38900000, 412.22250000, 5.08030000};
        l_U815[0]._fU36 = 315.67490000;
        l_U815[0]._fU4 = -370395528;
        l_U815[1]._fU12 = {2334.13900000, 432.46990000, 4.90020000};
        l_U815[1]._fU36 = 291.96940000;
        l_U815[1]._fU4 = -370395528;
        l_U2216[0] = {2297.40900000, 481.39160000, 5.09200000};
        l_U2170[0] = 194.43370000;
        l_U2216[1] = {2298.15000000, 479.49120000, 5.09200000};
        l_U2170[1] = 25.15680000;
        l_U2216[2] = {2296.41200000, 478.90280000, 5.09200000};
        l_U2170[2] = 352.58300000;
        l_U1297[0]._fU4 = {2340.22000000, 412.38000000, 5.35000000};
        l_U1297[0]._fU16 = 112.22630000;
        l_U1297[1]._fU4 = {2335.51000000, 432.71000000, 5.35000000};
        l_U1297[1]._fU16 = 99.51560000;
        l_U2226 = {2356.00000000, 391.00000000, 12.00000000};
        l_U2266 = "E2_COLLECT_DRUG_MULE_TANNOY";
        for ( l_U2142 = 0; l_U2142 <= (l_U2100 - 1); l_U2142++ )
        {
            l_U2100[l_U2142] = 0;
        }
        for ( l_U2142 = 0; l_U2142 <= (l_U2043 - 1); l_U2142++ )
        {
            l_U2043[l_U2142] = 0;
        }
        for ( l_U2142 = 0; l_U2142 <= (l_U2060 - 1); l_U2142++ )
        {
            l_U2060[l_U2142] = 0;
        }
        for ( l_U2142 = 0; l_U2142 <= (l_U2053 - 1); l_U2142++ )
        {
            l_U2053[l_U2142] = 0;
        }
        for ( l_U2142 = 0; l_U2142 <= (l_U2083 - 1); l_U2142++ )
        {
            l_U2083[l_U2142] = 0;
        }
        for ( l_U2142 = 0; l_U2142 <= (l_U2113 - 1); l_U2142++ )
        {
            l_U2113[l_U2142] = 0;
        }
        GET_WEAPONTYPE_MODEL( 7, ref l_U2269 );
        l_U1308._fU12 = {2354.18200000, 421.36240000, 4.95910000};
        l_U1308._fU24 = 7.00000000;
        l_U1308._fU4 = 1127131465;
        l_U1308._fU56 = 0;
        l_U852[0]._fU12 = {2353.21000000, 418.29410000, 5.01310000};
        l_U852[1]._fU12 = {2355.44800000, 417.31550000, 4.90270000};
        l_U852[2]._fU12 = {2353.90600000, 416.48090000, 4.98640000};
        l_U852[0]._fU36 = 240.96450000;
        l_U852[1]._fU36 = 40.06120000;
        l_U852[2]._fU36 = 353.69600000;
        l_U852[0]._fU4 = -370395528;
        l_U852[1]._fU4 = -370395528;
        l_U852[2]._fU4 = -370395528;
        l_U2229[0] = {2359.38900000, 390.84420000, 5.08020000};
        l_U2175[0] = 27.24490000;
        l_U2229[1] = {2367.19600000, 399.38990000, 5.08020000};
        l_U2175[1] = 50.12630000;
        l_U2236[0] = {2348.94400000, 403.51190000, 5.06380000};
        l_U2236[1] = {2358.45600000, 418.16190000, 5.08030000};
        l_U2243[0] = {2364.39600000, 398.00960000, 5.08020000};
        l_U2178[0] = 22.32520000;
        l_U2243[1] = {2363.95200000, 390.26100000, 5.08020000};
        l_U2178[1] = 359.65030000;
        l_U2209[0] = {2793.37800000, 431.41700000, 4.80760000};
        l_U2209[1] = {2332.83800000, -101.78850000, 4.80740000};
        for ( l_U2142 = 0; l_U2142 <= (l_U2094 - 1); l_U2142++ )
        {
            l_U2094[l_U2142] = 0;
        }
        l_U2021._fU8 = {2358.13000000, 402.74000000, 5.00000000};
        l_U2021._fU68 = 45;
        l_U2021._fU4 = -1212320472;
        l_U1596[0]._fU4 = -999506922;
        l_U1596[1]._fU4 = -999506922;
        l_U1596[2]._fU4 = -999506922;
        l_U1581._fU4 = 837858166;
        l_U1581._fU12 = {2244.27300000, 397.75180000, 16.20610000};
        l_U1581._fU24 = 273.30860000;
        l_U1581._fU52 = 1391;
        l_U1581._fU28 = 1.00000000;
        l_U2250[0] = {2328.82200000, 403.19550000, 5.00510000};
        l_U2250[1] = {2332.34400000, 455.03720000, 5.08030000};
        l_U2257 = {0.00000000, -3.00000000, 5.00000000};
        l_U907[0]._fU12 = {2366.07000000, 404.35130000, 5.08022000};
        l_U907[0]._fU36 = 116.06360000;
        l_U907[0]._fU4 = 1354281938;
        l_U907[1]._fU12 = {2364.18800000, 402.73800000, 5.08020000};
        l_U907[1]._fU36 = 299.48250000;
        l_U907[1]._fU4 = 1207402441;
        l_U907[2]._fU12 = {2366.04400000, 402.30140000, 5.08020000};
        l_U907[2]._fU36 = 63.60820000;
        l_U907[2]._fU4 = 1354281938;
        l_U907[3]._fU12 = {2360.69000000, 416.06700000, 5.08030000};
        l_U907[3]._fU36 = 158.08950000;
        l_U907[3]._fU4 = 1207402441;
        l_U907[4]._fU12 = {2359.45300000, 414.66670000, 5.08030000};
        l_U907[4]._fU36 = 316.43240000;
        l_U907[4]._fU4 = 1354281938;
        l_U2042 = 1;
    }
    return;
}

void sub_6382()
{
    return;
}

void sub_10132()
{
    REQUEST_MODEL( l_U528._fU4 );
    SUPPRESS_PED_MODEL( l_U528._fU4 );
    REQUEST_MODEL( l_U608[0]._fU4 );
    SUPPRESS_CAR_MODEL( l_U608[0]._fU4 );
    REQUEST_MODEL( l_U815[0]._fU4 );
    SUPPRESS_PED_MODEL( l_U815[0]._fU4 );
    REQUEST_MODEL( l_U1308._fU4 );
    SUPPRESS_CAR_MODEL( l_U1308._fU4 );
    REQUEST_MODEL( l_U2021._fU4 );
    REQUEST_MODEL( l_U907[0]._fU4 );
    SUPPRESS_PED_MODEL( l_U907[0]._fU4 );
    REQUEST_MODEL( l_U907[1]._fU4 );
    SUPPRESS_PED_MODEL( l_U907[1]._fU4 );
    GET_WEAPONTYPE_MODEL( 14, ref l_U2271 );
    REQUEST_MODEL( l_U2271 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2276 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U2277 );
    REQUEST_ANIMS( "missELIZABETA2" );
    REQUEST_ANIMS( "Gestures@Niko" );
    REQUEST_ANIMS( "GESTURES@CAR_F" );
    LOAD_ALL_OBJECTS_NOW();
    sub_10473();
    CLEAR_AREA( 375.09060000, 1543.88900000, 15.35890000, 150.00000000, 1 );
    while (NOT (sub_10643( ref l_U2267, 361.55060000, 1504.78400000, 15.96450000, 270.00000000 )))
    {
        WAIT( 0 );
    }
    WARP_CHAR_INTO_CAR( sub_3405(), l_U2267 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2267 );
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "EP1_SFX\E2_COLLECT_DRUG_MULE" )))
    {
        PRINTSTRING( "ATTEMPTING TO LOAD AUDIO BANK" );
        PRINTNL();
        WAIT( 0 );
    }
    l_U2153 = GET_SOUND_ID();
    l_U2088 = 1;
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2276, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2276, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2276, 15 );
    CREATE_CAR( l_U1308._fU4, l_U1308._fU12._fU0, l_U1308._fU12._fU4, l_U1308._fU12._fU8, ref l_U1308._fU0, 1 );
    SET_CAR_HEADING( l_U1308._fU0, l_U1308._fU24 );
    SWITCH_CAR_SIREN( l_U1308._fU0, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1308._fU4 );
    CREATE_OBJECT( l_U2021._fU4, l_U2021._fU8._fU0, l_U2021._fU8._fU4, l_U2021._fU8._fU8, ref l_U2021._fU0, 1 );
    SET_OBJECT_HEADING( l_U2021._fU0, 45.00000000 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2021._fU4 );
    CLEAR_AREA( l_U528._fU12._fU0, l_U528._fU12._fU4, l_U528._fU12._fU8, 10.00000000, 1 );
    SWITCH_ROADS_OFF( 2331.02000000, 481.54000000, 100.00000000, 2386.32000000, 280.83000000, -100.00000000 );
    LOAD_SCENE( 375.09060000, 1543.88900000, 15.35890000 );
    GET_GAME_TIMER( ref l_U2156 );
    sub_12691( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    CLEAR_PRINTS();
    PRINT_NOW( "god_0", 7500, 1 );
    ADD_BLIP_FOR_COORD( l_U2184._fU0, l_U2184._fU4, l_U2184._fU8, ref l_U2272 );
    SET_ROUTE( l_U2272, 1 );
    l_U516 = 1;
    return;
}

void sub_10473()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( sub_3405() )))
    {
        GET_CHAR_COORDINATES( sub_3405(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        uVar2 = GET_CLOSEST_CAR( uVar3, 2000.00000000, sub_10529(), 22 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            DELETE_CAR( ref uVar2 );
        }
    }
    return;
}

int sub_10529()
{
    return 301427732;
}

int sub_10643(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_10529();
    SUPPRESS_CAR_MODEL( uVar7 );
    REQUEST_MODEL( uVar7 );
    if (NOT (HAS_MODEL_LOADED( uVar7 )))
    {
        REQUEST_MODEL( uVar7 );
        return 0;
    }
    CLEAR_AREA( uParam1._fU0, uParam1._fU4, uParam1._fU8, 5.00000000, 0 );
    CREATE_CAR( uVar7, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_10783( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

void sub_10783(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

void sub_12691(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_3139( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_4409() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_3405() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_3405() );
        }
        SET_PLAYER_CONTROL( sub_4409(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3405(), 0 );
    }
    if (l_U120)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U255 );
        l_U120 = 0;
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_13043()
{
    REQUEST_MODEL( l_U528._fU4 );
    SUPPRESS_PED_MODEL( l_U528._fU4 );
    REQUEST_MODEL( l_U608[0]._fU4 );
    SUPPRESS_CAR_MODEL( l_U608[0]._fU4 );
    REQUEST_MODEL( l_U815[0]._fU4 );
    SUPPRESS_PED_MODEL( l_U815[0]._fU4 );
    REQUEST_MODEL( l_U1308._fU4 );
    SUPPRESS_CAR_MODEL( l_U1308._fU4 );
    REQUEST_MODEL( l_U2021._fU4 );
    REQUEST_MODEL( l_U907[0]._fU4 );
    SUPPRESS_PED_MODEL( l_U907[0]._fU4 );
    REQUEST_MODEL( l_U907[1]._fU4 );
    SUPPRESS_PED_MODEL( l_U907[1]._fU4 );
    GET_WEAPONTYPE_MODEL( 14, ref l_U2271 );
    REQUEST_MODEL( l_U2271 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2276 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U2277 );
    REQUEST_ANIMS( "missELIZABETA2" );
    REQUEST_ANIMS( "Gestures@Niko" );
    REQUEST_ANIMS( "GESTURES@CAR_F" );
    LOAD_ALL_OBJECTS_NOW();
    sub_10473();
    CLEAR_AREA( 375.09060000, 1543.88900000, 15.35890000, 150.00000000, 1 );
    while (NOT (sub_10643( ref l_U2267, 375.09060000, 1543.88900000, 15.35890000, 278.00000000 )))
    {
        WAIT( 0 );
    }
    WARP_CHAR_INTO_CAR( sub_3405(), l_U2267 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2267 );
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "EP1_SFX\E2_COLLECT_DRUG_MULE" )))
    {
        PRINTSTRING( "ATTEMPTING TO LOAD AUDIO BANK" );
        PRINTNL();
        WAIT( 0 );
    }
    l_U2153 = GET_SOUND_ID();
    l_U2088 = 1;
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2276, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2276, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2276, 15 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2277, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2277, 10 );
    CREATE_CAR( l_U1308._fU4, l_U1308._fU12._fU0, l_U1308._fU12._fU4, l_U1308._fU12._fU8, ref l_U1308._fU0, 1 );
    SET_CAR_HEADING( l_U1308._fU0, l_U1308._fU24 );
    SWITCH_CAR_SIREN( l_U1308._fU0, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1308._fU4 );
    CREATE_OBJECT( l_U2021._fU4, l_U2021._fU8._fU0, l_U2021._fU8._fU4, l_U2021._fU8._fU8, ref l_U2021._fU0, 1 );
    SET_OBJECT_HEADING( l_U2021._fU0, 45.00000000 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2021._fU4 );
    SWITCH_ROADS_OFF( 2331.02000000, 481.54000000, 100.00000000, 2386.32000000, 280.83000000, -100.00000000 );
    ADD_BLIP_FOR_COORD( l_U2184._fU0, l_U2184._fU4, l_U2184._fU8, ref l_U2272 );
    SET_ROUTE( l_U2272, 1 );
    SET_CHAR_COORDINATES( sub_3405(), l_U2184._fU0, l_U2184._fU4, l_U2184._fU8 );
    SET_CHAR_HEADING( sub_3405(), 351.63210000 );
    LOAD_SCENE( l_U2184._fU0, l_U2184._fU4, l_U2184._fU8 );
    l_U2122 = 1;
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    l_U516 = 1;
    return;
}

void sub_14069()
{
    switch (l_U517)
    {
        case 0:
        if (NOT l_U2120)
        {
            if ((sub_5213( sub_3405(), ref l_U2184 )) < 200.00000000)
            {
                CLEAR_AREA( l_U1323._fU144._fU12._fU0, l_U1323._fU144._fU12._fU4, l_U1323._fU144._fU12._fU8, 10.00000000, 1 );
                CREATE_CAR( l_U1323._fU144._fU4, l_U1323._fU144._fU12._fU0, l_U1323._fU144._fU12._fU4, l_U1323._fU144._fU12._fU8, ref l_U1323._fU144._fU0, 1 );
                SET_CAR_HEADING( l_U1323._fU144._fU0, l_U1323._fU144._fU24 );
                SET_CAR_ENGINE_ON( l_U1323._fU144._fU0, 1, 1 );
                CREATE_CHAR_INSIDE_CAR( l_U1323._fU144._fU0, 6, l_U1323._fU0._fU4, ref l_U1323._fU0._fU0 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1323._fU0._fU0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1323._fU0._fU0, 1 );
                CREATE_CHAR_AS_PASSENGER( l_U1323._fU144._fU0, 6, l_U1323._fU72._fU4, 0, ref l_U1323._fU72._fU0 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1323._fU72._fU0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1323._fU72._fU0, 1 );
                l_U2120 = 1;
            }
        }
        if ((g_U39202 == 0) || (g_U39202 == 3))
        {
            if (sub_14495( ref l_U2156, 10000 ))
            {
                if (NOT l_U2116)
                {
                    sub_14555();
                    l_U2116 = 1;
                }
            }
        }
        sub_16014( ref l_U528._fU8, ref l_U2272, ref l_U2184, "GOD_0", "god_1", ref l_U2048, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U2125, ref l_U2126, 1, 0 );
        if (DOES_BLIP_EXIST( l_U2272 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3405(), l_U2184._fU0, l_U2184._fU4, l_U2184._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if (sub_16422( 1, 0, 0 ))
                {
                    ADD_COVER_POINT( 2358.50000000, 407.01000000, 5.00000000, 0, 90.00000000, 0, 0, ref l_U2310 );
                    REMOVE_BLIP( l_U2272 );
                    l_U2098 = 1;
                    sub_16913();
                    l_U517 = 1;
                }
            }
        }
        break;
        case 1:
        if (sub_16953())
        {
            l_U516 = 2;
        }
        break;
    }
    if (NOT l_U2043[0])
    {
        if (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            SET_CHAR_COORDINATES( sub_3405(), 2354.42200000, 399.55360000, 5.01020000 );
            SET_CHAR_HEADING( sub_3405(), 351.63210000 );
            LOAD_SCENE( 2354.42200000, 399.55360000, 5.01020000 );
            l_U2043[0] = 1;
        }
    }
    return;
}

int sub_14495(unknown uParam0, int iParam1)
{
    int iVar4;

    GET_GAME_TIMER( ref iVar4 );
    if ((iVar4 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_14555()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT sub_14564())
    {
        array(ref uVar4._fU0._fU0, 3);
        ref uVar4._fU0;
        ref uVar4;
        switch (g_U11134)
        {
            default:
              case 0:
            iVar2 = 1;
            iVar3 = 15;
            break;
            case 1:
            iVar2 = 1;
            iVar3 = 16;
            break;
            case 2:
            iVar2 = 1;
            iVar3 = 17;
            break;
            case 3:
            iVar2 = 1;
            iVar3 = 18;
            break;
        }
        g_U11134++;
        if (g_U11134 > 3)
        {
            g_U11134 = 0;
        }
        sub_14764( iVar2, iVar3, 16383, 16383, ref uVar4 );
        sub_15108( ref uVar4, 1 );
        sub_15136( ref uVar4, 0 );
        sub_15163( ref uVar4 );
    }
    return;
}

int sub_14564()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_14764(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_14786( uParam0, 0, iParam4 + 0 );
    sub_14786( uParam1, 1, iParam4 + 0 );
    sub_14786( uParam2, 2, iParam4 + 0 );
    sub_14786( uParam3, 3, iParam4 + 0 );
    sub_14786( 0, 4, iParam4 + 0 );
    sub_14786( 1, 5, iParam4 + 0 );
    sub_14786( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_14786(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_15108(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_15136(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_15163(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "T1_NAME_", 16 );
    if (g_U94._fU540)
    {
        return 0;
    }
    if ((g_U572[g_U572 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_15233())
        {
            sub_2452( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_15360( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2452( iVar9 );
    }
    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (g_U572[I]._fU0[0] == -1)
        {
            g_U572[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U572;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_2166( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U94._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U558 == 9)
            {
                g_U94._fU404 = 1016;
            }
            else if (g_U94._fU0 == 1015)
            {
                g_U94._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15728[2] = 1;
        }
        else if ((sub_2166( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_15233()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_2166( 1, g_U572[I] )) != 0) AND (g_U572[I]._fU20))
        {
            sub_2452( I );
            return 1;
        }
    }
    return 0;
}

int sub_15360(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_15425( uParam0, g_U572[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U572;
        }
    }
    return -1;
}

int sub_15425(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_2166( 0, uParam0 );
        if (iVar14 == (sub_2166( 0, uParam6 )))
        {
            iVar15 = sub_2166( 3, uParam0 );
            if (iVar15 == (sub_2166( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_16014(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, boolean bParam13, boolean bParam14)
{
    if (IS_WANTED_LEVEL_GREATER( sub_4409(), 0 ))
    {
        if (NOT (uParam5^))
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
            }
            CLEAR_PRINTS();
            if (NOT (uParam12^))
            {
                PRINT_NOW( uParam4, 7500, 1 );
                (uParam12^) = 1;
            }
            (uParam5^) = 1;
        }
    }
    else if ((uParam5^))
    {
        CLEAR_THIS_PRINT( uParam4 );
        (uParam5^) = 0;
        if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
        {
            if (bParam13)
            {
                if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
                {
                    ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam1 );
                    SET_ROUTE( (uParam1^), 1 );
                    if (bParam14)
                    {
                        SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
                    }
                    if (bParam6)
                    {
                        sub_16249( uParam1, uParam7, uParam10 );
                    }
                }
            }
            CLEAR_PRINTS();
            if (NOT (uParam11^))
            {
                PRINT_NOW( uParam3, 7500, 1 );
                (uParam11^) = 1;
            }
        }
    }
    return;
}

void sub_16249(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2765 = (uParam0^);
        g_U2780 = {uParam1};
        g_U2778 = uParam4;
    }
    return;
}

int sub_16422(boolean bParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;

    if (IS_CHAR_IN_ANY_BOAT( sub_3405() ))
    {
        iVar5 = 0;
    }
    else
    {
        iVar5 = 1;
    }
    if (sub_16462( 1, iVar5 ))
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING())
            {
                if (bParam0)
                {
                    SET_PLAYER_CONTROL( sub_4409(), 0 );
                }
                if (NOT bParam1)
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    return 1;
                }
                else
                {
                    DO_SCREEN_FADE_OUT_UNHACKED( uParam2 );
                    return 1;
                }
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_16462(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3405() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3405(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3405() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3405(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3405()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3405() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3405() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4409() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4409() )))
    {
        return 0;
    }
    return 1;
}

void sub_16913()
{
    l_U2125 = 0;
    l_U2126 = 0;
    return;
}

int sub_16953()
{
    if (IS_SCREEN_FADED_OUT())
    {
        sub_3139( 0 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_4409(), 0 );
        CLEAR_CHAR_TASKS( sub_3405() );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3405(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

void sub_17210()
{
    sub_17223( ref l_U255 );
    CLEAR_AREA( l_U2184._fU0, l_U2184._fU4, l_U2184._fU8, 200.00000000, 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3405() );
    SET_CHAR_HEADING( sub_3405(), l_U2164 );
    SET_CHAR_COORDINATES( sub_3405(), l_U2190._fU0, l_U2190._fU4, l_U2190._fU8 );
    if (sub_17398())
    {
        if (sub_17515( ref l_U255, ref l_U2199[2], ref l_U2166[2], 130.00000000 ))
        {
            l_U2089 = 1;
        }
    }
    else if (sub_17515( ref l_U255, ref l_U2199[0], ref l_U2166[0], 130.00000000 ))
    {
        l_U2089 = 1;
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    for ( l_U2142 = 0; l_U2142 <= (l_U907 - 1); l_U2142++ )
    {
        CREATE_CHAR( 26, l_U907[l_U2142]._fU4, l_U907[l_U2142]._fU12._fU0, l_U907[l_U2142]._fU12._fU4, l_U907[l_U2142]._fU12._fU8, ref l_U907[l_U2142]._fU0, 1 );
        SET_CHAR_HEADING( l_U907[l_U2142]._fU0, l_U907[l_U2142]._fU36 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U907[l_U2142]._fU0 );
        SET_CHAR_IN_CUTSCENE( l_U907[l_U2142]._fU0, 1 );
    }
    TASK_LOOK_AT_CHAR( l_U907[0]._fU0, l_U907[1]._fU0, -2, 0 );
    TASK_LOOK_AT_CHAR( l_U907[1]._fU0, l_U907[0]._fU0, -2, 0 );
    TASK_LOOK_AT_CHAR( l_U907[2]._fU0, l_U907[1]._fU0, -2, 0 );
    TASK_LOOK_AT_CHAR( l_U907[3]._fU0, l_U907[4]._fU0, -2, 0 );
    TASK_LOOK_AT_CHAR( l_U907[4]._fU0, l_U907[3]._fU0, -2, 0 );
    TASK_PLAY_ANIM( l_U907[0]._fU0, "FEMALE_TALK_A", "misselizabeta2", 8.00000000, 1, 0, 0, 0, -1 );
    TASK_PLAY_ANIM( l_U907[1]._fU0, "MALE_TALK_A", "misselizabeta2", 8.00000000, 1, 0, 0, 0, -1 );
    TASK_PLAY_ANIM( l_U907[2]._fU0, "FEMALE_TALK_B", "misselizabeta2", 8.00000000, 1, 0, 0, 0, -1 );
    TASK_PLAY_ANIM( l_U907[3]._fU0, "MALE_TALK_B", "misselizabeta2", 8.00000000, 1, 0, 0, 0, -1 );
    TASK_PLAY_ANIM( l_U907[4]._fU0, "FEMALE_TALK_C", "misselizabeta2", 8.00000000, 1, 0, 0, 0, -1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U907[0]._fU4 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U907[1]._fU4 );
    if (DOES_VEHICLE_EXIST( l_U1308._fU0 ))
    {
        DELETE_CAR( ref l_U1308._fU0 );
        CREATE_CAR( l_U1308._fU4, l_U1308._fU12._fU0, l_U1308._fU12._fU4, l_U1308._fU12._fU8, ref l_U1308._fU0, 1 );
        SET_CAR_HEADING( l_U1308._fU0, l_U1308._fU24 );
        SWITCH_CAR_SIREN( l_U1308._fU0, 1 );
        SET_CAR_IN_CUTSCENE( l_U1308._fU0, 1 );
    }
    LOAD_ADDITIONAL_TEXT( "E1E2AUD", 6 );
    START_CUTSCENE_NOW( "ET02_BA" );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    CLEAR_NAMED_CUTSCENE( "ET02_BA" );
    for ( l_U2142 = 0; l_U2142 <= (l_U907 - 1); l_U2142++ )
    {
        DELETE_CHAR( ref l_U907[l_U2142]._fU0 );
    }
    sub_16953();
    sub_18770();
    return;
}

void sub_17223(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_CAR_A_MISSION_CAR( (uParam0^) )))
            {
                SET_CAR_AS_MISSION_CAR( (uParam0^) );
                l_U120 = 1;
            }
        }
    }
    return;
}

int sub_17398()
{
    if (DOES_VEHICLE_EXIST( l_U255 ))
    {
        if (IS_VEH_DRIVEABLE( l_U255 ))
        {
            GET_CAR_MODEL( l_U255, ref l_U2270 );
            if (IS_THIS_MODEL_A_BIKE( l_U2270 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_17515(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    GET_CHAR_COORDINATES( sub_3405(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3405(), (uParam0^) )))
            {
                if (LOCATE_CAR_3D( (uParam0^), uVar6._fU0, uVar6._fU4, uVar6._fU8, uParam3, uParam3, uParam3, 0 ))
                {
                    SET_CAR_HEADING( (uParam0^), (uParam2^) );
                    SET_CAR_COORDINATES( (uParam0^), iParam1->_fU0, iParam1->_fU4, iParam1->_fU8 );
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_18770()
{
    g_U39149[13] = 1;
    if (DOES_CHAR_EXIST( l_U1323._fU0._fU0 ))
    {
        DELETE_CHAR( ref l_U1323._fU0._fU0 );
    }
    if (DOES_CHAR_EXIST( l_U1323._fU72._fU0 ))
    {
        DELETE_CHAR( ref l_U1323._fU72._fU0 );
    }
    if (DOES_VEHICLE_EXIST( l_U1323._fU144._fU0 ))
    {
        DELETE_CAR( ref l_U1323._fU144._fU0 );
    }
    CLEAR_WANTED_LEVEL( sub_4409() );
    g_U11004 = 0;
    SET_MAX_WANTED_LEVEL( 0 );
    SET_FAKE_WANTED_LEVEL( 2 );
    REQUEST_MODEL( l_U546[0]._fU144._fU4 );
    SUPPRESS_CAR_MODEL( l_U546[0]._fU144._fU4 );
    REQUEST_MODEL( l_U546[0]._fU0._fU4 );
    SUPPRESS_PED_MODEL( l_U546[0]._fU0._fU4 );
    REQUEST_MODEL( l_U2269 );
    REQUEST_MODEL( l_U998[0]._fU4 );
    REQUEST_MODEL( l_U1581._fU4 );
    SUPPRESS_CAR_MODEL( l_U1581._fU4 );
    REQUEST_MODEL( l_U1134[0]._fU4 );
    REQUEST_CAR_RECORDING( l_U1581._fU52 );
    for ( l_U2142 = 0; l_U2142 <= (l_U546 - 1); l_U2142++ )
    {
        REQUEST_CAR_RECORDING( l_U546[l_U2142]._fU144._fU52 );
    }
    for ( l_U2142 = 0; l_U2142 <= (l_U608 - 1); l_U2142++ )
    {
        REQUEST_CAR_RECORDING( l_U608[l_U2142]._fU52 );
    }
    for ( l_U2142 = 0; l_U2142 <= (l_U998 - 1); l_U2142++ )
    {
        REQUEST_CAR_RECORDING( l_U998[l_U2142]._fU52 );
    }
    for ( l_U2142 = 0; l_U2142 <= (l_U1297 - 1); l_U2142++ )
    {
        ADD_COVER_POINT( l_U1297[l_U2142]._fU4._fU0, l_U1297[l_U2142]._fU4._fU4, l_U1297[l_U2142]._fU4._fU8, 0, l_U1297[l_U2142]._fU16, 2, 0, ref l_U1297[l_U2142]._fU0 );
    }
    LOAD_ALL_OBJECTS_NOW();
    ADD_SCENARIO_BLOCKING_AREA( 2363.70000000, 419.94000000, 100.00000000, 2356, 405.68000000, -100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 2331.02000000, 481.54000000, 100.00000000, 2386.32000000, 280.83000000, -100.00000000 );
    SWITCH_ROADS_OFF( 2317.70000000, 474.24000000, 100.00000000, 2386.32000000, 280.83000000, -100.00000000 );
    CLEAR_AREA( l_U2190._fU0, l_U2190._fU4, l_U2190._fU8, 300.00000000, 1 );
    SET_CREATE_RANDOM_COPS( 0 );
    CLEAR_AREA_OF_COPS( l_U2190._fU0, l_U2190._fU4, l_U2190._fU8, 300.00000000 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3405(), 0 );
    CREATE_CHAR( 26, l_U528._fU4, l_U2193._fU0, l_U2193._fU4, l_U2193._fU8, ref l_U528._fU0, 1 );
    SET_CHAR_HEADING( l_U528._fU0, l_U2165 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U528._fU0, 0 );
    SET_CHAR_HEALTH( l_U528._fU0, 300 );
    SET_CHAR_MAX_HEALTH( l_U528._fU0, 300 );
    SET_CHAR_NEVER_TARGETTED( l_U528._fU0, 1 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U528._fU0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U528._fU0, 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U528._fU0, 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U528._fU0, 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U528._fU0, 7, 0, 1 );
    SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U528._fU0, 1 );
    SET_PED_FALL_OFF_BIKES_WHEN_SHOT( l_U528._fU0, 0 );
    SET_CHAR_PROP_INDEX( l_U528._fU0, 1, 0 );
    sub_19921( ref l_U528._fU0, 20.00000000, 10.00000000 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U528._fU0, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U528._fU4 );
    sub_6012( 1, l_U528._fU0, "marta", 0 );
    STOP_PED_SPEAKING( l_U528._fU0, 1 );
    UNLOCK_RAGDOLL( l_U528._fU0, 0 );
    TASK_PLAY_ANIM( l_U528._fU0, "plead", "misselizabeta2", 8.00000000, 1, 0, 0, 0, 11000 );
    sub_20126( 1 );
    for ( l_U2142 = 0; l_U2142 <= (g_U11081 - 1); l_U2142++ )
    {
        if (DOES_CHAR_EXIST( g_U11081[l_U2142] ))
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[l_U2142] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11081[l_U2142] );
                sub_21965( ref g_U11081[l_U2142], ref l_U2229[l_U2142], ref l_U2175[l_U2142] );
                sub_22084( ref g_U11087[l_U2142], ref l_U2243[l_U2142], ref l_U2178[l_U2142] );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( g_U11081[l_U2142], l_U2229[l_U2142], 10.00000000 );
                SET_SENSE_RANGE( g_U11081[l_U2142], 250.00000000 );
                sub_22245( ref g_U11081[l_U2142], ref l_U2276 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U2154 );
    GET_CHAR_COORDINATES( sub_3405(), ref l_U2190._fU0, ref l_U2190._fU4, ref l_U2190._fU8 );
    LOAD_SCENE( l_U2190._fU0, l_U2190._fU4, l_U2190._fU8 );
    for ( l_U2142 = 0; l_U2142 <= (l_U546 - 1); l_U2142++ )
    {
        CLEAR_AREA( l_U546[l_U2142]._fU144._fU12._fU0, l_U546[l_U2142]._fU144._fU12._fU4, l_U546[l_U2142]._fU144._fU12._fU8, 5.00000000, 1 );
        CREATE_CAR( l_U546[l_U2142]._fU144._fU4, l_U546[l_U2142]._fU144._fU12._fU0, l_U546[l_U2142]._fU144._fU12._fU4, l_U546[l_U2142]._fU144._fU12._fU8, ref l_U546[l_U2142]._fU144._fU0, 1 );
        SET_CAR_HEADING( l_U546[l_U2142]._fU144._fU0, l_U546[l_U2142]._fU144._fU24 );
        FORCE_CAR_LIGHTS( l_U546[l_U2142]._fU144._fU0, 2 );
        SWITCH_CAR_SIREN( l_U546[l_U2142]._fU144._fU0, 1 );
        SET_SIREN_WITH_NO_DRIVER( l_U546[l_U2142]._fU144._fU0, 1 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U546[l_U2142]._fU144._fU0, 1 );
        CREATE_CHAR_INSIDE_CAR( l_U546[l_U2142]._fU144._fU0, 26, l_U546[l_U2142]._fU0._fU4, ref l_U546[l_U2142]._fU0._fU0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U546[l_U2142]._fU0._fU0 );
        GIVE_WEAPON_TO_CHAR( l_U546[l_U2142]._fU0._fU0, 7, 30000, 1 );
        SET_CURRENT_CHAR_WEAPON( l_U546[l_U2142]._fU0._fU0, 7, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U546[l_U2142]._fU0._fU0, 1 );
        ADD_BLIP_FOR_CHAR( l_U546[l_U2142]._fU0._fU0, ref l_U546[l_U2142]._fU0._fU8 );
        CHANGE_BLIP_DISPLAY( l_U546[l_U2142]._fU0._fU8, 2 );
        SET_AMBIENT_VOICE_NAME( l_U546[l_U2142]._fU0._fU0, "M_Y_FIB" );
        CREATE_CHAR_AS_PASSENGER( l_U546[l_U2142]._fU144._fU0, 26, l_U546[l_U2142]._fU72._fU4, 0, ref l_U546[l_U2142]._fU72._fU0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U546[l_U2142]._fU72._fU0 );
        GIVE_WEAPON_TO_CHAR( l_U546[l_U2142]._fU72._fU0, 7, 30000, 1 );
        SET_CURRENT_CHAR_WEAPON( l_U546[l_U2142]._fU72._fU0, 7, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U546[l_U2142]._fU72._fU0, 1 );
        ADD_BLIP_FOR_CHAR( l_U546[l_U2142]._fU72._fU0, ref l_U546[l_U2142]._fU72._fU8 );
        CHANGE_BLIP_DISPLAY( l_U546[l_U2142]._fU72._fU8, 2 );
        SET_AMBIENT_VOICE_NAME( l_U546[l_U2142]._fU72._fU0, "M_Y_FIB" );
        START_PLAYBACK_RECORDED_CAR( l_U546[l_U2142]._fU144._fU0, l_U546[l_U2142]._fU144._fU52 );
        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U546[l_U2142]._fU144._fU0, l_U546[l_U2142]._fU144._fU32 );
    }
    for ( l_U2142 = 0; l_U2142 <= (l_U608 - 1); l_U2142++ )
    {
        CLEAR_AREA( l_U608[l_U2142]._fU12._fU0, l_U608[l_U2142]._fU12._fU4, l_U608[l_U2142]._fU12._fU8, 5.00000000, 1 );
        CREATE_CAR( l_U608[l_U2142]._fU4, l_U608[l_U2142]._fU12._fU0, l_U608[l_U2142]._fU12._fU4, l_U608[l_U2142]._fU12._fU8, ref l_U608[l_U2142]._fU0, 1 );
        SET_CAR_HEADING( l_U608[l_U2142]._fU0, l_U608[l_U2142]._fU24 );
        if (l_U2142 == 0)
        {
            FORCE_CAR_LIGHTS( l_U608[l_U2142]._fU0, 2 );
            SWITCH_CAR_SIREN( l_U608[l_U2142]._fU0, 1 );
            SET_SIREN_WITH_NO_DRIVER( l_U608[l_U2142]._fU0, 1 );
        }
        else
        {
            SWITCH_CAR_SIREN( l_U608[l_U2142]._fU0, 1 );
        }
        CREATE_CHAR_INSIDE_CAR( l_U608[l_U2142]._fU0, 26, l_U669[l_U2142]._fU4, ref l_U669[l_U2142]._fU0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U669[l_U2142]._fU0 );
        GIVE_WEAPON_TO_CHAR( l_U669[l_U2142]._fU0, 7, 30000, 1 );
        SET_CURRENT_CHAR_WEAPON( l_U669[l_U2142]._fU0, 7, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U669[l_U2142]._fU0, 1 );
        ADD_BLIP_FOR_CHAR( l_U669[l_U2142]._fU0, ref l_U669[l_U2142]._fU8 );
        CHANGE_BLIP_DISPLAY( l_U669[l_U2142]._fU8, 2 );
        CREATE_CHAR_AS_PASSENGER( l_U608[l_U2142]._fU0, 26, l_U742[l_U2142]._fU4, 0, ref l_U742[l_U2142]._fU0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U742[l_U2142]._fU0 );
        GIVE_WEAPON_TO_CHAR( l_U742[l_U2142]._fU0, 7, 30000, 1 );
        SET_CURRENT_CHAR_WEAPON( l_U742[l_U2142]._fU0, 7, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U742[l_U2142]._fU0, 1 );
        ADD_BLIP_FOR_CHAR( l_U742[l_U2142]._fU0, ref l_U742[l_U2142]._fU8 );
        CHANGE_BLIP_DISPLAY( l_U742[l_U2142]._fU8, 2 );
        if (NOT (l_U2142 == 4))
        {
            START_PLAYBACK_RECORDED_CAR( l_U608[l_U2142]._fU0, l_U608[l_U2142]._fU52 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U608[l_U2142]._fU0, l_U608[l_U2142]._fU32 );
        }
    }
    SET_CAR_PROOFS( l_U608[2]._fU0, 0, 0, 1, 0, 0 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U608[1]._fU0, 1 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U608[3]._fU0, 1 );
    for ( l_U2142 = 0; l_U2142 <= (l_U815 - 1); l_U2142++ )
    {
        CREATE_CHAR( 26, l_U815[l_U2142]._fU4, l_U815[l_U2142]._fU12._fU0, l_U815[l_U2142]._fU12._fU4, l_U815[l_U2142]._fU12._fU8, ref l_U815[l_U2142]._fU0, 1 );
        SET_CHAR_HEADING( l_U815[l_U2142]._fU0, l_U815[l_U2142]._fU36 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U815[l_U2142]._fU0 );
        GIVE_WEAPON_TO_CHAR( l_U815[l_U2142]._fU0, 7, 30000, 1 );
        SET_CURRENT_CHAR_WEAPON( l_U815[l_U2142]._fU0, 7, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U815[l_U2142]._fU0, 1 );
        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U815[l_U2142]._fU0, l_U1297[l_U2142]._fU4, 2000 );
        ADD_BLIP_FOR_CHAR( l_U815[l_U2142]._fU0, ref l_U815[l_U2142]._fU8 );
        CHANGE_BLIP_DISPLAY( l_U815[l_U2142]._fU8, 2 );
    }
    for ( l_U2142 = 0; l_U2142 <= (l_U998 - 3); l_U2142++ )
    {
        CLEAR_AREA( l_U998[l_U2142]._fU12._fU0, l_U998[l_U2142]._fU12._fU4, l_U998[l_U2142]._fU12._fU8, 5.00000000, 1 );
        CREATE_CAR( l_U998[l_U2142]._fU4, l_U998[l_U2142]._fU12._fU0, l_U998[l_U2142]._fU12._fU4, l_U998[l_U2142]._fU12._fU8, ref l_U998[l_U2142]._fU0, 1 );
        SET_CAR_HEADING( l_U998[l_U2142]._fU0, l_U998[l_U2142]._fU24 );
        SWITCH_CAR_SIREN( l_U998[l_U2142]._fU0, 1 );
        CREATE_CHAR_INSIDE_CAR( l_U998[l_U2142]._fU0, 26, l_U1134[l_U2142]._fU4, ref l_U1134[l_U2142]._fU0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1134[l_U2142]._fU0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1134[l_U2142]._fU0, 1 );
        START_PLAYBACK_RECORDED_CAR( l_U998[l_U2142]._fU0, l_U998[l_U2142]._fU52 );
        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U998[l_U2142]._fU0, l_U998[l_U2142]._fU32 );
    }
    SET_CAR_PROOFS( l_U998[1]._fU0, 0, 0, 1, 0, 0 );
    SET_CAR_PROOFS( l_U998[2]._fU0, 0, 0, 1, 0, 0 );
    for ( l_U2142 = 0; l_U2142 <= (l_U852 - 1); l_U2142++ )
    {
        sub_25230( ref l_U852[l_U2142]._fU0 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U546[0]._fU144._fU4 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U608[0]._fU4 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U815[0]._fU4 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2269 );
    TASK_SEEK_COVER_TO_COVER_POINT( sub_3405(), l_U2310, 2350.59000000, 417.08000000, 5.00000000, 0 );
    sub_25406();
    SET_ALL_RANDOM_PEDS_FLEE( sub_4409(), 1 );
    l_U2052 = 1;
    l_U516 = 3;
    return;
}

void sub_19921(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), uParam1 );
            SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), uParam2 );
        }
    }
    return;
}

void sub_20126(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_20158( g_U11081[I], uParam0 );
    }
    return;
}

void sub_20158(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (bParam1)
    {
        if (sub_14564())
        {
            if (NOT sub_20184())
            {
                sub_20227();
            }
        }
    }
    if (DOES_CHAR_EXIST( iParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            for ( I = 0; I < 2; I++ )
            {
                if (g_U11028[I]._fU0 == iParam0)
                {
                    iVar5 = I;
                }
            }
            if (bParam1)
            {
                sub_20356( ref g_U11028[iVar5], ref g_U11081[iVar5], ref g_U11087[iVar5] );
            }
            else if (IS_PLAYER_PLAYING( sub_4409() ))
            {
                CLEAR_CHAR_TASKS( g_U11028[iVar5]._fU0 );
                sub_20701( ref g_U11028[iVar5], sub_3405() );
                if (g_U11090)
                {
                    sub_21728( ref g_U11028[iVar5], 4 );
                }
            }
            g_U11117[iVar5] = bParam1;
        }
    }
    return;
}

void sub_20184()
{
    if (NOT sub_14564())
    {
        return 0;
    }
    return g_U11090;
}

void sub_20227()
{
    g_U11090 = 1;
    return;
}

void sub_20356(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_20421( iParam0 ) ))
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
        {
            g_U11114 = 1;
        }
        TASK_STAND_STILL( iParam0->_fU0, -2 );
    }
    return;
}

void sub_20421(int iParam0)
{
    unknown Result;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref Result );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            GET_DRIVER_OF_CAR( Result, ref iVar4 );
            if (iVar4 == iParam0->_fU0)
            {
                return Result;
            }
        }
    }
    return nil;
}

void sub_20701(int iParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (IS_CHAR_INJURED( iParam1 ))
    {
        return;
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                if (sub_20797( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam0->_fU8 == sub_3405()) AND (iParam1 != sub_3405()))
    {
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        if (DOES_CHAR_EXIST( g_U11197 ))
        {
            if ((g_U11197 == g_U11081[0]) || (g_U11197 == g_U11081[1]))
            {
                g_U11197 = nil;
            }
        }
        if (DOES_CHAR_EXIST( g_U11198 ))
        {
            if ((g_U11198 == g_U11081[0]) || (g_U11198 == g_U11081[1]))
            {
                g_U11198 = nil;
            }
        }
        g_U11114 = 1;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND ((iParam0->_fU8 != iParam1) || (iParam0->_fU36 != 1)))
    {
        TASK_PAUSE( iParam0->_fU0, 30 );
    }
    iParam0->_fU8 = iParam1;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_PED_IN_GROUP( iParam0->_fU0 ))
        {
            GET_PED_GROUP_INDEX( iParam0->_fU0, ref uVar5 );
            GET_GROUP_LEADER( uVar5, ref iVar6 );
            if (DOES_GROUP_EXIST( uVar5 ))
            {
                GET_GROUP_LEADER( uVar5, ref iVar6 );
                if (iVar6 != iParam0->_fU8)
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
            }
        }
        sub_21282( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_3405())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_21397( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_21397( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_21397( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_21397( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_21397( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_20797(unknown uParam0, unknown uParam1)
{
    return (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 )) AND (NOT (sub_20821( uParam0, uParam1 )));
}

boolean sub_20821(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_21282(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_21397(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_3405())
    {
        if (iParam1 == 1)
        {
            g_U11197 = iParam0->_fU0;
            if (g_U11198 == iParam0->_fU0)
            {
                g_U11198 = nil;
            }
        }
        if (iParam1 == 0)
        {
            g_U11198 = iParam0->_fU0;
            if (g_U11197 == iParam0->_fU0)
            {
                g_U11197 = nil;
            }
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        g_U11114 = 1;
    }
    iParam0->_fU40 = iParam1;
    return;
}

void sub_21728(int iParam0, int iParam1)
{
    iParam0->_fU88 = (iParam0->_fU88) || (iParam1);
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        }
    }
    return;
}

void sub_21965(unknown uParam0, int iParam1, unknown uParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_HEADING( (uParam0^), (uParam2^) );
            SET_CHAR_COORDINATES( (uParam0^), iParam1->_fU0, iParam1->_fU4, iParam1->_fU8 );
        }
    }
    return;
}

void sub_22084(unknown uParam0, int iParam1, unknown uParam2)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            SET_CAR_HEADING( (uParam0^), (uParam2^) );
            SET_CAR_COORDINATES( (uParam0^), iParam1->_fU0, iParam1->_fU4, iParam1->_fU8 );
        }
    }
    return;
}

void sub_22245(unknown uParam0, unknown uParam1)
{
    SET_RELATIONSHIP( 5, 0, 23 );
    SET_RELATIONSHIP( 5, 23, 0 );
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_RELATIONSHIP( (uParam0^), 1, 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 0 );
            SET_CHAR_WILL_USE_COVER( (uParam0^), 1 );
            SET_CHAR_IS_TARGET_PRIORITY( (uParam0^), 1 );
        }
    }
    return;
}

void sub_25230(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            DELETE_CHAR( uParam0 );
        }
    }
    return;
}

void sub_25406()
{
    if (HAS_CHAR_GOT_WEAPON( sub_3405(), 22 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3405(), 22, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3405(), 15 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3405(), 15, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3405(), 14 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3405(), 14, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3405(), 13 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3405(), 13, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3405(), 12 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3405(), 12, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3405(), 10 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3405(), 10, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3405(), 11 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3405(), 11, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3405(), 22 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3405(), 22, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3405(), 27 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3405(), 27, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3405(), 9 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3405(), 9, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3405(), 7 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3405(), 7, 1 );
    };;;;;;;;;;;
    return;
}

void sub_25871()
{
    if ((NOT l_U2083[0]) AND (l_U2113[0]))
    {
        if (sub_25910( ref l_U2145, 1000 ))
        {
            l_U2083[0] = 1;
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U527 = 2;
        }
    }
    switch (l_U527)
    {
        case 0:
        BEGIN_CAM_COMMANDS( ref l_U2144 );
        CREATE_CAM( 14, ref l_U2285 );
        CREATE_CAM( 14, ref l_U2286 );
        CREATE_CAM( 3, ref l_U2289 );
        SET_CAM_POS( l_U2285, 2357.32300000, 409.70310000, 5.96208000 );
        SET_CAM_ROT( l_U2285, 0.23011600, -5.15657800, 30.90049000 );
        SET_CAM_FOV( l_U2285, 45.00000000 );
        SET_CAM_POS( l_U2286, 2359.38400000, 406.25450000, 5.94599800 );
        SET_CAM_ROT( l_U2286, 0.22918400, 0.00000000, 30.92118000 );
        SET_CAM_FOV( l_U2286, 45.00000000 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U2289, l_U2285, l_U2286, 3750, 0 );
        SET_CAM_ACTIVE( l_U2289, 1 );
        SET_CAM_PROPAGATE( l_U2289, 1 );
        DO_SCREEN_FADE_IN_UNHACKED( 10 );
        GET_GAME_TIMER( ref l_U2145 );
        l_U2113[0] = 1;
        l_U527 = 1;
        break;
        case 1:
        if (NOT IS_CAM_INTERPOLATING())
        {
            GET_GAME_TIMER( ref l_U2143 );
            l_U527 = 2;
        }
        break;
        case 2:
        if (sub_14495( ref l_U2143, 250 ))
        {
            SET_CAM_ACTIVE( l_U2285, 0 );
            SET_CAM_PROPAGATE( l_U2285, 0 );
            SET_CAM_ACTIVE( l_U2286, 0 );
            SET_CAM_PROPAGATE( l_U2286, 0 );
            SET_CAM_ACTIVE( l_U2289, 0 );
            SET_CAM_PROPAGATE( l_U2289, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_ALL_CAMS();
            END_CAM_COMMANDS( ref l_U2144 );
            GET_GAME_TIMER( ref l_U2143 );
            GET_GAME_TIMER( ref l_U2150 );
            GET_GAME_TIMER( ref l_U2152 );
            sub_26564( 0 );
            SET_GAME_CAM_HEADING( 30.92000000 );
            CLEAR_PRINTS();
            PRINT_NOW( "god_7", 7500, 1 );
            if (l_U2083[0])
            {
                INCREMENT_INT_STAT( 372, 1 );
                DO_SCREEN_FADE_IN_UNHACKED( 10 );
            }
            else
            {
                INCREMENT_INT_STAT( 373, 1 );
            }
            SET_PED_IS_BLIND_RAGING( sub_3405(), 1 );
            l_U516 = 4;
        }
        break;
    }
    return;
}

int sub_25910(unknown uParam0, unknown uParam1)
{
    if (sub_14495( uParam0, uParam1 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_25945())
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_25945()
{
    return IS_CONTROL_JUST_PRESSED( 2, 77 );
}

void sub_26564(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_3139( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_4409() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_3405() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_3405() );
        }
        SET_PLAYER_CONTROL( sub_4409(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3405(), 0 );
    }
    if (l_U120)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U255 );
        l_U120 = 0;
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

void sub_26874()
{
    if (NOT l_U2107)
    {
        if (sub_26895( 2 ))
        {
            sub_27266();
            TRIGGER_POLICE_REPORT( "E1_SCANNER_ET2_01" );
            GET_GAME_TIMER( ref l_U2157 );
            l_U2107 = 1;
        }
    }
    else
    {
        sub_27941();
    }
    sub_30035();
    sub_30656();
    sub_31360();
    if (NOT l_U2053[0])
    {
        for ( l_U2142 = 0; l_U2142 <= (l_U546 - 1); l_U2142++ )
        {
            if (NOT l_U546[l_U2142]._fU212)
            {
                if (IS_VEH_DRIVEABLE( l_U546[l_U2142]._fU144._fU0 ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U546[l_U2142]._fU144._fU0 )))
                    {
                        sub_33138( ref l_U546[l_U2142]._fU0._fU0, ref l_U546[l_U2142]._fU0._fU8 );
                        sub_33138( ref l_U546[l_U2142]._fU72._fU0, ref l_U546[l_U2142]._fU0._fU8 );
                        l_U546[l_U2142]._fU212 = 1;
                    }
                }
            }
        }
        if (l_U546[0]._fU212)
        {
            l_U2053[0] = 1;
        }
    }
    if (NOT l_U2140)
    {
        if (NOT l_U2138)
        {
            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U546[0]._fU0._fU0 )))
            {
                SAY_AMBIENT_SPEECH( l_U546[0]._fU0._fU0, "SURROUNDED", 0, 0, 0 );
                l_U2138 = 1;
            }
        }
        if (NOT l_U2139)
        {
            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U546[0]._fU72._fU0 )))
            {
                SAY_AMBIENT_SPEECH( l_U546[0]._fU72._fU0, "COVER_ME", 0, 0, 0 );
                l_U2139 = 1;
            }
        }
        if ((l_U2138) AND (l_U2139))
        {
            l_U2140 = 1;
        }
    }
    if (NOT l_U2053[1])
    {
        for ( l_U2142 = 0; l_U2142 <= (l_U2060 - 1); l_U2142++ )
        {
            if (NOT l_U2060[l_U2142])
            {
                if (IS_VEH_DRIVEABLE( l_U608[l_U2142]._fU0 ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U608[l_U2142]._fU0 )))
                    {
                        sub_33138( ref l_U669[l_U2142]._fU0, ref l_U669[l_U2142]._fU8 );
                        sub_33138( ref l_U742[l_U2142]._fU0, ref l_U669[l_U2142]._fU8 );
                        l_U2060[l_U2142] = 1;
                    }
                }
            }
        }
        for ( l_U2146 = 0; l_U2146 <= (l_U2060 - 1); l_U2146++ )
        {
            if (l_U2060[l_U2146])
            {
                l_U2147++;
            }
        }
        if (l_U2147 == l_U2060)
        {
            l_U2053[1] = 1;
        }
        else
        {
            l_U2147 = 0;
        }
    }
    if (NOT l_U2053[2])
    {
        for ( l_U2142 = 0; l_U2142 <= (l_U815 - 1); l_U2142++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U815[l_U2142]._fU0 )))
            {
                sub_33138( ref l_U815[l_U2142]._fU0, ref l_U815[l_U2142]._fU8 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U815[l_U2142]._fU0, l_U1297[l_U2142]._fU4, 1.50000000 );
            }
        }
        l_U2053[2] = 1;
    }
    if (NOT l_U2053[3])
    {
        if ((IS_CHAR_IN_ANGLED_AREA_3D( sub_3405(), 2336.11400000, 394.62600000, 2.08500000, 2346.09400000, 395.26800000, 10.08500000, 50.00000000, 0 )) || (sub_14495( ref l_U2152, 10000 )))
        {
            for ( l_U2142 = 7; l_U2142 <= (l_U998 - 1); l_U2142++ )
            {
                CLEAR_AREA( l_U998[l_U2142]._fU12._fU0, l_U998[l_U2142]._fU12._fU4, l_U998[l_U2142]._fU12._fU8, 5.00000000, 1 );
                CREATE_CAR( l_U998[l_U2142]._fU4, l_U998[l_U2142]._fU12._fU0, l_U998[l_U2142]._fU12._fU4, l_U998[l_U2142]._fU12._fU8, ref l_U998[l_U2142]._fU0, 1 );
                SET_CAR_HEADING( l_U998[l_U2142]._fU0, l_U998[l_U2142]._fU24 );
                SWITCH_CAR_SIREN( l_U998[l_U2142]._fU0, 1 );
                CREATE_CHAR_INSIDE_CAR( l_U998[l_U2142]._fU0, 26, l_U1134[l_U2142]._fU4, ref l_U1134[l_U2142]._fU0 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1134[l_U2142]._fU0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1134[l_U2142]._fU0, 1 );
                START_PLAYBACK_RECORDED_CAR( l_U998[l_U2142]._fU0, l_U998[l_U2142]._fU52 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U998[l_U2142]._fU0, l_U998[l_U2142]._fU32 );
                SET_PLAYBACK_SPEED( l_U998[l_U2142]._fU0, l_U998[l_U2142]._fU28 );
            }
            l_U2053[3] = 1;
            GET_GAME_TIMER( ref l_U2150 );
            SWITCH_ROADS_BACK_TO_ORIGINAL( 2317.70000000, 474.24000000, 100.00000000, 2386.32000000, 280.83000000, -100.00000000 );
            l_U2076 = 1;
        }
    }
    if (NOT l_U2065)
    {
        for ( l_U2142 = 0; l_U2142 <= (l_U2066 - 1); l_U2142++ )
        {
            if (NOT l_U2066[l_U2142])
            {
                if (DOES_VEHICLE_EXIST( l_U998[l_U2142]._fU0 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U998[l_U2142]._fU0 ))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U998[l_U2142]._fU0 )))
                        {
                            if (NOT (sub_3678( ref l_U1134[l_U2142]._fU0 )))
                            {
                                CLEAR_CHAR_TASKS( l_U1134[l_U2142]._fU0 );
                                if (l_U2142 == 1)
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U1134[l_U2142]._fU48 );
                                    TASK_SMART_FLEE_CHAR( 0, sub_3405(), 200.00000000, -1 );
                                    CLOSE_SEQUENCE_TASK( l_U1134[l_U2142]._fU48 );
                                    TASK_PERFORM_SEQUENCE( l_U1134[l_U2142]._fU0, l_U1134[l_U2142]._fU48 );
                                    CLEAR_SEQUENCE_TASK( l_U1134[l_U2142]._fU48 );
                                }
                                else
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U1134[l_U2142]._fU48 );
                                    TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, l_U998[l_U2142]._fU0 );
                                    TASK_SMART_FLEE_CHAR( 0, sub_3405(), 200.00000000, -1 );
                                    CLOSE_SEQUENCE_TASK( l_U1134[l_U2142]._fU48 );
                                    TASK_PERFORM_SEQUENCE( l_U1134[l_U2142]._fU0, l_U1134[l_U2142]._fU48 );
                                    CLEAR_SEQUENCE_TASK( l_U1134[l_U2142]._fU48 );
                                }
                                l_U2066[l_U2142] = 1;
                            }
                        }
                        else if (NOT l_U2077)
                        {
                            if (l_U2142 == 0)
                            {
                                if (NOT l_U2078)
                                {
                                    if (sub_35328( ref l_U998[l_U2142]._fU0, ref l_U2150 ))
                                    {
                                        l_U2078 = 1;
                                    }
                                }
                            }
                            else if (l_U2142 == 1)
                            {
                                if (NOT l_U2079)
                                {
                                    if (sub_35328( ref l_U998[l_U2142]._fU0, ref l_U2150 ))
                                    {
                                        l_U2079 = 1;
                                    }
                                }
                            }
                            else if (l_U2142 == 7)
                            {
                                if (NOT l_U2080)
                                {
                                    if (sub_35328( ref l_U998[l_U2142]._fU0, ref l_U2150 ))
                                    {
                                        l_U2080 = 1;
                                    }
                                }
                            }
                            else if (l_U2142 == 8)
                            {
                                if (NOT l_U2081)
                                {
                                    if (sub_35328( ref l_U998[l_U2142]._fU0, ref l_U2150 ))
                                    {
                                        l_U2081 = 1;
                                    }
                                }
                            };;;;
                            if (l_U2151 == 4)
                            {
                                l_U2077 = 1;
                            }
                        }
                    }
                }
            }
        }
        for ( l_U2146 = 0; l_U2146 <= (l_U2066 - 1); l_U2146++ )
        {
            if (l_U2066[l_U2146])
            {
                l_U2149++;
            }
        }
        if (l_U2149 == l_U2066)
        {
            l_U2065 = 1;
        }
        else
        {
            l_U2149 = 0;
        }
    }
    sub_35733();
    if ((((sub_36117( ref l_U546 )) AND (sub_36459( ref l_U669, 1 ))) AND (sub_36459( ref l_U742, 1 ))) AND (sub_36459( ref l_U815, 1 )))
    {
        if (NOT l_U2099)
        {
            SET_FAKE_WANTED_LEVEL( 0 );
            g_U11004 = 1;
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( sub_4409(), 3 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_4409() );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1323._fU144._fU0 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1308._fU0 );
            for ( l_U2142 = 0; l_U2142 <= (l_U546 - 1); l_U2142++ )
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U546[l_U2142]._fU144._fU0 );
            }
            for ( l_U2142 = 0; l_U2142 <= (l_U608 - 1); l_U2142++ )
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U608[l_U2142]._fU0 );
            }
            for ( l_U2142 = 0; l_U2142 <= (l_U998 - 1); l_U2142++ )
            {
                TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( l_U998[l_U2142]._fU0, 1 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U998[l_U2142]._fU0 );
            }
            l_U2099 = 1;
            l_U516 = 5;
        }
    }
    return;
}

int sub_26895(int iParam0)
{
    int iVar3;

    for ( l_U2142 = 0; l_U2142 <= (l_U546 - 1); l_U2142++ )
    {
        if (IS_CHAR_INJURED( l_U546[l_U2142]._fU0._fU0 ))
        {
            iVar3++;
        }
        if (IS_CHAR_INJURED( l_U546[l_U2142]._fU72._fU0 ))
        {
            iVar3++;
        }
    }
    for ( l_U2142 = 0; l_U2142 <= (l_U669 - 1); l_U2142++ )
    {
        if (IS_CHAR_INJURED( l_U669[l_U2142]._fU0 ))
        {
            iVar3++;
        }
    }
    for ( l_U2142 = 0; l_U2142 <= (l_U742 - 1); l_U2142++ )
    {
        if (IS_CHAR_INJURED( l_U742[l_U2142]._fU0 ))
        {
            iVar3++;
        }
    }
    for ( l_U2142 = 0; l_U2142 <= (l_U815 - 1); l_U2142++ )
    {
        if (IS_CHAR_INJURED( l_U815[l_U2142]._fU0 ))
        {
            iVar3++;
        }
    }
    if (iVar3 >= iParam0)
    {
        return 1;
    }
    return 0;
}

void sub_27266()
{
    CREATE_CAR( l_U1581._fU4, l_U1581._fU12._fU0, l_U1581._fU12._fU4, l_U1581._fU12._fU8, ref l_U1581._fU0, 1 );
    SET_CAR_HEADING( l_U1581._fU0, l_U1581._fU24 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U1581._fU0, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1581._fU4 );
    TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( l_U1581._fU0, 1 );
    CREATE_CHAR_INSIDE_CAR( l_U1581._fU0, 26, l_U1596[0]._fU4, ref l_U1596[0]._fU0 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1596[0]._fU0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1596[0]._fU0, 1 );
    SET_SENSE_RANGE( l_U1596[0]._fU0, 250.00000000 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1596[0]._fU4 );
    for ( l_U2142 = 1; l_U2142 <= 2; l_U2142++ )
    {
        CREATE_CHAR_AS_PASSENGER( l_U1581._fU0, 26, l_U1596[l_U2142]._fU4, l_U2142, ref l_U1596[l_U2142]._fU0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1596[l_U2142]._fU0 );
        GIVE_WEAPON_TO_CHAR( l_U1596[l_U2142]._fU0, 14, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U1596[l_U2142]._fU0, 14, 1 );
        sub_27648( ref l_U1596[l_U2142]._fU0, ref l_U2277 );
    }
    START_PLAYBACK_RECORDED_CAR( l_U1581._fU0, 1391 );
    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1581._fU0, 4000 );
    return;
}

void sub_27648(unknown uParam0, unknown uParam1)
{
    SET_RELATIONSHIP( 5, 0, 23 );
    SET_RELATIONSHIP( 5, 23, 0 );
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 23 );
            SET_CHAR_WILL_USE_COVER( (uParam0^), 0 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
            SET_CHAR_IS_TARGET_PRIORITY( (uParam0^), 1 );
            SET_CHAR_AS_ENEMY( (uParam0^), 1 );
            SET_CHAR_WILL_DO_DRIVEBYS( (uParam0^), 1 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( (uParam0^), 0 );
            SET_SENSE_RANGE( (uParam0^), 250.00000000 );
        }
    }
    return;
}

void sub_27941()
{
    if (NOT l_U2106)
    {
        switch (l_U524)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U1596[0]._fU0 )))
            {
                if (IS_VEH_DRIVEABLE( l_U1581._fU0 ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1581._fU0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U1596[0]._fU0, 29, ref l_U1596[0]._fU68 );
                        if (l_U1596[0]._fU68 == 7)
                        {
                            if (NOT l_U2104)
                            {
                                sub_28132( ref l_U2250[1], ref l_U2250[0] );
                                l_U2104 = 1;
                            }
                            else
                            {
                                sub_28132( ref l_U2250[0], ref l_U2250[1] );
                                l_U2104 = 0;
                            }
                        }
                    }
                }
                else
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1581._fU0 );
                }
            }
            else
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U1581._fU0 );
            }
            break;
            case 1:
            STOP_PLAYBACK_RECORDED_CAR( l_U1581._fU0 );
            if (NOT (IS_CHAR_INJURED( l_U1596[0]._fU0 )))
            {
                if (IS_VEH_DRIVEABLE( l_U1581._fU0 ))
                {
                    CLEAR_CHAR_TASKS( l_U1596[0]._fU0 );
                    OPEN_SEQUENCE_TASK( ref l_U1596[0]._fU48 );
                    TASK_HELI_MISSION( 0, l_U1581._fU0, 0, sub_3405(), 0.00000000, 0.00000000, 0.00000000, 7, 20.00000000, 0, -1, 60, 55 );
                    CLOSE_SEQUENCE_TASK( l_U1596[0]._fU48 );
                    TASK_PERFORM_SEQUENCE( l_U1596[0]._fU0, l_U1596[0]._fU48 );
                    CLEAR_SEQUENCE_TASK( l_U1596[0]._fU48 );
                    GET_GAME_TIMER( ref l_U2143 );
                    l_U524 = 2;
                }
            }
            break;
            case 2:
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_4409(), 0 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U1596[0]._fU0 )))
                {
                    if (IS_VEH_DRIVEABLE( l_U1581._fU0 ))
                    {
                        CLEAR_CHAR_TASKS( l_U1596[0]._fU0 );
                        OPEN_SEQUENCE_TASK( ref l_U1596[0]._fU48 );
                        TASK_HELI_MISSION( 0, l_U1581._fU0, 0, 0, 0.00000000, 0.00000000, 0.00000000, 4, 20.00000000, 0, -1, 60, 55 );
                        CLOSE_SEQUENCE_TASK( l_U1596[0]._fU48 );
                        TASK_PERFORM_SEQUENCE( l_U1596[0]._fU0, l_U1596[0]._fU48 );
                        CLEAR_SEQUENCE_TASK( l_U1596[0]._fU48 );
                        SET_CHAR_KEEP_TASK( l_U1596[0]._fU0, 1 );
                        l_U2106 = 1;
                        if (DOES_BLIP_EXIST( l_U1581._fU8 ))
                        {
                            REMOVE_BLIP( l_U1581._fU8 );
                        }
                        GET_GAME_TIMER( ref l_U2160 );
                        g_U10956 = 0;
                        sub_28981();
                        SET_CAR_GENERATORS_ACTIVE_IN_AREA( 369.46640000, 1547.84900000, 30.00000000, 387.45900000, 1524.52100000, -10.00000000, 0 );
                    }
                }
            }
            break;
        }
        if ((l_U516 == 5) || (l_U516 == 4))
        {
            if ((IS_CHAR_INJURED( l_U1596[1]._fU0 )) AND (IS_CHAR_INJURED( l_U1596[2]._fU0 )))
            {
                sub_29222( 2219.72000000, 366.59000000, 40.00000000 );
            }
        }
    }
    sub_29449();
    return;
}

void sub_28132(int iParam0, int iParam1)
{
    if (IS_VEH_DRIVEABLE( l_U1581._fU0 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U1596[0]._fU0 )))
        {
            TASK_FLUSH_ROUTE();
            TASK_EXTEND_ROUTE( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8 );
            TASK_EXTEND_ROUTE( iParam1->_fU0, iParam1->_fU4, iParam1->_fU8 );
            CLEAR_CHAR_TASKS( l_U1596[0]._fU0 );
            OPEN_SEQUENCE_TASK( ref l_U1596[0]._fU48 );
            TASK_HELI_MISSION( 0, l_U1581._fU0, 0, 0, iParam1->_fU0, iParam1->_fU4, iParam1->_fU8, 4, 10.00000000, 2, -1, 25, 18 );
            CLOSE_SEQUENCE_TASK( l_U1596[0]._fU48 );
            TASK_PERFORM_SEQUENCE( l_U1596[0]._fU0, l_U1596[0]._fU48 );
            CLEAR_SEQUENCE_TASK( l_U1596[0]._fU48 );
        }
    }
    return;
}

void sub_28981()
{
    if ((NOT (IS_WANTED_LEVEL_GREATER( sub_4409(), 0 ))) AND (g_U11004))
    {
        if (NOT (DOES_BLIP_EXIST( l_U2273 )))
        {
            ADD_BLIP_FOR_COORD( l_U2196._fU0, l_U2196._fU4, l_U2196._fU8, ref l_U2273 );
            SET_ROUTE( l_U2273, 1 );
            l_U2126 = 0;
            GET_GAME_TIMER( ref l_U2143 );
        }
    }
    return;
}

void sub_29222(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_INJURED( l_U1596[0]._fU0 )))
    {
        if (IS_VEH_DRIVEABLE( l_U1581._fU0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1581._fU0 ))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U1581._fU0 );
            }
            OPEN_SEQUENCE_TASK( ref l_U1596[0]._fU48 );
            TASK_HELI_MISSION( 0, l_U1581._fU0, 0, 0, uParam0._fU0, uParam0._fU4, uParam0._fU8, 4, 20.00000000, 2, -1, 60, 55 );
            CLOSE_SEQUENCE_TASK( l_U1596[0]._fU48 );
            TASK_PERFORM_SEQUENCE( l_U1596[0]._fU0, l_U1596[0]._fU48 );
            CLEAR_SEQUENCE_TASK( l_U1596[0]._fU48 );
            l_U524 = 3;
        }
    }
    return;
}

void sub_29449()
{
    if (NOT l_U2105)
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U1581._fU0 )))
        {
            sub_29489();
            GET_DEAD_CAR_COORDINATES( l_U1581._fU0, ref l_U1581._fU12._fU0, ref l_U1581._fU12._fU4, ref l_U1581._fU12._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( l_U1581._fU12._fU0, l_U1581._fU12._fU4, l_U1581._fU12._fU8, ref l_U2182 );
            if (((l_U1581._fU12._fU8 - l_U2182) < 1.00000000) || (sub_14495( ref l_U2162, 7000 )))
            {
                sub_29650();
            }
        }
        else if ((IS_CHAR_INJURED( l_U1596[0]._fU0 )) || (NOT (IS_CHAR_SITTING_IN_CAR( l_U1596[0]._fU0, l_U1581._fU0 ))))
        {
            sub_29489();
            GET_CAR_COORDINATES( l_U1581._fU0, ref l_U1581._fU12._fU0, ref l_U1581._fU12._fU4, ref l_U1581._fU12._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( l_U1581._fU12._fU0, l_U1581._fU12._fU4, l_U1581._fU12._fU8, ref l_U2182 );
            if (((l_U1581._fU12._fU8 - l_U2182) < 1.00000000) || (sub_14495( ref l_U2162, 7000 )))
            {
                sub_29650();
            }
        }
    }
    return;
}

void sub_29489()
{
    if (NOT l_U2137)
    {
        GET_GAME_TIMER( ref l_U2162 );
        l_U2137 = 1;
    }
    return;
}

void sub_29650()
{
    EXPLODE_CAR( l_U1581._fU0, 1, 0 );
    for ( l_U2142 = 0; l_U2142 <= (l_U1596 - 1); l_U2142++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1596[l_U2142]._fU0 )))
        {
            SET_CHAR_HEALTH( l_U1596[l_U2142]._fU0, 2 );
        }
    }
    if (DOES_BLIP_EXIST( l_U1581._fU8 ))
    {
        REMOVE_BLIP( l_U1581._fU8 );
    }
    sub_28981();
    g_U10956 = 0;
    l_U2106 = 1;
    l_U2105 = 1;
    GET_GAME_TIMER( ref l_U2160 );
    return;
}

void sub_30035()
{
    int iVar2;

    switch (l_U522)
    {
        case 0:
        if (sub_14495( ref l_U2154, 15000 ))
        {
            for ( l_U2142 = 0; l_U2142 <= (g_U11081 - 1); l_U2142++ )
            {
                if (DOES_CHAR_EXIST( g_U11081[l_U2142] ))
                {
                    if (NOT (IS_CHAR_INJURED( g_U11081[l_U2142] )))
                    {
                        REMOVE_CHAR_DEFENSIVE_AREA( g_U11081[l_U2142] );
                        sub_30222( ref g_U11081[l_U2142], ref l_U2236[l_U2142], ref l_U2278[l_U2142] );
                    }
                }
            }
            l_U522 = 1;
        }
        break;
        case 1:
        for ( l_U2142 = 0; l_U2142 <= (g_U11081 - 1); l_U2142++ )
        {
            if (NOT l_U2094[l_U2142])
            {
                if (DOES_CHAR_EXIST( g_U11081[l_U2142] ))
                {
                    if (NOT (IS_CHAR_INJURED( g_U11081[l_U2142] )))
                    {
                        GET_SCRIPT_TASK_STATUS( g_U11081[l_U2142], 29, ref l_U2281[l_U2142] );
                        if (l_U2281[l_U2142] == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[l_U2142], 0 );
                            iVar2++;
                            l_U2094[l_U2142] = 1;
                        }
                    }
                    else
                    {
                        iVar2++;
                        l_U2094[l_U2142] = 1;
                    }
                }
                else
                {
                    iVar2++;
                    l_U2094[l_U2142] = 1;
                }
            }
            else
            {
                iVar2++;
                l_U2094[l_U2142] = 1;
            }
        }
        if (iVar2 == g_U11081)
        {
            l_U522 = 2;
        }
        break;
        case 2: break;
    }
    return;
}

void sub_30222(unknown uParam0, int iParam1, unknown uParam2)
{
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 1 );
    OPEN_SEQUENCE_TASK( uParam2 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, iParam1->_fU0, iParam1->_fU4, iParam1->_fU8, 3, -1, 1.00000000 );
    CLOSE_SEQUENCE_TASK( (uParam2^) );
    TASK_PERFORM_SEQUENCE( (uParam0^), (uParam2^) );
    CLEAR_SEQUENCE_TASK( (uParam2^) );
    return;
}

void sub_30656()
{
    switch (l_U521)
    {
        case 0:
        if (sub_14495( ref l_U2143, 7000 ))
        {
            if (IS_VEH_DRIVEABLE( l_U998[2]._fU0 ))
            {
                if (LOCATE_CAR_3D( l_U998[2]._fU0, 2355.53200000, 406.91000000, 4.93820000, 1.70000000, 2.80000000, 4.00000000, 0 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U528._fU48 );
                    TASK_SEEK_COVER_TO_COORDS( 0, 2357.24800000, 405.47110000, 5.08020000, 2350.95000000, 408.74000000, 7.93000000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U528._fU48 );
                    TASK_PERFORM_SEQUENCE( l_U528._fU0, l_U528._fU48 );
                    CLEAR_SEQUENCE_TASK( l_U528._fU48 );
                    if (l_U2090)
                    {
                        l_U2090 = 0;
                    }
                    l_U521 = 1;
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref l_U528._fU48 );
                    TASK_SEEK_COVER_TO_COORDS( 0, 2358.48500000, 407.04610000, 5.08020000, 2350.95000000, 408.74000000, 7.93000000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U528._fU48 );
                    TASK_PERFORM_SEQUENCE( l_U528._fU0, l_U528._fU48 );
                    CLEAR_SEQUENCE_TASK( l_U528._fU48 );
                    l_U521 = 1;
                }
            }
            else
            {
                OPEN_SEQUENCE_TASK( ref l_U528._fU48 );
                TASK_SEEK_COVER_TO_COORDS( 0, 2358.48500000, 407.04610000, 5.08020000, 2350.95000000, 408.74000000, 7.93000000, 0 );
                CLOSE_SEQUENCE_TASK( l_U528._fU48 );
                TASK_PERFORM_SEQUENCE( l_U528._fU0, l_U528._fU48 );
                CLEAR_SEQUENCE_TASK( l_U528._fU48 );
                l_U521 = 1;
            }
        }
        break;
        case 1:
        if (NOT (IS_PED_IN_COVER( l_U528._fU0 )))
        {
            if (sub_31189( l_U528._fU0, 29 ))
            {
                l_U521 = 0;
            }
        }
        else if (NOT l_U2090)
        {
            if (IS_VEH_DRIVEABLE( l_U998[2]._fU0 ))
            {
                if (NOT (LOCATE_CAR_3D( l_U998[2]._fU0, 2355.53200000, 406.91000000, 4.93820000, 1.70000000, 2.80000000, 4.00000000, 0 )))
                {
                    l_U2090 = 1;
                    l_U521 = 0;
                }
            }
        }
        break;
    }
    return;
}

int sub_31189(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_31360()
{
    switch (l_U525)
    {
        case 0:
        if (l_U2107)
        {
            if (sub_14495( ref l_U2157, 7000 ))
            {
                if (sub_31470( "E1E2_MARTA", ref l_U2291[1], 8, 1 ))
                {
                    l_U525 = 1;
                }
            }
        }
        break;
        case 1:
        if (sub_14495( ref l_U2157, 10000 ))
        {
            if (NOT (sub_32472( l_U2291[1] )))
            {
                if (sub_31470( "E1E2_TALKS", ref l_U2291[1], 8, 1 ))
                {
                    GET_GAME_TIMER( ref l_U2157 );
                    l_U525 = 2;
                }
            }
        }
        break;
        case 2:
        if (NOT l_U2106)
        {
            if (sub_14495( ref l_U2157, 10000 ))
            {
                if (sub_31470( "E1E2_MARTA", ref l_U2291[1], 8, 1 ))
                {
                    GET_GAME_TIMER( ref l_U2157 );
                    l_U525 = 3;
                }
            }
        }
        else
        {
            l_U525 = 3;
        }
        break;
        case 3:
        if (sub_14495( ref l_U2157, 10000 ))
        {
            if (NOT (sub_32472( l_U2291[1] )))
            {
                if (sub_31470( "E1E2_CHAT3", ref l_U2291[1], 8, 1 ))
                {
                    GET_GAME_TIMER( ref l_U2157 );
                    l_U525 = 4;
                }
            }
        }
        break;
        case 4:
        if (sub_14495( ref l_U2157, 10000 ))
        {
            if (NOT (sub_32472( l_U2291[1] )))
            {
                if (sub_31470( "E1E2_CHAT4", ref l_U2291[1], 8, 1 ))
                {
                    GET_GAME_TIMER( ref l_U2157 );
                    l_U525 = 1;
                }
            }
        }
        break;
    }
    return;
}

void sub_31470(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_31491( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_31491(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_31545( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_31545(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_31567( iParam1 )))
    {
        return 0;
    }
    l_U6._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_32255( ref g_U8947, ref l_U6 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_31567(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_31644( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_31644( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_31644( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_31644(unknown uParam0)
{
    return;
}

void sub_32255(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

int sub_32472(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_31644( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_31644( "\n speech is not playing" );
    }
    return 0;
}

void sub_33138(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    sub_33154( uParam0, ref l_U2276, 1 );
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_COORDINATES( (uParam0^), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( (uParam0^), uVar4, 3.00000000 );
            SET_SENSE_RANGE( (uParam0^), 250.00000000 );
            SET_CHAR_IS_TARGET_PRIORITY( (uParam0^), 1 );
            SET_CHAR_AS_ENEMY( (uParam0^), 1 );
        }
    }
    return;
}

void sub_33154(unknown uParam0, unknown uParam1, boolean bParam2)
{
    SET_RELATIONSHIP( 5, 0, 23 );
    SET_RELATIONSHIP( 5, 23, 0 );
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 23 );
            SET_CHAR_WILL_USE_COVER( (uParam0^), 1 );
            SET_CHAR_IS_TARGET_PRIORITY( (uParam0^), 1 );
            SET_CHAR_AS_ENEMY( (uParam0^), 1 );
            SET_SENSE_RANGE( (uParam0^), 250.00000000 );
            if (bParam2)
            {
                SET_CHAR_KEEP_TASK( (uParam0^), 1 );
            }
        }
    }
    return;
}

int sub_35328(unknown uParam0, unknown uParam1)
{
    if (sub_14495( uParam1, 3000 ))
    {
        SOUND_CAR_HORN( l_U998[l_U2142]._fU0, 5500 );
        l_U2151++;
        return 1;
    }
    return 0;
}

void sub_35733()
{
    if (NOT l_U2103)
    {
        if (IS_VEH_DRIVEABLE( l_U546[0]._fU144._fU0 ))
        {
            GET_CAR_HEALTH( l_U546[0]._fU144._fU0, ref l_U546[0]._fU144._fU36 );
            if (l_U546[0]._fU144._fU36 < 800)
            {
                EXPLODE_CAR( l_U546[0]._fU144._fU0, 1, 0 );
                l_U2103 = 1;
            }
        }
    }
    if (NOT l_U2100[0])
    {
        if (IS_VEH_DRIVEABLE( l_U608[1]._fU0 ))
        {
            GET_CAR_HEALTH( l_U608[1]._fU0, ref l_U608[1]._fU36 );
            if (l_U608[1]._fU36 < 600)
            {
                EXPLODE_CAR( l_U608[1]._fU0, 1, 0 );
                l_U2100[0] = 1;
            }
        }
    }
    if (NOT l_U2100[1])
    {
        if (IS_VEH_DRIVEABLE( l_U608[3]._fU0 ))
        {
            GET_CAR_HEALTH( l_U608[3]._fU0, ref l_U608[3]._fU36 );
            if (l_U608[3]._fU36 < 600)
            {
                EXPLODE_CAR( l_U608[3]._fU0, 1, 0 );
                l_U2100[1] = 1;
            }
        }
    }
    return;
}

int sub_36117(unknown uParam0)
{
    int I;
    int iVar4;

    iVar4 = 0;
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[I]._fU0._fU0 ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[I]._fU0._fU0 ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I]._fU0._fU0 );
                if (DOES_BLIP_EXIST( (uParam0^)[I]._fU0._fU8 ))
                {
                    REMOVE_BLIP( (uParam0^)[I]._fU0._fU8 );
                }
                iVar4++;
            }
        }
        else
        {
            iVar4++;
        }
        if (DOES_CHAR_EXIST( (uParam0^)[I]._fU72._fU0 ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[I]._fU72._fU0 ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I]._fU72._fU0 );
                if (DOES_BLIP_EXIST( (uParam0^)[I]._fU72._fU8 ))
                {
                    REMOVE_BLIP( (uParam0^)[I]._fU72._fU8 );
                }
                iVar4++;
            }
        }
        else
        {
            iVar4++;
        }
    }
    if (iVar4 == ((uParam0^) * 2))
    {
        return 1;
    }
    return 0;
}

int sub_36459(unknown uParam0, boolean bParam1)
{
    int I;
    int iVar5;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[I]._fU0 ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
            {
                if (bParam1)
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I]._fU0 );
                }
                if (DOES_BLIP_EXIST( (uParam0^)[I]._fU8 ))
                {
                    REMOVE_BLIP( (uParam0^)[I]._fU8 );
                }
                iVar5++;
            }
        }
        else
        {
            iVar5++;
        }
    }
    if (iVar5 == (uParam0^))
    {
        return 1;
    }
    return 0;
}

void sub_36989()
{
    sub_27941();
    if ((sub_4646( ref l_U528._fU0 )) < 9)
    {
        g_U8764 = 1;
        g_U10956 = 1;
        l_U524 = 1;
        sub_37040();
    }
    else if (NOT l_U2086)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "GOD_9", 7500, 1 );
        ADD_BLIP_FOR_CHAR( l_U528._fU0, ref l_U528._fU8 );
        SET_BLIP_AS_FRIENDLY( l_U528._fU8, 1 );
        l_U2086 = 1;
    }
    return;
}

void sub_37040()
{
    if (DOES_BLIP_EXIST( l_U528._fU8 ))
    {
        REMOVE_BLIP( l_U528._fU8 );
    }
    DONT_SUPPRESS_ANY_PED_MODELS();
    DONT_SUPPRESS_ANY_CAR_MODELS();
    SET_CREATE_RANDOM_COPS( 1 );
    sub_37120( ref l_U528._fU0, ref l_U2274, ref l_U2275, 0, 1 );
    if (NOT l_U2076)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 2317.70000000, 474.24000000, 100.00000000, 2386.32000000, 280.83000000, -100.00000000 );
        l_U2076 = 1;
    }
    sub_37561();
    for ( l_U2142 = 0; l_U2142 <= (g_U11081 - 1); l_U2142++ )
    {
        if (DOES_CHAR_EXIST( g_U11081[l_U2142] ))
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[l_U2142] )))
            {
                CLEAR_CHAR_TASKS( g_U11081[l_U2142] );
            }
        }
    }
    sub_20126( 0 );
    GET_GAME_TIMER( ref l_U2155 );
    SET_PED_IS_BLIND_RAGING( sub_3405(), 0 );
    SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
    sub_38738();
    sub_31470( "E1E2_TRANS", ref l_U2291[0], 1, 1 );
    l_U516 = 6;
    return;
}

void sub_37120(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, boolean bParam4)
{
    switch (uParam3)
    {
        case 0:
        CLEAR_CHAR_TASKS( (uParam0^) );
        if (bParam4)
        {
            if (DOES_GROUP_EXIST( (uParam1^) ))
            {
                REMOVE_GROUP( (uParam1^) );
            }
        }
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
        if (DOES_DECISION_MAKER_EXIST( (uParam2^) ))
        {
            REMOVE_DECISION_MAKER( (uParam2^) );
        }
        if (sub_37250( uParam0, uParam1 ))
        {
            COPY_GROUP_CHAR_DECISION_MAKER( 65537, uParam2 );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam0^), (uParam2^) );
        }
        break;
        case 1:
        CLEAR_CHAR_TASKS( (uParam0^) );
        if (DOES_GROUP_EXIST( (uParam1^) ))
        {
            REMOVE_GROUP( (uParam1^) );
        }
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
        if (DOES_DECISION_MAKER_EXIST( (uParam2^) ))
        {
            REMOVE_DECISION_MAKER( (uParam2^) );
        }
        if (sub_37250( uParam0, uParam1 ))
        {
            COPY_GROUP_CHAR_DECISION_MAKER( 65536, uParam2 );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam0^), (uParam2^) );
        }
        break;
    }
    return;
}

int sub_37250(unknown uParam0, unknown uParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_PLAYER_GROUP( sub_4409(), uParam1 );
            SET_GROUP_MEMBER( (uParam1^), (uParam0^) );
            return 1;
        }
    }
    return 0;
}

void sub_37561()
{
    int iVar2;

    iVar2 = 5000;
    if (NOT l_U2108)
    {
        if (IS_VEH_DRIVEABLE( l_U1581._fU0 ))
        {
            BEGIN_CAM_COMMANDS( ref l_U2144 );
            CREATE_CAM( 14, ref l_U2290 );
            ATTACH_CAM_TO_VEHICLE( l_U2290, l_U1581._fU0 );
            SET_CAM_ATTACH_OFFSET( l_U2290, l_U2257._fU0, l_U2257._fU4, l_U2257._fU8 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2290, 1 );
            POINT_CAM_AT_PED( l_U2290, sub_3405() );
            SET_CAM_ACTIVE( l_U2290, 1 );
            SET_CAM_PROPAGATE( l_U2290, 0 );
            l_U2109 = 0;
            l_U2108 = 1;
        }
    }
    else if (IS_VEH_DRIVEABLE( l_U1581._fU0 ))
    {
        if (NOT l_U2112)
        {
            if (sub_14495( ref l_U2155, 9500 ))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3405() ))
                {
                    GET_GAME_TIMER( ref l_U2155 );
                    PRINT_HELP( "GOD_11" );
                    l_U2112 = 1;
                }
            }
        }
        else if (NOT l_U2110)
        {
            if (sub_14495( ref l_U2155, 15000 ))
            {
                GET_GAME_TIMER( ref l_U2155 );
                PRINT_HELP( "GOD_11" );
                l_U2110 = 1;
            }
        }
    }
    else if (l_U2112)
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GOD_11" ))
        {
            CLEAR_HELP();
        }
        l_U2112 = 0;
    }
    if (((sub_37972( l_U1581._fU0 )) AND (NOT l_U2106)) AND (sub_38131( ref l_U1581._fU0, 250.00000000, 0 )))
    {
        if (NOT l_U2109)
        {
            SET_CAM_ACTIVE( l_U2290, 1 );
            SET_CAM_PROPAGATE( l_U2290, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U2109 = 1;
            l_U2110 = 1;
            SET_BLOCK_CAMERA_TOGGLE( 1 );
        }
    }
    else if (l_U2109)
    {
        SET_CAM_ACTIVE( l_U2290, 0 );
        SET_CAM_PROPAGATE( l_U2290, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_BLOCK_CAMERA_TOGGLE( 0 );
        if (NOT l_U2121)
        {
            if (l_U2106)
            {
                if (DOES_VEHICLE_EXIST( l_U1581._fU0 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1581._fU0 ))
                    {
                        if (NOT (IS_CAR_ON_SCREEN( l_U1581._fU0 )))
                        {
                            DELETE_CAR( ref l_U1581._fU0 );
                            l_U2121 = 1;
                        }
                    }
                }
            }
        }
        l_U2109 = 0;
    };;;
    return;
}

int sub_37972(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref uVar3 );
    if (IS_CONTROL_PRESSED( 0, 51 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3405() ))
            {
                if (NOT sub_38036())
                {
                    GET_INTERIOR_FROM_CHAR( sub_3405(), ref iVar4 );
                    if (iVar4 == nil)
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_38036()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_38131(unknown uParam0, float fParam1, boolean bParam2)
{
    vector vVar5;
    vector vVar8;
    float fVar11;

    vVar5 = {0.00000000, 0.00000000, 0.00000000};
    vVar8 = {0.00000000, 0.00000000, 0.00000000};
    fVar11 = 0.00000000;
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CHAR_COORDINATES( sub_3405(), ref vVar5.x, ref vVar5.y, ref vVar5.z );
            GET_CAR_COORDINATES( (uParam0^), ref vVar8.x, ref vVar8.y, ref vVar8.z );
            GET_DISTANCE_BETWEEN_COORDS_3D( vVar5.x, vVar5.y, vVar5.z, vVar8.x, vVar8.y, vVar8.z, ref fVar11 );
            if (bParam2)
            {
                if (fVar11 >= fParam1)
                {
                    return 1;
                }
            }
            else if (fVar11 < fParam1)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_38738()
{
    if (NOT l_U2136)
    {
        UNLOCK_RAGDOLL( l_U528._fU0, 1 );
        l_U2136 = 1;
    }
    return;
}

void sub_38925()
{
    if (NOT l_U2135)
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3405() ))
        {
            if (IS_CHAR_IN_TAXI( sub_3405() ))
            {
                RETUNE_RADIO_TO_STATION_NAME( "VLADIVOSTOK" );
                l_U2135 = 1;
            }
        }
    }
    sub_27941();
    sub_37561();
    if (NOT l_U2118)
    {
        sub_39027();
    }
    if (NOT l_U2082)
    {
        if (sub_39107( ref l_U528._fU0, ref l_U255, 0 ))
        {
            sub_16014( ref l_U528._fU8, ref l_U2273, ref l_U2196, "god_3", "god_8", ref l_U2048, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U2125, ref l_U2126, 1, 0 );
            GET_GAME_TIMER( ref l_U2161 );
            sub_16913();
            l_U2082 = 1;
        }
    }
    else if (NOT l_U2134)
    {
        if (IS_WANTED_LEVEL_GREATER( sub_4409(), 0 ))
        {
            if (sub_14495( ref l_U2161, 7700 ))
            {
                sub_31470( "E1E2_LOSE", ref l_U2291[0], 8, 1 );
                l_U2134 = 1;
            }
        }
    }
    if (NOT l_U2106)
    {
        if (NOT l_U2123)
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_4409(), 0 )))
            {
                ADD_BLIP_FOR_CAR( l_U1581._fU0, ref l_U1581._fU8 );
                CHANGE_BLIP_SPRITE( l_U1581._fU8, 73 );
                CHANGE_BLIP_SCALE( l_U1581._fU8, 0.80000000 );
                CHANGE_BLIP_DISPLAY( l_U1581._fU8, 2 );
                CHANGE_BLIP_COLOUR( l_U1581._fU8, 32 );
                GET_GAME_TIMER( ref l_U2158 );
                l_U2124 = 0;
                l_U2123 = 1;
            }
        }
        else if (sub_14495( ref l_U2158, 500 ))
        {
            if (l_U2124)
            {
                CHANGE_BLIP_COLOUR( l_U1581._fU8, 32 );
                l_U2124 = 0;
            }
            else
            {
                CHANGE_BLIP_COLOUR( l_U1581._fU8, 34 );
                l_U2124 = 1;
            }
            GET_GAME_TIMER( ref l_U2158 );
        }
        if (IS_WANTED_LEVEL_GREATER( sub_4409(), 0 ))
        {
            if (DOES_BLIP_EXIST( l_U1581._fU8 ))
            {
                REMOVE_BLIP( l_U1581._fU8 );
            }
            l_U2123 = 0;
        }
    }
    sub_16014( ref l_U528._fU8, ref l_U2273, ref l_U2196, "god_3", "god_1", ref l_U2048, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U2125, ref l_U2126, 1, 0 );
    if (NOT l_U2048)
    {
        if (NOT l_U2125)
        {
            if (NOT l_U2132)
            {
                PRINT_NOW( "god_3", 7500, 1 );
                GET_GAME_TIMER( ref l_U2160 );
                l_U2132 = 1;
            }
        }
    }
    if (NOT l_U2048)
    {
        sub_42419( ref l_U528._fU0, ref l_U528._fU8, ref l_U2196, ref l_U2273, "god_2", "god_3", 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U2274, ref l_U2275, 0 );
    }
    else
    {
        GET_GAME_TIMER( ref l_U2160 );
        PRINTSTRING( "time" );
        PRINTNL();
        sub_42762( ref l_U528._fU0, ref l_U528._fU8, "god_2", ref l_U2274, ref l_U2275, ref l_U2127 );
    }
    if (DOES_BLIP_EXIST( l_U2273 ))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3405(), l_U2196._fU0, l_U2196._fU4, l_U2196._fU8, 3.50000000, 3.50000000, 3.50000000, 1 ))
        {
            if (sub_43015())
            {
                sub_17223( ref l_U255 );
                sub_43163( ref l_U528._fU0, ref l_U255 );
                if ((sub_43619( ref l_U255 )) AND (NOT (sub_43689( ref l_U255 ))))
                {
                    TASK_CAR_TEMP_ACTION( sub_3405(), l_U255, 6, 100 );
                    l_U2049 = 1;
                    GET_GAME_TIMER( ref l_U2143 );
                    l_U518 = 0;
                }
                else
                {
                    sub_43803();
                }
                l_U516 = 7;
            }
        }
    }
    if (NOT l_U2043[1])
    {
        if (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            SET_CHAR_HEADING( sub_3405(), 140.59000000 );
            SET_CHAR_COORDINATES( sub_3405(), 383.14880000, 1520.30200000, 15.92020000 );
            LOAD_SCENE( 383.14880000, 1520.30200000, 15.92020000 );
            l_U2043[1] = 1;
        }
    }
    return;
}

void sub_39027()
{
    switch (l_U526)
    {
        case 0:
        if ((sub_39107( ref l_U528._fU0, ref l_U255, 1 )) AND (l_U2106))
        {
            if (NOT l_U2141)
            {
                if (sub_14495( ref l_U2160, 7500 ))
                {
                    sub_31470( "E1E2_WHERE", ref l_U2291[0], 8, 1 );
                    l_U2141 = 1;
                }
            }
            else
            {
                switch (g_U39202)
                {
                    case 0:
                    if (NOT (sub_32472( l_U2291[0] )))
                    {
                        if (sub_14495( ref l_U2160, 7500 ))
                        {
                            if (sub_31470( "E1E2_B1V1", ref l_U2291[1], 8, 1 ))
                            {
                                l_U526 = 1;
                            }
                        }
                    }
                    break;
                    case 1:
                    if (sub_14495( ref l_U2143, 7500 ))
                    {
                        if (sub_31470( "E1E2_B1V2", ref l_U2291[1], 8, 1 ))
                        {
                            l_U526 = 1;
                        }
                    }
                    break;
                    case 2: break;
                }
            }
        }
        break;
        case 1:
        switch (g_U39202)
        {
            case 0:
            if (sub_39107( ref l_U528._fU0, ref l_U255, 1 ))
            {
                if (l_U2119)
                {
                    sub_39672( "E1E2_B1V1", ref l_U2291[1], 8, 1 );
                    l_U2119 = 0;
                }
                if (NOT (sub_32472( l_U2291[1] )))
                {
                    l_U526 = 2;
                }
            }
            else if (NOT l_U2119)
            {
                sub_39838( ref l_U2291[1] );
                l_U2119 = 1;
            }
            break;
            case 1:
            if (sub_39107( ref l_U528._fU0, ref l_U255, 1 ))
            {
                if (l_U2119)
                {
                    sub_39672( "E1E2_B1V2", ref l_U2291[1], 8, 1 );
                    l_U2119 = 0;
                }
                if (NOT (sub_32472( l_U2291[1] )))
                {
                    l_U526 = 2;
                }
            }
            else if (NOT l_U2119)
            {
                sub_39838( ref l_U2291[1] );
                l_U2119 = 1;
            }
            break;
            case 2: break;
        }
        break;
        case 2:
        if (sub_39107( ref l_U528._fU0, ref l_U255, 1 ))
        {
            switch (g_U39202)
            {
                case 0:
                if (sub_14495( ref l_U2143, 2000 ))
                {
                    if (sub_31470( "E1E2_B2V1", ref l_U2291[1], 8, 1 ))
                    {
                        l_U526 = 3;
                    }
                }
                break;
                case 1:
                if (sub_14495( ref l_U2143, 7500 ))
                {
                    if (sub_31470( "E1E2_B2V2", ref l_U2291[1], 8, 1 ))
                    {
                        l_U526 = 3;
                    }
                }
                break;
                case 2: break;
            }
        }
        break;
        case 3:
        switch (g_U39202)
        {
            case 0:
            if (sub_39107( ref l_U528._fU0, ref l_U255, 1 ))
            {
                if (l_U2119)
                {
                    sub_39672( "E1E2_B2V1", ref l_U2291[1], 8, 1 );
                    l_U2119 = 0;
                }
                if (NOT (sub_32472( l_U2291[1] )))
                {
                    l_U526 = 4;
                }
            }
            else if (NOT l_U2119)
            {
                sub_39838( ref l_U2291[1] );
                l_U2119 = 1;
            }
            break;
            case 1:
            if (sub_39107( ref l_U528._fU0, ref l_U255, 1 ))
            {
                if (l_U2119)
                {
                    sub_39672( "E1E2_B2V2", ref l_U2291[1], 8, 1 );
                    l_U2119 = 0;
                }
                if (NOT (sub_32472( l_U2291[1] )))
                {
                    l_U526 = 4;
                }
            }
            else if (NOT l_U2119)
            {
                sub_39838( ref l_U2291[1] );
                l_U2119 = 1;
            }
            break;
            case 2: break;
        }
        break;
        case 4:
        if (sub_39107( ref l_U528._fU0, ref l_U255, 1 ))
        {
            switch (g_U39202)
            {
                case 0:
                if (sub_14495( ref l_U2143, 7500 ))
                {
                    if (sub_31470( "E1E2_B3V1", ref l_U2291[1], 8, 1 ))
                    {
                        l_U526 = 5;
                    }
                }
                break;
                case 1:
                if (sub_14495( ref l_U2143, 7500 ))
                {
                    if (sub_31470( "E1E2_B3V3", ref l_U2291[1], 8, 1 ))
                    {
                        l_U526 = 5;
                    }
                }
                break;
                case 2: break;
            }
        }
        break;
        case 5:
        switch (g_U39202)
        {
            case 0:
            if (sub_39107( ref l_U528._fU0, ref l_U255, 1 ))
            {
                if (l_U2119)
                {
                    sub_39672( "E1E2_B3V1", ref l_U2291[1], 8, 1 );
                    l_U2119 = 0;
                }
                if (NOT (sub_32472( l_U2291[1] )))
                {
                    l_U2118 = 1;
                }
            }
            else if (NOT l_U2119)
            {
                sub_39838( ref l_U2291[1] );
                l_U2119 = 1;
            }
            break;
            case 1:
            if (sub_39107( ref l_U528._fU0, ref l_U255, 1 ))
            {
                if (l_U2119)
                {
                    sub_39672( "E1E2_B3V3", ref l_U2291[1], 8, 1 );
                    l_U2119 = 0;
                }
                if (NOT (sub_32472( l_U2291[1] )))
                {
                    l_U2118 = 1;
                }
            }
            else if (NOT l_U2119)
            {
                sub_39838( ref l_U2291[1] );
                l_U2119 = 1;
            }
            break;
            case 2: break;
        }
        break;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_4409(), 0 ))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U528._fU0 ))
        {
            if (NOT l_U2130)
            {
                STOP_PED_SPEAKING( l_U528._fU0, 0 );
                l_U2130 = 1;
            }
            sub_41532( ref l_U528._fU0, ref l_U2159, "LOSE_WANTED_LEVEL", "POLICE_PURSUIT", ref l_U2129, 15000 );
        }
    }
    else if (l_U2130)
    {
        STOP_PED_SPEAKING( l_U528._fU0, 1 );
        l_U2130 = 0;
    }
    return;
}

int sub_39107(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            if (bParam2)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_4409(), 0 ))
                {
                    GET_GAME_TIMER( ref l_U130 );
                    return 0;
                }
                if (NOT (sub_14495( ref l_U130, 3000 )))
                {
                    return 0;
                }
            }
            if ((IS_CHAR_ON_FOOT( (uParam0^) )) AND (IS_CHAR_ON_FOOT( sub_3405() )))
            {
                return 1;
            }
            if (DOES_VEHICLE_EXIST( (uParam1^) ))
            {
                if (IS_VEH_DRIVEABLE( (uParam1^) ))
                {
                    if ((IS_CHAR_SITTING_IN_CAR( (uParam0^), (uParam1^) )) AND (IS_CHAR_SITTING_IN_CAR( sub_3405(), (uParam1^) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_39672(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_39693( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

int sub_39693(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_31545( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_39838(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_31644( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (iParam0->_fU4 == g_U8945)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_31644( "\n CONVERSATION PAUSED AT LINE " );
            sub_39994( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_31644( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_31644( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_31644( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_39994(unknown uParam0)
{
    return;
}

void sub_41532(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (sub_14495( uParam1, uParam5 ))
    {
        if ((sub_4646( uParam0 )) < 15)
        {
            if (NOT (uParam4^))
            {
                SAY_AMBIENT_SPEECH( (uParam0^), uParam2, 1, 0, 2 );
                GET_GAME_TIMER( uParam1 );
                (uParam4^) = 1;
            }
            else
            {
                SAY_AMBIENT_SPEECH( (uParam0^), uParam3, 1, 0, 2 );
                GET_GAME_TIMER( uParam1 );
                (uParam4^) = 0;
            }
        }
    }
    return;
}

void sub_42419(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, boolean bParam13)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (DOES_BLIP_EXIST( (uParam3^) ))
        {
            if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
            {
                REMOVE_BLIP( (uParam3^) );
                ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
                SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
                CLEAR_PRINTS();
                PRINT( uParam4, 7500, 1 );
            }
        }
        else if ((sub_4646( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
                sub_37120( uParam0, uParam11, uParam12, 0, 1 );
                ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam3 );
                SET_ROUTE( (uParam3^), 1 );
                if (bParam13)
                {
                    SET_BLIP_AS_FRIENDLY( (uParam3^), 1 );
                }
                if (bParam6)
                {
                    sub_16249( uParam3, uParam7, uParam10 );
                }
                CLEAR_PRINTS();
                PRINT( uParam5, 7500, 1 );
            }
        }
    }
    return;
}

void sub_42762(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CLEAR_PRINTS();
            if (NOT (uParam5^))
            {
                PRINT_NOW( uParam2, 7500, 1 );
                (uParam5^) = 1;
            }
        }
    }
    else if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
    {
        if ((sub_4646( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
            }
            sub_37120( uParam0, uParam3, uParam4, 0, 1 );
        }
    }
    return;
}

int sub_43015()
{
    if (sub_16462( 1, 1 ))
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        sub_3139( 0 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        SET_PLAYER_CONTROL( sub_4409(), 0 );
        CLEAR_CHAR_TASKS( sub_3405() );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3405(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

void sub_43163(unknown uParam0, unknown uParam1)
{
    sub_43181( 1, 1 );
    sub_43250( uParam0 );
    sub_43349( 1, ref l_U241, 1, 1 );
    sub_43457( uParam1 );
    return;
    break;
    2;
    1;
    ref l_U127;
    2;
    1;
    ref l_U240;
    2;
    1;
    ref l_U241;
    1;
    ref l_U240;
    1;
    1;
    ref l_U127;
    uParam1;
    2;
    1;
    ref l_U126;
    ref l_U126;
    uParam0;
    break;
}

void sub_43181(unknown uParam0, unknown uParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), uParam1 );
        }
    }
    return;
}

void sub_43250(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_HEALTH( (uParam0^), 200 );
            SET_CHAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

void sub_43349(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CAR_HEALTH( (uParam0^), uParam1 );
            (uParam2^) = GET_ENGINE_HEALTH( (uParam0^) );
            (uParam3^) = GET_PETROL_TANK_HEALTH( (uParam0^) );
        }
    }
    return;
}

void sub_43457(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U127) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            if (ProtectedGet(l_U240) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            if (ProtectedGet(l_U241) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            SET_CAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

int sub_43619(unknown uParam0)
{
    if (sub_5104( uParam0 ))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( (uParam0^) )))
        {
            SET_CAR_AS_MISSION_CAR( (uParam0^) );
            l_U120 = 1;
        }
        return 1;
    }
    return 0;
}

int sub_43689(unknown uParam0)
{
    int iVar3;

    if (sub_5104( uParam0 ))
    {
        GET_CAR_MODEL( (uParam0^), ref iVar3 );
        if (iVar3 == 1491375716)
        {
            return 1;
        }
    }
    return 0;
}

void sub_43803()
{
    if (DOES_BLIP_EXIST( l_U2273 ))
    {
        REMOVE_BLIP( l_U2273 );
    }
    STOP_PED_SPEAKING( l_U528._fU0, 1 );
    REMOVE_CHAR_FROM_GROUP( l_U528._fU0 );
    CLEAR_AREA( l_U2196._fU0, l_U2196._fU4, l_U2196._fU8, 100.00000000, 1 );
    BEGIN_CAM_COMMANDS( ref l_U2144 );
    CREATE_CAM( 3, ref l_U2289 );
    CREATE_CAM( 14, ref l_U2285 );
    CREATE_CAM( 14, ref l_U2286 );
    CREATE_CAM( 14, ref l_U2287 );
    CREATE_CAM( 14, ref l_U2288 );
    SET_CAM_POS( l_U2285, 376.87500000, 1531.63700000, 16.24388000 );
    SET_CAM_ROT( l_U2285, 0.63560000, 1.66857500, -41.66043000 );
    SET_CAM_FOV( l_U2285, 35.10003000 );
    SET_CAM_POS( l_U2286, 376.87500000, 1531.63700000, 16.24388000 );
    SET_CAM_ROT( l_U2286, 0.63560000, 1.66857500, -41.66043000 );
    SET_CAM_FOV( l_U2286, 33.50003000 );
    SET_CAM_POS( l_U2287, 381.17800000, 1540.06100000, 17.09390000 );
    SET_CAM_ROT( l_U2287, -5.15729300, -1.89727500, -60.58506000 );
    SET_CAM_FOV( l_U2287, 35.10003000 );
    if (l_U2049)
    {
        SET_CAR_COORDINATES( l_U255, l_U2196._fU0, l_U2196._fU4, l_U2196._fU8 );
        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U528._fU0, l_U255 )))
        {
            CLEAR_CHAR_TASKS( l_U528._fU0 );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U528._fU0, l_U255, 0 );
        }
    }
    else
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3405() );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U528._fU0 );
        CLEAR_AREA( l_U2199[1]._fU0, l_U2199[1]._fU4, l_U2199[1]._fU8, 15.00000000, 1 );
        sub_17515( ref l_U255, ref l_U2199[1], ref l_U2166[1], 10.00000000 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3405() );
        SET_CHAR_COORDINATES( sub_3405(), 382.43800000, 1541.54500000, 15.47560000 );
        SET_CHAR_HEADING( sub_3405(), 255.48210000 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3405(), 0.00000000, 1.00000000, 0.00000000, ref l_U2263._fU0, ref l_U2263._fU4, ref l_U2263._fU8 );
        REMOVE_CHAR_FROM_GROUP( l_U528._fU0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U528._fU0 );
        SET_CHAR_COORDINATES( l_U528._fU0, l_U2263._fU0, l_U2263._fU4, -101.00000000 );
        SET_CHAR_HEADING( l_U528._fU0, 75.48210000 );
    }
    TASK_LOOK_AT_CHAR( sub_3405(), l_U528._fU0, -2, 0 );
    TASK_LOOK_AT_CHAR( l_U528._fU0, sub_3405(), -2, 0 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U2289, l_U2285, l_U2286, 3000, 0 );
    SET_CAM_PROPAGATE( l_U2289, 1 );
    SET_CAM_ACTIVE( l_U2289, 1 );
    GET_GAME_TIMER( ref l_U2145 );
    GET_GAME_TIMER( ref l_U2143 );
    l_U2113[1] = 1;
    l_U518 = 1;
    return;
}

void sub_44851()
{
    if ((NOT l_U2083[1]) AND (l_U2113[1]))
    {
        if (sub_25910( ref l_U2145, 1000 ))
        {
            INCREMENT_INT_STAT( 372, 1 );
            l_U2083[1] = 1;
            l_U518 = 7;
        }
    }
    switch (l_U518)
    {
        case 0:
        if (sub_14495( ref l_U2143, 1000 ))
        {
            sub_43803();
        }
        break;
        case 1:
        if (NOT l_U2128)
        {
            if (sub_14495( ref l_U2143, 500 ))
            {
                sub_45080( "E1E2_HERE", 0, 1, ref l_U2291[0], 7, 1 );
                l_U2128 = 1;
            }
        }
        if ((l_U2128) AND (NOT (sub_32472( l_U2291[0] ))))
        {
            if (l_U2049)
            {
                SET_CAM_PROPAGATE( l_U2289, 0 );
                SET_CAM_ACTIVE( l_U2289, 0 );
                SET_CAM_PROPAGATE( l_U2285, 0 );
                SET_CAM_ACTIVE( l_U2285, 0 );
                SET_CAM_PROPAGATE( l_U2286, 0 );
                SET_CAM_ACTIVE( l_U2286, 0 );
                sub_45305();
                GET_CAR_MODEL( l_U255, ref l_U253 );
                GET_MODEL_DIMENSIONS( l_U253, ref l_U136, ref l_U139 );
                l_U142._fU0 = l_U136._fU0 / l_U145._fU0;
                l_U142._fU4 = l_U139._fU4 / l_U148._fU4;
                l_U142._fU8 = l_U139._fU8 / l_U148._fU8;
                PRINTSTRING( "scale_multiplier: " );
                PRINTVECTOR( l_U142 );
                PRINTNL();
                if (IS_BIG_VEHICLE( l_U255 ))
                {
                    l_U183._fU0 = (l_U151[1]._fU0 * l_U142._fU0) * 1.25000000;
                    l_U183._fU4 = (l_U151[1]._fU4 * l_U142._fU4) * 1.25000000;
                    l_U183._fU8 = (l_U151[1]._fU8 * l_U142._fU8) * 1.25000000;
                    l_U186._fU0 = l_U167[0]._fU0 * l_U142._fU0;
                    l_U186._fU4 = l_U167[0]._fU4 * l_U142._fU4;
                    l_U186._fU8 = l_U167[0]._fU8 * l_U142._fU8;
                }
                else if (sub_45893())
                {
                    l_U183._fU0 = (l_U151[1]._fU0 * l_U142._fU0) * 2.22000000;
                    l_U183._fU4 = (l_U151[1]._fU4 * l_U142._fU4) * 2.22000000;
                    l_U183._fU8 = (l_U151[1]._fU8 * l_U142._fU8) * 2.22000000;
                    l_U186._fU0 = l_U167[0]._fU0 * l_U142._fU0;
                    l_U186._fU4 = l_U167[0]._fU4 * l_U142._fU4;
                    l_U186._fU8 = l_U167[0]._fU8 * l_U142._fU8;
                }
                else
                {
                    l_U183._fU0 = l_U151[1]._fU0 * l_U142._fU0;
                    l_U183._fU4 = l_U151[1]._fU4 * l_U142._fU4;
                    l_U183._fU8 = l_U151[1]._fU8 * l_U142._fU8;
                    l_U186._fU0 = l_U167[0]._fU0 * l_U142._fU0;
                    l_U186._fU4 = l_U167[0]._fU4 * l_U142._fU4;
                    l_U186._fU8 = l_U167[0]._fU8 * l_U142._fU8;
                }
                ATTACH_CAM_TO_VEHICLE( l_U2285, l_U255 );
                POINT_CAM_AT_VEHICLE( l_U2285, l_U255 );
                SET_CAM_ATTACH_OFFSET( l_U2285, l_U183._fU0, l_U183._fU4, l_U183._fU8 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2285, 1 );
                SET_CAM_POINT_OFFSET( l_U2285, l_U167[0]._fU0, l_U167[0]._fU4, l_U167[0]._fU8 );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U2285, 1 );
                SET_CAM_FOV( l_U2285, l_U234[0] );
                SET_CAM_PROPAGATE( l_U2285, 1 );
                SET_CAM_ACTIVE( l_U2285, 1 );
                GET_GAME_TIMER( ref l_U2143 );
                l_U518 = 4;
            }
            else
            {
                SET_CAM_PROPAGATE( l_U2289, 0 );
                SET_CAM_ACTIVE( l_U2289, 0 );
                SET_CAM_PROPAGATE( l_U2285, 0 );
                SET_CAM_ACTIVE( l_U2285, 0 );
                SET_CAM_PROPAGATE( l_U2286, 0 );
                SET_CAM_ACTIVE( l_U2286, 0 );
                SET_CAM_PROPAGATE( l_U2287, 1 );
                SET_CAM_ACTIVE( l_U2287, 1 );
                GET_GAME_TIMER( ref l_U2143 );
                l_U518 = 2;
            }
            sub_45080( "E1E2_HERE", 2, 1, ref l_U2291[0], 8, 1 );
        }
        break;
        case 2:
        if (NOT (sub_32472( l_U2291[0] )))
        {
            TASK_LOOK_AT_CHAR( sub_3405(), l_U528._fU0, 3000, 0 );
            TASK_LOOK_AT_CHAR( l_U528._fU0, sub_3405(), 1000, 0 );
            OPEN_SEQUENCE_TASK( ref l_U528._fU48 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 378.21610000, 1529.99200000, 15.94980000, 2, -1, 1.00000000 );
            CLOSE_SEQUENCE_TASK( l_U528._fU48 );
            TASK_PERFORM_SEQUENCE( l_U528._fU0, l_U528._fU48 );
            CLEAR_SEQUENCE_TASK( l_U528._fU48 );
            l_U518 = 6;
        }
        break;
        case 3:
        if ((NOT (IS_CHAR_PLAYING_ANIM( sub_3405(), "misselizabeta2", "M_Kiss_Stand" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U528._fU0, "misselizabeta2", "F_Kiss_Stand" ))))
        {
            OPEN_SEQUENCE_TASK( ref l_U528._fU48 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 378.21610000, 1529.99200000, 15.94980000, 2, -1, 1.00000000 );
            CLOSE_SEQUENCE_TASK( l_U528._fU48 );
            TASK_PERFORM_SEQUENCE( l_U528._fU0, l_U528._fU48 );
            CLEAR_SEQUENCE_TASK( l_U528._fU48 );
            GET_GAME_TIMER( ref l_U2143 );
            l_U518 = 6;
        }
        break;
        case 4:
        if (NOT (sub_32472( l_U2291[0] )))
        {
            l_U518 = 5;
        }
        break;
        case 5:
        TASK_LOOK_AT_CHAR( sub_3405(), l_U528._fU0, 5000, 0 );
        TASK_LOOK_AT_CHAR( l_U528._fU0, sub_3405(), 1000, 0 );
        l_U2260 = {378.21610000, 1529.99200000, 15.94980000};
        OPEN_SEQUENCE_TASK( ref l_U528._fU48 );
        TASK_LEAVE_CAR( 0, l_U255 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U2260._fU0, l_U2260._fU4, l_U2260._fU8, 2, -1, 1.00000000 );
        CLOSE_SEQUENCE_TASK( l_U528._fU48 );
        TASK_PERFORM_SEQUENCE( l_U528._fU0, l_U528._fU48 );
        CLEAR_SEQUENCE_TASK( l_U528._fU48 );
        GET_GAME_TIMER( ref l_U2143 );
        l_U518 = 6;
        break;
        case 6:
        if ((NOT (IS_CHAR_ON_SCREEN( l_U528._fU0 ))) || (sub_14495( ref l_U2143, 3500 )))
        {
            l_U518 = 7;
        }
        break;
        case 7:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING())
            {
                DO_SCREEN_FADE_OUT( 1000 );
            }
        }
        else
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U2144 );
            DESTROY_ALL_CAMS();
            DELETE_CHAR( ref l_U528._fU0 );
            sub_47407( ref l_U528._fU0, ref l_U255 );
            sub_12691( 1 );
            if (NOT l_U2083[1])
            {
                INCREMENT_INT_STAT( 373, 1 );
            }
            sub_47828();
        }
        break;
    }
    return;
}

void sub_45080(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_45105( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_45105(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_31545( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_45305()
{
    l_U145 = {-0.99465700, -2.12410000, -0.38183600};
    l_U148 = {-0.99465700, 2.43009000, 0.68398300};
    l_U151[0] = {-1.30000000, 4.00000000, 0.70000000};
    l_U151[1] = {-1.30000000, 4.00000000, 0.50000000};
    l_U151[2] = {3.60000000, 3.10000000, 0.50000000};
    l_U151[3] = {-2.20000000, 8.00000000, 1.00000000};
    l_U167[0] = {0.00000000, 0.00000000, 0.00000000};
    l_U167[1] = {-0.60000000, 0.00000000, 0.40000000};
    l_U234[0] = 32;
    l_U234[1] = 32;
    l_U234[2] = 34.70000000;
    return;
}

int sub_45893()
{
    unknown uVar2;
    unknown uVar3;

    if (sub_5104( ref uVar2 ))
    {
        GET_CAR_MODEL( uVar2, ref uVar3 );
        if (IS_THIS_MODEL_A_BIKE( uVar3 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_47407(unknown uParam0, unknown uParam1)
{
    sub_47418( uParam1 );
    sub_47679( uParam0 );
    return;
}

void sub_47418(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            SET_CAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            sub_47474( uParam0 );
        }
    }
    return;
}

void sub_47474(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U127) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            else
            {
                SET_CAR_HEALTH( (uParam0^), ProtectedGet(l_U127) );
            }
            if (ProtectedGet(l_U240) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            else
            {
                SET_ENGINE_HEALTH( (uParam0^), ProtectedGet(l_U240) );
            }
            if (ProtectedGet(l_U241) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            else
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), ProtectedGet(l_U241) );
            }
        }
    }
    return;
}

void sub_47679(unknown uParam0)
{
    unknown uVar3;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            if (ProtectedGet(l_U126) < 110)
            {
                SET_CHAR_HEALTH( (uParam0^), 120 );
            }
            else
            {
                SET_CHAR_HEALTH( (uParam0^), ProtectedGet(l_U126) );
            }
        }
    }
    return;
}

void sub_47828()
{
    g_U24 = 82;
    UNLOCK_MISSION_NEWS_STORY( 77 );
    sub_47854( 16 );
    CLEAR_WANTED_LEVEL( sub_4409() );
    sub_49028();
    sub_3129();
    return;
}

void sub_47854(int iParam0)
{
    if (iParam0 >= g_U1455)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_47941( iParam0 ))
    {
        sub_48991( iParam0 );
    }
    return;
}

int sub_47941(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1455[uParam0], 20 )) || (IS_BIT_SET( g_U1455[uParam0], 21 )))
    {
        return 0;
    }
    sub_47998( ref uVar3, 1, 0, 0 );
    sub_48610( uVar3, ref g_U1455[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1455[uParam0], 22, 31, g_U1455[0] );
    g_U1455[0]++;
    SET_BIT( ref g_U1455[uParam0], 20 );
    sub_31644( "\n ----------------------------------------------------------------" );
    sub_6092( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_31644( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_47998(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_48051( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_48183( iParam0 + 0 );
    }
    return;
}

void sub_48051(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_48183( iParam0 + 0 );
    }
    return;
}

void sub_48183(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_48214( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_48214(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_48610(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_48991(unknown uParam0)
{
    return;
}

void sub_49028()
{
    sub_49037();
    return;
}

void sub_49037()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_49055();
    sub_49114( iVar2, iVar3, iVar4 );
    return;
}

void sub_49055()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U510[I] = 4;
    }
    return;
}

void sub_49114(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 4;
    sub_49146( iVar5, uParam0, uParam1, uParam2, "Contact_5" );
    return;
}

void sub_49146(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int I;
    int iVar27;
    boolean bVar28;
    unknown uVar29;
    unknown uVar30;
    int iVar31;
    boolean bVar32;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14838[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_49242( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_49242( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14838[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_49242( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_49242( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_49242( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_49242( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_49819( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12306[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14838[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12306[uParam0]._fU144[I]._fU8++;
            if ((NOT g_U12306[uParam0]._fU144[I]._fU12) AND (g_U12306[uParam0]._fU144[I]._fU8 >= g_U12306[uParam0]._fU144[I]._fU4))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12306[uParam0]._fU144[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_50267( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_4409() );
    sub_2128();
    bVar28 = true;
    uVar29 = sub_49819( uParam0, iVar7 );
    uVar30 = sub_1752( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14838[uParam0]._fU0._fU56;
        if ((iVar31 == 5) || (iVar31 == 6))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U20913[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10982 );
                sub_54721( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_55155();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_55240( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_55319( uParam0 );
                sub_55358( 0 );
                sub_2028( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_55547();
        }
    }
    if (bParam2)
    {
        sub_55155();
        sub_55646();
        sub_55358( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_55155();
        sub_55698();
        sub_55358( 0 );
        sub_2028( uVar30, 0 );
    }
    sub_1639();
    return;
}

void sub_49242(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_49819(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_1983( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U26515[iParam0]._fU0;
    iVar5 = g_U26515[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U20913[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_50267(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_50363( uParam1 );
        break;
        case 1:
        bVar8 = sub_51058( uParam1 );
        break;
        case 2:
        bVar8 = sub_51791( uParam1 );
        break;
        case 3:
        bVar8 = sub_52028( uParam1 );
        break;
        case 4:
        bVar8 = sub_52194( uParam1 );
        break;
        case 5:
        bVar8 = sub_52393( uParam1 );
        break;
        case 6:
        bVar8 = sub_52588( uParam1 );
        break;
        case 7:
        bVar8 = sub_52793( uParam1 );
        break;
        case 8:
        bVar8 = sub_52998( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_51406( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_49819( uParam0, uParam1 );
    if (bParam3)
    {
        sub_53284( uVar9, uParam0 );
    }
    return 1;
}

int sub_50363(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_50460( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_50460( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_50460( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_50460( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_50460( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_50460( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_50965( "Contact 1", 1 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50965( "Contact 1", 0 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_50460(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_50471( uParam1 );
    sub_50645( uParam0, 0, uParam2 );
    sub_50645( uParam0, 1, uParam3 );
    sub_50645( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_49055();
    return;
}

void sub_50471(unknown uParam0)
{
    ADD_SCORE( sub_4409(), uParam0 );
    sub_50496( uParam0 );
    return;
}

void sub_50496(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1983( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_50645(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12306[uParam0]._fU40[uParam1] += iParam2;
    if (g_U12306[uParam0]._fU40[uParam1] < 0)
    {
        g_U12306[uParam0]._fU40[uParam1] = 0;
    }
    if (g_U12306[uParam0]._fU40[uParam1] > 100)
    {
        g_U12306[uParam0]._fU40[uParam1] = 100;
    }
    return;
}

void sub_50965(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_51058(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50460( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_50460( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_50460( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_50460( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_50460( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_50460( iVar3, 0, sub_51284(), sub_51550(), 0, 0 );
        break;
        default:
        sub_50965( "Contact 2", 1 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50965( "Contact 2", 0 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51284()
{
    switch (l_U510[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_51406( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_51406(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_51550()
{
    switch (l_U510[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_51406( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_51791(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50460( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_50460( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_50460( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_50460( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_50965( "Contact 3", 1 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50965( "Contact 3", 0 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52028(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50460( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_50460( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_50965( "Friend 4", 1 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50965( "Friend 4", 0 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52194(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50460( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_50460( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_50460( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_50965( "Contact 5", 1 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50965( "Contact 5", 0 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52393(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50460( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_50460( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_50460( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_50965( "Contact 6", 1 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50965( "Contact 6", 0 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52588(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_50460( iVar3, 0, sub_51284(), sub_51550(), 0, 0 );
        break;
        default:
        sub_50965( "Friend 7", 1 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50965( "Friend 7", 0 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52793(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_50460( iVar3, 0, sub_51284(), sub_51550(), 0, 0 );
        break;
        default:
        sub_50965( "Friend 8", 1 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50965( "Friend 8", 0 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52998(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50460( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_50965( "Contact 9", 1 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50965( "Contact 9", 0 );
        sub_50460( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_53284(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    if (sub_53345( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_54063( iParam1 );
    }
    return;
}

int sub_53345(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U14838[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U20913[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U20913[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_53485( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_53485(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_53655( 0 );
    return;
}

void sub_53655(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_53900();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_53900()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_54063(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U14815[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14815[iParam0]._fU4 == g_U14815[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14815[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14815[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_54294( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_54294( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_54294( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_54294( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_54294( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_54294( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_54294(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_54721(unknown uParam0, unknown uParam1)
{
    sub_54740( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_54740(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
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

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_55155()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

int sub_55240(int iParam0, int iParam1)
{
    if (iParam0 == 2)
    {
        if (iParam1 == 3)
        {
            return 1;
        }
    }
    if (iParam0 == 0)
    {
        if (iParam1 == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_55319(unknown uParam0)
{
    sub_1500();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_55358(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_55409( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_55409(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_55547()
{
    sub_55556();
    return;
}

void sub_55556()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_55646()
{
    sub_55556();
    return;
}

void sub_55698()
{
    sub_55556();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_55817()
{
    switch (l_U523)
    {
        case 0:
        if (sub_43015())
        {
            CLEAR_AREA( l_U2184._fU0, l_U2184._fU4, l_U2184._fU8, 100.00000000, 1 );
            for ( l_U2142 = 0; l_U2142 <= (l_U852 - 1); l_U2142++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U852[l_U2142]._fU0 )))
                {
                    TASK_SHOOT_AT_COORD( l_U852[l_U2142]._fU0, 2353.00000000, 392.00000000, 7.55000000, 5000, 3 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U852[l_U2142]._fU0, 0 );
                }
            }
            TASK_LOOK_AT_COORD( l_U528._fU0, 2354.77000000, 414.25000000, 6.87000000, -1, 0 );
            if (sub_17515( ref l_U255, ref l_U2199[0], ref l_U2166[0], 10.00000000 ))
            {
                l_U2089 = 1;
            }
            l_U2181 = 0.72000000;
            BEGIN_CAM_COMMANDS( ref l_U2144 );
            CREATE_CAM( 14, ref l_U2285 );
            CREATE_CAM( 14, ref l_U2286 );
            CREATE_CAM( 3, ref l_U2289 );
            SET_CAM_POS( l_U2285, 2353.97100000, 421.55320000, 6.86831900 );
            SET_CAM_ROT( l_U2285, -1.46925700, -1.26396900, -167.47780000 );
            SET_CAM_FOV( l_U2285, 45.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_ACTIVE( l_U2285, 1 );
            SET_CAM_PROPAGATE( l_U2285, 1 );
            DO_SCREEN_FADE_IN( 500 );
            GET_GAME_TIMER( ref l_U2143 );
            GET_GAME_TIMER( ref l_U2145 );
            l_U2043[2] = 1;
            l_U523 = 1;
        }
        break;
        case 1:
        if (sub_14495( ref l_U2143, 3000 ))
        {
            ;
        }
        break;
        case 2:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
        else
        {
            SET_CAM_ACTIVE( l_U2285, 0 );
            SET_CAM_PROPAGATE( l_U2285, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U2144 );
            DESTROY_ALL_CAMS();
            DELETE_CHAR( ref l_U528._fU0 );
            sub_12691( 1 );
            PRINT_NOW( "god_10", 7500, 1 );
            sub_4367();
        }
        break;
    }
    return;
}
