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
    l_U110 = -1;
    l_U124 = 15.00000000;
    l_U125 = 35.00000000;
    l_U126 = 16.00000000;
    l_U127 = 0.00000000;
    l_U133 = 1000.00000000;
    l_U134 = 7500.00000000;
    l_U143 = 1;
    l_U144 = 30.00000000;
    l_U145 = 30.00000000;
    l_U146 = 2.00000000;
    l_U156 = 0.00000000;
    l_U157 = 0.00000000;
    l_U169 = 1;
    l_U170 = 0;
    l_U171 = -1;
    l_U172 = 1;
    l_U173 = -1;
    l_U174 = -1;
    l_U175 = 15.00000000;
    l_U202 = 0;
    l_U203 = -1949702649;
    l_U204 = 2075870698;
    l_U209 = 0.12000000;
    l_U369 = 0;
    l_U373 = 0.00000000;
    l_U375 = 0;
    l_U376 = 0;
    l_U377 = 0;
    l_U378 = 0;
    l_U379 = 0;
    l_U380 = 1;
    l_U381 = 0;
    l_U382 = 0;
    l_U383 = 0;
    l_U385 = 0;
    l_U386 = 0;
    l_U387 = 0;
    l_U388 = 0;
    l_U389 = 1;
    l_U390 = 0;
    l_U417 = 0;
    l_U421 = 0;
    l_U422 = -1;
    l_U423 = 1;
    l_U424 = "NONE";
    l_U451 = 0;
    l_U452 = 0;
    l_U453 = {0.00000000, 0.00000000, 0.00000000};
    l_U456 = 0.00000000;
    l_U457 = nil;
    l_U458 = 0;
    l_U459 = nil;
    l_U460 = nil;
    l_U461 = 0;
    l_U462 = 0;
    l_U463 = 0;
    l_U464 = 0;
    l_U471 = 0;
    l_U472 = 0;
    l_U500 = g_U23;
    l_U501 = 0;
    l_U502 = 0;
    l_U503 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 12;
    l_U507 = 0;
    l_U512 = 0;
    l_U514 = -1;
    l_U515 = 4;
    l_U536 = 0;
    l_U548 = 0;
    l_U549 = 0;
    l_U554 = 0;
    l_U555 = "";
    l_U556 = 0;
    l_U569 = 0;
    l_U573 = 0;
    l_U574 = 1;
    l_U575 = 0;
    l_U576 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U579 = "JOHNNY";
    l_U605 = 0.00000000;
    l_U609 = 0;
    l_U610 = 0;
    l_U611 = 0;
    l_U612 = 0;
    l_U1079 = 0;
    l_U1080 = 0;
    l_U1081 = -1;
    l_U1082 = 0;
    l_U1083 = 0;
    l_U1145 = 0.00000000;
    l_U1146 = 0;
    l_U1147 = nil;
    l_U1148 = 0;
    l_U1149 = 0;
    l_U1150 = 22;
    l_U1151 = 0;
    l_U1152 = 0;
    l_U1153 = 22;
    l_U1154 = 8;
    l_U1155 = 22;
    l_U1156 = 22;
    l_U1157 = 0;
    l_U1158 = 0;
    l_U1159 = 0;
    l_U1160 = -1;
    l_U1168 = 0;
    l_U1169 = 0;
    l_U1170 = 0;
    l_U1171 = 22;
    l_U1172 = 0;
    l_U1173 = 0;
    l_U1174 = 0;
    l_U1175 = 0;
    l_U1176 = 0;
    l_U1177 = 0;
    l_U1178 = 0;
    l_U1179 = 0;
    l_U1182 = 0;
    l_U1183 = 0;
    l_U1207 = -1;
    l_U1208 = 0;
    l_U1213 = 0;
    l_U1214 = -1;
    l_U1215 = 0;
    l_U1216 = 0;
    l_U1221 = 1;
    l_U1222 = 1;
    l_U1347 = 8;
    sub_984();
    sub_1368( -1726.58100000, 347.14640000, 24.44400000, 70.05640000, 1 );
    sub_2310();
    g_U15728[20] = 1;
    l_U383 = 1;
    l_U516 = 0;
    while (NOT l_U507)
    {
        if (NOT sub_2859())
        {
            sub_3927( "ClayHangout: Perform_Mission_Loop() returned FALSE unexpectedly" );
        }
        sub_112256();
        WAIT( 0 );
    }
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "******************** CLAY HANGOUT DEATHARREST\n" );
        PRINTNL();
        sub_11519();
    }
    WAIT( 0 );
    while (sub_2859())
    {
        sub_112256();
        WAIT( 0 );
    }
    PRINTSTRING( "quitting CLAY HANGOUT without PASS or FAIL\n" );
    sub_11519();
    sub_25592( "CLAY HANGOUT: should never reach ENDSCRIPT" );
    return;
}

void sub_984()
{
    sub_993();
    sub_1285();
    sub_1309();
    l_U501 = 1;
    l_U502 = 0;
    return;
}

void sub_993()
{
    l_U501 = 0;
    l_U502 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 12;
    l_U507 = 0;
    l_U609 = 0;
    sub_1044();
    return;
}

void sub_1044()
{
    l_U521._fU0 = 1;
    l_U521._fU4 = 0;
    l_U521._fU8 = 0;
    l_U521._fU12 = 0;
    l_U521._fU16 = 1;
    l_U521._fU20 = 0;
    l_U521._fU24 = 0;
    l_U521._fU28 = 0;
    l_U521._fU32 = 0;
    l_U521._fU36 = 0;
    l_U521._fU40 = 0;
    l_U521._fU44 = 0;
    l_U521._fU48 = 0;
    l_U521._fU52 = 64537;
    l_U521._fU56 = 64537;
    sub_1191();
    l_U536 = 0;
    return;
}

void sub_1191()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        g_U39174[I] = nil;
    }
    g_U39172 = 0;
    g_U39173 = 0;
    return;
}

void sub_1285()
{
    l_U513 = nil;
    return;
}

void sub_1309()
{
    return;
}

void sub_1368(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;
    unknown uVar8;

    # -sub_C1FFC0-0xc214c8( 0, ref l_U391 );
    iVar7 = 7;
    uVar8 = sub_1394( 2, 2 );
    g_U18635[iVar7]._fU184 = uVar8;
    l_U493 = {g_U10767[uVar8]._fU4};
    l_U496 = {g_U10767[uVar8]._fU16};
    sub_1791( uParam0, uParam1, uParam2, uParam3 );
    l_U491 = nil;
    l_U492 = nil;
    l_U499 = nil;
    sub_1857( g_U20751[iVar7] );
    sub_1888( 1 );
    sub_2091( l_U424, l_U424, l_U424, l_U424 );
    return;
}

void sub_1394(int Result, int iParam1)
{
    int iVar4;
    int iVar5;
    int I;
    int iVar7;
    int[3] iVar8;
    int iVar12;

    if (Result == iParam1)
    {
        return Result;
    }
    iVar4 = Result;
    iVar5 = iParam1;
    I = 0;
    iVar7 = 0;
    array(ref iVar8, 3);
    for ( I = iVar4; I <= iVar5; I++ )
    {
        iVar8[I] = 0;
        if (g_U10767[I]._fU0)
        {
            iVar8[I] = 1;
            iVar7++;
        }
    }
    if (iVar7 == 0)
    {
        return Result;
    }
    if (iVar7 == 1)
    {
        for ( I = iVar4; I <= iVar5; I++ )
        {
            if (iVar8[I])
            {
                return I;
            }
        }
    }
    iVar12 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar7, ref iVar12 );
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (iVar8[I])
        {
            if (iVar12 == 0)
            {
                return I;
            }
            iVar12--;
        }
    }
    SCRIPT_ASSERT( "Choose_Friend_Dropoff_Point: code should never reach this point" );
    return Result;
}

void sub_1791(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U370 = {uParam0, uParam1, uParam2};
    l_U373 = uParam3;
    return;
}

void sub_1857(unknown uParam0)
{
    l_U385 = 1;
    l_U384 = uParam0;
    return;
}

void sub_1888(boolean bParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( l_U374 )))
    {
        ADD_BLIP_FOR_CONTACT( l_U370._fU0, l_U370._fU4, l_U370._fU8, ref l_U374 );
        CHANGE_BLIP_DISPLAY( l_U374, 2 );
        CHANGE_BLIP_PRIORITY( l_U374, 1 );
        if (l_U385)
        {
            CHANGE_BLIP_SPRITE( l_U374, l_U384 );
            if (bParam0)
            {
                iVar3 = 0;
                GET_GAME_TIMER( ref iVar3 );
                CHANGE_BLIP_PRIORITY( l_U374, l_U4 );
                FLASH_BLIP( l_U374, 1 );
                l_U386 = iVar3 + 10000;
                l_U387 = 1;
            }
        }
    }
    return;
}

void sub_2091(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    StrCopy( ref l_U425._fU0, uParam0, 32 );
    StrCopy( ref l_U425._fU32, uParam1, 16 );
    StrCopy( ref l_U425._fU48, uParam2, 16 );
    StrCopy( ref l_U425._fU64, uParam3, 16 );
    l_U425._fU80 = 0;
    l_U425._fU84 = 0;
    l_U425._fU88 = 0;
    l_U425._fU92 = 0;
    l_U425._fU100 = 1;
    l_U425._fU96 = 1;
    if (COMPARE_STRING( uParam0, l_U424 ))
    {
        l_U425._fU96 = 0;
    }
    sub_2235();
    return;
}

void sub_2235()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref iVar3 );
    l_U425._fU84 = iVar2 + iVar3;
    return;
}

void sub_2310()
{
    sub_2319();
    return;
}

void sub_2319()
{
    sub_2328();
    sub_2395( 0, "FAclA_1" );
    sub_2395( 1, "FAclB_1" );
    sub_2395( 2, "FAclH" );
    sub_2476( "E1FCC3A" );
    sub_2633( 0, sub_2582(), "JOHNNY", 0 );
    StrCopy( ref l_U411, "CLAY", 16 );
    l_U415 = 1;
    l_U416 = 7;
    g_U39119 = 0;
    return;
}

void sub_2328()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        StrCopy( ref l_U392[I], "", 16 );
    }
    return;
}

void sub_2395(int iParam0, unknown uParam1)
{
    if (iParam0 >= 3)
    {
        return;
    }
    StrCopy( ref l_U392[iParam0], uParam1, 16 );
    return;
}

void sub_2476(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_2493();
    return;
}

void sub_2493()
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

void sub_2582()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2633(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2713( "\n PED NUMBER ", uParam0 );
    sub_2753( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2713(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2753(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_2859()
{
    if ((l_U507) AND (IS_KEYBOARD_KEY_PRESSED( 31 )))
    {
        l_U515 = 1;
        sub_2893();
        return 0;
    }
    if ((l_U507) AND (IS_KEYBOARD_KEY_PRESSED( 33 )))
    {
        l_U506 = 11;
        sub_17764();
        return 0;
    }
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 12;
    l_U1169 = 0;
    switch (l_U501)
    {
        case 0:
        sub_25592( "Mission Loop: Stage should never be 'Initialise'" );
        break;
        case 1:
        sub_26340();
        break;
        case 2:
        sub_56280();
        break;
        case 3:
        sub_56637();
        break;
        case 4:
        sub_56913();
        break;
        case 5:
        sub_58535();
        break;
        case 6:
        l_U504 = 1;
        break;
        default:
        sub_25592( "Mission_Loop: Unknown Stage ID" );
        return 0;
    }
    if (l_U504)
    {
        sub_2893();
        return 0;
    }
    if (l_U505)
    {
        sub_17764();
        return 0;
    }
    sub_58671();
    sub_98329( l_U491 );
    return 1;
}

void sub_2893()
{
    PRINTSTRING( "******************** CLAY HANGOUT PASSED\n" );
    PRINTNL();
    CLEAR_WANTED_LEVEL( sub_2960() );
    sub_3003( l_U515 );
    g_U24 = l_U500;
    sub_11519();
    return;
}

void sub_2960()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3003(unknown uParam0)
{
    sub_3014( uParam0 );
    return;
}

void sub_3014(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 1;
    sub_3032();
    sub_3087( uParam0 );
    sub_3116( uParam0 );
    sub_3149( iVar3, iVar4, iVar5 );
    iVar6 = 7;
    uVar7 = g_U18635[iVar6]._fU144;
    sub_11029( iVar6, uVar7 );
    return;
}

void sub_3032()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U1341[I] = 4;
    }
    return;
}

void sub_3087(unknown uParam0)
{
    l_U1341[1] = uParam0;
    return;
}

void sub_3116(unknown uParam0)
{
    l_U1341[0] = uParam0;
    return;
}

void sub_3149(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 7;
    sub_3180( iVar5, uParam0, uParam1, uParam2, "Friend_8" );
    return;
}

void sub_3180(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_3276( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_3276( ref cVar9 );
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
            sub_3276( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_3276( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_3276( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_3276( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_3853( uParam0, iVar7 );;;
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
    if (NOT (sub_4322( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_2960() );
    sub_8630();
    bVar28 = true;
    uVar29 = sub_3853( uParam0, iVar7 );
    uVar30 = sub_9272( uParam0 );
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
                sub_9640( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12303))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_10074();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_10159( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_10238( uParam0 );
                sub_10411( 0 );
                sub_10553( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_10676();
        }
    }
    if (bParam2)
    {
        sub_10074();
        sub_10775();
        sub_10411( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_10074();
        sub_10827();
        sub_10411( 0 );
        sub_10553( uVar30, 0 );
    }
    sub_10878();
    return;
}

void sub_3276(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_3853(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_3927( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_3927(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_4322(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_4418( uParam1 );
        break;
        case 1:
        bVar8 = sub_5113( uParam1 );
        break;
        case 2:
        bVar8 = sub_5846( uParam1 );
        break;
        case 3:
        bVar8 = sub_6083( uParam1 );
        break;
        case 4:
        bVar8 = sub_6249( uParam1 );
        break;
        case 5:
        bVar8 = sub_6448( uParam1 );
        break;
        case 6:
        bVar8 = sub_6643( uParam1 );
        break;
        case 7:
        bVar8 = sub_6848( uParam1 );
        break;
        case 8:
        bVar8 = sub_7053( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_5461( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_3853( uParam0, uParam1 );
    if (bParam3)
    {
        sub_7339( uVar9, uParam0 );
    }
    return 1;
}

int sub_4418(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_4515( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4515( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_4515( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_4515( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_4515( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_4515( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_5020( "Contact 1", 1 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5020( "Contact 1", 0 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_4515(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_4526( uParam1 );
    sub_4700( uParam0, 0, uParam2 );
    sub_4700( uParam0, 1, uParam3 );
    sub_4700( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_3032();
    return;
}

void sub_4526(unknown uParam0)
{
    ADD_SCORE( sub_2960(), uParam0 );
    sub_4551( uParam0 );
    return;
}

void sub_4551(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_3927( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_4700(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_5020(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_5113(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4515( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4515( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_4515( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4515( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_4515( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_4515( iVar3, 0, sub_5339(), sub_5605(), 0, 0 );
        break;
        default:
        sub_5020( "Contact 2", 1 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5020( "Contact 2", 0 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5339()
{
    switch (l_U1341[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_5461( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_5461(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_5605()
{
    switch (l_U1341[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_5461( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_5846(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4515( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4515( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_4515( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4515( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_5020( "Contact 3", 1 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5020( "Contact 3", 0 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6083(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4515( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4515( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_5020( "Friend 4", 1 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5020( "Friend 4", 0 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6249(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4515( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4515( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4515( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_5020( "Contact 5", 1 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5020( "Contact 5", 0 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6448(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4515( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4515( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4515( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_5020( "Contact 6", 1 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5020( "Contact 6", 0 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6643(unknown uParam0)
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
        sub_4515( iVar3, 0, sub_5339(), sub_5605(), 0, 0 );
        break;
        default:
        sub_5020( "Friend 7", 1 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5020( "Friend 7", 0 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6848(unknown uParam0)
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
        sub_4515( iVar3, 0, sub_5339(), sub_5605(), 0, 0 );
        break;
        default:
        sub_5020( "Friend 8", 1 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5020( "Friend 8", 0 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7053(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4515( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_5020( "Contact 9", 1 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5020( "Contact 9", 0 );
        sub_4515( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_7339(int iParam0, int iParam1)
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
    if (sub_7400( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_8118( iParam1 );
    }
    return;
}

int sub_7400(int iParam0, int iParam1)
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
            sub_7540( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_7540(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_7710( 0 );
    return;
}

void sub_7710(boolean bParam0)
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
        sub_7955();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_7955()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_8118(int iParam0)
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
        sub_8349( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_8349( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_8349( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_8349( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_8349( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_8349( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_8349(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_8630()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_8668( 5, g_U572[I] )) == 1) AND (g_U572[I]._fU20))
        {
            if ((sub_8668( 1, g_U572[I] )) != 0)
            {
                sub_8954( I );
            }
        }
    }
    if (NOT sub_9120())
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

int sub_8668(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_8954(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_9039( g_U572 - 1 );
    return;
}

void sub_9039(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_9120()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_8668( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_9272(unknown uParam0)
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
    sub_3927( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_9640(unknown uParam0, unknown uParam1)
{
    sub_9659( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_9659(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_10074()
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

int sub_10159(int iParam0, int iParam1)
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

void sub_10238(unknown uParam0)
{
    sub_10247();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_10247()
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

void sub_10411(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_10462( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_10462(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_10553(int iParam0, boolean bParam1)
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

void sub_10676()
{
    sub_10685();
    return;
}

void sub_10685()
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

void sub_10775()
{
    sub_10685();
    return;
}

void sub_10827()
{
    sub_10685();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_10878()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_10900();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_10900()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_11029(unknown uParam0, unknown uParam1)
{
    int iVar4;
    unknown uVar5;
    int I;
    int iVar7;

    if (g_U0)
    {
        return;
    }
    iVar4 = 1;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar4 = 0;
        break;
        default: return;
    }
    switch (uParam1)
    {
        case 6:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 18:
        case 19:
        case 20:
        case 21: break;
        case 17: return;
    }
    return;
    uVar5 = uParam1;
    if (NOT (IS_BIT_SET( ProtectedGet(g_U38805[iVar4]._fU0), uVar5 )))
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U38805[iVar4]._fU4), uVar5 ))
    {
        return;
    }
    SET_BIT( 1, uVar5 );
    I = 0;
    for ( I = 0; I < 22; I++ )
    {
        if (IS_BIT_SET( ProtectedGet(g_U38805[iVar4]._fU0), I ))
        {
            if (NOT (IS_BIT_SET( ProtectedGet(g_U38805[iVar4]._fU4), I )))
            {
                return;
            }
        }
    }
    iVar7 = 0;
    if (NOT g_U38801[iVar4]._fU0)
    {
        iVar7 = ProtectedGet(g_U38808[iVar4]._fU8);
        if (iVar7 > 0)
        {
            sub_7540( 3, iVar7 );
            g_U38801[iVar4]._fU0 = 1;
            return;
        }
    }
    return;
    break;
    2;
    1;
    ref g_U38805[iVar4]._fU4;
    1;
    ref g_U38805[iVar4]._fU4;
    break;
}

void sub_11519()
{
    sub_11538( l_U549, l_U1347 );
    sub_13867( l_U491 );
    sub_15809( 1 );
    sub_16718();
    sub_17208();
    sub_17531( 7, 14, l_U507 );
    g_U2771 = 0;
    g_U15728[20] = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_11538(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int I;
    int[22] iVar6;
    boolean bVar29;
    int iVar30;
    boolean bVar31;
    boolean bVar32;
    unknown uVar33;
    int iVar34;

    if (g_U816)
    {
        return;
    }
    switch (uParam1)
    {
        case 4:
        case 5: return;
    }
    iVar4 = 0;
    if (l_U1168 == 0)
    {
        if (bParam0)
        {
            iVar4 = 2;
            sub_11615( iVar4 );
        }
        return;
    }
    I = 0;
    array(ref iVar6, 22);
    for ( I = 0; I < 22; I++ )
    {
        iVar6[I] = 0;
    }
    bVar29 = true;
    if ((l_U1150 < 0) || (l_U1150 >= 22))
    {
        bVar29 = false;
    }
    if (bVar29)
    {
        iVar6[l_U1150] = 1;
    }
    iVar30 = g_U12306[l_U1207]._fU40[1];
    bVar31 = false;
    for ( I = 0; I < l_U1168; I++ )
    {
        if ((l_U1161[I]._fU0 < 22) AND (l_U1161[I]._fU0 >= 0))
        {
            bVar31 = iVar6[l_U1161[I]._fU0];
            sub_12098( I, bVar31 );
            iVar6[l_U1161[I]._fU0] = 1;
        }
    }
    if (IS_PLAYER_PLAYING( sub_2960() ))
    {
        if (bParam0)
        {
            sub_11663( l_U1207, 1, 1 );
        }
    }
    if (l_U1168 == 3)
    {
        sub_11663( l_U1207, 1, 1 );
    }
    if ((l_U1168 == 3) AND (bParam0))
    {
        bVar32 = true;
        for ( I = 0; I < 22; I++ )
        {
            iVar6[I] = 0;
        }
        if (bVar29)
        {
            iVar6[l_U1150] = 1;
        }
        for ( I = 0; I < l_U1168; I++ )
        {
            bVar31 = iVar6[l_U1161[I]._fU0];
            if (bVar31)
            {
                bVar32 = false;
            }
            iVar6[l_U1161[I]._fU0] = 1;
        }
        if (bVar32)
        {
            sub_11663( l_U1207, 1, 1 );
        }
    }
    uVar33 = sub_9272( l_U1207 );
    for ( I = 0; I < l_U1168; I++ )
    {
        sub_11029( uVar33, l_U1161[I]._fU0 );
    }
    if (l_U1183)
    {
        g_U18635[uVar33]._fU172 = 1;
    }
    iVar34 = g_U12306[l_U1207]._fU40[1];
    iVar4 = iVar34 - iVar30;
    if (iVar4 > 0)
    {
        iVar4 *= 75;
        iVar4 = iVar4 / 100;
        if (bParam0)
        {
            iVar4 += 2;
        }
        sub_11615( iVar4 );
    }
    return;
}

void sub_11615(unknown uParam0)
{
    int iVar3;

    iVar3 = 1;
    if (NOT (iVar3 == l_U1207))
    {
        if (g_U38847[0]._fU0)
        {
            sub_11663( iVar3, 1, uParam0 );
        }
    }
    iVar3 = 6;
    if (NOT (iVar3 == l_U1207))
    {
        if (g_U38847[1]._fU0)
        {
            sub_11663( iVar3, 1, uParam0 );
        }
    }
    iVar3 = 7;
    if (NOT (iVar3 == l_U1207))
    {
        if (g_U38847[2]._fU0)
        {
            sub_11663( iVar3, 1, uParam0 );
        }
    }
    return;
}

void sub_11663(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_12098(int iParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;

    if (iParam0 >= l_U1168)
    {
        SCRIPT_ASSERT( "Store_Like_For_Alternative_Activity: array pos greater than max activities performed" );
        return;
    }
    uVar4 = l_U1161[iParam0]._fU0;
    uVar5 = l_U1161[iParam0]._fU4;
    iVar6 = 4;
    switch (uVar4)
    {
        case 6:
        iVar6 = sub_12337( uVar5 );
        break;
        case 7:
        iVar6 = sub_12417( uVar5 );
        break;
        case 10:
        iVar6 = sub_12497( uVar5 );
        break;
        case 11:
        iVar6 = sub_12577( uVar5 );
        break;
        case 12:
        iVar6 = sub_12649( uVar5 );
        break;
        case 16:
        iVar6 = sub_12721( uVar5 );
        break;
        case 18:
        iVar6 = sub_12801( uVar5 );
        break;
        case 20:
        iVar6 = sub_12881( uVar5 );
        break;
        case 21:
        iVar6 = sub_12957( uVar5 );
        break;
        case 9:
        iVar6 = sub_13041( uVar5 );
        break;
        default: SCRIPT_ASSERT( "Store_Like_For_Alternative_Activity: Unknown phone activity ID" );
    }
    uVar7 = sub_13195( iVar6, uParam1 );
    PRINTSTRING( "KGMSTAT ************* --> ADD ACT: " );
    PRINTINT( iParam0 );
    PRINTNL();
    sub_11663( l_U1207, 1, uVar7 );
    return;
}

int sub_12337(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_12417(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_12497(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_12577(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 1: return 2;
    }
    return 4;
}

int sub_12649(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 1: return 2;
    }
    return 4;
}

int sub_12721(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_12801(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_12881(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_12957(unknown uParam0)
{
    switch (uParam0)
    {
        case 7:
        case 1:
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_13041(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_13195(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        switch (uParam0)
        {
            case 0: return 5;
            case 1: return 3;
            case 2: return 1;
            case 3: return 0;
        }
        return 0;
    }
    switch (uParam0)
    {
        case 0: return 3;
        case 1: return 1;
        case 2: return 1;
        case 3: return 0;
    }
    return 0;
    return 0;
}

void sub_13867(unknown uParam0)
{
    int iVar3;

    if (l_U1179)
    {
        SET_CAM_ACTIVE( l_U1180, 0 );
        SET_CAM_PROPAGATE( l_U1180, 0 );
        DESTROY_ALL_CAMS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        iVar3 = 0;
        END_CAM_COMMANDS( ref iVar3 );
        if (NOT (iVar3 == 0))
        {
            SCRIPT_ASSERT( "Camera Scopes should now be 0 when ending camera use" );
        }
        l_U1179 = 0;
    }
    if (l_U1182)
    {
        sub_14028( 1 );
    }
    g_U10509 = 1;
    g_U10648 = 1;
    sub_15477( l_U1150 );
    sub_15763( l_U1207 );
    if (l_U1175)
    {
        g_U10507 = l_U1174;
    }
    return;
}

void sub_14028(unknown uParam0)
{
    int I;

    if ((uParam0) AND (g_U10499))
    {
        sub_14051( 6 );
    }
    else
    {
        sub_14051( 0 );
    }
    sub_14371( -1, 0 );
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_DEAD( g_U38857[I]._fU0 )))
            {
                sub_14371( I, 0 );
            }
        }
    }
    g_U10499 = 0;
    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return;
    }
    sub_15303();
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_DEAD( g_U38857[I]._fU0 )))
            {
                SET_PED_IS_DRUNK( g_U38857[I]._fU0, 0 );
            }
        }
    }
    return;
}

void sub_14051(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    GET_ROOT_CAM( ref uVar3 );
    iVar4 = 0;
    switch (uParam0)
    {
        case 0:
        iVar4 = 0;
        SET_DRUNK_CAM( uVar3, 0.00000000, iVar4 );
        break;
        case 1:
        iVar4 = 300000;
        SET_DRUNK_CAM( uVar3, 0.20000000, iVar4 );
        break;
        case 2:
        iVar4 = 240000;
        SET_DRUNK_CAM( uVar3, 0.30000000, iVar4 );
        break;
        case 3:
        iVar4 = 210000;
        SET_DRUNK_CAM( uVar3, 0.45000000, iVar4 );
        break;
        case 4:
        iVar4 = 180000;
        SET_DRUNK_CAM( uVar3, 0.60000000, iVar4 );
        break;
        case 5:
        iVar4 = 180000;
        SET_DRUNK_CAM( uVar3, 0.70000000, iVar4 );
        break;
        case 6:
        iVar4 = 60000;
        SET_DRUNK_CAM( uVar3, 0.00000000, -iVar4 );
        break;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    l_U1082 = iVar5 + iVar4;
    return;
}

void sub_14371(unknown uParam0, unknown uParam1)
{
    int Result;

    Result = sub_14382( uParam1 );
    if (Result == 0)
    {
        sub_14514( uParam0 );
        return Result;
    }
    sub_14729( uParam0, Result );
    return Result;
}

int sub_14382(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 60000;
        case 2: return 90000;
        case 3: return 120000;
        case 4: return 140000;
        case 5: return 180000;
    }
    return 0;
}

void sub_14514(unknown uParam0)
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

    uVar3 = sub_14525( uParam0 );
    if (IS_CHAR_INJURED( uVar3 ))
    {
        return;
    }
    if (NOT (IS_PED_RAGDOLL( uVar3 )))
    {
        return;
    }
    uVar4 = {sub_14611( uParam0 )};
    if (uVar4._fU20)
    {
        return;
    }
    CREATE_NM_MESSAGE( 0, 79 );
    SEND_NM_MESSAGE( uVar3 );
    SWITCH_PED_TO_ANIMATED( uVar3, 0 );
    return;
}

void sub_14525(int iParam0)
{
    if (iParam0 == -1)
    {
        return sub_2582();
    }
    return g_U38857[iParam0]._fU0;
}

void sub_14611(int iParam0)
{
    unknown Result;
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

    if (iParam0 == -1)
    {
        Result = {l_U1084};
    }
    else
    {
        Result = {l_U1099[iParam0]};
    }
    return Result;
}

void sub_14729(int iParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    uVar4 = sub_14525( iParam0 );
    if (IS_CHAR_INJURED( uVar4 ))
    {
        return;
    }
    if (IS_CHAR_IN_ANY_CAR( uVar4 ))
    {
        return;
    }
    iVar5 = uParam1;
    if (iVar5 > 65534)
    {
        iVar5 = 65534;
    }
    SWITCH_PED_TO_RAGDOLL( uVar4, 0, iVar5, 1, 1, 1, 0 );
    if (NOT (IS_PED_RAGDOLL( uVar4 )))
    {
        return;
    }
    CREATE_NM_MESSAGE( 1, 79 );
    SET_NM_MESSAGE_FLOAT( 89, 8.70000000 );
    SET_NM_MESSAGE_FLOAT( 98, 0.60000000 );
    SET_NM_MESSAGE_FLOAT( 81, 8.40000000 );
    SET_NM_MESSAGE_FLOAT( 82, 0.70000000 );
    SET_NM_MESSAGE_INT( 85, 65535 );
    SET_NM_MESSAGE_BOOL( 95, 1 );
    SET_NM_MESSAGE_FLOAT( 101, 0.80000000 );
    SET_NM_MESSAGE_FLOAT( 102, 999.00000000 );
    SET_NM_MESSAGE_FLOAT( 84, 1.40000000 );
    SET_NM_MESSAGE_FLOAT( 83, 1.95000000 );
    SET_NM_MESSAGE_FLOAT( 94, 1.00000000 );
    SET_NM_MESSAGE_FLOAT( 110, 0.00000000 );
    SET_NM_MESSAGE_FLOAT( 111, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 112, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 108, 0.00000000 );
    SET_NM_MESSAGE_FLOAT( 113, 0.60000000 );
    SET_NM_MESSAGE_FLOAT( 109, 0.20000000 );
    SET_NM_MESSAGE_FLOAT( 91, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 93, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 106, -0.30000000 );
    SEND_NM_MESSAGE( uVar4 );
    if (iParam0 == -1)
    {
        GIVE_PLAYER_RAGDOLL_CONTROL( sub_2960(), 1 );
    }
    return;
}

void sub_15303()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar2 );
        SET_VEHICLE_STEER_BIAS( uVar2, 0.00000000 );
    }
    return;
}

void sub_15477(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 65; I++ )
    {
        if (sub_15505( I ))
        {
            if (DOES_BLIP_EXIST( g_U12169[I]._fU4 ))
            {
                sub_15688( ref g_U12169[I]._fU4 );
            }
        }
    }
    return;
}

int sub_15505(int iParam0)
{
    boolean bVar3;
    int iVar4;
    unknown uVar5;

    bVar3 = false;
    iVar4 = 0;
    switch (g_U11583[iParam0]._fU12)
    {
        case 11:
        bVar3 = true;
        break;
        case 8: return 1;
    }
    return 0;
    if (bVar3)
    {
        uVar5 = g_U11583[iParam0]._fU16;
        switch (uVar5)
        {
            case 20:
            case 15: return 0;
        }
        if ((iParam0 == 2) || (iParam0 == 30))
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

void sub_15688(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_15763(unknown uParam0)
{
    return;
}

void sub_15809(boolean bParam0)
{
    sub_15818();
    sub_16013();
    sub_16054();
    sub_16084( 7 );
    REMOVE_DECISION_MAKER( l_U391 );
    if (NOT (COMPARE_STRING( ref l_U425._fU0, l_U424 )))
    {
        REMOVE_ANIMS( ref l_U425._fU0 );
    }
    l_U375 = 0;
    if ((NOT (l_U491 == nil)) AND (NOT (IS_CHAR_DEAD( l_U491 ))))
    {
        if (IS_GROUP_MEMBER( l_U491, sub_16528() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U491 );
        }
        if (bParam0)
        {
            if (IS_CHAR_INJURED( l_U491 ))
            {
                SET_PED_DIES_WHEN_INJURED( l_U491, 1 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U491 );
            }
            else
            {
                DELETE_CHAR( ref l_U491 );
            }
        }
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    return;
}

void sub_15818()
{
    if (g_U38847[2]._fU0)
    {
        sub_15844();
        return;
    }
    sub_15923( ref l_U492 );
    return;
}

void sub_15844()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (DOES_BLIP_EXIST( g_U38847[I]._fU8 ))
            {
                sub_15923( ref g_U38847[I]._fU8 );
            }
        }
    }
    return;
}

void sub_15923(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_16013()
{
    REMOVE_BLIP( l_U374 );
    l_U386 = 0;
    l_U387 = 0;
    return;
}

void sub_16054()
{
    REMOVE_BLIP( l_U499 );
    return;
}

void sub_16084(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_16107( uParam0 ) );
    return;
}

int sub_16107(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_3927( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_16528()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_16718()
{
    sub_16727();
    return;
}

void sub_16727()
{
    int iVar2;

    if (l_U516)
    {
        DELETE_WIDGET_GROUP( l_U517 );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U513 );
    if (l_U512)
    {
        SET_CAM_ACTIVE( l_U508[1], 0 );
        SET_CAM_PROPAGATE( l_U508[1], 0 );
        sub_16811();
    }
    if (IS_PLAYER_PLAYING( sub_2960() ))
    {
        SET_PLAYER_CONTROL( sub_2960(), 1 );
    }
    CLEAR_HELP();
    sub_16906();
    iVar2 = 0;
    sub_17052( iVar2 );
    return;
}

void sub_16811()
{
    int iVar2;

    DESTROY_ALL_CAMS();
    SET_USE_HIGHDOF( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    iVar2 = 0;
    END_CAM_COMMANDS( ref iVar2 );
    l_U512 = 0;
    return;
}

void sub_16906()
{
    int I;

    g_U26739._fU0 = 19;
    g_U26739._fU4 = 12;
    g_U26739._fU8 = 12;
    g_U26739._fU12 = 12;
    g_U26739._fU16 = 8;
    g_U26739._fU20 = 8;
    g_U26739._fU24 = 0;
    g_U26739._fU28 = 0;
    g_U26739._fU32 = 0;
    g_U26739._fU84 = 0;
    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        g_U26739._fU36[I] = 0;
    }
    return;
}

void sub_17052(unknown uParam0)
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

void sub_17208()
{
    sub_17217();
    return;
}

void sub_17217()
{
    sub_17226();
    return;
}

void sub_17226()
{
    g_U12303 = 0;
    if (g_U816)
    {
        sub_17251();
        return;
    }
    sub_17377();
    return;
}

void sub_17251()
{
    if (COMPARE_STRING( ref g_U10987, "FPASS" ))
    {
        StrCopy( ref g_U10987, "", 16 );
        return;
    }
    sub_17296();
    return;
}

void sub_17296()
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

void sub_17377()
{
    if (COMPARE_STRING( ref g_U10987, "FPASS" ))
    {
        StrCopy( ref g_U10987, "", 16 );
        return;
    }
    sub_17422();
    return;
}

void sub_17422()
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

void sub_17531(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;

    if (g_U816)
    {
        return;
    }
    iVar5 = 300000;
    if (g_U0)
    {
        iVar5 = 30000;
    }
    iVar6 = 60000;
    if (g_U0)
    {
        iVar6 = 20000;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    g_U18635[uParam0]._fU152 = iVar7 + iVar5;
    g_U18635[uParam0]._fU156 = iVar7 + iVar6;
    if (bParam2)
    {
        g_U18635[uParam0]._fU148 = uParam1;
        return;
    }
    g_U18635[uParam0]._fU148 = 22;
    return;
}

void sub_17764()
{
    int iVar2;

    PRINTSTRING( ".................... CLAY HANGOUT FAILED" );
    iVar2 = 0;
    switch (l_U506)
    {
        case 0:
        iVar2 = sub_17875( l_U491 );
        sub_17956( iVar2, l_U491 );
        break;
        case 7:
        sub_23136( l_U491, 7 );
        break;
        case 11:
        PRINTSTRING( ".......................(forced failure)\n" );
        break;
        case 12:
        sub_25592( "Unknown reason for failure" );
        break;
        default: sub_25592( "Unrecognised Fail ID" );
    }
    PRINTNL();
    sub_25794( iVar2 );
    sub_11519();
    return;
}

void sub_17875(unknown uParam0)
{
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_2582() )))
        {
            Result = HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_2582(), 0 );
        }
    }
    return Result;
}

void sub_17956(unknown uParam0, unknown uParam1)
{
    sub_17969( uParam0, uParam1 );
    return;
}

void sub_17969(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 7;
    iVar5 = 7;
    sub_17988( iVar4, uParam1 );
    sub_22795( iVar4, uParam1, iVar5 );
    if (bParam0)
    {
        sub_22915( iVar5 );
    }
    return;
}

void sub_17988(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    if (NOT g_U18635[uParam0]._fU704._fU0)
    {
        return;
    }
    if (g_U18635[uParam0]._fU704._fU4)
    {
        return;
    }
    uVar4 = sub_18050( uParam0 );
    if (g_U14838[uVar4]._fU80._fU0 == 1)
    {
        sub_18279( uVar4 );
    }
    if (g_U14838[uVar4]._fU0._fU0 == 1)
    {
        sub_22258( uVar4 );
    }
    if (g_U14838[uVar4]._fU160._fU0)
    {
        if (g_U14838[uVar4]._fU160._fU8)
        {
            g_U15862[uParam0]._fU8[0]._fU0[5] = 0;
        }
        g_U14838[uVar4]._fU160._fU108._fU0 = 0;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U18635[uParam0]._fU704._fU4 = 1;
    g_U18635[uParam0]._fU704._fU168 = iVar5 + g_U18635[uParam0]._fU704._fU164;
    g_U18635[uParam0]._fU704._fU184 = uParam1;
    sub_22764( "CONTACT HOSPITALISED\n" );
    return;
}

int sub_18050(unknown uParam0)
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
    sub_3927( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 11;
}

void sub_18279(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14838[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14838[uParam0]._fU80._fU0 = 0;
        sub_18400( uParam0 );
        sub_20393( uParam0, 0 );
        break;
        case 2:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_20679( uParam0, iVar4 );
        break;
        case 3:
        g_U14838[uParam0]._fU80._fU0 = 6;
        sub_20679( uParam0, iVar4 );
        break;
        case 6:
        sub_20679( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_21126( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_3927( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_18400(unknown uParam0)
{
    if ((NOT (g_U14838[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U14838[uParam0]._fU80._fU0 == 1)))
    {
        sub_18457( uParam0 );
        sub_18607( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU80._fU0 == 1)
    {
        sub_18457( uParam0 );
        sub_18801( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU80._fU0 == 0)
    {
        sub_18607( uParam0 );
    }
    if ((NOT (g_U14838[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U14838[uParam0]._fU0._fU0 == 1)))
    {
        sub_18457( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU0 == 1)
    {
        sub_19625( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        sub_18457( uParam0 );
    }
    return;
}

void sub_18457(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14838[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U14838[uParam0]._fU0._fU64 );
    g_U14838[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U14838[uParam0]._fU0._fU68;
    g_U14838[uParam0]._fU0._fU68 = 17;
    CLEAR_BIT( ref g_U10686[uVar3]._fU0, 3 );
    return;
}

void sub_18607(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14838[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U14838[uParam0]._fU80._fU64 );
    g_U14838[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U14838[uParam0]._fU80._fU68;
    g_U14838[uParam0]._fU80._fU68 = 17;
    CLEAR_BIT( ref g_U10686[uVar3]._fU0, 3 );
    return;
}

void sub_18801(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_18607( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10685;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14838[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14838[uParam0]._fU80._fU4;
        iVar8 = sub_3853( uParam0, iVar7 );
        iVar9 = g_U20913[iVar8]._fU16;
        vVar3 = {g_U10686[iVar9]._fU4};
        uVar6 = g_U10686[iVar9]._fU16;
        bVar10 = true;
        g_U14838[uParam0]._fU80._fU68 = iVar9;
        SET_BIT( ref g_U10686[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_3927( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14838[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14838[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU80._fU64, l_U3 );
        if ((NOT g_U26737._fU4) || (NOT g_U14838[uParam0]._fU80._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14838[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U14838[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU80._fU64, l_U4 );
        sub_19483( g_U14838[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

void sub_19483(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    return;
}

void sub_19625(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_18457( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10685;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14838[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14838[uParam0]._fU0._fU4;
        iVar8 = sub_3853( uParam0, iVar7 );
        iVar9 = g_U20913[iVar8]._fU16;
        vVar3 = {g_U10686[iVar9]._fU4};
        uVar6 = g_U10686[iVar9]._fU16;
        bVar10 = true;
        g_U14838[uParam0]._fU0._fU68 = iVar9;
        SET_BIT( ref g_U10686[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_3927( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14838[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14838[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU0._fU64, l_U3 );
        if ((NOT g_U26737._fU4) || (NOT g_U14838[uParam0]._fU0._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14838[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU0._fU64, l_U4 );
        if (l_U1222)
        {
            FLASH_BLIP( g_U14838[uParam0]._fU0._fU64, 1 );
            l_U1222 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U14838[uParam0]._fU0._fU64, 1 );
            l_U1222 = 1;
        }
        sub_19483( g_U14838[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_20393(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14838[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U14838[uParam0]._fU80._fU64 );
        }
    }
    g_U14838[uParam0]._fU80._fU0 = 0;
    g_U14838[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U14838[uParam0]._fU80._fU24, "", 32 );
    g_U14838[uParam0]._fU80._fU56 = 10;
    g_U14838[uParam0]._fU80._fU60 = nil;
    g_U14838[uParam0]._fU80._fU64 = nil;
    g_U14838[uParam0]._fU80._fU68 = 17;
    g_U14838[uParam0]._fU80._fU72 = 1;
    g_U14838[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_20679(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[uParam0]._fU80._fU24 );
        sub_20393( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[uParam0]._fU0._fU24 );
    sub_20817( uParam0, 0 );;
    sub_18400( uParam0 );
    return;
}

void sub_20817(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14838[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U14838[uParam0]._fU0._fU64 );
        }
    }
    g_U14838[uParam0]._fU0._fU0 = 0;
    g_U14838[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U14838[uParam0]._fU0._fU24, "", 32 );
    g_U14838[uParam0]._fU0._fU56 = 10;
    g_U14838[uParam0]._fU0._fU60 = nil;
    g_U14838[uParam0]._fU0._fU64 = nil;
    g_U14838[uParam0]._fU0._fU68 = 17;
    g_U14838[uParam0]._fU0._fU72 = 1;
    g_U14838[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_21126(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U14838[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U14838[iParam0]._fU80._fU60 );
        }
        sub_20393( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U14838[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U14838[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U14838[iParam0]._fU0._fU56;
    if ((iVar5 == 5) || (iVar5 == 6))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U12306[iParam0]._fU28 = 1;
    }
    sub_20817( iParam0, 0 );
    if (bVar4)
    {
        sub_21335();
    }
    g_U12306[iParam0]._fU12 = 0;;
    if (iParam0 == 9)
    {
        sub_21391();
        return;
    }
    sub_18400( iParam0 );
    if (bVar4)
    {
        g_U12303 = 0;
    }
    if (bVar4)
    {
        sub_22056( iParam0 );
    }
    if (g_U3)
    {
        if (g_U4)
        {
            WAIT( 1500 );
            g_U5 = 1;
        }
    }
    return;
}

void sub_21335()
{
    unknown uVar2;

    uVar2 = g_U10986;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_21391()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_2960() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
        {
            if (NOT (g_U15852._fU24 == -1))
            {
                uVar3 = g_U26538[g_U15852._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_2582(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15852._fU24;
    sub_21503();
    if (bVar2)
    {
        g_U15852._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref g_U15852._fU32 );
        g_U15852._fU24 = uVar4;
    }
    l_U1221 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_2960(), 0 );
    sub_21658();
    if (IS_PLAYER_PLAYING( sub_2960() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
        {
            SET_PLAYER_CONTROL( sub_2960(), 1 );
        }
    }
    return;
}

void sub_21503()
{
    g_U15852._fU0 = 0;
    g_U15852._fU4 = 0;
    g_U15852._fU8 = 0;
    g_U15852._fU12 = 0;
    g_U15852._fU16 = 0;
    g_U15852._fU20 = 0;
    g_U15852._fU24 = -1;
    g_U15852._fU32 = nil;
    g_U15852._fU28 = 0;
    return;
}

void sub_21658()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2960() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_2582() ))
    {
        l_U1221 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_2960(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_2582() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_2582(), 837858166 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_2582(), -488123221 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15852._fU20)
                {
                    bVar4 = true;
                }
                else
                {
                    bVar4 = false;
                }
            }
            else
            {
                bVar4 = true;
            }
        }
        else
        {
            bVar4 = true;
        }
    }
    else
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        if (l_U1221)
        {
            return;
        }
        l_U1221 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_2960(), 1 );
    }
    else if (NOT l_U1221)
    {
        return;
    }
    l_U1221 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_2960(), 0 );;
    return;
}

void sub_22056(int iParam0)
{
    if (NOT (g_U20901 == iParam0))
    {
        return;
    }
    g_U20900 = 1;
    return;
}

void sub_22258(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14838[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14838[uParam0]._fU0._fU0 = 0;
        sub_18400( uParam0 );
        sub_20817( uParam0, 0 );
        break;
        case 2:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_20679( uParam0, iVar4 );
        break;
        case 3:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_20679( uParam0, iVar4 );
        break;
        case 6:
        sub_20679( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_21126( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_3927( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_22764(unknown uParam0)
{
    return;
}

void sub_22795(unknown uParam0, int iParam1, unknown uParam2)
{
    if (iParam1 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam1 )))
    {
        return;
    }
    g_U38680._fU0 = uParam0;
    g_U38680._fU4 = iParam1;
    g_U38680._fU8 = uParam2;
    g_U38680._fU12 = 0;
    if (g_U12303)
    {
        g_U38680._fU12 = 1;
    }
    return;
}

void sub_22915(unknown uParam0)
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
        case 7:
        case 8:
        sub_4515( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_3276( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_23136(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = g_U18635[uParam1]._fU104;
    uVar5 = g_U18635[uParam1]._fU136;
    sub_23181( uVar4 );
    sub_23285( uVar4, uParam1, uVar5, 0 );
    uVar6 = sub_18050( uParam1 );
    sub_25324( uVar6 );
    return;
}

void sub_23181(unknown uParam0)
{
    g_U38472._fU12[uParam0]._fU0 = 0;
    g_U38472._fU12[uParam0]._fU4 = 0;
    g_U38472._fU12[uParam0]._fU12 = 22;
    g_U38472._fU12[uParam0]._fU16 = 0;
    g_U38472._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_23285(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 6;
    sub_23310( uParam0, uParam1, uParam2, uParam3, iVar6, 64537 );
    return;
}

void sub_23310(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = 19;
    if (iParam0 >= iVar8)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_23422( uParam1, uParam2 );
        return;
    }
    if (g_U38472._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar9 = 0;
    GET_GAME_TIMER( ref iVar9 );
    g_U38472._fU12[iParam0]._fU0 = 1;
    g_U38472._fU12[iParam0]._fU4 = 0;
    g_U38472._fU12[iParam0]._fU8 = 0;
    g_U38472._fU12[iParam0]._fU12 = uParam1;
    g_U38472._fU12[iParam0]._fU16 = uParam2;
    g_U38472._fU12[iParam0]._fU20 = iVar9 + iParam3;
    g_U38472._fU12[iParam0]._fU28 = uParam4;
    g_U38472._fU12[iParam0]._fU32 = uParam5;
    sub_25131( iParam0, iParam3 );
    return;
}

void sub_23422(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    uVar11 = sub_23445( uParam0 );
    sub_23692( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_24036( ref uVar4, 1 );
    sub_24064( ref uVar4, 0 );
    sub_24092( ref uVar4, 2 );
    sub_24122( ref uVar4 );
    return;
}

int sub_23445(unknown uParam0)
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
    sub_3927( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_23692(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_23714( uParam0, 0, iParam4 + 0 );
    sub_23714( uParam1, 1, iParam4 + 0 );
    sub_23714( uParam2, 2, iParam4 + 0 );
    sub_23714( uParam3, 3, iParam4 + 0 );
    sub_23714( 0, 4, iParam4 + 0 );
    sub_23714( 1, 5, iParam4 + 0 );
    sub_23714( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_23714(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_24036(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_24064(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_24092(int iParam0, unknown uParam1)
{
    sub_23714( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_24122(int iParam0)
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
        if (NOT sub_24192())
        {
            sub_8954( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_24319( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_8954( iVar9 );
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
                ConcatString(ref cVar5, sub_8668( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_8668( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_24192()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_8668( 1, g_U572[I] )) != 0) AND (g_U572[I]._fU20))
        {
            sub_8954( I );
            return 1;
        }
    }
    return 0;
}

int sub_24319(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_24384( uParam0, g_U572[Result] ))
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

int sub_24384(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_8668( 0, uParam0 );
        if (iVar14 == (sub_8668( 0, uParam6 )))
        {
            iVar15 = sub_8668( 3, uParam0 );
            if (iVar15 == (sub_8668( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_25131(unknown uParam0, int iParam1)
{
    g_U38472._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_25170( iParam1 ))
    {
        g_U38472._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_25170(int iParam0)
{
    int iVar3;

    iVar3 = sub_10900();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_25200();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_25200()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_25324(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = -5;
        break;
        default:
        sub_3927( "Flow_Friend_Left_Behind_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_11663( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_11663( uParam0, 0, iVar4 );
    return;
}

void sub_25592(unknown uParam0)
{
    sub_25627( "ERROR: CLAY HANGOUT: ", uParam0 );
    return;
}

void sub_25627(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "ERROR: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_25794(boolean bParam0)
{
    switch (l_U506)
    {
        case 0:
        case 1:
        case 2:
        if (bParam0)
        {
            PRINT_NOW( "FAFUKIL", 7000, 1 );
        }
        else
        {
            PRINT_NOW( "FAFDEAD", 7000, 1 );
        }
        break;
        case 3: break;
        case 4:
        case 5:
        if (bParam0)
        {
            PRINT_NOW( "FAFVKIL", 7000, 1 );
        }
        else
        {
            PRINT_NOW( "FAFVDED", 7000, 1 );
        }
        break;
        case 6:
        PRINT_NOW( "FAFABAN", 7000, 1 );
        break;
        case 9: break;
        case 10: break;
        case 7:
        PRINT_NOW( "BIKELEFT", 7000, 1 );
        break;
        case 8: break;
        case 11:
        PRINT_NOW( "FAFFORC", 7000, 1 );
        break;
        case 12:
        PRINT_NOW( "FAFNONE", 7000, 1 );
        break;
    }
    return;
}

void sub_26340()
{
    int iVar2;

    l_U520 = 0;
    iVar2 = 1;
    if (NOT (sub_26366( 7, l_U491, iVar2 )))
    {
        return;
    }
    if (NOT l_U505)
    {
        sub_49017();
        g_U2771 = 1;
    }
    sub_16906();
    sub_49891( 7 );
    sub_50023( 7 );
    return;
}

int sub_26366(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    if (l_U502 == 0)
    {
        l_U573 = iVar5 + 3000;
        l_U574 = 0;
        l_U502++;
    }
    if (NOT (iParam1 == nil))
    {
        if ((sub_26438()) || (IS_CHAR_INJURED( iParam1 )))
        {
            l_U505 = 1;
            l_U506 = 0;
            g_U15862[uParam0]._fU8[0]._fU0[2] = 0;
            return 1;
        }
    }
    if (NOT l_U574)
    {
        if (l_U573 < iVar5)
        {
            l_U574 = sub_26633( uParam0 );
            if (NOT l_U574)
            {
                l_U573 = iVar5 + 3000;
            }
        }
    }
    if (l_U502 == 1)
    {
        if (sub_27066( uParam0, bParam2 ))
        {
            l_U502 = 99;
        }
    }
    if (l_U502 == 99)
    {
        l_U501 = 2;
        l_U502 = 0;
        if (NOT bParam2)
        {
            sub_48732( uParam0 );
        }
        g_U15862[uParam0]._fU8[0]._fU0[2] = 0;
        if (NOT (IS_CHAR_DEAD( sub_2582() )))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2582(), 0 );
        }
        return 1;
    }
    return 0;
}

int sub_26438()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (DOES_CHAR_EXIST( g_U38857[I]._fU0 ))
            {
                if (IS_CHAR_INJURED( g_U38857[I]._fU0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_26633(unknown uParam0)
{
    if ((g_U10493) AND (g_U10495))
    {
        return 1;
    }
    if (g_U18635[uParam0]._fU704._fU4)
    {
        return 1;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return 0;
    }
    if (NOT g_U10493)
    {
        if (g_U18635[uParam0]._fU144 == 17)
        {
            return 1;
        }
        sub_26743( uParam0 );
        g_U10493 = 1;
        return 1;
    }
    if (NOT g_U10495)
    {
        sub_26885( uParam0 );
        g_U10495 = 1;
        return 1;
    }
    return 1;
}

void sub_26743(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        PRINT_HELP( "FRPICKJm" );
        break;
        case 6:
        PRINT_HELP( "FRPICKTr" );
        break;
        case 7:
        PRINT_HELP( "FRPICKCl" );
        break;
    }
    return;
}

void sub_26885(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        PRINT_HELP( "FRQUITJm" );
        break;
        case 6:
        PRINT_HELP( "FRQUITTr" );
        break;
        case 7:
        PRINT_HELP( "FRQUITCl" );
        break;
    }
    return;
}

int sub_27066(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1: return sub_27110( uParam1 );
        case 6: return sub_48407( uParam1 );
        case 7: return sub_48467( uParam1 );
    }
    sub_3927( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Not a friend" );
    sub_3927( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Should never reach here" );
    return 0;
}

void sub_27110(boolean bParam0)
{
    if (bParam0)
    {
        return sub_27135( 1, ref l_U473, ref l_U474 );
    }
    return sub_37247( 1, ref l_U473, ref l_U474 );
}

int sub_27135(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_2960() )))
    {
        return 0;
    }
    sub_27168( uParam0 );
    sub_27203();
    sub_27533( (uParam1^) );
    sub_28313();
    if (l_U369 == 0)
    {
        sub_28428( uParam0, uParam1 );
        return 0;
    }
    if (l_U369 == 1)
    {
        sub_30281( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U369 == 2)
    {
        sub_31173( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U369 == 3)
    {
        sub_31448();
        return 0;
    }
    if (l_U369 == 4)
    {
        if (sub_31919( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_2960(), 1 );
    g_U18635[uParam0]._fU20 = 1;
    return 1;
}

void sub_27168(unknown uParam0)
{
    l_U376 = g_U18635[uParam0]._fU28;
    return;
}

void sub_27203()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2960() )))
    {
        return;
    }
    if (g_U12303)
    {
        return;
    }
    if (IS_BIT_SET( g_U10959._fU0, 4 ))
    {
        return;
    }
    if (sub_27288() < 20.00000000)
    {
        return;
    }
    if (NOT (GET_CLOSEST_CAR_NODE( l_U370._fU0, l_U370._fU4, l_U370._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 )))
    {
        return;
    }
    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    SET_CHAR_COORDINATES( sub_2582(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    return;
}

void sub_27288()
{
    vector vVar2;
    float Result;

    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return 9999.90000000;
    }
    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    GET_CHAR_COORDINATES( sub_2582(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
    GET_DISTANCE_BETWEEN_COORDS_3D( vVar2.x, vVar2.y, vVar2.z, l_U370._fU0, l_U370._fU4, l_U370._fU8, ref Result );
    return Result;
}

void sub_27533(unknown uParam0)
{
    if (COMPARE_STRING( ref l_U425._fU0, l_U424 ))
    {
        return;
    }
    if (NOT l_U425._fU96)
    {
        return;
    }
    sub_27588( uParam0 );
    l_U425._fU80 = l_U369;
    return;
}

void sub_27588(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;
    boolean bVar9;

    if (l_U369 == 0)
    {
        return;
    }
    if (NOT (HAVE_ANIMS_LOADED( ref l_U425._fU0 )))
    {
        REQUEST_ANIMS( ref l_U425._fU0 );
        return;
    }
    if (IS_CHAR_DEAD( uParam0 ))
    {
        return;
    }
    GET_SCRIPT_TASK_STATUS( uParam0, 80, ref iVar3 );
    if (iVar3 == 0)
    {
        return;
    }
    bVar4 = iVar3 == 1;
    iVar5 = 0;
    GET_CHAR_HEALTH( uParam0, ref iVar5 );
    if (iVar5 < 200)
    {
        return;
    }
    if (NOT bVar4)
    {
        CLEAR_CHAR_TASKS( uParam0 );
        TASK_PLAY_ANIM( uParam0, ref l_U425._fU32, ref l_U425._fU0, 8.00000000, 1, 0, 0, 0, -2 );
        l_U425._fU88 = 0;
        l_U425._fU92 = 0;
        return;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = 0;
    if ((((l_U425._fU80 == 1) AND (l_U369 == 2)) AND (NOT (COMPARE_STRING( ref l_U425._fU48, l_U424 )))) AND (NOT l_U425._fU88))
    {
        iVar7 = 1;
    }
    bVar8 = false;
    if (l_U425._fU100)
    {
        bVar9 = sub_27887();
        if (NOT bVar9)
        {
            bVar9 = IS_CHAR_ON_FOOT( sub_2582() );
        }
        if (((((l_U425._fU80 == 1) AND (l_U369 == 2)) AND (bVar9)) AND (NOT (COMPARE_STRING( ref l_U425._fU64, l_U424 )))) AND (NOT l_U425._fU92))
        {
            iVar7 = 1;
            bVar8 = true;
        }
    }
    else if (l_U369 == 1)
    {
        l_U425._fU100 = 1;
    }
    if ((iVar6 > l_U425._fU84) || (iVar7))
    {
        CLEAR_CHAR_TASKS( uParam0 );
        if (bVar8)
        {
            TASK_PLAY_ANIM( uParam0, ref l_U425._fU64, ref l_U425._fU0, 8.00000000, 0, 0, 0, 0, -2 );
            l_U425._fU100 = 0;
            l_U425._fU92 = 1;
        }
        else if (NOT (COMPARE_STRING( ref l_U425._fU48, l_U424 )))
        {
            TASK_PLAY_ANIM( uParam0, ref l_U425._fU48, ref l_U425._fU0, 8.00000000, 0, 0, 0, 0, -2 );
        }
        l_U425._fU88 = 1;
        sub_2235();
        return;
    }
    return;
}

boolean sub_27887()
{
    unknown uVar2;
    float fVar3;

    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    return fVar3 > 0.02000000;
}

void sub_28313()
{
    int iVar2;

    if (NOT l_U387)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT (iVar2 > l_U386))
    {
        return;
    }
    CHANGE_BLIP_PRIORITY( l_U374, l_U3 );
    FLASH_BLIP( l_U374, 0 );
    l_U386 = 0;
    l_U387 = 0;
    return;
}

void sub_28428(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_27288();
    if (fVar4 > 98.00000000)
    {
        return;
    }
    if ((g_U12303) || (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        return;
    }
    if (NOT (sub_28491( uParam0 )))
    {
        sub_28530( uParam0 );
        return;
    }
    if (NOT sub_28564())
    {
        return;
    }
    sub_28670( uParam0, uParam1, l_U370._fU0, l_U370._fU4, l_U370._fU8, l_U373 );
    SET_CHAR_DECISION_MAKER( (uParam1^), l_U391 );
    g_U18635[uParam0]._fU24 = 1;
    sub_2633( l_U415, (uParam1^), ref l_U411, 0 );
    sub_29952( uParam0, (uParam1^) );
    sub_30066();
    l_U369 = 1;
    l_U378 = 0;
    return;
}

void sub_28491(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_16107( uParam0 ) );
}

void sub_28530(unknown uParam0)
{
    REQUEST_MODEL( sub_16107( uParam0 ) );
    return;
}

int sub_28564()
{
    if (NOT l_U451)
    {
        return 1;
    }
    REQUEST_MODEL( l_U452 );
    if (NOT (HAS_MODEL_LOADED( l_U452 )))
    {
        return 0;
    }
    return 1;
}

void sub_28670(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_28681( uParam0 ), sub_16107( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_28788( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_28894( uParam0, (uParam1^) );
    return;
}

int sub_28681(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13: return 9;
    }
    return 25;
}

void sub_28788(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13:
        SET_CHAR_RELATIONSHIP_GROUP( uParam1, 6 );
        break;
    }
    return;
}

void sub_28894(unknown uParam0, unknown uParam1)
{
    sub_28906( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_28906(unknown uParam0, int iParam1)
{
    sub_28917( uParam0 );
    if (iParam1 == 22)
    {
        sub_29017( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_29676( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_28917(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_29017(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_2582()) AND (g_U15728[19]))
        {
            if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_29676(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_29017( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_29017( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_29952(unknown uParam0, unknown uParam1)
{
    int iVar4;

    sub_29676( uParam1, uParam0, l_U421 );
    CLEAR_CHAR_PROP( uParam1, 0 );
    iVar4 = -1;
    if (NOT (iVar4 == l_U422))
    {
        if (l_U422 == -1)
        {
            CLEAR_CHAR_PROP( uParam1, 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( uParam1, 1, l_U422 );
        }
    }
    ENABLE_PED_HELMET( uParam1, l_U423 );
    return;
}

void sub_30066()
{
    if (NOT l_U451)
    {
        return;
    }
    if (DOES_VEHICLE_EXIST( l_U457 ))
    {
        return;
    }
    CLEAR_AREA( l_U453._fU0, l_U453._fU4, l_U453._fU8, 5.00000000, 0 );
    CREATE_CAR( l_U452, l_U453._fU0, l_U453._fU4, l_U453._fU8, ref l_U457, 1 );
    SET_CAR_HEADING( l_U457, l_U456 );
    SET_CAR_ON_GROUND_PROPERLY( l_U457 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U452 );
    }
    return;
}

void sub_30281(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_27288();
    if (((fVar5 > 100.00000000) || (g_U12303)) || (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        sub_30334( uParam1 );
        sub_16084( uParam0 );
        sub_30372();
        l_U369 = 0;
        g_U18635[uParam0]._fU24 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_2582() )))
    {
        if (sub_30636( sub_2582() ))
        {
            return;
        }
    }
    if (fVar5 < 18.00000000)
    {
        l_U369 = 2;
        if (NOT IS_HINT_RUNNING())
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
            {
                GET_CHAR_COORDINATES( (uParam1^), ref l_U418._fU0, ref l_U418._fU4, ref l_U418._fU8 );
                l_U418._fU8 += 1.50000000;
                HINT_CAM( l_U418._fU0, l_U418._fU4, l_U418._fU8, 0, 0, 0, 30000 );
            }
        }
        l_U377 = 0;
        sub_16013();
        sub_31050( (uParam1^), uParam2 );
        TASK_LOOK_AT_CHAR( (uParam1^), sub_2582(), -2, 0 );
        return;
    }
    return;
}

void sub_30334(unknown uParam0)
{
    DELETE_CHAR( uParam0 );
    (uParam0^) = nil;
    return;
}

void sub_30372()
{
    float fVar2;

    if (NOT (DOES_VEHICLE_EXIST( l_U457 )))
    {
        return;
    }
    if (IS_CHAR_INJURED( sub_2582() ))
    {
        return;
    }
    if (IS_CAR_DEAD( l_U457 ))
    {
        return;
    }
    fVar2 = 98.00000000 - 5.00000000;
    if ((IS_CHAR_IN_CAR( sub_2582(), l_U457 )) || (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2582(), l_U457, fVar2, fVar2, 30.00000000, 0 )))
    {
        sub_30505();
        return;
    }
    DELETE_CAR( ref l_U457 );
    l_U457 = nil;
    return;
}

void sub_30505()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U457 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U457 );
    l_U457 = nil;
    return;
}

int sub_30636(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_30700( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_30700(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2784))
    {
        return 1;
    }
    return 0;
}

void sub_31050(unknown uParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        return;
    }
    if (IS_CHAR_INJURED( uParam0 ))
    {
        return;
    }
    ADD_BLIP_FOR_CHAR( uParam0, uParam1 );
    SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
    return;
}

void sub_31173(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_27288();
    if (sub_31195( uVar4, uParam0, uParam1 ))
    {
        return;
    }
    if (sub_31375( uVar4 ))
    {
        return;
    }
    return;
}

int sub_31195(float fParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    bVar5 = false;
    if (NOT (IS_CHAR_DEAD( sub_2582() )))
    {
        if (sub_30636( sub_2582() ))
        {
            bVar5 = true;
        }
    }
    if (((NOT g_U12303) AND (NOT (IS_BIT_SET( g_U10959._fU0, 4 )))) AND (NOT bVar5))
    {
        if (fParam0 <= 20.00000000)
        {
            return 0;
        }
    }
    l_U369 = 1;
    CLEAR_HELP();
    sub_15923( uParam1 );
    sub_1888( 0 );
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    TASK_CLEAR_LOOK_AT( uParam2 );
    return 1;
}

int sub_31375(float fParam0)
{
    if (fParam0 > 7.00000000)
    {
        return 0;
    }
    l_U369 = 3;
    return 1;
}

void sub_31448()
{
    float fVar2;

    fVar2 = sub_27288();
    if (sub_31466( fVar2 ))
    {
        return;
    }
    if (fVar2 < 5.00000000)
    {
        if (NOT sub_31605())
        {
            return;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
        {
            TASK_LEAVE_ANY_CAR( sub_2582() );
        }
        l_U369 = 4;
    }
    return;
}

int sub_31466(float fParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_DEAD( sub_2582() )))
    {
        if (sub_30636( sub_2582() ))
        {
            bVar3 = true;
        }
    }
    if (((NOT g_U12303) AND (NOT (IS_BIT_SET( g_U10959._fU0, 4 )))) AND (NOT bVar3))
    {
        if (fParam0 <= 9.00000000)
        {
            return 0;
        }
    }
    l_U369 = 2;
    l_U377 = 0;
    return 1;
}

int sub_31605()
{
    int iVar2;
    unknown uVar3;
    float fVar4;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U471 == 0)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2582() )))
        {
            return 1;
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
        {
            return 0;
        }
        SET_PLAYER_CONTROL( sub_2960(), 0 );
        l_U463 = iVar2 + 4000;
        l_U471 = 1;
    }
    if (l_U471 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2582() )))
        {
            l_U471 = 0;
            return 1;
        }
        if (sub_30636( sub_2582() ))
        {
            return 0;
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar3 );
        GET_CAR_SPEED( uVar3, ref fVar4 );
        if ((fVar4 < 0.04000000) || (l_U463 < iVar2))
        {
            SET_PLAYER_CONTROL( sub_2960(), 1 );
            l_U471 = 0;
            return 1;
        }
    }
    return 0;
}

int sub_31919(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    bVar4 = g_U12303;
    if (NOT bVar4)
    {
        if (IS_BIT_SET( g_U10959._fU0, 4 ))
        {
            bVar4 = true;
        }
    }
    if ((NOT l_U375) AND (bVar4))
    {
        l_U369 = 3;
        return 1;
    }
    iVar5 = 0;
    iVar6 = 0;
    if (NOT l_U375)
    {
        GET_GROUP_SIZE( sub_16528(), ref iVar5, ref iVar6 );
        if (iVar6 > 0)
        {
            if (NOT sub_32030())
            {
                sub_3927( "Check_If_Still_Joining_Group: Player has group members, but not Dwayne Backup" );
            }
            sub_32139();
            return 1;
        }
    }
    uVar7 = nil;
    iVar8 = 0;
    iVar9 = 1;
    if (NOT l_U375)
    {
        if (NOT l_U380)
        {
            iVar9 = 3;
        }
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar7 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar7, ref iVar8 );
            if ((iVar8 < iVar9) || (l_U381))
            {
                TASK_LEAVE_CAR( sub_2582(), uVar7 );
                l_U382 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( (uParam0^), 80, ref iVar10 );
        if ((NOT (iVar10 == 1)) AND (NOT (iVar10 == 7)))
        {
            return 1;
        }
        if (NOT (COMPARE_STRING( ref l_U425._fU0, l_U424 )))
        {
            CLEAR_CHAR_TASKS( (uParam0^) );
            REMOVE_ANIMS( ref l_U425._fU0 );
            l_U425._fU96 = 0;
        }
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        SET_GROUP_MEMBER( sub_16528(), (uParam0^) );
        l_U375 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        sub_32410();
        g_U12303 = 1;
    }
    iVar11 = 0;
    if ((IS_CHAR_IN_ANY_CAR( sub_2582() )) AND (NOT l_U382))
    {
        MODIFY_CHAR_MOVE_STATE( (uParam0^), 2 );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar7 );
        if (NOT (IS_CHAR_IN_CAR( (uParam0^), uVar7 )))
        {
            if (NOT (l_U417 == 0))
            {
                iVar12 = 0;
                GET_GAME_TIMER( ref iVar12 );
                if ((l_U417 < iVar12) || (NOT (IS_VEH_DRIVEABLE( uVar7 ))))
                {
                    SET_PLAYER_CONTROL( sub_2960(), 1 );
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U417 = 0;
                }
                else if (NOT (IS_GROUP_MEMBER( (uParam0^), sub_16528() )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    SET_GROUP_MEMBER( sub_16528(), (uParam0^) );
                }
            }
            else if (sub_27288() > 20.00000000)
            {
                return 0;
            }
            return 1;
        }
        if (l_U376)
        {
            sub_33061( l_U416, ref l_U405 );
            iVar11 = sub_18050( l_U416 );
            sub_35051( iVar11 );
        }
        else
        {
            sub_35229( l_U416, ref l_U405 );
        }
        sub_15923( uParam1 );
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
        return 0;
    }
    if (l_U376)
    {
        if (l_U383)
        {
            sub_36032( l_U416, ref l_U405 );
        }
        else
        {
            sub_36337( l_U416, ref l_U405 );
        }
        iVar11 = sub_18050( l_U416 );
        sub_35051( iVar11 );
    }
    else if (l_U383)
    {
        sub_36730( l_U416, ref l_U405 );
    }
    else
    {
        sub_37046( l_U416, ref l_U405 );
    }
    if ((IS_HINT_RUNNING()) AND (NOT l_U382))
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    sub_30505();
    return 0;
}

int sub_32030()
{
    return 0;
}

void sub_32139()
{
    return;
}

void sub_32410()
{
    sub_32419();
    sub_32564( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_32638();
    return;
}

void sub_32419()
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

void sub_32564(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_32638()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_8668( 1, g_U572[I] )) == 0)
        {
            sub_8954( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_9120())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

void sub_33061(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_33096( uParam0, uParam1 );
        return;
    }
    if (g_U39119)
    {
        switch (uParam0)
        {
            case 1:
            sub_33155( "E1FCJ3_BLRA", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) LATE\n" );
            return;
            case 6:
            sub_33155( "E1FCT3_LRC", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) LATE\n" );
            return;
            case 7:
            sub_33155( "E1FCC3_LR", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) LATE\n" );
            return;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 1:
            sub_33155( "E1FCJ3_BL", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE (BIKE ONLY) LATE\n" );
            return;
            case 6:
            sub_33155( "E1FCT3_BL", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE (BIKE ONLY) LATE\n" );
            return;
            case 7:
            sub_33155( "E1FCC3_BL", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE (BIKE ONLY) LATE\n" );
            return;
        }
    }
    sub_33155( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_33096(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_BNL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_BNL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_BNL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_33155(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_33176( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_33176(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_33230( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_33230(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_33252( iParam1 )))
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
    sub_33940( ref g_U8947, ref l_U6 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_33252(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_33329( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_33329( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_33329( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_33329(unknown uParam0)
{
    return;
}

void sub_33940(int iParam0, int iParam1)
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

void sub_35051(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = 0;
        break;
        default:
        sub_3927( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_11663( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_11663( uParam0, 0, iVar4 );
    return;
}

void sub_35229(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_33096( uParam0, uParam1 );
        return;
    }
    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return;
    }
    if (g_U39119)
    {
        switch (uParam0)
        {
            case 1:
            sub_33155( "E1FCJ3_NLR", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) NOT LATE\n" );
            return;
            case 6:
            sub_33155( "E1FCT3_BNLC", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) NOT LATE\n" );
            return;
            case 7:
            sub_33155( "E1FCC3_NLR", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) NOT LATE\n" );
            return;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 1:
            sub_33155( "E1FCJ3_BNL", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
            return;
            case 6:
            sub_33155( "E1FCT3_BNL", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
            return;
            case 7:
            sub_33155( "E1FCC3_BNL", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
            return;
        }
    }
    sub_33155( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_36032(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_MTAL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: MEET AT ACTIVITY - LATE\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_ACTL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: MEET AT ACTIVITY - LATE\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: MEET AT ACTIVITY - LATE\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_36337(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_36372( uParam0, uParam1 );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_36372(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_ANB", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: ARRIVED NOT ON BIKE\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_NB", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: ARRIVED NOT ON BIKE\n" );
        return;
        case 7:
        sub_33155( "PLACEHOLDER", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: ARRIVED NOT ON BIKE\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_36730(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_MTNL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: MEET AT ACTIVITY - NOT LATE\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_NL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: MEET AT ACTIVITY - NOT LATE\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_ANL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: MEET AT ACTIVITY - NOT LATE\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_37046(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_36372( uParam0, uParam1 );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

int sub_37247(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_2960() )))
    {
        return 0;
    }
    sub_27168( uParam0 );
    sub_27203();
    sub_28313();
    if (l_U369 == 0)
    {
        sub_37311( uParam0, uParam1 );
        return 0;
    }
    if (l_U369 == 1)
    {
        sub_41774( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U369 == 2)
    {
        sub_42833( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U369 == 3)
    {
        l_U369 = 2;
    }
    if (l_U369 == 4)
    {
        if (sub_43587( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_2960(), 1 );
    g_U18635[uParam0]._fU20 = 1;
    return 1;
}

void sub_37311(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_27288();
    if (fVar4 > 198.00000000)
    {
        return;
    }
    if ((g_U12303) || (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        return;
    }
    if ((NOT sub_37372()) || (NOT sub_28564()))
    {
        return;
    }
    sub_30066();
    switch (uParam0)
    {
        case 1:
        (uParam1^) = g_U38857[0]._fU0;
        break;
        case 6:
        (uParam1^) = g_U38857[1]._fU0;
        break;
        case 7:
        (uParam1^) = g_U38857[2]._fU0;
        break;
    }
    g_U18635[uParam0]._fU24 = 1;
    sub_2633( l_U415, (uParam1^), ref l_U411, 0 );
    sub_29952( uParam0, (uParam1^) );
    l_U369 = 1;
    l_U378 = 0;
    return;
}

int sub_37372()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 0;
    if (NOT (sub_37387( 0, ref iVar2, ref uVar3 )))
    {
        return 0;
    }
    if (NOT (sub_37387( 1, ref iVar2, ref uVar3 )))
    {
        return 0;
    }
    if (NOT (sub_37387( 2, ref iVar2, ref uVar3 )))
    {
        return 0;
    }
    return 1;
}

int sub_37387(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (sub_37398( uParam0 )))
    {
        return 1;
    }
    if ((DOES_CHAR_EXIST( g_U38857[uParam0]._fU0 )) AND (DOES_VEHICLE_EXIST( g_U38857[uParam0]._fU4 )))
    {
        if ((uParam1^) == 0)
        {
            (uParam2^) = g_U38857[uParam0]._fU4;
        }
        (uParam1^)++;
        return 1;
    }
    uVar5 = {sub_37623( (uParam1^), (uParam2^) )};
    uVar8 = sub_37870( uParam0 );
    if (NOT (sub_38055( uVar8, uVar5, l_U373, ref g_U38857[uParam0] )))
    {
        return 0;
    }
    if ((uParam1^) == 0)
    {
        (uParam2^) = g_U38857[uParam0]._fU4;
    }
    (uParam1^)++;
    if (IS_CHAR_IN_CAR( g_U38857[uParam0]._fU0, g_U38857[uParam0]._fU4 ))
    {
        LOCK_CAR_DOORS( g_U38857[uParam0]._fU4, 3 );
    }
    return 1;
}

void sub_37398(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Is_Biker_Friend_Active: Minigame Biker Index out of range" );
        return 0;
    }
    return g_U38847[iParam0]._fU0;
}

void sub_37623(unknown uParam0, unknown uParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    Result = {l_U370};
    switch (uParam0)
    {
        case 0: break;
        case 1:
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 2.00000000, -3.50000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            Result._fU0 += 2.00000000;
            Result._fU4 -= 3.50000000;
        }
        break;
        case 2:
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, -2.00000000, -3.50000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            Result._fU0 += 2.00000000;
            Result._fU4 -= 3.50000000;
        }
        break;
    }
    return Result;
}

int sub_37870(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 1;
        case 1: return 6;
        case 2: return 7;
    }
    SCRIPT_ASSERT( "Minigames_Return_Biker_Friend_ContactID: Phone Contact ID is not a possible biker friend" );
    return 22;
}

int sub_38055(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    if ((NOT (sub_28491( uParam0 ))) || (NOT (HAS_MODEL_LOADED( sub_38074( uParam0 ) ))))
    {
        sub_28530( uParam0 );
        REQUEST_MODEL( sub_38074( uParam0 ) );
        return 0;
    }
    sub_38353( uParam1, uParam4, sub_16107( uParam0 ), sub_38074( uParam0 ), iParam5, 1 );
    sub_39860( iParam5->_fU4, sub_38074( uParam0 ), uParam0 );
    SUPPRESS_CAR_MODEL( sub_38074( uParam0 ) );
    sub_28894( uParam0, iParam5->_fU0 );
    sub_16084( uParam0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_38074( uParam0 ) );
    }
    return 1;
}

int sub_38074(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -359167535;
        case 1: return -570033273;
        case 6: return -408052231;
        case 7: return -408052231;
        case 13: return -408052231;
        case 16: return -408052231;
        case 17: return -255678177;
        case 15: return -1759858085;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -570033273;
}

void sub_38353(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7)
{
    unknown uVar10;

    sub_38387( vParam0 + (vector( 2.00000000, 0.00000000, 0.00000000)), uParam3, uParam4, iParam6 );
    uVar10 = sub_39812( vParam0, uParam3, uParam5 );
    WARP_CHAR_INTO_CAR( iParam6->_fU0, uVar10 );
    GIVE_PED_HELMET_WITH_OPTS( iParam6->_fU0, 1 );
    iParam6->_fU4 = uVar10;
    if (NOT bParam7)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
    }
    return;
}

void sub_38387(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_38985( sub_38397( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_39113( iParam5 );
    return;
}

void sub_38397(unknown uParam0)
{
    int Result;

    Result = 0;
    switch ((uParam0^))
    {
        case -159126838:
        case 301427732:
        case -570033273:
        case -408052231:
        case 584879743:
        case 802082487:
        case -359167535:
        case 1439613707:
        case 1737188996:
        case -411638179:
        case -2130437771:
        case -1832534792:
        case -1670328242:
        case 188410296:
        case 1414790133:
        case 630267504:
        case 1719115836:
        case 1914397972:
        case -2138439183:
        case 1215631816:
        case 1706970202:
        case 717510247:
        case 965080042:
        case 693982133:
        case 454735664:
        case 1409362172:
        case 767450539:
        case 1686719296:
        case 1917871822:
        case 422524045:
        Result = 1;
        break;
        case -571009320:
        case 2006142190:
        case -1606187161:
        case -77769032:
        case -618617997:
        case 977480632:
        case -1159156463:
        case 479817841:
        case 226415164:
        case 15972646:
        case -2107556865:
        case -150646512:
        case 690697563:
        case -504027408:
        Result = 2;
        break;
        case -114291515:
        case -891462355:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case 236691815:
        case 1590280898:
        Result = 3;
        break;
    }
    if (Result == 0)
    {
        if (((((((uParam0^) == (sub_16107( 0 ))) || ((uParam0^) == (sub_16107( 1 )))) || ((uParam0^) == (sub_16107( 6 )))) || ((uParam0^) == (sub_16107( 7 )))) || ((uParam0^) == (sub_16107( 13 )))) || ((uParam0^) == (sub_16107( 16 ))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_16107( 15 ))) || ((uParam0^) == (sub_16107( 17 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_38985(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 9;
        break;
        case 2:
        return 8;
        break;
    }
    return 25;
}

void sub_39113(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_39152( iParam0 + 0 );
    if (iVar3 == 1)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 0, 0 );
        SET_CHAR_NEVER_TARGETTED( iParam0->_fU0, 1 );
    }
    else if (iVar3 == 3)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 1, 0 );
    }
    else if (iVar3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_39322( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_39322( iVar3 ) );
    };;;
    SET_CHAR_PROOFS( iParam0->_fU0, 0, 0, 0, 1, 0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam0->_fU0, 1 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
    SET_PED_FALL_OFF_BIKES_WHEN_SHOT( iParam0->_fU0, 0 );
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU92 = 0;
    iParam0->_fU16 = {0, 0, 0};
    iParam0->_fU28 = 18.00000000;
    iParam0->_fU32 = 0;
    iParam0->_fU36 = 4;
    iParam0->_fU40 = 2;
    iParam0->_fU88 = 12;
    iParam0->_fU96 = 5;
    if (iVar3 == 1)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) == 0)
        {
            sub_39609( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_16107( 6 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_16107( 7 ) ))))
        {
            sub_39609( iParam0 );
        }
    }
    return;
}

void sub_39152(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_38397( ref uVar3 );
    }
    return Result;
}

int sub_39322(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 6;
        break;
        case 2:
        return 5;
        break;
    }
    return 22;
}

void sub_39609(int iParam0)
{
    if (l_U143)
    {
        ADD_BLIP_FOR_CHAR( iParam0->_fU0, iParam0 + 100 );
        SET_BLIP_AS_FRIENDLY( iParam0->_fU100, 1 );
        CHANGE_BLIP_PRIORITY( iParam0->_fU100, 0 );
        SET_BLIP_AS_SHORT_RANGE( iParam0->_fU100, 1 );
        CHANGE_BLIP_SCALE( iParam0->_fU100, 0.50000000 );
        CHANGE_BLIP_DISPLAY( iParam0->_fU100, 5 );
    }
    return;
}

void sub_39812(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_39860( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

void sub_39860(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_41774(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_27288();
    if (((fVar5 > 200.00000000) || (g_U12303)) || (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        if (g_U12303)
        {
            sub_41837( uParam1 );
        }
        else
        {
            sub_42215( uParam1 );
        }
        sub_30372();
        l_U369 = 0;
        g_U18635[uParam0]._fU24 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_2582() )))
    {
        if (sub_30636( sub_2582() ))
        {
            return;
        }
    }
    if (fVar5 < 18.00000000)
    {
        l_U369 = 2;
        l_U377 = 0;
        sub_16013();
        sub_42641();
        TASK_LOOK_AT_CHAR( (uParam1^), sub_2582(), -2, 0 );
        return;
    }
    return;
}

void sub_41837(unknown uParam0)
{
    int I;

    if (NOT (IS_PLAYER_PLAYING( sub_2960() )))
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37398( I ))
        {
            if (IS_VEH_DRIVEABLE( g_U38857[I]._fU4 ))
            {
                TASK_CAR_MISSION_PED_TARGET( g_U38857[I]._fU0, g_U38857[I]._fU4, sub_2582(), 8, 40.00000000, 2, 300, 5 );
            }
            sub_41979( ref g_U38857[I], 1 );
        }
    }
    (uParam0^) = nil;
    return;
}

void sub_41979(int iParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( iParam0->_fU100 ))
    {
        REMOVE_BLIP( iParam0->_fU100 );
    }
    if ((DOES_VEHICLE_EXIST( iParam0->_fU4 )) AND (uParam1))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
    }
    if (DOES_CHAR_EXIST( iParam0->_fU0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            SET_CHAR_KEEP_TASK( iParam0->_fU0, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( iParam0 + 0 );
    }
    iParam0->_fU0 = nil;
    iParam0->_fU4 = nil;
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU36 = 4;
    return;
}

void sub_42215(unknown uParam0)
{
    int I;

    if (NOT (IS_PLAYER_PLAYING( sub_2960() )))
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37398( I ))
        {
            sub_42283( ref g_U38857[I], 1 );
        }
    }
    (uParam0^) = nil;
    return;
}

void sub_42283(int iParam0, boolean bParam1)
{
    int iVar4;

    if (DOES_BLIP_EXIST( iParam0->_fU100 ))
    {
        REMOVE_BLIP( iParam0->_fU100 );
    }
    if ((DOES_CHAR_EXIST( iParam0->_fU0 )) AND (iParam0->_fU0 != sub_2582()))
    {
        DELETE_CHAR( iParam0 + 0 );
    }
    if (DOES_VEHICLE_EXIST( iParam0->_fU4 ))
    {
        if (bParam1)
        {
            iVar4 = nil;
            if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref iVar4 );
            }
            if (iVar4 == iParam0->_fU4)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
            }
            else
            {
                DELETE_CAR( iParam0 + 4 );
            }
        }
        else
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
        }
    }
    iParam0->_fU0 = nil;
    iParam0->_fU4 = nil;
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU36 = 4;
    return;
}

void sub_42641()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (DOES_BLIP_EXIST( g_U38847[I]._fU8 )))
            {
                if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
                {
                    sub_31050( g_U38857[I]._fU0, ref g_U38847[I]._fU8 );
                }
            }
        }
    }
    return;
}

void sub_42833(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_27288();
    if (sub_31195( uVar4, uParam0, uParam1 ))
    {
        sub_15844();
        l_U458 = 0;
        return;
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_2582() ))
    {
        PRINT_HELP_FOREVER( ref l_U392[1] );
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_2582() ))
    {
        if (sub_42927())
        {
            return;
        }
    }
    else if (NOT l_U458)
    {
        if (sub_43055())
        {
            sub_43225( l_U416, ref l_U405 );
            l_U458 = 1;
        }
    }
    return;
}

int sub_42927()
{
    unknown uVar2;
    float fVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2582() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    if (fVar3 < 18.00000000)
    {
        l_U369 = 4;
        CLEAR_HELP();
        return 1;
    }
    return 0;
}

int sub_43055()
{
    unknown uVar2;
    float fVar3;
    float fVar4;

    if (IS_CHAR_ON_ANY_BIKE( sub_2582() ))
    {
        return 0;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
    {
        if (IS_PLAYER_PRESSING_HORN( sub_2960() ))
        {
            return 1;
        }
        uVar2 = nil;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar2 );
        fVar3 = 0.00000000;
        GET_CAR_SPEED( uVar2, ref fVar3 );
        if (fVar3 < 0.01000000)
        {
            return 1;
        }
        return 0;
    }
    fVar4 = sub_27288();
    if (fVar4 < 5.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_43225(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_36372( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_ANB", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: ARRIVED NOT ON BIKE\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_NB", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: ARRIVED NOT ON BIKE\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_NB", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: ARRIVED NOT ON BIKE\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

int sub_43587(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    unknown uVar5;

    bVar4 = g_U12303;
    if (NOT bVar4)
    {
        if (IS_BIT_SET( g_U10959._fU0, 4 ))
        {
            bVar4 = true;
        }
    }
    if ((NOT l_U375) AND (bVar4))
    {
        l_U369 = 2;
        return 1;
    }
    if (NOT l_U375)
    {
        l_U375 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        sub_32410();
        g_U12303 = 1;
    }
    sub_43696();
    if (l_U376)
    {
        sub_33061( l_U416, ref l_U405 );
        uVar5 = sub_18050( l_U416 );
        sub_35051( uVar5 );
    }
    else
    {
        sub_35229( l_U416, ref l_U405 );
    }
    sub_15844();
    sub_45529( sub_2582(), sub_45189( 1 ), (uParam0^), 39 );
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    sub_48221();
    sub_30505();
    return 0;
}

void sub_43696()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int I;

    iVar2 = 0;
    iVar3 = 3;
    iVar4 = 3;
    iVar5 = 3;
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37398( I ))
        {
            switch (iVar2)
            {
                case 0:
                iVar3 = I;
                break;
                case 1:
                iVar4 = I;
                break;
                case 2:
                iVar5 = I;
                break;
            }
            iVar2++;
        }
    }
    if (iVar2 == 0)
    {
        return;
    }
    switch (iVar2)
    {
        case 1:
        sub_43881( ref g_U38857[iVar3], sub_2582() );
        sub_44577( ref g_U38857[iVar3], 3 );
        break;
        case 2:
        sub_43881( ref g_U38857[iVar3], sub_2582() );
        sub_44577( ref g_U38857[iVar3], 0 );
        sub_43881( ref g_U38857[iVar4], sub_2582() );
        sub_44577( ref g_U38857[iVar4], 1 );
        break;
        case 3:
        sub_43881( ref g_U38857[iVar3], sub_2582() );
        sub_44577( ref g_U38857[iVar3], 0 );
        sub_43881( ref g_U38857[iVar4], sub_2582() );
        sub_44577( ref g_U38857[iVar4], 1 );
        sub_43881( ref g_U38857[iVar5], g_U38857[iVar3]._fU0 );
        sub_44577( ref g_U38857[iVar5], 1 );
        break;
    }
    return;
}

void sub_43881(int iParam0, int iParam1)
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
                if (sub_43977( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam0->_fU8 == sub_2582()) AND (iParam1 != sub_2582()))
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
        sub_44462( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_2582())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_44577( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_44577( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_44577( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_44577( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_44577( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_43977(unknown uParam0, unknown uParam1)
{
    return (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 )) AND (NOT (sub_44001( uParam0, uParam1 )));
}

boolean sub_44001(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_44462(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_44577(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_2582())
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

void sub_45189(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref uVar3 );
        switch (uVar3)
        {
            case 1:
            Result = "gest_thumbsup";
            break;
            default:
            Result = "gest_thumbsup";
            break;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "p_gest_celeb_a";
            break;
            case 1:
            Result = "p_gest_celeb_b";
            break;
            case 2:
            Result = "p_gest_celeb_c";
            break;
            case 3:
            Result = "p_gest_celeb_d";
            break;
            case 5:
            Result = "p_gest_rockin";
            break;
            case 6:
            Result = "p_gest_yes";
            break;
            default:
            Result = "p_gest_yes";
            break;
        }
    }
    return Result;
}

void sub_45529(int iParam0, unknown uParam1, int iParam2, int iParam3)
{
    boolean Result;
    unknown uVar7;
    int iVar8;

    Result = false;
    if (IS_CHAR_INJURED( iParam0 ))
    {
        PRINTSTRING( "PERFORM_BIKER_GESTURE: ped is injured\n" );
        return 0;
    }
    if (IS_STRING_NULL( uParam1 ))
    {
        Result = true;
    }
    else if (COMPARE_STRING( uParam1, "" ))
    {
        Result = true;
    }
    else if (NOT ((IS_CHAR_ON_ANY_BIKE( iParam0 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( iParam0 ))))
    {
        Result = true;
    }
    else
    {
        uVar7 = sub_46019( sub_45689( iParam0 ) );
        if (NOT (IS_STRING_NULL( uVar7 )))
        {
            if (HAVE_ANIMS_LOADED( uVar7 ))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0, uVar7, uParam1 )))
                {
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( iParam0, uParam1, uVar7, 8.00000000, 0, 0, 0, 0, 0 );
                    Result = true;
                }
            }
        }
    };;;
    if (Result)
    {
        l_U167 = iParam0;
        l_U168 = iParam2;
        if (DOES_CHAR_EXIST( iParam2 ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( iParam0, iParam2 )))
            {
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_46363( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_2582())
            {
                iVar8 = sub_39152( ref iParam0 );
                if ((iVar8 == 1) AND (iParam2 != sub_2582()))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_2582(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_2582(), iParam2, sub_46363( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_2582(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2582(), iParam0, sub_46363( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((iParam3 == 38) AND (IS_CHAR_MODEL( iParam0, sub_16107( 0 ) )))
            {
                if (l_U172)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_46627( iParam3 ), 1, 1, 2 );
            }
            l_U166 = iParam3;
        }
        GET_GAME_TIMER( ref l_U165 );
        switch (iParam3)
        {
            case 35: SET_BIT( ref l_U170, 2 );
            case 36: SET_BIT( ref l_U170, 1 );
            case 24:
            SET_BIT( ref l_U170, 0 );
            break;
            case 38:
            SET_BIT( ref l_U170, 6 );
            break;
        }
    }
    return Result;
}

void sub_45689(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_45742( uVar3 );
        }
    }
    return Result;
}

void sub_45742(unknown uParam0)
{
    int Result;
    unknown uVar4;

    Result = 5;
    GET_CAR_MODEL( uParam0, ref uVar4 );
    switch (uVar4)
    {
        case -1830458836:
        case 584879743:
        case -1606187161:
        case -618617997:
        case 301427732:
        case 802082487:
        case -359167535:
        case -159126838:
        case -408052231:
        Result = 0;
        break;
        case -570033273:
        case -571009320:
        case 2006142190:
        case -77769032:
        Result = 1;
        break;
        case 1203311498:
        case -909201658:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case -114291515:
        case -891462355:
        Result = 2;
        break;
        case 788045382:
        Result = 4;
        break;
        case -1842748181:
        Result = 3;
        break;
    }
    return Result;
}

void sub_46019(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "MISSBIKE_GESTFREE";
        break;
        case 1:
        Result = "MISSBIKE_GESTCHOP";
        break;
        case 2:
        Result = "MISSBIKE_GESTSPT";
        break;
        case 3:
        Result = "MISSBIKE_GESTSCOT";
        break;
        case 4:
        Result = "MISSBIKE_GESTDIRT";
        break;
    }
    return Result;
}

void sub_46363(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_46627(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "ABUSE_COPS";
        break;
        case 1:
        Result = "ABUSE_GENERIC_BIKER_PED";
        break;
        case 2:
        Result = "ABUSE_HOOKER";
        break;
        case 3:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST";
        break;
        case 4:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST_TRUCE";
        break;
        case 5:
        Result = "BIKE_CRASH_DRIVEN";
        break;
        case 6:
        Result = "BIKE_DRIVE_MORE_CAREFUL";
        break;
        case 7:
        Result = "BIKE_HIT_PED";
        break;
        case 8:
        Result = "BIKE_JUMP";
        break;
        case 9:
        Result = "BIKE_ON_FIRE";
        break;
        case 10:
        Result = "BIKE_OVERTAKE";
        break;
        case 11:
        Result = "BIKER_ACHIEVE_MISSION_OBJECTIVE";
        break;
        case 12:
        Result = "BIKER_CLIPS_ANOTHER_BIKE";
        break;
        case 13:
        Result = "BIKER_CLIPS_ANYTHING";
        break;
        case 14:
        Result = "BIKER_FALLING_BEHIND";
        break;
        case 15:
        Result = "BIKER_FALLS_BEHIND";
        break;
        case 16:
        Result = "BIKER_PASSENGER_SHOOT_GENERIC";
        break;
        case 17:
        Result = "BIKER_PLAYER_FALLS_BEHIND";
        break;
        case 18:
        Result = "COME_UNDER_ATTACK";
        break;
        case 19:
        Result = "FOLLOW_ME_GUYS";
        break;
        case 20:
        Result = "GENERIC_CELEBRATION";
        break;
        case 21:
        Result = "GET_A_MOVE_ON";
        break;
        case 22:
        Result = "GET_IN_COVER";
        break;
        case 23:
        Result = "GET_THE_HELL_OUT_OF_HERE";
        break;
        case 24:
        Result = "GET_WANTED_LEVEL";
        break;
        case 25:
        Result = "GREET_JOHNNY";
        break;
        case 26:
        Result = "JACKED_BY_PLAYER_LIKE";
        break;
        case 27:
        Result = "KEEP_SHOOTING";
        break;
        case 28:
        Result = "LOST_TAUNT_ANGELS_OF_DEATH";
        break;
        case 29:
        Result = "LOST_TAUNT_LOST";
        break;
        case 30:
        Result = "LOST_WHOOP";
        break;
        case 31:
        Result = "NEED_BIKE_NOT_CAR";
        break;
        case 32:
        Result = "NEED_SOME_HELP";
        break;
        case 33:
        Result = "NICE_BIKE";
        break;
        case 34:
        Result = "NICE_SHOOTING_JOHNNY";
        break;
        case 35:
        Result = "POLICE_PURSUIT";
        break;
        case 36:
        Result = "SPOT_POLICE";
        break;
        case 37:
        Result = "JACKING_LOST_BIKE";
        break;
        case 38:
        Result = "WAIT_FOR_ME";
        break;
    }
    return Result;
}

void sub_48221()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (IS_VEH_DRIVEABLE( g_U38857[I]._fU4 ))
            {
                LOCK_CAR_DOORS( g_U38857[I]._fU4, 1 );
            }
        }
    }
    return;
}

void sub_48407(boolean bParam0)
{
    if (bParam0)
    {
        return sub_27135( 6, ref l_U482, ref l_U483 );
    }
    return sub_37247( 6, ref l_U482, ref l_U483 );
}

void sub_48467(boolean bParam0)
{
    if (bParam0)
    {
        return sub_27135( 7, ref l_U491, ref l_U492 );
    }
    return sub_37247( 7, ref l_U491, ref l_U492 );
}

void sub_48732(unknown uParam0)
{
    if (g_U10494)
    {
        return;
    }
    if (g_U18635[uParam0]._fU704._fU4)
    {
        return;
    }
    if (NOT g_U10494)
    {
        if (sub_48792( uParam0 ))
        {
            g_U10494 = 1;
        }
        return;
    }
    return;
}

int sub_48792(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        PRINT_HELP( "FRLOCJm" );
        break;
        case 6:
        PRINT_HELP( "FRLOCTr" );
        break;
        case 7:
        PRINT_HELP( "FRLOCCl" );
        break;
    }
    return 1;
}

void sub_49017()
{
    SET_MISSION_FLAG( 1 );
    sub_49034();
    l_U507 = 1;
    sub_49854( "Clay Friend Activity: Hangout" );
    return;
}

void sub_49034()
{
    sub_49043();
    return;
}

void sub_49043()
{
    int iVar2;

    iVar2 = 7;
    sub_49057( iVar2 );
    return;
}

void sub_49057(unknown uParam0)
{
    unknown uVar3;

    g_U12303 = 1;
    uVar3 = sub_9272( uParam0 );
    sub_49083( uVar3 );
    return;
}

void sub_49083(unknown uParam0)
{
    unknown uVar3;
    char[16] cVar4;

    uVar3 = g_U18635[uParam0]._fU144;
    StrCopy( ref cVar4, "", 16 );
    switch (uVar3)
    {
        case 6:
        StrCopy( ref cVar4, "AIRHOCKEY", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "ARMWRESTLING", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "BOATING", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "BOWLING", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "DARTS", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "DRINKING", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "EATING", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "GANGWAR", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "HANGOUT", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "HELIRIDES", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "HILOCARDS", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "LIFTS", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "POOL", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "RACES", 16 );
        break;
        case 20:
        StrCopy( ref cVar4, "SHOW", 16 );
        break;
        case 21:
        StrCopy( ref cVar4, "STRIPCLUB", 16 );
        break;
        case 22: return;
    }
    SCRIPT_ASSERT( "Flow_Player_Stats_Friend_Activity_Started: Unknown Activity ID" );
    return;
    sub_49630( cVar4 );
    return;
}

void sub_49630(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10987, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U10987 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10987 );
    return;
}

void sub_49854(unknown uParam0)
{
    return;
}

void sub_49891(unknown uParam0)
{
    if (NOT (g_U26739._fU0 == 19))
    {
        return;
    }
    if (NOT (sub_49920( uParam0 )))
    {
        return;
    }
    g_U26739._fU0 = uParam0;
    g_U26739._fU8 = 12;
    g_U26739._fU12 = 12;
    return;
}

int sub_49920(int iParam0)
{
    if (iParam0 < 9)
    {
        return 1;
    }
    if (sub_49944( iParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_49944(unknown uParam0)
{
    return 0;
}

void sub_50023(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 22; I++ )
    {
        l_U1184[I] = 0;
    }
    l_U1150 = g_U18635[uParam0]._fU144;
    sub_50092( uParam0, 6, 1 );
    sub_50092( uParam0, 7, 1 );
    sub_50092( uParam0, 10, 1 );
    sub_50092( uParam0, 11, 1 );
    sub_50092( uParam0, 12, 1 );
    sub_50092( uParam0, 16, 1 );
    sub_50092( uParam0, 18, 1 );
    sub_50092( uParam0, 20, 1 );
    sub_50092( uParam0, 21, 1 );
    sub_50092( uParam0, 9, 0 );
    sub_50499();
    sub_53749();
    sub_54896();
    sub_55729( 3 );
    l_U1152 = 0;
    l_U1207 = sub_18050( uParam0 );
    sub_55780( l_U1150 );
    l_U1157 = 0;
    if (NOT l_U1175)
    {
        l_U1174 = g_U10507;
        g_U10507 = 1;
        l_U1175 = 1;
    }
    return;
}

void sub_50092(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    if (NOT g_U15862[uParam0]._fU8[0]._fU0[iParam1])
    {
        if (NOT (sub_50133( uParam0, iParam1 )))
        {
            return;
        }
    }
    iVar5 = sub_50188( iParam1 );
    if (iVar5 == 12)
    {
        if (NOT (iParam1 == l_U1150))
        {
            l_U1184[iParam1] = uParam2;
        }
        return;
    }
    sub_50378( iVar5, uParam2 );
    return;
}

int sub_50133(unknown uParam0, int iParam1)
{
    if (iParam1 == 16)
    {
        return 1;
    }
    if (iParam1 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_50188(unknown uParam0)
{
    switch (uParam0)
    {
        case 6: return 0;
        case 7: return 1;
        case 8: return 2;
        case 9: return 10;
        case 10: return 3;
        case 15: return 4;
        case 16: return 5;
        case 18: return 6;
        case 20: return 8;
        case 21: return 9;
    }
    return 12;
}

void sub_50378(unknown uParam0, unknown uParam1)
{
    g_U26739._fU36[uParam0] = uParam1;
    return;
}

void sub_50499()
{
    int I;
    int[65] iVar3;

    l_U950 = 0;
    I = 0;
    array(ref iVar3, 65);
    for ( I = 0; I < 65; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 65; I++ )
    {
        if (g_U11583[I]._fU12 == 11)
        {
            if (l_U950 >= 16)
            {
                sub_3927( "InfoEat: Initialise_Eat_Destinations: Increase MAX_EAT_DESTINATIONS" );
            }
            l_U613[l_U950]._fU0 = I;
            iVar3[I] = l_U950;
            l_U950++;
        }
    }
    for ( I = 0; I < l_U950; I++ )
    {
        l_U951[I] = 0;
        l_U968[I] = 0;
    }
    sub_50833( iVar3[0], 1186.03200000, 381.45840000, 25.89440000, 273.88000000, 1175.87300000, 392.51750000, 29.59400000, -13.69880000, 0.00000000, -147.50740000, 1112014848 );
    sub_50833( iVar3[1], 1643.65800000, 245.58400000, 25.50000000, 243.86450000, 1670.37300000, 252.74060000, 27.71511000, 0.69950600, 0.00000000, 130.74310000, 1112014848 );
    sub_50833( iVar3[2], 882.92200000, -473.00300000, 16.30900000, 270.12920000, 876.81410000, -460.09550000, 15.35026000, 11.67727000, -0.00000000, -161.68270000, 1112014848 );
    sub_50833( iVar3[18], 443.42000000, 1526.31400000, 17.50700000, 268.88550000, 423.45340000, 1529.01700000, 34.79707000, -36.57798000, -11.22095000, -114.45570000, 1112014848 );
    sub_50833( iVar3[19], 1096.24500000, 1599.80300000, 18.02700000, 316.12340000, 1108.09200000, 1625.32100000, 21.56322000, -1.15058200, -0.00000000, 174.86560000, 1112014848 );
    sub_50833( iVar3[23], -146.61000000, 72.23300000, 16.02500000, 191.93320000, -172.63120000, 61.32870000, 55.90245000, -51.17967000, -0.00000000, -102.22700000, 1112014848 );
    sub_50833( iVar3[24], -619.91990000, 161.67230000, 6.02700000, 91.38610000, -645.24320000, 125.56240000, 22.66623000, -32.12400000, -0.00000000, -56.49996000, 1112014848 );
    sub_50833( iVar3[25], -174.31000000, 272.46700000, 15.98500000, 90.06450000, -206.20180000, 261.43610000, 35.89857000, -34.11337000, -0.00000000, -46.99197000, 1112014848 );
    sub_50833( iVar3[26], -433.07940000, 1178.45900000, 14.39740000, 91.17450000, -423.18860000, 1174.36700000, 24.29361000, -39.14743000, 6.24956800, 45.26580000, 1112014848 );
    sub_50833( iVar3[27], -136.81900000, -276.97200000, 14.53500000, 179.94550000, -123.23390000, -275.37620000, 12.44489000, 3.61987600, -0.00000000, 92.21399000, 1112014848 );
    sub_50833( iVar3[28], -394.37900000, 250.15800000, 15.55600000, 91.12110000, -410.06970000, 251.82990000, 20.99272000, -11.35220000, 0.00000000, -107.25360000, 1112014848 );
    sub_50833( iVar3[29], 118.72730000, 636.46600000, 16.10430000, 181.62540000, 126.37460000, 628.77320000, 20.18756000, -20.45377000, 0.00000000, 51.15732000, 1112014848 );
    sub_50833( iVar3[30], 33.67200000, 974.29800000, 15.96700000, 0.00000000, 37.68074000, 1005.61400000, 22.87771000, -23.27425000, 0.00000100, 145.58120000, 1112014848 );
    sub_50833( iVar3[51], -1002.54900000, 1604.37000000, 25.21300000, 214.78020000, -992.73790000, 1583.80300000, 36.61912000, -19.68591000, 0.00000100, 26.11061000, 1112014848 );
    sub_50833( iVar3[52], -1250.08700000, 1070.77300000, 21.16600000, 2.24760000, -1258.48500000, 1055.73500000, 25.37512000, -4.82664000, 0.00000000, -37.46955000, 1112014848 );
    sub_50833( iVar3[53], -1155.57900000, 1389.54100000, 25.63000000, 89.35540000, -1173.21800000, 1372.00600000, 22.45787000, 10.71952000, -0.00000000, -29.54759000, 45.00000000 );
    for ( I = 0; I < l_U950; I++ )
    {
        if (NOT l_U951[I])
        {
            sub_3927( "InfoEat: Initialise_Eat_Destinations: There is missing additional data - are there new FOOD Map Blips?" );
        }
    }
    sub_52402( iVar3[0], 1190.88800000, 377.97630000, 22.99430000, 1192.66900000, 380.07240000, 22.80760000, 1199.55100000, 378.34750000, 22.14610000 );
    sub_52402( iVar3[1], 1647.85500000, 237.53700000, 23.59960000, 1650.38400000, 239.51570000, 23.67850000, 1656.71000000, 235.95590000, 24.03360000 );
    sub_52402( iVar3[2], 881.32170000, -478.59920000, 14.02390000, 880.96580000, -476.32940000, 14.03240000, 872.43070000, -476.56120000, 13.75210000 );
    sub_52402( iVar3[18], 440.97420000, 1520.30900000, 15.37440000, 442.17310000, 1522.82200000, 15.23160000, 430.21190000, 1522.47900000, 15.65150000 );
    sub_52402( iVar3[19], 1099.11500000, 1596.27700000, 15.71580000, 1096.33900000, 1596.88800000, 15.71540000, 1089.31000000, 1588.39100000, 15.71540000 );
    sub_52402( iVar3[23], -139.76190000, 72.06730000, 13.75790000, -142.36840000, 73.33570000, 13.75790000, -143.59300000, 83.87050000, 13.75790000 );
    sub_52402( iVar3[24], -618.24940000, 149.04600000, 3.81270000, -619.85540000, 150.61060000, 3.81270000, -628.95990000, 149.64940000, 3.81270000 );
    sub_52402( iVar3[25], -174.20310000, 276.77800000, 13.81320000, -176.70890000, 274.19620000, 13.81320000, -186.13620000, 276.34440000, 13.81860000 );
    sub_52402( iVar3[26], -429.96930000, 1183.50600000, 12.05390000, -427.68120000, 1181.30100000, 12.16880000, -414.22730000, 1183.68000000, 12.81370000 );
    sub_52402( iVar3[27], -140.75110000, -278.08280000, 12.41860000, -139.00030000, -281.15140000, 12.82390000, -140.91290000, -291.95790000, 13.76250000 );
    sub_52402( iVar3[28], -393.03260000, 245.99450000, 13.39040000, -391.13880000, 248.59180000, 13.49290000, -381.94700000, 246.83300000, 13.75370000 );
    sub_52402( iVar3[29], 114.91250000, 640.95900000, 13.71340000, 116.64570000, 639.25250000, 13.71330000, 113.40200000, 629.90410000, 13.66730000 );
    sub_52402( iVar3[30], 29.85950000, 980.51480000, 13.66350000, 32.71410000, 982.65520000, 13.66330000, 30.02770000, 994.23700000, 13.68900000 );
    sub_52402( iVar3[51], -1006.38000000, 1609.67400000, 23.01270000, -1003.73300000, 1607.31800000, 23.01270000, -993.22520000, 1610.06000000, 22.96360000 );
    sub_52402( iVar3[52], -1244.90300000, 1070.48900000, 18.74650000, -1246.81000000, 1067.58300000, 18.70840000, -1245.11300000, 1055.32400000, 18.77390000 );
    sub_52402( iVar3[53], -1157.79600000, 1397.05500000, 23.41630000, -1160.04400000, 1392.25500000, 23.19830000, -1173.15100000, 1393.90200000, 21.29680000 );
    for ( I = 0; I < l_U950; I++ )
    {
        if (NOT l_U968[I])
        {
            sub_3927( "InfoEat: Initialise_Eat_Destinations: There is missing leave immediately data - are there new FOOD Map Blips?" );
        }
    }
    return;
}

void sub_50833(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    if (iParam0 < 0)
    {
        sub_3927( "InfoEat: Store_Additional_Eat_Info: ID less than 0" );
    }
    if (iParam0 >= l_U950)
    {
        sub_3927( "InfoEat: Store_Additional_Eat_Info: ID out of range" );
    }
    if (l_U951[iParam0])
    {
        sub_3927( "InfoEat: Store_Additional_Eat_Info: Duplicate additional data" );
    }
    l_U613[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U613[iParam0]._fU16 = uParam4;
    l_U613[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U613[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U613[iParam0]._fU44 = uParam11;
    l_U951[iParam0] = 1;
    return;
}

void sub_52402(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if (iParam0 < 0)
    {
        sub_3927( "InfoEat: Store_Leave_Immediately_Info: ID less than 0" );
    }
    if (iParam0 >= l_U950)
    {
        sub_3927( "InfoEat: Store_Leave_Immediately_Info: ID out of range" );
    }
    if (l_U968[iParam0])
    {
        sub_3927( "InfoEat: Store_Leave_Immediately_Info: Duplicate Leave Immediately data" );
    }
    l_U613[iParam0]._fU48 = {uParam1};
    l_U613[iParam0]._fU60 = {uParam4};
    l_U613[iParam0]._fU72 = {uParam7};
    l_U968[iParam0] = 1;
    return;
}

void sub_53749()
{
    int I;
    int[65] iVar3;

    l_U1053 = 0;
    I = 0;
    array(ref iVar3, 65);
    for ( I = 0; I < 65; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 65; I++ )
    {
        if (g_U11583[I]._fU12 == 8)
        {
            if (l_U1053 >= 6)
            {
                sub_3927( "InfoDrink: Initialise_Drink_Destinations: Increase MAX_DRINK_DESTINATIONS" );
            }
            l_U986[l_U1053]._fU0 = I;
            iVar3[I] = l_U1053;
            l_U1053++;
        }
    }
    for ( I = 0; I < l_U1053; I++ )
    {
        l_U1054[I] = 0;
    }
    sub_54077( iVar3[3], 920.89200000, -489.48600000, 16.62500000, 359.20360000, 912.35260000, -480.41450000, 19.36200000, -7.81876100, -0.00000000, -137.45620000 );
    sub_54077( iVar3[4], 1157.61500000, 736.30880000, 36.89920000, 264.94570000, 1190.61600000, 721.34830000, 46.09572000, -12.26530000, 0.00000000, 54.47784000 );
    sub_54077( iVar3[31], 118.11700000, 565.07100000, 15.97500000, 181.45510000, 128.69340000, 539.74560000, 20.18760000, -3.03840000, 0.00000000, 43.11860000 );
    sub_54077( iVar3[32], -477.32300000, 1414.07100000, 16.73800000, 270.89310000, -466.49520000, 1426.17700000, 14.79384000, 16.12449000, -0.00000000, 130.86440000 );
    sub_54077( iVar3[54], -1378.11200000, 510.59840000, 13.97960000, 95.79300000, -1382.08400000, 528.18770000, 16.99844000, -11.86755000, -0.00000000, -132.35800000 );
    sub_54077( iVar3[55], -994.40110000, 917.45700000, 15.12010000, 60.82650000, -1013.51600000, 891.85650000, 26.70177000, -7.98437500, -0.00000000, -53.09180000 );
    for ( I = 0; I < l_U1053; I++ )
    {
        if (NOT l_U1054[I])
        {
            sub_3927( "InfoDrink: Initialise_Drink_Destinations: There is missing additional data - are there new DRINK Map Blips?" );
        }
    }
    return;
}

void sub_54077(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (iParam0 < 0)
    {
        sub_3927( "InfoDrink: Store_Additional_Drink_Info: ID less than 0" );
    }
    if (iParam0 >= l_U1053)
    {
        sub_3927( "InfoDrink: Store_Additional_Drink_Info: ID out of range" );
    }
    if (l_U1054[iParam0])
    {
        sub_3927( "InfoDrink: Store_Additional_Drink_Info: Duplicate additional data" );
    }
    l_U986[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U986[iParam0]._fU16 = uParam4;
    l_U986[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U986[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U1054[iParam0] = 1;
    return;
}

void sub_54896()
{
    int I;
    int[65] iVar3;

    l_U1075 = 0;
    I = 0;
    array(ref iVar3, 65);
    for ( I = 0; I < 65; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 65; I++ )
    {
        if (g_U11583[I]._fU16 == 25)
        {
            if (l_U1075 >= 1)
            {
                sub_3927( "InfoShow: Initialise_Show_Destinations: Increase MAX_SHOW_DESTINATIONS" );
            }
            l_U1062[l_U1075]._fU0 = I;
            iVar3[I] = l_U1075;
            l_U1075++;
        }
    }
    for ( I = 0; I < l_U1075; I++ )
    {
        l_U1076[I] = 0;
    }
    sub_55223( iVar3[44], -352.57100000, 182.69200000, 16.05700000, 0.43160000, -365.76050000, 178.55880000, 17.75000000, 1.22540000, -0.00000000, -86.48420000, 0 );
    for ( I = 0; I < l_U1075; I++ )
    {
        if (NOT l_U1076[I])
        {
            sub_3927( "InfoShow: Initialise_Show_Destinations: There is missing additional data - are there new SHOW Map Blips?" );
        }
    }
    return;
}

void sub_55223(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    if (iParam0 < 0)
    {
        sub_3927( "InfoShow: Store_Additional_Show_Info: ID less than 0" );
    }
    if (iParam0 >= l_U1075)
    {
        sub_3927( "InfoShow: Store_Additional_Show_Info: ID out of range" );
    }
    if (l_U1076[iParam0])
    {
        sub_3927( "InfoShow: Store_Additional_Show_Info: Duplicate additional data" );
    }
    l_U1062[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U1062[iParam0]._fU16 = uParam4;
    l_U1062[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U1062[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U1062[iParam0]._fU44 = uParam11;
    l_U1076[iParam0] = 1;
    return;
}

void sub_55729(unknown uParam0)
{
    g_U26739._fU32 = uParam0;
    return;
}

void sub_55780(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 65; I++ )
    {
        if (sub_15505( I ))
        {
            if (NOT (sub_55822( I, uParam0 )))
            {
                if (g_U12169[I]._fU0)
                {
                    if (NOT (DOES_BLIP_EXIST( g_U12169[I]._fU4 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( g_U11583[I]._fU32 )))
                        {
                            sub_56013( ref g_U12169[I]._fU4, g_U11583[I]._fU0, g_U11583[I]._fU24, g_U11583[I]._fU20 );
                            SET_BLIP_AS_SHORT_RANGE( g_U12169[I]._fU4, 1 );
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_55822(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 12: return g_U11583[uParam0]._fU12 == 11;
        case 11: return g_U11583[uParam0]._fU12 == 8;
    }
    return 0;
}

void sub_56013(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        if ((((iParam4 == 2) || (iParam4 == 3)) || (iParam4 == 4)) || (iParam4 == 1))
        {
            ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        else
        {
            ADD_BLIP_FOR_CONTACT( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U2 );
        if (iParam4 == 3)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 3 );
        }
        if (iParam4 == 4)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 5 );
        }
    }
    return;
}

void sub_56280()
{
    l_U520 = 0;
    if (IS_CHAR_INJURED( l_U491 ))
    {
        l_U505 = 1;
        l_U506 = 0;
        return;
    }
    if (IS_GROUP_MEMBER( l_U491, sub_16528() ))
    {
        REMOVE_CHAR_FROM_GROUP( l_U491 );
    }
    if (sub_56367( l_U405 ))
    {
        return;
    }
    TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD( l_U491, -1721.47500000, 337.99800000, 25.34170000, 2, -2, 1.00000000, 89.09280000 );
    if (NOT g_U39169)
    {
        PRINT_NOW( "HOGoInCl", 5000, 1 );
    }
    l_U501 = 3;
    l_U502 = 0;
    return;
}

int sub_56367(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_33329( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_33329( "\n speech is not playing" );
    }
    return 0;
}

void sub_56637()
{
    int iVar2;

    l_U520 = 0;
    iVar2 = 7;
    if (l_U502 == 0)
    {
        l_U502++;
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        if (IS_CHAR_INJURED( l_U491 ))
        {
            l_U505 = 1;
            l_U506 = 0;
            return;
        }
    }
    if (l_U502 == 1)
    {
        if (g_U39169)
        {
            CLEAR_THIS_PRINT( "HOGoInCl" );
            STOP_PED_SPEAKING( sub_2582(), 0 );
            l_U502 = 99;
        }
        else if (sub_56792())
        {
            l_U505 = 1;
            l_U506 = 7;
            return;
        }
    }
    if (l_U502 == 99)
    {
        l_U501 = 4;
        l_U502 = 0;
    }
    return;
}

int sub_56792()
{
    if (IS_CHAR_IN_AREA_2D( sub_2582(), -1795.00000000, 250.00000000, -1630.00000000, 415.00000000, 0 ))
    {
        return 0;
    }
    return 1;
}

void sub_56913()
{
    l_U520 = 0;
    if (l_U502 == 0)
    {
        PRINT_HELP( "HOActsCl" );
        l_U502++;
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        if (IS_CHAR_INJURED( l_U491 ))
        {
            l_U505 = 1;
            l_U506 = 0;
            return;
        }
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        sub_57028();
    }
    else
    {
        sub_15818();
    }
    sub_57099( l_U491 );
    if (l_U502 == 1)
    {
        l_U1169 = 1;
        if (IS_MINIGAME_IN_PROGRESS())
        {
            l_U612 = 1;
        }
        if ((sub_57716()) AND (sub_57799( l_U491 )))
        {
            l_U502++;
        }
    }
    if (l_U502 == 2)
    {
        sub_57893();
        l_U502 = 99;
    }
    if (l_U502 == 99)
    {
        l_U1151 = 1;
        sub_58076( 14, l_U1151, g_U26739._fU32 );
        g_U10502 = 1;
        l_U501 = 5;
        l_U502 = 0;
    }
    return;
}

void sub_57028()
{
    if (g_U38847[2]._fU0)
    {
        sub_42641();
        return;
    }
    sub_31050( l_U491, ref l_U492 );
    return;
}

void sub_57099(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    int iVar5;
    boolean bVar6;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return;
    }
    bVar3 = false;
    bVar4 = false;
    iVar5 = 0;
    bVar6 = false;
    vVar7 = {-1715.85400000, 346.69690000, 25.34170000};
    if (NOT g_U39169)
    {
        bVar4 = true;
        bVar3 = true;
    }
    if (NOT bVar4)
    {
        if (IS_CHAR_IN_AREA_3D( sub_2582(), -1721.36500000, 351.33080000, 22.00000000, -1713.69500000, 357.26020000, 27.15850000, 0 ))
        {
            bVar4 = true;
            iVar5 = 1;
        }
    }
    if (NOT bVar4)
    {
        if (IS_CHAR_IN_AREA_3D( sub_2582(), -1727.83700000, 339.26750000, 22.00000000, -1724.26500000, 342.61340000, 27.34170000, 0 ))
        {
            bVar4 = true;
            iVar5 = 1;
        }
    }
    if (NOT bVar4)
    {
        if ((IS_CHAR_IN_ANY_CAR( sub_2582() )) || (IS_CHAR_GETTING_IN_TO_A_CAR( sub_2582() )))
        {
            bVar6 = true;
        }
    }
    if (NOT bVar4)
    {
        GET_CHAR_COORDINATES( sub_2582(), ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
        if (uVar10._fU8 > 33.00000000)
        {
            bVar4 = true;
        }
    }
    if ((NOT bVar4) AND (NOT bVar6))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_16528() )))
        {
            CLEAR_CHAR_TASKS( uParam0 );
            SET_GROUP_MEMBER( sub_16528(), uParam0 );
        }
        return;
    }
    if (NOT (IS_GROUP_MEMBER( uParam0, sub_16528() )))
    {
        if (bVar3)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( uParam0, vVar7.x, vVar7.y, vVar7.z, 1.20000000, 1.20000000, 2.00000000, 0 )))
            {
                GET_SCRIPT_TASK_STATUS( uParam0, 27, ref iVar13 );
                if (iVar13 == 7)
                {
                    CLEAR_CHAR_TASKS( uParam0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, vVar7.x, vVar7.y, vVar7.z, 2, -2, 1.00000000 );
                }
            }
        }
        return;
    }
    REMOVE_CHAR_FROM_GROUP( uParam0 );
    CLEAR_CHAR_TASKS( uParam0 );
    TASK_STAND_STILL( uParam0, -2 );
    if (NOT l_U611)
    {
        if ((iVar5) AND (l_U612))
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_HELP( "HANGQUIT" );
                l_U611 = 1;
            }
        }
    }
    return;
}

int sub_57716()
{
    if (g_U39169)
    {
        return 0;
    }
    if (IS_CHAR_IN_AREA_2D( sub_2582(), -1750.00000000, 295.00000000, -1675.00000000, 370.00000000, 0 ))
    {
        return 0;
    }
    return 1;
}

int sub_57799(unknown uParam0)
{
    int iVar3;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 0;
    }
    iVar3 = nil;
    GET_INTERIOR_FROM_CHAR( uParam0, ref iVar3 );
    if (iVar3 == nil)
    {
        return 0;
    }
    return 1;
}

void sub_57893()
{
    if (NOT l_U612)
    {
        l_U505 = 1;
        l_U506 = 7;
        return;
    }
    l_U515 = 1;
    sub_57953( "PASS LEVEL: GOOD" );
    sub_57972( 7, 29 );
    return;
}

void sub_57953(unknown uParam0)
{
    return;
}

void sub_57972(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = g_U18635[uParam0]._fU104;
    sub_23181( uVar4 );
    sub_23285( uVar4, uParam0, uParam1, 0 );
    return;
}

void sub_58076(int iParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;

    sub_43696();
    if (l_U556)
    {
        return;
    }
    if (iParam0 == 12)
    {
        sub_58112();
        return;
    }
    if (iParam0 == 11)
    {
        sub_58337();
        return;
    }
    if (sub_56367( l_U465 ))
    {
        return;
    }
    iVar5 = uParam2;
    if (NOT bParam1)
    {
        iVar5++;
    }
    if (NOT (iVar5 == 1))
    {
        return;
    }
    sub_58439();
    return;
}

void sub_58112()
{
    if (l_U556)
    {
        sub_58131();
        return;
    }
    l_U521._fU32 = 0;
    return;
}

void sub_58131()
{
    int iVar2;

    iVar2 = 0;
    sub_58149( ref l_U465, iVar2 );
    g_U18635[l_U416]._fU892._fU44 = -1;
    return;
}

void sub_58149(int iParam0, unknown uParam1)
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

void sub_58337()
{
    l_U521._fU0 = 1;
    l_U521._fU4 = 0;
    l_U521._fU8 = 1;
    l_U521._fU12 = 0;
    return;
}

void sub_58439()
{
    l_U521._fU0 = 1;
    l_U521._fU4 = 0;
    l_U521._fU8 = 0;
    l_U521._fU12 = 0;
    l_U521._fU16 = 0;
    return;
}

void sub_58535()
{
    l_U520 = 0;
    sub_15818();
    l_U501 = 6;
    l_U502 = 0;
    return;
}

void sub_58671()
{
    int iVar2;
    int iVar3;

    if (NOT l_U1169)
    {
        return;
    }
    iVar2 = sub_58704( 7, l_U491, ref l_U405 );
    if (NOT (iVar2 == 22))
    {
        sub_77297( iVar2 );
        l_U1158 = sub_77512( iVar2 );
        sub_77666( 7, iVar2, "E1FCC3A", l_U415, l_U491, ref l_U411, ref l_U405 );
    }
    iVar2 = sub_82202();
    if (NOT (iVar2 == 22))
    {
        l_U464 = sub_82248( iVar2 );
        sub_82479( 7, iVar2, "E1FCC3A", l_U415, l_U491, ref l_U411, ref l_U405 );
        sub_96108( iVar2, ref l_U557, ref l_U560, ref l_U563 );
        l_U556 = l_U1158;
        sub_58076( iVar2, l_U1151, g_U26739._fU32 );
    }
    iVar3 = sub_96231();
    if (iVar3 == 12)
    {
        iVar2 = 22;
    }
    else
    {
        iVar2 = sub_96288( iVar3 );
    }
    if (sub_96549( iVar2, l_U491 ))
    {
        sub_97505( 7, "E1FCC3A", l_U415, l_U491, ref l_U411, ref l_U405 );
    }
    if (l_U1172)
    {
        l_U389 = 0;
        l_U1172 = 0;
    }
    if (l_U1173)
    {
        l_U389 = 1;
        l_U1173 = 0;
    }
    return;
}

int sub_58704(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    int Result;

    if (l_U1182)
    {
        uVar5 = sub_58725( uParam0 );
        sub_58832( uParam0, uParam1, uVar5 );
    }
    if (l_U1170)
    {
        sub_64452( uParam0, uParam1, uParam2 );
        return 22;
    }
    Result = 22;
    Result = 6;
    if (sub_75408( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 7;
    if (sub_75408( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 10;
    if (sub_75408( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 11;
    if (sub_75627( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 12;
    if (sub_75627( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 16;
    if (sub_75408( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 18;
    if (sub_75408( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 20;
    if (sub_75408( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 21;
    if (sub_75408( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 9;
    if (sub_75408( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    return 22;
}

int sub_58725(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: return 2;
    }
    SCRIPT_ASSERT( "Get_Drunk_Level: Unknown Friend ID" );
    return 0;
}

void sub_58832(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    if (NOT l_U1083)
    {
        sub_58856( uParam0, uParam2 );
        g_U10502 = 0;
        l_U1149 = 0;
        return;
    }
    if (NOT g_U10499)
    {
        sub_15303();
        return;
    }
    if (g_U10502)
    {
        sub_14028( 1 );
        g_U10502 = 0;
        return;
    }
    I = -1;
    sub_60001( I );
    sub_60146( I );
    sub_60321( I );
    sub_60993();
    sub_61974( I );
    sub_62112( uParam2 );
    sub_62275( I );
    sub_62602();
    if ((NOT (IS_CHAR_DEAD( sub_2582() ))) AND (l_U1084._fU8))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2582(), 0, 0 );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
            {
                sub_60001( I );
                sub_60146( I );
                sub_63060( I );
                sub_63702( I );
                sub_62275( I );
                sub_60321( I );
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
                {
                    sub_61974( I );
                }
                if ((NOT (IS_CHAR_DEAD( g_U38857[I]._fU0 ))) AND (l_U1099[I]._fU8))
                {
                    SET_CURRENT_CHAR_WEAPON( g_U38857[I]._fU0, 0, 0 );
                }
            }
        }
    }
    if (l_U1149)
    {
        return;
    }
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
            {
                if (l_U1099[I]._fU8)
                {
                    return;
                }
            }
        }
    }
    sub_43696();
    l_U1149 = 1;
    return;
}

void sub_58856(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    int iVar7;

    sub_58869( ref l_U1084 );
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        sub_58869( ref l_U1099[I] );
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    l_U1084._fU8 = 0;
    iVar6 = sub_14371( -1, uParam1 );
    l_U1084._fU48 = iVar5 + iVar6;
    iVar7 = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            l_U1099[I]._fU8 = 0;
            iVar7 = sub_14371( I, uParam1 );
            l_U1099[I]._fU48 = iVar5 + iVar6;
        }
    }
    if (iVar6 > 0)
    {
        l_U1084._fU8 = 1;
        for ( I = 0; I < 3; I++ )
        {
            if (g_U38847[I]._fU0)
            {
                l_U1099[I]._fU8 = 1;
            }
        }
    }
    sub_14051( uParam1 );
    sub_59235( uParam1 );
    sub_59674( ref l_U1084 );
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            sub_59674( ref l_U1099[I] );
        }
    }
    l_U1083 = 1;
    g_U10499 = 1;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_DEAD( g_U38857[I]._fU0 )))
            {
                SET_PED_IS_DRUNK( g_U38857[I]._fU0, 1 );
            }
        }
    }
    if (g_U10501)
    {
        DO_SCREEN_FADE_IN( 500 );
        g_U10501 = 0;
    }
    g_U10502 = 0;
    return;
}

void sub_58869(int iParam0)
{
    iParam0->_fU0 = 0;
    iParam0->_fU4 = 0;
    iParam0->_fU8 = 0;
    iParam0->_fU12 = 0;
    iParam0->_fU16 = 0;
    iParam0->_fU20 = 0;
    iParam0->_fU24 = 0;
    iParam0->_fU28 = {0.00000000, 0.00000000, 0.00000000};
    iParam0->_fU40 = 0;
    iParam0->_fU44 = 0;
    iParam0->_fU48 = 0;
    iParam0->_fU52 = 0;
    iParam0->_fU56 = 0;
    return;
}

void sub_59235(unknown uParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_DEAD( sub_2582() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar3 );
            fVar4 = 0.00000000;
            GET_CAR_SPEED( uVar3, ref fVar4 );
            if (fVar4 < 0.04000000)
            {
                l_U1145 = 0.00000000;
                return;
            }
        }
    }
    switch (uParam0)
    {
        case 0:
        l_U1145 = 0.00000000;
        break;
        case 1:
        l_U1145 = sub_59417( 0.05000000, 0.02000000 );
        break;
        case 2:
        l_U1145 = sub_59417( 0.07000000, 0.03000000 );
        break;
        case 3:
        l_U1145 = sub_59417( 0.09000000, 0.04000000 );
        break;
        case 4:
        l_U1145 = sub_59417( 0.10000000, 0.05000000 );
        break;
        case 5:
        l_U1145 = sub_59417( 0.13000000, 0.06000000 );
        break;
    }
    return;
}

void sub_59417(unknown uParam0, unknown uParam1)
{
    float Result;
    float fVar5;

    Result = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( -uParam0, uParam0, ref Result );
    fVar5 = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, uParam1, ref fVar5 );
    if (Result < 0.00000000)
    {
        Result -= fVar5;
    }
    else
    {
        Result += fVar5;
    }
    if (Result < -1.00000000)
    {
        Result = -1.00000000;
    }
    if (Result > 1.00000000)
    {
        Result = 1.00000000;
    }
    return Result;
}

void sub_59674(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar3 = 3;
    iVar4 = 7;
    iVar5 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( iVar3, iVar4, ref iVar5 );
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar5 *= 100;
    iParam0->_fU40 = iVar6 + iVar5;
    return;
}

void sub_60001(unknown uParam0)
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
    int iVar18;

    uVar3 = {sub_14611( uParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (uVar3._fU4)
    {
        return;
    }
    iVar18 = 0;
    GET_GAME_TIMER( ref iVar18 );
    if (uVar3._fU48 < iVar18)
    {
        uVar3._fU8 = 0;
    }
    sub_60081( uParam0, ref uVar3 );
    return;
}

void sub_60081(int iParam0, unknown uParam1)
{
    if (iParam0 == -1)
    {
        l_U1084 = {(uParam1^)};
    }
    else
    {
        l_U1099[iParam0] = {(uParam1^)};
    }
    return;
}

void sub_60146(int iParam0)
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
    int iVar18;
    unknown uVar19;
    int iVar20;

    uVar3 = {sub_14611( iParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if ((uVar3._fU0) || (uVar3._fU4))
    {
        return;
    }
    if (uVar3._fU20)
    {
        return;
    }
    iVar18 = 0;
    GET_GAME_TIMER( ref iVar18 );
    if (iVar18 > uVar3._fU48)
    {
        if (iParam0 == -1)
        {
            g_U10499 = 0;
        }
        sub_14514( iParam0 );
        return;
    }
    uVar19 = sub_14525( iParam0 );
    if (IS_PED_RAGDOLL( uVar19 ))
    {
        return;
    }
    iVar20 = uVar3._fU48 - iVar18;
    sub_14729( iParam0, iVar20 );
    return;
}

void sub_60321(unknown uParam0)
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
    int iVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    int iVar26;
    int iVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    boolean bVar31;

    uVar3 = {sub_14611( uParam0 )};
    iVar18 = 0;
    GET_GAME_TIMER( ref iVar18 );
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (uVar3._fU4)
    {
        return;
    }
    if (uVar3._fU20)
    {
        return;
    }
    uVar19 = sub_14525( uParam0 );
    GET_PED_BONE_POSITION( uVar19, 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar20 );
    fVar23 = uVar20._fU8 + 2.00000000;
    fVar24 = 0.00000000;
    GET_GROUND_Z_FOR_3D_COORD( uVar20._fU0, uVar20._fU4, fVar23, ref fVar24 );
    fVar25 = uVar20._fU8 - fVar24;
    if (fVar25 < 0)
    {
        fVar25 *= -1.00000000;
    }
    iVar26 = 0;
    if (NOT (fVar25 > 1.20000000))
    {
        iVar26 = 1;
    }
    if (uVar3._fU0)
    {
        if (fVar25 > 1.20000000)
        {
            if (uVar3._fU48 > iVar18)
            {
                iVar27 = uVar3._fU48 - iVar18;
                sub_14729( uParam0, iVar27 );
            }
            uVar3._fU52 = 0;
            uVar3._fU0 = 0;
        }
        sub_60081( uParam0, ref uVar3 );
        return;
    }
    if (uVar3._fU16)
    {
        if (iVar18 > uVar3._fU52)
        {
            uVar3._fU16 = 0;
            uVar3._fU0 = 1;
            sub_14514( uParam0 );
            uVar3._fU52 = 0;
        }
        sub_60081( uParam0, ref uVar3 );
        return;
    }
    if (uVar3._fU12)
    {
        if (uVar3._fU56 < iVar18)
        {
            uVar3._fU56 = 0;
            uVar3._fU52 = iVar18 + 100;
            uVar3._fU12 = 0;
            uVar3._fU16 = 1;
        }
        else
        {
            GET_CHAR_VELOCITY( uVar19, ref uVar28._fU0, ref uVar28._fU4, ref uVar28._fU8 );
            if ((VMAG( uVar28 )) < 0.10000000)
            {
                if (uVar3._fU52 == 0)
                {
                    uVar3._fU52 = iVar18 + 1000;
                }
                else if (uVar3._fU52 < iVar18)
                {
                    uVar3._fU56 = 0;
                    uVar3._fU52 = iVar18 + 100;
                    uVar3._fU12 = 0;
                    uVar3._fU16 = 1;
                }
            }
            else
            {
                uVar3._fU52 = 0;
            }
        }
        sub_60081( uParam0, ref uVar3 );
        return;
    }
    bVar31 = true;
    if (IS_PED_RAGDOLL( uVar19 ))
    {
        if (CHECK_NM_FEEDBACK( uVar19, 80, 1 ))
        {
            bVar31 = false;
        }
    }
    if ((NOT bVar31) || (iVar26))
    {
        uVar3._fU12 = 1;
        uVar3._fU52 = 0;
        uVar3._fU56 = iVar18 + 3000;
        sub_60081( uParam0, ref uVar3 );
        return;
    }
    uVar3._fU52 = 0;
    sub_60081( uParam0, ref uVar3 );
    return;
}

void sub_60993()
{
    unknown uVar2;
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
    boolean bVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    int iVar21;
    int iVar22;
    boolean bVar23;
    float fVar24;
    float fVar25;
    boolean bVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    int iVar31;
    boolean bVar32;
    unknown uVar33;
    int iVar34;
    int iVar35;
    unknown uVar36;
    unknown uVar37;

    uVar2 = {sub_14611( -1 )};
    if (NOT uVar2._fU8)
    {
        return;
    }
    if (uVar2._fU0)
    {
        return;
    }
    if (uVar2._fU20)
    {
        return;
    }
    if ((uVar2._fU16) || (uVar2._fU12))
    {
        return;
    }
    bVar17 = true;
    if (NOT (l_U1147 == nil))
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U1147 )))
        {
            l_U1147 = nil;
        }
    }
    if (l_U1147 == nil)
    {
        GET_CHAR_COORDINATES( sub_2582(), ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
        iVar21 = 70;
        l_U1147 = GET_CLOSEST_CAR( uVar18, 7.00000000, 0, iVar21 );
        l_U1148 = 0;
    }
    if (l_U1147 == nil)
    {
        bVar17 = false;
    }
    iVar22 = 1;
    bVar23 = false;
    if (bVar17)
    {
        fVar24 = -1.00000000;
        fVar25 = 2.00000000;
        bVar26 = false;
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1147, fVar24, 0.00000000, 0.00000000, ref uVar27._fU0, ref uVar27._fU4, ref uVar27._fU8 );
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2582(), uVar27._fU0, uVar27._fU4, uVar27._fU8, fVar25, fVar25, fVar25, 0 ))
        {
            bVar26 = true;
            iVar22 = 1;
        }
        if ((NOT bVar26) AND (NOT bVar23))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1147, 1.00000000, 0.00000000, 0.00000000, ref uVar27._fU0, ref uVar27._fU4, ref uVar27._fU8 );
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2582(), uVar27._fU0, uVar27._fU4, uVar27._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                bVar26 = true;
                iVar22 = 0;
            }
        }
        if (NOT bVar26)
        {
            bVar17 = false;
            l_U1147 = nil;
        }
    }
    iVar30 = 0;
    GET_GAME_TIMER( ref iVar30 );
    iVar31 = nil;
    if (uVar2._fU4)
    {
        bVar32 = false;
        if (sub_30636( sub_2582() ))
        {
            bVar32 = true;
        }
        if (NOT bVar32)
        {
            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar33 );
                GET_DRIVER_OF_CAR( uVar33, ref iVar31 );
                if (iVar31 == sub_2582())
                {
                    bVar32 = true;
                }
                else if (NOT l_U1148)
                {
                    TASK_SHUFFLE_TO_NEXT_CAR_SEAT( sub_2582(), uVar33 );
                    l_U1148 = 1;
                    uVar2._fU56 = iVar30 + 1000;
                }
                else if (iVar30 > uVar2._fU56)
                {
                    GET_SCRIPT_TASK_STATUS( sub_2582(), 39, ref iVar34 );
                    if (NOT (iVar34 == 7))
                    {
                        uVar2._fU56 = iVar30 + 1000;
                    }
                    else
                    {
                        l_U1148 = 0;
                    }
                };;;
            }
        }
        if (bVar32)
        {
            uVar2._fU4 = 0;
            uVar2._fU20 = 1;
            l_U1148 = 0;
        }
        else if (NOT bVar17)
        {
            CLEAR_CHAR_TASKS( sub_2582() );
            uVar2._fU4 = 0;
            if (uVar2._fU48 > iVar30)
            {
                iVar35 = uVar2._fU48 - iVar30;
                sub_14729( -1, iVar35 );
            }
        }
        sub_60081( -1, ref uVar2 );
        return;
    }
    if (NOT bVar17)
    {
        return;
    }
    if (NOT (IS_CONTROL_PRESSED( 2, 3 )))
    {
        return;
    }
    sub_14514( -1 );
    SET_NEXT_DESIRED_MOVE_STATE( 2 );
    GET_CAR_MODEL( l_U1147, ref uVar36 );
    uVar37 = IS_THIS_MODEL_A_BIKE( uVar36 );
    if ((iVar22) || (uVar37))
    {
        TASK_ENTER_CAR_AS_DRIVER( sub_2582(), l_U1147, -1 );
    }
    else
    {
        TASK_ENTER_CAR_AS_PASSENGER( sub_2582(), l_U1147, -1, 0 );
    }
    uVar2._fU4 = 1;
    sub_60081( -1, ref uVar2 );
    return;
}

void sub_61974(unknown uParam0)
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
    int iVar19;
    int iVar20;

    uVar3 = {sub_14611( uParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (NOT uVar3._fU20)
    {
        return;
    }
    uVar18 = sub_14525( uParam0 );
    if (IS_CHAR_IN_ANY_CAR( uVar18 ))
    {
        return;
    }
    iVar19 = 0;
    GET_GAME_TIMER( ref iVar19 );
    iVar20 = uVar3._fU48 - iVar19;
    sub_14729( uParam0, iVar20 );
    uVar3._fU20 = 0;
    l_U1148 = 0;
    sub_60081( uParam0, ref uVar3 );
    return;
}

void sub_62112(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    boolean bVar5;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2582() )))
    {
        return;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (l_U1082 < iVar3)
    {
        sub_15303();
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar4 );
    bVar5 = false;
    if (l_U1146 == 0)
    {
        bVar5 = true;
    }
    else if (iVar3 > l_U1146)
    {
        bVar5 = true;
    }
    if (bVar5)
    {
        sub_59235( uParam0 );
        l_U1146 = iVar3 + 1000;
    }
    SET_VEHICLE_STEER_BIAS( uVar4, l_U1145 );
    return;
}

void sub_62275(unknown uParam0)
{
    int iVar3;
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
    int iVar19;
    unknown uVar20;
    int iVar21;
    float fVar22;
    int iVar23;
    float fVar24;
    vector vVar25;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (l_U1082 < iVar3)
    {
        return;
    }
    uVar4 = {sub_14611( uParam0 )};
    if (iVar3 < uVar4._fU40)
    {
        return;
    }
    sub_59674( ref uVar4 );
    sub_60081( uParam0, ref uVar4 );
    iVar19 = sub_14525( uParam0 );
    if (IS_CHAR_INJURED( iVar19 ))
    {
        return;
    }
    if (NOT (IS_CHAR_ON_ANY_BIKE( iVar19 )))
    {
        return;
    }
    uVar20 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iVar19, ref uVar20 );
    iVar21 = nil;
    GET_DRIVER_OF_CAR( uVar20, ref iVar21 );
    if (NOT (iVar21 == iVar19))
    {
        return;
    }
    fVar22 = 0.00000000;
    GET_CAR_SPEED( uVar20, ref fVar22 );
    if (fVar22 < 0.04000000)
    {
        return;
    }
    iVar23 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref iVar23 );
    fVar24 = TO_FLOAT( iVar23 );
    fVar24 /= 2;
    fVar24 -= 2.00000000;
    vVar25 = {0.00000000, 0.21000000, 0.00000000};
    uVar28 = {fVar24, 0.00000000, 0.00000000};
    APPLY_FORCE_TO_CAR( uVar20, 1, uVar28, vVar25, 0, 1, 1, 1 );
    return;
}

void sub_62602()
{
    int iVar2;
    unknown uVar3;
    float fVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_PLAYER_PLAYING( sub_2960() )))
    {
        return;
    }
    if (sub_30636( sub_2582() ))
    {
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
    {
        return;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_2960(), 0 ))
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U1082 < iVar2)
    {
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar3 );
    GET_CAR_SPEED( uVar3, ref fVar4 );
    if (fVar4 < 0.50000000)
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_2582(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    uVar8._fU0 = uVar5._fU0 - 30.00000000;
    uVar8._fU4 = uVar5._fU4 - 30.00000000;
    uVar8._fU8 = uVar5._fU8 - 3.00000000;
    uVar11._fU0 = uVar5._fU0 + 30.00000000;
    uVar11._fU4 = uVar5._fU4 + 30.00000000;
    uVar11._fU8 = uVar5._fU8 + 3.00000000;
    if (NOT (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar11._fU0, uVar11._fU4, uVar11._fU8 )))
    {
        return;
    }
    ALTER_WANTED_LEVEL_NO_DROP( sub_2960(), 1 );
    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_2960() );
    return;
}

void sub_63060(unknown uParam0)
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
    int iVar19;
    boolean bVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    float fVar30;
    int iVar31;

    uVar3 = sub_14525( uParam0 );
    if (IS_CHAR_DEAD( uVar3 ))
    {
        return;
    }
    uVar4 = {sub_14611( uParam0 )};
    if (NOT uVar4._fU8)
    {
        return;
    }
    if (uVar4._fU20)
    {
        return;
    }
    if ((uVar4._fU0) || (uVar4._fU4))
    {
        return;
    }
    if ((uVar4._fU12) || (uVar4._fU16))
    {
        return;
    }
    if (NOT (IS_PED_RAGDOLL( uVar3 )))
    {
        return;
    }
    iVar19 = 0;
    GET_GAME_TIMER( ref iVar19 );
    bVar20 = false;
    if (uVar4._fU44 == 0)
    {
        bVar20 = true;
    }
    else if (uVar4._fU44 < iVar19)
    {
        bVar20 = true;
    }
    if (NOT bVar20)
    {
        return;
    }
    if (IS_CHAR_INJURED( sub_2582() ))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_2582(), ref uVar21._fU0, ref uVar21._fU4, ref uVar21._fU8 );
    uVar4._fU24 = 0;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() ))
    {
        if (IS_VEH_DRIVEABLE( g_U38857[uParam0]._fU4 ))
        {
            GET_CAR_COORDINATES( g_U38857[uParam0]._fU4, ref uVar24._fU0, ref uVar24._fU4, ref uVar24._fU8 );
            GET_CHAR_COORDINATES( g_U38857[uParam0]._fU0, ref uVar27._fU0, ref uVar27._fU4, ref uVar27._fU8 );
            fVar30 = 0.00000000;
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar24._fU0, uVar24._fU4, uVar24._fU8, uVar27._fU0, uVar27._fU4, uVar27._fU8, ref fVar30 );
            if (fVar30 < 75.00000000)
            {
                uVar21 = {uVar24};
                uVar4._fU24 = 1;
                uVar4._fU28 = {uVar21};
            }
        }
    }
    iVar31 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar31 );
    if (iVar31 < 50)
    {
        uVar21._fU0 += 1.00000000;
    }
    else
    {
        uVar21._fU0 -= 1.00000000;
    }
    iVar31 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar31 );
    if (iVar31 < 50)
    {
        uVar21._fU4 += 1.00000000;
    }
    else
    {
        uVar21._fU4 -= 1.00000000;
    }
    CREATE_NM_MESSAGE( 1, 119 );
    SET_NM_MESSAGE_VEC3( 121, uVar21 );
    SET_NM_MESSAGE_FLOAT( 122, 0.20000000 );
    SEND_NM_MESSAGE( uVar3 );
    uVar4._fU44 = iVar19 + 5000;
    sub_60081( uParam0, ref uVar4 );
    return;
}

void sub_63702(int iParam0)
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
    float fVar25;
    boolean bVar26;
    unknown uVar27;
    int iVar28;

    uVar3 = {sub_14611( iParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (uVar3._fU0)
    {
        return;
    }
    if (uVar3._fU20)
    {
        return;
    }
    if ((uVar3._fU16) || (uVar3._fU12))
    {
        return;
    }
    uVar18 = sub_14525( iParam0 );
    if (uVar3._fU4)
    {
        if (IS_CHAR_IN_ANY_CAR( uVar18 ))
        {
            uVar3._fU4 = 0;
            uVar3._fU20 = 1;
        }
        sub_60081( iParam0, ref uVar3 );
        return;
    }
    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
    {
        return;
    }
    if (uVar3._fU24)
    {
        uVar19 = {uVar3._fU28};
    }
    else
    {
        GET_CHAR_COORDINATES( sub_2582(), ref uVar19._fU0, ref uVar19._fU4, ref uVar19._fU8 );
    }
    GET_CHAR_COORDINATES( uVar18, ref uVar22._fU0, ref uVar22._fU4, ref uVar22._fU8 );
    fVar25 = 0.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar19._fU0, uVar19._fU4, uVar19._fU8, uVar22._fU0, uVar22._fU4, uVar22._fU8, ref fVar25 );
    if (NOT (fVar25 < 3.00000000))
    {
        return;
    }
    bVar26 = false;
    if (uVar3._fU24)
    {
        uVar27 = g_U38857[iParam0]._fU4;
        if (IS_VEH_DRIVEABLE( uVar27 ))
        {
            bVar26 = true;
        }
    }
    else
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar27 );
        iVar28 = 0;
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar27, ref iVar28 );
        if (iParam0 <= iVar28)
        {
            if (IS_CAR_PASSENGER_SEAT_FREE( uVar27, iParam0 ))
            {
                bVar26 = true;
            }
        }
    }
    if (bVar26)
    {
        sub_14514( iParam0 );
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        if (uVar3._fU24)
        {
            TASK_ENTER_CAR_AS_DRIVER( uVar18, uVar27, -2 );
        }
        else
        {
            TASK_ENTER_CAR_AS_PASSENGER( uVar18, uVar27, -2, iParam0 );
        }
        uVar3._fU4 = 1;
    }
    sub_60081( iParam0, ref uVar3 );
    return;
}

void sub_64452(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (l_U1177)
    {
        case 0:
        sub_64513();
        break;
        case 1:
        sub_68126();
        break;
        case 2:
        sub_69958( uParam0, uParam1, uParam2 );
        break;
        case 3:
        sub_71458( uParam0, uParam1, uParam2 );
        break;
        case 4:
        sub_73849( uParam0 );
        break;
    }
    return;
}

void sub_64513()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U1178 == 0)
    {
        sub_64545();
        l_U1176 = iVar2 + 3000;
        if (l_U1171 == 18)
        {
            sub_64597();
        }
        l_U1178++;
    }
    if (l_U1178 == 1)
    {
        if (l_U1171 == 20)
        {
            if ((IS_SCREEN_FADED_OUT()) || (iVar2 > l_U1176))
            {
                sub_64597();
                uVar3 = {l_U1062[0]._fU4};
                uVar6 = l_U1062[0]._fU16;
                sub_65135( uVar3, uVar6 );
                l_U1178++;
            }
        }
        else
        {
            l_U1178++;
        }
    }
    if (l_U1178 == 2)
    {
        if (sub_67973())
        {
            if (l_U1171 == 20)
            {
                sub_68014();
            }
            l_U1178++;
        }
    }
    if (l_U1178 == 3)
    {
        if (IS_SCREEN_FADED_IN())
        {
            l_U1178 = 99;
        }
    }
    if (l_U1178 == 99)
    {
        l_U1177 = 1;
        l_U1178 = 0;
    }
    return;
}

void sub_64545()
{
    g_U10509 = 1;
    g_U10648 = 0;
    return;
}

void sub_64597()
{
    if (sub_37398( 0 ))
    {
        sub_64648( ref g_U38857[0], ref g_U38857[0]._fU0, ref g_U38857[0]._fU4 );
    }
    if (sub_37398( 1 ))
    {
        sub_64648( ref g_U38857[1], ref g_U38857[1]._fU0, ref g_U38857[1]._fU4 );
    }
    if (sub_37398( 2 ))
    {
        sub_64648( ref g_U38857[2], ref g_U38857[2]._fU0, ref g_U38857[2]._fU4 );
    }
    return;
}

void sub_64648(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_64713( iParam0 ) ))
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

void sub_64713(int iParam0)
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

void sub_65135(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;

    iVar6 = 0;
    iVar7 = 0;
    iVar8 = nil;
    PRINTSTRING( "\nKGMBIKES..........Warp_Friend_Bikes_To_Activity\n" );
    if (sub_37398( 0 ))
    {
        PRINTSTRING( "KGMBIKES..........JIM ACTIVE\n" );
        iVar8 = g_U38857[0]._fU4;
        if ((NOT (iVar8 == nil)) AND (IS_VEH_DRIVEABLE( iVar8 )))
        {
            PRINTSTRING( "KGMBIKES.............start search at bike location: " );
            PRINTINT( iVar6 );
            PRINTNL();
            iVar7 = sub_65390( iVar6, iVar8, uParam0, uParam3 );
            if (NOT (iVar7 == iVar6))
            {
                if (iVar7 < 0)
                {
                    PRINTSTRING( "KGMBIKES.............ran out of potential bike locations\n" );
                    return;
                }
                PRINTSTRING( "KGMBIKES.............found a valid bike location\n" );
            }
            else
            {
                PRINTSTRING( "KGMBIKES.............search conditions failed\n" );
            }
        }
        else
        {
            PRINTSTRING( "KGMBIKES.............but no bike\n" );
        }
    }
    iVar6 = iVar7;
    if (sub_37398( 1 ))
    {
        PRINTSTRING( "\nKGMBIKES..........TERRY ACTIVE\n" );
        iVar8 = g_U38857[1]._fU4;
        if ((NOT (iVar8 == nil)) AND (IS_VEH_DRIVEABLE( iVar8 )))
        {
            PRINTSTRING( "KGMBIKES.............start search at bike location: " );
            PRINTINT( iVar6 );
            PRINTNL();
            iVar7 = sub_65390( iVar6, iVar8, uParam0, uParam3 );
            if (NOT (iVar7 == iVar6))
            {
                if (iVar7 < 0)
                {
                    PRINTSTRING( "KGMBIKES.............ran out of potential bike locations\n" );
                    return;
                }
                PRINTSTRING( "KGMBIKES.............found a valid bike location\n" );
            }
            else
            {
                PRINTSTRING( "KGMBIKES.............search conditions failed\n" );
            }
        }
        else
        {
            PRINTSTRING( "KGMBIKES.............but no bike\n" );
        }
    }
    iVar6 = iVar7;
    if (sub_37398( 2 ))
    {
        PRINTSTRING( "\nKGMBIKES..........CLAY ACTIVE\n" );
        iVar8 = g_U38857[2]._fU4;
        if ((NOT (iVar8 == nil)) AND (IS_VEH_DRIVEABLE( iVar8 )))
        {
            PRINTSTRING( "KGMBIKES.............start search at bike location: " );
            PRINTINT( iVar6 );
            PRINTNL();
            iVar7 = sub_65390( iVar6, iVar8, uParam0, uParam3 );
            if (NOT (iVar7 == iVar6))
            {
                if (iVar7 < 0)
                {
                    PRINTSTRING( "KGMBIKES.............ran out of potential bike locations\n" );
                    return;
                }
                PRINTSTRING( "KGMBIKES.............found a valid bike location\n" );
            }
            else
            {
                PRINTSTRING( "KGMBIKES.............search conditions failed\n" );
            }
        }
        else
        {
            PRINTSTRING( "KGMBIKES.............but no bike\n" );
        }
    }
    return;
}

int sub_65390(int Result, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    vector vVar8;
    float fVar11;
    boolean bVar12;

    vVar8 = {0.00000000, 0.00000000, 0.00000000};
    fVar11 = 0.00000000;
    bVar12 = true;
    while (bVar12)
    {
        PRINTSTRING( "KGMBIKES................testing potential bike location: " );
        PRINTINT( Result );
        PRINTNL();
        if (sub_65528( Result, uParam2, ref vVar8 ))
        {
            PRINTSTRING( "KGMBIKES................possible potential location\n" );
            Result++;
            GET_GROUND_Z_FOR_3D_COORD( uParam2._fU0, uParam2._fU4, uParam2._fU8 + 2.00000000, ref fVar11 );
            if (sub_66031( fVar11, vVar8 ))
            {
                CLEAR_AREA( vVar8.x, vVar8.y, vVar8.z, 1.00000000, 0 );
                SET_CAR_HEADING( uParam1, sub_66320( uParam5 ) );
                SET_CAR_COORDINATES( uParam1, vVar8.x, vVar8.y, vVar8.z + 1.00000000 );
                SET_CAR_ON_GROUND_PROPERLY( uParam1 );
                PRINTSTRING( "KGMBIKES................potential location - VALID\n" );
                return Result;
            }
            else
            {
                PRINTSTRING( "KGMBIKES................ground Zs are too far apart - NOT VALID\n" );
            }
        }
        else
        {
            PRINTSTRING( "KGMBIKES................RUN OUT OF POTENTIAL LOCATIONS\n" );
            return -1;
        }
    }
    PRINTSTRING( "KGMBIKES................RUN OUT OF POTENTIAL LOCATIONS\n" );
    return -1;
}

int sub_65528(unknown uParam0, vector vParam1, unknown uParam4)
{
    vector vVar7;

    vVar7 = {0.00000000, 0.00000000, 0.00000000};
    switch (uParam0)
    {
        case 0:
        vVar7 = {-3.00000000, 0.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 1:
        vVar7 = {-2.00000000, 3.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 2:
        vVar7 = {1.50000000, 1.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 3:
        vVar7 = {2.50000000, -0.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 4:
        vVar7 = {2.00000000, -4.00000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 5:
        vVar7 = {-1.00000000, -2.00000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 6:
        vVar7 = {-4.00000000, -4.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 7:
        vVar7 = {-6.00000000, -1.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        default: return 0;
    }
    return 1;
}

int sub_66031(float fParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    float fVar6;
    float fVar7;
    float fVar8;

    fVar6 = uParam1._fU8 + 2.00000000;
    fVar7 = 0.00000000;
    GET_GROUND_Z_FOR_3D_COORD( uParam1._fU0, uParam1._fU4, fVar6, ref fVar7 );
    fVar8 = fVar7 - fParam0;
    if (fParam0 > fVar7)
    {
        fVar8 = fParam0 - fVar7;
    }
    PRINTSTRING( "Comparing Ground Zs: 1) " );
    PRINTFLOAT( fParam0 );
    PRINTSTRING( "   2) " );
    PRINTFLOAT( fVar7 );
    PRINTSTRING( "    DIFF: " );
    PRINTFLOAT( fVar8 );
    if (fVar8 <= 0.25000000)
    {
        PRINTSTRING( "    ACCEPTABLE\n" );
        return 1;
    }
    PRINTSTRING( "    not acceptable\n" );
    return 0;
}

void sub_66320(unknown uParam0)
{
    float fVar3;
    float fVar4;
    float Result;

    fVar3 = uParam0 - 30.00000000;
    fVar4 = uParam0 + 30.00000000;
    Result = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( fVar3, fVar4, ref Result );
    if (Result < 0.00000000)
    {
        Result += 360.00000000;
    }
    if (Result > 360.00000000)
    {
        Result -= 360.00000000;
    }
    return Result;
}

void sub_67973()
{
    return g_U26739._fU28;
}

void sub_68014()
{
    g_U10509 = 0;
    g_U10648 = 0;
    return;
}

void sub_68126()
{
    unknown uVar2;

    l_U1154 = sub_68135();
    sub_68210( l_U1171, l_U1154 );
    uVar2 = sub_9272( l_U1207 );
    sub_68397( uVar2, l_U1171 );
    l_U1170 = 0;
    l_U1153 = l_U1171;
    l_U1171 = 22;
    if (l_U1151)
    {
        l_U1157 = 1;
    }
    g_U10502 = 1;
    l_U1177 = 5;
    return;
}

void sub_68135()
{
    unknown Result;

    Result = g_U26739._fU20;
    g_U26739._fU8 = 12;
    g_U26739._fU20 = 8;
    g_U26739._fU24 = 0;
    g_U26739._fU28 = 0;
    return Result;
}

void sub_68210(unknown uParam0, unknown uParam1)
{
    if (l_U1168 == 3)
    {
        SCRIPT_ASSERT( "Store_Alternative_Result: All allowed alternative activities have already been played" );
    }
    l_U1161[l_U1168]._fU0 = uParam0;
    l_U1161[l_U1168]._fU4 = uParam1;
    l_U1168++;
    return;
}

void sub_68397(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_68408( uParam0 );
    g_U27961._fU0[uVar4]._fU0[uParam1]++;
    g_U27961._fU0[uVar4]._fU92++;
    sub_68608( uParam1 );
    sub_69498( uParam0, uParam1 );
    return;
}

int sub_68408(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 6: return 1;
        case 7: return 2;
    }
    sub_3927( "Convert_Friend_To_Friend_Stats_ID: Unrecognised Friend ID" );
    return 3;
}

void sub_68608(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    char[64] cVar6;

    g_U27961._fU304[iParam0]++;
    g_U27961._fU396++;
    iVar3 = g_U27961._fU400;
    if (iVar3 == iParam0)
    {
        return;
    }
    iVar4 = g_U27961._fU304[iVar3];
    iVar5 = g_U27961._fU304[iParam0];
    if (iVar5 < iVar4)
    {
        return;
    }
    g_U27961._fU400 = iParam0;
    StrCopy( ref cVar6, "", 64 );
    sub_68752( iParam0, ref cVar6 );
    if (CAN_THE_STAT_HAVE_STRING( 662 ))
    {
        sub_8349( 662 );
        REGISTER_STRING_FOR_FRONTEND_STAT( 662, ref cVar6 );
    }
    return;
}

void sub_68752(unknown uParam0, unknown uParam1)
{
    char[64] cVar4;

    switch (uParam0)
    {
        case 6:
        StrCopy( (uParam1^), "statAct_air", 64 );
        break;
        case 7:
        StrCopy( (uParam1^), "statAct_armw", 64 );
        break;
        case 8:
        StrCopy( (uParam1^), "statAct_0", 64 );
        break;
        case 9:
        StrCopy( (uParam1^), "statAct_1", 64 );
        break;
        case 10:
        StrCopy( (uParam1^), "statAct_2", 64 );
        break;
        case 11:
        StrCopy( (uParam1^), "statAct_3", 64 );
        break;
        case 12:
        StrCopy( (uParam1^), "statAct_4", 64 );
        break;
        case 13:
        StrCopy( (uParam1^), "statAct_war", 64 );
        break;
        case 14:
        StrCopy( (uParam1^), "statAct_hang", 64 );
        break;
        case 15:
        StrCopy( (uParam1^), "statAct_5", 64 );
        break;
        case 16:
        StrCopy( (uParam1^), "statAct_hilo", 64 );
        break;
        case 17:
        StrCopy( (uParam1^), "statAct_6", 64 );
        break;
        case 18:
        StrCopy( (uParam1^), "statAct_7", 64 );
        break;
        case 19:
        StrCopy( (uParam1^), "statAct_race", 64 );
        break;
        case 20:
        StrCopy( (uParam1^), "statAct_8", 64 );
        break;
        case 21:
        StrCopy( (uParam1^), "statAct_9", 64 );
        break;
        default: sub_3927( "Friend_Achievement_Fill_Activity_String: Unknown activity" );
    }
    StrCopy( ref cVar4, GET_STRING_FROM_TEXT_FILE( uParam1 ), 64 );
    PRINTSTRING( "**********************\n" );
    PRINTSTRING( uParam1 );
    PRINTNL();
    PRINTSTRING( "For Info: " );
    PRINTSTRING( ref cVar4 );
    PRINTNL();
    PRINTSTRING( "**********************\n" );
    return;
}

void sub_69498(unknown uParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    char[64] cVar8;

    uVar4 = sub_68408( uParam0 );
    iVar5 = g_U27961._fU0[uVar4]._fU96;
    if (iVar5 == iParam1)
    {
        return;
    }
    iVar6 = g_U27961._fU0[uVar4]._fU0[iVar5];
    iVar7 = g_U27961._fU0[uVar4]._fU0[iParam1];
    if (iVar7 < iVar6)
    {
        return;
    }
    g_U27961._fU0[uVar4]._fU96 = iParam1;
    StrCopy( ref cVar8, "", 64 );
    sub_68752( iParam1, ref cVar8 );
    switch (uParam0)
    {
        case 1:
        if (CAN_THE_STAT_HAVE_STRING( 671 ))
        {
            sub_8349( 671 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 671, ref cVar8 );
        }
        break;
        case 6:
        if (CAN_THE_STAT_HAVE_STRING( 672 ))
        {
            sub_8349( 672 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 672, ref cVar8 );
        }
        break;
        case 7:
        if (CAN_THE_STAT_HAVE_STRING( 673 ))
        {
            sub_8349( 673 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 673, ref cVar8 );
        }
        break;
        default: sub_3927( "Friend_Achievement_Check_For_New_Favourite_Activity_With_Friend: Unknown friend ID" );
    }
    return;
}

void sub_69958(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    if (l_U1178 == 0)
    {
        if (NOT (IS_CHAR_ON_FOOT( sub_2582() )))
        {
            SET_PLAYER_CONTROL( sub_2960(), 0 );
            l_U1208 = iVar5 + 4000;
        }
        l_U1178++;
    }
    if (l_U1178 == 1)
    {
        if (NOT (IS_CHAR_ON_FOOT( sub_2582() )))
        {
            if ((sub_70081( uParam1, 20.00000000 )) || (iVar5 > l_U1208))
            {
                l_U1178++;
            }
            else
            {
                return;
            }
        }
        else
        {
            l_U1178++;
        }
    }
    if (l_U1178 == 2)
    {
        SET_PLAYER_CONTROL( sub_2960(), 0 );
        sub_64545();
        sub_70257();
        l_U1178++;
    }
    if (l_U1178 == 3)
    {
        if (sub_31605())
        {
            sub_70604( uParam1 );
            l_U1208 = iVar5 + 4000;
            SETTIMERA( 0 );
            l_U1178++;
        }
    }
    iVar6 = 1;
    if (l_U1178 == 4)
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_ANY_CAR( uParam1 ))
            {
                iVar6 = 0;
            }
        }
        if (NOT (IS_CHAR_DEAD( sub_2582() )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
            {
                iVar6 = 0;
            }
        }
        if ((iVar6) || (iVar5 > l_U1208))
        {
            l_U1178 = 99;
        }
    }
    if (l_U1178 == 99)
    {
        l_U1177 = 3;
        l_U1178 = 0;
    }
    return;
}

int sub_70081(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2582(), uVar4._fU0, uVar4._fU4, uVar4._fU8, uParam1, uParam1, uParam1, 0 )))
    {
        return 0;
    }
    return 1;
}

void sub_70257()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    l_U1179 = 1;
    iVar2 = 0;
    BEGIN_CAM_COMMANDS( ref iVar2 );
    switch (l_U1171)
    {
        case 11:
        uVar3 = {l_U986[l_U1160]._fU20};
        uVar6 = {l_U986[l_U1160]._fU32};
        break;
        case 12:
        uVar3 = {l_U613[l_U1160]._fU20};
        uVar6 = {l_U613[l_U1160]._fU32};
        break;
        default: SCRIPT_ASSERT( "Start_NonMission_Camera_Move_Before_Fade: Unknown activity" );
    }
    CREATE_CAM( 14, ref l_U1180 );
    SET_CAM_POS( l_U1180, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
    SET_CAM_ROT( l_U1180, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
    SET_CAM_ACTIVE( l_U1180, 1 );
    SET_CAM_PROPAGATE( l_U1180, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return;
}

void sub_70604(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    int iVar10;
    unknown uVar11;

    iVar3 = -1;
    switch (l_U1171)
    {
        case 11:
        iVar3 = l_U986[l_U1160]._fU0;
        break;
        case 12:
        iVar3 = l_U613[l_U1160]._fU0;
        break;
        default: SCRIPT_ASSERT( "Start_NonMission_Walk_Towards_Destination: Unknown activity" );
    }
    sub_64597();
    bVar4 = false;
    if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref l_U1181 );
        bVar4 = true;
    }
    OPEN_SEQUENCE_TASK( ref uVar5 );
    if (bVar4)
    {
        if (IS_CHAR_IN_CAR( sub_2582(), l_U1181 ))
        {
            TASK_LEAVE_CAR( 0, l_U1181 );
        }
    }
    uVar6 = {g_U11583[iVar3]._fU0};
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar6._fU0, uVar6._fU4, uVar6._fU8, 2, -2, 2.00000000 );
    CLOSE_SEQUENCE_TASK( uVar5 );
    TASK_PERFORM_SEQUENCE( sub_2582(), uVar5 );
    CLEAR_SEQUENCE_TASK( uVar5 );
    I = 0;
    iVar10 = 0;
    uVar11 = nil;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37398( I ))
        {
            if (IS_GROUP_MEMBER( g_U38857[I]._fU0, sub_16528() ))
            {
                l_U1172 = 1;
                REMOVE_CHAR_FROM_GROUP( g_U38857[I]._fU0 );
            }
            if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
            {
                bVar4 = false;
                if (IS_CHAR_IN_ANY_CAR( g_U38857[I]._fU0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U38857[I]._fU0, ref uVar11 );
                    bVar4 = true;
                }
                GENERATE_RANDOM_INT_IN_RANGE( 500, 1500, ref iVar10 );
                OPEN_SEQUENCE_TASK( ref uVar5 );
                if (bVar4)
                {
                    if (IS_CHAR_IN_CAR( g_U38857[I]._fU0, uVar11 ))
                    {
                        TASK_PAUSE( 0, iVar10 );
                        TASK_LEAVE_CAR( 0, uVar11 );
                    }
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar6._fU0, uVar6._fU4, uVar6._fU8, 2, -2, 2.00000000 );
                CLOSE_SEQUENCE_TASK( uVar5 );
                TASK_PERFORM_SEQUENCE( g_U38857[I]._fU0, uVar5 );
                CLEAR_SEQUENCE_TASK( uVar5 );
            }
        }
    }
    return;
}

void sub_71458(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    int iVar18;

    iVar13 = 0;
    switch (l_U1171)
    {
        case 11:
        uVar5 = l_U986[l_U1160]._fU0;
        uVar6 = {g_U11583[uVar5]._fU0};
        uVar9 = {l_U986[l_U1160]._fU4};
        uVar12 = l_U986[l_U1160]._fU16;
        iVar13 = 1;
        break;
        case 12:
        uVar5 = l_U613[l_U1160]._fU0;
        uVar6 = {g_U11583[uVar5]._fU0};
        uVar9 = {l_U613[l_U1160]._fU4};
        uVar12 = l_U613[l_U1160]._fU16;
        break;
        default: SCRIPT_ASSERT( "Has_NonMission_Cutscene_Ended: Unknown activity" );
    }
    if (l_U1178 == 0)
    {
        g_U10501 = 0;
        SETTIMERA( 0 );
        l_U1178++;
    }
    if (l_U1178 == 1)
    {
        if (NOT (sub_56367( (uParam2^) )))
        {
            l_U1178++;
        }
    }
    if (l_U1178 == 2)
    {
        if (TIMERA() >= 1500)
        {
            DO_SCREEN_FADE_OUT( 1000 );
            SETTIMERA( 0 );
            l_U1178++;
        }
    }
    if (l_U1178 == 3)
    {
        if ((TIMERA() > 1200) AND (IS_SCREEN_FADED_OUT()))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2582() );
            CLEAR_CHAR_TASKS_IMMEDIATELY( uParam1 );
            l_U1178++;
        }
    }
    if (l_U1178 == 4)
    {
        if (IS_VEH_DRIVEABLE( l_U1181 ))
        {
            SET_CAR_HEADING( l_U1181, uVar12 );
            SET_CAR_COORDINATES( l_U1181, uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( l_U1181 );
        }
        if (NOT l_U1158)
        {
            SET_CHAR_COORDINATES( uParam1, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            uVar14 = {sub_72031( uVar6, uVar9 )};
            SET_CHAR_COORDINATES( sub_2582(), uVar14._fU0, uVar14._fU4, uVar14._fU8 );
            sub_72250( uVar6, uVar9, uParam0 );
            uVar17 = sub_73230( uVar9, uVar6 );
            SET_CHAR_HEADING( uParam1, uVar17 );
            uVar17 = sub_73230( uVar9, uVar14 );
            SET_CHAR_HEADING( sub_2582(), uVar17 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_65135( uVar9, uVar12 );
            SET_CURRENT_CHAR_WEAPON( sub_2582(), 0, 0 );
        }
        SETTIMERA( 0 );
        l_U1178++;
    }
    if (l_U1178 == 5)
    {
        SET_CAM_ACTIVE( l_U1180, 0 );
        SET_CAM_PROPAGATE( l_U1180, 0 );
        DESTROY_ALL_CAMS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        iVar18 = 0;
        END_CAM_COMMANDS( ref iVar18 );
        l_U1179 = 0;
        l_U1178++;
    }
    if (l_U1178 == 6)
    {
        if (l_U1158)
        {
            g_U10502 = 1;
            l_U1178 = 99;
        }
        else if (l_U1171 == 11)
        {
            g_U10501 = 1;
            l_U1178++;
        }
        else
        {
            g_U10502 = 1;
            if (TIMERA() >= 1000)
            {
                DO_SCREEN_FADE_IN( 1000 );
                SETTIMERA( 0 );
                l_U1178++;
            }
        }
    }
    if (l_U1178 == 7)
    {
        if (g_U10501)
        {
            l_U1178++;
        }
        else if ((TIMERA() > 1200) AND (IS_SCREEN_FADED_IN()))
        {
            l_U1178++;
        }
    }
    if (l_U1178 == 8)
    {
        SET_PLAYER_CONTROL( sub_2960(), 1 );
        SET_GROUP_MEMBER( sub_16528(), uParam1 );
        l_U1173 = 1;
        sub_43696();
        l_U1178++;
    }
    if (l_U1178 == 9)
    {
        if (l_U1171 == 11)
        {
            if (NOT g_U10491)
            {
                PRINT_HELP( "FRDRUNK" );
                g_U10491 = 1;
            }
        }
        l_U1178 = 99;
    }
    if (l_U1178 == 99)
    {
        l_U1177 = 4;
        l_U1178 = 0;
    }
    return;
}

void sub_72031(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown Result;
    unknown uVar9;
    unknown uVar10;

    Result = {uParam0};
    if ((uParam3._fU0 - uParam0._fU0) > 0)
    {
        Result._fU0 += 2.00000000;
    }
    else
    {
        Result._fU0 -= 2.00000000;
    }
    if ((uParam3._fU4 - uParam0._fU4) > 0)
    {
        Result._fU4 += 2.00000000;
    }
    else
    {
        Result._fU4 -= 2.00000000;
    }
    Result._fU8 += 2.00000000;
    GET_GROUND_Z_FOR_3D_COORD( Result._fU0, Result._fU4, Result._fU8, ref Result._fU8 );
    return Result;
}

void sub_72250(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6)
{
    int iVar9;
    int I;
    boolean bVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    iVar9 = 0;
    I = 0;
    bVar11 = false;
    for ( I = 0; I < 3; I++ )
    {
        bVar11 = false;
        if (sub_37398( I ))
        {
            if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
            {
                switch (I)
                {
                    case 0:
                    if (NOT (iParam6 == 1))
                    {
                        bVar11 = true;
                    }
                    break;
                    case 1:
                    if (NOT (iParam6 == 6))
                    {
                        bVar11 = true;
                    }
                    break;
                    case 2:
                    if (NOT (iParam6 == 7))
                    {
                        bVar11 = true;
                    }
                    break;
                }
                if (bVar11)
                {
                    uVar12 = {sub_72031( uParam0, uParam3 )};
                    uVar15 = {sub_72453( uVar12, uParam0, iVar9 )};
                    if (IS_CHAR_IN_ANY_CAR( g_U38857[I]._fU0 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( g_U38857[I]._fU0, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( g_U38857[I]._fU0, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                    }
                    iVar9++;
                }
            }
        }
    }
    return;
}

void sub_72453(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;
    int iVar10;
    float fVar11;
    float fVar12;
    unknown Result;
    unknown uVar14;
    unknown uVar15;

    iVar9 = uParam6;
    iVar10 = 0;
    fVar11 = 0.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar11 );
    fVar12 = 0.00000000;
    PRINTSTRING( "... Get Offset for other friend: " );
    PRINTSTRING( "+x, " );
    Result = {uParam0};
    Result._fU0 += 2.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( Result._fU0, Result._fU4, Result._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar12 );
    if (fVar12 > fVar11)
    {
        if (iVar9 == 0)
        {
            PRINTSTRING( " YES\n" );
            return Result;
        }
        iVar9--;
    }
    PRINTSTRING( "+y, " );
    Result = {uParam0};
    Result._fU4 += 2.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( Result._fU0, Result._fU4, Result._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar12 );
    if (fVar12 > fVar11)
    {
        if (iVar9 == 0)
        {
            PRINTSTRING( " YES\n" );
            return Result;
        }
        iVar9--;
    }
    PRINTSTRING( "-x, " );
    Result = {uParam0};
    Result._fU0 -= 2.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( Result._fU0, Result._fU4, Result._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar12 );
    if (fVar12 > fVar11)
    {
        if (iVar9 == 0)
        {
            PRINTSTRING( " YES\n" );
            return Result;
        }
        iVar9--;
    }
    PRINTSTRING( "-y " );
    Result = {uParam0};
    Result._fU4 -= 2.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( Result._fU0, Result._fU4, Result._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar12 );
    if (fVar12 > fVar11)
    {
        if (iVar9 == 0)
        {
            PRINTSTRING( " YES\n" );
            return Result;
        }
        iVar9--;
    }
    PRINTSTRING( " NO\n" );
    return uParam0;
}

void sub_73230(vector vParam0, vector vParam3)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float Result;

    uVar8 = {vParam0 - vParam3};
    Result = 0.00000000;
    GET_HEADING_FROM_VECTOR_2D( uVar8._fU0, uVar8._fU4, ref Result );
    return Result;
}

void sub_73849(unknown uParam0)
{
    unknown uVar3;

    l_U1154 = sub_73865( l_U1171, uParam0 );
    sub_68210( l_U1171, l_U1154 );
    uVar3 = sub_9272( l_U1207 );
    sub_68397( uVar3, l_U1171 );
    switch (l_U1171)
    {
        case 11:
        sub_74728( uVar3 );
        sub_75022();
        break;
        case 12:
        sub_75057( uVar3 );
        sub_75136();
        if (NOT (IS_CHAR_DEAD( sub_2582() )))
        {
            SET_CHAR_HEALTH( sub_2582(), 200 );
            RESET_VISIBLE_PED_DAMAGE( sub_2582() );
        }
        break;
        default: SCRIPT_ASSERT( "Perform_Alternative_NonMinigame_Complete: Unknown non-minigame ID" );
    }
    l_U1170 = 0;
    l_U1153 = l_U1171;
    l_U1171 = 22;
    if (l_U1151)
    {
        l_U1157 = 1;
    }
    if (l_U1153 == 11)
    {
        l_U1182 = 1;
    }
    if (l_U1153 == 12)
    {
        l_U1183 = 1;
    }
    l_U1177 = 5;
    return;
}

int sub_73865(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 11: return sub_73906( uParam1, l_U1160 );
        case 12: return sub_74242( uParam1, l_U1160 );
    }
    SCRIPT_ASSERT( "Return_Alternative_NonMinigame_Result_For_Activity: unknown activity" );
    return 8;
}

int sub_73906(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: return sub_73950( uParam1 );
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Friend: unknown friend" );
    return 8;
}

int sub_73950(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U986[uParam0]._fU0;
    uVar4 = g_U11583[uVar3]._fU16;
    switch (uVar4)
    {
        case 10: return 0;
        case 8:
        case 12: return 2;
        case 11:
        case 9:
        case 13: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Roman: Unknown Map Blip Subgroup" );
    return 8;
}

int sub_74242(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: return sub_74286( uParam1 );
    }
    SCRIPT_ASSERT( "Return_Alternative_Eating_Result_For_Friend: unknown friend" );
    return 8;
}

int sub_74286(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U613[uParam0]._fU0;
    uVar4 = g_U11583[uVar3]._fU16;
    switch (uVar4)
    {
        case 18:
        case 19: return 0;
        case 20:
        case 15: return 2;
        case 17:
        case 16: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Eating_Result_For_Roman: Unknown Food Map Blip Subgroup" );
    return 8;
}

void sub_74728(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    uVar3 = sub_74739( uParam0 );
    fVar4 = 50;
    fVar5 = fVar4 * uVar3;
    uVar6 = sub_74835( fVar5 );
    sub_74985( uVar6 );
    return;
}

float sub_74739(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 1.00000000;
        case 6: return 1.00000000;
        case 7: return 1.00000000;
    }
    return 1.00000000;
}

void sub_74835(unknown uParam0)
{
    int iVar3;
    int Result;
    int iVar5;

    iVar3 = sub_74844();
    if (iVar3 < 0)
    {
        iVar3 = 0;
    }
    Result = FLOOR( uParam0 );
    if (Result > iVar3)
    {
        Result = iVar3;
    }
    iVar5 = Result * -1;
    sub_74940( iVar5 );
    return Result;
}

void sub_74844()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_2960() ))
    {
        STORE_SCORE( sub_2960(), ref Result );
    }
    return Result;
}

void sub_74940(unknown uParam0)
{
    ADD_SCORE( sub_2960(), uParam0 );
    return;
}

void sub_74985(unknown uParam0)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 94, uParam0 );
    return;
}

void sub_75022()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 283, 1 );
    return;
}

void sub_75057(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    uVar3 = sub_74739( uParam0 );
    fVar4 = 100;
    fVar5 = fVar4 * uVar3;
    uVar6 = sub_74835( fVar5 );
    sub_75099( uVar6 );
    return;
}

void sub_75099(unknown uParam0)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 97, uParam0 );
    return;
}

void sub_75136()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 306, 1 );
    return;
}

int sub_75408(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = sub_50188( uParam0 );
    if (iVar6 == 12)
    {
        return 0;
    }
    if (NOT (sub_75441( iVar6 )))
    {
        return 0;
    }
    l_U1177 = 0;
    l_U1178 = 0;
    l_U1170 = 1;
    l_U1171 = uParam0;
    sub_64452( uParam1, uParam2, uParam3 );
    return 1;
}

int sub_75441(int iParam0)
{
    boolean bVar3;

    bVar3 = g_U26739._fU24;
    if (NOT bVar3)
    {
        return 0;
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    return 0;
}

int sub_75627(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    if (sub_75636() <= 0)
    {
        return 0;
    }
    iVar6 = -1;
    switch (uParam0)
    {
        case 11:
        iVar6 = sub_75703( uParam2 );
        break;
        case 12:
        iVar6 = sub_76552( uParam2 );
        break;
        default: SCRIPT_ASSERT( "Check_If_New_Alternative_NonMinigame_Activity_Started: Unknown Activity ID" );
    }
    if (iVar6 == -1)
    {
        return 0;
    }
    sub_76979();
    l_U1184[uParam0]--;
    l_U1177 = 2;
    l_U1178 = 0;
    l_U1170 = 1;
    l_U1171 = uParam0;
    l_U1160 = iVar6;
    sub_64452( uParam1, uParam2, uParam3 );
    return 1;
}

void sub_75636()
{
    return g_U26739._fU32;
}

int sub_75703(unknown uParam0)
{
    int Result;
    int iVar4;
    int iVar5;
    float fVar6;

    if (NOT (l_U1184[11] > 0))
    {
        return -1;
    }
    Result = 0;
    iVar4 = 0;
    iVar5 = 0;
    fVar6 = 0.00000000;
    for ( Result = 0; Result < 6; Result++ )
    {
        iVar4 = l_U986[Result]._fU0;
        if ((sub_75775( Result )) AND (NOT (sub_75838( iVar4 ))))
        {
            iVar5 = g_U11583[iVar4]._fU28 == g_U10999;
            fVar6 = l_U986[Result]._fU4._fU8;
            if (((LOCATE_CHAR_ANY_MEANS_3D( sub_2582(), l_U986[Result]._fU4._fU0, l_U986[Result]._fU4._fU4, fVar6, 2.50000000, 2.50000000, 2.50000000, iVar5 )) AND (NOT (sub_30636( sub_2582() )))) AND (sub_76041( 1, 1 )))
            {
                if (IS_CHAR_ON_FOOT( sub_2582() ))
                {
                    if (sub_70081( uParam0, 1092616192 ))
                    {
                        return Result;
                    }
                }
                else
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_75775(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U986[uParam0]._fU0;
    if (NOT g_U10994[g_U11583[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    return 1;
}

int sub_75838(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 4:
        if (l_U1150 == 10)
        {
            if (NOT l_U1151)
            {
                return 1;
            }
            else if (NOT l_U1157)
            {
                return 1;
            }
        }
        break;
        default:
    }
    return 0;
}

int sub_76041(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar6 );
            if (NOT (IS_CAR_DEAD( uVar6 )))
            {
                GET_CAR_MODEL( uVar6, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    GET_CAR_UPRIGHT_VALUE( uVar6, ref fVar5 );
                    if (fVar5 < 0.80000000)
                    {
                        return 0;
                    }
                    else
                    {
                        bParam1 = false;
                    }
                }
            }
        }
    }
    if (sub_76165( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_76165(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2582()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2960() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2960() )))
    {
        return 0;
    }
    return 1;
}

int sub_76552(unknown uParam0)
{
    int Result;
    int iVar4;
    int iVar5;
    float fVar6;

    if (NOT (l_U1184[12] > 0))
    {
        return -1;
    }
    Result = 0;
    iVar4 = 0;
    iVar5 = 0;
    fVar6 = 0.00000000;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (sub_76611( Result ))
        {
            iVar4 = l_U613[Result]._fU0;
            iVar5 = g_U11583[iVar4]._fU28 == g_U10999;
            fVar6 = l_U613[Result]._fU4._fU8;
            if (((LOCATE_CHAR_ANY_MEANS_3D( sub_2582(), l_U613[Result]._fU4._fU0, l_U613[Result]._fU4._fU4, fVar6, 2.50000000, 2.50000000, 2.50000000, iVar5 )) AND (NOT (sub_30636( sub_2582() )))) AND (sub_76041( 1, 1 )))
            {
                if (IS_CHAR_ON_FOOT( sub_2582() ))
                {
                    if (sub_70081( uParam0, 1092616192 ))
                    {
                        return Result;
                    }
                }
                else
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_76611(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U613[uParam0]._fU0;
    if (NOT g_U10994[g_U11583[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    return 1;
}

void sub_76979()
{
    if (NOT (g_U26739._fU32 > 0))
    {
        return;
    }
    g_U26739._fU32--;
    return;
}

void sub_77297(int iParam0)
{
    if (iParam0 == 12)
    {
        sub_77315();
        return;
    }
    sub_58131();
    return;
}

void sub_77315()
{
    if (l_U521._fU8)
    {
        sub_58131();
        return;
    }
    l_U521._fU32 = 1;
    sub_77354();
    return;
}

void sub_77354()
{
    unknown uVar2;

    if (l_U521._fU24)
    {
        return;
    }
    uVar2 = sub_77384( l_U465 );
    g_U18635[l_U416]._fU892._fU44 = uVar2;
    return;
}

void sub_77384(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_56367( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

boolean sub_77512(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    return 0;
    switch (uParam0)
    {
        case 12: break;
        default: return 0;
    }
    uVar3 = sub_9272( l_U1207 );
    if (NOT g_U18635[uVar3]._fU172)
    {
        return 0;
    }
    if (NOT l_U1151)
    {
        return 0;
    }
    iVar4 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
    return iVar4 < 20;
}

void sub_77666(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if (l_U1152)
    {
        return;
    }
    if (iParam1 == l_U1150)
    {
        return;
    }
    iVar9 = 0;
    sub_58149( uParam6, iVar9 );
    sub_2476( uParam2 );
    sub_2633( 0, sub_2582(), "JOHNNY", 0 );
    sub_2633( uParam3, uParam4, uParam5, 0 );
    sub_77764( iParam1, uParam0, uParam6 );
    return;
}

void sub_77764(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 6:
        sub_77866( uParam1, uParam2 );
        l_U1152 = 1;
        return;
        case 7: return;
        case 10:
        sub_78525( uParam1, uParam2 );
        l_U1152 = 1;
        return;
        case 11:
        sub_79150( uParam1, uParam2 );
        l_U1152 = 1;
        return;
        case 12:
        sub_79472( uParam1, uParam2 );
        l_U1152 = 1;
        return;
        case 16: return;
        case 18:
        sub_80086( uParam1, uParam2 );
        l_U1152 = 1;
        return;
        case 20:
        if (g_U10999 == 2)
        {
            sub_80716( uParam1, uParam2 );
        }
        l_U1152 = 1;
        return;
        case 21:
        sub_81340( uParam1, uParam2 );
        l_U1152 = 1;
        return;
        case 9:
        sub_81998( uParam1, uParam2 );
        l_U1152 = 1;
        return;
    }
    SCRIPT_ASSERT( "Play_Alternative_Activity_Started_Speech_For_Activity: Activity speech not set up" );
    return;
}

void sub_77866(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_77889( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AHY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: AIR HOCKEY UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_AHY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: AIR HOCKEY UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AHY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: AIR HOCKEY UNEXPECTED YES\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_77889(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AHD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_AHD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AHDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: AIR HOCKEY - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_78525(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_78548( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_DDY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: DARTS UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_DY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: DARTS UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_ADY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: DARTS UNEXPECTED YES\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_78548(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_ADDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: DARTS - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_DD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: DARTS - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_ADDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: DARTS - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_79150(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_DDRY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: DRINK UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_DRY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: DRINK UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_DDY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: DRINK UNEXPECTED YES\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_79472(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_79495( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_DFY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: EAT UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_FY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: EAT UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_DFY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: EAT UNEXPECTED YES\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_79495(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AFD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: EAT - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_FD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: EAT - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AFD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: EAT - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_80086(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_80109( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_DPY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: POOL UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_PY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: POOL UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_DPY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: POOL UNEXPECTED YES\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_80109(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_APDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: POOL - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_PD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: POOL - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_APD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: POOL - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_80716(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_80739( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_ASHY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: SHOW UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_DSHY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: SHOW UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_DSHY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: SHOW UNEXPECTED YES\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_80739(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_ASHD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: SHOW - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_SHD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: SHOW - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_ASHD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: SHOW - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_81340(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_81363( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_DSTY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: STRIP CLUB UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_STY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: STRIP CLUB UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_DSTY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: STRIP CLUB UNEXPECTED YES\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_81363(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_ASTD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: STRIP CLUB - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_STD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: STRIP CLUB - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_STD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: STRIP CLUB - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_81998(unknown uParam0, unknown uParam1)
{
    PRINTSTRING( "***** ARRIVE: BOWLING UNEXPECTED YES\n" );
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_82202()
{
    unknown Result;

    Result = l_U1153;
    l_U1153 = 22;
    return Result;
}

int sub_82248(unknown uParam0)
{
    l_U1159 = 0;
    switch (uParam0)
    {
        case 21: break;
        default: return 0;
    }
    if (l_U1154 == 8)
    {
        SCRIPT_ASSERT( "m_altResultForSpeech = MGR_NOT_SET: Make sure this function called before Activity_Finished_Speech()" );
    }
    if (NOT (l_U1154 == 7))
    {
        return 0;
    }
    l_U1159 = 1;
    return 1;
}

void sub_82479(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if ((NOT l_U1158) AND (NOT l_U1159))
    {
        iVar9 = 0;
        sub_58149( uParam6, iVar9 );
        sub_2476( uParam2 );
        sub_2633( 0, sub_2582(), "JOHNNY", 0 );
        sub_2633( uParam3, uParam4, uParam5, 0 );
        sub_82571( uParam1, l_U1154, uParam0, uParam6 );
    }
    l_U1154 = 8;
    return;
}

void sub_82571(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 6:
        sub_82675( uParam1, uParam2, uParam3 );
        return;
        case 7:
        sub_84493( uParam1, uParam2, uParam3 );
        return;
        case 10:
        sub_86503( uParam1, uParam2, uParam3 );
        return;
        case 11:
        sub_88233( uParam2, uParam3, l_U1160 );
        return;
        case 12:
        sub_89247( uParam2, uParam3, l_U1160 );
        return;
        case 16:
        sub_90407( uParam1, uParam2, uParam3 );
        return;
        case 18:
        sub_91884( uParam1, uParam2, uParam3 );
        return;
        case 20:
        if (g_U10999 == 2)
        {
            sub_93607( uParam1, uParam2, uParam3 );
        }
        else
        {
            sub_94536( uParam1, uParam2, uParam3 );
        }
        return;
        case 21:
        sub_94666( uParam1, uParam2, uParam3 );
        return;
        case 9:
        sub_95656( uParam1, uParam2, uParam3 );
        return;
    }
    SCRIPT_ASSERT( "Play_Activity_Ended_Speech_For_Activity: Activity speech not set up" );
    return;
}

void sub_82675(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_82729( uParam1, uParam2 );
        break;
        case 2:
        sub_83374( uParam1, uParam2 );
        break;
        case 1:
        sub_83704( uParam1, uParam2 );
        break;
        case 3:
        sub_84055( uParam1, uParam2 );
        break;
        default: sub_3927( "Ended_AirHockey_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_82729(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_82752( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY (Player Won)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_AHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY (Player Won)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY (Player Won)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_82752(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AHDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_ALDR", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_ALDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_83374(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_82752( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY (Draw)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_AHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY (Draw)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY (Draw)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_83704(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_82752( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AHLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY (Player Lost)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_AHLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY (Player Lost)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AHLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY (Player Lost)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84055(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_82752( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY (Abandoned)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_AHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY (Abandoned)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY (Abandoned)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84493(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_84547( uParam1, uParam2 );
        break;
        case 1:
        sub_85210( uParam1, uParam2 );
        break;
        case 2:
        sub_85570( uParam1, uParam2 );
        break;
        case 3:
        sub_85987( uParam1, uParam2 );
        break;
        default: sub_3927( "Ended_ArmWrestling_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_84547(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_84570( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AWLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING (Player Won)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_AWLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING (Player Won)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AWLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING (Player Won)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84570(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AWLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_AWLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AWLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_85210(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_84570( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AWLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING (Player Lost)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_AWLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING (Player Lost)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AWLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING (Player Lost)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_85570(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_84570( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AWLF", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING (Forfeited - Quit while playing)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_AWLF", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING (Forfeited - Quit while playing)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AWLF", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING (Forfeited - Quit while playing)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_85987(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_84570( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_AWLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING (Abandoned - Quit before playing)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_AWLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING (Abandoned - Quit before playing)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_AWLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING (Abandoned - Quit before playing)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_86503(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_86557( uParam1, uParam2 );
        break;
        case 2:
        sub_87169( uParam1, uParam2 );
        break;
        case 1:
        sub_87481( uParam1, uParam2 );
        break;
        case 3:
        sub_87814( uParam1, uParam2 );
        break;
        default: sub_3927( "Ended_Darts_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_86557(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_86580( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_DLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS (Player Won)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_DLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS (Player Won)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_DLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS (Player Won)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_86580(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_DLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_DLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_DLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_87169(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_86580( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_DLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS (Draw)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_DLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS (Draw)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_DLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS (Draw)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_87481(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_86580( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_DLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS (Player Lost)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_DLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS (Player Lost)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_DLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS (Player Lost)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_87814(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_86580( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_DLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS (Abandoned)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_DLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS (Abandoned)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_DLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS (Abandoned)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88233(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        sub_88281( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Friend: Unknown friend ID" );
    SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Friend: Needs to be uncommented for E1" );
    return;
}

void sub_88281(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U986[uParam2]._fU0;
    uVar6 = g_U11583[uVar5]._fU16;
    switch (uVar6)
    {
        case 10:
        sub_88377( uParam0, uParam1 );
        break;
        case 8:
        case 12:
        sub_88576( uParam0, uParam1 );
        break;
        case 11:
        case 9:
        case 13:
        sub_88774( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Jim_Terry_Or_Clay: Unknown Drink Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_88377(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_LPF", uParam1, 7, 1 );
        return;
        case 6:
        sub_33155( "E1FCT3_LPF", uParam1, 7, 1 );
        return;
        case 7:
        sub_33155( "E1FCC3_LPFA", uParam1, 7, 1 );
        return;
    }
    PRINTSTRING( "***** LEAVE: PUB FAVOURITE\n" );
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88576(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_LPG", uParam1, 7, 1 );
        return;
        case 6:
        sub_33155( "E1FCT3_LPG", uParam1, 7, 1 );
        return;
        case 7:
        sub_33155( "E1FCC3_LPG", uParam1, 7, 1 );
        return;
    }
    PRINTSTRING( "***** ARRIVE: PUB STANDARD\n" );
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88774(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_LPA", uParam1, 7, 1 );
        return;
        case 6:
        sub_33155( "E1FCT3_LPA", uParam1, 7, 1 );
        return;
        case 7:
        sub_33155( "E1FCC3_LPA", uParam1, 7, 1 );
        return;
    }
    PRINTSTRING( "***** ARRIVE: CLUB STANDARD\n" );
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_89247(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        sub_89295( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Friend: Unknown friend ID" );
    return;
}

void sub_89295(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U613[uParam2]._fU0;
    uVar6 = g_U11583[uVar5]._fU16;
    switch (uVar6)
    {
        case 18:
        case 19:
        sub_89391( uParam0, uParam1 );
        break;
        case 17:
        case 16:
        sub_89856( uParam0, uParam1 );
        break;
        case 15:
        case 20:
        sub_90039( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Jim_Terry_Or_Clay: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_89391(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_89414( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_LEA", uParam1, 7, 1 );
        return;
        case 6:
        sub_33155( "E1FCT3_LEA", uParam1, 7, 1 );
        return;
        case 7:
        sub_33155( "E1FCC3_LEA", uParam1, 7, 1 );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_89414(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_ELD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: EATING - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_ELD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: EATING - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_ELD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: EATING - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_89856(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_89414( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_LEF", uParam1, 7, 1 );
        return;
        case 6:
        sub_33155( "E1FCT3_LEF", uParam1, 7, 1 );
        return;
        case 7:
        sub_33155( "E1FCC3_LEF", uParam1, 7, 1 );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90039(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_89414( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_LEG", uParam1, 7, 1 );
        return;
        case 6:
        sub_33155( "E1FCT3_LEG", uParam1, 7, 1 );
        return;
        case 7:
        sub_33155( "E1FCC3_LEG", uParam1, 7, 1 );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90407(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_90453( uParam1, uParam2 );
        break;
        case 1:
        sub_91095( uParam1, uParam2 );
        break;
        case 3:
        sub_91446( uParam1, uParam2 );
        break;
        default: sub_3927( "Ended_HiLoCards_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_90453(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_90476( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_CLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: HI-LO CARDS (Player Won)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_CLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: HI-LO CARDS (Player Won)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_CLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: HI-LO CARDS (Player Won)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90476(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_CLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: HILO CARDS - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_CLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: HILO CARDS - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_CLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: HILO CARDS - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91095(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_90476( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_CLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: HI-LO CARDS (Player Lost)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_CLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: HI-LO CARDS (Player Lost)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_CLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: HI-LO CARDS (Player Lost)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91446(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_90476( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_CLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: HI-LO CARDS (Abandoned)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_CLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: HI-LO CARDS (Abandoned)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_CLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: HI-LO CARDS (Abandoned)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91884(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_91938( uParam1, uParam2 );
        break;
        case 2:
        sub_92544( uParam1, uParam2 );
        break;
        case 1:
        sub_92853( uParam1, uParam2 );
        break;
        case 3:
        sub_93183( uParam1, uParam2 );
        break;
        default: sub_3927( "Ended_Pool_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_91938(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_91961( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_PLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL (Player Won)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_PLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL (Player Won)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_PLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL (Player Won)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91961(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_PLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_PLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_PLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_92544(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_91961( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_PLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL (Draw)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_PLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL (Draw)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_PLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL (Draw)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_92853(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_91961( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_PLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL (Player Lost)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_PLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL (Player Lost)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_PLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL (Player Lost)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_93183(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_91961( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_PLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL (Abandoned)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_PLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL (Abandoned)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_PLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL (Abandoned)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_93607(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 3)
    {
        sub_93629( uParam1, uParam2 );
    }
    else
    {
        sub_94235( uParam1, uParam2 );
    }
    return;
}

void sub_93629(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_93652( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_SHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: SHOW (Abandoned)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_SHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: SHOW (Abandoned)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_SHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: SHOW (Abandoned)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_93652(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_SHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: SHOW - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_SHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: SHOW - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_SHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: SHOW - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94235(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_93652( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_SHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: SHOW\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_SHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: SHOW\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_SHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: SHOW\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94536(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 3)
    {
        sub_94558( uParam1, uParam2 );
    }
    else
    {
        sub_94608( uParam1, uParam2 );
    }
    return;
}

void sub_94558(unknown uParam0, unknown uParam1)
{
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94608(unknown uParam0, unknown uParam1)
{
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94666(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 1)
    {
        return;
    }
    if (iParam0 == 3)
    {
        sub_94700( uParam1, uParam2 );
    }
    else
    {
        sub_95340( uParam1, uParam2 );
    }
    return;
}

void sub_94700(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_94723( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_SLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: STRIP CLUB (Abandoned)\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_STLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: STRIP CLUB (Abandoned)\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_STLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: STRIP CLUB (Abandoned)\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94723(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_SLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: STRIP CLUB - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_STLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: STRIP CLUB - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_STLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: STRIP CLUB - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95340(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_94723( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_SLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: STRIP CLUB\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_STLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: STRIP CLUB\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_STLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: STRIP CLUB\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95656(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_95710( uParam1, uParam2 );
        break;
        case 2:
        sub_95760( uParam1, uParam2 );
        break;
        case 1:
        sub_95810( uParam1, uParam2 );
        break;
        case 3:
        sub_95860( uParam1, uParam2 );
        break;
        default: sub_3927( "Ended_Bowling_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_95710(unknown uParam0, unknown uParam1)
{
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95760(unknown uParam0, unknown uParam1)
{
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95810(unknown uParam0, unknown uParam1)
{
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95860(unknown uParam0, unknown uParam1)
{
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_96108(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (iParam0 == 12)
    {
        (uParam1^) = {l_U613[l_U1160]._fU48};
        (uParam2^) = {l_U613[l_U1160]._fU60};
        (uParam3^) = {l_U613[l_U1160]._fU72};
        return;
    }
    return;
}

void sub_96231()
{
    unknown Result;

    Result = g_U26739._fU12;
    g_U26739._fU12 = 12;
    return Result;
}

int sub_96288(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 6;
        case 1: return 7;
        case 2: return 8;
        case 10: return 9;
        case 3: return 10;
        case 4: return 15;
        case 5: return 16;
        case 6: return 18;
        case 8: return 20;
        case 9: return 21;
    }
    SCRIPT_ASSERT( "Convert_Minigame_Activity_To_Phone_Activity: Minigame activity doesn't have a phone activity ID" );
    return 22;
}

int sub_96549(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == 22))
    {
        l_U1156 = iParam0;
    }
    if (l_U1156 == 22)
    {
        return 0;
    }
    if (l_U1156 == l_U1150)
    {
        return 0;
    }
    if (l_U1156 == l_U1155)
    {
        return 0;
    }
    switch (l_U1156)
    {
        case 6: return sub_96709( uParam1 );
        case 10: return sub_96900( uParam1 );
        case 18: return sub_96959( uParam1 );
        case 20: return 0;
        case 21: return sub_97003( uParam1 );
        case 9: return sub_97360( uParam1 );
        case 7:
        case 16: return 0;
    }
    SCRIPT_ASSERT( "Check_If_Issue_No_To_Alternative_Activity: Unrecognised activity ID" );
    return 0;
}

int sub_96709(unknown uParam0)
{
    if (sub_96721( uParam0, 8 ))
    {
        return 1;
    }
    if (sub_96721( uParam0, 39 ))
    {
        return 1;
    }
    return 0;
}

void sub_96721(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = {g_U11583[uParam1]._fU0};
    return sub_96750( uParam0, uVar4 );
}

void sub_96750(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return 0;
    }
    if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_2582(), uParam1._fU0, uParam1._fU4, uParam1._fU8, 4.00000000, 4.00000000, 4.00000000, 0 )))
    {
        return 0;
    }
    return sub_70081( uParam0, 1092616192 );
}

int sub_96900(unknown uParam0)
{
    if (sub_96721( uParam0, 11 ))
    {
        return 1;
    }
    if (sub_96721( uParam0, 43 ))
    {
        return 1;
    }
    return 0;
}

int sub_96959(unknown uParam0)
{
    if (sub_96721( uParam0, 10 ))
    {
        return 1;
    }
    return 0;
}

int sub_97003(unknown uParam0)
{
    int iVar3;

    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return 0;
    }
    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    GET_INTERIOR_FROM_CHAR( sub_2582(), ref iVar3 );
    if (iVar3 == nil)
    {
        return 0;
    }
    if ((((sub_97093( uParam0, "Bada_room1" )) || (sub_97093( uParam0, "Bada-Private" ))) || (sub_97093( uParam0, "Bada_room2" ))) || (sub_97093( uParam0, "Bada_room1" )))
    {
        return 1;
    }
    if ((((sub_97093( uParam0, "clammainroom" )) || (sub_97093( uParam0, "clampalbkrm" ))) || (sub_97093( uParam0, "clamfronrm" ))) || (sub_97093( uParam0, "clammainroom" )))
    {
        return 1;
    }
    return 0;
}

int sub_97093(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = GET_HASH_KEY( uParam1 );
    GET_KEY_FOR_CHAR_IN_ROOM( sub_2582(), ref iVar5 );
    if (NOT (iVar5 == iVar4))
    {
        return 0;
    }
    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar5 );
    if (NOT (iVar5 == iVar4))
    {
        return 0;
    }
    return 1;
}

int sub_97360(unknown uParam0)
{
    return 0;
}

void sub_97505(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 0;
    sub_58149( uParam5, iVar8 );
    sub_2476( uParam1 );
    sub_2633( 0, sub_2582(), "JOHNNY", 0 );
    sub_2633( uParam2, uParam3, uParam4, 0 );
    sub_97572( uParam0, uParam5 );
    l_U1155 = l_U1156;
    return;
}

void sub_97572(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_97595( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: NO TO DIFFERENT ACTIVITY\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: NO TO DIFFERENT ACTIVITY\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: NO TO DIFFERENT ACTIVITY\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_97595(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33155( "E1FCJ3_DAND", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: NO TO DIFFERENT ACTIVITY - DRUNK\n" );
        return;
        case 6:
        sub_33155( "E1FCT3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: NO TO DIFFERENT ACTIVITY - DRUNK\n" );
        return;
        case 7:
        sub_33155( "E1FCC3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: NO TO DIFFERENT ACTIVITY - DRUNK\n" );
        return;
    }
    sub_33155( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_98329(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown uVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (l_U521._fU0)
    {
        l_U536 = 0;
        if (sub_56367( l_U405 ))
        {
            return;
        }
        if (IS_PLAYER_PLAYING( sub_2960() ))
        {
            if (IS_AMBIENT_SPEECH_PLAYING( sub_2582() ))
            {
                return;
            }
            STOP_PED_SPEAKING( sub_2582(), 1 );
        }
        l_U521._fU0 = 0;
        l_U521._fU4 = 1;
        l_U521._fU12 = 0;
        l_U521._fU20 = 0;
        l_U521._fU24 = 0;
        l_U521._fU28 = 0;
        sub_1191();
        return;
    }
    sub_98494( uParam0 );
    if (l_U521._fU4)
    {
        sub_100063( uParam0 );
        if (sub_100348( uParam0 ))
        {
            l_U521._fU4 = 0;
            if (l_U521._fU8)
            {
                l_U521._fU20 = iVar3 + 10000;
            }
            else
            {
                l_U521._fU20 = iVar3 + 15000;
            }
            return;
        }
    }
    if (NOT (l_U521._fU20 == 0))
    {
        if (NOT (sub_100348( uParam0 )))
        {
            l_U521._fU4 = 1;
            l_U521._fU20 = 0;
            return;
        }
        if (iVar3 > l_U521._fU20)
        {
            REQUEST_ANIMS( "Gestures@Niko" );
            if (NOT (HAVE_ANIMS_LOADED( "Gestures@Niko" )))
            {
                return;
            }
            bVar4 = false;
            if (NOT l_U521._fU8)
            {
                sub_101039( l_U416 );
                sub_2633( 0, sub_2582(), l_U579, 0 );
                if (NOT (sub_101373( l_U416, ref l_U465, l_U521._fU16 )))
                {
                    bVar4 = true;
                }
            }
            else
            {
                sub_106959( l_U416 );
                sub_2633( 0, sub_2582(), l_U579, 0 );
                sub_107286( l_U416, ref l_U465 );
            }
            if (bVar4)
            {
                ;
            }
            l_U521._fU20 = 0;
            l_U521._fU12 = 1;
            g_U18635[l_U416]._fU892._fU44 = -1;
        }
        return;
    }
    if (sub_111257( uParam0 ))
    {
        return;
    }
    if (l_U521._fU12)
    {
        if (g_U18635[l_U416]._fU892._fU40 >= 0)
        {
            bVar5 = false;
            if (NOT l_U521._fU24)
            {
                if ((sub_111919( ref l_U465 )) || ((sub_77384( l_U465 )) > 5))
                {
                    bVar5 = true;
                }
            }
            if (bVar5)
            {
                l_U521._fU12 = 0;
                uVar6 = g_U18635[l_U416]._fU892._fU40;
                sub_101899( l_U416, uVar6 );
                if (IS_PLAYER_PLAYING( sub_2960() ))
                {
                    STOP_PED_SPEAKING( sub_2582(), 0 );
                }
                l_U536 = 1;
            }
            return;
        }
    }
    if (l_U536)
    {
        if (sub_111919( ref l_U465 ))
        {
            if (HAVE_ANIMS_LOADED( "Gestures@Niko" ))
            {
                REMOVE_ANIMS( "Gestures@Niko" );
            }
            l_U536 = 0;
        }
    }
    return;
}

void sub_98494(unknown uParam0)
{
    sub_98505( uParam0 );
    sub_99247( uParam0 );
    sub_99662( uParam0 );
    return;
}

void sub_98505(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if ((IS_CHAR_DEAD( sub_2582() )) || (sub_98528( uParam0 )))
    {
        return;
    }
    if ((IS_CHAR_ON_ANY_BIKE( sub_2582() )) || (sub_98769( uParam0 )))
    {
        sub_98909( uParam0 );
        return;
    }
    GET_CHAR_COORDINATES( sub_2582(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_98963( uVar3, uVar6 );
    if (l_U521._fU36)
    {
        if (fVar9 < 6.00000000)
        {
            l_U521._fU36 = 0;
        }
        return;
    }
    if (fVar9 < 12.00000000)
    {
        return;
    }
    l_U521._fU36 = 1;
    sub_77354();
    return;
}

int sub_98528(unknown uParam0)
{
    int I;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 1;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37398( I ))
        {
            if (IS_CHAR_INJURED( sub_98584( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_98584(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Get_Biker_Friend_Index: Minigame Biker Index out of range" );
        return nil;
    }
    return g_U38857[iParam0]._fU0;
}

int sub_98769(unknown uParam0)
{
    int I;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_ON_ANY_BIKE( uParam0 ))
        {
            return 1;
        }
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37398( I ))
        {
            if (NOT (IS_CHAR_INJURED( sub_98584( I ) )))
            {
                if (IS_CHAR_ON_ANY_BIKE( sub_98584( I ) ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_98909(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    GET_CHAR_COORDINATES( sub_2582(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_98963( uVar3, uVar6 );
    if (l_U521._fU36)
    {
        if (fVar9 < 15.00000000)
        {
            l_U521._fU36 = 0;
        }
        return;
    }
    if (fVar9 < 80.00000000)
    {
        return;
    }
    l_U521._fU36 = 1;
    sub_77354();
    return;
}

void sub_98963(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_99247(unknown uParam0)
{
    boolean bVar3;
    int iVar4;
    int iVar5;

    if ((IS_CHAR_DEAD( sub_2582() )) || (sub_99270( uParam0 )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_INJURED( sub_2582() ))
    {
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        iVar4 = 0;
        iVar5 = 0;
        GET_CHAR_HEALTH( sub_2582(), ref iVar4 );
        GET_CHAR_HEALTH( uParam0, ref iVar5 );
        if (l_U521._fU52 == 64537)
        {
            l_U521._fU52 = iVar4;
        }
        if (l_U521._fU56 == 64537)
        {
            l_U521._fU56 = iVar5;
        }
        if (iVar4 < l_U521._fU52)
        {
            bVar3 = true;
        }
        if (iVar5 < l_U521._fU56)
        {
            bVar3 = true;
        }
        l_U521._fU52 = iVar4;
        l_U521._fU56 = iVar5;
    }
    if (l_U521._fU40)
    {
        if (NOT bVar3)
        {
            l_U521._fU40 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    if (l_U521._fU8)
    {
        return;
    }
    l_U521._fU40 = 1;
    sub_77354();
    return;
}

int sub_99270(unknown uParam0)
{
    int I;

    if (g_U39172 == 0)
    {
        return IS_CHAR_INJURED( uParam0 );
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (g_U39174[I] == nil))
        {
            if (IS_CHAR_INJURED( g_U39174[I] ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_99662(unknown uParam0)
{
    boolean bVar3;

    if ((IS_CHAR_DEAD( sub_2582() )) || (sub_98528( uParam0 )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_SHOOTING( sub_2582() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_2582() ))
    {
        bVar3 = true;
    }
    if (sub_99744( uParam0 ))
    {
        bVar3 = true;
    }
    if (sub_99859( uParam0 ))
    {
        bVar3 = true;
    }
    if (l_U521._fU44)
    {
        if (NOT bVar3)
        {
            l_U521._fU44 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    l_U521._fU44 = 1;
    sub_77354();
    return;
}

int sub_99744(unknown uParam0)
{
    int I;

    if (g_U39172 == 0)
    {
        return IS_CHAR_SHOOTING( uParam0 );
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37398( I ))
        {
            if (IS_CHAR_SHOOTING( sub_98584( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_99859(unknown uParam0)
{
    int I;

    if (g_U39172 == 0)
    {
        return IS_CHAR_IN_MELEE_COMBAT( uParam0 );
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37398( I ))
        {
            if (IS_CHAR_IN_MELEE_COMBAT( sub_98584( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_100063(unknown uParam0)
{
    int I;
    unknown uVar4;

    if (NOT (g_U39172 == 0))
    {
        return;
    }
    if ((l_U501 == 0) || (l_U501 == 1))
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37398( I ))
        {
            g_U39174[I] = sub_98584( I );
        }
        else
        {
            g_U39174[I] = nil;
        }
        if (NOT (g_U39174[I] == nil))
        {
            SET_BIT( ref g_U39172, I );
        }
    }
    if (NOT (g_U39172 == 0))
    {
        return;
    }
    uVar4 = sub_100245( l_U416 );
    SET_BIT( ref g_U39172, uVar4 );
    g_U39174[uVar4] = uParam0;
    return;
}

int sub_100245(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 6: return 1;
        case 7: return 2;
    }
    return 3;
}

int sub_100348(unknown uParam0)
{
    unknown uVar3;

    if ((sub_100357()) || (l_U521._fU24))
    {
        return 0;
    }
    if ((l_U501 == 0) || (l_U501 == 1))
    {
        return 0;
    }
    if (NOT l_U521._fU8)
    {
        if (sub_100489( uParam0 ))
        {
            return 1;
        }
        if ((NOT (IS_CHAR_DEAD( sub_2582() ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar3 );
                if (IS_CHAR_IN_CAR( uParam0, uVar3 ))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    return 1;
}

int sub_100357()
{
    if (((((l_U521._fU32) || (l_U521._fU36)) || (l_U521._fU40)) || (l_U521._fU44)) || (l_U521._fU48))
    {
        return 1;
    }
    return 0;
}

int sub_100489(unknown uParam0)
{
    if ((sub_100357()) || (l_U521._fU24))
    {
        return 0;
    }
    if (NOT l_U521._fU8)
    {
        if ((NOT (IS_CHAR_DEAD( sub_2582() ))) AND (NOT (sub_98528( uParam0 ))))
        {
            if (IS_CHAR_ON_ANY_BIKE( sub_2582() ))
            {
                if (sub_100579( uParam0 ))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    return 1;
}

int sub_100579(unknown uParam0)
{
    int I;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_ON_ANY_BIKE( uParam0 )))
    {
        return 0;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37398( I ))
        {
            if (IS_CHAR_INJURED( sub_98584( I ) ))
            {
                return 0;
            }
            if (NOT (IS_CHAR_ON_ANY_BIKE( sub_98584( I ) )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_101039(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_2476( "E12WA" );
        return;
        case 6:
        sub_2476( "E12WA" );
        return;
        case 7:
        sub_2476( "E12WA" );
        return;
    }
    sub_3927( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Not a friend" );
    sub_3927( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Should never reach here" );
    return;
}

int sub_101373(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    int I;
    int iVar8;
    boolean bVar9;
    int iVar10;

    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: Unrecognised friend ID" );
        return 0;
    }
    sub_101496();
    g_U18635[uParam0]._fU892._fU40 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_102464( uParam0 );
    iVar5 = 0;
    iVar6 = 0;
    I = 0;
    if ((NOT g_U18635[uParam0]._fU892._fU28) AND (uParam2))
    {
        iVar6 = g_U18635[uParam0]._fU892._fU24;
        I = 0;
        for ( I = 0; I < iVar6; I++ )
        {
            if ((sub_101542( uParam0, I )) AND (NOT (sub_101807( uParam0, I ))))
            {
                sub_101723( uParam0, I );
            }
        }
    }
    sub_103019( uParam0 );
    iVar5 = 0;
    iVar6 = g_U18635[uParam0]._fU892._fU24;
    I = 0;
    for ( I = 0; I < iVar6; I++ )
    {
        if (NOT (sub_101542( uParam0, I )))
        {
            iVar5++;
        }
    }
    if ((iVar5 == 0) AND (uParam2))
    {
        for ( I = 0; I < iVar6; I++ )
        {
            if (NOT (sub_101807( uParam0, I )))
            {
                sub_101723( uParam0, I );
                iVar5++;
            }
        }
    }
    if (iVar5 == 0)
    {
        return 0;
    }
    iVar8 = 0;
    if (g_U18635[uParam0]._fU892._fU28)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar5, ref iVar8 );
    }
    bVar9 = false;
    for ( I = 0; I < iVar6; I++ )
    {
        if (NOT bVar9)
        {
            if (NOT (sub_101542( uParam0, I )))
            {
                if (iVar8 == 0)
                {
                    if (sub_103276( I ))
                    {
                        g_U18635[uParam0]._fU892._fU40 = I;
                        sub_101634( uParam0, I );
                        bVar9 = true;
                    }
                }
                else
                {
                    iVar8--;
                }
            }
        }
    }
    if (NOT bVar9)
    {
        return 0;
    }
    PRINTSTRING( "AFTER\n" );
    sub_102464( uParam0 );
    iVar10 = 0;
    switch (uParam0)
    {
        case 1:
        sub_104731( uParam1, iVar10 );
        return 1;
        case 6:
        sub_106001( uParam1, iVar10 );
        return 1;
        case 7:
        sub_106417( uParam1, iVar10 );
        return 1;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: must have forgotten to update friend ID when added speech" );
    return 0;
}

void sub_101496()
{
    int iVar2;
    int I;
    int iVar4;
    int iVar5;

    iVar2 = g_U18635[1]._fU892._fU24;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (((sub_101542( 1, I )) || (sub_101542( 6, I ))) || (sub_101542( 7, I )))
        {
            sub_101634( 1, I );
            sub_101634( 6, I );
            sub_101634( 7, I );
        }
        else
        {
            sub_101723( 1, I );
            sub_101723( 6, I );
            sub_101723( 7, I );
        }
        if (((sub_101807( 1, I )) || (sub_101807( 6, I ))) || (sub_101807( 7, I )))
        {
            sub_101899( 1, I );
            sub_101899( 6, I );
            sub_101899( 7, I );
        }
        else
        {
            sub_101988( 1, I );
            sub_101988( 6, I );
            sub_101988( 7, I );
        }
    }
    iVar4 = g_U18635[1]._fU892._fU24;
    iVar5 = (g_U18635[1]._fU892._fU32 + iVar4) - 1;
    I = 0;
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (((sub_101542( 1, I )) || (sub_101542( 6, I ))) || (sub_101542( 7, I )))
        {
            sub_101634( 1, I );
            sub_101634( 6, I );
            sub_101634( 7, I );
        }
        else
        {
            sub_101723( 1, I );
            sub_101723( 6, I );
            sub_101723( 7, I );
        }
        if (((sub_101807( 1, I )) || (sub_101807( 6, I ))) || (sub_101807( 7, I )))
        {
            sub_101899( 1, I );
            sub_101899( 6, I );
            sub_101899( 7, I );
        }
        else
        {
            sub_101988( 1, I );
            sub_101988( 6, I );
            sub_101988( 7, I );
        }
    }
    return;
}

void sub_101542(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    return IS_BIT_SET( g_U18635[uParam0]._fU892._fU0[iVar4], iVar5 );
}

void sub_101634(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    SET_BIT( ref g_U18635[uParam0]._fU892._fU0[iVar4], iVar5 );
    return;
}

void sub_101723(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    CLEAR_BIT( ref g_U18635[uParam0]._fU892._fU0[iVar4], iVar5 );
    return;
}

void sub_101807(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    return IS_BIT_SET( g_U18635[uParam0]._fU892._fU12[iVar4], iVar5 );
}

void sub_101899(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    SET_BIT( ref g_U18635[uParam0]._fU892._fU12[iVar4], iVar5 );
    return;
}

void sub_101988(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    CLEAR_BIT( ref g_U18635[uParam0]._fU892._fU12[iVar4], iVar5 );
    return;
}

void sub_102464(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    char[64] cVar7;

    iVar3 = g_U18635[uParam0]._fU892._fU24;
    iVar4 = iVar3 + g_U18635[uParam0]._fU892._fU32;
    I = 0;
    iVar6 = 0;
    StrCopy( ref cVar7, "", 64 );
    for ( I = 0; I < iVar4; I++ )
    {
        if (I == iVar3)
        {
            ConcatString(ref cVar7, " ", 64);
            iVar6++;
            if (iVar6 == 64)
            {
                PRINTSTRING( ref cVar7 );
                StrCopy( ref cVar7, "", 64 );
                iVar6 = 0;
            }
        }
        if (sub_101542( uParam0, I ))
        {
            ConcatString(ref cVar7, "1", 64);
        }
        else
        {
            ConcatString(ref cVar7, "0", 64);
        }
        iVar6++;
        if (iVar6 == 64)
        {
            PRINTSTRING( ref cVar7 );
            StrCopy( ref cVar7, "", 64 );
            iVar6 = 0;
        }
    }
    if (iVar6 < 64)
    {
        ConcatString(ref cVar7, " ", 64);
    }
    PRINTSTRING( ref cVar7 );
    PRINTNL();
    iVar6 = 0;
    StrCopy( ref cVar7, "", 64 );
    for ( I = 0; I < iVar4; I++ )
    {
        if (I == iVar3)
        {
            ConcatString(ref cVar7, " ", 64);
            iVar6++;
            if (iVar6 == 64)
            {
                PRINTSTRING( ref cVar7 );
                StrCopy( ref cVar7, "", 64 );
                iVar6 = 0;
            }
        }
        if (sub_101807( uParam0, I ))
        {
            ConcatString(ref cVar7, "1", 64);
        }
        else
        {
            ConcatString(ref cVar7, "0", 64);
        }
        iVar6++;
        if (iVar6 == 64)
        {
            PRINTSTRING( ref cVar7 );
            StrCopy( ref cVar7, "", 64 );
            iVar6 = 0;
        }
    }
    if (iVar6 < 64)
    {
        ConcatString(ref cVar7, " ", 64);
    }
    PRINTSTRING( ref cVar7 );
    PRINTNL();
    PRINTNL();
    return;
}

void sub_103019(unknown uParam0)
{
    return;
}

int sub_103276(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    g_U39173 = 0;
    switch (uParam0)
    {
        case 0:
        case 2:
        case 6:
        case 10:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 1 )))
        {
            sub_103659( "E13WA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar4 = true;
        }
        break;
        case 1:
        case 3:
        case 7:
        case 11:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_103659( "E13WA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar5 = true;
        }
        break;
        case 14:
        case 15:
        case 16:
        case 17:
        case 20:
        case 23:
        case 26:
        if (IS_BIT_SET( g_U39172, 0 ))
        {
            sub_103659( "E12WA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            g_U39173 = 1;
            bVar3 = true;
        }
        break;
        case 18:
        case 21:
        case 24:
        case 27:
        case 30:
        case 33:
        case 36:
        if (IS_BIT_SET( g_U39172, 2 ))
        {
            sub_103659( "E12WA" );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar5 = true;
        }
        break;
        case 19:
        case 22:
        case 25:
        case 28:
        case 31:
        case 34:
        case 37:
        if (IS_BIT_SET( g_U39172, 1 ))
        {
            sub_103659( "E12WA" );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar4 = true;
        }
        break;
        case 4:
        case 8:
        case 12:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_103659( "E12WA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 0;
            bVar3 = true;
            bVar5 = true;
        }
        break;
        case 5:
        case 9:
        case 13:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 1 )))
        {
            sub_103659( "E12WA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 0;
            bVar3 = true;
            bVar4 = true;
        }
        break;
        case 29:
        case 32:
        case 35:
        if ((IS_BIT_SET( g_U39172, 2 )) AND (IS_BIT_SET( g_U39172, 1 )))
        {
            sub_103659( "E12WA" );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 0;
            bVar5 = true;
            bVar4 = true;
        }
        break;
    }
    if (((NOT bVar3) AND (NOT bVar4)) AND (NOT bVar5))
    {
        return 0;
    }
    if (NOT bVar3)
    {
        CLEAR_BIT( ref g_U39172, 0 );
        g_U39174[0] = nil;
    }
    if (NOT bVar4)
    {
        CLEAR_BIT( ref g_U39172, 1 );
        g_U39174[1] = nil;
    }
    if (NOT bVar5)
    {
        CLEAR_BIT( ref g_U39172, 2 );
        g_U39174[2] = nil;
    }
    return 1;
}

int sub_103659(unknown uParam0)
{
    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        StrCopy( ref l_U6._fU0, uParam0, 16 );
        return 1;
    }
    return 0;
}

void sub_104731(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 1;
    if (NOT (38 == g_U18635[iVar4]._fU892._fU24))
    {
        sub_3927( "FA_Jim Speech_Generic_Conversations: inconsistent number of Jim conversations - see Jim Flow" );
        return;
    }
    sub_104873();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_103276( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Jim_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_105857( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_33155( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_104873()
{
    StrCopy( ref l_U216[0], "E13W_JT1", 16 );
    StrCopy( ref l_U216[2], "E13W_JT2", 16 );
    StrCopy( ref l_U216[6], "E13W_JT3", 16 );
    StrCopy( ref l_U216[10], "E13W_JT4", 16 );
    StrCopy( ref l_U216[1], "E13W_JC1", 16 );
    StrCopy( ref l_U216[3], "E13W_JC2", 16 );
    StrCopy( ref l_U216[7], "E13W_JC3", 16 );
    StrCopy( ref l_U216[11], "E13W_JC4", 16 );
    StrCopy( ref l_U216[14], "E12W_J1", 16 );
    StrCopy( ref l_U216[15], "E12W_J2", 16 );
    StrCopy( ref l_U216[16], "E12W_J3", 16 );
    StrCopy( ref l_U216[17], "E12W_J4", 16 );
    StrCopy( ref l_U216[20], "E12W_J5", 16 );
    StrCopy( ref l_U216[23], "E12W_J6", 16 );
    StrCopy( ref l_U216[26], "E12W_J7", 16 );
    StrCopy( ref l_U216[18], "E12W_C1", 16 );
    StrCopy( ref l_U216[21], "E12W_C2", 16 );
    StrCopy( ref l_U216[24], "E12W_C3", 16 );
    StrCopy( ref l_U216[27], "E12W_C4", 16 );
    StrCopy( ref l_U216[30], "E12W_C5", 16 );
    StrCopy( ref l_U216[33], "E12W_C6", 16 );
    StrCopy( ref l_U216[36], "E12W_C7", 16 );
    StrCopy( ref l_U216[19], "E12W_T1", 16 );
    StrCopy( ref l_U216[22], "E12W_T2", 16 );
    StrCopy( ref l_U216[25], "E12W_T3", 16 );
    StrCopy( ref l_U216[28], "E12W_T4", 16 );
    StrCopy( ref l_U216[31], "E12W_T5", 16 );
    StrCopy( ref l_U216[34], "E12W_T6", 16 );
    StrCopy( ref l_U216[37], "E12W_T7", 16 );
    StrCopy( ref l_U216[4], "E12W_CJ1", 16 );
    StrCopy( ref l_U216[8], "E12W_CJ2", 16 );
    StrCopy( ref l_U216[12], "E12W_CJ3", 16 );
    StrCopy( ref l_U216[5], "E12W_TJ1", 16 );
    StrCopy( ref l_U216[9], "E12W_TJ2", 16 );
    StrCopy( ref l_U216[13], "E12W_TJ3", 16 );
    StrCopy( ref l_U216[29], "E12W_CT1", 16 );
    StrCopy( ref l_U216[32], "E12W_CT2", 16 );
    StrCopy( ref l_U216[35], "E12W_CT3", 16 );
    return;
}

void sub_105857(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_105882( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_105882(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_33230( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_106001(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 6;
    if (NOT (38 == g_U18635[iVar4]._fU892._fU24))
    {
        sub_3927( "FA_Terry_Speech_Generic_Conversations: inconsistent number of Terry conversations - see Terry Flow" );
        return;
    }
    sub_104873();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_103276( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Terry_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_105857( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_33155( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_106417(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 7;
    if (NOT (38 == g_U18635[iVar4]._fU892._fU24))
    {
        sub_3927( "FA_Clay_Speech_Generic_Conversations: inconsistent number of Clay conversations - see Clay Flow" );
        return;
    }
    sub_104873();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_103276( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Clay_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_105857( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_33155( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_106959(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_2476( "E1DRA" );
        return;
        case 6:
        sub_2476( "E1DRA" );
        return;
        case 7:
        sub_2476( "E1DRA" );
        return;
    }
    sub_3927( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Not a friend" );
    sub_3927( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Should never reach here" );
    return;
}

void sub_107286(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int I;
    int iVar8;
    boolean bVar9;
    int iVar10;
    int iVar11;

    PRINTSTRING( "DRUNK TALK..........................FA_Friend_Speech_Drunken_Conversations\n" );
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Drunk_Conversations: Unrecognised friend ID" );
        return;
    }
    g_U18635[uParam0]._fU892._fU40 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_102464( uParam0 );
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    I = 0;
    if (NOT g_U18635[uParam0]._fU892._fU36)
    {
        iVar5 = g_U18635[uParam0]._fU892._fU24;
        iVar6 = (g_U18635[uParam0]._fU892._fU32 + iVar5) - 1;
        I = 0;
        for ( I = iVar5; I <= iVar6; I++ )
        {
            if ((sub_101542( uParam0, I )) AND (NOT (sub_101807( uParam0, I ))))
            {
                sub_101723( uParam0, I );
            }
        }
    }
    iVar4 = 0;
    iVar5 = g_U18635[uParam0]._fU892._fU24;
    iVar6 = (g_U18635[uParam0]._fU892._fU32 + iVar5) - 1;
    PRINTSTRING( ".......FIRST DRUNKEN: " );
    PRINTINT( iVar5 );
    PRINTSTRING( "       LAST DRUNKEN: " );
    PRINTINT( iVar6 );
    PRINTNL();
    I = 0;
    for ( I = iVar5; I <= iVar6; I++ )
    {
        if (NOT (sub_101542( uParam0, I )))
        {
            iVar4++;
        }
    }
    PRINTSTRING( "......TO BE TRIGGERED: " );
    PRINTINT( iVar4 );
    PRINTNL();
    if (iVar4 == 0)
    {
        for ( I = iVar5; I <= iVar6; I++ )
        {
            if (NOT (sub_101807( uParam0, I )))
            {
                sub_101723( uParam0, I );
                iVar4++;
            }
        }
    }
    if (iVar4 == 0)
    {
        return;
    }
    iVar8 = 0;
    if (g_U18635[uParam0]._fU892._fU36)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar4, ref iVar8 );
    }
    bVar9 = false;
    iVar10 = 0;
    for ( I = iVar5; I <= iVar6; I++ )
    {
        if (NOT bVar9)
        {
            if (NOT (sub_101542( uParam0, I )))
            {
                if (iVar8 == 0)
                {
                    PRINTSTRING( "......CHECKING FRIENDS AVAILABLE\n" );
                    iVar10 = I - iVar5;
                    if (sub_108237( iVar10 ))
                    {
                        g_U18635[uParam0]._fU892._fU40 = I;
                        sub_101634( uParam0, I );
                        bVar9 = true;
                    }
                }
                else
                {
                    iVar8--;
                }
            }
        }
    }
    if (NOT bVar9)
    {
        return;
    }
    PRINTSTRING( "AFTER\n" );
    sub_102464( uParam0 );
    iVar11 = 0;
    switch (uParam0)
    {
        case 1:
        sub_109420( uParam1, iVar11 );
        return;
        case 6:
        sub_110224( uParam1, iVar11 );
        return;
        case 7:
        sub_110663( uParam1, iVar11 );
        return;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Drunk_Conversations: must have forgotten to update friend ID when added speech" );
    return;
}

int sub_108237(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    g_U39173 = 0;
    switch (uParam0)
    {
        case 0:
        case 1:
        if (((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 1 ))) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_103659( "E1DRA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar4 = true;
            bVar5 = true;
        }
        break;
        case 2:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 1 )))
        {
            sub_103659( "E1DRA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar4 = true;
        }
        break;
        case 3:
        if ((IS_BIT_SET( g_U39172, 0 )) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_103659( "E1DRA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar5 = true;
        }
        break;
        case 4:
        case 8:
        case 13:
        if ((IS_BIT_SET( g_U39172, 1 )) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_103659( "E1DRA" );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar4 = true;
            bVar5 = true;
        }
        break;
        case 6:
        case 9:
        case 11:
        case 14:
        case 16:
        if (IS_BIT_SET( g_U39172, 2 ))
        {
            sub_103659( "E1DRA" );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar5 = true;
        }
        break;
        case 7:
        case 10:
        case 12:
        case 15:
        case 17:
        if (IS_BIT_SET( g_U39172, 1 ))
        {
            sub_103659( "E1DRA" );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar4 = true;
        }
        break;
        case 5:
        if (IS_BIT_SET( g_U39172, 0 ))
        {
            sub_103659( "E1DRA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            g_U39173 = 1;
            bVar3 = true;
        }
        break;
    }
    if (((NOT bVar3) AND (NOT bVar4)) AND (NOT bVar5))
    {
        return 0;
    }
    if (NOT bVar3)
    {
        CLEAR_BIT( ref g_U39172, 0 );
        g_U39174[0] = nil;
    }
    if (NOT bVar4)
    {
        CLEAR_BIT( ref g_U39172, 1 );
        g_U39174[1] = nil;
    }
    if (NOT bVar5)
    {
        CLEAR_BIT( ref g_U39172, 2 );
        g_U39174[2] = nil;
    }
    return 1;
}

void sub_109420(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 1;
    if (NOT (18 == g_U18635[iVar4]._fU892._fU32))
    {
        sub_3927( "FA_Jim_Speech_Drunk_Conversations: inconsistent number of Jim drunk conversations - see Jim Flow" );
        return;
    }
    sub_109566();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar6 -= g_U18635[iVar4]._fU892._fU24;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_108237( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Jim_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_105857( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_33155( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_109566()
{
    StrCopy( ref l_U216[0], "E1DR_4W1", 16 );
    StrCopy( ref l_U216[1], "E1DR_4W2", 16 );
    StrCopy( ref l_U216[2], "E1DR_4W3", 16 );
    StrCopy( ref l_U216[3], "E1DR_4W4", 16 );
    StrCopy( ref l_U216[4], "E1DR_4W5", 16 );
    StrCopy( ref l_U216[8], "E1DR_JTC1", 16 );
    StrCopy( ref l_U216[13], "E1DR_JTC2", 16 );
    StrCopy( ref l_U216[6], "E1DR_JC1", 16 );
    StrCopy( ref l_U216[9], "E1DR_JC2", 16 );
    StrCopy( ref l_U216[11], "E1DR_JC3", 16 );
    StrCopy( ref l_U216[14], "E1DR_JC4", 16 );
    StrCopy( ref l_U216[16], "E1DR_JC5", 16 );
    StrCopy( ref l_U216[7], "E1DR_JT1", 16 );
    StrCopy( ref l_U216[10], "E1DR_JT2", 16 );
    StrCopy( ref l_U216[12], "E1DR_JT3", 16 );
    StrCopy( ref l_U216[15], "E1DR_JT4", 16 );
    StrCopy( ref l_U216[17], "E1DR_JT5", 16 );
    StrCopy( ref l_U216[5], "E12W_JJ", 16 );
    return;
}

void sub_110224(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 6;
    if (NOT (18 == g_U18635[iVar4]._fU892._fU32))
    {
        sub_3927( "FA_Terry_Speech_Drunk_Conversations: inconsistent number of Terry drunk conversations - see Terry Flow" );
        return;
    }
    sub_109566();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar6 -= g_U18635[iVar4]._fU892._fU24;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_108237( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Terry_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_105857( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_33155( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_110663(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 7;
    if (NOT (18 == g_U18635[iVar4]._fU892._fU32))
    {
        sub_3927( "FA_Clay_Speech_Drunk_Conversations: inconsistent number of Clay drunk conversations - see Clay Flow" );
        return;
    }
    sub_109566();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar6 -= g_U18635[iVar4]._fU892._fU24;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_108237( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Clay_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_105857( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_33155( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

int sub_111257(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if ((sub_99270( uParam0 )) || (IS_CHAR_DEAD( sub_2582() )))
    {
        return l_U521._fU24;
    }
    if (l_U521._fU24)
    {
        if (NOT sub_100357())
        {
            if (g_U18635[l_U416]._fU892._fU44 == -1)
            {
                l_U521._fU24 = 0;
                return 0;
            }
            iVar3 = 0;
            GET_GAME_TIMER( ref iVar3 );
            if (l_U521._fU28 == 0)
            {
                l_U521._fU28 = iVar3 + 3000;
            }
            if (sub_111403())
            {
                l_U521._fU28 = 0;
            }
            if ((NOT (l_U521._fU28 == 0)) AND (iVar3 > l_U521._fU28))
            {
                l_U521._fU28 = 0;
                if (l_U521._fU8)
                {
                    sub_106959( l_U416 );
                    sub_2633( 0, sub_2582(), l_U579, 0 );
                    sub_111522( l_U416, ref l_U465 );
                }
                else
                {
                    sub_101039( l_U416 );
                    sub_2633( 0, sub_2582(), l_U579, 0 );
                    sub_111658( l_U416, ref l_U465 );
                }
                l_U521._fU24 = 0;
                return 0;
            }
            return 1;
        }
        l_U521._fU28 = 0;
        return 1;
    }
    if (sub_100357())
    {
        if (sub_56367( l_U465 ))
        {
            iVar4 = 0;
            sub_58149( ref l_U465, iVar4 );
        }
        l_U521._fU24 = 1;
        l_U521._fU28 = 0;
        return 1;
    }
    return 0;
}

void sub_111403()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_111522(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 1:
        sub_109420( uParam1, iVar4 );
        break;
        case 6:
        sub_110224( uParam1, iVar4 );
        break;
        case 7:
        sub_110663( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_111658(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 1:
        sub_104731( uParam1, iVar4 );
        break;
        case 6:
        sub_106001( uParam1, iVar4 );
        break;
        case 7:
        sub_106417( uParam1, iVar4 );
        break;
    }
    return;
}

int sub_111919(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            return 0;
        }
    }
    return 1;
}

void sub_112256()
{
    return;
}
