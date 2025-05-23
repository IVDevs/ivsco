void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U20 = -1;
    l_U132 = 15.00000000;
    l_U133 = 35.00000000;
    l_U134 = 16.00000000;
    l_U135 = 0.00000000;
    l_U141 = 1000.00000000;
    l_U142 = 7500.00000000;
    l_U151 = 1;
    l_U152 = 30.00000000;
    l_U153 = 30.00000000;
    l_U154 = 2.00000000;
    l_U164 = 0.00000000;
    l_U165 = 0.00000000;
    l_U177 = 1;
    l_U178 = 0;
    l_U179 = -1;
    l_U180 = 1;
    l_U181 = -1;
    l_U182 = -1;
    l_U183 = 15.00000000;
    l_U210 = 0;
    l_U211 = -1949702649;
    l_U212 = 2075870698;
    l_U217 = 0.12000000;
    l_U228 = 1;
    l_U229 = 1;
    l_U354 = 0;
    l_U355 = 0;
    l_U588 = 1;
    WAIT( 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_325();
        sub_2499();
    }
    SET_MISSION_FLAG( 1 );
    while (l_U588)
    {
        WAIT( 0 );
        switch (l_U354)
        {
            case 0:
            sub_3045();
            l_U354 = 1;
            break;
            case 1:
            sub_4832( "JF04_AA" );
            break;
            case 2:
            sub_5068();
            CLEAR_AREA( l_U459._fU0, l_U459._fU4, l_U459._fU8, 50.00000000, 0 );
            if (l_U659)
            {
                sub_5511();
            }
            sub_7222();
            sub_7404();
            sub_7819();
            sub_8013();
            sub_8405();
            if (l_U658)
            {
                if (DOES_VEHICLE_EXIST( l_U568 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U568 ))
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U568 );
                    }
                }
                if (DOES_VEHICLE_EXIST( l_U569 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U569 ))
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U569 );
                    }
                }
            }
            sub_8962();
            l_U354 = 3;
            break;
            case 3:
            LOAD_SCENE( l_U459._fU0, l_U459._fU4, l_U459._fU8 );
            if (IS_SCREEN_FADED_OUT())
            {
                if (NOT IS_SCREEN_FADING_IN())
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2672(), 28, 1 );
                    DO_SCREEN_FADE_IN( 500 );
                    WAIT( 500 );
                    SET_PLAYER_CONTROL( sub_9245(), 1 );
                    l_U354 = 5;
                }
            }
            break;
            case 4:
            sub_9295();
            break;
            case 5:
            sub_9756();
            sub_9868();
            sub_9295();
            if (NOT l_U605)
            {
                sub_14861();
            }
            else
            {
                sub_16195();
            }
            sub_17535();
            sub_18519();
            sub_19909();
            sub_20435();
            sub_21465();
            sub_22121();
            sub_23062();
            sub_23623();
            sub_24002();
            sub_24400();
            sub_24429();
            sub_25402();
            sub_26193();
            sub_26657();
            break;
            case 6:
            sub_26752();
            break;
            case 7:
            sub_22121();
            sub_26943();
            break;
            case 8:
            PRINTNL();
            PRINTSTRING( "DEAD STAGE REACHED..." );
            PRINTNL();
            break;
        }
    }
    sub_2499();
    return;
}

void sub_325()
{
    sub_334();
    return;
}

void sub_334()
{
    int iVar2;

    iVar2 = 1;
    sub_348( iVar2 );
    sub_1489( iVar2 );
    return;
}

void sub_348(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_392();
        sub_600();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_725();
            sub_777();
            g_U11095 = 1;
        }
    }
    sub_870();
    sub_1009();
    uVar5 = sub_1122( uParam0 );
    sub_1398( uVar5, 0 );
    return;
}

void sub_392()
{
    if (g_U10993)
    {
        return;
    }
    sub_419( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_540();
    }
    return;
}

void sub_419(int iParam0)
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

void sub_540()
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

void sub_600()
{
    sub_609();
    return;
}

void sub_609()
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

void sub_725()
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

void sub_777()
{
    sub_786();
    return;
}

void sub_786()
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

void sub_870()
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

void sub_1009()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1031();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1031()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1122(unknown uParam0)
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
    sub_1353( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_1353(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1398(int iParam0, boolean bParam1)
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

void sub_1489(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1498();
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
    if (NOT sub_2258())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_2324();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_1498()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_1536( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_1536( 1, g_U572[I] )) != 0)
            {
                sub_1822( I );
            }
        }
    }
    if (NOT sub_1988())
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

int sub_1536(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1822(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_1907( g_U572 - 1 );
    return;
}

void sub_1907(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_1988()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_1536( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2258()
{
    if ((g_U10959._fU4 == 0) AND (g_U10959._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_2324()
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

void sub_2499()
{
    if (l_U660)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U489[0]._fU0, l_U489[0]._fU4, l_U489[0]._fU8, l_U489[1]._fU0, l_U489[1]._fU4, l_U489[1]._fU8 );
    }
    if (l_U661)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U496[0]._fU0, l_U496[0]._fU4, l_U496[0]._fU8, l_U496[1]._fU0, l_U496[1]._fU4, l_U496[1]._fU8 );
    }
    if (l_U653)
    {
        SET_PED_IS_BLIND_RAGING( sub_2672(), 0 );
    }
    g_U10460 = 1;
    g_U39247++;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    sub_2775();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2672()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2775()
{
    if (l_U18)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U16 = 0;
    l_U15 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3045()
{
    LOAD_ADDITIONAL_TEXT( "JIM4", 0 );
    sub_3079( "E1J4AUD" );
    LOAD_ADDITIONAL_TEXT( "E1J4AUD", 6 );
    sub_3226( 0, sub_2672(), "JOHNNY", 0 );
    l_U589[0] = 1;
    l_U589[1] = 1;
    l_U589[2] = 1;
    l_U606 = 0;
    l_U503 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 0;
    l_U507 = 0;
    l_U508 = 0;
    l_U509 = 0;
    l_U510 = 0;
    l_U511 = 0;
    l_U512 = 0;
    l_U513 = 0;
    l_U522 = 0;
    l_U524 = 0;
    l_U525 = 0;
    l_U679 = 226415164;
    l_U680 = 226415164;
    l_U677 = -1745203402;
    l_U678 = -159126838;
    l_U681 = 226415164;
    l_U683 = -343267627;
    l_U684 = -196312163;
    l_U687 = -1345134469;
    l_U685 = 1264341792;
    l_U686 = 552542187;
    l_U682 = -571009320;
    l_U356[0] = {-1138.40600000, 1577.43400000, 30.52160000};
    l_U356[1] = {-1679.71800000, -65.37650000, 5.91780000};
    l_U356[2] = {-1033.34200000, 1055.54100000, 12.56810000};
    l_U366[0] = {-1138.07300000, 1563.59300000, 27.41200000};
    l_U366[1] = {-1189.46600000, 1516.96500000, 24.87540000};
    l_U366[2] = {-1271.95100000, 1562.44600000, 24.27420000};
    l_U366[3] = {-1178.47500000, 1611.93100000, 33.25320000};
    l_U397[0] = {-1586.79100000, -63.19680000, 5.66900000};
    l_U397[1] = {-1427.78500000, 51.07880000, 6.30620000};
    l_U397[2] = {-1521.75000000, 67.45500000, 7.83350000};
    l_U397[3] = {-1676.18100000, 26.28820000, 8.76750000};
    l_U397[4] = {-1713.32000000, -66.19340000, 5.92600000};
    l_U428[0] = {-1050.02700000, 1007.72400000, 12.60440000};
    l_U428[1] = {-1149.91000000, 1048.57300000, 12.60130000};
    l_U428[2] = {-1068.60200000, 1109.72300000, 12.56600000};
    l_U428[3] = {-1033.02400000, 1068.00000000, 12.63180000};
    l_U459 = {-336.80330000, 1601.00900000, 19.42150000};
    l_U462 = {-337.11690000, 1600.58900000, 19.42150000};
    l_U465 = {0.00000000, 0.00000000, 0.00000000};
    l_U468[0] = {-1042.04400000, 1107.82600000, -38.47930000};
    l_U468[1] = {-1021.94300000, 1007.48200000, 62.60200000};
    l_U475[0] = {-1033.79500000, 1047.79400000, 12.53610000};
    l_U475[1] = {-1029.31800000, 1046.79200000, 12.59460000};
    l_U482[0] = {-1032.46300000, 1049.42400000, 12.57880000};
    l_U482[1] = {-1030.76900000, 1047.98500000, 12.61150000};
    l_U489[0] = {-894.03940000, 1149.15700000, -33.84070000};
    l_U489[1] = {-856.67680000, 1167.57200000, 67.00470000};
    l_U496[0] = {-959.91410000, 770.25860000, 53.22590000};
    l_U496[1] = {-934.99910000, 784.34060000, -49.09930000};
    l_U542[0] = 179.66580000;
    l_U542[1] = 189.00950000;
    l_U542[2] = 173.63700000;
    l_U546 = 203.55350000;
    l_U547 = 188.75880000;
    l_U548 = 200.00000000;
    l_U549[0] = 222.95100000;
    l_U549[1] = 106.18480000;
    l_U552[0] = 251.05100000;
    l_U552[1] = 79.36640000;
    l_U709 = 1;
    l_U711 = 3;
    l_U710 = 1;
    l_U712 = 3;
    # -sub_C1FFC0-0xc214c8( l_U709, ref l_U705 );
    LOAD_COMBAT_DECISION_MAKER( l_U711, ref l_U706 );
    # -sub_C1FFC0-0xc214c8( l_U710, ref l_U707 );
    LOAD_COMBAT_DECISION_MAKER( l_U712, ref l_U708 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U708, 10 );
    REQUEST_MODEL( l_U679 );
    REQUEST_MODEL( l_U680 );
    REQUEST_MODEL( l_U677 );
    REQUEST_MODEL( l_U682 );
    REQUEST_MODEL( l_U681 );
    while (((((NOT (HAS_MODEL_LOADED( l_U679 ))) || (NOT (HAS_MODEL_LOADED( l_U680 )))) || (NOT (HAS_MODEL_LOADED( l_U677 )))) || (NOT (HAS_MODEL_LOADED( l_U682 )))) || (NOT (HAS_MODEL_LOADED( l_U681 ))))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "MISSBIKE_GESTFREE" );
    while (NOT (HAVE_ANIMS_LOADED( "MISSBIKE_GESTFREE" )))
    {
        WAIT( 0 );
    }
    SET_WANTED_MULTIPLIER( 0.00000000 );
    SET_CREATE_RANDOM_COPS( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.85000000 );
    g_U10460 = 0;
    return;
}

void sub_3079(unknown uParam0)
{
    StrCopy( ref l_U34._fU0, uParam0, 16 );
    sub_3098();
    return;
}

void sub_3098()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U34._fU16[I]._fU0 = nil;
        StrCopy( ref l_U34._fU16[I]._fU4, "", 32 );
        l_U34._fU344[I] = 0;
    }
    return;
}

void sub_3226(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U34._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U34._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3310( "\n PED NUMBER ", uParam0 );
    sub_3350( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3310(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3350(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4832(unknown uParam0)
{
    switch (l_U355)
    {
        case 0:
        if (IS_BIT_SET( g_U10959._fU0, 7 ))
        {
            LOAD_ADDITIONAL_TEXT( "E1J4AUD", 6 );
            START_CUTSCENE_NOW( uParam0 );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( uParam0 );
            l_U355 = 1;
        }
        else
        {
            l_U355 = 2;
        }
        break;
        case 1:
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        l_U355 = 2;
        break;
        case 2:
        l_U354 = 2;
        break;
    }
    return;
}

void sub_5068()
{
    vector vVar2;
    float fVar5;
    int iVar6;

    vVar2 = {-324.07300000, 1607.25100000, 19.27730000};
    fVar5 = 209.93670000;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U568 );
    if (IS_VEH_DRIVEABLE( l_U568 ))
    {
        if (LOCATE_CAR_3D( l_U568, l_U462._fU0, l_U462._fU4, l_U462._fU8, 30.00000000, 30.00000000, 30.00000000, 0 ))
        {
            GET_CAR_MODEL( l_U568, ref iVar6 );
            if ((iVar6 == -114291515) || (iVar6 == 301427732))
            {
                l_U659 = 1;
            }
            if (NOT l_U659)
            {
                if (IS_THIS_MODEL_A_BIKE( iVar6 ))
                {
                    SET_CAR_AS_MISSION_CAR( l_U568 );
                    CLEAR_AREA( vVar2.x, vVar2.y, vVar2.z, 10.00000000, 0 );
                    SET_CAR_HEADING( l_U568, fVar5 );
                    SET_CAR_COORDINATES( l_U568, vVar2.x, vVar2.y, vVar2.z );
                    SET_CAR_ON_GROUND_PROPERLY( l_U568 );
                    l_U659 = 1;
                    l_U658 = 1;
                }
            }
            if (IS_THIS_MODEL_A_CAR( iVar6 ))
            {
                SET_CAR_AS_MISSION_CAR( l_U568 );
                CLEAR_AREA( vVar2.x, vVar2.y, vVar2.z, 10.00000000, 0 );
                SET_CAR_HEADING( l_U568, fVar5 );
                SET_CAR_COORDINATES( l_U568, vVar2.x, vVar2.y, vVar2.z );
                SET_CAR_ON_GROUND_PROPERLY( l_U568 );
                l_U658 = 1;
            }
        }
    }
    return;
}

void sub_5511()
{
    while (NOT (sub_5550( ref l_U559, l_U462._fU0, l_U462._fU4, l_U462._fU8, l_U547 )))
    {
        WAIT( 0 );
    }
    if (DOES_VEHICLE_EXIST( l_U559 ))
    {
        if (IS_VEH_DRIVEABLE( l_U559 ))
        {
            SET_CAR_HEADING( l_U559, l_U547 );
            SET_CAR_ON_GROUND_PROPERLY( l_U559 );
            SET_CAR_ENGINE_ON( l_U559, 1, 1 );
        }
    }
    return;
}

int sub_5550(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_5559();
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
    sub_5707( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

int sub_5559()
{
    return 301427732;
}

void sub_5707(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_7222()
{
    vector vVar2;
    float fVar5;
    int iVar6;

    vVar2 = {-329.92740000, 1604.25000000, 19.29950000};
    fVar5 = 189.14390000;
    iVar6 = -114291515;
    REQUEST_MODEL( iVar6 );
    while (NOT (HAS_MODEL_LOADED( iVar6 )))
    {
        WAIT( 0 );
    }
    if (NOT (DOES_VEHICLE_EXIST( l_U569 )))
    {
        CREATE_CAR( iVar6, vVar2.x, vVar2.y, vVar2.z, ref l_U569, 1 );
        SET_CAR_HEADING( l_U569, fVar5 );
        SET_CAR_COORDINATES( l_U569, vVar2.x, vVar2.y, vVar2.z );
        SET_CAR_ON_GROUND_PROPERLY( l_U569 );
    }
    return;
}

void sub_7404()
{
    if (NOT (DOES_BLIP_EXIST( l_U704 )))
    {
        if (l_U659)
        {
            if (DOES_VEHICLE_EXIST( l_U559 ))
            {
                if (IS_VEH_DRIVEABLE( l_U559 ))
                {
                    GIVE_WEAPON_TO_CHAR( sub_2672(), 28, 100, 1 );
                    SET_CURRENT_CHAR_WEAPON( sub_2672(), 28, 1 );
                    if (NOT (IS_CHAR_IN_CAR( sub_2672(), l_U559 )))
                    {
                        WARP_CHAR_INTO_CAR( sub_2672(), l_U559 );
                        GIVE_PED_HELMET_WITH_OPTS( sub_2672(), 0 );
                        SET_CAM_BEHIND_PED( sub_2672() );
                    }
                }
            }
            if (l_U606 == 0)
            {
                l_U606 = 1;
                CLEAR_AREA( l_U468[0]._fU0, l_U468[0]._fU4, l_U468[0]._fU8, 50.00000000, 0 );
                SWITCH_ROADS_OFF( l_U468[0]._fU0, l_U468[0]._fU4, l_U468[0]._fU8, l_U468[1]._fU0, l_U468[1]._fU4, l_U468[1]._fU8 );
            }
        }
        else
        {
            SET_CHAR_COORDINATES( sub_2672(), l_U462._fU0, l_U462._fU4, l_U462._fU8 );
            SET_CHAR_HEADING( sub_2672(), l_U547 );
            GIVE_WEAPON_TO_CHAR( sub_2672(), 28, 100, 1 );
            SET_CURRENT_CHAR_WEAPON( sub_2672(), 28, 1 );
            SET_CAM_BEHIND_PED( sub_2672() );
        }
    }
    SET_CURRENT_CHAR_WEAPON( sub_2672(), 28, 1 );
    return;
}

void sub_7819()
{
    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U555[l_U503] )))
        {
            CREATE_CAR( l_U677, l_U356[l_U503]._fU0, l_U356[l_U503]._fU4, l_U356[l_U503]._fU8, ref l_U555[l_U503], 1 );
            SET_CAR_HEADING( l_U555[l_U503], l_U542[l_U503] );
            SET_CAR_ON_GROUND_PROPERLY( l_U555[l_U503] );
        }
    }
    return;
}

void sub_8013()
{
    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (DOES_VEHICLE_EXIST( l_U555[l_U503] ))
        {
            if (NOT (DOES_CHAR_EXIST( l_U570[l_U503] )))
            {
                CREATE_CHAR_INSIDE_CAR( l_U555[l_U503], 26, l_U679, ref l_U570[l_U503] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U570[l_U503] );
                if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                {
                    GIVE_WEAPON_TO_CHAR( l_U570[l_U503], 3, 0, 0 );
                    SET_CHAR_CURRENT_WEAPON_VISIBLE( l_U570[l_U503], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U570[l_U503], 25 );
                    SET_CHAR_RELATIONSHIP( l_U570[l_U503], 5, 0 );
                    SET_CHAR_DECISION_MAKER( l_U570[l_U503], l_U707 );
                    SET_COMBAT_DECISION_MAKER( l_U570[l_U503], l_U708 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U570[l_U503], 1 );
                    SET_CHAR_WILL_DO_DRIVEBYS( l_U570[l_U503], 1 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U570[l_U503], 0 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U570[l_U503], 1 );
                }
            }
        }
    }
    return;
}

void sub_8405()
{
    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (DOES_VEHICLE_EXIST( l_U555[l_U503] ))
        {
            if (NOT (DOES_CHAR_EXIST( l_U574[l_U503] )))
            {
                CREATE_CHAR_AS_PASSENGER( l_U555[l_U503], 26, l_U679, 0, ref l_U574[l_U503] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U574[l_U503] );
                if (NOT (IS_CHAR_INJURED( l_U574[l_U503] )))
                {
                    if (NOT (l_U503 == 2))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U574[l_U503], 7, 500, 0 );
                    }
                    else
                    {
                        GIVE_WEAPON_TO_CHAR( l_U574[l_U503], 7, 500, 0 );
                    }
                    SET_CHAR_CURRENT_WEAPON_VISIBLE( l_U574[l_U503], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U574[l_U503], 25 );
                    SET_CHAR_RELATIONSHIP( l_U574[l_U503], 5, 0 );
                    SET_CHAR_DECISION_MAKER( l_U574[l_U503], l_U707 );
                    SET_COMBAT_DECISION_MAKER( l_U574[l_U503], l_U708 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U574[l_U503], 1 );
                    SET_CHAR_WILL_DO_DRIVEBYS( l_U574[l_U503], 1 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U574[l_U503], 0 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U574[l_U503], 1 );
                    SET_CHAR_ACCURACY( l_U574[l_U503], 1 );
                }
            }
        }
    }
    return;
}

void sub_8962()
{
    if (NOT l_U660)
    {
        SWITCH_ROADS_OFF( l_U489[0]._fU0, l_U489[0]._fU4, l_U489[0]._fU8, l_U489[1]._fU0, l_U489[1]._fU4, l_U489[1]._fU8 );
        l_U660 = 1;
    }
    if (NOT l_U661)
    {
        SWITCH_ROADS_OFF( l_U496[0]._fU0, l_U496[0]._fU4, l_U496[0]._fU8, l_U496[1]._fU0, l_U496[1]._fU4, l_U496[1]._fU8 );
        l_U661 = 1;
    }
    return;
}

void sub_9245()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_9295()
{
    if (l_U354 == 4)
    {
        if (IS_VEH_DRIVEABLE( l_U559 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_2672(), l_U559 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U704 )))
                {
                    CLEAR_PRINTS();
                    ADD_BLIP_FOR_CAR( l_U559, ref l_U704 );
                    SET_BLIP_AS_FRIENDLY( l_U704, 1 );
                    if (l_U513 < 2)
                    {
                        PRINT_NOW( "J5_02", 7500, 1 );
                        l_U513++;
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U704 ))
            {
                CLEAR_PRINTS();
                REMOVE_BLIP( l_U704 );
                l_U354 = 5;
            }
        }
    }
    if (l_U354 == 5)
    {
        if (NOT l_U616[1])
        {
            CLEAR_PRINTS();
            PRINT_NOW( "J5_01", 7500, 1 );
            l_U616[1] = 1;
        }
        for ( l_U503 = 0; l_U503 < 3; l_U503++ )
        {
            if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
            {
                if (NOT (DOES_BLIP_EXIST( l_U700[l_U503] )))
                {
                    ADD_BLIP_FOR_CAR( l_U555[l_U503], ref l_U700[l_U503] );
                    SET_BLIP_AS_FRIENDLY( l_U700[l_U503], 0 );
                }
            }
            else if (DOES_BLIP_EXIST( l_U700[l_U503] ))
            {
                REMOVE_BLIP( l_U700[l_U503] );
            }
        }
    }
    return;
}

void sub_9756()
{
    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (l_U593[l_U503])
        {
            if (NOT l_U654[l_U503])
            {
                l_U541++;
                l_U654[l_U503] = 1;
            }
        }
    }
    return;
}

void sub_9868()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown[3] uVar5;
    unknown[3] uVar9;
    unknown[3] uVar13;
    float[3] fVar17;
    float[3] fVar21;
    float[3] fVar25;
    float[3] fVar29;
    float[3] fVar33;
    float[3] fVar37;
    unknown uVar41;

    array(ref uVar5, 3);
    array(ref uVar9, 3);
    array(ref uVar13, 3);
    array(ref fVar17, 3);
    array(ref fVar21, 3);
    array(ref fVar25, 3);
    array(ref fVar29, 3);
    array(ref fVar33, 3);
    array(ref fVar37, 3);
    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2672(), l_U555[l_U503], 30.00000000, 30.00000000, 20.00000000, 0 ))
            {
                GET_CAR_COORDINATES( l_U555[l_U503], ref uVar5[l_U503], ref uVar9[l_U503], ref uVar13[l_U503] );
                fVar17[l_U503] = uVar5[l_U503] - 3.00000000;
                fVar21[l_U503] = uVar9[l_U503] + 2.00000000;
                fVar25[l_U503] = uVar13[l_U503] - 20.00000000;
                fVar29[l_U503] = uVar5[l_U503] + 3.00000000;
                fVar33[l_U503] = uVar9[l_U503] - 2.00000000;
                fVar37[l_U503] = uVar13[l_U503] + 20.00000000;
                if (IS_PROJECTILE_IN_AREA( fVar17[l_U503], fVar21[l_U503], fVar25[l_U503], fVar29[l_U503], fVar33[l_U503], fVar37[l_U503] ))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2672(), l_U555[l_U503], 10.00000000, 10.00000000, 10.00000000, 0 )))
                    {
                        CLEAR_AREA( uVar5[l_U503], uVar9[l_U503], uVar13[l_U503], 10.00000000, 1 );
                        EXPLODE_CAR( l_U555[l_U503], 1, 1 );
                    }
                }
            }
        }
        if (NOT l_U593[l_U503])
        {
            if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
            {
                if (l_U541 == 0)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2672(), l_U555[l_U503], 20.00000000, 20.00000000, 1.00000000, 0 ))
                    {
                        if (NOT l_U611[l_U503])
                        {
                            l_U611[l_U503] = 1;
                            GET_GAME_TIMER( ref l_U514 );
                        }
                    }
                    else if (l_U611[l_U503])
                    {
                        l_U611[l_U503] = 0;
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2672(), l_U555[l_U503], 40.00000000, 40.00000000, 1.00000000, 0 ))
                {
                    if (NOT l_U611[l_U503])
                    {
                        l_U611[l_U503] = 1;
                        GET_GAME_TIMER( ref l_U514 );
                    }
                }
                else if (l_U611[l_U503])
                {
                    l_U611[l_U503] = 0;
                };;;
            }
            if (l_U541 == 0)
            {
                if (l_U611[l_U503])
                {
                    GET_GAME_TIMER( ref l_U515 );
                    l_U516 = l_U515 - l_U514;
                    if (l_U516 > 1)
                    {
                        l_U593[l_U503] = 1;
                        GET_GAME_TIMER( ref l_U526 );
                        CLEAR_PRINTS();
                        if (l_U503 == 0)
                        {
                            if (DOES_CHAR_EXIST( l_U570[0] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U570[0] )))
                                {
                                    sub_3226( 1, l_U570[0], "Angel_1", 0 );
                                    if (sub_10886( l_U694 ))
                                    {
                                        sub_11070( ref l_U694, 0 );
                                    }
                                    sub_11213( "E1J4_FLEE1", ref l_U688, 6, 1 );
                                }
                            }
                        }
                        if (l_U503 == 1)
                        {
                            if (DOES_CHAR_EXIST( l_U570[1] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U570[1] )))
                                {
                                    sub_3226( 2, l_U570[1], "Angel_2", 0 );
                                    if (sub_10886( l_U694 ))
                                    {
                                        sub_11070( ref l_U694, 0 );
                                    }
                                    sub_11213( "E1J4_FLEE2", ref l_U688, 6, 1 );
                                }
                            }
                        }
                        if (l_U503 == 2)
                        {
                            if (DOES_CHAR_EXIST( l_U570[2] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U570[2] )))
                                {
                                    sub_3226( 3, l_U570[2], "Angel_3", 0 );
                                    if (sub_10886( l_U694 ))
                                    {
                                        sub_11070( ref l_U694, 0 );
                                    }
                                    sub_11213( "E1J4_FLEE3", ref l_U688, 6, 1 );
                                }
                            }
                        }
                    }
                }
            }
            if (l_U541 >= 1)
            {
                if (l_U611[l_U503])
                {
                    l_U593[l_U503] = 1;
                    GET_GAME_TIMER( ref l_U526 );
                    CLEAR_PRINTS();
                    if (l_U503 == 0)
                    {
                        if (DOES_CHAR_EXIST( l_U570[0] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U570[0] )))
                            {
                                sub_3226( 1, l_U570[0], "Angel_1", 0 );
                                if (sub_10886( l_U694 ))
                                {
                                    sub_11070( ref l_U694, 0 );
                                }
                                sub_11213( "E1J4_FLEE1", ref l_U688, 6, 1 );
                            }
                        }
                    }
                    if (l_U503 == 1)
                    {
                        if (DOES_CHAR_EXIST( l_U570[1] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U570[1] )))
                            {
                                sub_3226( 2, l_U570[1], "Angel_2", 0 );
                                if (sub_10886( l_U694 ))
                                {
                                    sub_11070( ref l_U694, 0 );
                                }
                                sub_11213( "E1J4_FLEE2", ref l_U688, 6, 1 );
                            }
                        }
                    }
                    if (l_U503 == 2)
                    {
                        if (DOES_CHAR_EXIST( l_U570[2] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U570[2] )))
                            {
                                sub_3226( 3, l_U570[2], "Angel_3", 0 );
                                if (sub_10886( l_U694 ))
                                {
                                    sub_11070( ref l_U694, 0 );
                                }
                                sub_11213( "E1J4_FLEE3", ref l_U688, 6, 1 );
                            }
                        }
                    }
                    if (NOT l_U631)
                    {
                        l_U631 = 1;
                        sub_12902( l_U555[l_U503] );
                    }
                    for ( l_U503 = 0; l_U503 < 2; l_U503++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U584[l_U503] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U584[l_U503], 0 );
                        }
                    }
                }
            }
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U555[l_U503], sub_2672() ))
            {
                l_U593[l_U503] = 1;
                GET_GAME_TIMER( ref l_U526 );
                CLEAR_PRINTS();
                if (l_U503 == 0)
                {
                    if (DOES_CHAR_EXIST( l_U570[0] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U570[0] )))
                        {
                            sub_3226( 1, l_U570[0], "Angel_1", 0 );
                            if (sub_10886( l_U694 ))
                            {
                                sub_11070( ref l_U694, 0 );
                            }
                            sub_11213( "E1J4_FLEE1", ref l_U688, 6, 1 );
                        }
                    }
                }
                if (l_U503 == 1)
                {
                    if (DOES_CHAR_EXIST( l_U570[1] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U570[1] )))
                        {
                            sub_3226( 2, l_U570[1], "Angel_2", 0 );
                            if (sub_10886( l_U694 ))
                            {
                                sub_11070( ref l_U694, 0 );
                            }
                            sub_11213( "E1J4_FLEE2", ref l_U688, 6, 1 );
                        }
                    }
                }
                if (l_U503 == 2)
                {
                    if (DOES_CHAR_EXIST( l_U570[2] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U570[2] )))
                        {
                            sub_3226( 3, l_U570[2], "Angel_3", 0 );
                            if (sub_10886( l_U694 ))
                            {
                                sub_11070( ref l_U694, 0 );
                            }
                            sub_11213( "E1J4_FLEE3", ref l_U688, 6, 1 );
                        }
                    }
                }
                if (NOT l_U631)
                {
                    if (l_U541 >= 1)
                    {
                        l_U631 = 1;
                        sub_12902( l_U555[l_U503] );
                    }
                }
            }
            if (IS_EXPLOSION_IN_SPHERE( -1, uVar5[l_U503], uVar9[l_U503], uVar13[l_U503], 40.00000000 ))
            {
                l_U593[l_U503] = 1;
                GET_GAME_TIMER( ref l_U526 );
                CLEAR_PRINTS();
                if (l_U503 == 0)
                {
                    if (DOES_CHAR_EXIST( l_U570[0] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U570[0] )))
                        {
                            sub_3226( 1, l_U570[0], "Angel_1", 0 );
                            if (sub_10886( l_U694 ))
                            {
                                sub_11070( ref l_U694, 0 );
                            }
                            sub_11213( "E1J4_FLEE1", ref l_U688, 6, 1 );
                        }
                    }
                }
                if (l_U503 == 1)
                {
                    if (DOES_CHAR_EXIST( l_U570[1] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U570[1] )))
                        {
                            sub_3226( 2, l_U570[1], "Angel_2", 0 );
                            if (sub_10886( l_U694 ))
                            {
                                sub_11070( ref l_U694, 0 );
                            }
                            sub_11213( "E1J4_FLEE2", ref l_U688, 6, 1 );
                        }
                    }
                }
                if (l_U503 == 2)
                {
                    if (DOES_CHAR_EXIST( l_U570[2] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U570[2] )))
                        {
                            sub_3226( 3, l_U570[2], "Angel_3", 0 );
                            if (sub_10886( l_U694 ))
                            {
                                sub_11070( ref l_U694, 0 );
                            }
                            sub_11213( "E1J4_FLEE3", ref l_U688, 6, 1 );
                        }
                    }
                }
                if (NOT l_U631)
                {
                    if (l_U541 >= 1)
                    {
                        l_U631 = 1;
                        sub_12902( l_U555[l_U503] );
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
            {
                if (IS_CHAR_RESPONDING_TO_EVENT( l_U570[l_U503], 49 ))
                {
                    l_U593[l_U503] = 1;
                    GET_GAME_TIMER( ref l_U526 );
                    CLEAR_PRINTS();
                    if (l_U503 == 0)
                    {
                        if (DOES_CHAR_EXIST( l_U570[0] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U570[0] )))
                            {
                                sub_3226( 1, l_U570[0], "Angel_1", 0 );
                                if (sub_10886( l_U694 ))
                                {
                                    sub_11070( ref l_U694, 0 );
                                }
                                sub_11213( "E1J4_FLEE1", ref l_U688, 6, 1 );
                            }
                        }
                    }
                    if (l_U503 == 1)
                    {
                        if (DOES_CHAR_EXIST( l_U570[1] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U570[1] )))
                            {
                                sub_3226( 2, l_U570[1], "Angel_2", 0 );
                                if (sub_10886( l_U694 ))
                                {
                                    sub_11070( ref l_U694, 0 );
                                }
                                sub_11213( "E1J4_FLEE2", ref l_U688, 6, 1 );
                            }
                        }
                    }
                    if (l_U503 == 2)
                    {
                        if (DOES_CHAR_EXIST( l_U570[2] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U570[2] )))
                            {
                                sub_3226( 3, l_U570[2], "Angel_3", 0 );
                                if (sub_10886( l_U694 ))
                                {
                                    sub_11070( ref l_U694, 0 );
                                }
                                sub_11213( "E1J4_FLEE3", ref l_U688, 6, 1 );
                            }
                        }
                    }
                    if (NOT l_U631)
                    {
                        if (l_U541 >= 1)
                        {
                            l_U631 = 1;
                            sub_12902( l_U555[l_U503] );
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_10886(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_10998( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_10998( "\n speech is not playing" );
    }
    return 0;
}

void sub_10998(unknown uParam0)
{
    return;
}

void sub_11070(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_11213(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_11236( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_11236(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_11290( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_11290(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_11312( iParam1 )))
    {
        return 0;
    }
    l_U34._fU384 = 0;
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
    sub_11992( ref g_U8947, ref l_U34 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_11312(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_10998( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_10998( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_10998( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_11992(int iParam0, int iParam1)
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

void sub_12902(unknown uParam0)
{
    if (l_U631)
    {
        if (DOES_VEHICLE_EXIST( uParam0 ))
        {
            if (NOT (DOES_CHAR_EXIST( l_U587 )))
            {
                if (IS_VEH_DRIVEABLE( uParam0 ))
                {
                    l_U567 = uParam0;
                    CREATE_CHAR_AS_PASSENGER( uParam0, 26, l_U679, 1, ref l_U587 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U587 );
                    if (NOT (IS_CHAR_INJURED( l_U587 )))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U587, 7, 500, 0 );
                        SET_CHAR_CURRENT_WEAPON_VISIBLE( l_U587, 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U587, 25 );
                        SET_CHAR_RELATIONSHIP( l_U587, 5, 0 );
                        SET_CHAR_DECISION_MAKER( l_U587, l_U707 );
                        SET_COMBAT_DECISION_MAKER( l_U587, l_U708 );
                        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U587, 1 );
                        SET_CHAR_WILL_DO_DRIVEBYS( l_U587, 1 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U587, 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U587, 0 );
                        SET_CHAR_ACCURACY( l_U587, 1 );
                        CONTROL_CAR_DOOR( uParam0, 2, 1, 0.90000000 );
                        CONTROL_CAR_DOOR( uParam0, 3, 1, 0.90000000 );
                    }
                }
            }
        }
    }
    return;
}

void sub_14861()
{
    int iVar2;

    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (l_U593[l_U503])
        {
            if (l_U512 < 3)
            {
                if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U570[l_U503], l_U555[l_U503] ))
                        {
                            GET_INTERIOR_FROM_CHAR( l_U570[l_U503], ref iVar2 );
                            if (iVar2 != nil)
                            {
                                if (NOT l_U632[l_U503])
                                {
                                    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U555[l_U503], 1 );
                                    l_U632[l_U503] = 1;
                                }
                            }
                            else if (l_U632[l_U503])
                            {
                                SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U555[l_U503], 0 );
                                l_U632[l_U503] = 0;
                            }
                            GET_SCRIPT_TASK_STATUS( l_U570[l_U503], 49, ref l_U662[l_U503] );
                            if (l_U662[l_U503] == 7)
                            {
                                TASK_CAR_MISSION_PED_TARGET( l_U570[l_U503], l_U555[l_U503], sub_2672(), 1, 25.00000000, 2, 300, 10 );
                            }
                            else
                            {
                                SET_DRIVE_TASK_CRUISE_SPEED( l_U570[l_U503], 25.00000000 );
                            }
                        }
                        else
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U570[l_U503], 0 );
                        }
                    }
                }
            }
            else if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                {
                    if (IS_CHAR_IN_CAR( l_U570[l_U503], l_U555[l_U503] ))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U570[l_U503], 49, ref l_U662[l_U503] );
                        if (l_U662[l_U503] == 7)
                        {
                            TASK_CAR_MISSION_PED_TARGET( l_U570[l_U503], l_U555[l_U503], sub_2672(), 6, 20.00000000, 2, 300, 10 );
                        }
                    }
                    else
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U570[l_U503], 0 );
                    }
                }
            }
        }
        else if (l_U589[l_U503])
        {
            if (l_U503 == 0)
            {
                if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U570[l_U503], l_U555[l_U503] ))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U570[l_U503], 49, ref l_U662[l_U503] );
                            if (l_U662[l_U503] == 7)
                            {
                                TASK_CAR_MISSION_PED_TARGET( l_U570[l_U503], l_U555[l_U503], sub_2672(), 1, 5.00000000, 2, 500, 10 );
                            }
                        }
                        else
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U570[l_U503], 0 );
                        }
                    }
                }
            }
            if (l_U503 == 1)
            {
                if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U570[l_U503], l_U555[l_U503] ))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U570[l_U503], 49, ref l_U662[l_U503] );
                            if (l_U662[l_U503] == 7)
                            {
                                TASK_CAR_MISSION_PED_TARGET( l_U570[l_U503], l_U555[l_U503], sub_2672(), 1, 5.00000000, 2, 500, 10 );
                            }
                        }
                        else
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U570[l_U503], 0 );
                        }
                    }
                }
            }
            if (l_U503 == 2)
            {
                if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U570[l_U503], l_U555[l_U503] ))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U570[l_U503], 49, ref l_U662[l_U503] );
                            if (l_U662[l_U503] == 7)
                            {
                                TASK_CAR_MISSION_PED_TARGET( l_U570[l_U503], l_U555[l_U503], sub_2672(), 1, 5.00000000, 2, 500, 10 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_16195()
{
    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (l_U593[l_U503])
        {
            if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                {
                    if (IS_CHAR_IN_CAR( l_U570[l_U503], l_U555[l_U503] ))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U570[l_U503], 49, ref l_U662[l_U503] );
                        if (l_U662[l_U503] == 7)
                        {
                            TASK_CAR_MISSION( l_U570[l_U503], l_U555[l_U503], l_U559, 8, 20.00000000, 3, 300, 10 );
                        }
                    }
                }
            }
        }
        else if (l_U589[l_U503])
        {
            if (l_U503 == 0)
            {
                if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U570[l_U503], l_U555[l_U503] ))
                        {
                            if (LOCATE_CHAR_IN_CAR_3D( l_U570[l_U503], l_U366[l_U504]._fU0, l_U366[l_U504]._fU4, l_U366[l_U504]._fU8, 4.50000000, 4.50000000, 4.50000000, 0 ))
                            {
                                l_U504++;
                                if (l_U504 > 3)
                                {
                                    l_U504 = 0;
                                }
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( l_U570[l_U503], 15, ref l_U662[l_U503] );
                                if (l_U662[l_U503] == 7)
                                {
                                    TASK_CAR_DRIVE_TO_COORD( l_U570[l_U503], l_U555[l_U503], l_U366[l_U504]._fU0, l_U366[l_U504]._fU4, l_U366[l_U504]._fU8, 15.00000000, 0, l_U677, 6, 4.00000000, 5 );
                                }
                            }
                        }
                    }
                }
            }
            if (l_U503 == 1)
            {
                if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U570[l_U503], l_U555[l_U503] ))
                        {
                            if (LOCATE_CHAR_IN_CAR_3D( l_U570[l_U503], l_U397[l_U505]._fU0, l_U397[l_U505]._fU4, l_U397[l_U505]._fU8, 4.50000000, 4.50000000, 4.50000000, 0 ))
                            {
                                l_U505++;
                                if (l_U505 > 4)
                                {
                                    l_U505 = 0;
                                }
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( l_U570[l_U503], 15, ref l_U662[l_U503] );
                                if (l_U662[l_U503] == 7)
                                {
                                    TASK_CAR_DRIVE_TO_COORD( l_U570[l_U503], l_U555[l_U503], l_U397[l_U505]._fU0, l_U397[l_U505]._fU4, l_U397[l_U505]._fU8, 15.00000000, 0, l_U677, 6, 4.00000000, 5 );
                                }
                            }
                        }
                    }
                }
            }
            if (l_U503 == 2)
            {
                if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U570[l_U503], l_U555[l_U503] ))
                        {
                            if (LOCATE_CHAR_IN_CAR_3D( l_U570[l_U503], l_U397[l_U506]._fU0, l_U397[l_U506]._fU4, l_U397[l_U506]._fU8, 4.50000000, 4.50000000, 4.50000000, 0 ))
                            {
                                l_U506++;
                                if (l_U506 > 3)
                                {
                                    l_U506 = 0;
                                }
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( l_U570[l_U503], 15, ref l_U662[l_U503] );
                                if (l_U662[l_U503] == 7)
                                {
                                    TASK_CAR_DRIVE_TO_COORD( l_U570[l_U503], l_U555[l_U503], l_U397[l_U506]._fU0, l_U397[l_U506]._fU4, l_U397[l_U506]._fU8, 15.00000000, 0, l_U677, 6, 4.00000000, 5 );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_17535()
{
    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (l_U593[l_U503])
        {
            if (NOT (IS_CHAR_INJURED( l_U574[l_U503] )))
            {
                if (NOT l_U601[l_U503])
                {
                    l_U601[l_U503] = 1;
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U574[l_U503], 0 );
                    SET_CHAR_ACCURACY( l_U574[l_U503], 1 );
                }
                else if (DOES_VEHICLE_EXIST( l_U555[l_U503] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_2672(), l_U555[l_U503] )))
                        {
                            if (IS_CHAR_IN_CAR( l_U574[l_U503], l_U555[l_U503] ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U574[l_U503], 91, ref l_U666[l_U503] );
                                if (l_U666[l_U503] == 7)
                                {
                                    TASK_COMBAT( l_U574[l_U503], sub_2672() );
                                }
                            }
                            else
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U574[l_U503], 1 );
                                GET_SCRIPT_TASK_STATUS( l_U574[l_U503], 25, ref l_U666[l_U503] );
                                if (l_U666[l_U503] == 7)
                                {
                                    TASK_SMART_FLEE_CHAR( l_U574[l_U503], sub_2672(), 500.00000000, -1 );
                                }
                            }
                        }
                        else if (IS_CHAR_IN_CAR( l_U574[l_U503], l_U555[l_U503] ))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U574[l_U503], 1 );
                            GET_SCRIPT_TASK_STATUS( l_U574[l_U503], 30, ref l_U666[l_U503] );
                            if (l_U666[l_U503] == 7)
                            {
                                TASK_LEAVE_CAR_IMMEDIATELY( l_U574[l_U503], l_U555[l_U503] );
                            }
                        }
                        else
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U574[l_U503], 1 );
                            GET_SCRIPT_TASK_STATUS( l_U574[l_U503], 25, ref l_U666[l_U503] );
                            if (l_U666[l_U503] == 7)
                            {
                                TASK_SMART_FLEE_CHAR( l_U574[l_U503], sub_2672(), 500.00000000, -1 );
                            }
                        }
                    }
                    else if (DOES_CHAR_EXIST( l_U574[l_U503] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U574[l_U503] )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U574[l_U503] ))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U574[l_U503], 1 );
                                GET_SCRIPT_TASK_STATUS( l_U574[l_U503], 31, ref l_U666[l_U503] );
                                if (l_U666[l_U503] == 7)
                                {
                                    TASK_LEAVE_ANY_CAR( l_U574[l_U503] );
                                }
                            }
                            else
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U574[l_U503], 1 );
                                GET_SCRIPT_TASK_STATUS( l_U574[l_U503], 25, ref l_U666[l_U503] );
                                if (l_U666[l_U503] == 7)
                                {
                                    TASK_SMART_FLEE_CHAR( l_U574[l_U503], sub_2672(), 500.00000000, -1 );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_18519()
{
    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (DOES_VEHICLE_EXIST( l_U555[l_U503] ))
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U555[l_U503] )))
            {
                if (DOES_VEHICLE_EXIST( l_U559 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U559 ))
                    {
                        if (IS_CHAR_IN_CAR( sub_2672(), l_U559 ))
                        {
                            if (l_U522 == 0)
                            {
                                if (NOT l_U597[l_U503])
                                {
                                    if (HAVE_ANIMS_LOADED( "MISSBIKE_GESTFREE" ))
                                    {
                                        TASK_PLAY_ANIM( sub_2672(), "GEST_damn", "MISSBIKE_GESTFREE", 12.00000000, 0, 0, 0, 0, -1 );
                                    }
                                    l_U522++;
                                    l_U512++;
                                    sub_11070( ref l_U694, 0 );
                                    sub_11070( ref l_U688, 0 );
                                    sub_11213( "E1J4_FUCK", ref l_U688, 6, 1 );
                                    l_U630 = 1;
                                    if (l_U643)
                                    {
                                        sub_2775();
                                        l_U643 = 0;
                                    }
                                    l_U597[l_U503] = 1;
                                }
                            }
                            if (l_U522 == 1)
                            {
                                if (NOT l_U597[l_U503])
                                {
                                    if (HAVE_ANIMS_LOADED( "MISSBIKE_GESTFREE" ))
                                    {
                                        TASK_PLAY_ANIM( sub_2672(), "GEST_hey", "MISSBIKE_GESTFREE", 12.00000000, 0, 0, 0, 0, -1 );
                                    }
                                    l_U522++;
                                    l_U512++;
                                    sub_11070( ref l_U694, 0 );
                                    sub_11070( ref l_U688, 0 );
                                    sub_11213( "E1J4_FUCK", ref l_U688, 6, 1 );
                                    l_U630 = 1;
                                    if (l_U643)
                                    {
                                        sub_2775();
                                        l_U643 = 0;
                                    }
                                    l_U597[l_U503] = 1;
                                }
                            }
                            if (l_U522 == 2)
                            {
                                if (NOT l_U597[l_U503])
                                {
                                    if (HAVE_ANIMS_LOADED( "MISSBIKE_GESTFREE" ))
                                    {
                                        TASK_PLAY_ANIM( sub_2672(), "GEST_thumbsup", "MISSBIKE_GESTFREE", 12.00000000, 0, 0, 0, 0, -1 );
                                    }
                                    l_U522++;
                                    l_U512++;
                                    sub_11070( ref l_U694, 0 );
                                    sub_11070( ref l_U688, 0 );
                                    sub_11213( "E1J4_FUCK", ref l_U688, 6, 1 );
                                    if (l_U643)
                                    {
                                        sub_2775();
                                        l_U643 = 0;
                                    }
                                    l_U597[l_U503] = 1;
                                }
                            }
                            if (l_U630)
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (NOT (l_U524 >= 2))
                                    {
                                        l_U524++;
                                        l_U630 = 0;
                                    }
                                }
                            }
                        }
                        else if (NOT l_U597[l_U503])
                        {
                            l_U522++;
                            l_U512++;
                            sub_11070( ref l_U694, 0 );
                            sub_11070( ref l_U688, 0 );
                            sub_11213( "E1J4_FUCK", ref l_U688, 6, 1 );
                            if (l_U643)
                            {
                                sub_2775();
                                l_U643 = 0;
                            }
                            l_U597[l_U503] = 1;
                        }
                    }
                    else if (NOT l_U597[l_U503])
                    {
                        l_U522++;
                        l_U512++;
                        sub_11070( ref l_U694, 0 );
                        sub_11070( ref l_U688, 0 );
                        sub_11213( "E1J4_FUCK", ref l_U688, 6, 1 );
                        if (l_U643)
                        {
                            sub_2775();
                            l_U643 = 0;
                        }
                        l_U597[l_U503] = 1;
                    }
                }
                else if (NOT l_U597[l_U503])
                {
                    l_U522++;
                    l_U512++;
                    sub_11070( ref l_U694, 0 );
                    sub_11070( ref l_U688, 0 );
                    sub_11213( "E1J4_FUCK", ref l_U688, 6, 1 );
                    if (l_U643)
                    {
                        sub_2775();
                        l_U643 = 0;
                    }
                    l_U597[l_U503] = 1;
                }
            }
        }
    }
    if (l_U606)
    {
        if (l_U597[2])
        {
            SWITCH_ROADS_ON( l_U468[0]._fU0, l_U468[0]._fU4, l_U468[0]._fU8, l_U468[1]._fU0, l_U468[1]._fU4, l_U468[1]._fU8 );
        }
    }
    if (l_U597[0])
    {
        if (l_U597[1])
        {
            if (l_U597[2])
            {
                l_U354 = 7;
            }
        }
    }
    return;
}

void sub_19909()
{
    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (l_U593[l_U503])
        {
            if (DOES_CHAR_EXIST( l_U570[l_U503] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                {
                    if (DOES_VEHICLE_EXIST( l_U555[l_U503] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U570[l_U503], l_U555[l_U503] )))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U570[l_U503], 1 );
                                GET_SCRIPT_TASK_STATUS( l_U570[l_U503], 25, ref l_U666[l_U503] );
                                if (l_U666[l_U503] == 7)
                                {
                                    TASK_SMART_FLEE_CHAR( l_U570[l_U503], sub_2672(), 500.00000000, -1 );
                                }
                            }
                        }
                        else if (IS_CHAR_IN_ANY_CAR( l_U570[l_U503] ))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U570[l_U503], 1 );
                            GET_SCRIPT_TASK_STATUS( l_U570[l_U503], 31, ref l_U662[l_U503] );
                            if (l_U662[l_U503] == 7)
                            {
                                TASK_LEAVE_ANY_CAR( l_U570[l_U503] );
                            }
                        }
                        else
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U570[l_U503], 1 );
                            GET_SCRIPT_TASK_STATUS( l_U570[l_U503], 25, ref l_U662[l_U503] );
                            if (l_U662[l_U503] == 7)
                            {
                                TASK_SMART_FLEE_CHAR( l_U570[l_U503], sub_2672(), 500.00000000, -1 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_20435()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;

    array(ref uVar5, 2);
    iVar12 = 0;
    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (l_U593[l_U503])
        {
            iVar12++;
        }
    }
    if (iVar12 == 2)
    {
        for ( l_U503 = 0; l_U503 < 3; l_U503++ )
        {
            if (NOT l_U593[l_U503])
            {
                l_U566 = l_U555[l_U503];
            }
        }
        for ( l_U503 = 0; l_U503 < 2; l_U503++ )
        {
            if (NOT (DOES_VEHICLE_EXIST( l_U563[l_U503] )))
            {
                if (IS_VEH_DRIVEABLE( l_U566 ))
                {
                    GET_CAR_COORDINATES( l_U566, ref uVar2, ref uVar3, ref uVar4 );
                    GET_NTH_CLOSEST_CAR_NODE( uVar2, uVar3, uVar4, l_U503 + 1, ref uVar5[l_U503]._fU0, ref uVar5[l_U503]._fU4, ref uVar5[l_U503]._fU8 );
                    CREATE_CAR( l_U682, uVar5[l_U503]._fU0, uVar5[l_U503]._fU4, uVar5[l_U503]._fU8, ref l_U563[l_U503], 1 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U563[l_U503] );
                }
            }
            if (NOT (DOES_CHAR_EXIST( l_U581[l_U503] )))
            {
                CREATE_CHAR_INSIDE_CAR( l_U563[l_U503], 26, l_U679, ref l_U581[l_U503] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U581[l_U503] );
                GIVE_WEAPON_TO_CHAR( l_U581[l_U503], 3, 0, 0 );
                SET_CHAR_CURRENT_WEAPON_VISIBLE( l_U581[l_U503], 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U581[l_U503], 25 );
                SET_CHAR_RELATIONSHIP( l_U581[l_U503], 5, 0 );
                SET_CHAR_DECISION_MAKER( l_U581[l_U503], l_U707 );
                SET_COMBAT_DECISION_MAKER( l_U581[l_U503], l_U708 );
                SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U581[l_U503], 0 );
                SET_CHAR_WILL_DO_DRIVEBYS( l_U581[l_U503], 1 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U581[l_U503], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U581[l_U503], 1 );
                SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U581[l_U503], 1 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U584[l_U503] )))
            {
                CREATE_CHAR_AS_PASSENGER( l_U563[l_U503], 26, l_U679, 0, ref l_U584[l_U503] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U584[l_U503] );
                GIVE_WEAPON_TO_CHAR( l_U584[l_U503], 7, 500, 0 );
                SET_CHAR_CURRENT_WEAPON_VISIBLE( l_U584[l_U503], 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U584[l_U503], 25 );
                SET_CHAR_RELATIONSHIP( l_U584[l_U503], 5, 0 );
                SET_CHAR_DECISION_MAKER( l_U584[l_U503], l_U707 );
                SET_COMBAT_DECISION_MAKER( l_U584[l_U503], l_U708 );
                SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U584[l_U503], 1 );
                SET_CHAR_WILL_DO_DRIVEBYS( l_U584[l_U503], 1 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U584[l_U503], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U584[l_U503], 1 );
                SET_CHAR_ACCURACY( l_U584[l_U503], 1 );
                SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U584[l_U503], 1 );
            }
        }
    }
    return;
}

void sub_21465()
{
    for ( l_U503 = 0; l_U503 < 2; l_U503++ )
    {
        if (IS_VEH_DRIVEABLE( l_U563[l_U503] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U581[l_U503] )))
            {
                if (IS_CHAR_IN_CAR( l_U581[l_U503], l_U563[l_U503] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U566 ))
                    {
                        if (DOES_CHAR_EXIST( l_U584[l_U503] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U584[l_U503] )))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U581[l_U503], 49, ref l_U670[l_U503] );
                                if (l_U670[l_U503] == 7)
                                {
                                    if (l_U503 == 0)
                                    {
                                        TASK_CAR_MISSION( l_U581[l_U503], l_U563[l_U503], l_U566, 10, 30.00000000, 2, 1, 1 );
                                    }
                                    if (l_U503 == 1)
                                    {
                                        TASK_CAR_MISSION( l_U581[l_U503], l_U563[l_U503], l_U566, 11, 30.00000000, 2, 1, 1 );
                                    }
                                }
                            }
                            else if (NOT l_U640[l_U503])
                            {
                                TASK_CAR_MISSION_PED_TARGET( l_U581[l_U503], l_U563[l_U503], sub_2672(), 8, 20.00000000, 2, 300, 10 );
                                l_U640[l_U503] = 1;
                            }
                            GET_SCRIPT_TASK_STATUS( l_U581[l_U503], 49, ref l_U670[l_U503] );
                            if (l_U670[l_U503] == 7)
                            {
                                TASK_CAR_MISSION_PED_TARGET( l_U581[l_U503], l_U563[l_U503], sub_2672(), 8, 20.00000000, 2, 300, 10 );
                            }
                        }
                    }
                }
                else
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U581[l_U503], 1 );
                    GET_SCRIPT_TASK_STATUS( l_U581[l_U503], 25, ref l_U670[l_U503] );
                    if (l_U670[l_U503] == 7)
                    {
                        TASK_SMART_FLEE_CHAR( l_U581[l_U503], sub_2672(), 500.00000000, -1 );
                    }
                }
            }
        }
    }
    return;
}

void sub_22121()
{
    if (l_U354 == 5)
    {
        for ( l_U503 = 0; l_U503 < 2; l_U503++ )
        {
            if (IS_VEH_DRIVEABLE( l_U563[l_U503] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U584[l_U503] )))
                {
                    if (DOES_CHAR_EXIST( l_U581[l_U503] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U581[l_U503] )))
                        {
                            if (IS_CHAR_IN_CAR( l_U581[l_U503], l_U563[l_U503] ))
                            {
                                if (IS_CHAR_IN_CAR( l_U584[l_U503], l_U563[l_U503] ))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U584[l_U503], 49, ref l_U673[l_U503] );
                                    if (l_U673[l_U503] == 7)
                                    {
                                        TASK_CAR_MISSION_PED_TARGET( l_U584[l_U503], l_U563[l_U503], sub_2672(), 6, 30.00000000, 2, 1, 1 );
                                    }
                                }
                            }
                            else if (IS_CHAR_IN_ANY_CAR( l_U584[l_U503] ))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U584[l_U503], 1 );
                                GET_SCRIPT_TASK_STATUS( l_U584[l_U503], 31, ref l_U673[l_U503] );
                                if (l_U673[l_U503] == 7)
                                {
                                    TASK_LEAVE_ANY_CAR( l_U584[l_U503] );
                                }
                            }
                            else
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U584[l_U503], 1 );
                                GET_SCRIPT_TASK_STATUS( l_U584[l_U503], 25, ref l_U673[l_U503] );
                                if (l_U673[l_U503] == 7)
                                {
                                    TASK_SMART_FLEE_CHAR( l_U584[l_U503], sub_2672(), 500.00000000, -1 );
                                }
                            }
                        }
                        else if (IS_CHAR_IN_ANY_CAR( l_U584[l_U503] ))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U584[l_U503], 1 );
                            GET_SCRIPT_TASK_STATUS( l_U584[l_U503], 31, ref l_U673[l_U503] );
                            if (l_U673[l_U503] == 7)
                            {
                                TASK_LEAVE_ANY_CAR( l_U584[l_U503] );
                            }
                        }
                        else
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U584[l_U503], 1 );
                            GET_SCRIPT_TASK_STATUS( l_U584[l_U503], 25, ref l_U673[l_U503] );
                            if (l_U673[l_U503] == 7)
                            {
                                TASK_SMART_FLEE_CHAR( l_U584[l_U503], sub_2672(), 500.00000000, -1 );
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U354 == 7)
    {
        for ( l_U503 = 0; l_U503 < 2; l_U503++ )
        {
            if (DOES_VEHICLE_EXIST( l_U563[l_U503] ))
            {
                if (DOES_CHAR_EXIST( l_U584[l_U503] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U563[l_U503] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U584[l_U503] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U584[l_U503], 1 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_23062()
{
    if (l_U631)
    {
        if (DOES_CHAR_EXIST( l_U587 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U587 )))
            {
                if (DOES_VEHICLE_EXIST( l_U567 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U567 ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_2672(), l_U567 )))
                        {
                            if (IS_CHAR_IN_CAR( l_U587, l_U567 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U587, 91, ref l_U676 );
                                if (l_U676 == 7)
                                {
                                    TASK_COMBAT( l_U587, sub_2672() );
                                }
                            }
                            else
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U587, 1 );
                                GET_SCRIPT_TASK_STATUS( l_U587, 25, ref l_U676 );
                                if (l_U676 == 7)
                                {
                                    TASK_SMART_FLEE_CHAR( l_U587, sub_2672(), 500.00000000, -1 );
                                }
                            }
                        }
                        else if (IS_CHAR_IN_CAR( l_U587, l_U567 ))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U587, 1 );
                            GET_SCRIPT_TASK_STATUS( l_U587, 30, ref l_U676 );
                            if (l_U676 == 7)
                            {
                                TASK_LEAVE_CAR_IMMEDIATELY( l_U587, l_U567 );
                            }
                        }
                        else
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U587, 1 );
                            GET_SCRIPT_TASK_STATUS( l_U587, 25, ref l_U676 );
                            if (l_U676 == 7)
                            {
                                TASK_SMART_FLEE_CHAR( l_U587, sub_2672(), 500.00000000, -1 );
                            }
                        }
                    }
                    else if (IS_CHAR_IN_ANY_CAR( l_U587 ))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U587, 1 );
                        GET_SCRIPT_TASK_STATUS( l_U587, 31, ref l_U676 );
                        if (l_U676 == 7)
                        {
                            TASK_LEAVE_ANY_CAR( l_U587 );
                        }
                    }
                    else
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U587, 1 );
                        GET_SCRIPT_TASK_STATUS( l_U587, 25, ref l_U676 );
                        if (l_U676 == 7)
                        {
                            TASK_SMART_FLEE_CHAR( l_U587, sub_2672(), 500.00000000, -1 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_23623()
{
    if (NOT l_U616[0])
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            GET_GAME_TIMER( ref l_U517 );
            CLEAR_PRINTS();
            PRINT_NOW( "J5_01", 7500, 1 );
            l_U616[0] = 1;
        }
    }
    if (NOT (g_U39247 >= 2))
    {
        if (l_U616[0])
        {
            if (NOT l_U622[0])
            {
                GET_GAME_TIMER( ref l_U518 );
                l_U519 = l_U518 - l_U517;
                if (l_U519 > 8500)
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "J5_HELP1" )))
                    {
                        CLEAR_PRINTS();
                        PRINT_HELP( "J5_HELP1" );
                        GET_GAME_TIMER( ref l_U517 );
                        l_U622[0] = 1;
                    }
                }
            }
            if (l_U622[0])
            {
                if (NOT l_U622[1])
                {
                    GET_GAME_TIMER( ref l_U518 );
                    l_U519 = l_U518 - l_U517;
                    if (l_U519 > 7500)
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "J5_HELP2" )))
                        {
                            CLEAR_PRINTS();
                            PRINT_HELP( "J5_HELP2" );
                            GET_GAME_TIMER( ref l_U517 );
                            l_U622[1] = 1;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_24002()
{
    if (NOT (g_U39247 >= 2))
    {
        if (NOT l_U622[2])
        {
            if (l_U541 == 1)
            {
                if (NOT (sub_10886( l_U688 )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "J5_HELP1" )))
                    {
                        CLEAR_PRINTS();
                        PRINT_HELP( "J5_HELP1" );
                        GET_GAME_TIMER( ref l_U517 );
                        l_U622[2] = 1;
                    }
                }
            }
        }
        if (l_U622[2])
        {
            if (NOT l_U622[3])
            {
                GET_GAME_TIMER( ref l_U518 );
                l_U519 = l_U518 - l_U517;
                if (l_U519 > 7500)
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "J5_HELP2" )))
                    {
                        CLEAR_PRINTS();
                        PRINT_HELP( "J5_HELP2" );
                        GET_GAME_TIMER( ref l_U517 );
                        l_U622[3] = 1;
                    }
                }
            }
        }
    }
    else if (NOT l_U622[2])
    {
        if (l_U541 == 1)
        {
            if (NOT (sub_10886( l_U688 )))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "J5_HELP3" )))
                {
                    CLEAR_PRINTS();
                    PRINT_HELP( "J5_HELP3" );
                    GET_GAME_TIMER( ref l_U517 );
                    l_U622[2] = 1;
                }
            }
        }
    }
    return;
}

void sub_24400()
{
    if (l_U354 == 5)
    {
        ;
    }
    return;
}

void sub_24429()
{
    if (l_U354 == 5)
    {
        for ( l_U503 = 0; l_U503 < 3; l_U503++ )
        {
            if (NOT l_U597[l_U503])
            {
                if (DOES_VEHICLE_EXIST( l_U555[l_U503] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
                    {
                        if (DOES_CHAR_EXIST( l_U570[l_U503] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                            {
                                if (IS_CHAR_IN_CAR( l_U570[l_U503], l_U555[l_U503] ))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2672(), l_U555[l_U503], 100.00000000, 100.00000000, 100.00000000, 0 ))
                                    {
                                        sub_24675( ref l_U570[l_U503] );
                                        l_U643 = 1;
                                    }
                                }
                                else
                                {
                                    l_U643 = 0;
                                    sub_2775();
                                }
                            }
                            else
                            {
                                l_U643 = 0;
                                sub_2775();
                            }
                        }
                    }
                    else
                    {
                        l_U643 = 0;
                        sub_2775();
                    }
                }
            }
        }
    }
    return;
}

void sub_24675(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U18)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U16) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U17 + 500))
        {
            l_U16 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_2672() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_24835())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U18)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U17 );
            l_U16 = 1;
            l_U15 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U15) AND (NOT l_U16))
        {
            if (l_U18)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U15 = 1;
        }
    }
    else if (l_U15)
    {
        if (l_U18)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U15 = 0;
    };;;
    return;
}

int sub_24835()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_25402()
{
    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (NOT l_U597[l_U503])
        {
            if (l_U593[l_U503])
            {
                if (DOES_VEHICLE_EXIST( l_U555[l_U503] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2672(), l_U555[l_U503], 30.00000000, 30.00000000, 30.00000000, 0 ))
                        {
                            if (NOT (sub_10886( l_U688 )))
                            {
                                GET_GAME_TIMER( ref l_U527 );
                                l_U528 = l_U527 - l_U526;
                                if (l_U528 > 10000)
                                {
                                    if (DOES_CHAR_EXIST( l_U570[l_U503] ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U570[l_U503] )))
                                        {
                                            if (IS_CHAR_IN_CAR( l_U570[l_U503], l_U555[l_U503] ))
                                            {
                                                if (NOT (IS_AMBIENT_SPEECH_DISABLED( l_U570[l_U503] )))
                                                {
                                                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U570[l_U503] )))
                                                    {
                                                        SAY_AMBIENT_SPEECH( l_U570[l_U503], "ANGELS_OF_DEATH_TAUNT_LOST", 1, 1, 2 );
                                                        GET_GAME_TIMER( ref l_U526 );
                                                    }
                                                }
                                            }
                                            else if (NOT (IS_CHAR_INJURED( l_U574[l_U503] )))
                                            {
                                                if (IS_CHAR_IN_CAR( l_U574[l_U503], l_U555[l_U503] ))
                                                {
                                                    if (NOT (IS_AMBIENT_SPEECH_DISABLED( l_U574[l_U503] )))
                                                    {
                                                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U574[l_U503] )))
                                                        {
                                                            SAY_AMBIENT_SPEECH( l_U574[l_U503], "ANGELS_OF_DEATH_TAUNT_LOST", 1, 1, 2 );
                                                            GET_GAME_TIMER( ref l_U526 );
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else if (NOT (IS_CHAR_INJURED( l_U574[l_U503] )))
                                        {
                                            if (IS_CHAR_IN_CAR( l_U574[l_U503], l_U555[l_U503] ))
                                            {
                                                if (NOT (IS_AMBIENT_SPEECH_DISABLED( l_U574[l_U503] )))
                                                {
                                                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U574[l_U503] )))
                                                    {
                                                        SAY_AMBIENT_SPEECH( l_U574[l_U503], "ANGELS_OF_DEATH_TAUNT_LOST", 1, 1, 2 );
                                                        GET_GAME_TIMER( ref l_U526 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_26193()
{
    for ( l_U503 = 0; l_U503 < 3; l_U503++ )
    {
        if (NOT l_U645[l_U503])
        {
            if (NOT l_U593[l_U503])
            {
                if (DOES_VEHICLE_EXIST( l_U555[l_U503] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U555[l_U503] ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2672(), l_U555[l_U503], 200.00000000, 200.00000000, 200.00000000, 0 ))
                        {
                            if (NOT l_U649[l_U503])
                            {
                                GET_GAME_TIMER( ref l_U529[l_U503] );
                                l_U649[l_U503] = 1;
                            }
                            else
                            {
                                GET_GAME_TIMER( ref l_U533[l_U503] );
                                l_U537[l_U503] = l_U533[l_U503] - l_U529[l_U503];
                                if (l_U537[l_U503] > 20000)
                                {
                                    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2672(), l_U555[l_U503], 75.00000000, 75.00000000, 75.00000000, 0 )))
                                    {
                                        if (NOT (sub_10886( l_U688 )))
                                        {
                                            if (NOT (sub_10886( l_U694 )))
                                            {
                                                sub_11213( "E1J4_FIND", ref l_U694, 6, 1 );
                                                l_U645[l_U503] = 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if (NOT l_U645[l_U503])
            {
                l_U645[l_U503] = 1;
            }
        }
    }
    return;
}

void sub_26657()
{
    if (l_U354 == 5)
    {
        if (NOT l_U653)
        {
            if (((l_U593[0]) || (l_U593[1])) || (l_U593[2]))
            {
                SET_PED_IS_BLIND_RAGING( sub_2672(), 1 );
                l_U653 = 1;
            }
        }
    }
    return;
}

void sub_26752()
{
    CLEAR_PRINTS();
    if (l_U523 == 1)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "J5_F1", 7500, 1 );
    }
    sub_26806();
    l_U588 = 0;
    return;
}

void sub_26806()
{
    sub_26815();
    return;
}

void sub_26815()
{
    int iVar2;

    iVar2 = 1;
    sub_26829( iVar2 );
    sub_1489( iVar2 );
    return;
}

void sub_26829(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_9245(), 150 );
    CLEAR_HELP();
    sub_348( uParam0 );
    return;
}

void sub_26943()
{
    g_U24 = 82;
    sub_26958();
    sub_27020( 1, "E1J4_CPASS", "E1J4AUD", 0 );
    CLEAR_WANTED_LEVEL( sub_9245() );
    sub_27618();
    l_U588 = 0;
    return;
}

void sub_26958()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_27020(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_27064( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_27064(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_27618()
{
    sub_27627();
    return;
}

void sub_27627()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_27645();
    sub_27704( iVar2, iVar3, iVar4 );
    return;
}

void sub_27645()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_27704(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 1;
    sub_27735( iVar5, uParam0, uParam1, uParam2, "Friend_2" );
    return;
}

void sub_27735(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_27831( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_27831( ref cVar9 );
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
            sub_27831( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_27831( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_27831( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_27831( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_28408( uParam0, iVar7 );;;
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
    if (NOT (sub_28856( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_9245() );
    sub_1498();
    bVar28 = true;
    uVar29 = sub_28408( uParam0, iVar7 );
    uVar30 = sub_1122( uParam0 );
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
                sub_33310( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_33744();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_33829( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_33908( uParam0 );
                sub_33947( 0 );
                sub_1398( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_34136();
        }
    }
    if (bParam2)
    {
        sub_33744();
        sub_34235();
        sub_33947( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_33744();
        sub_34287();
        sub_33947( 0 );
        sub_1398( uVar30, 0 );
    }
    sub_1009();
    return;
}

void sub_27831(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_28408(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_1353( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_28856(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_28952( uParam1 );
        break;
        case 1:
        bVar8 = sub_29647( uParam1 );
        break;
        case 2:
        bVar8 = sub_30380( uParam1 );
        break;
        case 3:
        bVar8 = sub_30617( uParam1 );
        break;
        case 4:
        bVar8 = sub_30783( uParam1 );
        break;
        case 5:
        bVar8 = sub_30982( uParam1 );
        break;
        case 6:
        bVar8 = sub_31177( uParam1 );
        break;
        case 7:
        bVar8 = sub_31382( uParam1 );
        break;
        case 8:
        bVar8 = sub_31587( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_29995( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_28408( uParam0, uParam1 );
    if (bParam3)
    {
        sub_31873( uVar9, uParam0 );
    }
    return 1;
}

int sub_28952(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_29049( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_29049( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_29049( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_29049( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_29049( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_29049( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_29554( "Contact 1", 1 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_29554( "Contact 1", 0 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_29049(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_29060( uParam1 );
    sub_29234( uParam0, 0, uParam2 );
    sub_29234( uParam0, 1, uParam3 );
    sub_29234( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_27645();
    return;
}

void sub_29060(unknown uParam0)
{
    ADD_SCORE( sub_9245(), uParam0 );
    sub_29085( uParam0 );
    return;
}

void sub_29085(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1353( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_29234(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_29554(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_29647(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_29049( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_29049( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_29049( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_29049( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_29049( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_29049( iVar3, 0, sub_29873(), sub_30139(), 0, 0 );
        break;
        default:
        sub_29554( "Contact 2", 1 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_29554( "Contact 2", 0 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29873()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_29995( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_29995(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_30139()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_29995( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_30380(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_29049( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_29049( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_29049( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_29049( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_29554( "Contact 3", 1 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_29554( "Contact 3", 0 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30617(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_29049( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_29049( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_29554( "Friend 4", 1 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_29554( "Friend 4", 0 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30783(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_29049( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_29049( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_29049( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_29554( "Contact 5", 1 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_29554( "Contact 5", 0 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30982(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_29049( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_29049( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_29049( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_29554( "Contact 6", 1 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_29554( "Contact 6", 0 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_31177(unknown uParam0)
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
        sub_29049( iVar3, 0, sub_29873(), sub_30139(), 0, 0 );
        break;
        default:
        sub_29554( "Friend 7", 1 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_29554( "Friend 7", 0 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_31382(unknown uParam0)
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
        sub_29049( iVar3, 0, sub_29873(), sub_30139(), 0, 0 );
        break;
        default:
        sub_29554( "Friend 8", 1 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_29554( "Friend 8", 0 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_31587(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_29049( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_29554( "Contact 9", 1 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_29554( "Contact 9", 0 );
        sub_29049( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_31873(int iParam0, int iParam1)
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
    if (sub_31934( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_32652( iParam1 );
    }
    return;
}

int sub_31934(int iParam0, int iParam1)
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
            sub_32074( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_32074(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_32244( 0 );
    return;
}

void sub_32244(boolean bParam0)
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
        sub_32489();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_32489()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_32652(int iParam0)
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
        sub_32883( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_32883( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_32883( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_32883( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_32883( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_32883( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_32883(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_33310(unknown uParam0, unknown uParam1)
{
    sub_33329( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_33329(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_33744()
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

int sub_33829(int iParam0, int iParam1)
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

void sub_33908(unknown uParam0)
{
    sub_870();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_33947(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_33998( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_33998(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_34136()
{
    sub_34145();
    return;
}

void sub_34145()
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

void sub_34235()
{
    sub_34145();
    return;
}

void sub_34287()
{
    sub_34145();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}
