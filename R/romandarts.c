void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U102 = 0;
    l_U106 = 0.00000000;
    l_U108 = 0;
    l_U109 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 1;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 1;
    l_U124 = 0;
    l_U125 = 0;
    l_U126 = 0;
    l_U159 = 0;
    l_U160 = -1;
    l_U161 = 1;
    l_U165 = 0;
    l_U166 = "NONE";
    l_U193 = 0;
    l_U194 = 0;
    l_U204 = 0;
    l_U205 = 1;
    l_U206 = 2;
    l_U213 = 0;
    l_U214 = 999999.90000000;
    l_U215 = 0.00000000;
    l_U216 = 0.26000000;
    l_U217 = 0.65000000;
    l_U219 = 5000.00000000;
    l_U220 = 5000.00000000;
    l_U222 = 0.00000000;
    l_U224 = 0;
    l_U235 = "amb@smoking_spliff";
    l_U236 = "create_spliff";
    l_U237 = "partial_smoke";
    l_U238 = "partial_smoke_car";
    l_U239 = {0.13700000, 0.03100000, 0.03500000};
    l_U242 = {2.21400000, -0.12100000, 0.00000000};
    l_U245 = {0.00000000, 0.00000000, 0.13600000};
    l_U248 = {0.00000000, 0.00000000, 0.00000000};
    l_U251 = {-0.48300000, -0.28500000, 0.62000000};
    l_U254 = {-0.48300000, -1.30000000, 0.62000000};
    l_U257 = {0.00000000, 0.00000000, 90.00000000};
    l_U260 = {0.00000000, -0.28500000, 0.50000000};
    l_U263 = {0.00000000, 0.00000000, 0.00000000};
    l_U285 = 0;
    l_U286 = 1;
    l_U287 = 2;
    l_U288 = "missrandom_idle";
    l_U289 = "female_ilde";
    l_U290 = "female_ilde2";
    l_U291 = 1;
    l_U292 = 0;
    l_U293 = 0;
    l_U323 = 54;
    l_U324 = 0;
    l_U325 = 0;
    l_U326 = 0;
    l_U327 = 0;
    l_U328 = 0;
    l_U329 = 12;
    l_U330 = 0;
    l_U335 = 0;
    l_U337 = -1;
    l_U338 = 4;
    l_U370 = 0;
    l_U371 = 0;
    l_U376 = 0;
    l_U377 = "";
    l_U378 = 0;
    l_U391 = 0;
    l_U395 = 0;
    l_U396 = 1;
    l_U397 = 0;
    l_U398 = 0;
    l_U399 = 0;
    l_U400 = 0;
    l_U854 = 0;
    l_U855 = 0;
    l_U874 = 0.00000000;
    l_U875 = 0;
    l_U876 = 0;
    l_U877 = nil;
    l_U878 = 0;
    l_U879 = 14;
    l_U880 = 0;
    l_U881 = 0;
    l_U882 = 14;
    l_U883 = 8;
    l_U884 = 14;
    l_U885 = 14;
    l_U886 = 0;
    l_U887 = 0;
    l_U888 = 0;
    l_U889 = -1;
    l_U897 = 0;
    l_U898 = 0;
    l_U899 = 0;
    l_U900 = 14;
    l_U901 = 0;
    l_U902 = 0;
    l_U903 = 0;
    l_U904 = 0;
    l_U905 = 0;
    l_U906 = 0;
    l_U907 = 0;
    l_U910 = 0;
    l_U911 = 0;
    l_U927 = -1;
    l_U932 = 0;
    l_U949 = -1;
    l_U953 = 0;
    l_U954 = 1;
    l_U955 = 1;
    l_U963 = 150.00000000;
    l_U1053 = 0;
    l_U1054 = 150.00000000;
    l_U1104 = 0;
    l_U1307 = 8;
    sub_1086();
    sub_1369( l_U204 );
    sub_3071();
    l_U339 = 0;
    while (NOT l_U330)
    {
        if (NOT sub_3560())
        {
            sub_4627( "RomanDarts: Perform_Mission_Loop() returned FALSE unexpectedly" );
        }
        sub_111391();
        WAIT( 0 );
    }
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "******************** ROMAN DARTS DEATHARREST\n" );
        PRINTNL();
        sub_17302();
    }
    WAIT( 0 );
    while (sub_3560())
    {
        sub_111391();
        WAIT( 0 );
    }
    PRINTSTRING( "quitting ROMAN DARTS without PASS or FAIL\n" );
    sub_17302();
    sub_33339( "ROMAN DARTS: should never reach ENDSCRIPT" );
    return;
}

void sub_1086()
{
    sub_1095();
    sub_1303();
    sub_1327();
    l_U324 = 1;
    l_U325 = 0;
    return;
}

void sub_1095()
{
    l_U324 = 0;
    l_U325 = 0;
    l_U327 = 0;
    l_U328 = 0;
    l_U329 = 12;
    l_U330 = 0;
    sub_1140();
    return;
}

void sub_1140()
{
    l_U344._fU0 = 1;
    l_U344._fU4 = 0;
    l_U344._fU8 = 0;
    l_U344._fU12 = 0;
    l_U344._fU16 = 1;
    l_U344._fU20 = 0;
    l_U344._fU24 = 0;
    l_U344._fU28 = 0;
    l_U344._fU32 = 0;
    l_U344._fU36 = 0;
    l_U344._fU40 = 0;
    l_U344._fU44 = 0;
    l_U344._fU48 = 0;
    l_U344._fU52 = 64537;
    l_U344._fU56 = 64537;
    return;
}

void sub_1303()
{
    l_U336 = nil;
    return;
}

void sub_1327()
{
    return;
}

void sub_1369(unknown uParam0)
{
    int iVar3;
    vector vVar4;
    float fVar7;
    unknown uVar8;
    unknown uVar9;

    # -sub_C1FFC0-0xc214c8( 0, ref l_U127 );
    iVar3 = 0;
    vVar4 = {0.00000000, 0.00000000, 0.00000000};
    fVar7 = 0.00000000;
    uVar8 = sub_1420( 0, 4 );
    uVar9 = sub_2051( 0, 2 );
    g_U22274[iVar3]._fU180 = uVar8;
    g_U22274[iVar3]._fU184 = uVar9;
    vVar4 = {g_U9788[uVar8]._fU4};
    fVar7 = g_U9788[uVar8]._fU16;
    l_U197 = {g_U9731[uVar9]._fU4};
    l_U200 = {g_U9731[uVar9]._fU16};
    sub_2502( vVar4.x, vVar4.y, vVar4.z, fVar7 );
    l_U195 = nil;
    l_U196 = nil;
    l_U203 = nil;
    sub_2568( g_U26415[iVar3] );
    sub_2599( 1 );
    sub_2784( uParam0 );
    sub_2852( "MISSPICKUP_ROMAN", "lean01", "lean02", "wave" );
    return;
}

void sub_1420(int Result, int iParam1)
{
    int iVar4;
    int iVar5;
    int I;
    int iVar7;
    int[20] iVar8;
    float fVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    float fVar36;
    int iVar37;

    if (Result == iParam1)
    {
        return Result;
    }
    iVar4 = Result;
    iVar5 = iParam1;
    I = 0;
    iVar7 = 0;
    array(ref iVar8, 20);
    for ( I = iVar4; I <= iVar5; I++ )
    {
        iVar8[I] = 0;
        if (g_U9788[I]._fU0)
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
    if (NOT (IS_CHAR_DEAD( sub_1591() )))
    {
        fVar29 = 100.00000000 + 20.00000000;
        GET_CHAR_COORDINATES( sub_1591(), ref uVar30._fU0, ref uVar30._fU4, ref uVar30._fU8 );
        for ( I = iVar4; I <= iVar5; I++ )
        {
            if (iVar8[I])
            {
                uVar33 = {g_U9788[I]._fU4};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar30._fU0, uVar30._fU4, uVar30._fU8, uVar33._fU0, uVar33._fU4, uVar33._fU8, ref fVar36 );
                if (fVar36 < fVar29)
                {
                    iVar8[I] = 0;
                    iVar7--;
                }
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
    }
    iVar37 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar7, ref iVar37 );
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (iVar8[I])
        {
            if (iVar37 == 0)
            {
                return I;
            }
            iVar37--;
        }
    }
    SCRIPT_ASSERT( "Choose_Friend_Pickup_Point: code should never reach this point" );
    return Result;
}

void sub_1591()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2051(int Result, int iParam1)
{
    int iVar4;
    int iVar5;
    int I;
    int iVar7;
    int[8] iVar8;
    int iVar17;

    if (Result == iParam1)
    {
        return Result;
    }
    iVar4 = Result;
    iVar5 = iParam1;
    I = 0;
    iVar7 = 0;
    array(ref iVar8, 8);
    for ( I = iVar4; I <= iVar5; I++ )
    {
        iVar8[I] = 0;
        if (g_U9731[I]._fU0)
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
    iVar17 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar7, ref iVar17 );
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (iVar8[I])
        {
            if (iVar17 == 0)
            {
                return I;
            }
            iVar17--;
        }
    }
    SCRIPT_ASSERT( "Choose_Friend_Dropoff_Point: code should never reach this point" );
    return Result;
}

void sub_2502(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U103 = {uParam0, uParam1, uParam2};
    l_U106 = uParam3;
    return;
}

void sub_2568(unknown uParam0)
{
    l_U109 = 1;
    l_U110 = uParam0;
    return;
}

void sub_2599(boolean bParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( l_U107 )))
    {
        ADD_BLIP_FOR_CONTACT( l_U103._fU0, l_U103._fU4, l_U103._fU8, ref l_U107 );
        CHANGE_BLIP_DISPLAY( l_U107, 2 );
        CHANGE_BLIP_PRIORITY( l_U107, 1 );
        if (l_U109)
        {
            CHANGE_BLIP_SPRITE( l_U107, l_U110 );
            if (bParam0)
            {
                iVar3 = 0;
                GET_GAME_TIMER( ref iVar3 );
                CHANGE_BLIP_PRIORITY( l_U107, l_U2 );
                FLASH_BLIP( l_U107, 1 );
                l_U124 = iVar3 + 10000;
                l_U125 = 1;
            }
        }
    }
    return;
}

void sub_2784(unknown uParam0)
{
    l_U159 = uParam0;
    return;
}

void sub_2852(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    StrCopy( ref l_U167._fU0, uParam0, 32 );
    StrCopy( ref l_U167._fU32, uParam1, 16 );
    StrCopy( ref l_U167._fU48, uParam2, 16 );
    StrCopy( ref l_U167._fU64, uParam3, 16 );
    l_U167._fU80 = 0;
    l_U167._fU84 = 0;
    l_U167._fU88 = 0;
    l_U167._fU92 = 0;
    l_U167._fU100 = 1;
    l_U167._fU96 = 1;
    if (COMPARE_STRING( uParam0, l_U166 ))
    {
        l_U167._fU96 = 0;
    }
    sub_2996();
    return;
}

void sub_2996()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref iVar3 );
    l_U167._fU84 = iVar2 + iVar3;
    return;
}

void sub_3071()
{
    sub_3080();
    return;
}

void sub_3080()
{
    sub_3089();
    sub_3156( 0, "FArmA_1" );
    sub_3156( 1, "FArmB_1" );
    sub_3156( 2, "FArmH" );
    sub_3237( "FCR21AU" );
    sub_3356( 0, sub_1591(), "NIKO", 0 );
    StrCopy( ref l_U153, "ROMAN", 16 );
    l_U157 = 1;
    l_U158 = 0;
    return;
}

void sub_3089()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        StrCopy( ref l_U128[I], "", 16 );
    }
    return;
}

void sub_3156(int iParam0, unknown uParam1)
{
    if (iParam0 >= 3)
    {
        return;
    }
    StrCopy( ref l_U128[iParam0], uParam1, 16 );
    return;
}

void sub_3237(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_3254();
    return;
}

void sub_3254()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_3356(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3436( "\n PED NUMBER ", uParam0 );
    sub_3476( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3436(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3476(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3560()
{
    boolean bVar2;

    if ((l_U330) AND (IS_KEYBOARD_KEY_PRESSED( 31 )))
    {
        l_U338 = 1;
        sub_3594();
        return 0;
    }
    if ((l_U330) AND (IS_KEYBOARD_KEY_PRESSED( 33 )))
    {
        l_U329 = 11;
        sub_24632();
        return 0;
    }
    l_U327 = 0;
    l_U328 = 0;
    l_U329 = 12;
    l_U898 = 0;
    switch (l_U324)
    {
        case 0:
        sub_33339( "Mission Loop: Stage should never be 'Initialise'" );
        break;
        case 1:
        sub_34085();
        break;
        case 2:
        sub_52725();
        break;
        case 3:
        sub_54679();
        break;
        case 4:
        sub_55767();
        break;
        case 5:
        sub_59594();
        break;
        case 6:
        l_U327 = 1;
        break;
        default:
        sub_33339( "Mission_Loop: Unknown Stage ID" );
        return 0;
    }
    if (l_U327)
    {
        sub_3594();
        return 0;
    }
    if (l_U328)
    {
        sub_24632();
        return 0;
    }
    sub_70930();
    bVar2 = sub_70958( l_U195 );
    if (bVar2)
    {
        l_U328 = 1;
        l_U329 = 7;
        sub_24632();
        return 0;
    }
    sub_71274();
    if (l_U126)
    {
        sub_99098();
        sub_3594();
    }
    sub_99235( l_U195 );
    return 1;
}

void sub_3594()
{
    PRINTSTRING( "******************** ROMAN DARTS PASSED\n" );
    PRINTNL();
    CLEAR_WANTED_LEVEL( sub_3660() );
    sub_3703( l_U338 );
    g_U21 = l_U323;
    sub_17302();
    return;
}

void sub_3660()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3703(unknown uParam0)
{
    sub_3714( uParam0 );
    return;
}

void sub_3714(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 1;
    sub_3732();
    sub_3787( uParam0 );
    sub_3816( uParam0 );
    sub_3849( iVar3, iVar4, iVar5 );
    iVar6 = 0;
    uVar7 = g_U22274[iVar6]._fU144;
    sub_16688( iVar6, uVar7 );
    return;
}

void sub_3732()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U1301[I] = 4;
    }
    return;
}

void sub_3787(unknown uParam0)
{
    l_U1301[1] = uParam0;
    return;
}

void sub_3816(unknown uParam0)
{
    l_U1301[0] = uParam0;
    return;
}

void sub_3849(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_3880( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_3880(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_3976( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_3976( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_3976( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_3976( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_3976( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_3976( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_4553( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((NOT g_U10981[iParam0]._fU144._fU12) AND (g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_4971( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_4971( 0, 4 );
            }
        }
    }
    if (NOT (sub_5060( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3660(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3660() );
    }
    sub_14292();
    bVar27 = true;
    uVar28 = sub_4553( iParam0, iVar7 );
    uVar29 = sub_14934( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 5) || (iVar30 == 6))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_15465( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_15895();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_15980( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_16037( iParam0 );
                sub_16172( 0 );
                sub_16253( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_16358();
        }
    }
    if (bParam2)
    {
        sub_15895();
        sub_16446();
        sub_16172( 0 );
    }
    if (bParam3)
    {
        sub_15895();
        sub_16486();
        sub_16172( 0 );
        sub_16253( uVar29, 0 );
    }
    sub_16537();
    return;
}

void sub_3976(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_4553(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_4627( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_4627(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_4971(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_5060(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_5268( uParam1 );
        break;
        case 1:
        bVar8 = sub_7346( uParam1 );
        break;
        case 2:
        bVar8 = sub_7572( uParam1 );
        break;
        case 3:
        bVar8 = sub_7722( uParam1 );
        break;
        case 4:
        bVar8 = sub_8000( uParam1 );
        break;
        case 5:
        bVar8 = sub_8303( uParam1 );
        break;
        case 6:
        bVar8 = sub_8502( uParam1 );
        break;
        case 7:
        bVar8 = sub_8728( uParam1 );
        break;
        case 8:
        bVar8 = sub_8963( uParam1 );
        break;
        case 9:
        bVar8 = sub_9338( uParam1 );
        break;
        case 10:
        bVar8 = sub_9585( uParam1 );
        break;
        case 11:
        bVar8 = sub_9724( uParam1 );
        break;
        case 12:
        bVar8 = sub_10023( uParam1 );
        break;
        case 13:
        bVar8 = sub_10251( uParam1 );
        break;
        case 14:
        bVar8 = sub_10538( uParam1 );
        break;
        case 15:
        bVar8 = sub_10820( uParam1 );
        break;
        case 16:
        bVar8 = sub_11102( uParam1 );
        break;
        case 17:
        bVar8 = sub_11303( uParam1 );
        break;
        case 18:
        bVar8 = sub_11376( uParam1 );
        break;
        case 19:
        bVar8 = sub_11590( uParam1 );
        break;
        case 20:
        bVar8 = sub_11843( uParam1 );
        break;
        case 21:
        bVar8 = sub_12090( uParam1 );
        break;
        case 22:
        bVar8 = sub_12291( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_6951( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_4553( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_12614( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_5268(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_5547( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_5547( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_5547( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_5547( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_5547( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_5547( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_5547( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_5547( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_5547( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_5547( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_5547( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_5547( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_5547( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_5547( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_5547( iVar3, 0, sub_6829(), sub_7095(), 0, 0 );
        break;
        default:
        sub_7254( "Friend 1", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Friend 1", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_5547(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_5558( uParam1 );
    sub_5732( uParam0, 0, uParam2 );
    sub_5732( uParam0, 1, uParam3 );
    sub_5732( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_3732();
    return;
}

void sub_5558(unknown uParam0)
{
    ADD_SCORE( sub_3660(), uParam0 );
    sub_5583( uParam0 );
    return;
}

void sub_5583(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_4627( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_5732(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_5889( uParam0 );
    }
    return;
}

void sub_5889(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if (((((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_6829()
{
    switch (l_U1301[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6951( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_6951(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_7095()
{
    switch (l_U1301[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6951( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_7254(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_7346(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5547( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_7254( "Contact 2", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 2", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7572(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5547( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_7254( "Girl 3", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Girl 3", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7722(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_5547( iVar3, 0, sub_6829(), sub_7095(), 0, 0 );
        break;
        default:
        sub_7254( "Friend 4", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Friend 4", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8000(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5547( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5547( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5547( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5547( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_7254( "Contact 5", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 5", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8303(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_7254( "Contact 7", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 7", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8502(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5547( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_7254( "Contact 7b", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 7b", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8728(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_5547( iVar3, 0, sub_6829(), sub_7095(), 0, 0 );
        break;
        default:
        sub_7254( "Friend 8", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Friend 8", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8963(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_5547( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_5547( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_5547( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_5547( iVar3, 0, sub_6829(), sub_7095(), 0, 0 );
        break;
        default:
        sub_7254( "Friend 9", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Friend 9", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9338(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_5547( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_5547( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_7254( "Contact 10", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_7254( "Contact 10", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9585(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_7254( "Girl 11", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Girl 11", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9724(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5547( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5547( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5547( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5547( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_5547( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_7254( "Contact 12", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 12", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10023(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5547( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_7254( "Contact 13", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 13", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10251(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_5547( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_5547( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_5547( iVar3, 0, sub_6829(), sub_7095(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_7254( "Friend 15", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Friend 15", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10538(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5547( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5547( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5547( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_7254( "Contact 16", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 16", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10820(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5547( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5547( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_5547( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_7254( "Contact 18", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 18", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11102(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_7254( "Contact 19", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 19", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11303(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_7254( "Girl 20", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11376(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_7254( "Contact 21", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 21", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11590(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5547( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5547( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_7254( "Contact 22", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 22", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11843(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5547( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5547( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5547( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_7254( "Contact 24", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 24", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12090(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5547( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5547( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_7254( "Contact 25", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7254( "Contact 25", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12291(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_5547( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_7254( "Girl 26", 1 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_7254( "Girl 26", 0 );
        sub_5547( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_12614(int iParam0, int iParam1)
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
    if (sub_12662( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_13393( iParam1 );
    }
    return;
}

int sub_12662(int iParam0, int iParam1)
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
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_12802( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_12802(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_12984( 0 );
    return;
}

void sub_12984(boolean bParam0)
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
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
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
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_13239();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_13239()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_13393(int iParam0)
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
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_13726( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_13726( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_13726( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_13726( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_13726( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_13726( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_13726( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_13726( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_13726( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_13726( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_13726( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_13726( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_13726( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_13726( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_13726( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_13726( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_13726( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_13726( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_13726( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_13726(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_14292()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_14330( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_14330( 1, g_U569[I] )) != 0)
            {
                sub_14616( I );
            }
        }
    }
    if (NOT sub_14782())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_14330(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_14616(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_14701( g_U569 - 1 );
    return;
}

void sub_14701(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_14782()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_14330( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_14934(unknown uParam0)
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
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_4627( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_15465(unknown uParam0, unknown uParam1)
{
    sub_15484( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_15484(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_15895()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_15980(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_16037(unknown uParam0)
{
    sub_16046();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_16046()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_16172(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_16253(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_16358()
{
    sub_16367();
    return;
}

void sub_16367()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_16446()
{
    sub_16367();
    return;
}

void sub_16486()
{
    sub_16367();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_16537()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_16559();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_16559()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_16688(unknown uParam0, unknown uParam1)
{
    int iVar4;
    unknown uVar5;
    int I;
    int iVar7;

    if (g_U0)
    {
        return;
    }
    iVar4 = 3;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        iVar4 = 0;
        break;
        case 7: return;
        case 8:
        iVar4 = 1;
        break;
        case 13:
        iVar4 = 2;
        break;
        default: return;
    }
    switch (uParam1)
    {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 11:
        case 12:
        case 13: break;
        case 10: return;
    }
    return;
    uVar5 = uParam1;
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64831[iVar4]._fU0), uVar5 )))
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64831[iVar4]._fU4), uVar5 ))
    {
        return;
    }
    SET_BIT( 1, uVar5 );
    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        if (IS_BIT_SET( ProtectedGet(g_U64831[iVar4]._fU0), I ))
        {
            if (NOT (IS_BIT_SET( ProtectedGet(g_U64831[iVar4]._fU4), I )))
            {
                return;
            }
        }
    }
    iVar7 = 0;
    if (NOT g_U64821[iVar4]._fU0)
    {
        iVar7 = ProtectedGet(g_U64838[iVar4]._fU8);
        if (iVar7 > 0)
        {
            sub_12802( 3, iVar7 );
            g_U64821[iVar4]._fU0 = 1;
            sub_17151( uParam0 );
            return;
        }
    }
    return;
    break;
    2;
    1;
    ref g_U64831[iVar4]._fU4;
    1;
    ref g_U64831[iVar4]._fU4;
    break;
}

void sub_17151(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        PRINT_HELP( "FRDOK_J" );
        break;
        case 8:
        PRINT_HELP( "FRDOK_B" );
        break;
        case 13:
        PRINT_HELP( "FRDOK_P" );
        break;
    }
    return;
}

void sub_17302()
{
    sub_17321( l_U371, l_U1307 );
    sub_18983( l_U195 );
    sub_20694();
    sub_21784();
    sub_24113();
    sub_24414( 0, 6, l_U330 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_17321(boolean bParam0, unknown uParam1)
{
    int I;
    int[14] iVar5;
    boolean bVar20;
    boolean bVar21;
    unknown uVar22;

    if (g_U813)
    {
        return;
    }
    switch (uParam1)
    {
        case 4:
        case 5: return;
    }
    if (l_U897 == 0)
    {
        return;
    }
    I = 0;
    array(ref iVar5, 14);
    for ( I = 0; I < 14; I++ )
    {
        iVar5[I] = 0;
    }
    iVar5[l_U879] = 1;
    bVar20 = false;
    for ( I = 0; I < l_U897; I++ )
    {
        bVar20 = iVar5[l_U890[I]._fU0];
        sub_17476( I, bVar20 );
        iVar5[l_U890[I]._fU0] = 1;
    }
    if (IS_PLAYER_PLAYING( sub_3660() ))
    {
        if (bParam0)
        {
            sub_18467( l_U927, 1, 1 );
        }
    }
    if (l_U897 == 3)
    {
        sub_18467( l_U927, 1, 1 );
    }
    if ((l_U897 == 3) AND (bParam0))
    {
        bVar21 = true;
        for ( I = 0; I < 14; I++ )
        {
            iVar5[I] = 0;
        }
        iVar5[l_U879] = 1;
        for ( I = 0; I < l_U897; I++ )
        {
            bVar20 = iVar5[l_U890[I]._fU0];
            if (bVar20)
            {
                bVar21 = false;
            }
            iVar5[l_U890[I]._fU0] = 1;
        }
        if (bVar21)
        {
            sub_18467( l_U927, 1, 1 );
        }
    }
    uVar22 = sub_14934( l_U927 );
    for ( I = 0; I < l_U897; I++ )
    {
        sub_16688( uVar22, l_U890[I]._fU0 );
    }
    if (l_U911)
    {
        g_U22274[uVar22]._fU172 = 1;
    }
    return;
}

void sub_17476(int iParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;

    if (iParam0 >= l_U897)
    {
        SCRIPT_ASSERT( "Store_Like_For_Alternative_Activity: array pos greater than max activities performed" );
        return;
    }
    uVar4 = l_U890[iParam0]._fU0;
    uVar5 = l_U890[iParam0]._fU4;
    iVar6 = 4;
    switch (uVar4)
    {
        case 6:
        iVar6 = sub_17691( uVar5 );
        break;
        case 7:
        iVar6 = sub_17771( uVar5 );
        break;
        case 8:
        iVar6 = sub_17843( uVar5 );
        break;
        case 11:
        iVar6 = sub_17915( uVar5 );
        break;
        case 12:
        iVar6 = sub_17995( uVar5 );
        break;
        case 13:
        iVar6 = sub_18071( uVar5 );
        break;
        case 5:
        iVar6 = sub_18155( uVar5 );
        break;
        default: SCRIPT_ASSERT( "Store_Like_For_Alternative_Activity: Unknown phone activity ID" );
    }
    uVar7 = sub_18309( iVar6, uParam1 );
    sub_18467( l_U927, 1, uVar7 );
    return;
}

int sub_17691(unknown uParam0)
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

int sub_17771(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 1: return 2;
    }
    return 4;
}

int sub_17843(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 1: return 2;
    }
    return 4;
}

int sub_17915(unknown uParam0)
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

int sub_17995(unknown uParam0)
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

int sub_18071(unknown uParam0)
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

int sub_18155(unknown uParam0)
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

int sub_18309(unknown uParam0, boolean bParam1)
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

void sub_18467(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_5889( uParam0 );
    }
    return;
}

void sub_18983(unknown uParam0)
{
    int iVar3;

    if (l_U907)
    {
        SET_CAM_ACTIVE( l_U908, 0 );
        SET_CAM_PROPAGATE( l_U908, 0 );
        DESTROY_ALL_CAMS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        iVar3 = 0;
        END_CAM_COMMANDS( ref iVar3 );
        if (NOT (iVar3 == 0))
        {
            SCRIPT_ASSERT( "Camera Scopes should now be 0 when ending camera use" );
        }
        l_U907 = 0;
    }
    if (l_U910)
    {
        sub_19146( uParam0, 1 );
    }
    g_U9212 = 1;
    g_U9347 = 1;
    sub_20333( l_U879 );
    sub_20619( l_U927 );
    if (l_U904)
    {
        g_U9210 = l_U903;
    }
    return;
}

void sub_19146(unknown uParam0, unknown uParam1)
{
    if ((uParam1) AND (g_U9202))
    {
        sub_19169( 6 );
    }
    else
    {
        sub_19169( 0 );
    }
    sub_19438( sub_1591(), 0 );
    sub_19438( uParam0, 0 );
    g_U9202 = 0;
    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return;
    }
    sub_20222();
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SET_PED_IS_DRUNK( uParam0, 0 );
    }
    return;
}

void sub_19169(unknown uParam0)
{
    unknown uVar3;

    GET_ROOT_CAM( ref uVar3 );
    switch (uParam0)
    {
        case 0:
        SET_DRUNK_CAM( uVar3, 0.00000000, 0 );
        break;
        case 1:
        SET_DRUNK_CAM( uVar3, 0.20000000, 300000 );
        break;
        case 2:
        SET_DRUNK_CAM( uVar3, 0.30000000, 240000 );
        break;
        case 3:
        SET_DRUNK_CAM( uVar3, 0.45000000, 210000 );
        break;
        case 4:
        SET_DRUNK_CAM( uVar3, 0.60000000, 180000 );
        break;
        case 5:
        SET_DRUNK_CAM( uVar3, 0.70000000, 180000 );
        break;
        case 6:
        SET_DRUNK_CAM( uVar3, 0.00000000, 55536 );
        break;
    }
    return;
}

void sub_19438(unknown uParam0, unknown uParam1)
{
    int Result;

    Result = sub_19449( uParam1 );
    if (Result == 0)
    {
        sub_19581( uParam0 );
        return Result;
    }
    sub_19758( uParam0, Result );
    return Result;
}

int sub_19449(unknown uParam0)
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

void sub_19581(int iParam0)
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

    if (IS_CHAR_INJURED( iParam0 ))
    {
        return;
    }
    if (NOT (IS_PED_RAGDOLL( iParam0 )))
    {
        return;
    }
    iVar3 = 0;
    if (iParam0 == sub_1591())
    {
        iVar3 = 1;
    }
    uVar4 = {sub_19646( iVar3 )};
    if (uVar4._fU20)
    {
        return;
    }
    CREATE_NM_MESSAGE( 0, 79 );
    SEND_NM_MESSAGE( iParam0 );
    SWITCH_PED_TO_ANIMATED( iParam0, 0 );
    return;
}

void sub_19646(boolean bParam0)
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

    if (bParam0)
    {
        Result = {l_U856};
    }
    else
    {
        Result = {l_U865};
    }
    return Result;
}

void sub_19758(int iParam0, unknown uParam1)
{
    int iVar4;

    if (IS_CHAR_INJURED( iParam0 ))
    {
        return;
    }
    iVar4 = uParam1;
    if (iVar4 > 65534)
    {
        iVar4 = 65534;
    }
    SWITCH_PED_TO_RAGDOLL( iParam0, 0, iVar4, 1, 1, 1, 0 );
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
    SEND_NM_MESSAGE( iParam0 );
    if (iParam0 == sub_1591())
    {
        GIVE_PLAYER_RAGDOLL_CONTROL( sub_3660(), 1 );
    }
    return;
}

void sub_20222()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar2 );
        SET_VEHICLE_STEER_BIAS( uVar2, 0.00000000 );
    }
    return;
}

void sub_20333(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 59; I++ )
    {
        if (sub_20361( I ))
        {
            if (DOES_BLIP_EXIST( g_U10856[I]._fU4 ))
            {
                sub_20544( ref g_U10856[I]._fU4 );
            }
        }
    }
    return;
}

int sub_20361(int iParam0)
{
    boolean bVar3;
    int iVar4;
    unknown uVar5;

    bVar3 = false;
    iVar4 = 0;
    switch (g_U10324[iParam0]._fU12)
    {
        case 8:
        bVar3 = true;
        break;
        case 5: return 1;
    }
    return 0;
    if (bVar3)
    {
        uVar5 = g_U10324[iParam0]._fU16;
        switch (uVar5)
        {
            case 16:
            case 11: return 0;
        }
        if ((iParam0 == 2) || (iParam0 == 29))
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

void sub_20544(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_20619(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        SET_ROMANS_MOOD( 0 );
        break;
        default:
    }
    return;
}

void sub_20694()
{
    sub_20703();
    sub_20775();
    sub_20816();
    sub_20846( 0 );
    REMOVE_DECISION_MAKER( l_U127 );
    REMOVE_ANIMS( ref l_U167._fU0 );
    l_U108 = 0;
    if ((NOT (l_U195 == nil)) AND (NOT (IS_CHAR_DEAD( l_U195 ))))
    {
        if (IS_GROUP_MEMBER( l_U195, sub_21613() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U195 );
        }
        if (IS_CHAR_INJURED( l_U195 ))
        {
            SET_PED_DIES_WHEN_INJURED( l_U195, 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U195 );
        }
        else
        {
            DELETE_CHAR( ref l_U195 );
        }
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    return;
}

void sub_20703()
{
    sub_20716( ref l_U196 );
    return;
}

void sub_20716(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_20775()
{
    REMOVE_BLIP( l_U107 );
    l_U124 = 0;
    l_U125 = 0;
    return;
}

void sub_20816()
{
    REMOVE_BLIP( l_U203 );
    return;
}

void sub_20846(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_20857( uParam0 ) );
    return;
}

int sub_20857(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_4627( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_21613()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_21784()
{
    sub_21793();
    sub_22290();
    return;
}

void sub_21793()
{
    int iVar2;

    if (l_U339)
    {
        DELETE_WIDGET_GROUP( l_U340 );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U336 );
    if (l_U335)
    {
        SET_CAM_ACTIVE( l_U331[1], 0 );
        SET_CAM_PROPAGATE( l_U331[1], 0 );
        sub_21877();
    }
    if (IS_PLAYER_PLAYING( sub_3660() ))
    {
        SET_PLAYER_CONTROL( sub_3660(), 1 );
    }
    CLEAR_HELP();
    sub_21972();
    iVar2 = 0;
    sub_22142( iVar2 );
    return;
}

void sub_21877()
{
    int iVar2;

    DESTROY_ALL_CAMS();
    SET_USE_HIGHDOF( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    iVar2 = 0;
    END_CAM_COMMANDS( ref iVar2 );
    l_U335 = 0;
    return;
}

void sub_21972()
{
    int I;

    g_U32898._fU0 = 54;
    g_U32898._fU4 = 9;
    g_U32898._fU8 = 9;
    g_U32898._fU12 = 9;
    g_U32898._fU16 = 8;
    g_U32898._fU20 = 8;
    g_U32898._fU24 = 0;
    g_U32898._fU28 = 0;
    g_U32898._fU32 = 0;
    g_U32898._fU72 = 0;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        g_U32898._fU36[I] = 0;
    }
    return;
}

void sub_22142(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 4) AND (g_U8392 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_22290()
{
    sub_22301( 4, 0 );
    return;
}

void sub_22301(unknown uParam0, unknown uParam1)
{
    g_U10133._fU84[uParam0] = uParam1;
    sub_22325();
    return;
}

void sub_22325()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_22353( 13 );
        if ((sub_22398( 13, iVar3 )) AND (g_U9932[g_U9999[I]._fU0]._fU0))
        {
            sub_22499( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_20544( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_22353( 11 );
        if ((sub_22398( 11, iVar3 )) AND (g_U9932[g_U10090[I]._fU0]._fU0))
        {
            sub_22499( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_20544( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_22831( I );
        if ((sub_22398( g_U10324[I]._fU12, iVar3 )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            sub_22499( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_23139( I );
        }
        else
        {
            sub_20544( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_23368();
    return;
}

int sub_22353(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_22398(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U10133._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_22499(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U0 );
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

int sub_22831(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_22873( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_22353( g_U10324[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U10978)
    {
        uVar3 = g_U10324[uParam0]._fU12;
        if (g_U10133._fU0[uVar3])
        {
            if (g_U10324[uParam0]._fU24 == 1)
            {
                if (g_U9937 == g_U10324[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_22873(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_23139(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_23368()
{
    int I;
    boolean bVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int iVar12;

    I = 0;
    bVar3 = sub_22353( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_23413( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_22353( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_23413( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((sub_22831( I )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 59; I++ )
    {
        bVar3 = sub_22831( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U9937 == g_U10324[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_23413( g_U10324[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar3 = false;
        if (g_U9943[I]._fU0)
        {
            if (g_U9937 == g_U9943[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_23413( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_1591() )))
        {
            GET_CHAR_COORDINATES( sub_1591(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_23904( uVar7, g_U9943[I]._fU8 );
                    if (fVar11 < fVar10)
                    {
                        fVar10 = fVar11;
                        iVar12 = I;
                    }
                }
            }
        }
        if (NOT (iVar12 == -1))
        {
            for ( I = 0; I < 5; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_23413( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_23413(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 0 );
    }
    else
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 1 );
    }
    return;
}

void sub_23904(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_24113()
{
    sub_24122();
    return;
}

void sub_24122()
{
    sub_24131();
    return;
}

void sub_24131()
{
    g_U10978 = 0;
    if (g_U813)
    {
        sub_24156();
        return;
    }
    sub_24271();
    return;
}

void sub_24156()
{
    if (COMPARE_STRING( ref g_U9926, "FPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_24201();
    return;
}

void sub_24201()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_24271()
{
    if (COMPARE_STRING( ref g_U9926, "FPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_24316();
    return;
}

void sub_24316()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_24414(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;

    if (g_U813)
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
    g_U22274[uParam0]._fU152 = iVar7 + iVar5;
    g_U22274[uParam0]._fU156 = iVar7 + iVar6;
    if (bParam2)
    {
        g_U22274[uParam0]._fU148 = uParam1;
        return;
    }
    g_U22274[uParam0]._fU148 = 14;
    return;
}

void sub_24632()
{
    int iVar2;

    PRINTSTRING( ".................... ROMAN DARTS FAILED" );
    iVar2 = 0;
    switch (l_U329)
    {
        case 0:
        iVar2 = sub_24758( l_U195 );
        sub_24839( iVar2, l_U195 );
        break;
        case 1:
        PRINTSTRING( ".......................(friend dead during Darts)\n" );
        iVar2 = 0;
        sub_24839( iVar2, l_U195 );
        break;
        case 2:
        PRINTSTRING( ".......................(friend killed by player during Darts)\n" );
        iVar2 = 1;
        sub_24839( iVar2, l_U195 );
        break;
        case 7:
        sub_30627( l_U195, 0 );
        break;
        case 11:
        PRINTSTRING( ".......................(forced failure)\n" );
        break;
        case 12:
        sub_33339( "Unknown reason for failure" );
        break;
        default: sub_33339( "Unrecognised Fail ID" );
    }
    PRINTNL();
    sub_33540( iVar2 );
    sub_17302();
    return;
}

void sub_24758(unknown uParam0)
{
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_1591() )))
        {
            Result = HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_1591(), 0 );
        }
    }
    return Result;
}

void sub_24839(unknown uParam0, unknown uParam1)
{
    sub_24852( uParam0, uParam1 );
    return;
}

void sub_24852(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 0;
    iVar5 = 0;
    sub_24871( iVar4, uParam1 );
    if (bParam0)
    {
        sub_30122( iVar5 );
    }
    return;
}

void sub_24871(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    if (NOT g_U22274[uParam0]._fU500._fU0)
    {
        return;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return;
    }
    uVar4 = sub_24933( uParam0 );
    if (g_U13391[uVar4]._fU80._fU0 == 1)
    {
        sub_25330( uVar4 );
    }
    if (g_U13391[uVar4]._fU0._fU0 == 1)
    {
        sub_29582( uVar4 );
    }
    if (g_U13391[uVar4]._fU160._fU0)
    {
        if (g_U13391[uVar4]._fU160._fU8)
        {
            g_U15946[uParam0]._fU8[0]._fU0[3] = 0;
        }
        g_U13391[uVar4]._fU160._fU108._fU0 = 0;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U22274[uParam0]._fU500._fU4 = 1;
    g_U22274[uParam0]._fU500._fU168 = iVar5 + g_U22274[uParam0]._fU500._fU164;
    g_U22274[uParam0]._fU500._fU184 = uParam1;
    sub_30088( "CONTACT HOSPITALISED\n" );
    return;
}

int sub_24933(unknown uParam0)
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
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 22: return 20;
        case 20: return 21;
        case 21: return 22;
    }
    sub_4627( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

void sub_25330(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU80._fU0 = 0;
        sub_25451( uParam0 );
        sub_27731( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_28019( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU80._fU0 = 6;
        sub_28019( uParam0, iVar4 );
        break;
        case 6:
        sub_28019( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_28468( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_4627( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_25451(unknown uParam0)
{
    if ((NOT (g_U13391[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU80._fU0 == 1)))
    {
        sub_25508( uParam0 );
        sub_25654( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_25508( uParam0 );
        sub_25844( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 0)
    {
        sub_25654( uParam0 );
    }
    if ((NOT (g_U13391[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU0._fU0 == 1)))
    {
        sub_25508( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_26967( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_25508( uParam0 );
    }
    return;
}

void sub_25508(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
    g_U13391[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU0._fU68;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_25654(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
    g_U13391[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU80._fU68;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_25844(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_25654( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU80._fU4;
        iVar8 = sub_4553( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU80._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_4627( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U1 );
        if ((NOT g_U32896._fU4) || (NOT g_U13391[uParam0]._fU80._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U13391[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U2 );
        sub_26522( g_U13391[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

void sub_26522(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 1:
        sub_26614( ref uParam0, 827.41800000, -288.99640000, 14.75330000, 179.76500000 );
        break;
        case 17:
        sub_26614( ref uParam0, -150.38910000, -795.66570000, 4.20110000, 271.69380000 );
        break;
        case 18:
        sub_26614( ref uParam0, -160.31520000, -796.40800000, 5.20610000, 270.00000000 );
        break;
        case 24:
        sub_26614( ref uParam0, -126.75380000, -263.66190000, 11.56380000, 0.00000000 );
        break;
        case 29:
        sub_26614( ref uParam0, -905.43880000, 908.73140000, 12.59760000, 0.74970000 );
        break;
        case 32:
        sub_26614( ref uParam0, 341.41760000, -454.50700000, 3.60780000, 0.74970000 );
        break;
    }
    return;
}

void sub_26614(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_26967(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_25508( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU0._fU4;
        iVar8 = sub_4553( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU0._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_4627( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U1 );
        if ((NOT g_U32896._fU4) || (NOT g_U13391[uParam0]._fU0._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U2 );
        if (l_U955)
        {
            FLASH_BLIP( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U955 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U955 = 1;
        }
        sub_26522( g_U13391[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_27731(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
        }
    }
    g_U13391[uParam0]._fU80._fU0 = 0;
    g_U13391[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU80._fU24, "", 32 );
    g_U13391[uParam0]._fU80._fU56 = 10;
    g_U13391[uParam0]._fU80._fU60 = nil;
    g_U13391[uParam0]._fU80._fU64 = nil;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U13391[uParam0]._fU80._fU72 = 1;
    g_U13391[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_28019(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU80._fU24 );
        sub_27731( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU0._fU24 );
    sub_28157( uParam0, 0 );;
    sub_25451( uParam0 );
    return;
}

void sub_28157(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
        }
    }
    g_U13391[uParam0]._fU0._fU0 = 0;
    g_U13391[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU0._fU24, "", 32 );
    g_U13391[uParam0]._fU0._fU56 = 10;
    g_U13391[uParam0]._fU0._fU60 = nil;
    g_U13391[uParam0]._fU0._fU64 = nil;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U13391[uParam0]._fU0._fU72 = 1;
    g_U13391[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_28468(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U13391[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U13391[iParam0]._fU80._fU60 );
        }
        sub_27731( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U13391[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U13391[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U13391[iParam0]._fU0._fU56;
    if ((iVar5 == 5) || (iVar5 == 6))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U10981[iParam0]._fU28 = 1;
    }
    sub_28157( iParam0, 0 );
    if (bVar4)
    {
        sub_28677();
    }
    g_U10981[iParam0]._fU12 = 0;;
    if (iParam0 == 23)
    {
        sub_28733();
        return;
    }
    sub_25451( iParam0 );
    if (bVar4)
    {
        g_U10978 = 0;
    }
    if (bVar4)
    {
        sub_29380( iParam0 );
    }
    if (g_U2)
    {
        if (g_U3)
        {
            WAIT( 1500 );
            g_U4 = 1;
        }
    }
    return;
}

void sub_28677()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_28733()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_3660() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
        {
            if (NOT (g_U15936._fU24 == -1))
            {
                uVar3 = g_U32697[g_U15936._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_1591(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15936._fU24;
    sub_28845();
    if (bVar2)
    {
        g_U15936._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref g_U15936._fU32 );
        g_U15936._fU24 = uVar4;
    }
    l_U954 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_3660(), 0 );
    sub_29000();
    if (IS_PLAYER_PLAYING( sub_3660() ))
    {
        SET_PLAYER_CONTROL( sub_3660(), 1 );
    }
    return;
}

void sub_28845()
{
    g_U15936._fU0 = 0;
    g_U15936._fU4 = 0;
    g_U15936._fU8 = 0;
    g_U15936._fU12 = 0;
    g_U15936._fU16 = 0;
    g_U15936._fU20 = 0;
    g_U15936._fU24 = -1;
    g_U15936._fU32 = nil;
    g_U15936._fU28 = 0;
    return;
}

void sub_29000()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3660() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_1591() ))
    {
        l_U954 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_3660(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_1591() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_1591(), 837858166 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_1591(), -488123221 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15936._fU20)
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
        if (l_U954)
        {
            return;
        }
        l_U954 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_3660(), 1 );
    }
    else if (NOT l_U954)
    {
        return;
    }
    l_U954 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_3660(), 0 );;
    return;
}

void sub_29380(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_29582(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU0._fU0 = 0;
        sub_25451( uParam0 );
        sub_28157( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_28019( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_28019( uParam0, iVar4 );
        break;
        case 6:
        sub_28019( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_28468( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_4627( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_30088(unknown uParam0)
{
    return;
}

void sub_30122(unknown uParam0)
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
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        sub_5547( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_3976( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_30627(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = g_U22274[uParam1]._fU104;
    uVar5 = g_U22274[uParam1]._fU136;
    sub_30672( uVar4 );
    sub_30778( uVar4, uParam1, uVar5, 0 );
    uVar6 = sub_24933( uParam1 );
    sub_33039( uVar6 );
    return;
}

void sub_30672(unknown uParam0)
{
    g_U63988._fU12[uParam0]._fU0 = 0;
    g_U63988._fU12[uParam0]._fU4 = 0;
    g_U63988._fU12[uParam0]._fU12 = 57;
    g_U63988._fU12[uParam0]._fU16 = 0;
    g_U63988._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_30778(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    sub_30800( uParam0, uParam1, uParam2, uParam3, iVar6 );
    return;
}

void sub_30800(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_30912( uParam1, uParam2 );
        return;
    }
    if (g_U63988._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar8 = 0;
    GET_GAME_TIMER( ref iVar8 );
    g_U63988._fU12[iParam0]._fU0 = 1;
    g_U63988._fU12[iParam0]._fU4 = 0;
    g_U63988._fU12[iParam0]._fU8 = 0;
    g_U63988._fU12[iParam0]._fU12 = uParam1;
    g_U63988._fU12[iParam0]._fU16 = uParam2;
    g_U63988._fU12[iParam0]._fU20 = iVar8 + iParam3;
    g_U63988._fU12[iParam0]._fU28 = uParam4;
    sub_32846( iParam0, iParam3 );
    return;
}

void sub_30912(unknown uParam0, unknown uParam1)
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
    uVar11 = sub_30935( uParam0 );
    sub_31426( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_31770( ref uVar4, 1 );
    sub_31798( ref uVar4, 0 );
    sub_31826( ref uVar4, 2 );
    sub_31856( ref uVar4 );
    return;
}

int sub_30935(unknown uParam0)
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
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 22: return 22;
        case 20: return 20;
        case 28: return 28;
        case 29: return 29;
        case 30: return 30;
        case 31: return 31;
        case 32: return 32;
        case 34: return 81;
        case 25: return 25;
    }
    sub_4627( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_31426(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_31448( uParam0, 0, iParam4 + 0 );
    sub_31448( uParam1, 1, iParam4 + 0 );
    sub_31448( uParam2, 2, iParam4 + 0 );
    sub_31448( uParam3, 3, iParam4 + 0 );
    sub_31448( 0, 4, iParam4 + 0 );
    sub_31448( 1, 5, iParam4 + 0 );
    sub_31448( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_31448(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_31770(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_31798(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_31826(int iParam0, unknown uParam1)
{
    sub_31448( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_31856(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_31926())
        {
            sub_14616( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_32053( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_14616( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_14330( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_14330( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_31926()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_14330( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_14616( I );
            return 1;
        }
    }
    return 0;
}

int sub_32053(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_32118( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_32118(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_14330( 0, uParam0 );
        if (iVar14 == (sub_14330( 0, uParam6 )))
        {
            iVar15 = sub_14330( 3, uParam0 );
            if (iVar15 == (sub_14330( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_32846(unknown uParam0, int iParam1)
{
    g_U63988._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_32885( iParam1 ))
    {
        g_U63988._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_32885(int iParam0)
{
    int iVar3;

    iVar3 = sub_16559();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_32915();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_32915()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_33039(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0:
        case 7:
        iVar3 = -10;
        break;
        case 3:
        iVar3 = -10;
        break;
        case 8:
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_4627( "Flow_Friend_Left_Behind_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_18467( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_18467( uParam0, 0, iVar4 );
    return;
}

void sub_33339(unknown uParam0)
{
    sub_33373( "ERROR: ROMAN DARTS: ", uParam0 );
    return;
}

void sub_33373(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "ERROR: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_33540(boolean bParam0)
{
    switch (l_U329)
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
        PRINT_NOW( "FAFLEFT", 7000, 1 );
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

void sub_34085()
{
    l_U343 = 0;
    if (NOT (sub_34106( 0, l_U195 )))
    {
        return;
    }
    if (NOT l_U328)
    {
        sub_45753();
    }
    sub_21972();
    sub_47304( 0, 1 );
    sub_47601( 0 );
    return;
}

int sub_34106(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    if (l_U325 == 0)
    {
        l_U395 = iVar4 + 3000;
        l_U396 = 0;
        l_U325++;
    }
    if (NOT (iParam1 == nil))
    {
        if (IS_CHAR_INJURED( iParam1 ))
        {
            l_U328 = 1;
            l_U329 = 0;
            g_U15946[uParam0]._fU8[0]._fU0[2] = 0;
            return 1;
        }
    }
    if (NOT l_U396)
    {
        if (l_U395 < iVar4)
        {
            l_U396 = sub_34256( uParam0 );
            if (NOT l_U396)
            {
                l_U395 = iVar4 + 3000;
            }
        }
    }
    if (l_U325 == 1)
    {
        if (sub_34801( uParam0 ))
        {
            l_U325 = 99;
        }
    }
    if (l_U325 == 99)
    {
        l_U324 = 2;
        l_U325 = 0;
        sub_45329( uParam0 );
        g_U15946[uParam0]._fU8[0]._fU0[2] = 0;
        if (NOT (IS_CHAR_DEAD( sub_1591() )))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1591(), 0 );
        }
        return 1;
    }
    return 0;
}

int sub_34256(unknown uParam0)
{
    if ((g_U9196) AND (g_U9198))
    {
        return 1;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return 1;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return 0;
    }
    if (NOT g_U9196)
    {
        if (g_U22274[uParam0]._fU144 == 10)
        {
            return 1;
        }
        sub_34366( uParam0 );
        g_U9196 = 1;
        return 1;
    }
    if (NOT g_U9198)
    {
        sub_34565( uParam0 );
        g_U9198 = 1;
        return 1;
    }
    return 1;
}

void sub_34366(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRPICKR" );
        break;
        case 3:
        PRINT_HELP( "FRPICKJ" );
        break;
        case 7:
        PRINT_HELP( "FRPICKD" );
        break;
        case 8:
        PRINT_HELP( "FRPICKB" );
        break;
        case 13:
        PRINT_HELP( "FRPICKP" );
        break;
    }
    return;
}

void sub_34565(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRQUITR" );
        break;
        case 3:
        PRINT_HELP( "FRQUITJ" );
        break;
        case 7:
        PRINT_HELP( "FRQUITD" );
        break;
        case 8:
        PRINT_HELP( "FRQUITB" );
        break;
        case 13:
        PRINT_HELP( "FRQUITP" );
        break;
    }
    return;
}

int sub_34801(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return sub_34859();
        case 3: return sub_44994();
        case 7: return sub_45028();
        case 8: return sub_45062();
        case 13: return sub_45096();
    }
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Not a friend" );
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Should never reach here" );
    return 0;
}

void sub_34859()
{
    return sub_34877( 0, ref l_U195, ref l_U196 );
}

int sub_34877(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_3660() )))
    {
        return 0;
    }
    sub_34910( uParam0 );
    sub_34945();
    sub_35267( (uParam1^) );
    sub_36047();
    if (l_U102 == 0)
    {
        sub_36162( uParam0, uParam1 );
        return 0;
    }
    if (l_U102 == 1)
    {
        sub_38178( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U102 == 2)
    {
        sub_38827( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U102 == 3)
    {
        sub_40015();
        return 0;
    }
    if (l_U102 == 4)
    {
        if (sub_40372( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_3660(), 1 );
    g_U22274[uParam0]._fU20 = 1;
    return 1;
}

void sub_34910(unknown uParam0)
{
    l_U115 = g_U22274[uParam0]._fU28;
    return;
}

void sub_34945()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3660() )))
    {
        return;
    }
    if (g_U10978)
    {
        return;
    }
    if (g_U9893._fU12)
    {
        return;
    }
    if (sub_35022() < 14.00000000)
    {
        return;
    }
    if (NOT (GET_CLOSEST_CAR_NODE( l_U103._fU0, l_U103._fU4, l_U103._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 )))
    {
        return;
    }
    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    SET_CHAR_COORDINATES( sub_1591(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    return;
}

void sub_35022()
{
    vector vVar2;
    float Result;

    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return 9999.90000000;
    }
    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    GET_CHAR_COORDINATES( sub_1591(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
    GET_DISTANCE_BETWEEN_COORDS_3D( vVar2.x, vVar2.y, vVar2.z, l_U103._fU0, l_U103._fU4, l_U103._fU8, ref Result );
    return Result;
}

void sub_35267(unknown uParam0)
{
    if (COMPARE_STRING( ref l_U167._fU0, l_U166 ))
    {
        return;
    }
    if (NOT l_U167._fU96)
    {
        return;
    }
    sub_35322( uParam0 );
    l_U167._fU80 = l_U102;
    return;
}

void sub_35322(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;
    boolean bVar9;

    if (l_U102 == 0)
    {
        return;
    }
    if (NOT (HAVE_ANIMS_LOADED( ref l_U167._fU0 )))
    {
        REQUEST_ANIMS( ref l_U167._fU0 );
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
        TASK_PLAY_ANIM( uParam0, ref l_U167._fU32, ref l_U167._fU0, 8.00000000, 1, 0, 0, 0, -2 );
        l_U167._fU88 = 0;
        l_U167._fU92 = 0;
        return;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = 0;
    if ((((l_U167._fU80 == 1) AND (l_U102 == 2)) AND (NOT (COMPARE_STRING( ref l_U167._fU48, l_U166 )))) AND (NOT l_U167._fU88))
    {
        iVar7 = 1;
    }
    bVar8 = false;
    if (l_U167._fU100)
    {
        bVar9 = sub_35621();
        if (NOT bVar9)
        {
            bVar9 = IS_CHAR_ON_FOOT( sub_1591() );
        }
        if (((((l_U167._fU80 == 1) AND (l_U102 == 2)) AND (bVar9)) AND (NOT (COMPARE_STRING( ref l_U167._fU64, l_U166 )))) AND (NOT l_U167._fU92))
        {
            iVar7 = 1;
            bVar8 = true;
        }
    }
    else if (l_U102 == 1)
    {
        l_U167._fU100 = 1;
    }
    if ((iVar6 > l_U167._fU84) || (iVar7))
    {
        CLEAR_CHAR_TASKS( uParam0 );
        if (bVar8)
        {
            TASK_PLAY_ANIM( uParam0, ref l_U167._fU64, ref l_U167._fU0, 8.00000000, 0, 0, 0, 0, -2 );
            l_U167._fU100 = 0;
            l_U167._fU92 = 1;
        }
        else if (NOT (COMPARE_STRING( ref l_U167._fU48, l_U166 )))
        {
            TASK_PLAY_ANIM( uParam0, ref l_U167._fU48, ref l_U167._fU0, 8.00000000, 0, 0, 0, 0, -2 );
        }
        l_U167._fU88 = 1;
        sub_2996();
        return;
    }
    return;
}

boolean sub_35621()
{
    unknown uVar2;
    float fVar3;

    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    return fVar3 > 0.02000000;
}

void sub_36047()
{
    int iVar2;

    if (NOT l_U125)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT (iVar2 > l_U124))
    {
        return;
    }
    CHANGE_BLIP_PRIORITY( l_U107, l_U1 );
    FLASH_BLIP( l_U107, 0 );
    l_U124 = 0;
    l_U125 = 0;
    return;
}

void sub_36162(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_35022();
    if (fVar4 > 98.00000000)
    {
        return;
    }
    if ((g_U10978) || (g_U9893._fU12))
    {
        return;
    }
    if (NOT (sub_36217( uParam0 )))
    {
        sub_36256( uParam0 );
        return;
    }
    sub_36320( uParam0, uParam1, l_U103._fU0, l_U103._fU4, l_U103._fU8, l_U106 );
    SET_CHAR_DECISION_MAKER( (uParam1^), l_U127 );
    g_U22274[uParam0]._fU24 = 1;
    sub_3356( l_U157, (uParam1^), ref l_U153, 0 );
    sub_38022( uParam0, (uParam1^) );
    l_U102 = 1;
    l_U114 = 0;
    return;
}

void sub_36217(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_20857( uParam0 ) );
}

void sub_36256(unknown uParam0)
{
    REQUEST_MODEL( sub_20857( uParam0 ) );
    return;
}

void sub_36320(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_20857( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_36370( uParam0, (uParam1^) );
    return;
}

void sub_36370(unknown uParam0, unknown uParam1)
{
    sub_36382( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_36382(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_36476( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_37020( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_36476(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
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

void sub_37020(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_36476( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_36476( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_36476( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_36476( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_36476( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_36476( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_36476( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_36476( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_36476( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_36476( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_36476( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_36476( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_36476( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_38022(unknown uParam0, unknown uParam1)
{
    int iVar4;

    sub_37020( uParam1, uParam0, l_U159 );
    CLEAR_CHAR_PROP( uParam1, 0 );
    iVar4 = -1;
    if (NOT (iVar4 == l_U160))
    {
        if (l_U160 == -1)
        {
            CLEAR_CHAR_PROP( uParam1, 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( uParam1, 1, l_U160 );
        }
    }
    ENABLE_PED_HELMET( uParam1, l_U161 );
    return;
}

void sub_38178(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_35022();
    if (((fVar5 > 100.00000000) || (g_U10978)) || (g_U9893._fU12))
    {
        sub_38223( uParam1 );
        sub_20846( uParam0 );
        l_U102 = 0;
        g_U22274[uParam0]._fU24 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_1591() )))
    {
        if (sub_38307( sub_1591() ))
        {
            return;
        }
    }
    if (fVar5 < 12.00000000)
    {
        l_U102 = 2;
        if (NOT IS_HINT_RUNNING())
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
            {
                GET_CHAR_COORDINATES( (uParam1^), ref l_U162._fU0, ref l_U162._fU4, ref l_U162._fU8 );
                l_U162._fU8 += 1.50000000;
                HINT_CAM( l_U162._fU0, l_U162._fU4, l_U162._fU8, 0, 0, 0, 30000 );
            }
        }
        l_U112 = 0;
        sub_20775();
        sub_38721( (uParam1^), uParam2 );
        TASK_LOOK_AT_CHAR( (uParam1^), sub_1591(), -2, 0 );
        return;
    }
    return;
}

void sub_38223(unknown uParam0)
{
    DELETE_CHAR( uParam0 );
    (uParam0^) = nil;
    return;
}

int sub_38307(int iParam0)
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
                if (sub_38371( uVar3 ))
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

int sub_38371(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_38721(unknown uParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        return;
    }
    ADD_BLIP_FOR_CHAR( uParam0, uParam1 );
    SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
    return;
}

void sub_38827(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_35022();
    if (sub_38849( uVar4, uParam0, uParam1 ))
    {
        return;
    }
    if (sub_39021( uVar4 ))
    {
        return;
    }
    sub_39236();
    if ((sub_39330()) || (sub_39768()))
    {
        return;
    }
    return;
}

int sub_38849(float fParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    bVar5 = false;
    if (NOT (IS_CHAR_DEAD( sub_1591() )))
    {
        if (sub_38307( sub_1591() ))
        {
            bVar5 = true;
        }
    }
    if (((NOT g_U10978) AND (NOT g_U9893._fU12)) AND (NOT bVar5))
    {
        if (fParam0 <= 14.00000000)
        {
            return 0;
        }
    }
    l_U102 = 1;
    CLEAR_HELP();
    sub_20716( uParam1 );
    sub_2599( 0 );
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    TASK_CLEAR_LOOK_AT( uParam2 );
    return 1;
}

int sub_39021(float fParam0)
{
    if (fParam0 > 7.00000000)
    {
        return 0;
    }
    l_U102 = 3;
    if (NOT l_U114)
    {
        sub_39064();
    }
    if (l_U112)
    {
        if (l_U113)
        {
            PRINT_HELP_FOREVER( ref l_U128[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U128[1] );
        }
    }
    return 1;
}

int sub_39064()
{
    int iVar2;

    l_U114 = 1;
    iVar2 = IS_CHAR_IN_ANY_CAR( sub_1591() );
    if (l_U112 == iVar2)
    {
        return 0;
    }
    l_U112 = iVar2;
    l_U113 = 0;
    if (l_U112)
    {
        if (IS_CHAR_IN_ANY_HELI( sub_1591() ))
        {
            l_U113 = 1;
        }
    }
    return 1;
}

void sub_39236()
{
    if (NOT sub_39064())
    {
        return;
    }
    if (l_U112)
    {
        if (l_U113)
        {
            PRINT_HELP_FOREVER( ref l_U128[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U128[0] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_39330()
{
    unknown uVar2;
    float fVar3;
    int iVar4;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1591() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    if ((fVar3 < 0.01000000) AND (sub_39405( 1, 1 )))
    {
        if (NOT l_U113)
        {
            SET_PLAYER_CONTROL( sub_3660(), 0 );
        }
        l_U102 = 4;
        CLEAR_HELP();
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        l_U165 = iVar4 + 20000;
        return 1;
    }
    return 0;
}

int sub_39405(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1591()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3660() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3660() )))
    {
        return 0;
    }
    return 1;
}

int sub_39768()
{
    int iVar2;
    boolean bVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    bVar3 = false;
    if (((IS_CHAR_IN_ANY_CAR( sub_1591() )) AND (sub_39405( 1, 1 ))) AND (IS_PLAYER_PRESSING_HORN( sub_3660() )))
    {
        if (l_U113)
        {
            return 0;
        }
        if (l_U121 == 0)
        {
            l_U121 = iVar2 + 400;
            return 0;
        }
        if (l_U121 > iVar2)
        {
            return 0;
        }
        l_U121 = 0;
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        if (l_U121 > 0)
        {
            l_U121 = 0;
            bVar3 = true;
        }
    }
    if (bVar3)
    {
        SET_PLAYER_CONTROL( sub_3660(), 0 );
        l_U102 = 4;
        CLEAR_HELP();
        l_U165 = iVar2 + 20000;
        return 1;
    }
    return 0;
}

void sub_40015()
{
    unknown uVar2;

    uVar2 = sub_35022();
    if (sub_40033( uVar2 ))
    {
        if (l_U112)
        {
            if (l_U113)
            {
                PRINT_HELP_FOREVER( ref l_U128[2] );
            }
            else
            {
                PRINT_HELP_FOREVER( ref l_U128[0] );
            }
        }
        return;
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1591() )))
    {
        l_U102 = 4;
        return;
    }
    if ((sub_39330()) || (sub_39768()))
    {
        return;
    }
    sub_40250();
    return;
}

int sub_40033(float fParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_DEAD( sub_1591() )))
    {
        if (sub_38307( sub_1591() ))
        {
            bVar3 = true;
        }
    }
    if (((NOT g_U10978) AND (NOT g_U9893._fU12)) AND (NOT bVar3))
    {
        if (fParam0 <= 9.00000000)
        {
            return 0;
        }
    }
    l_U102 = 2;
    l_U112 = 0;
    return 1;
}

void sub_40250()
{
    if (NOT sub_39064())
    {
        return;
    }
    if (l_U112)
    {
        if (l_U113)
        {
            PRINT_HELP_FOREVER( ref l_U128[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U128[1] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_40372(unknown uParam0, unknown uParam1)
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

    bVar4 = g_U10978;
    if (NOT bVar4)
    {
        if (g_U9893._fU12)
        {
            bVar4 = true;
        }
    }
    if ((NOT l_U108) AND (bVar4))
    {
        l_U102 = 3;
        return 1;
    }
    iVar5 = 0;
    iVar6 = 0;
    if (NOT l_U108)
    {
        GET_GROUP_SIZE( sub_21613(), ref iVar5, ref iVar6 );
        if (iVar6 > 0)
        {
            if (NOT sub_40475())
            {
                sub_4627( "Check_If_Still_Joining_Group: Player has group members, but not Dwayne Backup" );
            }
            sub_40618();
            return 1;
        }
    }
    uVar7 = nil;
    iVar8 = 0;
    iVar9 = 1;
    if (NOT l_U108)
    {
        if (NOT l_U117)
        {
            iVar9 = 3;
        }
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar7 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar7, ref iVar8 );
            if ((iVar8 < iVar9) || (l_U118))
            {
                TASK_LEAVE_CAR( sub_1591(), uVar7 );
                l_U119 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( (uParam0^), 80, ref iVar10 );
        if ((NOT (iVar10 == 1)) AND (NOT (iVar10 == 7)))
        {
            return 1;
        }
        if (NOT (COMPARE_STRING( ref l_U167._fU0, l_U166 )))
        {
            CLEAR_CHAR_TASKS( (uParam0^) );
            REMOVE_ANIMS( ref l_U167._fU0 );
            l_U167._fU96 = 0;
        }
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        SET_GROUP_MEMBER( sub_21613(), (uParam0^) );
        l_U108 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        sub_40907();
        g_U10978 = 1;
    }
    iVar11 = 0;
    if ((IS_CHAR_IN_ANY_CAR( sub_1591() )) AND (NOT l_U119))
    {
        MODIFY_CHAR_MOVE_STATE( (uParam0^), 2 );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar7 );
        if (NOT (IS_CHAR_IN_CAR( (uParam0^), uVar7 )))
        {
            if (NOT (l_U165 == 0))
            {
                iVar12 = 0;
                GET_GAME_TIMER( ref iVar12 );
                if ((l_U165 < iVar12) || (NOT (IS_VEH_DRIVEABLE( uVar7 ))))
                {
                    SET_PLAYER_CONTROL( sub_3660(), 1 );
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U165 = 0;
                }
                else if (NOT (IS_GROUP_MEMBER( (uParam0^), sub_21613() )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    SET_GROUP_MEMBER( sub_21613(), (uParam0^) );
                }
            }
            else if (sub_35022() > 20.00000000)
            {
                return 0;
            }
            return 1;
        }
        if (l_U115)
        {
            sub_41491( l_U158, ref l_U141 );
            iVar11 = sub_24933( l_U158 );
            sub_42982( iVar11 );
        }
        else
        {
            sub_43195( l_U158, ref l_U141 );
        }
        sub_20716( uParam1 );
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
        return 0;
    }
    if (l_U115)
    {
        sub_44029( l_U158, ref l_U141 );
        iVar11 = sub_24933( l_U158 );
        sub_42982( iVar11 );
    }
    else
    {
        sub_44575( l_U158, ref l_U141 );
    }
    if ((IS_HINT_RUNNING()) AND (NOT l_U119))
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    return 0;
}

int sub_40475()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_40618()
{
    if (sub_40475())
    {
        g_U64921 = 1;
    }
    return;
}

void sub_40907()
{
    sub_40916();
    sub_41019( ref g_U9893._fU68 );
    sub_41068();
    return;
}

void sub_40916()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_41019(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_41068()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_14330( 1, g_U569[I] )) == 0)
        {
            sub_14616( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_14782())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

void sub_41491(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_41526( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRL", uParam1, 8, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARRL", uParam1, 8, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else
        {
            sub_41613( "FCB2_ARRL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_41613( "FCP_ARRL", uParam1, 8, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_41526(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        if (NOT g_U15654[6])
        {
            sub_41613( "FCR_ARRH", uParam1, 8, 1 );
        }
        return;
        case 3:
        sub_41613( "FCJ_ARHOSP", uParam1, 8, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRCNL", uParam1, 8, 1 );
        return;
        case 8:
        sub_41613( "FCB2_ARRCNL", uParam1, 8, 1 );
        return;
        case 13:
        sub_41613( "FCP_ARRCNL", uParam1, 8, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_41613(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_41634( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_41634(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_41688( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_41688(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_41710( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_42398( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_41710(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_41787( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_41787( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_41787( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_41787(unknown uParam0)
{
    return;
}

void sub_42398(int iParam0, int iParam1)
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

void sub_42982(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        case 7:
        iVar3 = -5;
        break;
        case 8:
        iVar3 = -10;
        break;
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_4627( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_18467( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_18467( uParam0, 0, iVar4 );
    return;
}

void sub_43195(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_41526( uParam0, uParam1 );
        return;
    }
    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        if (IS_CHAR_ON_ANY_BIKE( sub_1591() ))
        {
            sub_41613( "FCR_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1591() ))
        {
            sub_41613( "FCR_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_41613( "FCR_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 3:
        if (IS_CHAR_ON_ANY_BIKE( sub_1591() ))
        {
            sub_41613( "FCJ_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1591() ))
        {
            sub_41613( "FCJ_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_41613( "FCJ_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 7:
        if (IS_CHAR_ON_ANY_BIKE( sub_1591() ))
        {
            sub_41613( "FCD2_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1591() ))
        {
            sub_41613( "FCD2_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_41613( "FCD2_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else if (IS_CHAR_ON_ANY_BIKE( sub_1591() ))
        {
            sub_41613( "FCB2_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1591() ))
        {
            sub_41613( "FCB2_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_41613( "FCB2_ARRCNL", uParam1, 8, 1 );
        };;;
        return;
        case 13:
        if (IS_CHAR_ON_ANY_BIKE( sub_1591() ))
        {
            sub_41613( "FCP_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1591() ))
        {
            sub_41613( "FCP_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_41613( "FCP_ARRCNL", uParam1, 8, 1 );
        }
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_44029(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_44064( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRFL", uParam1, 8, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARRFL", uParam1, 8, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRFL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else
        {
            sub_41613( "FCB2_ARRFL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_41613( "FCP_ARRFL", uParam1, 8, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_44064(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRFH", uParam1, 8, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARHOSPF", uParam1, 8, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRNL", uParam1, 8, 1 );
        return;
        case 8:
        sub_41613( "FCB2_ARRNL", uParam1, 8, 1 );
        return;
        case 13:
        sub_41613( "FCP_ARRFNL", uParam1, 8, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_44575(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_44064( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRFNL", uParam1, 8, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARRFNL", uParam1, 8, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRNL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else
        {
            sub_41613( "FCB2_ARRNL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_41613( "FCP_ARRFNL", uParam1, 8, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_44994()
{
    return sub_34877( 3, ref l_U267, ref l_U268 );
}

void sub_45028()
{
    return sub_34877( 7, ref l_U305, ref l_U306 );
}

void sub_45062()
{
    return sub_34877( 8, ref l_U276, ref l_U277 );
}

void sub_45096()
{
    return sub_34877( 13, ref l_U314, ref l_U315 );
}

void sub_45329(unknown uParam0)
{
    if (g_U9197)
    {
        return;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return;
    }
    if (NOT g_U9197)
    {
        if (sub_45389( uParam0 ))
        {
            g_U9197 = 1;
        }
        return;
    }
    return;
}

int sub_45389(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRLOCR" );
        break;
        case 3:
        switch (g_U22274[uParam0]._fU144)
        {
            case 10: return 0;
        }
        PRINT_HELP( "FRLOCJ" );
        break;
        case 7:
        PRINT_HELP( "FRLOCD" );
        break;
        case 8:
        switch (g_U22274[uParam0]._fU144)
        {
            case 10:
            case 4:
            case 9: return 0;
        }
        PRINT_HELP( "FRLOCB" );
        break;
        case 13:
        PRINT_HELP( "FRLOCP" );
        break;
    }
    return 1;
}

void sub_45753()
{
    SET_MISSION_FLAG( 1 );
    sub_45770();
    l_U330 = 1;
    sub_46384();
    sub_47237( "Roman Friend Activity: Darts" );
    SET_ROMANS_MOOD( 0 );
    sub_47265( 52 );
    return;
}

void sub_45770()
{
    sub_45779();
    return;
}

void sub_45779()
{
    int iVar2;

    iVar2 = 0;
    sub_45793( iVar2 );
    return;
}

void sub_45793(unknown uParam0)
{
    unknown uVar3;

    g_U10978 = 1;
    uVar3 = sub_14934( uParam0 );
    sub_45819( uVar3 );
    return;
}

void sub_45819(unknown uParam0)
{
    unknown uVar3;
    char[16] cVar4;

    uVar3 = g_U22274[uParam0]._fU144;
    StrCopy( ref cVar4, "", 16 );
    switch (uVar3)
    {
        case 4:
        StrCopy( ref cVar4, "BOATING", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "BOWLING", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "DARTS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "DRINKING", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "EATING", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "HELIRIDES", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "LIFTS", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "POOL", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "SHOW", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "STRIPCLUB", 16 );
        break;
        case 14: return;
    }
    SCRIPT_ASSERT( "Flow_Player_Stats_Friend_Activity_Started: Unknown Activity ID" );
    return;
    sub_46203( cVar4 );
    return;
}

void sub_46203(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

void sub_46384()
{
    int I;
    int[59] iVar3;

    l_U413 = 0;
    I = 0;
    array(ref iVar3, 59);
    for ( I = 0; I < 59; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 59; I++ )
    {
        if (g_U10324[I]._fU12 == 4)
        {
            if (l_U413 >= 1)
            {
                sub_4627( "InfoDarts: Initialise_Darts_Destinations: Increase MAX_DARTS_DESTINATIONS" );
            }
            l_U401[l_U413]._fU0 = I;
            iVar3[I] = l_U413;
            l_U413++;
        }
    }
    for ( I = 0; I < l_U413; I++ )
    {
        l_U414[I] = 0;
    }
    sub_46708( iVar3[10], 1150.94800000, 735.32480000, 35.89890000, 109.25990000, 1163.71000000, 769.05490000, 44.09430000, -24.06020000, 0.00000000, 140.83640000 );
    for ( I = 0; I < l_U413; I++ )
    {
        if (NOT l_U414[I])
        {
            sub_4627( "InfoDarts: Initialise_Darts_Destinations: There is missing additional data - are there new DARTS Map Blips?" );
        }
    }
    return;
}

void sub_46708(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (iParam0 < 0)
    {
        sub_4627( "InfoDarts: Store_Additional_Darts_Info: ID less than 0" );
    }
    if (iParam0 >= l_U413)
    {
        sub_4627( "InfoDarts: Store_Additional_Darts_Info: ID out of range" );
    }
    if (l_U414[iParam0])
    {
        sub_4627( "InfoDarts: Store_Additional_Darts_Info: Duplicate additional data" );
    }
    l_U401[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U401[iParam0]._fU16 = uParam4;
    l_U401[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U401[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U414[iParam0] = 1;
    return;
}

void sub_47237(unknown uParam0)
{
    return;
}

void sub_47265(unknown uParam0)
{
    g_U2222 = uParam0;
    return;
}

void sub_47304(unknown uParam0, unknown uParam1)
{
    sub_47315( uParam0 );
    sub_47511( uParam1 );
    return;
}

void sub_47315(unknown uParam0)
{
    if (NOT (g_U32898._fU0 == 54))
    {
        return;
    }
    if (NOT (sub_47348( uParam0 )))
    {
        return;
    }
    g_U32898._fU0 = uParam0;
    g_U32898._fU8 = 9;
    g_U32898._fU12 = 9;
    return;
}

int sub_47348(int iParam0)
{
    if (iParam0 < 23)
    {
        return 1;
    }
    if (sub_47372( iParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_47372(unknown uParam0)
{
    switch (uParam0)
    {
        case 2:
        case 10:
        case 28:
        case 29:
        case 30: return 1;
    }
    return 0;
}

void sub_47511(int iParam0)
{
    if (NOT (g_U32898._fU4 == 9))
    {
        return;
    }
    if (iParam0 == 9)
    {
        return;
    }
    if (g_U32898._fU0 == 54)
    {
        return;
    }
    g_U32898._fU4 = iParam0;
    return;
}

void sub_47601(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        l_U912[I] = 0;
    }
    l_U879 = g_U22274[uParam0]._fU144;
    sub_47670( uParam0, 6, 2 );
    sub_47670( uParam0, 7, 1 );
    sub_47670( uParam0, 8, 1 );
    sub_47670( uParam0, 11, 2 );
    sub_47670( uParam0, 12, 1 );
    sub_47670( uParam0, 13, 1 );
    sub_47670( uParam0, 5, 2 );
    sub_48008();
    sub_51258();
    sub_52336( 3 );
    l_U881 = 0;
    l_U927 = sub_24933( uParam0 );
    sub_52389( l_U879 );
    l_U886 = 0;
    if (NOT l_U904)
    {
        l_U903 = g_U9210;
        g_U9210 = 1;
        l_U904 = 1;
    }
    return;
}

void sub_47670(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    if (NOT g_U15946[uParam0]._fU8[0]._fU0[iParam1])
    {
        if (NOT (sub_47711( uParam0, iParam1 )))
        {
            return;
        }
    }
    iVar5 = sub_47758( iParam1 );
    if (iVar5 == 9)
    {
        if (NOT (iParam1 == l_U879))
        {
            l_U912[iParam1] = uParam2;
        }
        return;
    }
    sub_47912( iVar5, uParam2 );
    return;
}

int sub_47711(int iParam0, int iParam1)
{
    if ((iParam0 == 7) AND (iParam1 == 12))
    {
        return 1;
    }
    return 0;
}

int sub_47758(unknown uParam0)
{
    switch (uParam0)
    {
        case 4: return 0;
        case 5: return 7;
        case 6: return 1;
        case 9: return 2;
        case 11: return 3;
        case 12: return 5;
        case 13: return 6;
    }
    return 9;
}

void sub_47912(unknown uParam0, unknown uParam1)
{
    g_U32898._fU36[uParam0] = uParam1;
    return;
}

void sub_48008()
{
    int I;
    int[59] iVar3;

    l_U754 = 0;
    I = 0;
    array(ref iVar3, 59);
    for ( I = 0; I < 59; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 59; I++ )
    {
        if (g_U10324[I]._fU12 == 8)
        {
            if (l_U754 >= 16)
            {
                sub_4627( "InfoEat: Initialise_Eat_Destinations: Increase MAX_EAT_DESTINATIONS" );
            }
            l_U417[l_U754]._fU0 = I;
            iVar3[I] = l_U754;
            l_U754++;
        }
    }
    for ( I = 0; I < l_U754; I++ )
    {
        l_U755[I] = 0;
        l_U772[I] = 0;
    }
    sub_48342( iVar3[0], 1186.03200000, 381.45840000, 25.89440000, 273.88000000, 1175.87300000, 392.51750000, 29.59400000, -13.69880000, 0.00000000, -147.50740000, 1112014848 );
    sub_48342( iVar3[1], 1643.65800000, 245.58400000, 25.50000000, 243.86450000, 1670.37300000, 252.74060000, 27.71511000, 0.69950600, 0.00000000, 130.74310000, 1112014848 );
    sub_48342( iVar3[2], 882.92200000, -473.00300000, 16.30900000, 270.12920000, 876.81410000, -460.09550000, 15.35026000, 11.67727000, -0.00000000, -161.68270000, 1112014848 );
    sub_48342( iVar3[17], 443.42000000, 1526.31400000, 17.50700000, 268.88550000, 423.45340000, 1529.01700000, 34.79707000, -36.57798000, -11.22095000, -114.45570000, 1112014848 );
    sub_48342( iVar3[18], 1096.24500000, 1599.80300000, 18.02700000, 316.12340000, 1108.09200000, 1625.32100000, 21.56322000, -1.15058200, -0.00000000, 174.86560000, 1112014848 );
    sub_48342( iVar3[22], -146.61000000, 72.23300000, 16.02500000, 191.93320000, -172.63120000, 61.32870000, 55.90245000, -51.17967000, -0.00000000, -102.22700000, 1112014848 );
    sub_48342( iVar3[23], -619.91990000, 161.67230000, 6.02700000, 91.38610000, -645.24320000, 125.56240000, 22.66623000, -32.12400000, -0.00000000, -56.49996000, 1112014848 );
    sub_48342( iVar3[24], -174.31000000, 272.46700000, 15.98500000, 90.06450000, -206.20180000, 261.43610000, 35.89857000, -34.11337000, -0.00000000, -46.99197000, 1112014848 );
    sub_48342( iVar3[25], -433.07940000, 1178.45900000, 14.39740000, 91.17450000, -423.18860000, 1174.36700000, 24.29361000, -39.14743000, 6.24956800, 45.26580000, 1112014848 );
    sub_48342( iVar3[26], -136.81900000, -276.97200000, 14.53500000, 179.94550000, -123.23390000, -275.37620000, 12.44489000, 3.61987600, -0.00000000, 92.21399000, 1112014848 );
    sub_48342( iVar3[27], -394.37900000, 250.15800000, 15.55600000, 91.12110000, -410.06970000, 251.82990000, 20.99272000, -11.35220000, 0.00000000, -107.25360000, 1112014848 );
    sub_48342( iVar3[28], 118.72730000, 636.46600000, 16.10430000, 181.62540000, 126.37460000, 628.77320000, 20.18756000, -20.45377000, 0.00000000, 51.15732000, 1112014848 );
    sub_48342( iVar3[29], 33.67200000, 974.29800000, 15.96700000, 0.00000000, 37.68074000, 1005.61400000, 22.87771000, -23.27425000, 0.00000100, 145.58120000, 1112014848 );
    sub_48342( iVar3[47], -1002.54900000, 1604.37000000, 25.21300000, 214.78020000, -992.73790000, 1583.80300000, 36.61912000, -19.68591000, 0.00000100, 26.11061000, 1112014848 );
    sub_48342( iVar3[48], -1250.08700000, 1070.77300000, 21.16600000, 2.24760000, -1258.48500000, 1055.73500000, 25.37512000, -4.82664000, 0.00000000, -37.46955000, 1112014848 );
    sub_48342( iVar3[49], -1155.57900000, 1389.54100000, 25.63000000, 89.35540000, -1173.21800000, 1372.00600000, 22.45787000, 10.71952000, -0.00000000, -29.54759000, 45.00000000 );
    for ( I = 0; I < l_U754; I++ )
    {
        if (NOT l_U755[I])
        {
            sub_4627( "InfoEat: Initialise_Eat_Destinations: There is missing additional data - are there new FOOD Map Blips?" );
        }
    }
    sub_49911( iVar3[0], 1190.88800000, 377.97630000, 22.99430000, 1192.66900000, 380.07240000, 22.80760000, 1199.55100000, 378.34750000, 22.14610000 );
    sub_49911( iVar3[1], 1647.85500000, 237.53700000, 23.59960000, 1650.38400000, 239.51570000, 23.67850000, 1656.71000000, 235.95590000, 24.03360000 );
    sub_49911( iVar3[2], 881.32170000, -478.59920000, 14.02390000, 880.96580000, -476.32940000, 14.03240000, 872.43070000, -476.56120000, 13.75210000 );
    sub_49911( iVar3[17], 440.97420000, 1520.30900000, 15.37440000, 442.17310000, 1522.82200000, 15.23160000, 430.21190000, 1522.47900000, 15.65150000 );
    sub_49911( iVar3[18], 1099.11500000, 1596.27700000, 15.71580000, 1096.33900000, 1596.88800000, 15.71540000, 1089.31000000, 1588.39100000, 15.71540000 );
    sub_49911( iVar3[22], -139.76190000, 72.06730000, 13.75790000, -142.36840000, 73.33570000, 13.75790000, -143.59300000, 83.87050000, 13.75790000 );
    sub_49911( iVar3[23], -618.24940000, 149.04600000, 3.81270000, -619.85540000, 150.61060000, 3.81270000, -628.95990000, 149.64940000, 3.81270000 );
    sub_49911( iVar3[24], -174.20310000, 276.77800000, 13.81320000, -176.70890000, 274.19620000, 13.81320000, -186.13620000, 276.34440000, 13.81860000 );
    sub_49911( iVar3[25], -429.96930000, 1183.50600000, 12.05390000, -427.68120000, 1181.30100000, 12.16880000, -414.22730000, 1183.68000000, 12.81370000 );
    sub_49911( iVar3[26], -140.75110000, -278.08280000, 12.41860000, -139.00030000, -281.15140000, 12.82390000, -140.91290000, -291.95790000, 13.76250000 );
    sub_49911( iVar3[27], -393.03260000, 245.99450000, 13.39040000, -391.13880000, 248.59180000, 13.49290000, -381.94700000, 246.83300000, 13.75370000 );
    sub_49911( iVar3[28], 114.91250000, 640.95900000, 13.71340000, 116.64570000, 639.25250000, 13.71330000, 113.40200000, 629.90410000, 13.66730000 );
    sub_49911( iVar3[29], 29.85950000, 980.51480000, 13.66350000, 32.71410000, 982.65520000, 13.66330000, 30.02770000, 994.23700000, 13.68900000 );
    sub_49911( iVar3[47], -1006.38000000, 1609.67400000, 23.01270000, -1003.73300000, 1607.31800000, 23.01270000, -993.22520000, 1610.06000000, 22.96360000 );
    sub_49911( iVar3[48], -1244.90300000, 1070.48900000, 18.74650000, -1246.81000000, 1067.58300000, 18.70840000, -1245.11300000, 1055.32400000, 18.77390000 );
    sub_49911( iVar3[49], -1157.79600000, 1397.05500000, 23.41630000, -1160.04400000, 1392.25500000, 23.19830000, -1173.15100000, 1393.90200000, 21.29680000 );
    for ( I = 0; I < l_U754; I++ )
    {
        if (NOT l_U772[I])
        {
            sub_4627( "InfoEat: Initialise_Eat_Destinations: There is missing leave immediately data - are there new FOOD Map Blips?" );
        }
    }
    return;
}

void sub_48342(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    if (iParam0 < 0)
    {
        sub_4627( "InfoEat: Store_Additional_Eat_Info: ID less than 0" );
    }
    if (iParam0 >= l_U754)
    {
        sub_4627( "InfoEat: Store_Additional_Eat_Info: ID out of range" );
    }
    if (l_U755[iParam0])
    {
        sub_4627( "InfoEat: Store_Additional_Eat_Info: Duplicate additional data" );
    }
    l_U417[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U417[iParam0]._fU16 = uParam4;
    l_U417[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U417[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U417[iParam0]._fU44 = uParam11;
    l_U755[iParam0] = 1;
    return;
}

void sub_49911(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if (iParam0 < 0)
    {
        sub_4627( "InfoEat: Store_Leave_Immediately_Info: ID less than 0" );
    }
    if (iParam0 >= l_U754)
    {
        sub_4627( "InfoEat: Store_Leave_Immediately_Info: ID out of range" );
    }
    if (l_U772[iParam0])
    {
        sub_4627( "InfoEat: Store_Leave_Immediately_Info: Duplicate Leave Immediately data" );
    }
    l_U417[iParam0]._fU48 = {uParam1};
    l_U417[iParam0]._fU60 = {uParam4};
    l_U417[iParam0]._fU72 = {uParam7};
    l_U772[iParam0] = 1;
    return;
}

void sub_51258()
{
    int I;
    int[59] iVar3;

    l_U846 = 0;
    I = 0;
    array(ref iVar3, 59);
    for ( I = 0; I < 59; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 59; I++ )
    {
        if (g_U10324[I]._fU12 == 5)
        {
            if (l_U846 >= 5)
            {
                sub_4627( "InfoDrink: Initialise_Drink_Destinations: Increase MAX_DRINK_DESTINATIONS" );
            }
            l_U790[l_U846]._fU0 = I;
            iVar3[I] = l_U846;
            l_U846++;
        }
    }
    for ( I = 0; I < l_U846; I++ )
    {
        l_U847[I] = 0;
    }
    sub_51586( iVar3[3], 920.89200000, -489.48600000, 16.62500000, 359.20360000, 912.35260000, -480.41450000, 19.36200000, -7.81876100, -0.00000000, -137.45620000 );
    sub_51586( iVar3[4], 1157.61500000, 736.30880000, 36.89920000, 264.94570000, 1190.61600000, 721.34830000, 46.09572000, -12.26530000, 0.00000000, 54.47784000 );
    sub_51586( iVar3[30], -437.20600000, 463.31500000, 11.30600000, 273.22870000, -451.98680000, 469.22640000, 14.42270000, -12.98044000, 0.00000000, -130.48930000 );
    sub_51586( iVar3[31], 118.11700000, 565.07100000, 15.97500000, 181.45510000, 128.69340000, 539.74560000, 20.18760000, -3.03840000, 0.00000000, 43.11860000 );
    sub_51586( iVar3[32], -477.32300000, 1414.07100000, 16.73800000, 270.89310000, -466.49520000, 1426.17700000, 14.79384000, 16.12449000, -0.00000000, 130.86440000 );
    for ( I = 0; I < l_U846; I++ )
    {
        if (NOT l_U847[I])
        {
            sub_4627( "InfoDrink: Initialise_Drink_Destinations: There is missing additional data - are there new DRINK Map Blips?" );
        }
    }
    return;
}

void sub_51586(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (iParam0 < 0)
    {
        sub_4627( "InfoDrink: Store_Additional_Drink_Info: ID less than 0" );
    }
    if (iParam0 >= l_U846)
    {
        sub_4627( "InfoDrink: Store_Additional_Drink_Info: ID out of range" );
    }
    if (l_U847[iParam0])
    {
        sub_4627( "InfoDrink: Store_Additional_Drink_Info: Duplicate additional data" );
    }
    l_U790[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U790[iParam0]._fU16 = uParam4;
    l_U790[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U790[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U847[iParam0] = 1;
    return;
}

void sub_52336(unknown uParam0)
{
    g_U32898._fU32 = uParam0;
    return;
}

void sub_52389(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 59; I++ )
    {
        if (sub_20361( I ))
        {
            if (NOT (sub_52431( I, uParam0 )))
            {
                if (g_U10856[I]._fU0)
                {
                    if (NOT (DOES_BLIP_EXIST( g_U10856[I]._fU4 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( g_U10324[I]._fU32 )))
                        {
                            sub_22499( ref g_U10856[I]._fU4, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
                            SET_BLIP_AS_SHORT_RANGE( g_U10856[I]._fU4, 1 );
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_52431(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 8: return g_U10324[uParam0]._fU12 == 8;
        case 7: return g_U10324[uParam0]._fU12 == 5;
    }
    return 0;
}

void sub_52725()
{
    int iVar2;

    l_U343 = 0;
    iVar2 = 0;
    if (NOT (sub_52750( iVar2, l_U195 )))
    {
        l_U898 = 1;
        return;
    }
    return;
}

int sub_52750(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    float fVar6;
    int iVar7;

    if (l_U325 == 0)
    {
        sub_52771();
        l_U325++;
    }
    if (IS_CHAR_INJURED( uParam1 ))
    {
        l_U328 = 1;
        l_U329 = 0;
        return 1;
    }
    if (l_U370)
    {
        sub_22290();
        l_U324 = 5;
        l_U325 = 0;
        return 1;
    }
    I = 0;
    iVar5 = 0;
    fVar6 = 0.00000000;
    iVar7 = 0;
    if (l_U325 == 1)
    {
        l_U343 = 1;
        sub_52904( uParam0 );
        for ( I = 0; I < 1; I++ )
        {
            if (l_U337 == -1)
            {
                if (sub_53385( I ))
                {
                    iVar5 = l_U401[I]._fU0;
                    iVar7 = g_U10324[iVar5]._fU28 == g_U9937;
                    fVar6 = l_U401[I]._fU4._fU8 + 0.00000000;
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), l_U401[I]._fU4._fU0, l_U401[I]._fU4._fU4, fVar6, 1.60000000, 1.60000000, 1.60000000, iVar7 )) AND (NOT (sub_38307( sub_1591() ))))
                    {
                        if (sub_53597( uParam0 ))
                        {
                            l_U337 = I;
                            l_U325++;
                        }
                    }
                }
            }
        }
    }
    if (l_U325 == 2)
    {
        sub_52904( uParam0 );
        if (sub_54246())
        {
            if (IS_PLAYER_PLAYING( sub_3660() ))
            {
                SET_PLAYER_CONTROL( sub_3660(), 1 );
            }
            l_U371 = 1;
            l_U325 = 99;
        }
    }
    if (sub_54537())
    {
        l_U325 = 99;
    }
    if (l_U325 == 99)
    {
        l_U324 = 3;
        l_U325 = 0;
        return 1;
    }
    return 0;
}

void sub_52771()
{
    sub_22301( 4, 1 );
    return;
}

void sub_52904(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_52962();
        return;
        case 3:
        sub_53038();
        return;
        case 7:
        sub_53072();
        return;
        case 8:
        sub_53106();
        return;
        case 13:
        sub_53140();
        return;
    }
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Not a friend" );
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Should never reach here" );
    return;
}

void sub_52962()
{
    sub_52980( l_U195, ref l_U196 );
    return;
}

void sub_52980(unknown uParam0, unknown uParam1)
{
    if (NOT l_U122)
    {
        sub_20716( uParam1 );
        return;
    }
    sub_38721( uParam0, uParam1 );
    return;
}

void sub_53038()
{
    sub_52980( l_U267, ref l_U268 );
    return;
}

void sub_53072()
{
    sub_52980( l_U305, ref l_U306 );
    return;
}

void sub_53106()
{
    sub_52980( l_U276, ref l_U277 );
    return;
}

void sub_53140()
{
    sub_52980( l_U314, ref l_U315 );
    return;
}

int sub_53385(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U401[uParam0]._fU0;
    if (NOT g_U9932[g_U10324[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    if (NOT (sub_22831( uVar3 )))
    {
        return 0;
    }
    return 1;
}

int sub_53597(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return sub_53655();
        case 3: return sub_53888();
        case 7: return sub_53918();
        case 8: return sub_53948();
        case 13: return sub_53978();
    }
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Check_Friend_Nearby: Not a friend" );
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Check_Friend_Nearby: Should never reach here" );
    return 0;
}

void sub_53655()
{
    return sub_53669( l_U195 );
}

int sub_53669(unknown uParam0)
{
    unknown uVar3;
    vector vVar4;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar3 );
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_1591(), uVar3 )))
        {
            return 0;
        }
        return IS_CHAR_SITTING_IN_CAR( uParam0, uVar3 );
    }
    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        return 0;
    }
    vVar4 = {0.00000000, 0.00000000, 0.00000000};
    GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), vVar4.x, vVar4.y, vVar4.z, 4.00000000, 4.00000000, 4.00000000, 0 )))
    {
        return 0;
    }
    return 1;
}

void sub_53888()
{
    return sub_53669( l_U267 );
}

void sub_53918()
{
    return sub_53669( l_U305 );
}

void sub_53948()
{
    return sub_53669( l_U276 );
}

void sub_53978()
{
    return sub_53669( l_U314 );
}

int sub_54246()
{
    int iVar2;
    unknown uVar3;
    float fVar4;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U193 == 0)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1591() )))
        {
            return 1;
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() )))
        {
            return 0;
        }
        SET_PLAYER_CONTROL( sub_3660(), 0 );
        l_U120 = iVar2 + 4000;
        l_U193 = 1;
    }
    if (l_U193 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1591() )))
        {
            l_U193 = 0;
            return 1;
        }
        if (sub_38307( sub_1591() ))
        {
            return 0;
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar3 );
        GET_CAR_SPEED( uVar3, ref fVar4 );
        if ((fVar4 < 0.04000000) || (l_U120 < iVar2))
        {
            SET_PLAYER_CONTROL( sub_3660(), 1 );
            l_U193 = 0;
            return 1;
        }
    }
    return 0;
}

int sub_54537()
{
    boolean bVar2;

    bVar2 = g_U32898._fU24;
    if (NOT bVar2)
    {
        return 0;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        return 0;
    }
    return 1;
}

void sub_54679()
{
    boolean bVar2;
    int iVar3;

    bVar2 = true;
    if (l_U337 == -1)
    {
        bVar2 = false;
    }
    l_U343 = 0;
    iVar3 = 0;
    if (l_U325 == 0)
    {
        sub_54727();
        l_U325++;
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        if (IS_CHAR_INJURED( l_U195 ))
        {
            l_U328 = 1;
            l_U329 = 0;
            return;
        }
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        sub_52962();
    }
    else
    {
        sub_20703();
        sub_22290();
    }
    if (l_U325 == 1)
    {
        if (bVar2)
        {
            sub_55007();
        }
        l_U325++;
    }
    if (l_U325 == 2)
    {
        if (bVar2)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref l_U336 );
            }
            TASK_LEAVE_ANY_CAR( sub_1591() );
            TASK_LEAVE_ANY_CAR( l_U195 );
        }
        l_U325++;
    }
    if (l_U325 == 3)
    {
        if (NOT (sub_55578( l_U195 )))
        {
            l_U325++;
        }
    }
    if (l_U325 == 4)
    {
        if (IS_MINIGAME_IN_PROGRESS())
        {
            sub_20703();
            sub_22290();
            l_U325 = 99;
        }
    }
    if (l_U325 == 99)
    {
        l_U324 = 4;
        l_U325 = 0;
    }
    return;
}

void sub_54727()
{
    int iVar2;

    iVar2 = 0;
    sub_54745( ref l_U147, iVar2 );
    g_U22274[l_U158]._fU688._fU28 = -1;
    return;
}

void sub_54745(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_55007()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;

    if ((l_U337 < 0) || (l_U337 >= 1))
    {
        sub_33339( "RomanDarts: Play Arrival Speech: Chosen Destination out of range" );
    }
    uVar2 = l_U401[l_U337]._fU0;
    uVar3 = g_U10324[uVar2]._fU16;
    iVar4 = 0;
    sub_54745( ref l_U141, iVar4 );
    sub_3237( "FCR21AU" );
    sub_3356( 0, sub_1591(), "NIKO", 0 );
    sub_3356( l_U157, l_U195, ref l_U153, 0 );
    switch (uVar3)
    {
        case 5:
        sub_55231( l_U158, ref l_U141 );
        break;
        default:
        sub_33339( "RomanDarts: Play Arrival Speech: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_55231(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRD", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARRD", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_ARRD", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_55578(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_1591() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_55767()
{
    vector vVar2;
    float fVar5;

    l_U343 = 0;
    if (l_U325 == 0)
    {
        l_U325++;
    }
    if (l_U325 == 1)
    {
        if (sub_55818())
        {
            l_U325++;
        }
    }
    if (l_U325 == 2)
    {
        sub_55873();
        sub_56402( 0, 6 );
        sub_57960();
        sub_52962();
        l_U325++;
    }
    if (l_U325 == 3)
    {
        sub_58020();
        sub_52962();
        l_U325++;
    }
    if (l_U325 == 4)
    {
        if (IS_VEH_DRIVEABLE( l_U336 ))
        {
            vVar2 = {1178.64100000, 731.54930000, 35.00170000};
            fVar5 = 181.32220000;
            SET_CAR_HEADING( l_U336, fVar5 );
            SET_CAR_COORDINATES( l_U336, vVar2.x, vVar2.y, vVar2.z );
            SET_CAR_ON_GROUND_PROPERLY( l_U336 );
        }
        l_U325 = 99;
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        if (IS_CHAR_INJURED( l_U195 ))
        {
            l_U328 = 1;
            l_U329 = 0;
            return;
        }
    }
    if (l_U325 == 99)
    {
        sub_59046( 0, 6 );
        l_U880 = 1;
        sub_59168( 6, l_U880, g_U32898._fU32 );
        g_U9205 = 1;
        l_U324 = 5;
        l_U325 = 0;
    }
    return;
}

void sub_55818()
{
    return g_U32898._fU28;
}

void sub_55873()
{
    l_U1307 = sub_55882();
    switch (l_U1307)
    {
        case 1:
        l_U338 = 0;
        sub_56047( "PASS LEVEL: EXCELLENT" );
        break;
        case 0:
        case 2:
        l_U338 = 1;
        sub_56047( "PASS LEVEL: GOOD" );
        break;
        case 3:
        l_U338 = 3;
        sub_56047( "PASS LEVEL: MINIMAL" );
        break;
        case 4:
        l_U328 = 1;
        l_U329 = 1;
        return;
        case 5:
        l_U328 = 1;
        l_U329 = 2;
        return;
    }
    sub_56220( "Calculate_Pass_Level: Unknown minigame result" );
    return;
}

void sub_55882()
{
    unknown Result;

    Result = g_U32898._fU16;
    g_U32898._fU4 = 9;
    g_U32898._fU16 = 8;
    g_U32898._fU24 = 0;
    g_U32898._fU28 = 0;
    return Result;
}

void sub_56047(unknown uParam0)
{
    return;
}

void sub_56220(unknown uParam0)
{
    sub_56265( "WARNING: ROMAN DARTS (KEITHM): ", uParam0 );
    return;
}

void sub_56265(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "WARNING: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_56402(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_56413( uParam0 );
    g_U34181._fU0[uVar4]._fU0[uParam1]++;
    g_U34181._fU0[uVar4]._fU60++;
    sub_56645( uParam1 );
    switch (uParam0)
    {
        case 0:
        sub_13726( 354 );
        INCREMENT_INT_STAT_NO_MESSAGE( 354, 1 );
        break;
        case 3:
        sub_13726( 355 );
        INCREMENT_INT_STAT_NO_MESSAGE( 355, 1 );
        break;
        case 7:
        sub_13726( 357 );
        INCREMENT_INT_STAT_NO_MESSAGE( 357, 1 );
        break;
        case 8:
        sub_13726( 356 );
        INCREMENT_INT_STAT_NO_MESSAGE( 356, 1 );
        break;
        case 13:
        sub_13726( 358 );
        INCREMENT_INT_STAT_NO_MESSAGE( 358, 1 );
        break;
        default: sub_4627( "Friend_Achievement_Activity_Performed: Unknown Friend ID" );
    }
    sub_57465( uParam0, uParam1 );
    return;
}

int sub_56413(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 3: return 1;
        case 7: return 2;
        case 8: return 3;
        case 13: return 4;
    }
    sub_4627( "Convert_Friend_To_Friend_Stats_ID: Unrecognised Friend ID" );
    return 5;
}

void sub_56645(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    char[64] cVar6;

    g_U34181._fU344[iParam0]++;
    g_U34181._fU404++;
    iVar3 = g_U34181._fU408;
    if (iVar3 == iParam0)
    {
        return;
    }
    iVar4 = g_U34181._fU344[iVar3];
    iVar5 = g_U34181._fU344[iParam0];
    if (iVar5 < iVar4)
    {
        return;
    }
    g_U34181._fU408 = iParam0;
    StrCopy( ref cVar6, "", 64 );
    sub_56805( iParam0, ref cVar6 );
    if (CAN_THE_STAT_HAVE_STRING( 662 ))
    {
        sub_13726( 662 );
        REGISTER_STRING_FOR_FRONTEND_STAT( 662, ref cVar6 );
    }
    return;
}

void sub_56805(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 4:
        StrCopy( (uParam1^), "statAct_0", 64 );
        break;
        case 5:
        StrCopy( (uParam1^), "statAct_1", 64 );
        break;
        case 6:
        StrCopy( (uParam1^), "statAct_2", 64 );
        break;
        case 7:
        StrCopy( (uParam1^), "statAct_3", 64 );
        break;
        case 8:
        StrCopy( (uParam1^), "statAct_4", 64 );
        break;
        case 9:
        StrCopy( (uParam1^), "statAct_5", 64 );
        break;
        case 10:
        StrCopy( (uParam1^), "statAct_6", 64 );
        break;
        case 11:
        StrCopy( (uParam1^), "statAct_7", 64 );
        break;
        case 12:
        StrCopy( (uParam1^), "statAct_8", 64 );
        break;
        case 13:
        StrCopy( (uParam1^), "statAct_9", 64 );
        break;
        default: sub_4627( "Friend_Achievement_Fill_Activity_String: Unknown activity" );
    }
    return;
}

void sub_57465(unknown uParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    char[64] cVar8;

    uVar4 = sub_56413( uParam0 );
    iVar5 = g_U34181._fU0[uVar4]._fU64;
    if (iVar5 == iParam1)
    {
        return;
    }
    iVar6 = g_U34181._fU0[uVar4]._fU0[iVar5];
    iVar7 = g_U34181._fU0[uVar4]._fU0[iParam1];
    if (iVar7 < iVar6)
    {
        return;
    }
    g_U34181._fU0[uVar4]._fU64 = iParam1;
    StrCopy( ref cVar8, "", 64 );
    sub_56805( iParam1, ref cVar8 );
    switch (uParam0)
    {
        case 0:
        if (CAN_THE_STAT_HAVE_STRING( 663 ))
        {
            sub_13726( 663 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 663, ref cVar8 );
        }
        break;
        case 3:
        if (CAN_THE_STAT_HAVE_STRING( 664 ))
        {
            sub_13726( 664 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 664, ref cVar8 );
        }
        break;
        case 7:
        if (CAN_THE_STAT_HAVE_STRING( 666 ))
        {
            sub_13726( 666 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 666, ref cVar8 );
        }
        break;
        case 8:
        if (CAN_THE_STAT_HAVE_STRING( 665 ))
        {
            sub_13726( 665 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 665, ref cVar8 );
        }
        break;
        case 13:
        if (CAN_THE_STAT_HAVE_STRING( 667 ))
        {
            sub_13726( 667 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 667, ref cVar8 );
        }
        break;
        default: sub_4627( "Friend_Achievement_Check_For_New_Favourite_Activity_With_Friend: Unknown friend ID" );
    }
    return;
}

void sub_57960()
{
    sub_38721( l_U195, ref l_U196 );
    return;
}

void sub_58020()
{
    sub_3237( "FCR21AU" );
    sub_3356( 0, sub_1591(), "NIKO", 0 );
    sub_3356( l_U157, l_U195, ref l_U153, 0 );
    sub_58097( l_U1307, l_U158, ref l_U141 );
    return;
}

void sub_58097(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_58151( uParam1, uParam2 );
        break;
        case 2:
        sub_58305( uParam1, uParam2 );
        break;
        case 1:
        sub_58459( uParam1, uParam2 );
        break;
        case 3:
        sub_58613( uParam1, uParam2 );
        break;
        default: sub_4627( "Ended_Darts_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_58151(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_DLVW", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_DLW", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_DLVW", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_58305(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_DLVD", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_DLD", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_DLVD", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_58459(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_DLVL", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_DLL", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_DLVL", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_58613(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_DLVA", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_DLA", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_DLVA", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_59046(unknown uParam0, unknown uParam1)
{
    int iVar4;

    switch (uParam1)
    {
        case 8: break;
        default: return;
    }
    if (NOT g_U22274[uParam0]._fU172)
    {
        return;
    }
    iVar4 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
    if (iVar4 >= 20)
    {
        return;
    }
    l_U378 = 1;
    return;
}

void sub_59168(int iParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;

    if (l_U378)
    {
        return;
    }
    if (iParam0 == 8)
    {
        sub_59199();
        return;
    }
    if (iParam0 == 7)
    {
        sub_59256();
        return;
    }
    if (sub_59314( l_U147 ))
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
    l_U344._fU0 = 1;
    l_U344._fU4 = 0;
    l_U344._fU8 = 0;
    l_U344._fU12 = 0;
    l_U344._fU16 = 0;
    return;
}

void sub_59199()
{
    if (l_U378)
    {
        sub_54727();
        return;
    }
    l_U344._fU32 = 0;
    return;
}

void sub_59256()
{
    l_U344._fU0 = 1;
    l_U344._fU4 = 0;
    l_U344._fU8 = 1;
    l_U344._fU12 = 0;
    return;
}

int sub_59314(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_41787( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_41787( "\n speech is not playing" );
    }
    return 0;
}

void sub_59594()
{
    int iVar2;

    l_U343 = 0;
    iVar2 = 0;
    l_U111 = 1;
    if (NOT (sub_59641( iVar2, l_U195, l_U197, "FCR21AU" )))
    {
        l_U898 = 1;
        return;
    }
    return;
}

void sub_59641(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 1;
    return sub_59666( uParam0, uParam1, uParam2, iVar8, uParam5 );
}

int sub_59666(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6)
{
    float fVar9;
    boolean bVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    vector vVar15;
    vector vVar18;
    vector vVar21;
    vector vVar24;
    float fVar27;
    int iVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    int iVar38;

    if (NOT l_U398)
    {
        if (IS_CHAR_INJURED( iParam1 ))
        {
            l_U328 = 1;
            l_U329 = 0;
            return 1;
        }
    }
    if (l_U378)
    {
        if (sub_59732( uParam0, iParam1, uParam6 ))
        {
            l_U325 = 99;
        }
        else
        {
            return 0;
        }
    }
    if (l_U325 == 0)
    {
        if (NOT l_U378)
        {
            if (bParam5)
            {
                sub_61344( uParam0 );
            }
            else
            {
                sub_62056( uParam0, uParam2 );
            }
        }
        if (NOT l_U370)
        {
            sub_62752( ref l_U362, 5, 0, 0 );
            sub_62752( ref l_U366, 8, 0, 0 );
        }
        l_U388 = {0.00000000, 0.00000000, 0.00000000};
        l_U391 = 0;
        l_U398 = 0;
        l_U325++;
    }
    if (l_U325 == 1)
    {
        if (NOT (sub_59314( l_U141 )))
        {
            if (NOT l_U370)
            {
                sub_3237( uParam6 );
                sub_3356( 0, sub_1591(), "NIKO", 0 );
                sub_3356( l_U157, iParam1, ref l_U153, 0 );
                if (l_U376)
                {
                    sub_63517( l_U158, ref l_U141, l_U377 );
                }
                else if (NOT (g_U22274[uParam0]._fU144 == 7))
                {
                    sub_63684( l_U158, ref l_U141 );
                }
                else
                {
                    sub_64560( l_U158 );
                }
                sub_64760( uParam0, bParam5 );
            }
            l_U325++;
        }
        sub_65517( uParam0, bParam5, uParam2 );
    }
    if (l_U325 == 2)
    {
        fVar9 = uParam2._fU8 + 0.00000000;
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), uParam2._fU0, uParam2._fU4, fVar9, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            if (sub_53669( iParam1 ))
            {
                l_U325++;
            }
        }
        l_U343 = 1;
        if (l_U116)
        {
            sub_52980( iParam1, ref l_U372 );
        }
        else
        {
            sub_52904( uParam0 );
        }
        sub_65517( uParam0, bParam5, uParam2 );
    }
    if (NOT l_U370)
    {
        if (l_U325 < 3)
        {
            if (NOT (IS_CHAR_DEAD( sub_1591() )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), uParam2._fU0, uParam2._fU4, uParam2._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
                {
                    sub_66218( uParam0, iParam1 );
                }
            }
        }
    }
    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return 0;
    }
    bVar10 = IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() );
    if (bVar10)
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar11 );
        if (IS_CAR_DEAD( uVar11 ))
        {
            if ((NOT (IS_CHAR_DEAD( sub_1591() ))) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
            {
                TASK_LEAVE_ANY_CAR( sub_1591() );
                TASK_LEAVE_ANY_CAR( iParam1 );
            }
            return 0;
        }
    }
    if (l_U325 == 3)
    {
        if (bVar10)
        {
            GET_CHAR_COORDINATES( sub_1591(), ref vVar15.x, ref vVar15.y, ref vVar15.z );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1591(), 2.00000000, 8.00000000, 3.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
        }
        else
        {
            GET_CHAR_COORDINATES( sub_1591(), ref vVar18.x, ref vVar18.y, ref vVar18.z );
            GET_CHAR_COORDINATES( iParam1, ref vVar21.x, ref vVar21.y, ref vVar21.z );
            vVar24 = {vVar18 - vVar21};
            vVar24.x *= 1.00000000;
            vVar24.y *= 1.00000000;
            vVar24.z *= 1.00000000;
            vVar24.z += 2.00000000;
            uVar12 = {vVar18 + vVar24};
            vVar15 = {vVar21};
            vVar15 = {vVar15 + 0.50000000};
        }
        sub_59965();
        CREATE_CAM( 14, ref l_U331[1] );
        SET_CAM_POS( l_U331[1], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
        POINT_CAM_AT_COORD( l_U331[1], vVar15.x, vVar15.y, vVar15.z );
        SET_CAM_FOV( l_U331[1], 50.00000000 );
        SET_CAM_ACTIVE( l_U331[1], 1 );
        SET_CAM_PROPAGATE( l_U331[1], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SETTIMERA( 0 );
        l_U325++;
    }
    if (l_U325 == 4)
    {
        if (sub_54246())
        {
            sub_67825( uParam0 );
            sub_65596( uParam0 );
            SET_PLAYER_CONTROL( sub_3660(), 0 );
            l_U325++;
        }
    }
    if (l_U325 == 5)
    {
        if ((NOT (IS_CHAR_DEAD( sub_1591() ))) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
        {
            if (bVar10)
            {
                TASK_LOOK_AT_CHAR( sub_1591(), iParam1, -2, 0 );
                TASK_LOOK_AT_CHAR( iParam1, sub_1591(), -2, 0 );
            }
            else
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( sub_1591(), iParam1 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam1, sub_1591() );
            }
        }
        l_U325++;
    }
    if (l_U325 == 6)
    {
        if (TIMERA() > 2000)
        {
            SETTIMERA( 0 );
            l_U325++;
        }
    }
    fVar27 = 0.00000000;
    if (l_U325 == 7)
    {
        if (bVar10)
        {
            l_U325++;
        }
        else if ((IS_CHAR_DEAD( sub_1591() )) || (IS_CHAR_DEAD( iParam1 )))
        {
            l_U325++;
        }
        else
        {
            GET_CHAR_COORDINATES( sub_1591(), ref vVar18.x, ref vVar18.y, ref vVar18.z );
            GET_CHAR_COORDINATES( iParam1, ref vVar21.x, ref vVar21.y, ref vVar21.z );
            fVar27 = sub_23904( vVar18, vVar21 );
            if ((fVar27 < 5.00000000) || (TIMERA() > 7000))
            {
                l_U325++;
            }
        }
    }
    if (l_U325 == 8)
    {
        iVar28 = 0;
        sub_22142( iVar28 );
        if (NOT l_U370)
        {
            sub_3237( uParam6 );
            sub_3356( 0, sub_1591(), "NIKO", 0 );
            sub_3356( l_U157, iParam1, ref l_U153, 0 );
            if (l_U376)
            {
                sub_68679( l_U158, ref l_U141 );
            }
            else
            {
                sub_60485( l_U158, ref l_U141 );
            }
        }
        l_U325++;
    }
    fVar35 = 0.00000000;
    fVar36 = 0.00000000;
    fVar37 = 0.00000000;
    if (l_U325 == 9)
    {
        GET_PED_BONE_POSITION( sub_1591(), 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar29 );
        if (bVar10)
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, 0.00000000, 0.00000000, 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
            fVar27 = sub_23904( uVar29, uVar32 );
            fVar35 = fVar27 + 1.30000000;
            if (fVar27 > 4.00000000)
            {
                fVar35 += 0.70000000;
            }
            fVar36 = (uVar29._fU8 - uVar32._fU8) + 0.60000000;
            uVar12 = {0.00000000, fVar35, fVar36};
            fVar37 = uVar29._fU8 - uVar32._fU8;
            vVar15 = {0.00000000, 0.00000000, fVar37};
            l_U325++;
        }
        else
        {
            l_U325++;
        }
    }
    if (l_U325 == 10)
    {
        if (bVar10)
        {
            if (IS_CAR_DEAD( uVar11 ))
            {
                bVar10 = false;
            }
        }
        if (bVar10)
        {
            ATTACH_CAM_TO_VEHICLE( l_U331[1], uVar11 );
            SET_CAM_ATTACH_OFFSET( l_U331[1], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U331[1], 1 );
            POINT_CAM_AT_VEHICLE( l_U331[1], uVar11 );
            SET_CAM_POINT_OFFSET( l_U331[1], vVar15.x, vVar15.y, vVar15.z );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U331[1], 1 );
            SET_CAM_FOV( l_U331[1], 40.00000000 );
        }
        else
        {
            ATTACH_CAM_TO_PED( l_U331[1], sub_1591() );
            SET_CAM_ATTACH_OFFSET( l_U331[1], 0.70000000, -1.40000000, 0.70000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U331[1], 1 );
            GET_CHAR_COORDINATES( iParam1, ref vVar15.x, ref vVar15.y, ref vVar15.z );
            vVar15.z += 0.50000000;
            POINT_CAM_AT_COORD( l_U331[1], vVar15.x, vVar15.y, vVar15.z );
            SET_CAM_FOV( l_U331[1], 50.00000000 );
        }
        l_U325++;
    }
    if (l_U325 == 11)
    {
        if (sub_69536())
        {
            l_U325 = 50;
            return 0;
        }
        if (NOT (sub_59314( l_U141 )))
        {
            if (bVar10)
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar11, 0 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, 2.50000000, 0.00000000, 0.00000000, ref l_U359._fU0, ref l_U359._fU4, ref l_U359._fU8 );
                }
                else if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar11, 1 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, -2.50000000, 0.00000000, 0.00000000, ref l_U359._fU0, ref l_U359._fU4, ref l_U359._fU8 );
                }
                else
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, 2.50000000, 0.00000000, 0.00000000, ref l_U359._fU0, ref l_U359._fU4, ref l_U359._fU8 );
                }
                fVar9 = l_U359._fU8 + 1.50000000;
                GET_GROUND_Z_FOR_3D_COORD( l_U359._fU0, l_U359._fU4, fVar9, ref l_U359._fU8 );
            }
            else
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1591(), -1.50000000, -5.00000000, 10.00000000, ref l_U359._fU0, ref l_U359._fU4, ref l_U359._fU8 );
                fVar9 = l_U359._fU8;
                GET_GROUND_Z_FOR_3D_COORD( l_U359._fU0, l_U359._fU4, fVar9, ref l_U359._fU8 );
            }
            l_U108 = 0;
            if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
            {
                if (IS_GROUP_MEMBER( iParam1, sub_21613() ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam1 );
                }
            }
            SETTIMERA( 0 );
            l_U325++;
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( iParam1, 1 );
        }
    }
    if (l_U325 == 12)
    {
        if (NOT (IS_CHAR_DEAD( sub_1591() )))
        {
            TASK_CLEAR_LOOK_AT( sub_1591() );
        }
        if ((sub_70128( iParam1, l_U359 )) || (TIMERA() > 7000))
        {
            l_U325++;
        }
    }
    if (l_U325 == 13)
    {
        sub_20846( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_21877();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U325 = 99;
    }
    if (l_U325 == 99)
    {
        l_U324 = 6;
        l_U325 = 0;
        return 1;
    }
    if (l_U325 == 50)
    {
        DO_SCREEN_FADE_OUT( 500 );
        SETTIMERA( 0 );
        l_U398 = 1;
        l_U325++;
    }
    if (l_U325 == 51)
    {
        if ((IS_SCREEN_FADED_OUT()) || (TIMERA() > 3000))
        {
            l_U325++;
        }
    }
    iVar38 = 0;
    if (l_U325 == 52)
    {
        sub_54745( ref l_U141, iVar38 );
        l_U108 = 0;
        if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
        {
            if (IS_GROUP_MEMBER( iParam1, sub_21613() ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam1 );
            }
        }
        sub_20846( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_21877();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U325++;
    }
    if (l_U325 == 53)
    {
        DO_SCREEN_FADE_IN( 500 );
        SETTIMERA( 0 );
        l_U325++;
    }
    if (l_U325 == 54)
    {
        if ((IS_SCREEN_FADED_IN()) || (TIMERA() > 3000))
        {
            l_U325 = 99;
        }
    }
    return 0;
}

int sub_59732(unknown uParam0, int iParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;

    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return 1;
    }
    if (l_U326 == 0)
    {
        SET_CHAR_COORDINATES( iParam1, l_U379._fU0, l_U379._fU4, l_U379._fU8 );
        SET_CHAR_COORDINATES( sub_1591(), l_U382._fU0, l_U382._fU4, l_U382._fU8 );
        uVar5 = sub_59849( l_U382, l_U379 );
        SET_CHAR_HEADING( iParam1, uVar5 );
        uVar5 = sub_59849( l_U379, l_U382 );
        SET_CHAR_HEADING( sub_1591(), uVar5 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_59965();
        SET_PLAYER_CONTROL( sub_3660(), 0 );
        l_U326++;
    }
    if (l_U326 == 1)
    {
        CREATE_CAM( 14, ref l_U331[1] );
        ATTACH_CAM_TO_PED( l_U331[1], sub_1591() );
        SET_CAM_ATTACH_OFFSET( l_U331[1], 0.70000000, -1.40000000, 0.70000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U331[1], 1 );
        GET_CHAR_COORDINATES( iParam1, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        uVar6._fU8 += 0.50000000;
        POINT_CAM_AT_COORD( l_U331[1], uVar6._fU0, uVar6._fU4, uVar6._fU8 );
        SET_CAM_FOV( l_U331[1], 50.00000000 );
        SET_CAM_ACTIVE( l_U331[1], 1 );
        SET_CAM_PROPAGATE( l_U331[1], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SETTIMERA( 0 );
        l_U326++;
    }
    if (l_U326 == 2)
    {
        if (TIMERA() > 2000)
        {
            l_U326++;
        }
    }
    if (l_U326 == 3)
    {
        DO_SCREEN_FADE_IN( 1000 );
        l_U326++;
    }
    if (l_U326 == 4)
    {
        if (IS_SCREEN_FADED_IN())
        {
            l_U326++;
        }
    }
    if (l_U326 == 5)
    {
        iVar9 = 0;
        sub_22142( iVar9 );
        sub_3237( uParam2 );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( l_U157, iParam1, ref l_U153, 0 );
        sub_60485( l_U158, ref l_U141 );
        l_U326++;
    }
    if (l_U326 == 6)
    {
        if (NOT (sub_59314( l_U141 )))
        {
            l_U108 = 0;
            if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
            {
                if (IS_GROUP_MEMBER( iParam1, sub_21613() ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam1 );
                }
            }
            l_U326++;
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( iParam1, 1 );
        }
    }
    if (l_U326 == 7)
    {
        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam1, l_U385._fU0, l_U385._fU4, l_U385._fU8, 2, -2, 0.10000000 );
        SETTIMERA( 0 );
        l_U326++;
    }
    if (l_U326 == 8)
    {
        if (TIMERA() > 5000)
        {
            l_U326++;
        }
    }
    if (l_U326 == 9)
    {
        sub_20846( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_21877();
        SET_GAME_CAM_HEADING( 0.00000000 );
        return 1;
    }
    return 0;
}

void sub_59849(vector vParam0, vector vParam3)
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

void sub_59965()
{
    int iVar2;

    l_U335 = 1;
    iVar2 = 0;
    BEGIN_CAM_COMMANDS( ref iVar2 );
    if (iVar2 == 1)
    {
        return;
    }
    while (iVar2 > 0)
    {
        END_CAM_COMMANDS( ref iVar2 );
    }
    BEGIN_CAM_COMMANDS( ref iVar2 );
    return;
}

void sub_60485(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_60520( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_DRPOFF", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_DRPOFF", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_DRPOFF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_DRPOFF", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_DRPOFF", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_60520(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        if (g_U15654[6])
        {
            sub_41613( "MF3_APPT", uParam1, 8, 1 );
        }
        else
        {
            sub_41613( "FCR_HDRPOF", uParam1, 8, 1 );
        }
        return;
        case 3:
        sub_41613( "FCJ_HOSPDRP", uParam1, 8, 1 );
        return;
        case 7:
        sub_41613( "FCD2_DRPOFF", uParam1, 8, 1 );
        break;
        case 8:
        sub_41613( "FCB2_DRPOFF", uParam1, 8, 1 );
        return;
        case 13:
        sub_41613( "FCP_DRPOFF", uParam1, 8, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_61344(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_61402();
        return;
        case 3:
        sub_61495();
        return;
        case 7:
        sub_61588();
        return;
        case 8:
        sub_61681();
        return;
        case 13:
        sub_61774();
        return;
    }
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Not a friend" );
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Should never reach here" );
    return;
}

void sub_61402()
{
    if (NOT (DOES_BLIP_EXIST( l_U203 )))
    {
        ADD_BLIP_FOR_COORD( l_U197._fU0, l_U197._fU4, l_U197._fU8, ref l_U203 );
        if (l_U111)
        {
            SET_ROUTE( l_U203, 1 );
        }
    }
    return;
}

void sub_61495()
{
    if (NOT (DOES_BLIP_EXIST( l_U275 )))
    {
        ADD_BLIP_FOR_COORD( l_U269._fU0, l_U269._fU4, l_U269._fU8, ref l_U275 );
        if (l_U111)
        {
            SET_ROUTE( l_U275, 1 );
        }
    }
    return;
}

void sub_61588()
{
    if (NOT (DOES_BLIP_EXIST( l_U313 )))
    {
        ADD_BLIP_FOR_COORD( l_U307._fU0, l_U307._fU4, l_U307._fU8, ref l_U313 );
        if (l_U111)
        {
            SET_ROUTE( l_U313, 1 );
        }
    }
    return;
}

void sub_61681()
{
    if (NOT (DOES_BLIP_EXIST( l_U284 )))
    {
        ADD_BLIP_FOR_COORD( l_U278._fU0, l_U278._fU4, l_U278._fU8, ref l_U284 );
        if (l_U111)
        {
            SET_ROUTE( l_U284, 1 );
        }
    }
    return;
}

void sub_61774()
{
    if (NOT (DOES_BLIP_EXIST( l_U322 )))
    {
        ADD_BLIP_FOR_COORD( l_U316._fU0, l_U316._fU4, l_U316._fU8, ref l_U322 );
        if (l_U111)
        {
            SET_ROUTE( l_U322, 1 );
        }
    }
    return;
}

void sub_62056(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 0:
        sub_62117( uParam1 );
        return;
        case 3:
        sub_62204( uParam1 );
        return;
        case 7:
        sub_62291( uParam1 );
        return;
        case 8:
        sub_62378( uParam1 );
        return;
        case 13:
        sub_62465( uParam1 );
        return;
    }
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Not a friend" );
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Should never reach here" );
    return;
}

void sub_62117(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U203 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U203 );
        if (l_U111)
        {
            SET_ROUTE( l_U203, 1 );
        }
    }
    return;
}

void sub_62204(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U275 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U275 );
        if (l_U111)
        {
            SET_ROUTE( l_U275, 1 );
        }
    }
    return;
}

void sub_62291(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U313 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U313 );
        if (l_U111)
        {
            SET_ROUTE( l_U313, 1 );
        }
    }
    return;
}

void sub_62378(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U284 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U284 );
        if (l_U111)
        {
            SET_ROUTE( l_U284, 1 );
        }
    }
    return;
}

void sub_62465(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U322 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U322 );
        if (l_U111)
        {
            SET_ROUTE( l_U322, 1 );
        }
    }
    return;
}

void sub_62752(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_62805( iParam0, uParam1, uParam2 );
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
        sub_62937( iParam0 + 0 );
    }
    return;
}

void sub_62805(int iParam0, int iParam1, int iParam2)
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
        sub_62937( iParam0 + 0 );
    }
    return;
}

void sub_62937(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_62968( iParam0->_fU4 )))
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

int sub_62968(unknown uParam0)
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

void sub_63517(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_60520( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_41613( uParam2, uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( uParam2, uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_63684(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_63719( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_TKHM", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_TKHM2", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_TKHM", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_TKHM", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_TKHM", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_63719(unknown uParam0, unknown uParam1)
{
    unknown[2] uVar4;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    array(ref uVar4, 2);
    switch (uParam0)
    {
        case 0:
        if (g_U15654[6])
        {
            sub_63817( ref uVar4, "MF3_HOSP", "MF3_TKHM" );
            sub_64159( ref uVar4, uParam1, 8, 1 );
        }
        return;
        case 3: return;
        case 7:
        sub_41613( "FCD2_TKHM", uParam1, 8, 1 );
        break;
        case 8:
        sub_41613( "FCB2_TKHM", uParam1, 8, 1 );
        return;
        case 13:
        sub_41613( "FCP_TKHM", uParam1, 8, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_63817(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_63868( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_63868(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_64159(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_64180( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_64180(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_41688( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_64560(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_NOW( "RMDRKHM", 7500, 1 );
        break;
        case 3:
        PRINT_NOW( "JBDRKHM", 7500, 1 );
        break;
        case 7:
        PRINT_NOW( "DWDRKHM", 7500, 1 );
        break;
        case 8:
        PRINT_NOW( "BRDRKHM", 7500, 1 );
        break;
        case 13:
        PRINT_NOW( "PKDRKHM", 7500, 1 );
        break;
    }
    return;
}

void sub_64760(unknown uParam0, boolean bParam1)
{
    boolean bVar4;
    boolean bVar5;

    if ((g_U9193) AND (g_U9194))
    {
        return;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return;
    }
    bVar4 = false;
    if (NOT g_U9193)
    {
        if (bParam1)
        {
            bVar4 = true;
        }
    }
    bVar5 = false;
    if (NOT g_U9194)
    {
        if (g_U22274[uParam0]._fU144 == 7)
        {
            bVar5 = true;
        }
    }
    if (bVar5)
    {
        if (bVar4)
        {
            sub_64892( uParam0 );
            g_U9194 = 1;
            return;
        }
        PRINT_HELP( "FRDRUNK" );
        g_U9194 = 1;
        return;
    }
    if (bVar4)
    {
        if (g_U32898._fU32 == 0)
        {
            sub_65130( uParam0 );
        }
        else
        {
            sub_65313( uParam0 );
        }
        g_U9193 = 1;
    }
    return;
}

void sub_64892(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRDRHMR" );
        break;
        case 3:
        PRINT_HELP( "FRDRHMJ" );
        break;
        case 7:
        PRINT_HELP( "FRDRHMD" );
        break;
        case 8:
        PRINT_HELP( "FRDRHMB" );
        break;
        case 13:
        PRINT_HELP( "FRDRHMP" );
        break;
    }
    return;
}

void sub_65130(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRALTRH" );
        break;
        case 3:
        PRINT_HELP( "FRALTJH" );
        break;
        case 7:
        PRINT_HELP( "FRALTDH" );
        break;
        case 8:
        PRINT_HELP( "FRALTBH" );
        break;
        case 13:
        PRINT_HELP( "FRALTPH" );
        break;
    }
    return;
}

void sub_65313(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRALTR" );
        break;
        case 3:
        PRINT_HELP( "FRALTJ" );
        break;
        case 7:
        PRINT_HELP( "FRALTD" );
        break;
        case 8:
        PRINT_HELP( "FRALTB" );
        break;
        case 13:
        PRINT_HELP( "FRALTP" );
        break;
    }
    return;
}

void sub_65517(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    boolean bVar7;

    if (l_U378)
    {
        return;
    }
    bVar7 = true;
    if (l_U122)
    {
        bVar7 = false;
    }
    if (bVar7)
    {
        if (bParam1)
        {
            sub_61344( uParam0 );
        }
        else
        {
            sub_62056( uParam0, uParam2 );
        }
        return;
    }
    sub_65596( uParam0 );
    return;
}

void sub_65596(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_20816();
        return;
        case 3:
        sub_65662();
        return;
        case 7:
        sub_65694();
        return;
        case 8:
        sub_65726();
        return;
        case 13:
        sub_65758();
        return;
    }
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Not a friend" );
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Should never reach here" );
    return;
}

void sub_65662()
{
    REMOVE_BLIP( l_U275 );
    return;
}

void sub_65694()
{
    REMOVE_BLIP( l_U313 );
    return;
}

void sub_65726()
{
    REMOVE_BLIP( l_U284 );
    return;
}

void sub_65758()
{
    REMOVE_BLIP( l_U322 );
    return;
}

int sub_66218(unknown uParam0, unknown uParam1)
{
    if (sub_66231( ref l_U362 ))
    {
        if (sub_66308( l_U362 ))
        {
            sub_41019( ref l_U362 );
            sub_66586( uParam0, ref l_U141, l_U157, uParam1, l_U153 );
            return 1;
        }
    }
    if (sub_66231( ref l_U366 ))
    {
        if (sub_66308( l_U366 ))
        {
            sub_41019( ref l_U366 );
            sub_66810( uParam0, ref l_U141, l_U157, uParam1, l_U153 );
            l_U370 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_66231(int iParam0)
{
    if (((((ref iParam0->_fU0->_fU4) == -1) AND ((ref iParam0->_fU0->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU4) == -1))
    {
        return 0;
    }
    return 1;
}

int sub_66308(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar7 == uParam0._fU0._fU4) AND (iVar6 == uParam0._fU0._fU0))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_66477( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_66477(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_66586(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    switch (uParam0)
    {
        case 0:
        case 3:
        case 7:
        case 8: return;
        case 13:
        sub_3237( "FCPAAUD" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam2, uParam3, ref uParam4, 0 );
        sub_41613( "FCP_BGET", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_66810(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    switch (uParam0)
    {
        case 0:
        sub_3237( "FCR21AU" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam2, uParam3, ref uParam4, 0 );
        sub_41613( "FCR_TKHM", uParam1, 7, 1 );
        return;
        case 3:
        sub_3237( "FCPAAUD" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam2, uParam3, ref uParam4, 0 );
        sub_41613( "FCJ_BTKHM", uParam1, 7, 1 );
        return;
        case 7:
        sub_3237( "FCD2AU" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam2, uParam3, ref uParam4, 0 );
        sub_41613( "FCD2_TKHM", uParam1, 7, 1 );
        return;
        case 8:
        sub_3237( "FCB2AU" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam2, uParam3, ref uParam4, 0 );
        sub_41613( "FCB2_TKHM", uParam1, 7, 1 );
        return;
        case 13:
        sub_3237( "FCPAAUD" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam2, uParam3, ref uParam4, 0 );
        sub_41613( "FCP_BTKHM", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_67825(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_20703();
        return;
        case 3:
        sub_67891();
        return;
        case 7:
        sub_67920();
        return;
        case 8:
        sub_67949();
        return;
        case 13:
        sub_67978();
        return;
    }
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Not a friend" );
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Should never reach here" );
    return;
}

void sub_67891()
{
    sub_20716( ref l_U268 );
    return;
}

void sub_67920()
{
    sub_20716( ref l_U306 );
    return;
}

void sub_67949()
{
    sub_20716( ref l_U277 );
    return;
}

void sub_67978()
{
    sub_20716( ref l_U315 );
    return;
}

void sub_68679(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_60520( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_41613( "FCJ_DRPOFFL", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_DOFFL", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_69536()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_70128(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (l_U194 == 0)
    {
        if (IS_GROUP_MEMBER( uParam0, sub_21613() ))
        {
            REMOVE_CHAR_FROM_GROUP( uParam0 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            l_U194 = 1;
            return 0;
        }
        SET_PLAYER_CONTROL( sub_3660(), 0 );
        TASK_LEAVE_ANY_CAR( uParam0 );
        l_U194 = 1;
    }
    if (l_U194 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 2, -2, 0.10000000 );
            SETTIMERA( 0 );
            l_U194 = 2;
        }
    }
    if (l_U194 == 2)
    {
        if (TIMERA() > 3000)
        {
            SET_PLAYER_CONTROL( sub_3660(), 1 );
            l_U194 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_70930()
{
    l_U416 = -1;
    return;
}

int sub_70958(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 0;
    }
    if (NOT l_U108)
    {
        return 0;
    }
    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (NOT l_U123)
    {
        return 0;
    }
    if (IS_GROUP_MEMBER( uParam0, sub_21613() ))
    {
        return 0;
    }
    if (NOT l_U122)
    {
        TASK_LOOK_AT_CHAR( uParam0, sub_1591(), -2, 0 );
        l_U122 = 1;
    }
    GET_CHAR_COORDINATES( sub_1591(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_23904( uVar3, uVar6 );
    if (fVar9 < 12.00000000)
    {
        SET_GROUP_MEMBER( sub_21613(), uParam0 );
        TASK_CLEAR_LOOK_AT( uParam0 );
        l_U122 = 0;
        return 0;
    }
    PRINT_NOW( "FA_2FAR", 500, 1 );
    if (fVar9 < 200.00000000)
    {
        return 0;
    }
    TASK_CLEAR_LOOK_AT( uParam0 );
    return 1;
}

void sub_71274()
{
    int iVar2;
    int iVar3;

    if (NOT l_U898)
    {
        return;
    }
    iVar2 = sub_71307( 0, l_U195, ref l_U141 );
    if (NOT (iVar2 == 14))
    {
        sub_83329( iVar2 );
        l_U887 = sub_83542( iVar2 );
        sub_83692( 0, iVar2, "FCR21AU", l_U157, l_U195, ref l_U153, ref l_U141 );
    }
    iVar2 = sub_89444();
    if (NOT (iVar2 == 14))
    {
        l_U126 = sub_89490( iVar2 );
        sub_89721( 0, iVar2, "FCR21AU", l_U157, l_U195, ref l_U153, ref l_U141 );
        sub_97388( iVar2, ref l_U379, ref l_U382, ref l_U385 );
        l_U378 = l_U887;
        sub_59168( iVar2, l_U880, g_U32898._fU32 );
    }
    iVar3 = sub_97513();
    if (iVar3 == 9)
    {
        iVar2 = 14;
    }
    else
    {
        iVar2 = sub_97574( iVar3 );
    }
    if (sub_97799( iVar2, l_U195 ))
    {
        sub_98735( 0, "FCR21AU", l_U157, l_U195, ref l_U153, ref l_U141 );
    }
    if (l_U901)
    {
        l_U123 = 0;
        l_U901 = 0;
    }
    if (l_U902)
    {
        l_U123 = 1;
        l_U902 = 0;
    }
    return;
}

int sub_71307(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    int Result;

    if (l_U910)
    {
        uVar5 = sub_71328( uParam0 );
        sub_71467( uParam0, uParam1, uVar5 );
    }
    if (l_U899)
    {
        sub_75860( uParam0, uParam1, uParam2 );
        return 14;
    }
    Result = 14;
    Result = 6;
    if (sub_81909( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 7;
    if (sub_82080( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 8;
    if (sub_82080( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 11;
    if (sub_81909( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 12;
    if (sub_81909( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 13;
    if (sub_81909( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 5;
    if (sub_81909( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    return 14;
}

int sub_71328(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 4;
        case 3: return 3;
        case 7: return 2;
        case 8: return 1;
        case 13: return 5;
    }
    SCRIPT_ASSERT( "Get_Drunk_Level: Unknown Friend ID" );
    return 0;
}

void sub_71467(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if (NOT l_U855)
    {
        sub_71493( uParam0, uParam1, uParam2 );
        g_U9205 = 0;
        return;
    }
    if (NOT g_U9202)
    {
        sub_20222();
        return;
    }
    if (g_U9205)
    {
        sub_19146( uParam1, 1 );
        g_U9205 = 0;
        return;
    }
    iVar5 = 1;
    sub_72262( iVar5 );
    sub_72404( sub_1591(), iVar5 );
    sub_72567( sub_1591(), iVar5 );
    sub_73168();
    sub_74350( sub_1591(), iVar5 );
    sub_74475( uParam2 );
    sub_74615();
    if ((NOT (IS_CHAR_DEAD( sub_1591() ))) AND (l_U856._fU8))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1591(), 0, 0 );
    }
    if (IS_CHAR_DEAD( uParam1 ))
    {
        return;
    }
    iVar5 = 0;
    sub_72262( iVar5 );
    sub_72404( uParam1, iVar5 );
    sub_75006( uParam1 );
    sub_75428( uParam1 );
    sub_72567( uParam1, iVar5 );
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() )))
    {
        sub_74350( uParam1, iVar5 );
    }
    if ((NOT (IS_CHAR_DEAD( uParam1 ))) AND (l_U865._fU8))
    {
        SET_CURRENT_CHAR_WEAPON( uParam1, 0, 0 );
    }
    return;
}

void sub_71493(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    unknown uVar7;

    sub_71506( ref l_U856 );
    sub_71506( ref l_U865 );
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    l_U856._fU8 = 0;
    l_U865._fU8 = 0;
    iVar6 = sub_19438( sub_1591(), uParam2 );
    uVar7 = sub_19438( uParam1, uParam2 );
    l_U856._fU24 = iVar5 + iVar6;
    l_U865._fU24 = iVar5 + iVar6;
    if (iVar6 > 0)
    {
        l_U856._fU8 = 1;
        l_U865._fU8 = 1;
    }
    sub_19169( uParam2 );
    sub_71690( uParam2 );
    l_U855 = 1;
    g_U9202 = 1;
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        SET_PED_IS_DRUNK( uParam1, 1 );
    }
    if (g_U9204)
    {
        DO_SCREEN_FADE_IN( 500 );
        g_U9204 = 0;
    }
    g_U9205 = 0;
    return;
}

void sub_71506(int iParam0)
{
    iParam0->_fU0 = 0;
    iParam0->_fU4 = 0;
    iParam0->_fU8 = 0;
    iParam0->_fU12 = 0;
    iParam0->_fU16 = 0;
    iParam0->_fU20 = 0;
    iParam0->_fU24 = 0;
    iParam0->_fU28 = 0;
    return;
}

void sub_71690(unknown uParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_DEAD( sub_1591() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar3 );
            fVar4 = 0.00000000;
            GET_CAR_SPEED( uVar3, ref fVar4 );
            if (fVar4 < 0.04000000)
            {
                l_U874 = 0.00000000;
                return;
            }
        }
    }
    switch (uParam0)
    {
        case 0:
        l_U874 = 0.00000000;
        break;
        case 1:
        l_U874 = sub_71872( 0.05000000, 0.02000000 );
        break;
        case 2:
        l_U874 = sub_71872( 0.07000000, 0.03000000 );
        break;
        case 3:
        l_U874 = sub_71872( 0.09000000, 0.04000000 );
        break;
        case 4:
        l_U874 = sub_71872( 0.10000000, 0.05000000 );
        break;
        case 5:
        l_U874 = sub_71872( 0.13000000, 0.06000000 );
        break;
    }
    return;
}

void sub_71872(unknown uParam0, unknown uParam1)
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

void sub_72262(unknown uParam0)
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
    int iVar12;

    uVar3 = {sub_19646( uParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (uVar3._fU4)
    {
        return;
    }
    iVar12 = 0;
    GET_GAME_TIMER( ref iVar12 );
    if (uVar3._fU24 < iVar12)
    {
        uVar3._fU8 = 0;
    }
    sub_72340( uParam0, ref uVar3 );
    return;
}

void sub_72340(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        l_U856 = {(uParam1^)};
    }
    else
    {
        l_U865 = {(uParam1^)};
    }
    return;
}

void sub_72404(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;
    int iVar14;

    uVar4 = {sub_19646( bParam1 )};
    if (NOT uVar4._fU8)
    {
        return;
    }
    if ((uVar4._fU0) || (uVar4._fU4))
    {
        return;
    }
    if (uVar4._fU20)
    {
        return;
    }
    iVar13 = 0;
    GET_GAME_TIMER( ref iVar13 );
    if (iVar13 > uVar4._fU24)
    {
        if (bParam1)
        {
            g_U9202 = 0;
        }
        sub_19581( uParam0 );
        return;
    }
    if (IS_PED_RAGDOLL( uParam0 ))
    {
        return;
    }
    iVar14 = uVar4._fU24 - iVar13;
    sub_19758( uParam0, iVar14 );
    return;
}

void sub_72567(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
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
    float fVar17;
    float fVar18;
    float fVar19;
    int iVar20;
    int iVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    uVar4 = {sub_19646( uParam1 )};
    iVar13 = 0;
    GET_GAME_TIMER( ref iVar13 );
    if (NOT uVar4._fU8)
    {
        return;
    }
    if (uVar4._fU4)
    {
        return;
    }
    if (uVar4._fU20)
    {
        return;
    }
    GET_PED_BONE_POSITION( uParam0, 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar14 );
    fVar17 = uVar14._fU8 + 2.00000000;
    fVar18 = 0.00000000;
    GET_GROUND_Z_FOR_3D_COORD( uVar14._fU0, uVar14._fU4, fVar17, ref fVar18 );
    fVar19 = uVar14._fU8 - fVar18;
    if (fVar19 < 0)
    {
        fVar19 *= -1.00000000;
    }
    iVar20 = 0;
    if (NOT (fVar19 > 1.20000000))
    {
        iVar20 = 1;
    }
    if (uVar4._fU0)
    {
        if (fVar19 > 1.20000000)
        {
            if (uVar4._fU24 > iVar13)
            {
                iVar21 = uVar4._fU24 - iVar13;
                sub_19758( uParam0, iVar21 );
            }
            uVar4._fU28 = 0;
            uVar4._fU0 = 0;
        }
        sub_72340( uParam1, ref uVar4 );
        return;
    }
    if (uVar4._fU16)
    {
        if (iVar13 > uVar4._fU28)
        {
            uVar4._fU16 = 0;
            uVar4._fU0 = 1;
            sub_19581( uParam0 );
            uVar4._fU28 = 0;
        }
        sub_72340( uParam1, ref uVar4 );
        return;
    }
    if (uVar4._fU12)
    {
        if (uVar4._fU32 < iVar13)
        {
            uVar4._fU32 = 0;
            uVar4._fU28 = iVar13 + 100;
            uVar4._fU12 = 0;
            uVar4._fU16 = 1;
        }
        else
        {
            GET_CHAR_VELOCITY( uParam0, ref uVar22._fU0, ref uVar22._fU4, ref uVar22._fU8 );
            if ((VMAG( uVar22 )) < 0.10000000)
            {
                if (uVar4._fU28 == 0)
                {
                    uVar4._fU28 = iVar13 + 1000;
                }
                else if (uVar4._fU28 < iVar13)
                {
                    uVar4._fU32 = 0;
                    uVar4._fU28 = iVar13 + 100;
                    uVar4._fU12 = 0;
                    uVar4._fU16 = 1;
                }
            }
            else
            {
                uVar4._fU28 = 0;
            }
        }
        sub_72340( uParam1, ref uVar4 );
        return;
    }
    if ((CHECK_NM_FEEDBACK( uParam0, 80, 1 )) || (iVar20))
    {
        uVar4._fU12 = 1;
        uVar4._fU28 = 0;
        uVar4._fU32 = iVar13 + 3000;
        sub_72340( uParam1, ref uVar4 );
        return;
    }
    uVar4._fU28 = 0;
    sub_72340( uParam1, ref uVar4 );
    return;
}

void sub_73168()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    boolean bVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    int iVar16;
    int iVar17;
    boolean bVar18;
    float fVar19;
    float fVar20;
    boolean bVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    int iVar29;
    int iVar30;
    unknown uVar31;
    unknown uVar32;

    iVar2 = 1;
    uVar3 = {sub_19646( iVar2 )};
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
    bVar12 = true;
    if (NOT (l_U877 == nil))
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U877 )))
        {
            l_U877 = nil;
        }
    }
    if (l_U877 == nil)
    {
        GET_CHAR_COORDINATES( sub_1591(), ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
        iVar16 = 70;
        l_U877 = GET_CLOSEST_CAR( uVar13, 7.00000000, 0, iVar16 );
        l_U878 = 0;
    }
    if (l_U877 == nil)
    {
        bVar12 = false;
    }
    iVar17 = 1;
    bVar18 = false;
    if (bVar12)
    {
        fVar19 = -1.00000000;
        fVar20 = 2.00000000;
        if (((IS_CAR_MODEL( l_U877, -956048545 )) || (IS_CAR_MODEL( l_U877, 1884962369 ))) || (IS_CAR_MODEL( l_U877, 1208856469 )))
        {
            fVar20 = 4.00000000;
            fVar19 = 0.00000000;
            bVar18 = true;
        }
        if (g_U33837)
        {
            fVar20 = 4.00000000;
            fVar19 = 0.00000000;
            bVar18 = true;
        }
        bVar21 = false;
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U877, fVar19, 0.00000000, 0.00000000, ref uVar22._fU0, ref uVar22._fU4, ref uVar22._fU8 );
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), uVar22._fU0, uVar22._fU4, uVar22._fU8, fVar20, fVar20, fVar20, 0 ))
        {
            bVar21 = true;
            iVar17 = 1;
        }
        if ((NOT bVar21) AND (NOT bVar18))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U877, 1.00000000, 0.00000000, 0.00000000, ref uVar22._fU0, ref uVar22._fU4, ref uVar22._fU8 );
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), uVar22._fU0, uVar22._fU4, uVar22._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                bVar21 = true;
                iVar17 = 0;
            }
        }
        if (NOT bVar21)
        {
            bVar12 = false;
            l_U877 = nil;
        }
    }
    iVar25 = 0;
    GET_GAME_TIMER( ref iVar25 );
    iVar26 = nil;
    if (uVar3._fU4)
    {
        bVar27 = false;
        if (sub_38307( sub_1591() ))
        {
            bVar27 = true;
        }
        if (NOT bVar27)
        {
            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar28 );
                GET_DRIVER_OF_CAR( uVar28, ref iVar26 );
                if (iVar26 == sub_1591())
                {
                    bVar27 = true;
                }
                else if (NOT l_U878)
                {
                    TASK_SHUFFLE_TO_NEXT_CAR_SEAT( sub_1591(), uVar28 );
                    l_U878 = 1;
                    uVar3._fU32 = iVar25 + 1000;
                }
                else if (iVar25 > uVar3._fU32)
                {
                    GET_SCRIPT_TASK_STATUS( sub_1591(), 39, ref iVar29 );
                    if (NOT (iVar29 == 7))
                    {
                        uVar3._fU32 = iVar25 + 1000;
                    }
                    else
                    {
                        l_U878 = 0;
                    }
                };;;
            }
        }
        if (bVar27)
        {
            uVar3._fU4 = 0;
            uVar3._fU20 = 1;
            l_U878 = 0;
            sub_74006();
            sub_74042();
        }
        else if (NOT bVar12)
        {
            CLEAR_CHAR_TASKS( sub_1591() );
            uVar3._fU4 = 0;
            if (uVar3._fU24 > iVar25)
            {
                iVar30 = uVar3._fU24 - iVar25;
                sub_19758( sub_1591(), iVar30 );
            }
        }
        sub_72340( iVar2, ref uVar3 );
        return;
    }
    if (NOT bVar12)
    {
        return;
    }
    if (NOT (IS_CONTROL_PRESSED( 2, 3 )))
    {
        return;
    }
    sub_19581( sub_1591() );
    SET_NEXT_DESIRED_MOVE_STATE( 2 );
    GET_CAR_MODEL( l_U877, ref uVar31 );
    uVar32 = IS_THIS_MODEL_A_BIKE( uVar31 );
    if ((iVar17) || (uVar32))
    {
        TASK_ENTER_CAR_AS_DRIVER( sub_1591(), l_U877, -1 );
    }
    else
    {
        TASK_ENTER_CAR_AS_PASSENGER( sub_1591(), l_U877, -1, 0 );
    }
    uVar3._fU4 = 1;
    sub_72340( iVar2, ref uVar3 );
    return;
}

void sub_74006()
{
    if (l_U400)
    {
        return;
    }
    l_U399 = 1;
    return;
}

void sub_74042()
{
    if (g_U9195)
    {
        return;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return;
    }
    PRINT_HELP( "DRKTAXI" );
    g_U9195 = 1;
    return;
}

void sub_74350(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;
    int iVar14;

    uVar4 = {sub_19646( uParam1 )};
    if (NOT uVar4._fU8)
    {
        return;
    }
    if (NOT uVar4._fU20)
    {
        return;
    }
    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        return;
    }
    iVar13 = 0;
    GET_GAME_TIMER( ref iVar13 );
    iVar14 = uVar4._fU24 - iVar13;
    sub_19758( uParam0, iVar14 );
    uVar4._fU20 = 0;
    l_U878 = 0;
    sub_72340( uParam1, ref uVar4 );
    return;
}

void sub_74475(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    boolean bVar5;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1591() )))
    {
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar3 );
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    bVar5 = false;
    if (l_U875 == 0)
    {
        bVar5 = true;
    }
    else if (iVar4 > l_U875)
    {
        bVar5 = true;
    }
    if (bVar5)
    {
        sub_71690( uParam0 );
        l_U875 = iVar4 + 1000;
    }
    SET_VEHICLE_STEER_BIAS( uVar3, l_U874 );
    return;
}

void sub_74615()
{
    unknown uVar2;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT (IS_PLAYER_PLAYING( sub_3660() )))
    {
        return;
    }
    if (sub_38307( sub_1591() ))
    {
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() )))
    {
        return;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_3660(), 0 ))
    {
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar2 );
    GET_CAR_SPEED( uVar2, ref fVar3 );
    if (fVar3 < 0.50000000)
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_1591(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    uVar7._fU0 = uVar4._fU0 - 30.00000000;
    uVar7._fU4 = uVar4._fU4 - 30.00000000;
    uVar7._fU8 = uVar4._fU8 - 3.00000000;
    uVar10._fU0 = uVar4._fU0 + 30.00000000;
    uVar10._fU4 = uVar4._fU4 + 30.00000000;
    uVar10._fU8 = uVar4._fU8 + 3.00000000;
    if (NOT (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar7._fU0, uVar7._fU4, uVar7._fU8, uVar10._fU0, uVar10._fU4, uVar10._fU8 )))
    {
        return;
    }
    ALTER_WANTED_LEVEL_NO_DROP( sub_3660(), 1 );
    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3660() );
    return;
}

void sub_75006(unknown uParam0)
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
    int iVar13;
    boolean bVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    int iVar18;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        return;
    }
    iVar3 = 0;
    uVar4 = {sub_19646( iVar3 )};
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
    if (NOT (IS_PED_RAGDOLL( uParam0 )))
    {
        return;
    }
    iVar13 = 0;
    GET_GAME_TIMER( ref iVar13 );
    bVar14 = false;
    if (l_U876 == 0)
    {
        bVar14 = true;
    }
    else if (l_U876 < iVar13)
    {
        bVar14 = true;
    }
    if (NOT bVar14)
    {
        return;
    }
    if (IS_CHAR_INJURED( sub_1591() ))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_1591(), ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
    iVar18 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar18 );
    if (iVar18 < 50)
    {
        uVar15._fU0 += 1.00000000;
    }
    else
    {
        uVar15._fU0 -= 1.00000000;
    }
    iVar18 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar18 );
    if (iVar18 < 50)
    {
        uVar15._fU4 += 1.00000000;
    }
    else
    {
        uVar15._fU4 -= 1.00000000;
    }
    CREATE_NM_MESSAGE( 1, 119 );
    SET_NM_MESSAGE_VEC3( 121, uVar15 );
    SET_NM_MESSAGE_FLOAT( 122, 0.20000000 );
    SEND_NM_MESSAGE( uParam0 );
    l_U876 = iVar13 + 5000;
    sub_72340( iVar3, ref uVar4 );
    return;
}

void sub_75428(unknown uParam0)
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
    float fVar19;
    unknown uVar20;

    iVar3 = 0;
    uVar4 = {sub_19646( iVar3 )};
    if (NOT uVar4._fU8)
    {
        return;
    }
    if (uVar4._fU0)
    {
        return;
    }
    if (uVar4._fU20)
    {
        return;
    }
    if ((uVar4._fU16) || (uVar4._fU12))
    {
        return;
    }
    if (uVar4._fU4)
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            uVar4._fU4 = 0;
            uVar4._fU20 = 1;
        }
        sub_72340( iVar3, ref uVar4 );
        return;
    }
    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return;
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1591() )))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_1591(), ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
    GET_CHAR_COORDINATES( sub_1591(), ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
    fVar19 = 0.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar13._fU0, uVar13._fU4, uVar13._fU8, uVar16._fU0, uVar16._fU4, uVar16._fU8, ref fVar19 );
    if (NOT (fVar19 < 5.00000000))
    {
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar20 );
    sub_19581( uParam0 );
    SET_NEXT_DESIRED_MOVE_STATE( 2 );
    TASK_ENTER_CAR_AS_PASSENGER( uParam0, uVar20, -2, 0 );
    uVar4._fU4 = 1;
    sub_72340( iVar3, ref uVar4 );
    return;
}

void sub_75860(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (l_U905)
    {
        case 0:
        sub_75921();
        break;
        case 1:
        sub_76052();
        break;
        case 2:
        sub_76448( uParam0, uParam1, uParam2 );
        break;
        case 3:
        sub_77513( uParam0, uParam1, uParam2 );
        break;
        case 4:
        sub_78868( uParam0 );
        break;
    }
    return;
}

void sub_75921()
{
    if (l_U906 == 0)
    {
        sub_75942();
        l_U906++;
    }
    if (l_U906 == 1)
    {
        if (sub_55818())
        {
            l_U906 = 99;
        }
    }
    if (l_U906 == 99)
    {
        l_U905 = 1;
        l_U906 = 0;
    }
    return;
}

void sub_75942()
{
    g_U9212 = 1;
    g_U9347 = 1;
    return;
}

void sub_76052()
{
    unknown uVar2;

    l_U883 = sub_76061();
    sub_76146( l_U900, l_U883 );
    uVar2 = sub_14934( l_U927 );
    sub_56402( uVar2, l_U900 );
    l_U899 = 0;
    l_U882 = l_U900;
    l_U900 = 14;
    if (l_U880)
    {
        l_U886 = 1;
    }
    sub_76376();
    g_U9205 = 1;
    l_U905 = 5;
    return;
}

void sub_76061()
{
    unknown Result;

    Result = g_U32898._fU20;
    g_U32898._fU8 = 9;
    g_U32898._fU20 = 8;
    g_U32898._fU24 = 0;
    g_U32898._fU28 = 0;
    return Result;
}

void sub_76146(unknown uParam0, unknown uParam1)
{
    if (l_U897 == 3)
    {
        SCRIPT_ASSERT( "Store_Alternative_Result: All allowed alternative activities have already been played" );
    }
    l_U890[l_U897]._fU0 = uParam0;
    l_U890[l_U897]._fU4 = uParam1;
    l_U897++;
    return;
}

void sub_76376()
{
    if (l_U882 == 12)
    {
        g_U9212 = 0;
        g_U9347 = 0;
    }
    return;
}

void sub_76448(unknown uParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    if (l_U906 == 0)
    {
        SET_PLAYER_CONTROL( sub_3660(), 0 );
        sub_75942();
        sub_76487();
        l_U906++;
    }
    if (l_U906 == 1)
    {
        if (sub_54246())
        {
            sub_76834( uParam1 );
            SETTIMERA( 0 );
            l_U906++;
        }
    }
    bVar5 = true;
    if (l_U906 == 2)
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_ANY_CAR( uParam1 ))
            {
                bVar5 = false;
            }
        }
        if (NOT (IS_CHAR_DEAD( sub_1591() )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
            {
                bVar5 = false;
            }
        }
        if (bVar5)
        {
            l_U906 = 99;
        }
    }
    if (l_U906 == 99)
    {
        l_U905 = 3;
        l_U906 = 0;
    }
    return;
}

void sub_76487()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    l_U907 = 1;
    iVar2 = 0;
    BEGIN_CAM_COMMANDS( ref iVar2 );
    switch (l_U900)
    {
        case 7:
        uVar3 = {l_U790[l_U889]._fU20};
        uVar6 = {l_U790[l_U889]._fU32};
        break;
        case 8:
        uVar3 = {l_U417[l_U889]._fU20};
        uVar6 = {l_U417[l_U889]._fU32};
        break;
        default: SCRIPT_ASSERT( "Start_NonMission_Camera_Move_Before_Fade: Unknown activity" );
    }
    CREATE_CAM( 14, ref l_U908 );
    SET_CAM_POS( l_U908, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
    SET_CAM_ROT( l_U908, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
    SET_CAM_ACTIVE( l_U908, 1 );
    SET_CAM_PROPAGATE( l_U908, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return;
}

void sub_76834(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    iVar3 = -1;
    switch (l_U900)
    {
        case 7:
        iVar3 = l_U790[l_U889]._fU0;
        break;
        case 8:
        iVar3 = l_U417[l_U889]._fU0;
        break;
        default: SCRIPT_ASSERT( "Start_NonMission_Walk_Towards_Destination: Unknown activity" );
    }
    bVar4 = false;
    if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref l_U909 );
        bVar4 = true;
    }
    OPEN_SEQUENCE_TASK( ref uVar5 );
    if (bVar4)
    {
        if (IS_CHAR_IN_CAR( sub_1591(), l_U909 ))
        {
            TASK_LEAVE_CAR( 0, l_U909 );
        }
    }
    uVar6 = {g_U10324[iVar3]._fU0};
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar6._fU0, uVar6._fU4, uVar6._fU8, 2, -2, 2.00000000 );
    CLOSE_SEQUENCE_TASK( uVar5 );
    TASK_PERFORM_SEQUENCE( sub_1591(), uVar5 );
    CLEAR_SEQUENCE_TASK( uVar5 );
    if (IS_GROUP_MEMBER( uParam0, sub_21613() ))
    {
        l_U901 = 1;
        REMOVE_CHAR_FROM_GROUP( uParam0 );
    }
    if (IS_CHAR_INJURED( uParam0 ))
    {
        return;
    }
    if (bVar4)
    {
        if (IS_CAR_DEAD( l_U909 ))
        {
            return;
        }
    }
    OPEN_SEQUENCE_TASK( ref uVar5 );
    if (bVar4)
    {
        if (IS_CHAR_IN_CAR( uParam0, l_U909 ))
        {
            TASK_PAUSE( 0, 600 );
            TASK_LEAVE_CAR( 0, l_U909 );
        }
    }
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar6._fU0, uVar6._fU4, uVar6._fU8, 2, -2, 2.00000000 );
    CLOSE_SEQUENCE_TASK( uVar5 );
    TASK_PERFORM_SEQUENCE( uParam0, uVar5 );
    CLEAR_SEQUENCE_TASK( uVar5 );
    return;
}

void sub_77513(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    boolean bVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    int iVar18;

    bVar13 = false;
    switch (l_U900)
    {
        case 7:
        uVar5 = l_U790[l_U889]._fU0;
        uVar6 = {g_U10324[uVar5]._fU0};
        uVar9 = {l_U790[l_U889]._fU4};
        uVar12 = l_U790[l_U889]._fU16;
        bVar13 = true;
        break;
        case 8:
        uVar5 = l_U417[l_U889]._fU0;
        uVar6 = {g_U10324[uVar5]._fU0};
        uVar9 = {l_U417[l_U889]._fU4};
        uVar12 = l_U417[l_U889]._fU16;
        break;
        default: SCRIPT_ASSERT( "Has_NonMission_Cutscene_Ended: Unknown activity" );
    }
    if (l_U906 == 0)
    {
        g_U9204 = 0;
        SETTIMERA( 0 );
        l_U906++;
    }
    if (l_U906 == 1)
    {
        if (NOT (sub_59314( (uParam2^) )))
        {
            l_U906++;
        }
    }
    if (l_U906 == 2)
    {
        if (TIMERA() >= 1500)
        {
            DO_SCREEN_FADE_OUT( 1000 );
            SETTIMERA( 0 );
            l_U906++;
        }
    }
    if (l_U906 == 3)
    {
        if ((TIMERA() > 1200) AND (IS_SCREEN_FADED_OUT()))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1591() );
            CLEAR_CHAR_TASKS_IMMEDIATELY( uParam1 );
            l_U906++;
        }
    }
    if (l_U906 == 4)
    {
        if (IS_VEH_DRIVEABLE( l_U909 ))
        {
            SET_CAR_HEADING( l_U909, uVar12 );
            SET_CAR_COORDINATES( l_U909, uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( l_U909 );
        }
        if (NOT l_U887)
        {
            SET_CHAR_COORDINATES( uParam1, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            uVar14 = {sub_78086( uVar6, uVar9 )};
            SET_CHAR_COORDINATES( sub_1591(), uVar14._fU0, uVar14._fU4, uVar14._fU8 );
            uVar17 = sub_59849( uVar9, uVar6 );
            SET_CHAR_HEADING( uParam1, uVar17 );
            uVar17 = sub_59849( uVar9, uVar14 );
            SET_CHAR_HEADING( sub_1591(), uVar17 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CURRENT_CHAR_WEAPON( sub_1591(), 0, 0 );
        }
        if (bVar13)
        {
            SET_ROMANS_MOOD( 3 );
        }
        SETTIMERA( 0 );
        l_U906++;
    }
    if (l_U906 == 5)
    {
        SET_CAM_ACTIVE( l_U908, 0 );
        SET_CAM_PROPAGATE( l_U908, 0 );
        DESTROY_ALL_CAMS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        iVar18 = 0;
        END_CAM_COMMANDS( ref iVar18 );
        l_U907 = 0;
        l_U906++;
    }
    if (l_U906 == 6)
    {
        if (l_U887)
        {
            g_U9205 = 1;
            l_U906 = 99;
        }
        else if (l_U900 == 7)
        {
            g_U9204 = 1;
            l_U906++;
        }
        else
        {
            g_U9205 = 1;
            if (TIMERA() >= 1000)
            {
                DO_SCREEN_FADE_IN( 1000 );
                SETTIMERA( 0 );
                l_U906++;
            }
        }
    }
    if (l_U906 == 7)
    {
        if (g_U9204)
        {
            l_U906++;
        }
        else if ((TIMERA() > 1200) AND (IS_SCREEN_FADED_IN()))
        {
            l_U906++;
        }
    }
    if (l_U906 == 8)
    {
        SET_PLAYER_CONTROL( sub_3660(), 1 );
        SET_GROUP_MEMBER( sub_21613(), uParam1 );
        l_U902 = 1;
        l_U906++;
    }
    if (l_U906 == 9)
    {
        if (l_U900 == 7)
        {
            if (NOT g_U9194)
            {
                PRINT_HELP( "FRDRUNK" );
                g_U9194 = 1;
            }
        }
        l_U906 = 99;
    }
    if (l_U906 == 99)
    {
        l_U905 = 4;
        l_U906 = 0;
    }
    return;
}

void sub_78086(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_78868(unknown uParam0)
{
    unknown uVar3;

    l_U883 = sub_78884( l_U900, uParam0 );
    sub_76146( l_U900, l_U883 );
    uVar3 = sub_14934( l_U927 );
    sub_56402( uVar3, l_U900 );
    switch (l_U900)
    {
        case 7:
        sub_81117( uVar3 );
        sub_81523();
        break;
        case 8:
        sub_81558( uVar3 );
        sub_81637();
        if (NOT (IS_CHAR_DEAD( sub_1591() )))
        {
            SET_CHAR_HEALTH( sub_1591(), 200 );
            RESET_VISIBLE_PED_DAMAGE( sub_1591() );
        }
        break;
        default: SCRIPT_ASSERT( "Perform_Alternative_NonMinigame_Complete: Unknown non-minigame ID" );
    }
    l_U899 = 0;
    l_U882 = l_U900;
    l_U900 = 14;
    if (l_U880)
    {
        l_U886 = 1;
    }
    if (l_U882 == 7)
    {
        l_U910 = 1;
    }
    if (l_U882 == 8)
    {
        l_U911 = 1;
    }
    l_U905 = 5;
    return;
}

int sub_78884(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 7: return sub_78925( uParam1, l_U889 );
        case 8: return sub_80000( uParam1, l_U889 );
    }
    SCRIPT_ASSERT( "Return_Alternative_NonMinigame_Result_For_Activity: unknown activity" );
    return 8;
}

int sub_78925(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0: return sub_78985( uParam1 );
        case 3: return sub_79165( uParam1 );
        case 7: return sub_79349( uParam1 );
        case 8: return sub_79534( uParam1 );
        case 13: return sub_79723( uParam1 );
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Friend: unknown friend" );
    return 8;
}

int sub_78985(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U790[uParam0]._fU0;
    uVar4 = g_U10324[uVar3]._fU16;
    switch (uVar4)
    {
        case 8:
        case 9:
        case 6:
        case 7: return 2;
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Roman: Unknown Map Blip Subgroup" );
    return 8;
}

int sub_79165(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U790[uParam0]._fU0;
    uVar4 = g_U10324[uVar3]._fU16;
    switch (uVar4)
    {
        case 9: return 0;
        case 8:
        case 6:
        case 7: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Jacob: Unknown Map Blip Subgroup" );
    return 8;
}

int sub_79349(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U790[uParam0]._fU0;
    uVar4 = g_U10324[uVar3]._fU16;
    switch (uVar4)
    {
        case 8:
        case 9: return 0;
        case 6:
        case 7: return 2;
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Dwayne: Unknown Map Blip Subgroup" );
    return 8;
}

int sub_79534(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U790[uParam0]._fU0;
    uVar4 = g_U10324[uVar3]._fU16;
    switch (uVar4)
    {
        case 9: return 0;
        case 7: return 2;
        case 8:
        case 6: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Brucie: Unknown Map Blip Subgroup" );
    return 8;
}

int sub_79723(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U790[uParam0]._fU0;
    uVar4 = g_U10324[uVar3]._fU16;
    switch (uVar4)
    {
        case 8: return 0;
        case 6:
        case 7: return 2;
        case 9: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Packie: Unknown Map Blip Subgroup" );
    return 8;
}

int sub_80000(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0: return sub_80052( uParam1 );
        case 3: return sub_80254( uParam1 );
        case 7: return sub_80461( uParam1 );
        case 8: return sub_80669( uParam1 );
    }
    SCRIPT_ASSERT( "Return_Alternative_Eating_Result_For_Friend: unknown friend" );
    return 8;
}

int sub_80052(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U417[uParam0]._fU0;
    uVar4 = g_U10324[uVar3]._fU16;
    switch (uVar4)
    {
        case 16: return 0;
        case 14:
        case 15: return 2;
        case 13:
        case 12:
        case 11: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Eating_Result_For_Roman: Unknown Food Map Blip Subgroup" );
    return 8;
}

int sub_80254(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U417[uParam0]._fU0;
    uVar4 = g_U10324[uVar3]._fU16;
    switch (uVar4)
    {
        case 11:
        case 16: return 0;
        case 13:
        case 12: return 2;
        case 14:
        case 15: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Eating_Result_For_Jacob: Unknown Food Map Blip Subgroup" );
    return 8;
}

int sub_80461(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U417[uParam0]._fU0;
    uVar4 = g_U10324[uVar3]._fU16;
    switch (uVar4)
    {
        case 11:
        case 14:
        case 15: return 0;
        case 13:
        case 12: return 2;
        case 16: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Eating_Result_For_Dwayne: Unknown Food Map Blip Subgroup" );
    return 8;
}

int sub_80669(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U417[uParam0]._fU0;
    uVar4 = g_U10324[uVar3]._fU16;
    switch (uVar4)
    {
        case 14:
        case 15: return 0;
        case 13:
        case 12: return 2;
        case 11:
        case 16: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Eating_Result_For_Brucie: Unknown Food Map Blip Subgroup" );
    return 8;
}

void sub_81117(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    uVar3 = sub_81128( uParam0 );
    fVar4 = 50;
    fVar5 = fVar4 * uVar3;
    uVar6 = sub_81336( fVar5 );
    sub_81486( uVar6 );
    return;
}

float sub_81128(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 1.00000000;
        case 3: return 1.20000000;
        case 7: return 1.00000000;
        case 8: return 0.00000000;
        case 13: return 1.20000000;
        case 2: return 1.00000000;
        case 10: return 1.00000000;
        case 28: return 1.00000000;
        case 29: return 1.00000000;
        case 30: return 1.00000000;
    }
    return 1.00000000;
}

void sub_81336(unknown uParam0)
{
    int iVar3;
    int Result;
    int iVar5;

    iVar3 = sub_81345();
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
    sub_81441( iVar5 );
    return Result;
}

void sub_81345()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_3660() ))
    {
        STORE_SCORE( sub_3660(), ref Result );
    }
    return Result;
}

void sub_81441(unknown uParam0)
{
    ADD_SCORE( sub_3660(), uParam0 );
    return;
}

void sub_81486(unknown uParam0)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 94, uParam0 );
    return;
}

void sub_81523()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 283, 1 );
    return;
}

void sub_81558(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    uVar3 = sub_81128( uParam0 );
    fVar4 = 100;
    fVar5 = fVar4 * uVar3;
    uVar6 = sub_81336( fVar5 );
    sub_81600( uVar6 );
    return;
}

void sub_81600(unknown uParam0)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 97, uParam0 );
    return;
}

void sub_81637()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 306, 1 );
    return;
}

int sub_81909(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = sub_47758( uParam0 );
    if (iVar6 == 9)
    {
        return 0;
    }
    if (NOT (sub_81942( iVar6 )))
    {
        return 0;
    }
    l_U905 = 0;
    l_U906 = 0;
    l_U899 = 1;
    l_U900 = uParam0;
    sub_75860( uParam1, uParam2, uParam3 );
    return 1;
}

int sub_81942(int iParam0)
{
    boolean bVar3;

    bVar3 = g_U32898._fU24;
    if (NOT bVar3)
    {
        return 0;
    }
    if (g_U32898._fU8 == iParam0)
    {
        return 1;
    }
    return 0;
}

int sub_82080(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    if (sub_82089() <= 0)
    {
        return 0;
    }
    iVar6 = -1;
    switch (uParam0)
    {
        case 7:
        iVar6 = sub_82158( uParam2 );
        break;
        case 8:
        iVar6 = sub_82644( uParam2 );
        break;
        default: SCRIPT_ASSERT( "Check_If_New_Alternative_NonMinigame_Activity_Started: Unknown Activity ID" );
    }
    if (iVar6 == -1)
    {
        return 0;
    }
    sub_83031();
    l_U912[uParam0]--;
    l_U905 = 2;
    l_U906 = 0;
    l_U899 = 1;
    l_U900 = uParam0;
    l_U889 = iVar6;
    sub_75860( uParam1, uParam2, uParam3 );
    return 1;
}

void sub_82089()
{
    return g_U32898._fU32;
}

int sub_82158(unknown uParam0)
{
    int Result;
    int iVar4;
    int iVar5;
    float fVar6;

    if (NOT (l_U912[7] > 0))
    {
        return -1;
    }
    Result = 0;
    iVar4 = 0;
    iVar5 = 0;
    fVar6 = 0.00000000;
    for ( Result = 0; Result < 5; Result++ )
    {
        iVar4 = l_U790[Result]._fU0;
        if ((sub_82230( Result )) AND (NOT (sub_82293( iVar4 ))))
        {
            iVar5 = g_U10324[iVar4]._fU28 == g_U9937;
            fVar6 = l_U790[Result]._fU4._fU8;
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), l_U790[Result]._fU4._fU0, l_U790[Result]._fU4._fU4, fVar6, 2.50000000, 2.50000000, 2.50000000, iVar5 )) AND (NOT (sub_38307( sub_1591() ))))
            {
                if (sub_82501( uParam0 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_82230(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U790[uParam0]._fU0;
    if (NOT g_U9932[g_U10324[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    return 1;
}

int sub_82293(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 4:
        if (l_U879 == 6)
        {
            if (NOT l_U880)
            {
                return 1;
            }
            else if (NOT l_U886)
            {
                return 1;
            }
        }
        break;
        default:
    }
    return 0;
}

int sub_82501(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 10.00000000, 10.00000000, 10.00000000, 0 )))
    {
        return 0;
    }
    return 1;
}

int sub_82644(unknown uParam0)
{
    int Result;
    int iVar4;
    int iVar5;
    float fVar6;

    if (NOT (l_U912[8] > 0))
    {
        return -1;
    }
    Result = 0;
    iVar4 = 0;
    iVar5 = 0;
    fVar6 = 0.00000000;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (sub_82703( Result ))
        {
            iVar4 = l_U417[Result]._fU0;
            iVar5 = g_U10324[iVar4]._fU28 == g_U9937;
            fVar6 = l_U417[Result]._fU4._fU8;
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), l_U417[Result]._fU4._fU0, l_U417[Result]._fU4._fU4, fVar6, 2.50000000, 2.50000000, 2.50000000, iVar5 )) AND (NOT (sub_38307( sub_1591() ))))
            {
                if (sub_82501( uParam0 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_82703(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U417[uParam0]._fU0;
    if (NOT g_U9932[g_U10324[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    return 1;
}

void sub_83031()
{
    if (NOT (g_U32898._fU32 > 0))
    {
        return;
    }
    g_U32898._fU32--;
    return;
}

void sub_83329(int iParam0)
{
    if (iParam0 == 8)
    {
        sub_83347();
        return;
    }
    sub_54727();
    return;
}

void sub_83347()
{
    if (l_U344._fU8)
    {
        sub_54727();
        return;
    }
    l_U344._fU32 = 1;
    sub_83386();
    return;
}

void sub_83386()
{
    unknown uVar2;

    if (l_U344._fU24)
    {
        return;
    }
    uVar2 = sub_83416( l_U147 );
    g_U22274[l_U158]._fU688._fU28 = uVar2;
    return;
}

void sub_83416(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_59314( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

boolean sub_83542(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    switch (uParam0)
    {
        case 8: break;
        default: return 0;
    }
    uVar3 = sub_14934( l_U927 );
    if (NOT g_U22274[uVar3]._fU172)
    {
        return 0;
    }
    if (NOT l_U880)
    {
        return 0;
    }
    iVar4 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
    return iVar4 < 20;
}

void sub_83692(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if (l_U881)
    {
        return;
    }
    if (iParam1 == l_U879)
    {
        return;
    }
    iVar9 = 0;
    sub_54745( uParam6, iVar9 );
    sub_3237( uParam2 );
    sub_3356( 0, sub_1591(), "NIKO", 0 );
    sub_3356( uParam3, uParam4, uParam5, 0 );
    sub_83788( iParam1, uParam0, uParam6 );
    return;
}

void sub_83788(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 6:
        sub_83866( uParam1, uParam2 );
        l_U881 = 1;
        return;
        case 7:
        sub_84027( uParam1, uParam2, l_U889 );
        l_U881 = 1;
        return;
        case 8:
        sub_86188( uParam1, uParam2, l_U889 );
        l_U881 = 1;
        return;
        case 11:
        sub_88035( uParam1, uParam2 );
        l_U881 = 1;
        return;
        case 12:
        if (g_U9937 == 2)
        {
            sub_88206( uParam1, uParam2 );
        }
        else
        {
            switch (uParam1)
            {
                case 0:
                sub_88429( uParam1, uParam2 );
                break;
                default: sub_88681( uParam1, uParam2 );
            }
        }
        l_U881 = 1;
        return;
        case 13:
        sub_88918( uParam1, uParam2 );
        l_U881 = 1;
        return;
        case 5:
        sub_89150( uParam1, uParam2 );
        l_U881 = 1;
        return;
    }
    SCRIPT_ASSERT( "Play_Alternative_Activity_Started_Speech_For_Activity: Activity speech not set up" );
    return;
}

void sub_83866(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_DDY", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_DDY", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_DDY", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84027(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_84091( uParam0, uParam1, uParam2 );
        return;
        case 3:
        sub_84944( uParam0, uParam1, uParam2 );
        return;
        case 7:
        sub_85291( uParam0, uParam1, uParam2 );
        return;
        case 8:
        sub_85653( uParam0, uParam1, uParam2 );
        return;
        case 13:
        sub_85869( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Drinking_Arrival_Speech_By_Friend: Unknown friend ID" );
    return;
}

void sub_84091(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U790[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 8:
        if (NOT g_U15654[23])
        {
            sub_84185( uParam0, uParam1 );
        }
        else if (NOT g_U15654[24])
        {
            sub_84292( uParam0, uParam1 );
        }
        else
        {
            sub_84385( uParam0, uParam1 );
        }
        break;
        case 9:
        sub_84611( uParam0, uParam1 );
        break;
        case 6:
        case 7:
        sub_84385( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Arrival_Speech_By_Roman: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_84185(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRPVA", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84292(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRPVD", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84385(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRPG", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARRPG", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRPG", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_ARRPG", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_ARRPG", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84611(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRCG", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARRCG", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRCG", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_ARRCG", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_ARRCG", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84944(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U790[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 9:
        sub_85024( uParam0, uParam1 );
        break;
        case 8:
        case 6:
        case 7:
        sub_84385( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Arrival_Speech_By_Jacob: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_85024(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_41613( "FCJ_ARRPF", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRCF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_ARRCF", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_85291(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U790[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 9:
        sub_85024( uParam0, uParam1 );
        break;
        case 8:
        sub_85385( uParam0, uParam1 );
        break;
        case 6:
        case 7:
        sub_84385( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Arrival_Speech_By_Dwayne: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_85385(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 7:
        sub_41613( "FCD2_ARRPF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_ARRPF", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_ARRPF", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_85653(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U790[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 9:
        sub_85024( uParam0, uParam1 );
        break;
        case 7:
        sub_85385( uParam0, uParam1 );
        break;
        case 8:
        case 6:
        sub_84385( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Arrival_Speech_By_Brucie: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_85869(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U790[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 8:
        sub_85385( l_U158, ref l_U141 );
        break;
        case 9:
        sub_84611( l_U158, ref l_U141 );
        break;
        case 6:
        case 7:
        sub_84385( l_U158, ref l_U141 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Arrival_Speech_By_Packie: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_86188(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_86244( uParam0, uParam1, uParam2 );
        return;
        case 3:
        sub_87109( uParam0, uParam1, uParam2 );
        return;
        case 7:
        sub_87470( uParam0, uParam1, uParam2 );
        return;
        case 8:
        sub_87719( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Eating_Arrival_Speech_By_Friend: Unknown friend ID" );
    return;
}

void sub_86244(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U417[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 16:
        sub_86340( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_86432( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_86625( uParam0, uParam1 );
        break;
        case 11:
        sub_86820( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Arrival_Speech_By_Roman: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_86340(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRBS", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_86432(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRHI", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARRHI", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRHI", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_ARRHI", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_86625(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRSTA", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARRSTA", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRST", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_ARRST", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_86820(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRFF", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARRFF", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRFF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_ARRFF", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_87109(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U417[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 11:
        sub_87205( uParam0, uParam1 );
        break;
        case 16:
        sub_86820( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_86432( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_86625( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Arrival_Speech_By_Jacob: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_87205(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_41613( "FCJ_ARRCL", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRCLK", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_87470(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U417[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 11:
        sub_87205( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_86432( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_86625( uParam0, uParam1 );
        break;
        case 16:
        sub_86820( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Arrival_Speech_By_Dwayne: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_87719(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U417[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 11:
        case 16:
        sub_86820( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_86432( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_86625( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Arrival_Speech_By_Brucie: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_88035(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_DPY", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_DIFFPY", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_DPY", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88206(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRSHC", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARRSH", uParam1, 7, 1 );
        return;
        case 7: return;
        case 8:
        sub_41613( "FCB2_ARRSHC", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_ARRSHC", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88429(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = false;
    if (g_U15654[25])
    {
        if (NOT g_U15654[26])
        {
            sub_88472( uParam0, uParam1 );
            bVar4 = true;
        }
        else if (NOT g_U15654[27])
        {
            sub_88582( uParam0, uParam1 );
            bVar4 = true;
        }
    }
    if (NOT bVar4)
    {
        sub_88681( uParam0, uParam1 );
    }
    return;
}

void sub_88472(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRCFA", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88582(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRCFD", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88681(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRSHCA", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARRSHCA", uParam1, 7, 1 );
        return;
        case 7: return;
        case 8:
        sub_41613( "FCB2_ARRSHCA", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_ARRSHCA", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88918(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_ARRST", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_ARRST", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_ARRSTR", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_ARRSTR", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_ARRST", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_89150(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_DBY", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_DIFBY", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_DBY", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_DBY", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_89444()
{
    unknown Result;

    Result = l_U882;
    l_U882 = 14;
    return Result;
}

int sub_89490(unknown uParam0)
{
    l_U888 = 0;
    switch (uParam0)
    {
        case 13: break;
        default: return 0;
    }
    if (l_U883 == 8)
    {
        SCRIPT_ASSERT( "m_altResultForSpeech = MGR_NOT_SET: Make sure this function called before Activity_Finished_Speech()" );
    }
    if (NOT (l_U883 == 7))
    {
        return 0;
    }
    l_U888 = 1;
    return 1;
}

void sub_89721(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if ((NOT l_U887) AND (NOT l_U888))
    {
        iVar9 = 0;
        sub_54745( uParam6, iVar9 );
        sub_3237( uParam2 );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam3, uParam4, uParam5, 0 );
        sub_89811( uParam1, l_U883, uParam0, uParam6 );
    }
    l_U883 = 8;
    return;
}

void sub_89811(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 6:
        sub_58097( uParam1, uParam2, uParam3 );
        return;
        case 7:
        sub_89908( uParam2, uParam3, l_U889 );
        return;
        case 8:
        sub_92046( uParam2, uParam3, l_U889 );
        return;
        case 11:
        sub_93861( uParam1, uParam2, uParam3 );
        return;
        case 12:
        if (g_U9937 == 2)
        {
            sub_94631( uParam1, uParam2, uParam3 );
        }
        else
        {
            sub_95064( uParam1, uParam2, uParam3 );
        }
        return;
        case 13:
        sub_95891( uParam1, uParam2, uParam3 );
        return;
        case 5:
        sub_96388( uParam1, uParam2, uParam3 );
        return;
    }
    SCRIPT_ASSERT( "Play_Activity_Ended_Speech_For_Activity: Activity speech not set up" );
    return;
}

void sub_89908(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_89972( uParam0, uParam1, uParam2 );
        return;
        case 3:
        sub_90818( uParam0, uParam1, uParam2 );
        return;
        case 7:
        sub_91160( uParam0, uParam1, uParam2 );
        return;
        case 8:
        sub_91517( uParam0, uParam1, uParam2 );
        return;
        case 13:
        sub_91733( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Friend: Unknown friend ID" );
    return;
}

void sub_89972(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U790[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 8:
        if (NOT g_U15654[23])
        {
            sub_90066( uParam0, uParam1 );
        }
        else if (NOT g_U15654[24])
        {
            sub_90172( uParam0, uParam1 );
            g_U15654[24] = 1;
        }
        else
        {
            sub_90273( uParam0, uParam1 );
        }
        break;
        case 9:
        sub_90491( uParam0, uParam1 );
        break;
        case 6:
        case 7:
        sub_90273( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Roman: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_90066(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVPVA", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90172(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVPVD", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90273(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVPG", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_LPG", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_LPG", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_LPG", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_LVPG", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90491(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVCG", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_LCLG", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_LCG", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_LCG", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_LVCLG", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90818(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U790[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 9:
        sub_90898( uParam0, uParam1 );
        break;
        case 8:
        case 6:
        case 7:
        sub_90273( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Jacob: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_90898(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_41613( "FCJ_LCLF", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_LCF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_LCF", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91160(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U790[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 9:
        sub_90898( uParam0, uParam1 );
        break;
        case 8:
        sub_91254( uParam0, uParam1 );
        break;
        case 6:
        case 7:
        sub_90273( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Dwayne: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_91254(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 7:
        sub_41613( "FCD2_LPF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_LPF", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_LVCF", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91517(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U790[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 9:
        sub_90898( uParam0, uParam1 );
        break;
        case 7:
        sub_91254( uParam0, uParam1 );
        break;
        case 8:
        case 6:
        sub_90273( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Brucie: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_91733(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U790[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 8:
        sub_91254( l_U158, ref l_U141 );
        break;
        case 9:
        sub_90491( l_U158, ref l_U141 );
        break;
        case 6:
        case 7:
        sub_90273( l_U158, ref l_U141 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Packie: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_92046(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_92102( uParam0, uParam1, uParam2 );
        return;
        case 3:
        sub_92944( uParam0, uParam1, uParam2 );
        return;
        case 7:
        sub_93301( uParam0, uParam1, uParam2 );
        return;
        case 8:
        sub_93549( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Friend: Unknown friend ID" );
    return;
}

void sub_92102(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U417[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 16:
        sub_92198( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_92289( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_92475( uParam0, uParam1 );
        break;
        case 11:
        sub_92662( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Roman: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_92198(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVBS", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_92289(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVHI", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_LHI", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_LHI", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_LHI", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_92475(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVST", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_LST", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_LSTD", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_LST", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_92662(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVFF", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_LFF", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_LFF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_LFF", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_92944(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U417[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 11:
        sub_93040( uParam0, uParam1 );
        break;
        case 16:
        sub_92662( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_92289( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_92475( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Jacob: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_93040(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_41613( "FCJ_LCL", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_LCLK", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_93301(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U417[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 11:
        sub_93040( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_92289( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_92475( uParam0, uParam1 );
        break;
        case 16:
        sub_92662( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Jacob: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_93549(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U417[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 11:
        case 16:
        sub_92662( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_92289( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_92475( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Brucie: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_93861(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_93915( uParam1, uParam2 );
        break;
        case 2:
        sub_94069( uParam1, uParam2 );
        break;
        case 1:
        sub_94223( uParam1, uParam2 );
        break;
        case 3:
        sub_94377( uParam1, uParam2 );
        break;
        default: sub_4627( "Ended_Pool_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_93915(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_PLVW", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_PLW", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_PLVW", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94069(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_PLVD", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_PLD", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_PLVD", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94223(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_PLVL", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_PLL", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_PLVL", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94377(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_PLVA", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_PLA", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_PLVA", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94631(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 3)
    {
        sub_94653( uParam1, uParam2 );
    }
    else
    {
        sub_94854( uParam1, uParam2 );
    }
    return;
}

void sub_94653(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVSHE", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_LSHE", uParam1, 7, 1 );
        return;
        case 7: return;
        case 8:
        sub_41613( "FCB2_LSHE", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_LVSHE", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94854(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVSHC", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_LSH", uParam1, 7, 1 );
        return;
        case 7: return;
        case 8:
        sub_41613( "FCB2_LSHC", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_LVSHC", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95064(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 3)
    {
        switch (uParam1)
        {
            case 0:
            sub_95103( uParam1, uParam2 );
            break;
            default: sub_95157( uParam1, uParam2 );
        }
    }
    else
    {
        switch (uParam1)
        {
            case 0:
            sub_95397( uParam1, uParam2 );
            break;
            default: sub_95656( uParam1, uParam2 );
        }
    }
    return;
}

void sub_95103(unknown uParam0, unknown uParam1)
{
    if (((g_U15654[25]) AND (g_U15654[26])) AND (NOT g_U15654[27]))
    {
        g_U15654[27] = 1;
    }
    sub_95157( uParam0, uParam1 );
    return;
}

void sub_95157(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVSHE", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_LSHE", uParam1, 7, 1 );
        return;
        case 7: return;
        case 8:
        sub_41613( "FCB2_LSHE", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_LVSHE", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95397(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = false;
    if (g_U15654[25])
    {
        if (NOT g_U15654[26])
        {
            sub_95440( uParam0, uParam1 );
            bVar4 = true;
        }
        else if (NOT g_U15654[27])
        {
            sub_95549( uParam0, uParam1 );
            g_U15654[27] = 1;
            bVar4 = true;
        }
    }
    if (NOT bVar4)
    {
        sub_95656( uParam0, uParam1 );
    }
    return;
}

void sub_95440(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVCFA", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95549(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVCFD", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95656(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR2_LVSHCA", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_LSHC", uParam1, 7, 1 );
        return;
        case 7: return;
        case 8:
        sub_41613( "FCB2_LSHCA", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_LVSHCA", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95891(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 1)
    {
        return;
    }
    if (iParam0 == 3)
    {
        sub_95925( uParam1, uParam2 );
    }
    else
    {
        sub_96155( uParam1, uParam2 );
    }
    return;
}

void sub_95925(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LVSTOK", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_LSTOK", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_LSTROK", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_LSTROK", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_LVSTOK", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_96155(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_LSTG", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_LSTG", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_LSTRPG", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_LSTRG", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_LVSTG", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_96388(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_96442( uParam1, uParam2 );
        break;
        case 2:
        sub_96629( uParam1, uParam2 );
        break;
        case 1:
        sub_96816( uParam1, uParam2 );
        break;
        case 3:
        sub_97003( uParam1, uParam2 );
        break;
        default: sub_4627( "Ended_Bowling_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_96442(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_BLVW", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_BLW", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_BLW", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_BLVW", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_96629(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_BLVD", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_BLD", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_BLD", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_BLVD", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_96816(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_BLVL", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_BLL", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_BLL", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_BLVL", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_97003(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_BLVA", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_BLA", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_BLA", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_BLVA", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_97388(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (iParam0 == 8)
    {
        (uParam1^) = {l_U417[l_U889]._fU48};
        (uParam2^) = {l_U417[l_U889]._fU60};
        (uParam3^) = {l_U417[l_U889]._fU72};
        return;
    }
    return;
}

void sub_97513()
{
    unknown Result;

    Result = g_U32898._fU12;
    g_U32898._fU12 = 9;
    return Result;
}

int sub_97574(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 4;
        case 7: return 5;
        case 1: return 6;
        case 2: return 9;
        case 3: return 11;
        case 5: return 12;
        case 6: return 13;
    }
    SCRIPT_ASSERT( "Convert_Minigame_Activity_To_Phone_Activity: Minigame activity doesn't have a phone activity ID" );
    return 14;
}

int sub_97799(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == 14))
    {
        l_U885 = iParam0;
    }
    if (l_U885 == 14)
    {
        return 0;
    }
    if (l_U885 == l_U879)
    {
        return 0;
    }
    if (l_U885 == l_U884)
    {
        return 0;
    }
    switch (l_U885)
    {
        case 6: return sub_97935( uParam1 );
        case 11: return sub_98102( uParam1 );
        case 12: return sub_98142( uParam1 );
        case 13: return sub_98201( uParam1 );
        case 5: return sub_98558( uParam1 );
    }
    SCRIPT_ASSERT( "Check_If_Issue_No_To_Alternative_Activity: Unrecognised activity ID" );
    return 0;
}

int sub_97935(unknown uParam0)
{
    if (sub_97947( uParam0, 10 ))
    {
        return 1;
    }
    return 0;
}

void sub_97947(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = {g_U10324[uParam1]._fU0};
    return sub_97976( uParam0, uVar4 );
}

void sub_97976(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return 0;
    }
    if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_1591(), uParam1._fU0, uParam1._fU4, uParam1._fU8, 4.00000000, 4.00000000, 4.00000000, 0 )))
    {
        return 0;
    }
    return sub_82501( uParam0 );
}

int sub_98102(unknown uParam0)
{
    if (sub_97947( uParam0, 9 ))
    {
        return 1;
    }
    return 0;
}

int sub_98142(unknown uParam0)
{
    if (sub_97947( uParam0, 11 ))
    {
        return 1;
    }
    if (sub_97947( uParam0, 40 ))
    {
        return 1;
    }
    return 0;
}

int sub_98201(unknown uParam0)
{
    int iVar3;

    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return 0;
    }
    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    GET_INTERIOR_FROM_CHAR( sub_1591(), ref iVar3 );
    if (iVar3 == nil)
    {
        return 0;
    }
    if ((((sub_98291( uParam0, "Bada_room1" )) || (sub_98291( uParam0, "Bada-Private" ))) || (sub_98291( uParam0, "Bada_room2" ))) || (sub_98291( uParam0, "Bada_room1" )))
    {
        return 1;
    }
    if ((((sub_98291( uParam0, "clammainroom" )) || (sub_98291( uParam0, "clampalbkrm" ))) || (sub_98291( uParam0, "clamfronrm" ))) || (sub_98291( uParam0, "clammainroom" )))
    {
        return 1;
    }
    return 0;
}

int sub_98291(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = GET_HASH_KEY( uParam1 );
    GET_KEY_FOR_CHAR_IN_ROOM( sub_1591(), ref iVar5 );
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

int sub_98558(unknown uParam0)
{
    if (sub_97947( uParam0, 8 ))
    {
        return 1;
    }
    if (sub_97947( uParam0, 39 ))
    {
        return 1;
    }
    return 0;
}

void sub_98735(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 0;
    sub_54745( uParam5, iVar8 );
    sub_3237( uParam1 );
    sub_3356( 0, sub_1591(), "NIKO", 0 );
    sub_3356( uParam2, uParam3, uParam4, 0 );
    sub_98800( uParam0, uParam5 );
    l_U884 = l_U885;
    return;
}

void sub_98800(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41613( "FCR_DACTN", uParam1, 7, 1 );
        return;
        case 3:
        sub_41613( "FCJ_DIFFAN", uParam1, 7, 1 );
        return;
        case 7:
        sub_41613( "FCD2_DIFNO", uParam1, 7, 1 );
        return;
        case 8:
        sub_41613( "FCB2_DACTN", uParam1, 7, 1 );
        return;
        case 13:
        sub_41613( "FCP_DACTN", uParam1, 7, 1 );
        return;
    }
    sub_41613( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_99098()
{
    sub_99112( 0, 53, 2 );
    return;
}

void sub_99112(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    iVar5 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, uParam2, ref iVar5 );
    iVar5 += iParam1;
    array(ref uVar6._fU0._fU0, 3);
    ref uVar6._fU0;
    ref uVar6;
    uVar13 = sub_30935( uParam0 );
    sub_31426( uVar13, iVar5, 16383, 16383, ref uVar6 );
    sub_31770( ref uVar6, 1 );
    sub_31798( ref uVar6, 0 );
    sub_31826( ref uVar6, 2 );
    sub_31856( ref uVar6 );
    return;
}

void sub_99235(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown uVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    sub_99257( uParam0 );
    sub_99896();
    if (l_U344._fU0)
    {
        if (sub_59314( l_U141 ))
        {
            return;
        }
        if (IS_PLAYER_PLAYING( sub_3660() ))
        {
            if (IS_AMBIENT_SPEECH_PLAYING( sub_1591() ))
            {
                return;
            }
            STOP_PED_SPEAKING( sub_1591(), 1 );
        }
        l_U344._fU0 = 0;
        l_U344._fU4 = 1;
        l_U344._fU12 = 0;
        l_U344._fU20 = 0;
        l_U344._fU24 = 0;
        l_U344._fU28 = 0;
        return;
    }
    sub_100293( uParam0 );
    if (l_U344._fU4)
    {
        if (sub_101008( uParam0 ))
        {
            l_U344._fU4 = 0;
            if (l_U344._fU8)
            {
                l_U344._fU20 = iVar3 + 10000;
            }
            else if (g_U15654[6])
            {
                l_U344._fU20 = iVar3 + 15000;
            }
            else
            {
                l_U344._fU20 = iVar3 + 5000;
            }
            return;
        }
    }
    if (NOT (l_U344._fU20 == 0))
    {
        if (NOT (sub_101008( uParam0 )))
        {
            l_U344._fU4 = 1;
            l_U344._fU20 = 0;
            return;
        }
        if (iVar3 > l_U344._fU20)
        {
            bVar4 = false;
            if (NOT l_U344._fU8)
            {
                sub_101388( l_U158 );
                sub_3356( 0, sub_1591(), "NIKO", 0 );
                sub_3356( l_U157, uParam0, ref l_U153, 0 );
                if (NOT (sub_101829( l_U158, ref l_U147, l_U344._fU16 )))
                {
                    bVar4 = true;
                }
            }
            else
            {
                sub_106545( l_U158 );
                sub_3356( 0, sub_1591(), "NIKO", 0 );
                sub_3356( l_U157, uParam0, ref l_U153, 0 );
                sub_106947( l_U158, ref l_U147 );
            }
            if (bVar4)
            {
                ;
            }
            l_U344._fU20 = 0;
            l_U344._fU12 = 1;
            g_U22274[l_U158]._fU688._fU28 = -1;
        }
        return;
    }
    if (sub_110371( uParam0 ))
    {
        return;
    }
    if (l_U344._fU12)
    {
        if (g_U22274[l_U158]._fU688._fU24 >= 0)
        {
            bVar5 = false;
            if (NOT l_U344._fU24)
            {
                if ((sub_99291( ref l_U147 )) || ((sub_83416( l_U147 )) > 5))
                {
                    bVar5 = true;
                }
            }
            if (bVar5)
            {
                if (g_U15654[6])
                {
                    return;
                }
                l_U344._fU12 = 0;
                uVar6 = g_U22274[l_U158]._fU688._fU24;
                SET_BIT( ref g_U22274[l_U158]._fU688._fU4, uVar6 );
                if (IS_PLAYER_PLAYING( sub_3660() ))
                {
                    STOP_PED_SPEAKING( sub_1591(), 0 );
                }
            }
            return;
        }
    }
    return;
}

void sub_99257(unknown uParam0)
{
    unknown uVar3;

    if (l_U344._fU24)
    {
        l_U397 = 0;
        return;
    }
    if (NOT (sub_99291( ref l_U147 )))
    {
        l_U397 = 0;
        return;
    }
    if (IS_CHAR_DEAD( sub_1591() ))
    {
        l_U397 = 0;
        return;
    }
    if (IS_CHAR_DEAD( uParam0 ))
    {
        l_U397 = 0;
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() )))
    {
        l_U397 = 0;
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar3 );
    if (NOT (IS_CHAR_SITTING_IN_CAR( uParam0, uVar3 )))
    {
        l_U397 = 0;
        return;
    }
    if (l_U397)
    {
        if (NOT sub_99481())
        {
            SAY_AMBIENT_SPEECH( sub_1591(), "MESSING_WITH_PHONE", 0, 0, 0 );
            l_U397 = 0;
        }
        return;
    }
    if (sub_99572( l_U158, 1 ))
    {
        l_U397 = 1;
        return;
    }
    return;
}

int sub_99291(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            return 0;
        }
    }
    return 1;
}

int sub_99481()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_99572(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_41787( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_41787( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U91._fU0 == 1005) AND (g_U91._fU60 == iParam0))
    {
        if (bParam1)
        {
            if ((g_U91._fU508 >= 4) AND (NOT g_U91._fU372))
            {
                return 1;
            }
        }
        else if (NOT g_U91._fU368)
        {
            return 1;
        }
    }
    return 0;
}

void sub_99896()
{
    if (l_U400)
    {
        if (sub_99291( ref l_U141 ))
        {
            l_U344._fU48 = 0;
            l_U400 = 0;
            l_U399 = 0;
        }
        return;
    }
    if (NOT l_U399)
    {
        return;
    }
    if (NOT l_U344._fU24)
    {
        l_U344._fU48 = 1;
        sub_83386();
        return;
    }
    if (NOT (sub_99291( ref l_U147 )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return;
    }
    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() )) AND (NOT (sub_38307( sub_1591() ))))
    {
        sub_3237( "MF10AUD" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_41613( "MF5_DRUNK", ref l_U141, 7, 1 );
        l_U399 = 0;
        l_U400 = 1;
        return;
    }
    l_U400 = 0;
    l_U399 = 0;
    return;
}

void sub_100293(unknown uParam0)
{
    sub_100304( uParam0 );
    sub_100479( uParam0 );
    sub_100801( uParam0 );
    return;
}

void sub_100304(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if ((IS_CHAR_DEAD( sub_1591() )) || (IS_CHAR_DEAD( uParam0 )))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_1591(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_23904( uVar3, uVar6 );
    if (l_U344._fU36)
    {
        if (fVar9 < 6.00000000)
        {
            l_U344._fU36 = 0;
        }
        return;
    }
    if (fVar9 < 12.00000000)
    {
        return;
    }
    l_U344._fU36 = 1;
    sub_83386();
    return;
}

void sub_100479(unknown uParam0)
{
    boolean bVar3;
    int iVar4;
    int iVar5;

    if ((IS_CHAR_DEAD( sub_1591() )) || (IS_CHAR_DEAD( uParam0 )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_INJURED( sub_1591() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_INJURED( uParam0 ))
    {
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        iVar4 = 0;
        iVar5 = 0;
        GET_CHAR_HEALTH( sub_1591(), ref iVar4 );
        GET_CHAR_HEALTH( uParam0, ref iVar5 );
        if (l_U344._fU52 == 64537)
        {
            l_U344._fU52 = iVar4;
        }
        if (l_U344._fU56 == 64537)
        {
            l_U344._fU56 = iVar5;
        }
        if (iVar4 < l_U344._fU52)
        {
            bVar3 = true;
        }
        if (iVar5 < l_U344._fU56)
        {
            bVar3 = true;
        }
        l_U344._fU52 = iVar4;
        l_U344._fU56 = iVar5;
    }
    if (l_U344._fU40)
    {
        if (NOT bVar3)
        {
            l_U344._fU40 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    if (l_U344._fU8)
    {
        return;
    }
    l_U344._fU40 = 1;
    sub_83386();
    return;
}

void sub_100801(unknown uParam0)
{
    boolean bVar3;

    if ((IS_CHAR_DEAD( sub_1591() )) || (IS_CHAR_DEAD( uParam0 )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_SHOOTING( sub_1591() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_1591() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_SHOOTING( uParam0 ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_IN_MELEE_COMBAT( uParam0 ))
    {
        bVar3 = true;
    }
    if (l_U344._fU44)
    {
        if (NOT bVar3)
        {
            l_U344._fU44 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    l_U344._fU44 = 1;
    sub_83386();
    return;
}

int sub_101008(unknown uParam0)
{
    unknown uVar3;

    if ((sub_101017()) || (l_U344._fU24))
    {
        return 0;
    }
    if (NOT l_U344._fU8)
    {
        if ((NOT (IS_CHAR_DEAD( sub_1591() ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar3 );
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

int sub_101017()
{
    if (((((l_U344._fU32) || (l_U344._fU36)) || (l_U344._fU40)) || (l_U344._fU44)) || (l_U344._fU48))
    {
        return 1;
    }
    return 0;
}

void sub_101388(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U15654[6])
        {
            sub_3237( "MF5AUD" );
        }
        else
        {
            sub_3237( "FCRC1AU" );
        }
        return;
        case 3:
        sub_3237( "FCJC1AU" );
        return;
        case 7:
        sub_3237( "FCD3AU" );
        return;
        case 8:
        sub_3237( "FCB3AU" );
        return;
        case 13:
        sub_3237( "FCPC1AU" );
        return;
    }
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Not a friend" );
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Should never reach here" );
    return;
}

int sub_101829(int iParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int I;
    int iVar11;
    boolean bVar12;
    int iVar13;

    if ((iParam0 == 0) AND (g_U15654[6]))
    {
        iVar5 = 0;
        sub_41613( "MF3_DRIVE", uParam1, 5, iVar5 );
        return 1;
    }
    switch (iParam0)
    {
        case 0:
        case 3:
        case 7:
        case 8:
        case 13: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: Unrecognised friend ID" );
        return 0;
    }
    g_U22274[iParam0]._fU688._fU24 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_102151( iParam0 );
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    I = 0;
    if ((NOT g_U22274[iParam0]._fU688._fU12) AND (uParam2))
    {
        iVar7 = g_U22274[iParam0]._fU688._fU0;
        iVar8 = g_U22274[iParam0]._fU688._fU4;
        iVar9 = g_U22274[iParam0]._fU688._fU8;
        I = 0;
        for ( I = 0; I < iVar9; I++ )
        {
            if ((IS_BIT_SET( iVar7, I )) AND (NOT (IS_BIT_SET( iVar8, I ))))
            {
                CLEAR_BIT( ref g_U22274[iParam0]._fU688._fU0, I );
            }
        }
    }
    sub_102643( iParam0 );
    iVar6 = 0;
    iVar7 = g_U22274[iParam0]._fU688._fU0;
    iVar9 = g_U22274[iParam0]._fU688._fU8;
    I = 0;
    for ( I = 0; I < iVar9; I++ )
    {
        if (NOT (IS_BIT_SET( iVar7, I )))
        {
            iVar6++;
        }
    }
    if ((iVar6 == 0) AND (uParam2))
    {
        iVar8 = g_U22274[iParam0]._fU688._fU4;
        for ( I = 0; I < iVar9; I++ )
        {
            if (NOT (IS_BIT_SET( iVar8, I )))
            {
                CLEAR_BIT( ref g_U22274[iParam0]._fU688._fU0, I );
                iVar6++;
            }
        }
    }
    if (iVar6 == 0)
    {
        return 0;
    }
    iVar11 = 0;
    if (g_U22274[iParam0]._fU688._fU12)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar6, ref iVar11 );
    }
    iVar7 = g_U22274[iParam0]._fU688._fU0;
    bVar12 = false;
    for ( I = 0; I < iVar9; I++ )
    {
        if (NOT bVar12)
        {
            if (NOT (IS_BIT_SET( iVar7, I )))
            {
                if (iVar11 == 0)
                {
                    g_U22274[iParam0]._fU688._fU24 = I;
                    SET_BIT( ref g_U22274[iParam0]._fU688._fU0, I );
                    bVar12 = true;
                }
                else
                {
                    iVar11--;
                }
            }
        }
    }
    if (NOT bVar12)
    {
        sub_4627( "FA_Friend_Speech_Generic_Conversations: Tell Keith: something fundamentally wrong with algorithm" );
        return 0;
    }
    PRINTSTRING( "AFTER\n" );
    sub_102151( iParam0 );
    iVar13 = 0;
    switch (iParam0)
    {
        case 0:
        sub_103454( uParam1, iVar13 );
        return 1;
        case 3:
        sub_104190( uParam1, iVar13 );
        return 1;
        case 7:
        sub_104756( uParam1, iVar13 );
        return 1;
        case 8:
        sub_105268( uParam1, iVar13 );
        return 1;
        case 13:
        sub_105827( uParam1, iVar13 );
        return 1;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: must have forgotten to update friend ID when added speech" );
    return 0;
}

void sub_102151(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int I;

    uVar3 = g_U22274[uParam0]._fU688._fU0;
    uVar4 = g_U22274[uParam0]._fU688._fU4;
    iVar5 = g_U22274[uParam0]._fU688._fU8;
    iVar6 = iVar5 + g_U22274[uParam0]._fU688._fU16;
    I = 0;
    for ( I = 0; I < iVar6; I++ )
    {
        if (I == iVar5)
        {
            PRINTSTRING( " " );
        }
        if (IS_BIT_SET( uVar3, I ))
        {
            PRINTSTRING( "1" );
        }
        else
        {
            PRINTSTRING( "0" );
        }
    }
    PRINTNL();
    for ( I = 0; I < iVar6; I++ )
    {
        if (I == iVar5)
        {
            PRINTSTRING( " " );
        }
        if (IS_BIT_SET( uVar4, I ))
        {
            PRINTSTRING( "1" );
        }
        else
        {
            PRINTSTRING( "0" );
        }
    }
    PRINTNL();
    PRINTNL();
    return;
}

void sub_102643(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        if (g_U15654[11])
        {
            iVar3 = 1;
            SET_BIT( ref g_U22274[uParam0]._fU688._fU0, iVar3 );
            SET_BIT( ref g_U22274[uParam0]._fU688._fU4, iVar3 );
        }
        break;
        case 13:
        if ((g_U15654[52]) AND (NOT g_U15654[12]))
        {
            iVar3 = 9;
            SET_BIT( ref g_U22274[uParam0]._fU688._fU0, iVar3 );
            SET_BIT( ref g_U22274[uParam0]._fU688._fU4, iVar3 );
        }
        break;
    }
    return;
}

void sub_103454(unknown uParam0, boolean bParam1)
{
    char[60] cVar4;
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
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    int iVar61;
    int iVar62;
    int iVar63;
    int iVar64;

    if (NOT (14 == g_U22274[0]._fU688._fU8))
    {
        sub_4627( "FA_Roman_Speech_Generic_Conversations: inconsistent number of Roman conversations - see Roman Flow" );
        return;
    }
    array(ref cVar4, 14);
    StrCopy( ref cVar4[0], "FCR3_REV", 16 );
    StrCopy( ref cVar4[1], "FCR3_CONV2", 16 );
    StrCopy( ref cVar4[2], "FCR3_OPTIM", 16 );
    StrCopy( ref cVar4[3], "FCR3_CONV4", 16 );
    StrCopy( ref cVar4[4], "FCR3_USA", 16 );
    StrCopy( ref cVar4[5], "FCR3_CONV6", 16 );
    StrCopy( ref cVar4[6], "FCR3_RELA", 16 );
    StrCopy( ref cVar4[7], "FCR3_CONV8", 16 );
    StrCopy( ref cVar4[8], "FCR3_GAMBLE", 16 );
    StrCopy( ref cVar4[9], "FCR3_CONV10", 16 );
    StrCopy( ref cVar4[10], "FCR3_MUM", 16 );
    StrCopy( ref cVar4[11], "FCR3_CONV12", 16 );
    StrCopy( ref cVar4[12], "FCR3_MAKE", 16 );
    StrCopy( ref cVar4[13], "FCR3_CONV14", 16 );
    iVar61 = 0;
    iVar62 = g_U22274[0]._fU688._fU24;
    iVar63 = g_U22274[0]._fU688._fU28;
    if (iVar62 >= 8)
    {
        sub_103932( "FCRC2AU" );
    }
    if (iVar62 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar63 == -1))
        {
            iVar64 = 0;
            sub_104043( ref cVar4[iVar62], iVar63, iVar64, uParam0, 5, iVar61 );
        }
        return;
    }
    sub_41613( ref cVar4[iVar62], uParam0, 5, iVar61 );
    return;
}

int sub_103932(unknown uParam0)
{
    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        StrCopy( ref l_U4._fU0, uParam0, 16 );
        return 1;
    }
    return 0;
}

void sub_104043(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_104068( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_104068(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_41688( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_104190(unknown uParam0, boolean bParam1)
{
    char[60] cVar4;
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
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    int iVar61;
    int iVar62;
    int iVar63;
    int iVar64;

    if (NOT (14 == g_U22274[3]._fU688._fU8))
    {
        sub_4627( "FA_Jacob_Speech_Generic_Conversations: inconsistent number of Jacob conversations - see Jacob Flow" );
        return;
    }
    array(ref cVar4, 14);
    StrCopy( ref cVar4[0], "FCJ_JC1", 16 );
    StrCopy( ref cVar4[1], "FCJ_JC2", 16 );
    StrCopy( ref cVar4[2], "FCJ_JC3", 16 );
    StrCopy( ref cVar4[3], "FCJ_JC4", 16 );
    StrCopy( ref cVar4[4], "FCJ_JC5", 16 );
    StrCopy( ref cVar4[5], "FCJ_JC6", 16 );
    StrCopy( ref cVar4[6], "FCJ_JC7", 16 );
    StrCopy( ref cVar4[7], "FCJ_JC8", 16 );
    StrCopy( ref cVar4[8], "FCJ_JC9", 16 );
    StrCopy( ref cVar4[9], "FCJ_JC10", 16 );
    StrCopy( ref cVar4[10], "FCJ_JC11", 16 );
    StrCopy( ref cVar4[11], "FCJ_JC12", 16 );
    StrCopy( ref cVar4[12], "FCJ_JC13", 16 );
    StrCopy( ref cVar4[13], "FCJ_JC14", 16 );
    iVar61 = 0;
    iVar62 = g_U22274[3]._fU688._fU24;
    iVar63 = g_U22274[3]._fU688._fU28;
    if (iVar62 >= 8)
    {
        sub_103932( "FCJC2AU" );
    }
    if (iVar62 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar63 == -1))
        {
            iVar64 = 0;
            sub_104043( ref cVar4[iVar62], iVar63, iVar64, uParam0, 5, iVar61 );
        }
        return;
    }
    sub_41613( ref cVar4[iVar62], uParam0, 5, iVar61 );
    return;
}

void sub_104756(unknown uParam0, boolean bParam1)
{
    char[48] cVar4;
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
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    int iVar49;
    int iVar50;
    int iVar51;
    int iVar52;

    if (NOT (11 == g_U22274[7]._fU688._fU8))
    {
        sub_4627( "FA_Dwayne_Speech_Generic_Conversations: inconsistent number of Dwayne conversations - see Dwayne Flow" );
        return;
    }
    array(ref cVar4, 11);
    StrCopy( ref cVar4[0], "FCD3_GEN1", 16 );
    StrCopy( ref cVar4[1], "FCD3_GEN2", 16 );
    StrCopy( ref cVar4[2], "FCD3_GEN3", 16 );
    StrCopy( ref cVar4[3], "FCD3_GEN4", 16 );
    StrCopy( ref cVar4[4], "FCD3_GEN5", 16 );
    StrCopy( ref cVar4[5], "FCD3_GEN6", 16 );
    StrCopy( ref cVar4[6], "FCD3_GEN7", 16 );
    StrCopy( ref cVar4[7], "FCD3_GEN8", 16 );
    StrCopy( ref cVar4[8], "FCD3_GEN9", 16 );
    StrCopy( ref cVar4[9], "FCD3_GEN10", 16 );
    StrCopy( ref cVar4[10], "FCD3_GEN11", 16 );
    iVar49 = 0;
    iVar50 = g_U22274[7]._fU688._fU24;
    iVar51 = g_U22274[7]._fU688._fU28;
    if (iVar50 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar51 == -1))
        {
            iVar52 = 0;
            sub_104043( ref cVar4[iVar50], iVar51, iVar52, uParam0, 5, iVar49 );
        }
        return;
    }
    sub_41613( ref cVar4[iVar50], uParam0, 5, iVar49 );
    return;
}

void sub_105268(unknown uParam0, boolean bParam1)
{
    char[52] cVar4;
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
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    int iVar53;
    int iVar54;
    int iVar55;
    int iVar56;

    if (NOT (12 == g_U22274[8]._fU688._fU8))
    {
        sub_4627( "FA_Brucie_Speech_Generic_Conversations: inconsistent number of Brucie conversations - see Brucie Flow" );
        return;
    }
    array(ref cVar4, 12);
    StrCopy( ref cVar4[0], "FCB3_GEN1", 16 );
    StrCopy( ref cVar4[1], "FCB3_GEN2", 16 );
    StrCopy( ref cVar4[2], "FCB3_GEN3", 16 );
    StrCopy( ref cVar4[3], "FCB3_GEN4", 16 );
    StrCopy( ref cVar4[4], "FCB3_GEN5", 16 );
    StrCopy( ref cVar4[5], "FCB3_GEN6", 16 );
    StrCopy( ref cVar4[6], "FCB3_GEN7", 16 );
    StrCopy( ref cVar4[7], "FCB3_GEN8", 16 );
    StrCopy( ref cVar4[8], "FCB3_GEN9", 16 );
    StrCopy( ref cVar4[9], "FCB3_GEN10", 16 );
    StrCopy( ref cVar4[10], "FCB3_GEN11", 16 );
    StrCopy( ref cVar4[11], "FCB3_GEN12", 16 );
    iVar53 = 0;
    iVar54 = g_U22274[8]._fU688._fU24;
    iVar55 = g_U22274[8]._fU688._fU28;
    if (iVar54 >= 10)
    {
        sub_103932( "FCB4AUD" );
    }
    if (iVar54 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar55 == -1))
        {
            iVar56 = 0;
            sub_104043( ref cVar4[iVar54], iVar55, iVar56, uParam0, 5, iVar53 );
        }
        return;
    }
    sub_41613( ref cVar4[iVar54], uParam0, 5, iVar53 );
    return;
}

void sub_105827(unknown uParam0, boolean bParam1)
{
    char[56] cVar4;
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
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    int iVar57;
    int iVar58;
    int iVar59;
    int iVar60;

    if (NOT (13 == g_U22274[13]._fU688._fU8))
    {
        sub_4627( "FA_Packie_Speech_Generic_Conversations: inconsistent number of Packie conversations - see Packie Flow" );
        return;
    }
    array(ref cVar4, 13);
    StrCopy( ref cVar4[0], "FCPC1_SEX", 16 );
    StrCopy( ref cVar4[1], "FCPC1_FAM", 16 );
    StrCopy( ref cVar4[2], "FCPC1_MOM", 16 );
    StrCopy( ref cVar4[3], "FCPC1_PRST", 16 );
    StrCopy( ref cVar4[4], "FCPC1_DERRK", 16 );
    StrCopy( ref cVar4[5], "FCPC1_GRASS", 16 );
    StrCopy( ref cVar4[6], "FCPC1_GERRY", 16 );
    StrCopy( ref cVar4[7], "FCPC1_BLOOD", 16 );
    StrCopy( ref cVar4[8], "FCPC2_NIKO", 16 );
    StrCopy( ref cVar4[9], "FCPC2_KATE", 16 );
    StrCopy( ref cVar4[10], "FCPC2_SHAME", 16 );
    StrCopy( ref cVar4[11], "FCPC2_SCHOL", 16 );
    StrCopy( ref cVar4[12], "FCPC2_PA", 16 );
    iVar57 = 0;
    iVar58 = g_U22274[13]._fU688._fU24;
    iVar59 = g_U22274[13]._fU688._fU28;
    if (iVar58 >= 8)
    {
        sub_103932( "FCPC2AU" );
    }
    if (iVar58 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar59 == -1))
        {
            iVar60 = 0;
            sub_104043( ref cVar4[iVar58], iVar59, iVar60, uParam0, 5, iVar57 );
        }
        return;
    }
    sub_41613( ref cVar4[iVar58], uParam0, 5, iVar57 );
    return;
}

void sub_106545(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_3237( "FCRDCAU" );
        return;
        case 3:
        sub_3237( "FCJDCAU" );
        return;
        case 7:
        sub_3237( "FCDDAU" );
        return;
        case 8:
        sub_3237( "FCBDAU" );
        return;
        case 13:
        sub_3237( "FCPDCAU" );
        return;
    }
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Not a friend" );
    sub_4627( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Should never reach here" );
    return;
}

void sub_106947(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int I;
    int iVar10;
    boolean bVar11;
    int iVar12;

    PRINTSTRING( "DRUNK TALK..........................FA_Friend_Speech_Drunken_Conversations\n" );
    switch (uParam0)
    {
        case 0:
        case 3:
        case 7:
        case 8:
        case 13: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Drunken_Conversations: Unrecognised friend ID" );
        return;
    }
    g_U22274[uParam0]._fU688._fU24 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_102151( uParam0 );
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    I = 0;
    if (NOT g_U22274[uParam0]._fU688._fU20)
    {
        iVar5 = g_U22274[uParam0]._fU688._fU0;
        iVar6 = g_U22274[uParam0]._fU688._fU4;
        iVar7 = g_U22274[uParam0]._fU688._fU8;
        iVar8 = (g_U22274[uParam0]._fU688._fU16 + iVar7) - 1;
        I = 0;
        for ( I = iVar7; I <= iVar8; I++ )
        {
            if ((IS_BIT_SET( iVar5, I )) AND (NOT (IS_BIT_SET( iVar6, I ))))
            {
                CLEAR_BIT( ref g_U22274[uParam0]._fU688._fU0, I );
            }
        }
    }
    iVar4 = 0;
    iVar5 = g_U22274[uParam0]._fU688._fU0;
    iVar7 = g_U22274[uParam0]._fU688._fU8;
    iVar8 = (g_U22274[uParam0]._fU688._fU16 + iVar7) - 1;
    I = 0;
    for ( I = iVar7; I <= iVar8; I++ )
    {
        if (NOT (IS_BIT_SET( iVar5, I )))
        {
            iVar4++;
        }
    }
    if (iVar4 == 0)
    {
        iVar6 = g_U22274[uParam0]._fU688._fU4;
        for ( I = iVar7; I <= iVar8; I++ )
        {
            if (NOT (IS_BIT_SET( iVar6, I )))
            {
                CLEAR_BIT( ref g_U22274[uParam0]._fU688._fU0, I );
                iVar4++;
            }
        }
    }
    if (iVar4 == 0)
    {
        return;
    }
    iVar10 = 0;
    if (g_U22274[uParam0]._fU688._fU20)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar4, ref iVar10 );
    }
    iVar5 = g_U22274[uParam0]._fU688._fU0;
    bVar11 = false;
    for ( I = iVar7; I <= iVar8; I++ )
    {
        if (NOT bVar11)
        {
            if (NOT (IS_BIT_SET( iVar5, I )))
            {
                if (iVar10 == 0)
                {
                    g_U22274[uParam0]._fU688._fU24 = I;
                    SET_BIT( ref g_U22274[uParam0]._fU688._fU0, I );
                    bVar11 = true;
                }
                else
                {
                    iVar10--;
                }
            }
        }
    }
    if (NOT bVar11)
    {
        sub_4627( "FA_Friend_Speech_Drunken_Conversations: Tell Keith: something fundamentally wrong with algorithm" );
        return;
    }
    PRINTSTRING( "AFTER\n" );
    sub_102151( uParam0 );
    iVar12 = 0;
    switch (uParam0)
    {
        case 0:
        sub_108158( uParam1, iVar12 );
        return;
        case 3:
        sub_108568( uParam1, iVar12 );
        return;
        case 7:
        sub_108947( uParam1, iVar12 );
        return;
        case 8:
        sub_109377( uParam1, iVar12 );
        return;
        case 13:
        sub_109770( uParam1, iVar12 );
        return;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Drunken_Conversations: must have forgotten to update friend ID when added speech" );
    return;
}

void sub_108158(unknown uParam0, boolean bParam1)
{
    char[24] cVar4;
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
    int iVar25;
    int iVar26;
    int iVar27;
    int iVar28;

    if (NOT (5 == g_U22274[0]._fU688._fU16))
    {
        sub_4627( "FA_Roman_Speech_Drunken_Conversations: inconsistent number of Roman drunken conversations - see Roman Flow" );
        return;
    }
    array(ref cVar4, 5);
    StrCopy( ref cVar4[0], "FCR3_DRNK1", 16 );
    StrCopy( ref cVar4[1], "FCR3_DRNK2", 16 );
    StrCopy( ref cVar4[2], "FCR3_DRNK3", 16 );
    StrCopy( ref cVar4[3], "FCR3_DRNK4", 16 );
    StrCopy( ref cVar4[4], "FCR3_DRNK5", 16 );
    iVar25 = g_U22274[0]._fU688._fU24;
    iVar25 -= g_U22274[0]._fU688._fU8;
    if (iVar25 == -1)
    {
        return;
    }
    iVar26 = 0;
    iVar27 = g_U22274[0]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar27 == -1))
        {
            iVar28 = 0;
            sub_104043( ref cVar4[iVar25], iVar27, iVar28, uParam0, 5, iVar26 );
        }
        return;
    }
    sub_41613( ref cVar4[iVar25], uParam0, 5, iVar26 );
    return;
}

void sub_108568(unknown uParam0, boolean bParam1)
{
    char[20] cVar4;
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
    int iVar21;
    int iVar22;
    int iVar23;
    int iVar24;

    if (NOT (4 == g_U22274[3]._fU688._fU16))
    {
        sub_4627( "FA_Jacob_Speech_Drunken_Conversations: inconsistent number of Jacob drunken conversations - see Jacob Flow" );
        return;
    }
    array(ref cVar4, 4);
    StrCopy( ref cVar4[0], "FCJ_DC1", 16 );
    StrCopy( ref cVar4[1], "FCJ_DC2", 16 );
    StrCopy( ref cVar4[2], "FCJ_DC3", 16 );
    StrCopy( ref cVar4[3], "FCJ_DC4", 16 );
    iVar21 = g_U22274[3]._fU688._fU24;
    iVar21 -= g_U22274[3]._fU688._fU8;
    if (iVar21 == -1)
    {
        return;
    }
    iVar22 = 0;
    iVar23 = g_U22274[3]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar23 == -1))
        {
            iVar24 = 0;
            sub_104043( ref cVar4[iVar21], iVar23, iVar24, uParam0, 5, iVar22 );
        }
        return;
    }
    sub_41613( ref cVar4[iVar21], uParam0, 5, iVar22 );
    return;
}

void sub_108947(unknown uParam0, boolean bParam1)
{
    char[28] cVar4;
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
    int iVar29;
    int iVar30;
    int iVar31;
    int iVar32;

    if (NOT (6 == g_U22274[7]._fU688._fU16))
    {
        sub_4627( "FA_Dwayne_Speech_Drunken_Conversations: inconsistent number of Dwayne drunken conversations - see Dwayne Flow" );
        return;
    }
    array(ref cVar4, 6);
    StrCopy( ref cVar4[0], "FCDD_LDG1", 16 );
    StrCopy( ref cVar4[1], "FCDD_LDG2", 16 );
    StrCopy( ref cVar4[2], "FCDD_LDG3", 16 );
    StrCopy( ref cVar4[3], "FCDD_LDG4", 16 );
    StrCopy( ref cVar4[4], "FCDD_LDG5", 16 );
    StrCopy( ref cVar4[5], "FCDD_LGD6", 16 );
    iVar29 = g_U22274[7]._fU688._fU24;
    iVar29 -= g_U22274[7]._fU688._fU8;
    if (iVar29 == -1)
    {
        return;
    }
    iVar30 = 0;
    iVar31 = g_U22274[7]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar31 == -1))
        {
            iVar32 = 0;
            sub_104043( ref cVar4[iVar29], iVar31, iVar32, uParam0, 5, iVar30 );
        }
        return;
    }
    sub_41613( ref cVar4[iVar29], uParam0, 5, iVar30 );
    return;
}

void sub_109377(unknown uParam0, boolean bParam1)
{
    char[20] cVar4;
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
    int iVar21;
    int iVar22;
    int iVar23;
    int iVar24;

    if (NOT (4 == g_U22274[8]._fU688._fU16))
    {
        sub_4627( "FA_Brucie_Speech_Drunken_Conversations: inconsistent number of Brucie drunken conversations - see Brucie Flow" );
        return;
    }
    array(ref cVar4, 4);
    StrCopy( ref cVar4[0], "FCBD_FUN", 16 );
    StrCopy( ref cVar4[1], "FCBD_CHAMP", 16 );
    StrCopy( ref cVar4[2], "FCBD_CARDIO", 16 );
    StrCopy( ref cVar4[3], "FCBD_WOMEN", 16 );
    iVar21 = g_U22274[8]._fU688._fU24;
    iVar21 -= g_U22274[8]._fU688._fU8;
    if (iVar21 == -1)
    {
        return;
    }
    iVar22 = 0;
    iVar23 = g_U22274[8]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar23 == -1))
        {
            iVar24 = 0;
            sub_104043( ref cVar4[iVar21], iVar23, iVar24, uParam0, 5, iVar22 );
        }
        return;
    }
    sub_41613( ref cVar4[iVar21], uParam0, 5, iVar22 );
    return;
}

void sub_109770(unknown uParam0, boolean bParam1)
{
    char[28] cVar4;
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
    int iVar29;
    int iVar30;
    int iVar31;
    int iVar32;

    if (NOT (6 == g_U22274[13]._fU688._fU16))
    {
        sub_4627( "FA_Packie_Speech_Drunken_Conversations: inconsistent number of Packie drunken conversations - see Packie Flow" );
        return;
    }
    array(ref cVar4, 6);
    StrCopy( ref cVar4[0], "FCP2_DRUNK1", 16 );
    StrCopy( ref cVar4[1], "FCP2_DRUNK2", 16 );
    StrCopy( ref cVar4[2], "FCP2_DRUNK3", 16 );
    StrCopy( ref cVar4[3], "FCP2_DRUNK4", 16 );
    StrCopy( ref cVar4[4], "FCP2_DRUNK5", 16 );
    StrCopy( ref cVar4[5], "FCP2_DRUNK6", 16 );
    iVar29 = g_U22274[13]._fU688._fU24;
    iVar29 -= g_U22274[13]._fU688._fU8;
    if (iVar29 == -1)
    {
        return;
    }
    iVar30 = 0;
    iVar31 = g_U22274[13]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar31 == -1))
        {
            iVar32 = 0;
            sub_104043( ref cVar4[iVar29], iVar31, iVar32, uParam0, 5, iVar30 );
        }
        return;
    }
    sub_41613( ref cVar4[iVar29], uParam0, 5, iVar30 );
    return;
}

int sub_110371(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if ((IS_CHAR_DEAD( uParam0 )) || (IS_CHAR_DEAD( sub_1591() )))
    {
        return l_U344._fU24;
    }
    if (l_U344._fU24)
    {
        if (NOT sub_101017())
        {
            if (g_U22274[l_U158]._fU688._fU28 == -1)
            {
                l_U344._fU24 = 0;
                return 0;
            }
            iVar3 = 0;
            GET_GAME_TIMER( ref iVar3 );
            if (l_U344._fU28 == 0)
            {
                l_U344._fU28 = iVar3 + 3000;
            }
            if (sub_110517())
            {
                l_U344._fU28 = 0;
            }
            if ((NOT (l_U344._fU28 == 0)) AND (iVar3 > l_U344._fU28))
            {
                l_U344._fU28 = 0;
                if (l_U344._fU8)
                {
                    sub_106545( l_U158 );
                    sub_3356( 0, sub_1591(), "NIKO", 0 );
                    sub_3356( l_U157, uParam0, ref l_U153, 0 );
                    sub_110655( l_U158, ref l_U147 );
                }
                else
                {
                    sub_101388( l_U158 );
                    sub_3356( 0, sub_1591(), "NIKO", 0 );
                    sub_3356( l_U157, uParam0, ref l_U153, 0 );
                    sub_110854( l_U158, ref l_U147 );
                }
                l_U344._fU24 = 0;
                return 0;
            }
            return 1;
        }
        l_U344._fU28 = 0;
        return 1;
    }
    if (sub_101017())
    {
        if (sub_59314( l_U147 ))
        {
            iVar4 = 0;
            sub_54745( ref l_U147, iVar4 );
        }
        l_U344._fU24 = 1;
        l_U344._fU28 = 0;
        return 1;
    }
    return 0;
}

void sub_110517()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_110655(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 0:
        sub_108158( uParam1, iVar4 );
        break;
        case 3:
        sub_108568( uParam1, iVar4 );
        break;
        case 7:
        sub_108947( uParam1, iVar4 );
        break;
        case 8:
        sub_109377( uParam1, iVar4 );
        break;
        case 13:
        sub_109770( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_110854(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 0:
        sub_103454( uParam1, iVar4 );
        break;
        case 3:
        sub_104190( uParam1, iVar4 );
        break;
        case 7:
        sub_104756( uParam1, iVar4 );
        break;
        case 8:
        sub_105268( uParam1, iVar4 );
        break;
        case 13:
        sub_105827( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_111391()
{
    return;
}
