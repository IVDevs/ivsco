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
    l_U866 = 0;
    l_U867 = 0;
    l_U886 = 0.00000000;
    l_U887 = 0;
    l_U888 = 0;
    l_U889 = nil;
    l_U890 = 0;
    l_U891 = 14;
    l_U892 = 0;
    l_U893 = 0;
    l_U894 = 14;
    l_U895 = 8;
    l_U896 = 14;
    l_U897 = 14;
    l_U898 = 0;
    l_U899 = 0;
    l_U900 = 0;
    l_U901 = -1;
    l_U909 = 0;
    l_U910 = 0;
    l_U911 = 0;
    l_U912 = 14;
    l_U913 = 0;
    l_U914 = 0;
    l_U915 = 0;
    l_U916 = 0;
    l_U917 = 0;
    l_U918 = 0;
    l_U919 = 0;
    l_U922 = 0;
    l_U923 = 0;
    l_U939 = -1;
    l_U944 = 0;
    l_U961 = -1;
    l_U965 = 0;
    l_U966 = 1;
    l_U967 = 1;
    l_U975 = 150.00000000;
    l_U1065 = 0;
    l_U1066 = 150.00000000;
    l_U1116 = 0;
    l_U1319 = 8;
    sub_1086();
    sub_1369( l_U204 );
    sub_3071();
    l_U339 = 0;
    while (NOT l_U330)
    {
        if (NOT sub_3560())
        {
            sub_4629( "RomanTenPin: Perform_Mission_Loop() returned FALSE unexpectedly" );
        }
        sub_111521();
        WAIT( 0 );
    }
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "******************** ROMAN BOWLING DEATHARREST\n" );
        PRINTNL();
        sub_17304();
    }
    WAIT( 0 );
    while (sub_3560())
    {
        sub_111521();
        WAIT( 0 );
    }
    PRINTSTRING( "quitting ROMAN BOWLING without PASS or FAIL\n" );
    sub_17304();
    sub_33347( "ROMAN BOWLING: should never reach ENDSCRIPT" );
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
        sub_24634();
        return 0;
    }
    l_U327 = 0;
    l_U328 = 0;
    l_U329 = 12;
    l_U910 = 0;
    switch (l_U324)
    {
        case 0:
        sub_33347( "Mission Loop: Stage should never be 'Initialise'" );
        break;
        case 1:
        sub_34095();
        break;
        case 2:
        sub_52829();
        break;
        case 3:
        sub_54753();
        break;
        case 4:
        sub_55885();
        break;
        case 5:
        sub_59857();
        break;
        case 6:
        l_U327 = 1;
        break;
        default:
        sub_33347( "Mission_Loop: Unknown Stage ID" );
        return 0;
    }
    if (l_U327)
    {
        sub_3594();
        return 0;
    }
    if (l_U328)
    {
        sub_24634();
        return 0;
    }
    sub_71193();
    bVar2 = sub_71221( l_U195 );
    if (bVar2)
    {
        l_U328 = 1;
        l_U329 = 7;
        sub_24634();
        return 0;
    }
    sub_71537();
    if (l_U126)
    {
        sub_99227();
        sub_3594();
    }
    sub_99364( l_U195 );
    return 1;
}

void sub_3594()
{
    PRINTSTRING( "******************** ROMAN BOWLING PASSED\n" );
    PRINTNL();
    CLEAR_WANTED_LEVEL( sub_3662() );
    sub_3705( l_U338 );
    g_U21 = l_U323;
    sub_17304();
    return;
}

void sub_3662()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3705(unknown uParam0)
{
    sub_3716( uParam0 );
    return;
}

void sub_3716(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 1;
    sub_3734();
    sub_3789( uParam0 );
    sub_3818( uParam0 );
    sub_3851( iVar3, iVar4, iVar5 );
    iVar6 = 0;
    uVar7 = g_U22274[iVar6]._fU144;
    sub_16690( iVar6, uVar7 );
    return;
}

void sub_3734()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U1313[I] = 4;
    }
    return;
}

void sub_3789(unknown uParam0)
{
    l_U1313[1] = uParam0;
    return;
}

void sub_3818(unknown uParam0)
{
    l_U1313[0] = uParam0;
    return;
}

void sub_3851(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_3882( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_3882(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_3978( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_3978( ref cVar9 );
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
            sub_3978( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_3978( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_3978( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_3978( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_4555( iParam0, iVar7 );;;
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
                sub_4973( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_4973( 0, 4 );
            }
        }
    }
    if (NOT (sub_5062( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3662(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3662() );
    }
    sub_14294();
    bVar27 = true;
    uVar28 = sub_4555( iParam0, iVar7 );
    uVar29 = sub_14936( iParam0 );
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
                sub_15467( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_15897();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_15982( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_16039( iParam0 );
                sub_16174( 0 );
                sub_16255( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_16360();
        }
    }
    if (bParam2)
    {
        sub_15897();
        sub_16448();
        sub_16174( 0 );
    }
    if (bParam3)
    {
        sub_15897();
        sub_16488();
        sub_16174( 0 );
        sub_16255( uVar29, 0 );
    }
    sub_16539();
    return;
}

void sub_3978(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_4555(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_4629( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_4629(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_4973(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_5062(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_5270( uParam1 );
        break;
        case 1:
        bVar8 = sub_7348( uParam1 );
        break;
        case 2:
        bVar8 = sub_7574( uParam1 );
        break;
        case 3:
        bVar8 = sub_7724( uParam1 );
        break;
        case 4:
        bVar8 = sub_8002( uParam1 );
        break;
        case 5:
        bVar8 = sub_8305( uParam1 );
        break;
        case 6:
        bVar8 = sub_8504( uParam1 );
        break;
        case 7:
        bVar8 = sub_8730( uParam1 );
        break;
        case 8:
        bVar8 = sub_8965( uParam1 );
        break;
        case 9:
        bVar8 = sub_9340( uParam1 );
        break;
        case 10:
        bVar8 = sub_9587( uParam1 );
        break;
        case 11:
        bVar8 = sub_9726( uParam1 );
        break;
        case 12:
        bVar8 = sub_10025( uParam1 );
        break;
        case 13:
        bVar8 = sub_10253( uParam1 );
        break;
        case 14:
        bVar8 = sub_10540( uParam1 );
        break;
        case 15:
        bVar8 = sub_10822( uParam1 );
        break;
        case 16:
        bVar8 = sub_11104( uParam1 );
        break;
        case 17:
        bVar8 = sub_11305( uParam1 );
        break;
        case 18:
        bVar8 = sub_11378( uParam1 );
        break;
        case 19:
        bVar8 = sub_11592( uParam1 );
        break;
        case 20:
        bVar8 = sub_11845( uParam1 );
        break;
        case 21:
        bVar8 = sub_12092( uParam1 );
        break;
        case 22:
        bVar8 = sub_12293( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_6953( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_4555( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_12616( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_5270(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_5549( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_5549( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_5549( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_5549( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_5549( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_5549( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_5549( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_5549( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_5549( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_5549( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_5549( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_5549( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_5549( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_5549( iVar3, 0, 3, 1, 0, 0 );
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
        sub_5549( iVar3, 0, sub_6831(), sub_7097(), 0, 0 );
        break;
        default:
        sub_7256( "Friend 1", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Friend 1", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_5549(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_5560( uParam1 );
    sub_5734( uParam0, 0, uParam2 );
    sub_5734( uParam0, 1, uParam3 );
    sub_5734( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_3734();
    return;
}

void sub_5560(unknown uParam0)
{
    ADD_SCORE( sub_3662(), uParam0 );
    sub_5585( uParam0 );
    return;
}

void sub_5585(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_4629( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_5734(unknown uParam0, int iParam1, int iParam2)
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
        sub_5891( uParam0 );
    }
    return;
}

void sub_5891(unknown uParam0)
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

int sub_6831()
{
    switch (l_U1313[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6953( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_6953(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_7097()
{
    switch (l_U1313[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6953( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_7256(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_7348(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5549( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_7256( "Contact 2", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 2", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7574(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5549( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_7256( "Girl 3", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Girl 3", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7724(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_5549( iVar3, 0, sub_6831(), sub_7097(), 0, 0 );
        break;
        default:
        sub_7256( "Friend 4", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Friend 4", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8002(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5549( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5549( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5549( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5549( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_7256( "Contact 5", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 5", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8305(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_7256( "Contact 7", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 7", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8504(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5549( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_7256( "Contact 7b", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 7b", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8730(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_5549( iVar3, 0, sub_6831(), sub_7097(), 0, 0 );
        break;
        default:
        sub_7256( "Friend 8", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Friend 8", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8965(unknown uParam0)
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
        sub_5549( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_5549( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_5549( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_5549( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_5549( iVar3, 0, sub_6831(), sub_7097(), 0, 0 );
        break;
        default:
        sub_7256( "Friend 9", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Friend 9", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9340(unknown uParam0)
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
        sub_5549( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_5549( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_5549( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_7256( "Contact 10", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_7256( "Contact 10", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9587(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_7256( "Girl 11", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Girl 11", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9726(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5549( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5549( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5549( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5549( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_5549( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_7256( "Contact 12", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 12", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10025(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5549( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_7256( "Contact 13", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 13", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10253(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_5549( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_5549( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_5549( iVar3, 0, sub_6831(), sub_7097(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_7256( "Friend 15", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Friend 15", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10540(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5549( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5549( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5549( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_7256( "Contact 16", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 16", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10822(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5549( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5549( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_5549( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_7256( "Contact 18", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 18", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11104(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_7256( "Contact 19", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 19", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11305(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_7256( "Girl 20", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11378(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_7256( "Contact 21", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 21", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11592(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5549( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5549( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_7256( "Contact 22", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 22", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11845(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5549( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5549( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5549( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_7256( "Contact 24", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 24", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12092(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5549( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5549( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5549( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_7256( "Contact 25", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7256( "Contact 25", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12293(unknown uParam0)
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
        sub_5549( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_7256( "Girl 26", 1 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_7256( "Girl 26", 0 );
        sub_5549( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_12616(int iParam0, int iParam1)
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
    if (sub_12664( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_13395( iParam1 );
    }
    return;
}

int sub_12664(int iParam0, int iParam1)
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
            sub_12804( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_12804(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_12986( 0 );
    return;
}

void sub_12986(boolean bParam0)
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
        sub_13241();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_13241()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_13395(int iParam0)
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
        sub_13728( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_13728( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_13728( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_13728( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_13728( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_13728( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_13728( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_13728( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_13728( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_13728( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_13728( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_13728( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_13728( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_13728( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_13728( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_13728( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_13728( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_13728( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_13728( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_13728(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_14294()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_14332( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_14332( 1, g_U569[I] )) != 0)
            {
                sub_14618( I );
            }
        }
    }
    if (NOT sub_14784())
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

int sub_14332(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_14618(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_14703( g_U569 - 1 );
    return;
}

void sub_14703(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_14784()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_14332( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_14936(unknown uParam0)
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
    sub_4629( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_15467(unknown uParam0, unknown uParam1)
{
    sub_15486( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_15486(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_15897()
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

int sub_15982(int iParam0, int iParam1)
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

void sub_16039(unknown uParam0)
{
    sub_16048();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_16048()
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

void sub_16174(unknown uParam0)
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

void sub_16255(int iParam0, boolean bParam1)
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

void sub_16360()
{
    sub_16369();
    return;
}

void sub_16369()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_16448()
{
    sub_16369();
    return;
}

void sub_16488()
{
    sub_16369();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_16539()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_16561();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_16561()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_16690(unknown uParam0, unknown uParam1)
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
            sub_12804( 3, iVar7 );
            g_U64821[iVar4]._fU0 = 1;
            sub_17153( uParam0 );
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

void sub_17153(unknown uParam0)
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

void sub_17304()
{
    sub_17323( l_U371, l_U1319 );
    sub_18985( l_U195 );
    sub_20696();
    sub_21786();
    sub_24115();
    sub_24416( 0, 5, l_U330 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_17323(boolean bParam0, unknown uParam1)
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
    if (l_U909 == 0)
    {
        return;
    }
    I = 0;
    array(ref iVar5, 14);
    for ( I = 0; I < 14; I++ )
    {
        iVar5[I] = 0;
    }
    iVar5[l_U891] = 1;
    bVar20 = false;
    for ( I = 0; I < l_U909; I++ )
    {
        bVar20 = iVar5[l_U902[I]._fU0];
        sub_17478( I, bVar20 );
        iVar5[l_U902[I]._fU0] = 1;
    }
    if (IS_PLAYER_PLAYING( sub_3662() ))
    {
        if (bParam0)
        {
            sub_18469( l_U939, 1, 1 );
        }
    }
    if (l_U909 == 3)
    {
        sub_18469( l_U939, 1, 1 );
    }
    if ((l_U909 == 3) AND (bParam0))
    {
        bVar21 = true;
        for ( I = 0; I < 14; I++ )
        {
            iVar5[I] = 0;
        }
        iVar5[l_U891] = 1;
        for ( I = 0; I < l_U909; I++ )
        {
            bVar20 = iVar5[l_U902[I]._fU0];
            if (bVar20)
            {
                bVar21 = false;
            }
            iVar5[l_U902[I]._fU0] = 1;
        }
        if (bVar21)
        {
            sub_18469( l_U939, 1, 1 );
        }
    }
    uVar22 = sub_14936( l_U939 );
    for ( I = 0; I < l_U909; I++ )
    {
        sub_16690( uVar22, l_U902[I]._fU0 );
    }
    if (l_U923)
    {
        g_U22274[uVar22]._fU172 = 1;
    }
    return;
}

void sub_17478(int iParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;

    if (iParam0 >= l_U909)
    {
        SCRIPT_ASSERT( "Store_Like_For_Alternative_Activity: array pos greater than max activities performed" );
        return;
    }
    uVar4 = l_U902[iParam0]._fU0;
    uVar5 = l_U902[iParam0]._fU4;
    iVar6 = 4;
    switch (uVar4)
    {
        case 6:
        iVar6 = sub_17693( uVar5 );
        break;
        case 7:
        iVar6 = sub_17773( uVar5 );
        break;
        case 8:
        iVar6 = sub_17845( uVar5 );
        break;
        case 11:
        iVar6 = sub_17917( uVar5 );
        break;
        case 12:
        iVar6 = sub_17997( uVar5 );
        break;
        case 13:
        iVar6 = sub_18073( uVar5 );
        break;
        case 5:
        iVar6 = sub_18157( uVar5 );
        break;
        default: SCRIPT_ASSERT( "Store_Like_For_Alternative_Activity: Unknown phone activity ID" );
    }
    uVar7 = sub_18311( iVar6, uParam1 );
    sub_18469( l_U939, 1, uVar7 );
    return;
}

int sub_17693(unknown uParam0)
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

int sub_17773(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 1: return 2;
    }
    return 4;
}

int sub_17845(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 1: return 2;
    }
    return 4;
}

int sub_17917(unknown uParam0)
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

int sub_17997(unknown uParam0)
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

int sub_18073(unknown uParam0)
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

int sub_18157(unknown uParam0)
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

int sub_18311(unknown uParam0, boolean bParam1)
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

void sub_18469(unknown uParam0, int iParam1, int iParam2)
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
        sub_5891( uParam0 );
    }
    return;
}

void sub_18985(unknown uParam0)
{
    int iVar3;

    if (l_U919)
    {
        SET_CAM_ACTIVE( l_U920, 0 );
        SET_CAM_PROPAGATE( l_U920, 0 );
        DESTROY_ALL_CAMS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        iVar3 = 0;
        END_CAM_COMMANDS( ref iVar3 );
        if (NOT (iVar3 == 0))
        {
            SCRIPT_ASSERT( "Camera Scopes should now be 0 when ending camera use" );
        }
        l_U919 = 0;
    }
    if (l_U922)
    {
        sub_19148( uParam0, 1 );
    }
    g_U9212 = 1;
    g_U9347 = 1;
    sub_20335( l_U891 );
    sub_20621( l_U939 );
    if (l_U916)
    {
        g_U9210 = l_U915;
    }
    return;
}

void sub_19148(unknown uParam0, unknown uParam1)
{
    if ((uParam1) AND (g_U9202))
    {
        sub_19171( 6 );
    }
    else
    {
        sub_19171( 0 );
    }
    sub_19440( sub_1591(), 0 );
    sub_19440( uParam0, 0 );
    g_U9202 = 0;
    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return;
    }
    sub_20224();
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SET_PED_IS_DRUNK( uParam0, 0 );
    }
    return;
}

void sub_19171(unknown uParam0)
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

void sub_19440(unknown uParam0, unknown uParam1)
{
    int Result;

    Result = sub_19451( uParam1 );
    if (Result == 0)
    {
        sub_19583( uParam0 );
        return Result;
    }
    sub_19760( uParam0, Result );
    return Result;
}

int sub_19451(unknown uParam0)
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

void sub_19583(int iParam0)
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
    uVar4 = {sub_19648( iVar3 )};
    if (uVar4._fU20)
    {
        return;
    }
    CREATE_NM_MESSAGE( 0, 79 );
    SEND_NM_MESSAGE( iParam0 );
    SWITCH_PED_TO_ANIMATED( iParam0, 0 );
    return;
}

void sub_19648(boolean bParam0)
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
        Result = {l_U868};
    }
    else
    {
        Result = {l_U877};
    }
    return Result;
}

void sub_19760(int iParam0, unknown uParam1)
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
        GIVE_PLAYER_RAGDOLL_CONTROL( sub_3662(), 1 );
    }
    return;
}

void sub_20224()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar2 );
        SET_VEHICLE_STEER_BIAS( uVar2, 0.00000000 );
    }
    return;
}

void sub_20335(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 59; I++ )
    {
        if (sub_20363( I ))
        {
            if (DOES_BLIP_EXIST( g_U10856[I]._fU4 ))
            {
                sub_20546( ref g_U10856[I]._fU4 );
            }
        }
    }
    return;
}

int sub_20363(int iParam0)
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

void sub_20546(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_20621(unknown uParam0)
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

void sub_20696()
{
    sub_20705();
    sub_20777();
    sub_20818();
    sub_20848( 0 );
    REMOVE_DECISION_MAKER( l_U127 );
    REMOVE_ANIMS( ref l_U167._fU0 );
    l_U108 = 0;
    if ((NOT (l_U195 == nil)) AND (NOT (IS_CHAR_DEAD( l_U195 ))))
    {
        if (IS_GROUP_MEMBER( l_U195, sub_21615() ))
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

void sub_20705()
{
    sub_20718( ref l_U196 );
    return;
}

void sub_20718(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_20777()
{
    REMOVE_BLIP( l_U107 );
    l_U124 = 0;
    l_U125 = 0;
    return;
}

void sub_20818()
{
    REMOVE_BLIP( l_U203 );
    return;
}

void sub_20848(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_20859( uParam0 ) );
    return;
}

int sub_20859(unknown uParam0)
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
    sub_4629( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_21615()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_21786()
{
    sub_21795();
    sub_22292();
    return;
}

void sub_21795()
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
        sub_21879();
    }
    if (IS_PLAYER_PLAYING( sub_3662() ))
    {
        SET_PLAYER_CONTROL( sub_3662(), 1 );
    }
    CLEAR_HELP();
    sub_21974();
    iVar2 = 0;
    sub_22144( iVar2 );
    return;
}

void sub_21879()
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

void sub_21974()
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

void sub_22144(unknown uParam0)
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

void sub_22292()
{
    sub_22303( 1, 0 );
    return;
}

void sub_22303(unknown uParam0, unknown uParam1)
{
    g_U10133._fU84[uParam0] = uParam1;
    sub_22327();
    return;
}

void sub_22327()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_22355( 13 );
        if ((sub_22400( 13, iVar3 )) AND (g_U9932[g_U9999[I]._fU0]._fU0))
        {
            sub_22501( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_20546( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_22355( 11 );
        if ((sub_22400( 11, iVar3 )) AND (g_U9932[g_U10090[I]._fU0]._fU0))
        {
            sub_22501( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_20546( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_22833( I );
        if ((sub_22400( g_U10324[I]._fU12, iVar3 )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            sub_22501( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_23141( I );
        }
        else
        {
            sub_20546( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_23370();
    return;
}

int sub_22355(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_22400(unknown uParam0, boolean bParam1)
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

void sub_22501(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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

int sub_22833(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_22875( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_22355( g_U10324[uParam0]._fU12 ))
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

int sub_22875(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_23141(unknown uParam0)
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

void sub_23370()
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
    bVar3 = sub_22355( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_23415( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_22355( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_23415( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((sub_22833( I )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
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
        bVar3 = sub_22833( I );
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
        sub_23415( g_U10324[I]._fU32, bVar3 );
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
        sub_23415( g_U9943[I]._fU32, bVar3 );
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
                    fVar11 = sub_23906( uVar7, g_U9943[I]._fU8 );
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
                sub_23415( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_23415(unknown uParam0, boolean bParam1)
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

void sub_23906(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_24115()
{
    sub_24124();
    return;
}

void sub_24124()
{
    sub_24133();
    return;
}

void sub_24133()
{
    g_U10978 = 0;
    if (g_U813)
    {
        sub_24158();
        return;
    }
    sub_24273();
    return;
}

void sub_24158()
{
    if (COMPARE_STRING( ref g_U9926, "FPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_24203();
    return;
}

void sub_24203()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_24273()
{
    if (COMPARE_STRING( ref g_U9926, "FPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_24318();
    return;
}

void sub_24318()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_24416(unknown uParam0, unknown uParam1, boolean bParam2)
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

void sub_24634()
{
    int iVar2;

    PRINTSTRING( ".................... ROMAN BOWLING FAILED" );
    iVar2 = 0;
    switch (l_U329)
    {
        case 0:
        iVar2 = sub_24762( l_U195 );
        sub_24843( iVar2, l_U195 );
        break;
        case 1:
        PRINTSTRING( ".......................(friend dead during bowling)\n" );
        iVar2 = 0;
        sub_24843( iVar2, l_U195 );
        break;
        case 2:
        PRINTSTRING( ".......................(friend killed by player during bowling)\n" );
        iVar2 = 1;
        sub_24843( iVar2, l_U195 );
        break;
        case 7:
        sub_30635( l_U195, 0 );
        break;
        case 11:
        PRINTSTRING( ".......................(forced failure)\n" );
        break;
        case 12:
        sub_33347( "Unknown reason for failure" );
        break;
        default: sub_33347( "Unrecognised Fail ID" );
    }
    PRINTNL();
    sub_33550( iVar2 );
    sub_17304();
    return;
}

void sub_24762(unknown uParam0)
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

void sub_24843(unknown uParam0, unknown uParam1)
{
    sub_24856( uParam0, uParam1 );
    return;
}

void sub_24856(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 0;
    iVar5 = 0;
    sub_24875( iVar4, uParam1 );
    if (bParam0)
    {
        sub_30126( iVar5 );
    }
    return;
}

void sub_24875(unknown uParam0, unknown uParam1)
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
    uVar4 = sub_24937( uParam0 );
    if (g_U13391[uVar4]._fU80._fU0 == 1)
    {
        sub_25334( uVar4 );
    }
    if (g_U13391[uVar4]._fU0._fU0 == 1)
    {
        sub_29586( uVar4 );
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
    sub_30092( "CONTACT HOSPITALISED\n" );
    return;
}

int sub_24937(unknown uParam0)
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
    sub_4629( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

void sub_25334(unknown uParam0)
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
        sub_25455( uParam0 );
        sub_27735( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_28023( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU80._fU0 = 6;
        sub_28023( uParam0, iVar4 );
        break;
        case 6:
        sub_28023( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_28472( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_4629( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_25455(unknown uParam0)
{
    if ((NOT (g_U13391[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU80._fU0 == 1)))
    {
        sub_25512( uParam0 );
        sub_25658( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_25512( uParam0 );
        sub_25848( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 0)
    {
        sub_25658( uParam0 );
    }
    if ((NOT (g_U13391[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU0._fU0 == 1)))
    {
        sub_25512( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_26971( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_25512( uParam0 );
    }
    return;
}

void sub_25512(unknown uParam0)
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

void sub_25658(unknown uParam0)
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

void sub_25848(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_25658( uParam0 );
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
        iVar8 = sub_4555( uParam0, iVar7 );
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
        default: sub_4629( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
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
        sub_26526( g_U13391[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

void sub_26526(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 1:
        sub_26618( ref uParam0, 827.41800000, -288.99640000, 14.75330000, 179.76500000 );
        break;
        case 17:
        sub_26618( ref uParam0, -150.38910000, -795.66570000, 4.20110000, 271.69380000 );
        break;
        case 18:
        sub_26618( ref uParam0, -160.31520000, -796.40800000, 5.20610000, 270.00000000 );
        break;
        case 24:
        sub_26618( ref uParam0, -126.75380000, -263.66190000, 11.56380000, 0.00000000 );
        break;
        case 29:
        sub_26618( ref uParam0, -905.43880000, 908.73140000, 12.59760000, 0.74970000 );
        break;
        case 32:
        sub_26618( ref uParam0, 341.41760000, -454.50700000, 3.60780000, 0.74970000 );
        break;
    }
    return;
}

void sub_26618(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_26971(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_25512( uParam0 );
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
        iVar8 = sub_4555( uParam0, iVar7 );
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
        default: sub_4629( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
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
        if (l_U967)
        {
            FLASH_BLIP( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U967 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U967 = 1;
        }
        sub_26526( g_U13391[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_27735(unknown uParam0, boolean bParam1)
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

void sub_28023(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU80._fU24 );
        sub_27735( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU0._fU24 );
    sub_28161( uParam0, 0 );;
    sub_25455( uParam0 );
    return;
}

void sub_28161(unknown uParam0, boolean bParam1)
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

void sub_28472(int iParam0, boolean bParam1)
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
        sub_27735( iParam0, 0 );
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
    sub_28161( iParam0, 0 );
    if (bVar4)
    {
        sub_28681();
    }
    g_U10981[iParam0]._fU12 = 0;;
    if (iParam0 == 23)
    {
        sub_28737();
        return;
    }
    sub_25455( iParam0 );
    if (bVar4)
    {
        g_U10978 = 0;
    }
    if (bVar4)
    {
        sub_29384( iParam0 );
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

void sub_28681()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_28737()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_3662() ))
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
    sub_28849();
    if (bVar2)
    {
        g_U15936._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref g_U15936._fU32 );
        g_U15936._fU24 = uVar4;
    }
    l_U966 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_3662(), 0 );
    sub_29004();
    if (IS_PLAYER_PLAYING( sub_3662() ))
    {
        SET_PLAYER_CONTROL( sub_3662(), 1 );
    }
    return;
}

void sub_28849()
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

void sub_29004()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3662() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_1591() ))
    {
        l_U966 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_3662(), 1 );
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
        if (l_U966)
        {
            return;
        }
        l_U966 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_3662(), 1 );
    }
    else if (NOT l_U966)
    {
        return;
    }
    l_U966 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_3662(), 0 );;
    return;
}

void sub_29384(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_29586(unknown uParam0)
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
        sub_25455( uParam0 );
        sub_28161( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_28023( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_28023( uParam0, iVar4 );
        break;
        case 6:
        sub_28023( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_28472( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_4629( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_30092(unknown uParam0)
{
    return;
}

void sub_30126(unknown uParam0)
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
        sub_5549( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_3978( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_30635(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = g_U22274[uParam1]._fU104;
    uVar5 = g_U22274[uParam1]._fU136;
    sub_30680( uVar4 );
    sub_30786( uVar4, uParam1, uVar5, 0 );
    uVar6 = sub_24937( uParam1 );
    sub_33047( uVar6 );
    return;
}

void sub_30680(unknown uParam0)
{
    g_U63988._fU12[uParam0]._fU0 = 0;
    g_U63988._fU12[uParam0]._fU4 = 0;
    g_U63988._fU12[uParam0]._fU12 = 57;
    g_U63988._fU12[uParam0]._fU16 = 0;
    g_U63988._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_30786(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    sub_30808( uParam0, uParam1, uParam2, uParam3, iVar6 );
    return;
}

void sub_30808(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_30920( uParam1, uParam2 );
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
    sub_32854( iParam0, iParam3 );
    return;
}

void sub_30920(unknown uParam0, unknown uParam1)
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
    uVar11 = sub_30943( uParam0 );
    sub_31434( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_31778( ref uVar4, 1 );
    sub_31806( ref uVar4, 0 );
    sub_31834( ref uVar4, 2 );
    sub_31864( ref uVar4 );
    return;
}

int sub_30943(unknown uParam0)
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
    sub_4629( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_31434(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_31456( uParam0, 0, iParam4 + 0 );
    sub_31456( uParam1, 1, iParam4 + 0 );
    sub_31456( uParam2, 2, iParam4 + 0 );
    sub_31456( uParam3, 3, iParam4 + 0 );
    sub_31456( 0, 4, iParam4 + 0 );
    sub_31456( 1, 5, iParam4 + 0 );
    sub_31456( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_31456(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_31778(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_31806(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_31834(int iParam0, unknown uParam1)
{
    sub_31456( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_31864(int iParam0)
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
        if (NOT sub_31934())
        {
            sub_14618( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_32061( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_14618( iVar9 );
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
                ConcatString(ref cVar5, sub_14332( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_14332( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_31934()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_14332( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_14618( I );
            return 1;
        }
    }
    return 0;
}

int sub_32061(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_32126( uParam0, g_U569[Result] ))
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

int sub_32126(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_14332( 0, uParam0 );
        if (iVar14 == (sub_14332( 0, uParam6 )))
        {
            iVar15 = sub_14332( 3, uParam0 );
            if (iVar15 == (sub_14332( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_32854(unknown uParam0, int iParam1)
{
    g_U63988._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_32893( iParam1 ))
    {
        g_U63988._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_32893(int iParam0)
{
    int iVar3;

    iVar3 = sub_16561();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_32923();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_32923()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_33047(unknown uParam0)
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
        sub_4629( "Flow_Friend_Left_Behind_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_18469( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_18469( uParam0, 0, iVar4 );
    return;
}

void sub_33347(unknown uParam0)
{
    sub_33383( "ERROR: ROMAN BOWLING: ", uParam0 );
    return;
}

void sub_33383(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "ERROR: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_33550(boolean bParam0)
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

void sub_34095()
{
    l_U343 = 0;
    if (NOT (sub_34116( 0, l_U195 )))
    {
        return;
    }
    if (NOT l_U328)
    {
        sub_45763();
    }
    sub_21974();
    sub_47408( 0, 7 );
    sub_47705( 0 );
    return;
}

int sub_34116(unknown uParam0, int iParam1)
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
            l_U396 = sub_34266( uParam0 );
            if (NOT l_U396)
            {
                l_U395 = iVar4 + 3000;
            }
        }
    }
    if (l_U325 == 1)
    {
        if (sub_34811( uParam0 ))
        {
            l_U325 = 99;
        }
    }
    if (l_U325 == 99)
    {
        l_U324 = 2;
        l_U325 = 0;
        sub_45339( uParam0 );
        g_U15946[uParam0]._fU8[0]._fU0[2] = 0;
        if (NOT (IS_CHAR_DEAD( sub_1591() )))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1591(), 0 );
        }
        return 1;
    }
    return 0;
}

int sub_34266(unknown uParam0)
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
        sub_34376( uParam0 );
        g_U9196 = 1;
        return 1;
    }
    if (NOT g_U9198)
    {
        sub_34575( uParam0 );
        g_U9198 = 1;
        return 1;
    }
    return 1;
}

void sub_34376(unknown uParam0)
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

void sub_34575(unknown uParam0)
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

int sub_34811(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return sub_34869();
        case 3: return sub_45004();
        case 7: return sub_45038();
        case 8: return sub_45072();
        case 13: return sub_45106();
    }
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Not a friend" );
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Should never reach here" );
    return 0;
}

void sub_34869()
{
    return sub_34887( 0, ref l_U195, ref l_U196 );
}

int sub_34887(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_3662() )))
    {
        return 0;
    }
    sub_34920( uParam0 );
    sub_34955();
    sub_35277( (uParam1^) );
    sub_36057();
    if (l_U102 == 0)
    {
        sub_36172( uParam0, uParam1 );
        return 0;
    }
    if (l_U102 == 1)
    {
        sub_38188( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U102 == 2)
    {
        sub_38837( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U102 == 3)
    {
        sub_40025();
        return 0;
    }
    if (l_U102 == 4)
    {
        if (sub_40382( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_3662(), 1 );
    g_U22274[uParam0]._fU20 = 1;
    return 1;
}

void sub_34920(unknown uParam0)
{
    l_U115 = g_U22274[uParam0]._fU28;
    return;
}

void sub_34955()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3662() )))
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
    if (sub_35032() < 14.00000000)
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

void sub_35032()
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

void sub_35277(unknown uParam0)
{
    if (COMPARE_STRING( ref l_U167._fU0, l_U166 ))
    {
        return;
    }
    if (NOT l_U167._fU96)
    {
        return;
    }
    sub_35332( uParam0 );
    l_U167._fU80 = l_U102;
    return;
}

void sub_35332(unknown uParam0)
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
        bVar9 = sub_35631();
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

boolean sub_35631()
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

void sub_36057()
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

void sub_36172(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_35032();
    if (fVar4 > 98.00000000)
    {
        return;
    }
    if ((g_U10978) || (g_U9893._fU12))
    {
        return;
    }
    if (NOT (sub_36227( uParam0 )))
    {
        sub_36266( uParam0 );
        return;
    }
    sub_36330( uParam0, uParam1, l_U103._fU0, l_U103._fU4, l_U103._fU8, l_U106 );
    SET_CHAR_DECISION_MAKER( (uParam1^), l_U127 );
    g_U22274[uParam0]._fU24 = 1;
    sub_3356( l_U157, (uParam1^), ref l_U153, 0 );
    sub_38032( uParam0, (uParam1^) );
    l_U102 = 1;
    l_U114 = 0;
    return;
}

void sub_36227(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_20859( uParam0 ) );
}

void sub_36266(unknown uParam0)
{
    REQUEST_MODEL( sub_20859( uParam0 ) );
    return;
}

void sub_36330(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_20859( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_36380( uParam0, (uParam1^) );
    return;
}

void sub_36380(unknown uParam0, unknown uParam1)
{
    sub_36392( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_36392(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_36486( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_37030( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_36486(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_37030(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_36486( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_36486( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_36486( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_36486( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_36486( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_36486( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_36486( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_36486( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_36486( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_36486( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_36486( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_36486( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_36486( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_38032(unknown uParam0, unknown uParam1)
{
    int iVar4;

    sub_37030( uParam1, uParam0, l_U159 );
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

void sub_38188(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_35032();
    if (((fVar5 > 100.00000000) || (g_U10978)) || (g_U9893._fU12))
    {
        sub_38233( uParam1 );
        sub_20848( uParam0 );
        l_U102 = 0;
        g_U22274[uParam0]._fU24 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_1591() )))
    {
        if (sub_38317( sub_1591() ))
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
        sub_20777();
        sub_38731( (uParam1^), uParam2 );
        TASK_LOOK_AT_CHAR( (uParam1^), sub_1591(), -2, 0 );
        return;
    }
    return;
}

void sub_38233(unknown uParam0)
{
    DELETE_CHAR( uParam0 );
    (uParam0^) = nil;
    return;
}

int sub_38317(int iParam0)
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
                if (sub_38381( uVar3 ))
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

int sub_38381(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_38731(unknown uParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        return;
    }
    ADD_BLIP_FOR_CHAR( uParam0, uParam1 );
    SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
    return;
}

void sub_38837(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_35032();
    if (sub_38859( uVar4, uParam0, uParam1 ))
    {
        return;
    }
    if (sub_39031( uVar4 ))
    {
        return;
    }
    sub_39246();
    if ((sub_39340()) || (sub_39778()))
    {
        return;
    }
    return;
}

int sub_38859(float fParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    bVar5 = false;
    if (NOT (IS_CHAR_DEAD( sub_1591() )))
    {
        if (sub_38317( sub_1591() ))
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
    sub_20718( uParam1 );
    sub_2599( 0 );
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    TASK_CLEAR_LOOK_AT( uParam2 );
    return 1;
}

int sub_39031(float fParam0)
{
    if (fParam0 > 7.00000000)
    {
        return 0;
    }
    l_U102 = 3;
    if (NOT l_U114)
    {
        sub_39074();
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

int sub_39074()
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

void sub_39246()
{
    if (NOT sub_39074())
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

int sub_39340()
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
    if ((fVar3 < 0.01000000) AND (sub_39415( 1, 1 )))
    {
        if (NOT l_U113)
        {
            SET_PLAYER_CONTROL( sub_3662(), 0 );
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

int sub_39415(boolean bParam0, boolean bParam1)
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
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3662() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3662() )))
    {
        return 0;
    }
    return 1;
}

int sub_39778()
{
    int iVar2;
    boolean bVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    bVar3 = false;
    if (((IS_CHAR_IN_ANY_CAR( sub_1591() )) AND (sub_39415( 1, 1 ))) AND (IS_PLAYER_PRESSING_HORN( sub_3662() )))
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
        SET_PLAYER_CONTROL( sub_3662(), 0 );
        l_U102 = 4;
        CLEAR_HELP();
        l_U165 = iVar2 + 20000;
        return 1;
    }
    return 0;
}

void sub_40025()
{
    unknown uVar2;

    uVar2 = sub_35032();
    if (sub_40043( uVar2 ))
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
    if ((sub_39340()) || (sub_39778()))
    {
        return;
    }
    sub_40260();
    return;
}

int sub_40043(float fParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_DEAD( sub_1591() )))
    {
        if (sub_38317( sub_1591() ))
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

void sub_40260()
{
    if (NOT sub_39074())
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

int sub_40382(unknown uParam0, unknown uParam1)
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
        GET_GROUP_SIZE( sub_21615(), ref iVar5, ref iVar6 );
        if (iVar6 > 0)
        {
            if (NOT sub_40485())
            {
                sub_4629( "Check_If_Still_Joining_Group: Player has group members, but not Dwayne Backup" );
            }
            sub_40628();
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
        SET_GROUP_MEMBER( sub_21615(), (uParam0^) );
        l_U108 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        sub_40917();
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
                    SET_PLAYER_CONTROL( sub_3662(), 1 );
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U165 = 0;
                }
                else if (NOT (IS_GROUP_MEMBER( (uParam0^), sub_21615() )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    SET_GROUP_MEMBER( sub_21615(), (uParam0^) );
                }
            }
            else if (sub_35032() > 20.00000000)
            {
                return 0;
            }
            return 1;
        }
        if (l_U115)
        {
            sub_41501( l_U158, ref l_U141 );
            iVar11 = sub_24937( l_U158 );
            sub_42992( iVar11 );
        }
        else
        {
            sub_43205( l_U158, ref l_U141 );
        }
        sub_20718( uParam1 );
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
        return 0;
    }
    if (l_U115)
    {
        sub_44039( l_U158, ref l_U141 );
        iVar11 = sub_24937( l_U158 );
        sub_42992( iVar11 );
    }
    else
    {
        sub_44585( l_U158, ref l_U141 );
    }
    if ((IS_HINT_RUNNING()) AND (NOT l_U119))
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    return 0;
}

int sub_40485()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_40628()
{
    if (sub_40485())
    {
        g_U64921 = 1;
    }
    return;
}

void sub_40917()
{
    sub_40926();
    sub_41029( ref g_U9893._fU68 );
    sub_41078();
    return;
}

void sub_40926()
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

void sub_41029(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_41078()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_14332( 1, g_U569[I] )) == 0)
        {
            sub_14618( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_14784())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

void sub_41501(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_41536( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRL", uParam1, 8, 1 );
        return;
        case 3:
        sub_41623( "FCJ_ARRL", uParam1, 8, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else
        {
            sub_41623( "FCB2_ARRL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_41623( "FCP_ARRL", uParam1, 8, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_41536(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        if (NOT g_U15654[6])
        {
            sub_41623( "FCR_ARRH", uParam1, 8, 1 );
        }
        return;
        case 3:
        sub_41623( "FCJ_ARHOSP", uParam1, 8, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRCNL", uParam1, 8, 1 );
        return;
        case 8:
        sub_41623( "FCB2_ARRCNL", uParam1, 8, 1 );
        return;
        case 13:
        sub_41623( "FCP_ARRCNL", uParam1, 8, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_41623(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_41644( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_41644(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_41698( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_41698(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_41720( iParam1 )))
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
    sub_42408( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_41720(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_41797( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_41797( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_41797( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_41797(unknown uParam0)
{
    return;
}

void sub_42408(int iParam0, int iParam1)
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

void sub_42992(unknown uParam0)
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
        sub_4629( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_18469( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_18469( uParam0, 0, iVar4 );
    return;
}

void sub_43205(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_41536( uParam0, uParam1 );
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
            sub_41623( "FCR_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1591() ))
        {
            sub_41623( "FCR_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_41623( "FCR_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 3:
        if (IS_CHAR_ON_ANY_BIKE( sub_1591() ))
        {
            sub_41623( "FCJ_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1591() ))
        {
            sub_41623( "FCJ_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_41623( "FCJ_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 7:
        if (IS_CHAR_ON_ANY_BIKE( sub_1591() ))
        {
            sub_41623( "FCD2_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1591() ))
        {
            sub_41623( "FCD2_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_41623( "FCD2_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else if (IS_CHAR_ON_ANY_BIKE( sub_1591() ))
        {
            sub_41623( "FCB2_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1591() ))
        {
            sub_41623( "FCB2_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_41623( "FCB2_ARRCNL", uParam1, 8, 1 );
        };;;
        return;
        case 13:
        if (IS_CHAR_ON_ANY_BIKE( sub_1591() ))
        {
            sub_41623( "FCP_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_1591() ))
        {
            sub_41623( "FCP_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_41623( "FCP_ARRCNL", uParam1, 8, 1 );
        }
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_44039(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_44074( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRFL", uParam1, 8, 1 );
        return;
        case 3:
        sub_41623( "FCJ_ARRFL", uParam1, 8, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRFL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else
        {
            sub_41623( "FCB2_ARRFL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_41623( "FCP_ARRFL", uParam1, 8, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_44074(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRFH", uParam1, 8, 1 );
        return;
        case 3:
        sub_41623( "FCJ_ARHOSPF", uParam1, 8, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRNL", uParam1, 8, 1 );
        return;
        case 8:
        sub_41623( "FCB2_ARRNL", uParam1, 8, 1 );
        return;
        case 13:
        sub_41623( "FCP_ARRFNL", uParam1, 8, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_44585(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_44074( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRFNL", uParam1, 8, 1 );
        return;
        case 3:
        sub_41623( "FCJ_ARRFNL", uParam1, 8, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRNL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else
        {
            sub_41623( "FCB2_ARRNL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_41623( "FCP_ARRFNL", uParam1, 8, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_45004()
{
    return sub_34887( 3, ref l_U267, ref l_U268 );
}

void sub_45038()
{
    return sub_34887( 7, ref l_U305, ref l_U306 );
}

void sub_45072()
{
    return sub_34887( 8, ref l_U276, ref l_U277 );
}

void sub_45106()
{
    return sub_34887( 13, ref l_U314, ref l_U315 );
}

void sub_45339(unknown uParam0)
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
        if (sub_45399( uParam0 ))
        {
            g_U9197 = 1;
        }
        return;
    }
    return;
}

int sub_45399(unknown uParam0)
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

void sub_45763()
{
    SET_MISSION_FLAG( 1 );
    sub_45780();
    l_U330 = 1;
    sub_46394();
    sub_47341( "Roman Friend Activity: Bowling" );
    SET_ROMANS_MOOD( 0 );
    sub_47369( 49 );
    return;
}

void sub_45780()
{
    sub_45789();
    return;
}

void sub_45789()
{
    int iVar2;

    iVar2 = 0;
    sub_45803( iVar2 );
    return;
}

void sub_45803(unknown uParam0)
{
    unknown uVar3;

    g_U10978 = 1;
    uVar3 = sub_14936( uParam0 );
    sub_45829( uVar3 );
    return;
}

void sub_45829(unknown uParam0)
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
    sub_46213( cVar4 );
    return;
}

void sub_46213(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_46394()
{
    int I;
    int[59] iVar3;

    l_U424 = 0;
    I = 0;
    array(ref iVar3, 59);
    for ( I = 0; I < 59; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 59; I++ )
    {
        if (g_U10324[I]._fU12 == 1)
        {
            if (l_U424 >= 2)
            {
                sub_4629( "InfoBowling: Initialise_Bowling_Destinations: Increase MAX_BOWLING_DESTINATIONS" );
            }
            l_U401[l_U424]._fU0 = I;
            iVar3[I] = l_U424;
            l_U424++;
        }
    }
    for ( I = 0; I < l_U424; I++ )
    {
        l_U425[I] = 0;
    }
    sub_46727( iVar3[8], 1199.12800000, -683.22080000, 17.80500000, 273.93520000, 1196.14900000, -694.14830000, 20.29530000, -13.84020000, 0.00000000, -18.34430000 );
    sub_46727( iVar3[39], -568.10930000, 104.36900000, 6.16210000, 181.93220000, -564.65110000, 71.73004000, 6.11308200, -2.24808200, 0.00000000, 31.27205000 );
    for ( I = 0; I < l_U424; I++ )
    {
        if (NOT l_U425[I])
        {
            sub_4629( "InfoBowling: Initialise_Bowling_Destinations: There is missing additional data - are there new BOWLING Map Blips?" );
        }
    }
    return;
}

void sub_46727(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (iParam0 < 0)
    {
        sub_4629( "InfoBowling: Store_Additional_Bowling_Info: ID less than 0" );
    }
    if (iParam0 >= l_U424)
    {
        sub_4629( "InfoBowling: Store_Additional_Bowling_Info: ID out of range" );
    }
    if (l_U425[iParam0])
    {
        sub_4629( "InfoBowling: Store_Additional_Bowling_Info: Duplicate additional data" );
    }
    l_U401[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U401[iParam0]._fU16 = uParam4;
    l_U401[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U401[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U425[iParam0] = 1;
    return;
}

void sub_47341(unknown uParam0)
{
    return;
}

void sub_47369(unknown uParam0)
{
    g_U2222 = uParam0;
    return;
}

void sub_47408(unknown uParam0, unknown uParam1)
{
    sub_47419( uParam0 );
    sub_47615( uParam1 );
    return;
}

void sub_47419(unknown uParam0)
{
    if (NOT (g_U32898._fU0 == 54))
    {
        return;
    }
    if (NOT (sub_47452( uParam0 )))
    {
        return;
    }
    g_U32898._fU0 = uParam0;
    g_U32898._fU8 = 9;
    g_U32898._fU12 = 9;
    return;
}

int sub_47452(int iParam0)
{
    if (iParam0 < 23)
    {
        return 1;
    }
    if (sub_47476( iParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_47476(unknown uParam0)
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

void sub_47615(int iParam0)
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

void sub_47705(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        l_U924[I] = 0;
    }
    l_U891 = g_U22274[uParam0]._fU144;
    sub_47774( uParam0, 6, 2 );
    sub_47774( uParam0, 7, 1 );
    sub_47774( uParam0, 8, 1 );
    sub_47774( uParam0, 11, 2 );
    sub_47774( uParam0, 12, 1 );
    sub_47774( uParam0, 13, 1 );
    sub_47774( uParam0, 5, 2 );
    sub_48112();
    sub_51362();
    sub_52440( 3 );
    l_U893 = 0;
    l_U939 = sub_24937( uParam0 );
    sub_52493( l_U891 );
    l_U898 = 0;
    if (NOT l_U916)
    {
        l_U915 = g_U9210;
        g_U9210 = 1;
        l_U916 = 1;
    }
    return;
}

void sub_47774(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    if (NOT g_U15946[uParam0]._fU8[0]._fU0[iParam1])
    {
        if (NOT (sub_47815( uParam0, iParam1 )))
        {
            return;
        }
    }
    iVar5 = sub_47862( iParam1 );
    if (iVar5 == 9)
    {
        if (NOT (iParam1 == l_U891))
        {
            l_U924[iParam1] = uParam2;
        }
        return;
    }
    sub_48016( iVar5, uParam2 );
    return;
}

int sub_47815(int iParam0, int iParam1)
{
    if ((iParam0 == 7) AND (iParam1 == 12))
    {
        return 1;
    }
    return 0;
}

int sub_47862(unknown uParam0)
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

void sub_48016(unknown uParam0, unknown uParam1)
{
    g_U32898._fU36[uParam0] = uParam1;
    return;
}

void sub_48112()
{
    int I;
    int[59] iVar3;

    l_U766 = 0;
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
            if (l_U766 >= 16)
            {
                sub_4629( "InfoEat: Initialise_Eat_Destinations: Increase MAX_EAT_DESTINATIONS" );
            }
            l_U429[l_U766]._fU0 = I;
            iVar3[I] = l_U766;
            l_U766++;
        }
    }
    for ( I = 0; I < l_U766; I++ )
    {
        l_U767[I] = 0;
        l_U784[I] = 0;
    }
    sub_48446( iVar3[0], 1186.03200000, 381.45840000, 25.89440000, 273.88000000, 1175.87300000, 392.51750000, 29.59400000, -13.69880000, 0.00000000, -147.50740000, 1112014848 );
    sub_48446( iVar3[1], 1643.65800000, 245.58400000, 25.50000000, 243.86450000, 1670.37300000, 252.74060000, 27.71511000, 0.69950600, 0.00000000, 130.74310000, 1112014848 );
    sub_48446( iVar3[2], 882.92200000, -473.00300000, 16.30900000, 270.12920000, 876.81410000, -460.09550000, 15.35026000, 11.67727000, -0.00000000, -161.68270000, 1112014848 );
    sub_48446( iVar3[17], 443.42000000, 1526.31400000, 17.50700000, 268.88550000, 423.45340000, 1529.01700000, 34.79707000, -36.57798000, -11.22095000, -114.45570000, 1112014848 );
    sub_48446( iVar3[18], 1096.24500000, 1599.80300000, 18.02700000, 316.12340000, 1108.09200000, 1625.32100000, 21.56322000, -1.15058200, -0.00000000, 174.86560000, 1112014848 );
    sub_48446( iVar3[22], -146.61000000, 72.23300000, 16.02500000, 191.93320000, -172.63120000, 61.32870000, 55.90245000, -51.17967000, -0.00000000, -102.22700000, 1112014848 );
    sub_48446( iVar3[23], -619.91990000, 161.67230000, 6.02700000, 91.38610000, -645.24320000, 125.56240000, 22.66623000, -32.12400000, -0.00000000, -56.49996000, 1112014848 );
    sub_48446( iVar3[24], -174.31000000, 272.46700000, 15.98500000, 90.06450000, -206.20180000, 261.43610000, 35.89857000, -34.11337000, -0.00000000, -46.99197000, 1112014848 );
    sub_48446( iVar3[25], -433.07940000, 1178.45900000, 14.39740000, 91.17450000, -423.18860000, 1174.36700000, 24.29361000, -39.14743000, 6.24956800, 45.26580000, 1112014848 );
    sub_48446( iVar3[26], -136.81900000, -276.97200000, 14.53500000, 179.94550000, -123.23390000, -275.37620000, 12.44489000, 3.61987600, -0.00000000, 92.21399000, 1112014848 );
    sub_48446( iVar3[27], -394.37900000, 250.15800000, 15.55600000, 91.12110000, -410.06970000, 251.82990000, 20.99272000, -11.35220000, 0.00000000, -107.25360000, 1112014848 );
    sub_48446( iVar3[28], 118.72730000, 636.46600000, 16.10430000, 181.62540000, 126.37460000, 628.77320000, 20.18756000, -20.45377000, 0.00000000, 51.15732000, 1112014848 );
    sub_48446( iVar3[29], 33.67200000, 974.29800000, 15.96700000, 0.00000000, 37.68074000, 1005.61400000, 22.87771000, -23.27425000, 0.00000100, 145.58120000, 1112014848 );
    sub_48446( iVar3[47], -1002.54900000, 1604.37000000, 25.21300000, 214.78020000, -992.73790000, 1583.80300000, 36.61912000, -19.68591000, 0.00000100, 26.11061000, 1112014848 );
    sub_48446( iVar3[48], -1250.08700000, 1070.77300000, 21.16600000, 2.24760000, -1258.48500000, 1055.73500000, 25.37512000, -4.82664000, 0.00000000, -37.46955000, 1112014848 );
    sub_48446( iVar3[49], -1155.57900000, 1389.54100000, 25.63000000, 89.35540000, -1173.21800000, 1372.00600000, 22.45787000, 10.71952000, -0.00000000, -29.54759000, 45.00000000 );
    for ( I = 0; I < l_U766; I++ )
    {
        if (NOT l_U767[I])
        {
            sub_4629( "InfoEat: Initialise_Eat_Destinations: There is missing additional data - are there new FOOD Map Blips?" );
        }
    }
    sub_50015( iVar3[0], 1190.88800000, 377.97630000, 22.99430000, 1192.66900000, 380.07240000, 22.80760000, 1199.55100000, 378.34750000, 22.14610000 );
    sub_50015( iVar3[1], 1647.85500000, 237.53700000, 23.59960000, 1650.38400000, 239.51570000, 23.67850000, 1656.71000000, 235.95590000, 24.03360000 );
    sub_50015( iVar3[2], 881.32170000, -478.59920000, 14.02390000, 880.96580000, -476.32940000, 14.03240000, 872.43070000, -476.56120000, 13.75210000 );
    sub_50015( iVar3[17], 440.97420000, 1520.30900000, 15.37440000, 442.17310000, 1522.82200000, 15.23160000, 430.21190000, 1522.47900000, 15.65150000 );
    sub_50015( iVar3[18], 1099.11500000, 1596.27700000, 15.71580000, 1096.33900000, 1596.88800000, 15.71540000, 1089.31000000, 1588.39100000, 15.71540000 );
    sub_50015( iVar3[22], -139.76190000, 72.06730000, 13.75790000, -142.36840000, 73.33570000, 13.75790000, -143.59300000, 83.87050000, 13.75790000 );
    sub_50015( iVar3[23], -618.24940000, 149.04600000, 3.81270000, -619.85540000, 150.61060000, 3.81270000, -628.95990000, 149.64940000, 3.81270000 );
    sub_50015( iVar3[24], -174.20310000, 276.77800000, 13.81320000, -176.70890000, 274.19620000, 13.81320000, -186.13620000, 276.34440000, 13.81860000 );
    sub_50015( iVar3[25], -429.96930000, 1183.50600000, 12.05390000, -427.68120000, 1181.30100000, 12.16880000, -414.22730000, 1183.68000000, 12.81370000 );
    sub_50015( iVar3[26], -140.75110000, -278.08280000, 12.41860000, -139.00030000, -281.15140000, 12.82390000, -140.91290000, -291.95790000, 13.76250000 );
    sub_50015( iVar3[27], -393.03260000, 245.99450000, 13.39040000, -391.13880000, 248.59180000, 13.49290000, -381.94700000, 246.83300000, 13.75370000 );
    sub_50015( iVar3[28], 114.91250000, 640.95900000, 13.71340000, 116.64570000, 639.25250000, 13.71330000, 113.40200000, 629.90410000, 13.66730000 );
    sub_50015( iVar3[29], 29.85950000, 980.51480000, 13.66350000, 32.71410000, 982.65520000, 13.66330000, 30.02770000, 994.23700000, 13.68900000 );
    sub_50015( iVar3[47], -1006.38000000, 1609.67400000, 23.01270000, -1003.73300000, 1607.31800000, 23.01270000, -993.22520000, 1610.06000000, 22.96360000 );
    sub_50015( iVar3[48], -1244.90300000, 1070.48900000, 18.74650000, -1246.81000000, 1067.58300000, 18.70840000, -1245.11300000, 1055.32400000, 18.77390000 );
    sub_50015( iVar3[49], -1157.79600000, 1397.05500000, 23.41630000, -1160.04400000, 1392.25500000, 23.19830000, -1173.15100000, 1393.90200000, 21.29680000 );
    for ( I = 0; I < l_U766; I++ )
    {
        if (NOT l_U784[I])
        {
            sub_4629( "InfoEat: Initialise_Eat_Destinations: There is missing leave immediately data - are there new FOOD Map Blips?" );
        }
    }
    return;
}

void sub_48446(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    if (iParam0 < 0)
    {
        sub_4629( "InfoEat: Store_Additional_Eat_Info: ID less than 0" );
    }
    if (iParam0 >= l_U766)
    {
        sub_4629( "InfoEat: Store_Additional_Eat_Info: ID out of range" );
    }
    if (l_U767[iParam0])
    {
        sub_4629( "InfoEat: Store_Additional_Eat_Info: Duplicate additional data" );
    }
    l_U429[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U429[iParam0]._fU16 = uParam4;
    l_U429[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U429[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U429[iParam0]._fU44 = uParam11;
    l_U767[iParam0] = 1;
    return;
}

void sub_50015(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if (iParam0 < 0)
    {
        sub_4629( "InfoEat: Store_Leave_Immediately_Info: ID less than 0" );
    }
    if (iParam0 >= l_U766)
    {
        sub_4629( "InfoEat: Store_Leave_Immediately_Info: ID out of range" );
    }
    if (l_U784[iParam0])
    {
        sub_4629( "InfoEat: Store_Leave_Immediately_Info: Duplicate Leave Immediately data" );
    }
    l_U429[iParam0]._fU48 = {uParam1};
    l_U429[iParam0]._fU60 = {uParam4};
    l_U429[iParam0]._fU72 = {uParam7};
    l_U784[iParam0] = 1;
    return;
}

void sub_51362()
{
    int I;
    int[59] iVar3;

    l_U858 = 0;
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
            if (l_U858 >= 5)
            {
                sub_4629( "InfoDrink: Initialise_Drink_Destinations: Increase MAX_DRINK_DESTINATIONS" );
            }
            l_U802[l_U858]._fU0 = I;
            iVar3[I] = l_U858;
            l_U858++;
        }
    }
    for ( I = 0; I < l_U858; I++ )
    {
        l_U859[I] = 0;
    }
    sub_51690( iVar3[3], 920.89200000, -489.48600000, 16.62500000, 359.20360000, 912.35260000, -480.41450000, 19.36200000, -7.81876100, -0.00000000, -137.45620000 );
    sub_51690( iVar3[4], 1157.61500000, 736.30880000, 36.89920000, 264.94570000, 1190.61600000, 721.34830000, 46.09572000, -12.26530000, 0.00000000, 54.47784000 );
    sub_51690( iVar3[30], -437.20600000, 463.31500000, 11.30600000, 273.22870000, -451.98680000, 469.22640000, 14.42270000, -12.98044000, 0.00000000, -130.48930000 );
    sub_51690( iVar3[31], 118.11700000, 565.07100000, 15.97500000, 181.45510000, 128.69340000, 539.74560000, 20.18760000, -3.03840000, 0.00000000, 43.11860000 );
    sub_51690( iVar3[32], -477.32300000, 1414.07100000, 16.73800000, 270.89310000, -466.49520000, 1426.17700000, 14.79384000, 16.12449000, -0.00000000, 130.86440000 );
    for ( I = 0; I < l_U858; I++ )
    {
        if (NOT l_U859[I])
        {
            sub_4629( "InfoDrink: Initialise_Drink_Destinations: There is missing additional data - are there new DRINK Map Blips?" );
        }
    }
    return;
}

void sub_51690(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (iParam0 < 0)
    {
        sub_4629( "InfoDrink: Store_Additional_Drink_Info: ID less than 0" );
    }
    if (iParam0 >= l_U858)
    {
        sub_4629( "InfoDrink: Store_Additional_Drink_Info: ID out of range" );
    }
    if (l_U859[iParam0])
    {
        sub_4629( "InfoDrink: Store_Additional_Drink_Info: Duplicate additional data" );
    }
    l_U802[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U802[iParam0]._fU16 = uParam4;
    l_U802[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U802[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U859[iParam0] = 1;
    return;
}

void sub_52440(unknown uParam0)
{
    g_U32898._fU32 = uParam0;
    return;
}

void sub_52493(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 59; I++ )
    {
        if (sub_20363( I ))
        {
            if (NOT (sub_52535( I, uParam0 )))
            {
                if (g_U10856[I]._fU0)
                {
                    if (NOT (DOES_BLIP_EXIST( g_U10856[I]._fU4 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( g_U10324[I]._fU32 )))
                        {
                            sub_22501( ref g_U10856[I]._fU4, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
                            SET_BLIP_AS_SHORT_RANGE( g_U10856[I]._fU4, 1 );
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_52535(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 8: return g_U10324[uParam0]._fU12 == 8;
        case 7: return g_U10324[uParam0]._fU12 == 5;
    }
    return 0;
}

void sub_52829()
{
    int iVar2;

    l_U343 = 0;
    iVar2 = 0;
    if (NOT (sub_52854( iVar2, l_U195 )))
    {
        l_U910 = 1;
        return;
    }
    return;
}

int sub_52854(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    float fVar6;
    int iVar7;

    if (l_U325 == 0)
    {
        sub_52875();
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
        sub_22292();
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
        sub_53008( uParam0 );
        for ( I = 0; I < 2; I++ )
        {
            if (l_U337 == -1)
            {
                if (sub_53489( I ))
                {
                    iVar5 = l_U401[I]._fU0;
                    iVar7 = g_U10324[iVar5]._fU28 == g_U9937;
                    fVar6 = l_U401[I]._fU4._fU8 + 0.00000000;
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), l_U401[I]._fU4._fU0, l_U401[I]._fU4._fU4, fVar6, 2.50000000, 2.50000000, 2.50000000, iVar7 )) AND (NOT (sub_38317( sub_1591() ))))
                    {
                        if (sub_53701( uParam0 ))
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
        sub_53008( uParam0 );
        if (sub_54350())
        {
            l_U371 = 1;
            l_U325 = 99;
        }
    }
    if (sub_54611())
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

void sub_52875()
{
    sub_22303( 1, 1 );
    return;
}

void sub_53008(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_53066();
        return;
        case 3:
        sub_53142();
        return;
        case 7:
        sub_53176();
        return;
        case 8:
        sub_53210();
        return;
        case 13:
        sub_53244();
        return;
    }
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Not a friend" );
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Should never reach here" );
    return;
}

void sub_53066()
{
    sub_53084( l_U195, ref l_U196 );
    return;
}

void sub_53084(unknown uParam0, unknown uParam1)
{
    if (NOT l_U122)
    {
        sub_20718( uParam1 );
        return;
    }
    sub_38731( uParam0, uParam1 );
    return;
}

void sub_53142()
{
    sub_53084( l_U267, ref l_U268 );
    return;
}

void sub_53176()
{
    sub_53084( l_U305, ref l_U306 );
    return;
}

void sub_53210()
{
    sub_53084( l_U276, ref l_U277 );
    return;
}

void sub_53244()
{
    sub_53084( l_U314, ref l_U315 );
    return;
}

int sub_53489(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U401[uParam0]._fU0;
    if (NOT g_U9932[g_U10324[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    if (NOT (sub_22833( uVar3 )))
    {
        return 0;
    }
    return 1;
}

int sub_53701(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return sub_53759();
        case 3: return sub_53992();
        case 7: return sub_54022();
        case 8: return sub_54052();
        case 13: return sub_54082();
    }
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Check_Friend_Nearby: Not a friend" );
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Check_Friend_Nearby: Should never reach here" );
    return 0;
}

void sub_53759()
{
    return sub_53773( l_U195 );
}

int sub_53773(unknown uParam0)
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

void sub_53992()
{
    return sub_53773( l_U267 );
}

void sub_54022()
{
    return sub_53773( l_U305 );
}

void sub_54052()
{
    return sub_53773( l_U276 );
}

void sub_54082()
{
    return sub_53773( l_U314 );
}

int sub_54350()
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
        SET_PLAYER_CONTROL( sub_3662(), 0 );
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
        if (sub_38317( sub_1591() ))
        {
            return 0;
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref uVar3 );
        GET_CAR_SPEED( uVar3, ref fVar4 );
        if ((fVar4 < 0.04000000) || (l_U120 < iVar2))
        {
            SET_PLAYER_CONTROL( sub_3662(), 1 );
            l_U193 = 0;
            return 1;
        }
    }
    return 0;
}

int sub_54611()
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

void sub_54753()
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
        sub_54801();
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
        sub_53066();
    }
    else
    {
        sub_20705();
        sub_22292();
    }
    if (l_U325 == 1)
    {
        if (bVar2)
        {
            sub_55081();
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
        if (NOT (sub_55688( l_U195 )))
        {
            SET_PLAYER_CONTROL( sub_3662(), 1 );
            l_U325++;
        }
    }
    if (l_U325 == 4)
    {
        if (IS_MINIGAME_IN_PROGRESS())
        {
            sub_20705();
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

void sub_54801()
{
    int iVar2;

    iVar2 = 0;
    sub_54819( ref l_U147, iVar2 );
    g_U22274[l_U158]._fU688._fU28 = -1;
    return;
}

void sub_54819(int iParam0, unknown uParam1)
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

void sub_55081()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;

    if ((l_U337 < 0) || (l_U337 >= 2))
    {
        sub_33347( "RomanTenPin: Play Arrival Speech: Chosen Destination out of range" );
    }
    uVar2 = l_U401[l_U337]._fU0;
    uVar3 = g_U10324[uVar2]._fU16;
    iVar4 = 0;
    sub_54819( ref l_U141, iVar4 );
    sub_3237( "FCR21AU" );
    sub_3356( 0, sub_1591(), "NIKO", 0 );
    sub_3356( l_U157, l_U195, ref l_U153, 0 );
    switch (uVar3)
    {
        case 0:
        sub_55306( l_U158, ref l_U141 );
        break;
        default:
        sub_33347( "RomanTenPin: Play Arrival Speech: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_55306(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRB", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRB", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_ARRB", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_ARRB", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_55688(unknown uParam0)
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

void sub_55885()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U343 = 0;
    if (l_U325 == 0)
    {
        l_U325++;
    }
    if (l_U325 == 1)
    {
        if (sub_55936())
        {
            l_U325++;
        }
    }
    if (l_U325 == 2)
    {
        sub_55991();
        sub_56522( 0, 5 );
        sub_58080();
        sub_53066();
        l_U325++;
    }
    if (l_U325 == 3)
    {
        sub_58140();
        sub_53066();
        l_U325++;
    }
    if (l_U325 == 4)
    {
        if (IS_VEH_DRIVEABLE( l_U336 ))
        {
            uVar2 = {l_U401[l_U337]._fU4};
            uVar5 = l_U401[l_U337]._fU16;
            SET_CAR_HEADING( l_U336, uVar5 );
            SET_CAR_COORDINATES( l_U336, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
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
        sub_59309( 0, 5 );
        l_U892 = 1;
        sub_59431( 5, l_U892, g_U32898._fU32 );
        g_U9205 = 1;
        l_U324 = 5;
        l_U325 = 0;
    }
    return;
}

void sub_55936()
{
    return g_U32898._fU28;
}

void sub_55991()
{
    l_U1319 = sub_56000();
    switch (l_U1319)
    {
        case 1:
        l_U338 = 0;
        sub_56165( "PASS LEVEL: EXCELLENT" );
        break;
        case 0:
        case 2:
        l_U338 = 1;
        sub_56165( "PASS LEVEL: GOOD" );
        break;
        case 3:
        l_U338 = 3;
        sub_56165( "PASS LEVEL: MINIMAL" );
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
    sub_56338( "Calculate_Pass_Level: Unknown minigame result" );
    return;
}

void sub_56000()
{
    unknown Result;

    Result = g_U32898._fU16;
    g_U32898._fU4 = 9;
    g_U32898._fU16 = 8;
    g_U32898._fU24 = 0;
    g_U32898._fU28 = 0;
    return Result;
}

void sub_56165(unknown uParam0)
{
    return;
}

void sub_56338(unknown uParam0)
{
    sub_56385( "WARNING: ROMAN BOWLING (KEITHM): ", uParam0 );
    return;
}

void sub_56385(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "WARNING: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_56522(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_56533( uParam0 );
    g_U34181._fU0[uVar4]._fU0[uParam1]++;
    g_U34181._fU0[uVar4]._fU60++;
    sub_56765( uParam1 );
    switch (uParam0)
    {
        case 0:
        sub_13728( 354 );
        INCREMENT_INT_STAT_NO_MESSAGE( 354, 1 );
        break;
        case 3:
        sub_13728( 355 );
        INCREMENT_INT_STAT_NO_MESSAGE( 355, 1 );
        break;
        case 7:
        sub_13728( 357 );
        INCREMENT_INT_STAT_NO_MESSAGE( 357, 1 );
        break;
        case 8:
        sub_13728( 356 );
        INCREMENT_INT_STAT_NO_MESSAGE( 356, 1 );
        break;
        case 13:
        sub_13728( 358 );
        INCREMENT_INT_STAT_NO_MESSAGE( 358, 1 );
        break;
        default: sub_4629( "Friend_Achievement_Activity_Performed: Unknown Friend ID" );
    }
    sub_57585( uParam0, uParam1 );
    return;
}

int sub_56533(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 3: return 1;
        case 7: return 2;
        case 8: return 3;
        case 13: return 4;
    }
    sub_4629( "Convert_Friend_To_Friend_Stats_ID: Unrecognised Friend ID" );
    return 5;
}

void sub_56765(int iParam0)
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
    sub_56925( iParam0, ref cVar6 );
    if (CAN_THE_STAT_HAVE_STRING( 662 ))
    {
        sub_13728( 662 );
        REGISTER_STRING_FOR_FRONTEND_STAT( 662, ref cVar6 );
    }
    return;
}

void sub_56925(unknown uParam0, unknown uParam1)
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
        default: sub_4629( "Friend_Achievement_Fill_Activity_String: Unknown activity" );
    }
    return;
}

void sub_57585(unknown uParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    char[64] cVar8;

    uVar4 = sub_56533( uParam0 );
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
    sub_56925( iParam1, ref cVar8 );
    switch (uParam0)
    {
        case 0:
        if (CAN_THE_STAT_HAVE_STRING( 663 ))
        {
            sub_13728( 663 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 663, ref cVar8 );
        }
        break;
        case 3:
        if (CAN_THE_STAT_HAVE_STRING( 664 ))
        {
            sub_13728( 664 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 664, ref cVar8 );
        }
        break;
        case 7:
        if (CAN_THE_STAT_HAVE_STRING( 666 ))
        {
            sub_13728( 666 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 666, ref cVar8 );
        }
        break;
        case 8:
        if (CAN_THE_STAT_HAVE_STRING( 665 ))
        {
            sub_13728( 665 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 665, ref cVar8 );
        }
        break;
        case 13:
        if (CAN_THE_STAT_HAVE_STRING( 667 ))
        {
            sub_13728( 667 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 667, ref cVar8 );
        }
        break;
        default: sub_4629( "Friend_Achievement_Check_For_New_Favourite_Activity_With_Friend: Unknown friend ID" );
    }
    return;
}

void sub_58080()
{
    sub_38731( l_U195, ref l_U196 );
    return;
}

void sub_58140()
{
    sub_3237( "FCR21AU" );
    sub_3356( 0, sub_1591(), "NIKO", 0 );
    sub_3356( l_U157, l_U195, ref l_U153, 0 );
    sub_58217( l_U1319, l_U158, ref l_U141 );
    return;
}

void sub_58217(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_58271( uParam1, uParam2 );
        break;
        case 2:
        sub_58458( uParam1, uParam2 );
        break;
        case 1:
        sub_58645( uParam1, uParam2 );
        break;
        case 3:
        sub_58832( uParam1, uParam2 );
        break;
        default: sub_4629( "Ended_Bowling_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_58271(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_BLVW", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_BLW", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_BLW", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_BLVW", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_58458(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_BLVD", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_BLD", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_BLD", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_BLVD", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_58645(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_BLVL", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_BLL", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_BLL", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_BLVL", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_58832(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_BLVA", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_BLA", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_BLA", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_BLVA", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_59309(unknown uParam0, unknown uParam1)
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

void sub_59431(int iParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;

    if (l_U378)
    {
        return;
    }
    if (iParam0 == 8)
    {
        sub_59462();
        return;
    }
    if (iParam0 == 7)
    {
        sub_59519();
        return;
    }
    if (sub_59577( l_U147 ))
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

void sub_59462()
{
    if (l_U378)
    {
        sub_54801();
        return;
    }
    l_U344._fU32 = 0;
    return;
}

void sub_59519()
{
    l_U344._fU0 = 1;
    l_U344._fU4 = 0;
    l_U344._fU8 = 1;
    l_U344._fU12 = 0;
    return;
}

int sub_59577(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_41797( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_41797( "\n speech is not playing" );
    }
    return 0;
}

void sub_59857()
{
    int iVar2;

    l_U343 = 0;
    iVar2 = 0;
    l_U111 = 1;
    if (NOT (sub_59904( iVar2, l_U195, l_U197, "FCR21AU" )))
    {
        l_U910 = 1;
        return;
    }
    return;
}

void sub_59904(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 1;
    return sub_59929( uParam0, uParam1, uParam2, iVar8, uParam5 );
}

int sub_59929(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6)
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
        if (sub_59995( uParam0, iParam1, uParam6 ))
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
                sub_61607( uParam0 );
            }
            else
            {
                sub_62319( uParam0, uParam2 );
            }
        }
        if (NOT l_U370)
        {
            sub_63015( ref l_U362, 5, 0, 0 );
            sub_63015( ref l_U366, 8, 0, 0 );
        }
        l_U388 = {0.00000000, 0.00000000, 0.00000000};
        l_U391 = 0;
        l_U398 = 0;
        l_U325++;
    }
    if (l_U325 == 1)
    {
        if (NOT (sub_59577( l_U141 )))
        {
            if (NOT l_U370)
            {
                sub_3237( uParam6 );
                sub_3356( 0, sub_1591(), "NIKO", 0 );
                sub_3356( l_U157, iParam1, ref l_U153, 0 );
                if (l_U376)
                {
                    sub_63780( l_U158, ref l_U141, l_U377 );
                }
                else if (NOT (g_U22274[uParam0]._fU144 == 7))
                {
                    sub_63947( l_U158, ref l_U141 );
                }
                else
                {
                    sub_64823( l_U158 );
                }
                sub_65023( uParam0, bParam5 );
            }
            l_U325++;
        }
        sub_65780( uParam0, bParam5, uParam2 );
    }
    if (l_U325 == 2)
    {
        fVar9 = uParam2._fU8 + 0.00000000;
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), uParam2._fU0, uParam2._fU4, fVar9, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            if (sub_53773( iParam1 ))
            {
                l_U325++;
            }
        }
        l_U343 = 1;
        if (l_U116)
        {
            sub_53084( iParam1, ref l_U372 );
        }
        else
        {
            sub_53008( uParam0 );
        }
        sub_65780( uParam0, bParam5, uParam2 );
    }
    if (NOT l_U370)
    {
        if (l_U325 < 3)
        {
            if (NOT (IS_CHAR_DEAD( sub_1591() )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), uParam2._fU0, uParam2._fU4, uParam2._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
                {
                    sub_66481( uParam0, iParam1 );
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
        sub_60228();
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
        if (sub_54350())
        {
            sub_68088( uParam0 );
            sub_65859( uParam0 );
            SET_PLAYER_CONTROL( sub_3662(), 0 );
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
            fVar27 = sub_23906( vVar18, vVar21 );
            if ((fVar27 < 5.00000000) || (TIMERA() > 7000))
            {
                l_U325++;
            }
        }
    }
    if (l_U325 == 8)
    {
        iVar28 = 0;
        sub_22144( iVar28 );
        if (NOT l_U370)
        {
            sub_3237( uParam6 );
            sub_3356( 0, sub_1591(), "NIKO", 0 );
            sub_3356( l_U157, iParam1, ref l_U153, 0 );
            if (l_U376)
            {
                sub_68942( l_U158, ref l_U141 );
            }
            else
            {
                sub_60748( l_U158, ref l_U141 );
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
            fVar27 = sub_23906( uVar29, uVar32 );
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
        if (sub_69799())
        {
            l_U325 = 50;
            return 0;
        }
        if (NOT (sub_59577( l_U141 )))
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
                if (IS_GROUP_MEMBER( iParam1, sub_21615() ))
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
        if ((sub_70391( iParam1, l_U359 )) || (TIMERA() > 7000))
        {
            l_U325++;
        }
    }
    if (l_U325 == 13)
    {
        sub_20848( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_21879();
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
        sub_54819( ref l_U141, iVar38 );
        l_U108 = 0;
        if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
        {
            if (IS_GROUP_MEMBER( iParam1, sub_21615() ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam1 );
            }
        }
        sub_20848( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_21879();
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

int sub_59995(unknown uParam0, int iParam1, unknown uParam2)
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
        uVar5 = sub_60112( l_U382, l_U379 );
        SET_CHAR_HEADING( iParam1, uVar5 );
        uVar5 = sub_60112( l_U379, l_U382 );
        SET_CHAR_HEADING( sub_1591(), uVar5 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_60228();
        SET_PLAYER_CONTROL( sub_3662(), 0 );
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
        sub_22144( iVar9 );
        sub_3237( uParam2 );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( l_U157, iParam1, ref l_U153, 0 );
        sub_60748( l_U158, ref l_U141 );
        l_U326++;
    }
    if (l_U326 == 6)
    {
        if (NOT (sub_59577( l_U141 )))
        {
            l_U108 = 0;
            if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
            {
                if (IS_GROUP_MEMBER( iParam1, sub_21615() ))
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
        sub_20848( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_21879();
        SET_GAME_CAM_HEADING( 0.00000000 );
        return 1;
    }
    return 0;
}

void sub_60112(vector vParam0, vector vParam3)
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

void sub_60228()
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

void sub_60748(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_60783( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_DRPOFF", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_DRPOFF", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_DRPOFF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_DRPOFF", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_DRPOFF", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_60783(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        if (g_U15654[6])
        {
            sub_41623( "MF3_APPT", uParam1, 8, 1 );
        }
        else
        {
            sub_41623( "FCR_HDRPOF", uParam1, 8, 1 );
        }
        return;
        case 3:
        sub_41623( "FCJ_HOSPDRP", uParam1, 8, 1 );
        return;
        case 7:
        sub_41623( "FCD2_DRPOFF", uParam1, 8, 1 );
        break;
        case 8:
        sub_41623( "FCB2_DRPOFF", uParam1, 8, 1 );
        return;
        case 13:
        sub_41623( "FCP_DRPOFF", uParam1, 8, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_61607(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_61665();
        return;
        case 3:
        sub_61758();
        return;
        case 7:
        sub_61851();
        return;
        case 8:
        sub_61944();
        return;
        case 13:
        sub_62037();
        return;
    }
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Not a friend" );
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Should never reach here" );
    return;
}

void sub_61665()
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

void sub_61758()
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

void sub_61851()
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

void sub_61944()
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

void sub_62037()
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

void sub_62319(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 0:
        sub_62380( uParam1 );
        return;
        case 3:
        sub_62467( uParam1 );
        return;
        case 7:
        sub_62554( uParam1 );
        return;
        case 8:
        sub_62641( uParam1 );
        return;
        case 13:
        sub_62728( uParam1 );
        return;
    }
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Not a friend" );
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Should never reach here" );
    return;
}

void sub_62380(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_62467(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_62554(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_62641(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_62728(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_63015(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_63068( iParam0, uParam1, uParam2 );
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
        sub_63200( iParam0 + 0 );
    }
    return;
}

void sub_63068(int iParam0, int iParam1, int iParam2)
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
        sub_63200( iParam0 + 0 );
    }
    return;
}

void sub_63200(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_63231( iParam0->_fU4 )))
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

int sub_63231(unknown uParam0)
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

void sub_63780(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_60783( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_41623( uParam2, uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( uParam2, uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_63947(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_63982( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_TKHM", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_TKHM2", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_TKHM", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_TKHM", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_TKHM", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_63982(unknown uParam0, unknown uParam1)
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
            sub_64080( ref uVar4, "MF3_HOSP", "MF3_TKHM" );
            sub_64422( ref uVar4, uParam1, 8, 1 );
        }
        return;
        case 3: return;
        case 7:
        sub_41623( "FCD2_TKHM", uParam1, 8, 1 );
        break;
        case 8:
        sub_41623( "FCB2_TKHM", uParam1, 8, 1 );
        return;
        case 13:
        sub_41623( "FCP_TKHM", uParam1, 8, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_64080(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_64131( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_64131(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_64422(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_64443( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_64443(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_41698( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_64823(unknown uParam0)
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

void sub_65023(unknown uParam0, boolean bParam1)
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
            sub_65155( uParam0 );
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
            sub_65393( uParam0 );
        }
        else
        {
            sub_65576( uParam0 );
        }
        g_U9193 = 1;
    }
    return;
}

void sub_65155(unknown uParam0)
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

void sub_65393(unknown uParam0)
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

void sub_65576(unknown uParam0)
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

void sub_65780(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
            sub_61607( uParam0 );
        }
        else
        {
            sub_62319( uParam0, uParam2 );
        }
        return;
    }
    sub_65859( uParam0 );
    return;
}

void sub_65859(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_20818();
        return;
        case 3:
        sub_65925();
        return;
        case 7:
        sub_65957();
        return;
        case 8:
        sub_65989();
        return;
        case 13:
        sub_66021();
        return;
    }
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Not a friend" );
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Should never reach here" );
    return;
}

void sub_65925()
{
    REMOVE_BLIP( l_U275 );
    return;
}

void sub_65957()
{
    REMOVE_BLIP( l_U313 );
    return;
}

void sub_65989()
{
    REMOVE_BLIP( l_U284 );
    return;
}

void sub_66021()
{
    REMOVE_BLIP( l_U322 );
    return;
}

int sub_66481(unknown uParam0, unknown uParam1)
{
    if (sub_66494( ref l_U362 ))
    {
        if (sub_66571( l_U362 ))
        {
            sub_41029( ref l_U362 );
            sub_66849( uParam0, ref l_U141, l_U157, uParam1, l_U153 );
            return 1;
        }
    }
    if (sub_66494( ref l_U366 ))
    {
        if (sub_66571( l_U366 ))
        {
            sub_41029( ref l_U366 );
            sub_67073( uParam0, ref l_U141, l_U157, uParam1, l_U153 );
            l_U370 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_66494(int iParam0)
{
    if (((((ref iParam0->_fU0->_fU4) == -1) AND ((ref iParam0->_fU0->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU4) == -1))
    {
        return 0;
    }
    return 1;
}

int sub_66571(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_66740( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_66740(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_66849(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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
        sub_41623( "FCP_BGET", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_67073(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    switch (uParam0)
    {
        case 0:
        sub_3237( "FCR21AU" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam2, uParam3, ref uParam4, 0 );
        sub_41623( "FCR_TKHM", uParam1, 7, 1 );
        return;
        case 3:
        sub_3237( "FCPAAUD" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam2, uParam3, ref uParam4, 0 );
        sub_41623( "FCJ_BTKHM", uParam1, 7, 1 );
        return;
        case 7:
        sub_3237( "FCD2AU" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam2, uParam3, ref uParam4, 0 );
        sub_41623( "FCD2_TKHM", uParam1, 7, 1 );
        return;
        case 8:
        sub_3237( "FCB2AU" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam2, uParam3, ref uParam4, 0 );
        sub_41623( "FCB2_TKHM", uParam1, 7, 1 );
        return;
        case 13:
        sub_3237( "FCPAAUD" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam2, uParam3, ref uParam4, 0 );
        sub_41623( "FCP_BTKHM", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_68088(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_20705();
        return;
        case 3:
        sub_68154();
        return;
        case 7:
        sub_68183();
        return;
        case 8:
        sub_68212();
        return;
        case 13:
        sub_68241();
        return;
    }
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Not a friend" );
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Should never reach here" );
    return;
}

void sub_68154()
{
    sub_20718( ref l_U268 );
    return;
}

void sub_68183()
{
    sub_20718( ref l_U306 );
    return;
}

void sub_68212()
{
    sub_20718( ref l_U277 );
    return;
}

void sub_68241()
{
    sub_20718( ref l_U315 );
    return;
}

void sub_68942(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_60783( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_41623( "FCJ_DRPOFFL", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_DOFFL", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_69799()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_70391(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (l_U194 == 0)
    {
        if (IS_GROUP_MEMBER( uParam0, sub_21615() ))
        {
            REMOVE_CHAR_FROM_GROUP( uParam0 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            l_U194 = 1;
            return 0;
        }
        SET_PLAYER_CONTROL( sub_3662(), 0 );
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
            SET_PLAYER_CONTROL( sub_3662(), 1 );
            l_U194 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_71193()
{
    l_U428 = -1;
    return;
}

int sub_71221(unknown uParam0)
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
    if (IS_GROUP_MEMBER( uParam0, sub_21615() ))
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
    fVar9 = sub_23906( uVar3, uVar6 );
    if (fVar9 < 12.00000000)
    {
        SET_GROUP_MEMBER( sub_21615(), uParam0 );
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

void sub_71537()
{
    int iVar2;
    int iVar3;

    if (NOT l_U910)
    {
        return;
    }
    iVar2 = sub_71570( 0, l_U195, ref l_U141 );
    if (NOT (iVar2 == 14))
    {
        sub_83592( iVar2 );
        l_U899 = sub_83805( iVar2 );
        sub_83955( 0, iVar2, "FCR21AU", l_U157, l_U195, ref l_U153, ref l_U141 );
    }
    iVar2 = sub_89707();
    if (NOT (iVar2 == 14))
    {
        l_U126 = sub_89753( iVar2 );
        sub_89984( 0, iVar2, "FCR21AU", l_U157, l_U195, ref l_U153, ref l_U141 );
        sub_97517( iVar2, ref l_U379, ref l_U382, ref l_U385 );
        l_U378 = l_U899;
        sub_59431( iVar2, l_U892, g_U32898._fU32 );
    }
    iVar3 = sub_97642();
    if (iVar3 == 9)
    {
        iVar2 = 14;
    }
    else
    {
        iVar2 = sub_97703( iVar3 );
    }
    if (sub_97928( iVar2, l_U195 ))
    {
        sub_98864( 0, "FCR21AU", l_U157, l_U195, ref l_U153, ref l_U141 );
    }
    if (l_U913)
    {
        l_U123 = 0;
        l_U913 = 0;
    }
    if (l_U914)
    {
        l_U123 = 1;
        l_U914 = 0;
    }
    return;
}

int sub_71570(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    int Result;

    if (l_U922)
    {
        uVar5 = sub_71591( uParam0 );
        sub_71730( uParam0, uParam1, uVar5 );
    }
    if (l_U911)
    {
        sub_76123( uParam0, uParam1, uParam2 );
        return 14;
    }
    Result = 14;
    Result = 6;
    if (sub_82172( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 7;
    if (sub_82343( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 8;
    if (sub_82343( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 11;
    if (sub_82172( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 12;
    if (sub_82172( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 13;
    if (sub_82172( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 5;
    if (sub_82172( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    return 14;
}

int sub_71591(unknown uParam0)
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

void sub_71730(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if (NOT l_U867)
    {
        sub_71756( uParam0, uParam1, uParam2 );
        g_U9205 = 0;
        return;
    }
    if (NOT g_U9202)
    {
        sub_20224();
        return;
    }
    if (g_U9205)
    {
        sub_19148( uParam1, 1 );
        g_U9205 = 0;
        return;
    }
    iVar5 = 1;
    sub_72525( iVar5 );
    sub_72667( sub_1591(), iVar5 );
    sub_72830( sub_1591(), iVar5 );
    sub_73431();
    sub_74613( sub_1591(), iVar5 );
    sub_74738( uParam2 );
    sub_74878();
    if ((NOT (IS_CHAR_DEAD( sub_1591() ))) AND (l_U868._fU8))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1591(), 0, 0 );
    }
    if (IS_CHAR_DEAD( uParam1 ))
    {
        return;
    }
    iVar5 = 0;
    sub_72525( iVar5 );
    sub_72667( uParam1, iVar5 );
    sub_75269( uParam1 );
    sub_75691( uParam1 );
    sub_72830( uParam1, iVar5 );
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() )))
    {
        sub_74613( uParam1, iVar5 );
    }
    if ((NOT (IS_CHAR_DEAD( uParam1 ))) AND (l_U877._fU8))
    {
        SET_CURRENT_CHAR_WEAPON( uParam1, 0, 0 );
    }
    return;
}

void sub_71756(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    unknown uVar7;

    sub_71769( ref l_U868 );
    sub_71769( ref l_U877 );
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    l_U868._fU8 = 0;
    l_U877._fU8 = 0;
    iVar6 = sub_19440( sub_1591(), uParam2 );
    uVar7 = sub_19440( uParam1, uParam2 );
    l_U868._fU24 = iVar5 + iVar6;
    l_U877._fU24 = iVar5 + iVar6;
    if (iVar6 > 0)
    {
        l_U868._fU8 = 1;
        l_U877._fU8 = 1;
    }
    sub_19171( uParam2 );
    sub_71953( uParam2 );
    l_U867 = 1;
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

void sub_71769(int iParam0)
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

void sub_71953(unknown uParam0)
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
                l_U886 = 0.00000000;
                return;
            }
        }
    }
    switch (uParam0)
    {
        case 0:
        l_U886 = 0.00000000;
        break;
        case 1:
        l_U886 = sub_72135( 0.05000000, 0.02000000 );
        break;
        case 2:
        l_U886 = sub_72135( 0.07000000, 0.03000000 );
        break;
        case 3:
        l_U886 = sub_72135( 0.09000000, 0.04000000 );
        break;
        case 4:
        l_U886 = sub_72135( 0.10000000, 0.05000000 );
        break;
        case 5:
        l_U886 = sub_72135( 0.13000000, 0.06000000 );
        break;
    }
    return;
}

void sub_72135(unknown uParam0, unknown uParam1)
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

void sub_72525(unknown uParam0)
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

    uVar3 = {sub_19648( uParam0 )};
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
    sub_72603( uParam0, ref uVar3 );
    return;
}

void sub_72603(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        l_U868 = {(uParam1^)};
    }
    else
    {
        l_U877 = {(uParam1^)};
    }
    return;
}

void sub_72667(unknown uParam0, boolean bParam1)
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

    uVar4 = {sub_19648( bParam1 )};
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
        sub_19583( uParam0 );
        return;
    }
    if (IS_PED_RAGDOLL( uParam0 ))
    {
        return;
    }
    iVar14 = uVar4._fU24 - iVar13;
    sub_19760( uParam0, iVar14 );
    return;
}

void sub_72830(unknown uParam0, unknown uParam1)
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

    uVar4 = {sub_19648( uParam1 )};
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
                sub_19760( uParam0, iVar21 );
            }
            uVar4._fU28 = 0;
            uVar4._fU0 = 0;
        }
        sub_72603( uParam1, ref uVar4 );
        return;
    }
    if (uVar4._fU16)
    {
        if (iVar13 > uVar4._fU28)
        {
            uVar4._fU16 = 0;
            uVar4._fU0 = 1;
            sub_19583( uParam0 );
            uVar4._fU28 = 0;
        }
        sub_72603( uParam1, ref uVar4 );
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
        sub_72603( uParam1, ref uVar4 );
        return;
    }
    if ((CHECK_NM_FEEDBACK( uParam0, 80, 1 )) || (iVar20))
    {
        uVar4._fU12 = 1;
        uVar4._fU28 = 0;
        uVar4._fU32 = iVar13 + 3000;
        sub_72603( uParam1, ref uVar4 );
        return;
    }
    uVar4._fU28 = 0;
    sub_72603( uParam1, ref uVar4 );
    return;
}

void sub_73431()
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
    uVar3 = {sub_19648( iVar2 )};
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
    if (NOT (l_U889 == nil))
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U889 )))
        {
            l_U889 = nil;
        }
    }
    if (l_U889 == nil)
    {
        GET_CHAR_COORDINATES( sub_1591(), ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
        iVar16 = 70;
        l_U889 = GET_CLOSEST_CAR( uVar13, 7.00000000, 0, iVar16 );
        l_U890 = 0;
    }
    if (l_U889 == nil)
    {
        bVar12 = false;
    }
    iVar17 = 1;
    bVar18 = false;
    if (bVar12)
    {
        fVar19 = -1.00000000;
        fVar20 = 2.00000000;
        if (((IS_CAR_MODEL( l_U889, -956048545 )) || (IS_CAR_MODEL( l_U889, 1884962369 ))) || (IS_CAR_MODEL( l_U889, 1208856469 )))
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
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U889, fVar19, 0.00000000, 0.00000000, ref uVar22._fU0, ref uVar22._fU4, ref uVar22._fU8 );
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), uVar22._fU0, uVar22._fU4, uVar22._fU8, fVar20, fVar20, fVar20, 0 ))
        {
            bVar21 = true;
            iVar17 = 1;
        }
        if ((NOT bVar21) AND (NOT bVar18))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U889, 1.00000000, 0.00000000, 0.00000000, ref uVar22._fU0, ref uVar22._fU4, ref uVar22._fU8 );
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), uVar22._fU0, uVar22._fU4, uVar22._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                bVar21 = true;
                iVar17 = 0;
            }
        }
        if (NOT bVar21)
        {
            bVar12 = false;
            l_U889 = nil;
        }
    }
    iVar25 = 0;
    GET_GAME_TIMER( ref iVar25 );
    iVar26 = nil;
    if (uVar3._fU4)
    {
        bVar27 = false;
        if (sub_38317( sub_1591() ))
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
                else if (NOT l_U890)
                {
                    TASK_SHUFFLE_TO_NEXT_CAR_SEAT( sub_1591(), uVar28 );
                    l_U890 = 1;
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
                        l_U890 = 0;
                    }
                };;;
            }
        }
        if (bVar27)
        {
            uVar3._fU4 = 0;
            uVar3._fU20 = 1;
            l_U890 = 0;
            sub_74269();
            sub_74305();
        }
        else if (NOT bVar12)
        {
            CLEAR_CHAR_TASKS( sub_1591() );
            uVar3._fU4 = 0;
            if (uVar3._fU24 > iVar25)
            {
                iVar30 = uVar3._fU24 - iVar25;
                sub_19760( sub_1591(), iVar30 );
            }
        }
        sub_72603( iVar2, ref uVar3 );
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
    sub_19583( sub_1591() );
    SET_NEXT_DESIRED_MOVE_STATE( 2 );
    GET_CAR_MODEL( l_U889, ref uVar31 );
    uVar32 = IS_THIS_MODEL_A_BIKE( uVar31 );
    if ((iVar17) || (uVar32))
    {
        TASK_ENTER_CAR_AS_DRIVER( sub_1591(), l_U889, -1 );
    }
    else
    {
        TASK_ENTER_CAR_AS_PASSENGER( sub_1591(), l_U889, -1, 0 );
    }
    uVar3._fU4 = 1;
    sub_72603( iVar2, ref uVar3 );
    return;
}

void sub_74269()
{
    if (l_U400)
    {
        return;
    }
    l_U399 = 1;
    return;
}

void sub_74305()
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

void sub_74613(unknown uParam0, unknown uParam1)
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

    uVar4 = {sub_19648( uParam1 )};
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
    sub_19760( uParam0, iVar14 );
    uVar4._fU20 = 0;
    l_U890 = 0;
    sub_72603( uParam1, ref uVar4 );
    return;
}

void sub_74738(unknown uParam0)
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
    if (l_U887 == 0)
    {
        bVar5 = true;
    }
    else if (iVar4 > l_U887)
    {
        bVar5 = true;
    }
    if (bVar5)
    {
        sub_71953( uParam0 );
        l_U887 = iVar4 + 1000;
    }
    SET_VEHICLE_STEER_BIAS( uVar3, l_U886 );
    return;
}

void sub_74878()
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

    if (NOT (IS_PLAYER_PLAYING( sub_3662() )))
    {
        return;
    }
    if (sub_38317( sub_1591() ))
    {
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() )))
    {
        return;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_3662(), 0 ))
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
    ALTER_WANTED_LEVEL_NO_DROP( sub_3662(), 1 );
    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3662() );
    return;
}

void sub_75269(unknown uParam0)
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
    uVar4 = {sub_19648( iVar3 )};
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
    if (l_U888 == 0)
    {
        bVar14 = true;
    }
    else if (l_U888 < iVar13)
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
    l_U888 = iVar13 + 5000;
    sub_72603( iVar3, ref uVar4 );
    return;
}

void sub_75691(unknown uParam0)
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
    uVar4 = {sub_19648( iVar3 )};
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
        sub_72603( iVar3, ref uVar4 );
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
    sub_19583( uParam0 );
    SET_NEXT_DESIRED_MOVE_STATE( 2 );
    TASK_ENTER_CAR_AS_PASSENGER( uParam0, uVar20, -2, 0 );
    uVar4._fU4 = 1;
    sub_72603( iVar3, ref uVar4 );
    return;
}

void sub_76123(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (l_U917)
    {
        case 0:
        sub_76184();
        break;
        case 1:
        sub_76315();
        break;
        case 2:
        sub_76711( uParam0, uParam1, uParam2 );
        break;
        case 3:
        sub_77776( uParam0, uParam1, uParam2 );
        break;
        case 4:
        sub_79131( uParam0 );
        break;
    }
    return;
}

void sub_76184()
{
    if (l_U918 == 0)
    {
        sub_76205();
        l_U918++;
    }
    if (l_U918 == 1)
    {
        if (sub_55936())
        {
            l_U918 = 99;
        }
    }
    if (l_U918 == 99)
    {
        l_U917 = 1;
        l_U918 = 0;
    }
    return;
}

void sub_76205()
{
    g_U9212 = 1;
    g_U9347 = 1;
    return;
}

void sub_76315()
{
    unknown uVar2;

    l_U895 = sub_76324();
    sub_76409( l_U912, l_U895 );
    uVar2 = sub_14936( l_U939 );
    sub_56522( uVar2, l_U912 );
    l_U911 = 0;
    l_U894 = l_U912;
    l_U912 = 14;
    if (l_U892)
    {
        l_U898 = 1;
    }
    sub_76639();
    g_U9205 = 1;
    l_U917 = 5;
    return;
}

void sub_76324()
{
    unknown Result;

    Result = g_U32898._fU20;
    g_U32898._fU8 = 9;
    g_U32898._fU20 = 8;
    g_U32898._fU24 = 0;
    g_U32898._fU28 = 0;
    return Result;
}

void sub_76409(unknown uParam0, unknown uParam1)
{
    if (l_U909 == 3)
    {
        SCRIPT_ASSERT( "Store_Alternative_Result: All allowed alternative activities have already been played" );
    }
    l_U902[l_U909]._fU0 = uParam0;
    l_U902[l_U909]._fU4 = uParam1;
    l_U909++;
    return;
}

void sub_76639()
{
    if (l_U894 == 12)
    {
        g_U9212 = 0;
        g_U9347 = 0;
    }
    return;
}

void sub_76711(unknown uParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    if (l_U918 == 0)
    {
        SET_PLAYER_CONTROL( sub_3662(), 0 );
        sub_76205();
        sub_76750();
        l_U918++;
    }
    if (l_U918 == 1)
    {
        if (sub_54350())
        {
            sub_77097( uParam1 );
            SETTIMERA( 0 );
            l_U918++;
        }
    }
    bVar5 = true;
    if (l_U918 == 2)
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
            l_U918 = 99;
        }
    }
    if (l_U918 == 99)
    {
        l_U917 = 3;
        l_U918 = 0;
    }
    return;
}

void sub_76750()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    l_U919 = 1;
    iVar2 = 0;
    BEGIN_CAM_COMMANDS( ref iVar2 );
    switch (l_U912)
    {
        case 7:
        uVar3 = {l_U802[l_U901]._fU20};
        uVar6 = {l_U802[l_U901]._fU32};
        break;
        case 8:
        uVar3 = {l_U429[l_U901]._fU20};
        uVar6 = {l_U429[l_U901]._fU32};
        break;
        default: SCRIPT_ASSERT( "Start_NonMission_Camera_Move_Before_Fade: Unknown activity" );
    }
    CREATE_CAM( 14, ref l_U920 );
    SET_CAM_POS( l_U920, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
    SET_CAM_ROT( l_U920, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
    SET_CAM_ACTIVE( l_U920, 1 );
    SET_CAM_PROPAGATE( l_U920, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return;
}

void sub_77097(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    iVar3 = -1;
    switch (l_U912)
    {
        case 7:
        iVar3 = l_U802[l_U901]._fU0;
        break;
        case 8:
        iVar3 = l_U429[l_U901]._fU0;
        break;
        default: SCRIPT_ASSERT( "Start_NonMission_Walk_Towards_Destination: Unknown activity" );
    }
    bVar4 = false;
    if (IS_CHAR_IN_ANY_CAR( sub_1591() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1591(), ref l_U921 );
        bVar4 = true;
    }
    OPEN_SEQUENCE_TASK( ref uVar5 );
    if (bVar4)
    {
        if (IS_CHAR_IN_CAR( sub_1591(), l_U921 ))
        {
            TASK_LEAVE_CAR( 0, l_U921 );
        }
    }
    uVar6 = {g_U10324[iVar3]._fU0};
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar6._fU0, uVar6._fU4, uVar6._fU8, 2, -2, 2.00000000 );
    CLOSE_SEQUENCE_TASK( uVar5 );
    TASK_PERFORM_SEQUENCE( sub_1591(), uVar5 );
    CLEAR_SEQUENCE_TASK( uVar5 );
    if (IS_GROUP_MEMBER( uParam0, sub_21615() ))
    {
        l_U913 = 1;
        REMOVE_CHAR_FROM_GROUP( uParam0 );
    }
    if (IS_CHAR_INJURED( uParam0 ))
    {
        return;
    }
    if (bVar4)
    {
        if (IS_CAR_DEAD( l_U921 ))
        {
            return;
        }
    }
    OPEN_SEQUENCE_TASK( ref uVar5 );
    if (bVar4)
    {
        if (IS_CHAR_IN_CAR( uParam0, l_U921 ))
        {
            TASK_PAUSE( 0, 600 );
            TASK_LEAVE_CAR( 0, l_U921 );
        }
    }
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar6._fU0, uVar6._fU4, uVar6._fU8, 2, -2, 2.00000000 );
    CLOSE_SEQUENCE_TASK( uVar5 );
    TASK_PERFORM_SEQUENCE( uParam0, uVar5 );
    CLEAR_SEQUENCE_TASK( uVar5 );
    return;
}

void sub_77776(unknown uParam0, unknown uParam1, unknown uParam2)
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
    switch (l_U912)
    {
        case 7:
        uVar5 = l_U802[l_U901]._fU0;
        uVar6 = {g_U10324[uVar5]._fU0};
        uVar9 = {l_U802[l_U901]._fU4};
        uVar12 = l_U802[l_U901]._fU16;
        bVar13 = true;
        break;
        case 8:
        uVar5 = l_U429[l_U901]._fU0;
        uVar6 = {g_U10324[uVar5]._fU0};
        uVar9 = {l_U429[l_U901]._fU4};
        uVar12 = l_U429[l_U901]._fU16;
        break;
        default: SCRIPT_ASSERT( "Has_NonMission_Cutscene_Ended: Unknown activity" );
    }
    if (l_U918 == 0)
    {
        g_U9204 = 0;
        SETTIMERA( 0 );
        l_U918++;
    }
    if (l_U918 == 1)
    {
        if (NOT (sub_59577( (uParam2^) )))
        {
            l_U918++;
        }
    }
    if (l_U918 == 2)
    {
        if (TIMERA() >= 1500)
        {
            DO_SCREEN_FADE_OUT( 1000 );
            SETTIMERA( 0 );
            l_U918++;
        }
    }
    if (l_U918 == 3)
    {
        if ((TIMERA() > 1200) AND (IS_SCREEN_FADED_OUT()))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1591() );
            CLEAR_CHAR_TASKS_IMMEDIATELY( uParam1 );
            l_U918++;
        }
    }
    if (l_U918 == 4)
    {
        if (IS_VEH_DRIVEABLE( l_U921 ))
        {
            SET_CAR_HEADING( l_U921, uVar12 );
            SET_CAR_COORDINATES( l_U921, uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( l_U921 );
        }
        if (NOT l_U899)
        {
            SET_CHAR_COORDINATES( uParam1, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            uVar14 = {sub_78349( uVar6, uVar9 )};
            SET_CHAR_COORDINATES( sub_1591(), uVar14._fU0, uVar14._fU4, uVar14._fU8 );
            uVar17 = sub_60112( uVar9, uVar6 );
            SET_CHAR_HEADING( uParam1, uVar17 );
            uVar17 = sub_60112( uVar9, uVar14 );
            SET_CHAR_HEADING( sub_1591(), uVar17 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CURRENT_CHAR_WEAPON( sub_1591(), 0, 0 );
        }
        if (bVar13)
        {
            SET_ROMANS_MOOD( 3 );
        }
        SETTIMERA( 0 );
        l_U918++;
    }
    if (l_U918 == 5)
    {
        SET_CAM_ACTIVE( l_U920, 0 );
        SET_CAM_PROPAGATE( l_U920, 0 );
        DESTROY_ALL_CAMS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        iVar18 = 0;
        END_CAM_COMMANDS( ref iVar18 );
        l_U919 = 0;
        l_U918++;
    }
    if (l_U918 == 6)
    {
        if (l_U899)
        {
            g_U9205 = 1;
            l_U918 = 99;
        }
        else if (l_U912 == 7)
        {
            g_U9204 = 1;
            l_U918++;
        }
        else
        {
            g_U9205 = 1;
            if (TIMERA() >= 1000)
            {
                DO_SCREEN_FADE_IN( 1000 );
                SETTIMERA( 0 );
                l_U918++;
            }
        }
    }
    if (l_U918 == 7)
    {
        if (g_U9204)
        {
            l_U918++;
        }
        else if ((TIMERA() > 1200) AND (IS_SCREEN_FADED_IN()))
        {
            l_U918++;
        }
    }
    if (l_U918 == 8)
    {
        SET_PLAYER_CONTROL( sub_3662(), 1 );
        SET_GROUP_MEMBER( sub_21615(), uParam1 );
        l_U914 = 1;
        l_U918++;
    }
    if (l_U918 == 9)
    {
        if (l_U912 == 7)
        {
            if (NOT g_U9194)
            {
                PRINT_HELP( "FRDRUNK" );
                g_U9194 = 1;
            }
        }
        l_U918 = 99;
    }
    if (l_U918 == 99)
    {
        l_U917 = 4;
        l_U918 = 0;
    }
    return;
}

void sub_78349(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_79131(unknown uParam0)
{
    unknown uVar3;

    l_U895 = sub_79147( l_U912, uParam0 );
    sub_76409( l_U912, l_U895 );
    uVar3 = sub_14936( l_U939 );
    sub_56522( uVar3, l_U912 );
    switch (l_U912)
    {
        case 7:
        sub_81380( uVar3 );
        sub_81786();
        break;
        case 8:
        sub_81821( uVar3 );
        sub_81900();
        if (NOT (IS_CHAR_DEAD( sub_1591() )))
        {
            SET_CHAR_HEALTH( sub_1591(), 200 );
            RESET_VISIBLE_PED_DAMAGE( sub_1591() );
        }
        break;
        default: SCRIPT_ASSERT( "Perform_Alternative_NonMinigame_Complete: Unknown non-minigame ID" );
    }
    l_U911 = 0;
    l_U894 = l_U912;
    l_U912 = 14;
    if (l_U892)
    {
        l_U898 = 1;
    }
    if (l_U894 == 7)
    {
        l_U922 = 1;
    }
    if (l_U894 == 8)
    {
        l_U923 = 1;
    }
    l_U917 = 5;
    return;
}

int sub_79147(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 7: return sub_79188( uParam1, l_U901 );
        case 8: return sub_80263( uParam1, l_U901 );
    }
    SCRIPT_ASSERT( "Return_Alternative_NonMinigame_Result_For_Activity: unknown activity" );
    return 8;
}

int sub_79188(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0: return sub_79248( uParam1 );
        case 3: return sub_79428( uParam1 );
        case 7: return sub_79612( uParam1 );
        case 8: return sub_79797( uParam1 );
        case 13: return sub_79986( uParam1 );
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Friend: unknown friend" );
    return 8;
}

int sub_79248(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U802[uParam0]._fU0;
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

int sub_79428(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U802[uParam0]._fU0;
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

int sub_79612(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U802[uParam0]._fU0;
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

int sub_79797(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U802[uParam0]._fU0;
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

int sub_79986(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U802[uParam0]._fU0;
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

int sub_80263(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0: return sub_80315( uParam1 );
        case 3: return sub_80517( uParam1 );
        case 7: return sub_80724( uParam1 );
        case 8: return sub_80932( uParam1 );
    }
    SCRIPT_ASSERT( "Return_Alternative_Eating_Result_For_Friend: unknown friend" );
    return 8;
}

int sub_80315(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U429[uParam0]._fU0;
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

int sub_80517(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U429[uParam0]._fU0;
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

int sub_80724(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U429[uParam0]._fU0;
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

int sub_80932(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U429[uParam0]._fU0;
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

void sub_81380(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    uVar3 = sub_81391( uParam0 );
    fVar4 = 50;
    fVar5 = fVar4 * uVar3;
    uVar6 = sub_81599( fVar5 );
    sub_81749( uVar6 );
    return;
}

float sub_81391(unknown uParam0)
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

void sub_81599(unknown uParam0)
{
    int iVar3;
    int Result;
    int iVar5;

    iVar3 = sub_81608();
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
    sub_81704( iVar5 );
    return Result;
}

void sub_81608()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_3662() ))
    {
        STORE_SCORE( sub_3662(), ref Result );
    }
    return Result;
}

void sub_81704(unknown uParam0)
{
    ADD_SCORE( sub_3662(), uParam0 );
    return;
}

void sub_81749(unknown uParam0)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 94, uParam0 );
    return;
}

void sub_81786()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 283, 1 );
    return;
}

void sub_81821(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    uVar3 = sub_81391( uParam0 );
    fVar4 = 100;
    fVar5 = fVar4 * uVar3;
    uVar6 = sub_81599( fVar5 );
    sub_81863( uVar6 );
    return;
}

void sub_81863(unknown uParam0)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 97, uParam0 );
    return;
}

void sub_81900()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 306, 1 );
    return;
}

int sub_82172(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = sub_47862( uParam0 );
    if (iVar6 == 9)
    {
        return 0;
    }
    if (NOT (sub_82205( iVar6 )))
    {
        return 0;
    }
    l_U917 = 0;
    l_U918 = 0;
    l_U911 = 1;
    l_U912 = uParam0;
    sub_76123( uParam1, uParam2, uParam3 );
    return 1;
}

int sub_82205(int iParam0)
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

int sub_82343(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    if (sub_82352() <= 0)
    {
        return 0;
    }
    iVar6 = -1;
    switch (uParam0)
    {
        case 7:
        iVar6 = sub_82421( uParam2 );
        break;
        case 8:
        iVar6 = sub_82907( uParam2 );
        break;
        default: SCRIPT_ASSERT( "Check_If_New_Alternative_NonMinigame_Activity_Started: Unknown Activity ID" );
    }
    if (iVar6 == -1)
    {
        return 0;
    }
    sub_83294();
    l_U924[uParam0]--;
    l_U917 = 2;
    l_U918 = 0;
    l_U911 = 1;
    l_U912 = uParam0;
    l_U901 = iVar6;
    sub_76123( uParam1, uParam2, uParam3 );
    return 1;
}

void sub_82352()
{
    return g_U32898._fU32;
}

int sub_82421(unknown uParam0)
{
    int Result;
    int iVar4;
    int iVar5;
    float fVar6;

    if (NOT (l_U924[7] > 0))
    {
        return -1;
    }
    Result = 0;
    iVar4 = 0;
    iVar5 = 0;
    fVar6 = 0.00000000;
    for ( Result = 0; Result < 5; Result++ )
    {
        iVar4 = l_U802[Result]._fU0;
        if ((sub_82493( Result )) AND (NOT (sub_82556( iVar4 ))))
        {
            iVar5 = g_U10324[iVar4]._fU28 == g_U9937;
            fVar6 = l_U802[Result]._fU4._fU8;
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), l_U802[Result]._fU4._fU0, l_U802[Result]._fU4._fU4, fVar6, 2.50000000, 2.50000000, 2.50000000, iVar5 )) AND (NOT (sub_38317( sub_1591() ))))
            {
                if (sub_82764( uParam0 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_82493(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U802[uParam0]._fU0;
    if (NOT g_U9932[g_U10324[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    return 1;
}

int sub_82556(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 4:
        if (l_U891 == 6)
        {
            if (NOT l_U892)
            {
                return 1;
            }
            else if (NOT l_U898)
            {
                return 1;
            }
        }
        break;
        default:
    }
    return 0;
}

int sub_82764(unknown uParam0)
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

int sub_82907(unknown uParam0)
{
    int Result;
    int iVar4;
    int iVar5;
    float fVar6;

    if (NOT (l_U924[8] > 0))
    {
        return -1;
    }
    Result = 0;
    iVar4 = 0;
    iVar5 = 0;
    fVar6 = 0.00000000;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (sub_82966( Result ))
        {
            iVar4 = l_U429[Result]._fU0;
            iVar5 = g_U10324[iVar4]._fU28 == g_U9937;
            fVar6 = l_U429[Result]._fU4._fU8;
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_1591(), l_U429[Result]._fU4._fU0, l_U429[Result]._fU4._fU4, fVar6, 2.50000000, 2.50000000, 2.50000000, iVar5 )) AND (NOT (sub_38317( sub_1591() ))))
            {
                if (sub_82764( uParam0 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_82966(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U429[uParam0]._fU0;
    if (NOT g_U9932[g_U10324[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    return 1;
}

void sub_83294()
{
    if (NOT (g_U32898._fU32 > 0))
    {
        return;
    }
    g_U32898._fU32--;
    return;
}

void sub_83592(int iParam0)
{
    if (iParam0 == 8)
    {
        sub_83610();
        return;
    }
    sub_54801();
    return;
}

void sub_83610()
{
    if (l_U344._fU8)
    {
        sub_54801();
        return;
    }
    l_U344._fU32 = 1;
    sub_83649();
    return;
}

void sub_83649()
{
    unknown uVar2;

    if (l_U344._fU24)
    {
        return;
    }
    uVar2 = sub_83679( l_U147 );
    g_U22274[l_U158]._fU688._fU28 = uVar2;
    return;
}

void sub_83679(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_59577( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

boolean sub_83805(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    switch (uParam0)
    {
        case 8: break;
        default: return 0;
    }
    uVar3 = sub_14936( l_U939 );
    if (NOT g_U22274[uVar3]._fU172)
    {
        return 0;
    }
    if (NOT l_U892)
    {
        return 0;
    }
    iVar4 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
    return iVar4 < 20;
}

void sub_83955(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if (l_U893)
    {
        return;
    }
    if (iParam1 == l_U891)
    {
        return;
    }
    iVar9 = 0;
    sub_54819( uParam6, iVar9 );
    sub_3237( uParam2 );
    sub_3356( 0, sub_1591(), "NIKO", 0 );
    sub_3356( uParam3, uParam4, uParam5, 0 );
    sub_84051( iParam1, uParam0, uParam6 );
    return;
}

void sub_84051(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 6:
        sub_84129( uParam1, uParam2 );
        l_U893 = 1;
        return;
        case 7:
        sub_84290( uParam1, uParam2, l_U901 );
        l_U893 = 1;
        return;
        case 8:
        sub_86451( uParam1, uParam2, l_U901 );
        l_U893 = 1;
        return;
        case 11:
        sub_88298( uParam1, uParam2 );
        l_U893 = 1;
        return;
        case 12:
        if (g_U9937 == 2)
        {
            sub_88469( uParam1, uParam2 );
        }
        else
        {
            switch (uParam1)
            {
                case 0:
                sub_88692( uParam1, uParam2 );
                break;
                default: sub_88944( uParam1, uParam2 );
            }
        }
        l_U893 = 1;
        return;
        case 13:
        sub_89181( uParam1, uParam2 );
        l_U893 = 1;
        return;
        case 5:
        sub_89413( uParam1, uParam2 );
        l_U893 = 1;
        return;
    }
    SCRIPT_ASSERT( "Play_Alternative_Activity_Started_Speech_For_Activity: Activity speech not set up" );
    return;
}

void sub_84129(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_DDY", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_DDY", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_DDY", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84290(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_84354( uParam0, uParam1, uParam2 );
        return;
        case 3:
        sub_85207( uParam0, uParam1, uParam2 );
        return;
        case 7:
        sub_85554( uParam0, uParam1, uParam2 );
        return;
        case 8:
        sub_85916( uParam0, uParam1, uParam2 );
        return;
        case 13:
        sub_86132( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Drinking_Arrival_Speech_By_Friend: Unknown friend ID" );
    return;
}

void sub_84354(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U802[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 8:
        if (NOT g_U15654[23])
        {
            sub_84448( uParam0, uParam1 );
        }
        else if (NOT g_U15654[24])
        {
            sub_84555( uParam0, uParam1 );
        }
        else
        {
            sub_84648( uParam0, uParam1 );
        }
        break;
        case 9:
        sub_84874( uParam0, uParam1 );
        break;
        case 6:
        case 7:
        sub_84648( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Arrival_Speech_By_Roman: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_84448(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRPVA", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84555(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRPVD", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84648(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRPG", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_ARRPG", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRPG", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_ARRPG", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_ARRPG", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84874(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRCG", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_ARRCG", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRCG", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_ARRCG", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_ARRCG", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_85207(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U802[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 9:
        sub_85287( uParam0, uParam1 );
        break;
        case 8:
        case 6:
        case 7:
        sub_84648( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Arrival_Speech_By_Jacob: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_85287(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_41623( "FCJ_ARRPF", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRCF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_ARRCF", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_85554(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U802[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 9:
        sub_85287( uParam0, uParam1 );
        break;
        case 8:
        sub_85648( uParam0, uParam1 );
        break;
        case 6:
        case 7:
        sub_84648( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Arrival_Speech_By_Dwayne: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_85648(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 7:
        sub_41623( "FCD2_ARRPF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_ARRPF", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_ARRPF", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_85916(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U802[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 9:
        sub_85287( uParam0, uParam1 );
        break;
        case 7:
        sub_85648( uParam0, uParam1 );
        break;
        case 8:
        case 6:
        sub_84648( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Arrival_Speech_By_Brucie: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_86132(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U802[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 8:
        sub_85648( l_U158, ref l_U141 );
        break;
        case 9:
        sub_84874( l_U158, ref l_U141 );
        break;
        case 6:
        case 7:
        sub_84648( l_U158, ref l_U141 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Arrival_Speech_By_Packie: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_86451(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_86507( uParam0, uParam1, uParam2 );
        return;
        case 3:
        sub_87372( uParam0, uParam1, uParam2 );
        return;
        case 7:
        sub_87733( uParam0, uParam1, uParam2 );
        return;
        case 8:
        sub_87982( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Eating_Arrival_Speech_By_Friend: Unknown friend ID" );
    return;
}

void sub_86507(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U429[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 16:
        sub_86603( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_86695( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_86888( uParam0, uParam1 );
        break;
        case 11:
        sub_87083( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Arrival_Speech_By_Roman: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_86603(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRBS", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_86695(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRHI", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_ARRHI", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRHI", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_ARRHI", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_86888(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRSTA", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_ARRSTA", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRST", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_ARRST", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_87083(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRFF", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_ARRFF", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRFF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_ARRFF", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_87372(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U429[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 11:
        sub_87468( uParam0, uParam1 );
        break;
        case 16:
        sub_87083( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_86695( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_86888( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Arrival_Speech_By_Jacob: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_87468(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_41623( "FCJ_ARRCL", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRCLK", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_87733(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U429[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 11:
        sub_87468( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_86695( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_86888( uParam0, uParam1 );
        break;
        case 16:
        sub_87083( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Arrival_Speech_By_Dwayne: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_87982(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U429[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 11:
        case 16:
        sub_87083( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_86695( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_86888( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Arrival_Speech_By_Brucie: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_88298(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_DPY", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_DIFFPY", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_DPY", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88469(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRSHC", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_ARRSH", uParam1, 7, 1 );
        return;
        case 7: return;
        case 8:
        sub_41623( "FCB2_ARRSHC", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_ARRSHC", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88692(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = false;
    if (g_U15654[25])
    {
        if (NOT g_U15654[26])
        {
            sub_88735( uParam0, uParam1 );
            bVar4 = true;
        }
        else if (NOT g_U15654[27])
        {
            sub_88845( uParam0, uParam1 );
            bVar4 = true;
        }
    }
    if (NOT bVar4)
    {
        sub_88944( uParam0, uParam1 );
    }
    return;
}

void sub_88735(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRCFA", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88845(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRCFD", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88944(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRSHCA", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_ARRSHCA", uParam1, 7, 1 );
        return;
        case 7: return;
        case 8:
        sub_41623( "FCB2_ARRSHCA", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_ARRSHCA", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_89181(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_ARRST", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_ARRST", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_ARRSTR", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_ARRSTR", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_ARRST", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_89413(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_DBY", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_DIFBY", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_DBY", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_DBY", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_89707()
{
    unknown Result;

    Result = l_U894;
    l_U894 = 14;
    return Result;
}

int sub_89753(unknown uParam0)
{
    l_U900 = 0;
    switch (uParam0)
    {
        case 13: break;
        default: return 0;
    }
    if (l_U895 == 8)
    {
        SCRIPT_ASSERT( "m_altResultForSpeech = MGR_NOT_SET: Make sure this function called before Activity_Finished_Speech()" );
    }
    if (NOT (l_U895 == 7))
    {
        return 0;
    }
    l_U900 = 1;
    return 1;
}

void sub_89984(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if ((NOT l_U899) AND (NOT l_U900))
    {
        iVar9 = 0;
        sub_54819( uParam6, iVar9 );
        sub_3237( uParam2 );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_3356( uParam3, uParam4, uParam5, 0 );
        sub_90074( uParam1, l_U895, uParam0, uParam6 );
    }
    l_U895 = 8;
    return;
}

void sub_90074(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 6:
        sub_90154( uParam1, uParam2, uParam3 );
        return;
        case 7:
        sub_90916( uParam2, uParam3, l_U901 );
        return;
        case 8:
        sub_93054( uParam2, uParam3, l_U901 );
        return;
        case 11:
        sub_94869( uParam1, uParam2, uParam3 );
        return;
        case 12:
        if (g_U9937 == 2)
        {
            sub_95639( uParam1, uParam2, uParam3 );
        }
        else
        {
            sub_96072( uParam1, uParam2, uParam3 );
        }
        return;
        case 13:
        sub_96899( uParam1, uParam2, uParam3 );
        return;
        case 5:
        sub_58217( uParam1, uParam2, uParam3 );
        return;
    }
    SCRIPT_ASSERT( "Play_Activity_Ended_Speech_For_Activity: Activity speech not set up" );
    return;
}

void sub_90154(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_90208( uParam1, uParam2 );
        break;
        case 2:
        sub_90362( uParam1, uParam2 );
        break;
        case 1:
        sub_90516( uParam1, uParam2 );
        break;
        case 3:
        sub_90670( uParam1, uParam2 );
        break;
        default: sub_4629( "Ended_Darts_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_90208(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_DLVW", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_DLW", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_DLVW", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90362(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_DLVD", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_DLD", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_DLVD", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90516(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_DLVL", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_DLL", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_DLVL", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90670(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_DLVA", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_DLA", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_DLVA", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90916(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_90980( uParam0, uParam1, uParam2 );
        return;
        case 3:
        sub_91826( uParam0, uParam1, uParam2 );
        return;
        case 7:
        sub_92168( uParam0, uParam1, uParam2 );
        return;
        case 8:
        sub_92525( uParam0, uParam1, uParam2 );
        return;
        case 13:
        sub_92741( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Friend: Unknown friend ID" );
    return;
}

void sub_90980(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U802[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 8:
        if (NOT g_U15654[23])
        {
            sub_91074( uParam0, uParam1 );
        }
        else if (NOT g_U15654[24])
        {
            sub_91180( uParam0, uParam1 );
            g_U15654[24] = 1;
        }
        else
        {
            sub_91281( uParam0, uParam1 );
        }
        break;
        case 9:
        sub_91499( uParam0, uParam1 );
        break;
        case 6:
        case 7:
        sub_91281( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Roman: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_91074(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVPVA", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91180(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVPVD", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91281(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVPG", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_LPG", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_LPG", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_LPG", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_LVPG", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91499(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVCG", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_LCLG", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_LCG", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_LCG", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_LVCLG", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91826(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U802[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 9:
        sub_91906( uParam0, uParam1 );
        break;
        case 8:
        case 6:
        case 7:
        sub_91281( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Jacob: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_91906(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_41623( "FCJ_LCLF", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_LCF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_LCF", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_92168(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U802[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 9:
        sub_91906( uParam0, uParam1 );
        break;
        case 8:
        sub_92262( uParam0, uParam1 );
        break;
        case 6:
        case 7:
        sub_91281( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Dwayne: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_92262(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 7:
        sub_41623( "FCD2_LPF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_LPF", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_LVCF", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_92525(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U802[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 9:
        sub_91906( uParam0, uParam1 );
        break;
        case 7:
        sub_92262( uParam0, uParam1 );
        break;
        case 8:
        case 6:
        sub_91281( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Brucie: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_92741(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U802[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 8:
        sub_92262( l_U158, ref l_U141 );
        break;
        case 9:
        sub_91499( l_U158, ref l_U141 );
        break;
        case 6:
        case 7:
        sub_91281( l_U158, ref l_U141 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Packie: Unknown Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_93054(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_93110( uParam0, uParam1, uParam2 );
        return;
        case 3:
        sub_93952( uParam0, uParam1, uParam2 );
        return;
        case 7:
        sub_94309( uParam0, uParam1, uParam2 );
        return;
        case 8:
        sub_94557( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Friend: Unknown friend ID" );
    return;
}

void sub_93110(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U429[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 16:
        sub_93206( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_93297( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_93483( uParam0, uParam1 );
        break;
        case 11:
        sub_93670( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Roman: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_93206(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVBS", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_93297(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVHI", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_LHI", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_LHI", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_LHI", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_93483(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVST", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_LST", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_LSTD", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_LST", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_93670(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVFF", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_LFF", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_LFF", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_LFF", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_93952(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U429[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 11:
        sub_94048( uParam0, uParam1 );
        break;
        case 16:
        sub_93670( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_93297( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_93483( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Jacob: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_94048(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_41623( "FCJ_LCL", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_LCLK", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94309(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U429[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 11:
        sub_94048( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_93297( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_93483( uParam0, uParam1 );
        break;
        case 16:
        sub_93670( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Jacob: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_94557(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U429[uParam2]._fU0;
    uVar6 = g_U10324[uVar5]._fU16;
    switch (uVar6)
    {
        case 11:
        case 16:
        sub_93670( uParam0, uParam1 );
        break;
        case 14:
        case 15:
        sub_93297( uParam0, uParam1 );
        break;
        case 13:
        case 12:
        sub_93483( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Brucie: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_94869(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_94923( uParam1, uParam2 );
        break;
        case 2:
        sub_95077( uParam1, uParam2 );
        break;
        case 1:
        sub_95231( uParam1, uParam2 );
        break;
        case 3:
        sub_95385( uParam1, uParam2 );
        break;
        default: sub_4629( "Ended_Pool_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_94923(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_PLVW", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_PLW", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_PLVW", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95077(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_PLVD", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_PLD", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_PLVD", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95231(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_PLVL", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_PLL", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_PLVL", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95385(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_PLVA", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_PLA", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_PLVA", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95639(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 3)
    {
        sub_95661( uParam1, uParam2 );
    }
    else
    {
        sub_95862( uParam1, uParam2 );
    }
    return;
}

void sub_95661(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVSHE", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_LSHE", uParam1, 7, 1 );
        return;
        case 7: return;
        case 8:
        sub_41623( "FCB2_LSHE", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_LVSHE", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95862(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVSHC", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_LSH", uParam1, 7, 1 );
        return;
        case 7: return;
        case 8:
        sub_41623( "FCB2_LSHC", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_LVSHC", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_96072(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 3)
    {
        switch (uParam1)
        {
            case 0:
            sub_96111( uParam1, uParam2 );
            break;
            default: sub_96165( uParam1, uParam2 );
        }
    }
    else
    {
        switch (uParam1)
        {
            case 0:
            sub_96405( uParam1, uParam2 );
            break;
            default: sub_96664( uParam1, uParam2 );
        }
    }
    return;
}

void sub_96111(unknown uParam0, unknown uParam1)
{
    if (((g_U15654[25]) AND (g_U15654[26])) AND (NOT g_U15654[27]))
    {
        g_U15654[27] = 1;
    }
    sub_96165( uParam0, uParam1 );
    return;
}

void sub_96165(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVSHE", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_LSHE", uParam1, 7, 1 );
        return;
        case 7: return;
        case 8:
        sub_41623( "FCB2_LSHE", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_LVSHE", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_96405(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = false;
    if (g_U15654[25])
    {
        if (NOT g_U15654[26])
        {
            sub_96448( uParam0, uParam1 );
            bVar4 = true;
        }
        else if (NOT g_U15654[27])
        {
            sub_96557( uParam0, uParam1 );
            g_U15654[27] = 1;
            bVar4 = true;
        }
    }
    if (NOT bVar4)
    {
        sub_96664( uParam0, uParam1 );
    }
    return;
}

void sub_96448(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVCFA", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_96557(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVCFD", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_96664(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR2_LVSHCA", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_LSHC", uParam1, 7, 1 );
        return;
        case 7: return;
        case 8:
        sub_41623( "FCB2_LSHCA", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_LVSHCA", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_96899(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 1)
    {
        return;
    }
    if (iParam0 == 3)
    {
        sub_96933( uParam1, uParam2 );
    }
    else
    {
        sub_97163( uParam1, uParam2 );
    }
    return;
}

void sub_96933(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LVSTOK", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_LSTOK", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_LSTROK", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_LSTROK", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_LVSTOK", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_97163(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_LSTG", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_LSTG", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_LSTRPG", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_LSTRG", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_LVSTG", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_97517(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (iParam0 == 8)
    {
        (uParam1^) = {l_U429[l_U901]._fU48};
        (uParam2^) = {l_U429[l_U901]._fU60};
        (uParam3^) = {l_U429[l_U901]._fU72};
        return;
    }
    return;
}

void sub_97642()
{
    unknown Result;

    Result = g_U32898._fU12;
    g_U32898._fU12 = 9;
    return Result;
}

int sub_97703(unknown uParam0)
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

int sub_97928(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == 14))
    {
        l_U897 = iParam0;
    }
    if (l_U897 == 14)
    {
        return 0;
    }
    if (l_U897 == l_U891)
    {
        return 0;
    }
    if (l_U897 == l_U896)
    {
        return 0;
    }
    switch (l_U897)
    {
        case 6: return sub_98064( uParam1 );
        case 11: return sub_98231( uParam1 );
        case 12: return sub_98271( uParam1 );
        case 13: return sub_98330( uParam1 );
        case 5: return sub_98687( uParam1 );
    }
    SCRIPT_ASSERT( "Check_If_Issue_No_To_Alternative_Activity: Unrecognised activity ID" );
    return 0;
}

int sub_98064(unknown uParam0)
{
    if (sub_98076( uParam0, 10 ))
    {
        return 1;
    }
    return 0;
}

void sub_98076(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = {g_U10324[uParam1]._fU0};
    return sub_98105( uParam0, uVar4 );
}

void sub_98105(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return 0;
    }
    if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_1591(), uParam1._fU0, uParam1._fU4, uParam1._fU8, 4.00000000, 4.00000000, 4.00000000, 0 )))
    {
        return 0;
    }
    return sub_82764( uParam0 );
}

int sub_98231(unknown uParam0)
{
    if (sub_98076( uParam0, 9 ))
    {
        return 1;
    }
    return 0;
}

int sub_98271(unknown uParam0)
{
    if (sub_98076( uParam0, 11 ))
    {
        return 1;
    }
    if (sub_98076( uParam0, 40 ))
    {
        return 1;
    }
    return 0;
}

int sub_98330(unknown uParam0)
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
    if ((((sub_98420( uParam0, "Bada_room1" )) || (sub_98420( uParam0, "Bada-Private" ))) || (sub_98420( uParam0, "Bada_room2" ))) || (sub_98420( uParam0, "Bada_room1" )))
    {
        return 1;
    }
    if ((((sub_98420( uParam0, "clammainroom" )) || (sub_98420( uParam0, "clampalbkrm" ))) || (sub_98420( uParam0, "clamfronrm" ))) || (sub_98420( uParam0, "clammainroom" )))
    {
        return 1;
    }
    return 0;
}

int sub_98420(unknown uParam0, unknown uParam1)
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

int sub_98687(unknown uParam0)
{
    if (sub_98076( uParam0, 8 ))
    {
        return 1;
    }
    if (sub_98076( uParam0, 39 ))
    {
        return 1;
    }
    return 0;
}

void sub_98864(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 0;
    sub_54819( uParam5, iVar8 );
    sub_3237( uParam1 );
    sub_3356( 0, sub_1591(), "NIKO", 0 );
    sub_3356( uParam2, uParam3, uParam4, 0 );
    sub_98929( uParam0, uParam5 );
    l_U896 = l_U897;
    return;
}

void sub_98929(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_41623( "FCR_DACTN", uParam1, 7, 1 );
        return;
        case 3:
        sub_41623( "FCJ_DIFFAN", uParam1, 7, 1 );
        return;
        case 7:
        sub_41623( "FCD2_DIFNO", uParam1, 7, 1 );
        return;
        case 8:
        sub_41623( "FCB2_DACTN", uParam1, 7, 1 );
        return;
        case 13:
        sub_41623( "FCP_DACTN", uParam1, 7, 1 );
        return;
    }
    sub_41623( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_99227()
{
    sub_99241( 0, 53, 2 );
    return;
}

void sub_99241(unknown uParam0, int iParam1, unknown uParam2)
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
    uVar13 = sub_30943( uParam0 );
    sub_31434( uVar13, iVar5, 16383, 16383, ref uVar6 );
    sub_31778( ref uVar6, 1 );
    sub_31806( ref uVar6, 0 );
    sub_31834( ref uVar6, 2 );
    sub_31864( ref uVar6 );
    return;
}

void sub_99364(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown uVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    sub_99386( uParam0 );
    sub_100025();
    if (l_U344._fU0)
    {
        if (sub_59577( l_U141 ))
        {
            return;
        }
        if (IS_PLAYER_PLAYING( sub_3662() ))
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
    sub_100422( uParam0 );
    if (l_U344._fU4)
    {
        if (sub_101137( uParam0 ))
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
        if (NOT (sub_101137( uParam0 )))
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
                sub_101517( l_U158 );
                sub_3356( 0, sub_1591(), "NIKO", 0 );
                sub_3356( l_U157, uParam0, ref l_U153, 0 );
                if (NOT (sub_101958( l_U158, ref l_U147, l_U344._fU16 )))
                {
                    bVar4 = true;
                }
            }
            else
            {
                sub_106674( l_U158 );
                sub_3356( 0, sub_1591(), "NIKO", 0 );
                sub_3356( l_U157, uParam0, ref l_U153, 0 );
                sub_107076( l_U158, ref l_U147 );
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
    if (sub_110500( uParam0 ))
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
                if ((sub_99420( ref l_U147 )) || ((sub_83679( l_U147 )) > 5))
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
                if (IS_PLAYER_PLAYING( sub_3662() ))
                {
                    STOP_PED_SPEAKING( sub_1591(), 0 );
                }
            }
            return;
        }
    }
    return;
}

void sub_99386(unknown uParam0)
{
    unknown uVar3;

    if (l_U344._fU24)
    {
        l_U397 = 0;
        return;
    }
    if (NOT (sub_99420( ref l_U147 )))
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
        if (NOT sub_99610())
        {
            SAY_AMBIENT_SPEECH( sub_1591(), "MESSING_WITH_PHONE", 0, 0, 0 );
            l_U397 = 0;
        }
        return;
    }
    if (sub_99701( l_U158, 1 ))
    {
        l_U397 = 1;
        return;
    }
    return;
}

int sub_99420(int iParam0)
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

int sub_99610()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_99701(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_41797( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_41797( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
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

void sub_100025()
{
    if (l_U400)
    {
        if (sub_99420( ref l_U141 ))
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
        sub_83649();
        return;
    }
    if (NOT (sub_99420( ref l_U147 )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_1591() ))
    {
        return;
    }
    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_1591() )) AND (NOT (sub_38317( sub_1591() ))))
    {
        sub_3237( "MF10AUD" );
        sub_3356( 0, sub_1591(), "NIKO", 0 );
        sub_41623( "MF5_DRUNK", ref l_U141, 7, 1 );
        l_U399 = 0;
        l_U400 = 1;
        return;
    }
    l_U400 = 0;
    l_U399 = 0;
    return;
}

void sub_100422(unknown uParam0)
{
    sub_100433( uParam0 );
    sub_100608( uParam0 );
    sub_100930( uParam0 );
    return;
}

void sub_100433(unknown uParam0)
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
    fVar9 = sub_23906( uVar3, uVar6 );
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
    sub_83649();
    return;
}

void sub_100608(unknown uParam0)
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
    sub_83649();
    return;
}

void sub_100930(unknown uParam0)
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
    sub_83649();
    return;
}

int sub_101137(unknown uParam0)
{
    unknown uVar3;

    if ((sub_101146()) || (l_U344._fU24))
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

int sub_101146()
{
    if (((((l_U344._fU32) || (l_U344._fU36)) || (l_U344._fU40)) || (l_U344._fU44)) || (l_U344._fU48))
    {
        return 1;
    }
    return 0;
}

void sub_101517(unknown uParam0)
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
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Not a friend" );
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Should never reach here" );
    return;
}

int sub_101958(int iParam0, unknown uParam1, unknown uParam2)
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
        sub_41623( "MF3_DRIVE", uParam1, 5, iVar5 );
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
    sub_102280( iParam0 );
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
    sub_102772( iParam0 );
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
        sub_4629( "FA_Friend_Speech_Generic_Conversations: Tell Keith: something fundamentally wrong with algorithm" );
        return 0;
    }
    PRINTSTRING( "AFTER\n" );
    sub_102280( iParam0 );
    iVar13 = 0;
    switch (iParam0)
    {
        case 0:
        sub_103583( uParam1, iVar13 );
        return 1;
        case 3:
        sub_104319( uParam1, iVar13 );
        return 1;
        case 7:
        sub_104885( uParam1, iVar13 );
        return 1;
        case 8:
        sub_105397( uParam1, iVar13 );
        return 1;
        case 13:
        sub_105956( uParam1, iVar13 );
        return 1;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: must have forgotten to update friend ID when added speech" );
    return 0;
}

void sub_102280(unknown uParam0)
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

void sub_102772(unknown uParam0)
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

void sub_103583(unknown uParam0, boolean bParam1)
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
        sub_4629( "FA_Roman_Speech_Generic_Conversations: inconsistent number of Roman conversations - see Roman Flow" );
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
        sub_104061( "FCRC2AU" );
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
            sub_104172( ref cVar4[iVar62], iVar63, iVar64, uParam0, 5, iVar61 );
        }
        return;
    }
    sub_41623( ref cVar4[iVar62], uParam0, 5, iVar61 );
    return;
}

int sub_104061(unknown uParam0)
{
    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        StrCopy( ref l_U4._fU0, uParam0, 16 );
        return 1;
    }
    return 0;
}

void sub_104172(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_104197( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_104197(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_41698( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_104319(unknown uParam0, boolean bParam1)
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
        sub_4629( "FA_Jacob_Speech_Generic_Conversations: inconsistent number of Jacob conversations - see Jacob Flow" );
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
        sub_104061( "FCJC2AU" );
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
            sub_104172( ref cVar4[iVar62], iVar63, iVar64, uParam0, 5, iVar61 );
        }
        return;
    }
    sub_41623( ref cVar4[iVar62], uParam0, 5, iVar61 );
    return;
}

void sub_104885(unknown uParam0, boolean bParam1)
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
        sub_4629( "FA_Dwayne_Speech_Generic_Conversations: inconsistent number of Dwayne conversations - see Dwayne Flow" );
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
            sub_104172( ref cVar4[iVar50], iVar51, iVar52, uParam0, 5, iVar49 );
        }
        return;
    }
    sub_41623( ref cVar4[iVar50], uParam0, 5, iVar49 );
    return;
}

void sub_105397(unknown uParam0, boolean bParam1)
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
        sub_4629( "FA_Brucie_Speech_Generic_Conversations: inconsistent number of Brucie conversations - see Brucie Flow" );
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
        sub_104061( "FCB4AUD" );
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
            sub_104172( ref cVar4[iVar54], iVar55, iVar56, uParam0, 5, iVar53 );
        }
        return;
    }
    sub_41623( ref cVar4[iVar54], uParam0, 5, iVar53 );
    return;
}

void sub_105956(unknown uParam0, boolean bParam1)
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
        sub_4629( "FA_Packie_Speech_Generic_Conversations: inconsistent number of Packie conversations - see Packie Flow" );
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
        sub_104061( "FCPC2AU" );
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
            sub_104172( ref cVar4[iVar58], iVar59, iVar60, uParam0, 5, iVar57 );
        }
        return;
    }
    sub_41623( ref cVar4[iVar58], uParam0, 5, iVar57 );
    return;
}

void sub_106674(unknown uParam0)
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
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Not a friend" );
    sub_4629( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Should never reach here" );
    return;
}

void sub_107076(unknown uParam0, unknown uParam1)
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
    sub_102280( uParam0 );
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
        sub_4629( "FA_Friend_Speech_Drunken_Conversations: Tell Keith: something fundamentally wrong with algorithm" );
        return;
    }
    PRINTSTRING( "AFTER\n" );
    sub_102280( uParam0 );
    iVar12 = 0;
    switch (uParam0)
    {
        case 0:
        sub_108287( uParam1, iVar12 );
        return;
        case 3:
        sub_108697( uParam1, iVar12 );
        return;
        case 7:
        sub_109076( uParam1, iVar12 );
        return;
        case 8:
        sub_109506( uParam1, iVar12 );
        return;
        case 13:
        sub_109899( uParam1, iVar12 );
        return;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Drunken_Conversations: must have forgotten to update friend ID when added speech" );
    return;
}

void sub_108287(unknown uParam0, boolean bParam1)
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
        sub_4629( "FA_Roman_Speech_Drunken_Conversations: inconsistent number of Roman drunken conversations - see Roman Flow" );
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
            sub_104172( ref cVar4[iVar25], iVar27, iVar28, uParam0, 5, iVar26 );
        }
        return;
    }
    sub_41623( ref cVar4[iVar25], uParam0, 5, iVar26 );
    return;
}

void sub_108697(unknown uParam0, boolean bParam1)
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
        sub_4629( "FA_Jacob_Speech_Drunken_Conversations: inconsistent number of Jacob drunken conversations - see Jacob Flow" );
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
            sub_104172( ref cVar4[iVar21], iVar23, iVar24, uParam0, 5, iVar22 );
        }
        return;
    }
    sub_41623( ref cVar4[iVar21], uParam0, 5, iVar22 );
    return;
}

void sub_109076(unknown uParam0, boolean bParam1)
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
        sub_4629( "FA_Dwayne_Speech_Drunken_Conversations: inconsistent number of Dwayne drunken conversations - see Dwayne Flow" );
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
            sub_104172( ref cVar4[iVar29], iVar31, iVar32, uParam0, 5, iVar30 );
        }
        return;
    }
    sub_41623( ref cVar4[iVar29], uParam0, 5, iVar30 );
    return;
}

void sub_109506(unknown uParam0, boolean bParam1)
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
        sub_4629( "FA_Brucie_Speech_Drunken_Conversations: inconsistent number of Brucie drunken conversations - see Brucie Flow" );
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
            sub_104172( ref cVar4[iVar21], iVar23, iVar24, uParam0, 5, iVar22 );
        }
        return;
    }
    sub_41623( ref cVar4[iVar21], uParam0, 5, iVar22 );
    return;
}

void sub_109899(unknown uParam0, boolean bParam1)
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
        sub_4629( "FA_Packie_Speech_Drunken_Conversations: inconsistent number of Packie drunken conversations - see Packie Flow" );
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
            sub_104172( ref cVar4[iVar29], iVar31, iVar32, uParam0, 5, iVar30 );
        }
        return;
    }
    sub_41623( ref cVar4[iVar29], uParam0, 5, iVar30 );
    return;
}

int sub_110500(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if ((IS_CHAR_DEAD( uParam0 )) || (IS_CHAR_DEAD( sub_1591() )))
    {
        return l_U344._fU24;
    }
    if (l_U344._fU24)
    {
        if (NOT sub_101146())
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
            if (sub_110646())
            {
                l_U344._fU28 = 0;
            }
            if ((NOT (l_U344._fU28 == 0)) AND (iVar3 > l_U344._fU28))
            {
                l_U344._fU28 = 0;
                if (l_U344._fU8)
                {
                    sub_106674( l_U158 );
                    sub_3356( 0, sub_1591(), "NIKO", 0 );
                    sub_3356( l_U157, uParam0, ref l_U153, 0 );
                    sub_110784( l_U158, ref l_U147 );
                }
                else
                {
                    sub_101517( l_U158 );
                    sub_3356( 0, sub_1591(), "NIKO", 0 );
                    sub_3356( l_U157, uParam0, ref l_U153, 0 );
                    sub_110983( l_U158, ref l_U147 );
                }
                l_U344._fU24 = 0;
                return 0;
            }
            return 1;
        }
        l_U344._fU28 = 0;
        return 1;
    }
    if (sub_101146())
    {
        if (sub_59577( l_U147 ))
        {
            iVar4 = 0;
            sub_54819( ref l_U147, iVar4 );
        }
        l_U344._fU24 = 1;
        l_U344._fU28 = 0;
        return 1;
    }
    return 0;
}

void sub_110646()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_110784(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 0:
        sub_108287( uParam1, iVar4 );
        break;
        case 3:
        sub_108697( uParam1, iVar4 );
        break;
        case 7:
        sub_109076( uParam1, iVar4 );
        break;
        case 8:
        sub_109506( uParam1, iVar4 );
        break;
        case 13:
        sub_109899( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_110983(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 0:
        sub_103583( uParam1, iVar4 );
        break;
        case 3:
        sub_104319( uParam1, iVar4 );
        break;
        case 7:
        sub_104885( uParam1, iVar4 );
        break;
        case 8:
        sub_105397( uParam1, iVar4 );
        break;
        case 13:
        sub_105956( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_111521()
{
    return;
}
