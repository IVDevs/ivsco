void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U6 = 0;
    l_U175 = 24;
    l_U176 = 0;
    l_U177 = 0;
    l_U178 = 24;
    l_U179 = 8;
    l_U180 = 24;
    l_U181 = 24;
    l_U182 = 0;
    l_U183 = 0;
    l_U184 = 0;
    l_U185 = 0;
    l_U186 = -1;
    l_U196 = 0;
    l_U197 = 0;
    l_U198 = 0;
    l_U199 = 24;
    l_U200 = 0;
    l_U201 = 0;
    l_U202 = 0;
    l_U203 = 0;
    l_U204 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U210 = 0;
    l_U211 = 0;
    l_U237 = -1;
    l_U238 = 0;
    l_U239 = 0;
    l_U243 = 0.00000000;
    l_U245 = 0;
    l_U246 = 0;
    l_U247 = 0;
    l_U248 = 0;
    l_U249 = 0;
    l_U250 = 1;
    l_U251 = 0;
    l_U252 = 0;
    l_U253 = 0;
    l_U255 = 0;
    l_U256 = 0;
    l_U257 = 0;
    l_U258 = 0;
    l_U259 = 1;
    l_U260 = 0;
    l_U287 = 0;
    l_U291 = 0;
    l_U292 = -1;
    l_U293 = 1;
    l_U294 = "NONE";
    l_U321 = 0;
    l_U322 = 0;
    l_U323 = {0.00000000, 0.00000000, 0.00000000};
    l_U326 = 0.00000000;
    l_U327 = nil;
    l_U328 = 0;
    l_U329 = nil;
    l_U330 = 34;
    l_U331 = 0;
    l_U332 = 0;
    l_U333 = 0;
    l_U334 = 0;
    l_U335 = 0;
    l_U336 = 0;
    l_U337 = 0;
    l_U338 = 0;
    l_U339 = 1;
    l_U340 = 3;
    l_U347 = 0;
    l_U348 = 0;
    l_U360 = 1;
    l_U361 = g_U24;
    l_U362 = 0;
    l_U363 = 0;
    l_U364 = 0;
    l_U365 = 0;
    l_U366 = 0;
    l_U367 = 12;
    l_U368 = 0;
    l_U369 = 0;
    l_U370 = 0;
    l_U375 = 0;
    l_U377 = -1;
    l_U378 = 4;
    l_U400 = 0;
    l_U407 = 0;
    l_U412 = 0;
    l_U413 = "";
    l_U426 = 0;
    l_U430 = 0;
    l_U431 = 1;
    l_U432 = 0;
    l_U433 = 0;
    l_U434 = 0;
    l_U435 = 0;
    l_U436 = "LUIS";
    l_U437 = 0;
    l_U438 = 0;
    l_U443 = 0;
    l_U444 = -1;
    l_U445 = 0;
    l_U446 = 0;
    l_U451 = 1;
    l_U537 = 0;
    l_U538 = 0;
    l_U539 = 0;
    l_U685 = 0;
    l_U686 = 0;
    l_U687 = 0;
    l_U688 = 0;
    l_U689 = 0;
    l_U690 = 0;
    l_U691 = 0;
    l_U745 = 0;
    l_U746 = 0;
    l_U747 = 72;
    l_U748 = 0;
    g_U15811[32] = 1;
    if (g_U20825[3]._fU16)
    {
        l_U360 = 1;
    }
    else if (g_U20825[7]._fU16)
    {
        l_U360 = 0;
    }
    else
    {
        SCRIPT_ASSERT( "DOMINICAN FRIEND: Neither Armando not Henrique were the caller" );
    }
    sub_927();
    sub_1263();
    sub_3047();
    while (NOT l_U368)
    {
        if (NOT sub_3417())
        {
            sub_4600( "dominicanFriends: Perform_Mission_Loop() returned FALSE unexpectedly" );
        }
        WAIT( 0 );
    }
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "******************** DOMINICAN FRIENDS DEATHARREST\n" );
        PRINTNL();
        sub_12047();
    }
    WAIT( 0 );
    while (sub_3417())
    {
        WAIT( 0 );
    }
    PRINTSTRING( "quitting DOMINICANS FRIENDS without PASS or FAIL\n" );
    sub_12047();
    sub_22073( "DOMINICAN FRIENDS: should never reach ENDSCRIPT" );
    return;
}

void sub_927()
{
    sub_936();
    sub_1203();
    l_U362 = 1;
    l_U363 = 0;
    g_U28807._fU128 = 0;
    l_U338 = 0;
    return;
}

void sub_936()
{
    l_U362 = 0;
    l_U363 = 0;
    l_U365 = 0;
    l_U366 = 0;
    l_U367 = 12;
    l_U368 = 0;
    l_U437 = 0;
    sub_987();
    return;
}

void sub_987()
{
    l_U384._fU0 = 1;
    l_U384._fU4 = 0;
    l_U384._fU8 = 0;
    l_U384._fU12 = 0;
    l_U384._fU16 = 1;
    l_U384._fU20 = 0;
    l_U384._fU24 = 0;
    l_U384._fU28 = 0;
    l_U384._fU32 = 0;
    l_U384._fU36 = 0;
    l_U384._fU40 = 0;
    l_U384._fU44 = 0;
    l_U384._fU48 = 0;
    l_U384._fU52 = 64537;
    l_U384._fU56 = 64537;
    l_U384._fU60 = 64537;
    sub_1146();
    l_U400 = 0;
    return;
}

void sub_1146()
{
    g_U43135 = nil;
    g_U43136 = nil;
    return;
}

void sub_1203()
{
    l_U376 = nil;
    return;
}

void sub_1263()
{
    int iVar2;
    vector vVar3;
    float fVar6;
    unknown uVar7;

    iVar2 = 3;
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    fVar6 = 0.00000000;
    uVar7 = sub_1302( 0, 6 );
    g_U20825[iVar2]._fU180 = uVar7;
    vVar3 = {g_U10856[uVar7]._fU4};
    fVar6 = g_U10856[uVar7]._fU16;
    sub_1968( vVar3.x, vVar3.y, vVar3.z, fVar6, 1 );
    if (g_U10856[uVar7]._fU20)
    {
        sub_2993( g_U10856[uVar7]._fU24, g_U10856[uVar7]._fU28, g_U10856[uVar7]._fU40 );
    }
    return;
}

void sub_1302(int Result, int iParam1)
{
    int iVar4;
    int iVar5;
    int I;
    int iVar7;
    int[7] iVar8;
    float fVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    float fVar23;
    int iVar24;

    if (Result == iParam1)
    {
        return Result;
    }
    iVar4 = Result;
    iVar5 = iParam1;
    I = 0;
    iVar7 = 0;
    array(ref iVar8, 7);
    for ( I = iVar4; I <= iVar5; I++ )
    {
        iVar8[I] = 0;
        if (g_U10856[I]._fU0)
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
    if (NOT (IS_CHAR_DEAD( sub_1473() )))
    {
        fVar16 = 100.00000000 + 20.00000000;
        GET_CHAR_COORDINATES( sub_1473(), ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
        for ( I = iVar4; I <= iVar5; I++ )
        {
            if (iVar8[I])
            {
                uVar20 = {g_U10856[I]._fU4};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar17._fU0, uVar17._fU4, uVar17._fU8, uVar20._fU0, uVar20._fU4, uVar20._fU8, ref fVar23 );
                if (fVar23 < fVar16)
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
    iVar24 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar7, ref iVar24 );
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (iVar8[I])
        {
            if (iVar24 == 0)
            {
                return I;
            }
            iVar24--;
        }
    }
    SCRIPT_ASSERT( "Choose_Friend_Pickup_Point: code should never reach this point" );
    return Result;
}

void sub_1473()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1968(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;
    unknown uVar8;

    # -sub_C1FFC0-0xc214c8( 0, ref l_U261 );
    iVar7 = 3;
    uVar8 = sub_1994( 0, 3 );
    g_U20825[iVar7]._fU184 = uVar8;
    l_U353 = {g_U10827[uVar8]._fU4};
    l_U356 = {g_U10827[uVar8]._fU16};
    sub_2391( uParam0, uParam1, uParam2, uParam3 );
    l_U349 = nil;
    l_U350 = nil;
    l_U351 = nil;
    l_U352 = nil;
    l_U359 = nil;
    if (l_U360)
    {
        sub_2475( 105 );
    }
    else
    {
        sub_2475( 98 );
    }
    sub_2519( 1 );
    sub_2722( l_U294, l_U294, l_U294, l_U294 );
    return;
}

void sub_1994(int Result, int iParam1)
{
    int iVar4;
    int iVar5;
    int I;
    int iVar7;
    int[4] iVar8;
    int iVar13;

    if (Result == iParam1)
    {
        return Result;
    }
    iVar4 = Result;
    iVar5 = iParam1;
    I = 0;
    iVar7 = 0;
    array(ref iVar8, 4);
    for ( I = iVar4; I <= iVar5; I++ )
    {
        iVar8[I] = 0;
        if (g_U10827[I]._fU0)
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
    iVar13 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar7, ref iVar13 );
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (iVar8[I])
        {
            if (iVar13 == 0)
            {
                return I;
            }
            iVar13--;
        }
    }
    SCRIPT_ASSERT( "Choose_Friend_Dropoff_Point: code should never reach this point" );
    return Result;
}

void sub_2391(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U240 = {uParam0, uParam1, uParam2};
    l_U243 = uParam3;
    return;
}

void sub_2475(unknown uParam0)
{
    l_U255 = 1;
    l_U254 = uParam0;
    return;
}

void sub_2519(boolean bParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( l_U244 )))
    {
        ADD_BLIP_FOR_CONTACT( l_U240._fU0, l_U240._fU4, l_U240._fU8, ref l_U244 );
        CHANGE_BLIP_DISPLAY( l_U244, 2 );
        CHANGE_BLIP_PRIORITY( l_U244, 1 );
        if (l_U255)
        {
            CHANGE_BLIP_SPRITE( l_U244, l_U254 );
            if (bParam0)
            {
                iVar3 = 0;
                GET_GAME_TIMER( ref iVar3 );
                CHANGE_BLIP_PRIORITY( l_U244, l_U4 );
                FLASH_BLIP( l_U244, 1 );
                l_U256 = iVar3 + 10000;
                l_U257 = 1;
            }
        }
    }
    return;
}

void sub_2722(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    StrCopy( ref l_U295._fU0, uParam0, 32 );
    StrCopy( ref l_U295._fU32, uParam1, 16 );
    StrCopy( ref l_U295._fU48, uParam2, 16 );
    StrCopy( ref l_U295._fU64, uParam3, 16 );
    l_U295._fU80 = 0;
    l_U295._fU84 = 0;
    l_U295._fU88 = 0;
    l_U295._fU92 = 0;
    l_U295._fU100 = 1;
    l_U295._fU96 = 1;
    if (COMPARE_STRING( uParam0, l_U294 ))
    {
        l_U295._fU96 = 0;
    }
    sub_2866();
    return;
}

void sub_2866()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref iVar3 );
    l_U295._fU84 = iVar2 + iVar3;
    return;
}

void sub_2993(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U321 = 1;
    l_U322 = uParam0;
    l_U323 = {uParam1};
    l_U326 = uParam4;
    return;
}

void sub_3047()
{
    sub_3056();
    return;
}

void sub_3056()
{
    sub_3065();
    sub_3132( 0, "FAdfA_1" );
    sub_3132( 1, "FAdfB_1" );
    sub_3132( 2, "FAdfH" );
    sub_3217( 0, sub_1473(), "LUIS", 0 );
    StrCopy( ref l_U281, "ARMANDO", 16 );
    l_U285 = 1;
    l_U286 = 3;
    return;
}

void sub_3065()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        StrCopy( ref l_U262[I], "", 16 );
    }
    return;
}

void sub_3132(int iParam0, unknown uParam1)
{
    if (iParam0 >= 3)
    {
        return;
    }
    StrCopy( ref l_U262[iParam0], uParam1, 16 );
    return;
}

void sub_3217(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U7._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U7._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3297( "\n PED NUMBER ", uParam0 );
    sub_3337( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3297(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3337(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3417()
{
    boolean bVar2;

    if ((l_U368) AND (IS_KEYBOARD_KEY_PRESSED( 31 )))
    {
        l_U378 = 1;
        sub_3451();
        return 0;
    }
    if ((l_U368) AND (IS_KEYBOARD_KEY_PRESSED( 33 )))
    {
        l_U367 = 11;
        sub_16928();
        return 0;
    }
    l_U365 = 0;
    l_U366 = 0;
    l_U367 = 12;
    l_U197 = 0;
    switch (l_U362)
    {
        case 0:
        sub_22073( "Mission Loop: Stage should never be 'Initialise'" );
        break;
        case 1:
        sub_24341();
        break;
        case 2:
        sub_38136();
        break;
        case 3:
        sub_38263();
        break;
        case 4:
        sub_38302();
        break;
        case 5:
        sub_38361();
        break;
        case 6:
        l_U365 = 1;
        break;
        default:
        sub_22073( "Mission_Loop: Unknown Stage ID" );
        return 0;
    }
    sub_47825();
    if (l_U365)
    {
        sub_3451();
        return 0;
    }
    if (l_U366)
    {
        sub_16928();
        return 0;
    }
    if (NOT l_U338)
    {
        bVar2 = false;
        if (NOT IS_MINIGAME_IN_PROGRESS())
        {
            if (l_U539)
            {
                l_U260 = 0;
                g_U28807._fU128 = 0;
                l_U331 = 0;
                l_U332 = 0;
                CLEAR_THIS_PRINT( "FA_LEFT_BOTH" );
                CLEAR_THIS_PRINT( "FA_LEFT_FIRST" );
                CLEAR_THIS_PRINT( "FA_LEFT_SECOND" );
            }
            l_U539 = 0;
            bVar2 = sub_53469( l_U349, l_U350 );
        }
        else
        {
            l_U539 = 1;
            CLEAR_THIS_PRINT( "FA_LEFT_BOTH" );
            CLEAR_THIS_PRINT( "FA_LEFT_FIRST" );
            CLEAR_THIS_PRINT( "FA_LEFT_SECOND" );
        }
        if (bVar2)
        {
            l_U366 = 1;
            l_U367 = 7;
            sub_16928();
            CLEAR_THIS_PRINT( "FA_LEFT_BOTH" );
            CLEAR_THIS_PRINT( "FA_LEFT_FIRST" );
            CLEAR_THIS_PRINT( "FA_LEFT_SECOND" );
            return 0;
        }
        else if (l_U340 == 3)
        {
            CLEAR_THIS_PRINT( "FA_LEFT_BOTH" );
            CLEAR_THIS_PRINT( "FA_LEFT_FIRST" );
            CLEAR_THIS_PRINT( "FA_LEFT_SECOND" );
        }
    }
    sub_54985();
    if (l_U338)
    {
        sub_69934();
        sub_3451();
    }
    sub_70109( l_U349 );
    sub_78196();
    sub_35851();
    sub_78962();
    sub_82164();
    return 1;
}

void sub_3451()
{
    PRINTSTRING( "******************** DOMINICAN FRIENDS PASSED\n" );
    PRINTNL();
    CLEAR_WANTED_LEVEL( sub_3523() );
    if (l_U360)
    {
        sub_3576( l_U378 );
    }
    else
    {
        sub_11915( l_U378 );
    }
    g_U25 = l_U361;
    sub_12047();
    return;
}

void sub_3523()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3576(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    iVar3 = 3;
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 1;
    sub_3597();
    sub_3652( uParam0 );
    sub_3681( uParam0 );
    sub_3714( iVar4, iVar5, iVar6 );
    uVar7 = g_U20825[iVar3]._fU144;
    sub_11441( iVar3, uVar7 );
    return;
}

void sub_3597()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U531[I] = 4;
    }
    return;
}

void sub_3652(unknown uParam0)
{
    l_U531[1] = uParam0;
    return;
}

void sub_3681(unknown uParam0)
{
    l_U531[0] = uParam0;
    return;
}

void sub_3714(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 3;
    sub_3747( iVar5, uParam0, uParam1, uParam2, "Dominicans" );
    return;
}

void sub_3747(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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

    if (bParam1)
    {
        if (g_U43133)
        {
            sub_3775();
            return;
        }
    }
    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14925[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_3949( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_3949( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14925[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_3949( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_3949( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU160._fU76;
    }
    else if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_3949( ref cVar9 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_3949( ref cVar9 );
        return;
    }
    iVar7 = g_U14925[uParam0]._fU0._fU4;
    iVar8 = sub_4526( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12382[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14925[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12382[uParam0]._fU148[I]._fU8++;
            if ((NOT g_U12382[uParam0]._fU148[I]._fU12) AND (g_U12382[uParam0]._fU148[I]._fU8 >= g_U12382[uParam0]._fU148[I]._fU4))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12382[uParam0]._fU148[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_4995( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14925[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_3523() );
    sub_9123();
    bVar28 = true;
    uVar29 = sub_4526( uParam0, iVar7 );
    uVar30 = sub_9765( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14925[uParam0]._fU0._fU56;
        if ((iVar31 == 5) || (iVar31 == 6))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U22960[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10961 );
                sub_10135( 9, ref g_U14925[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12379))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_3775();
                    g_U10953._fU8 = 1;
                    g_U10953._fU20 = sub_10586( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_10665( uParam0 );
                sub_10838( 0 );
                sub_10980( uVar30, 0 );
                g_U11076 = 0;
            }
            g_U12382[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_11091();
        }
    }
    if (bParam2)
    {
        sub_3775();
        sub_11190();
        sub_10838( 0 );
        g_U11062 = 1;
        g_U11076 = 0;
    }
    if (bParam3)
    {
        sub_3775();
        sub_11242();
        sub_10838( 0 );
        sub_10980( uVar30, 0 );
    }
    sub_11293();
    return;
}

void sub_3775()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_3949(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_4526(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_4600( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U28562[iParam0]._fU0;
    iVar5 = g_U28562[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U22960[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_4600(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_4995(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_5091( uParam1 );
        break;
        case 1:
        bVar8 = sub_5972( uParam1 );
        break;
        case 2:
        bVar8 = sub_6161( uParam1 );
        break;
        case 3:
        bVar8 = sub_6379( uParam1 );
        break;
        case 4:
        bVar8 = sub_6977( uParam1 );
        break;
        case 5:
        bVar8 = sub_7110( uParam1 );
        break;
        case 6:
        bVar8 = sub_7307( uParam1 );
        break;
        case 7:
        bVar8 = sub_7444( uParam1 );
        break;
        case 8:
        bVar8 = sub_7593( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_6590( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_4526( uParam0, uParam1 );
    if (bParam3)
    {
        sub_7811( uVar9, uParam0 );
    }
    return 1;
}

int sub_5091(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5258( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5258( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_5258( iVar3, 1500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_5258( iVar3, 500, 0, 0, 0, 0 );
        break;
        case 5:
        sub_5258( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 6:
        sub_5258( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 7:
        sub_5258( iVar3, 3000, 5, 2, 0, 0 );
        break;
        case 8:
        sub_5258( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 9:
        sub_5258( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 10:
        sub_5258( iVar3, 4500, 5, 2, 0, 0 );
        break;
        case 11:
        sub_5258( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 12:
        sub_5258( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 0:
        case 13:
        case 14:
        case 15:
        case 16: break;
        default:
        sub_5880( "Gay Tony", 1 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5880( "Gay Tony", 0 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_5258(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_5269( uParam1 );
    sub_5443( uParam0, 0, uParam2 );
    sub_5443( uParam0, 1, uParam3 );
    sub_5443( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_3597();
    return;
}

void sub_5269(unknown uParam0)
{
    ADD_SCORE( sub_3523(), uParam0 );
    sub_5294( uParam0 );
    return;
}

void sub_5294(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_4600( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_5443(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_5880(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_5972(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5258( iVar3, 500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5258( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5258( iVar3, 1500, 5, 2, 0, 0 );
        break;
        default:
        sub_5880( "Mori", 1 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5880( "Mori", 0 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6161(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5258( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5258( iVar3, 15000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5258( iVar3, 20000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_5258( iVar3, 25000, 5, 2, 0, 0 );
        break;
        default:
        sub_5880( "Yusuf", 1 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5880( "Yusuf", 0 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6379(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5258( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5258( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5258( iVar3, 0, sub_6468(), sub_6734(), 0, 0 );
        break;
        default:
        sub_5880( "Dominicans", 1 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5880( "Dominicans", 0 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6468()
{
    switch (l_U531[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6590( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_6590(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_6734()
{
    switch (l_U531[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6590( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_6977(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5258( iVar3, 1000, 5, 2, 0, 0 );
        break;
        default:
        sub_5880( "Mum", 1 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5880( "Mum", 0 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7110(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5258( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5258( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5258( iVar3, 6000, 5, 2, 0, 0 );
        break;
        default:
        sub_5880( "Bulgarin", 1 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5880( "Bulgarin", 0 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7307(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5258( iVar3, 5000, 5, 2, 0, 0 );
        break;
        default:
        sub_5880( "Rocco", 1 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5880( "Rocco", 0 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7444(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5258( iVar3, 0, sub_6468(), sub_6734(), 0, 0 );
        break;
        default:
        sub_5880( "Henrique", 1 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5880( "Henrique", 0 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7593(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    if (bVar4)
    {
        sub_5880( "Reserve 1", 0 );
        sub_5258( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_7811(int iParam0, int iParam1)
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
    if (g_U10972)
    {
        return;
    }
    if (sub_7872( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_8598( iParam1 );
    }
    return;
}

int sub_7872(int iParam0, int iParam1)
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
    iVar4 = g_U14925[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U22960[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U22960[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_8012( 0, iVar6 );
            g_U14902[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U22960[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_8012(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_8182( 0 );
    return;
}

void sub_8182(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_8427();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_8427()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_8598(int iParam0)
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
    if (g_U14902[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14902[iParam0]._fU4 == g_U14902[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14902[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14902[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_8837( 188 );
        SET_FLOAT_STAT( 188, fVar3 );
        break;
        case 1:
        sub_8837( 192 );
        SET_FLOAT_STAT( 192, fVar3 );
        break;
        case 2:
        sub_8837( 191 );
        SET_FLOAT_STAT( 191, fVar3 );
        break;
        case 3:
        sub_8837( 197 );
        SET_FLOAT_STAT( 197, fVar3 );
        break;
        case 4: break;
        case 5:
        sub_8837( 200 );
        SET_FLOAT_STAT( 200, fVar3 );
        break;
        case 6:
        sub_8837( 201 );
        SET_FLOAT_STAT( 201, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_8837(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_9123()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_9161( 5, g_U575[I] )) == 1) AND (g_U575[I]._fU20))
        {
            if ((sub_9161( 1, g_U575[I] )) != 0)
            {
                sub_9447( I );
            }
        }
    }
    if (NOT sub_9613())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    if (g_U95._fU0 == 1016)
    {
        g_U95._fU92 = 1;
    }
    return;
}

int sub_9161(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_9447(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_9532( g_U575 - 1 );
    return;
}

void sub_9532(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_9613()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_9161( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_9765(unknown uParam0)
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
    sub_4600( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_10135(unknown uParam0, unknown uParam1)
{
    sub_10154( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_10154(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_10586(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 12)
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

void sub_10665(unknown uParam0)
{
    sub_10674();
    g_U12382[uParam0]._fU120 = 0;
    return;
}

void sub_10674()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12382[J]._fU148[I]._fU36)
            {
                g_U12382[J]._fU28 = 1;
            }
            g_U12382[J]._fU148[I]._fU36 = 0;
        }
    }
    return;
}

void sub_10838(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_10889( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_10889(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_10980(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 37))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U22883[iParam0] = iVar4;
    if (bParam1)
    {
        g_U22883[iParam0] += 30000;
    }
    return;
}

void sub_11091()
{
    sub_11100();
    return;
}

void sub_11100()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_11190()
{
    sub_11100();
    return;
}

void sub_11242()
{
    sub_11100();
    StrCopy( ref g_U10966, "FPASS", 16 );
    return;
}

void sub_11293()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_11315();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_11315()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_11441(unknown uParam0, unknown uParam1)
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
        case 3:
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
        case 16:
        case 17:
        case 20:
        case 21:
        case 22:
        case 23: break;
        case 19: return;
    }
    return;
    uVar5 = uParam1;
    if (NOT (IS_BIT_SET( g_U43062[iVar4]._fU0, uVar5 )))
    {
        return;
    }
    if (IS_BIT_SET( g_U43062[iVar4]._fU4, uVar5 ))
    {
        return;
    }
    SET_BIT( ref g_U43062[iVar4]._fU4, uVar5 );
    I = 0;
    for ( I = 0; I < 24; I++ )
    {
        if (IS_BIT_SET( g_U43062[iVar4]._fU0, I ))
        {
            if (NOT (IS_BIT_SET( g_U43062[iVar4]._fU4, I )))
            {
                return;
            }
        }
    }
    iVar7 = 0;
    if (NOT g_U43058[iVar4]._fU0)
    {
        iVar7 = g_U43058[iVar4]._fU8;
        if (iVar7 > 0)
        {
            sub_8012( 3, iVar7 );
            g_U43058[iVar4]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_11915(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    iVar3 = 7;
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 1;
    sub_3597();
    sub_3652( uParam0 );
    sub_3681( uParam0 );
    sub_11961( iVar4, iVar5, iVar6 );
    uVar7 = g_U20825[iVar3]._fU144;
    sub_11441( iVar3, uVar7 );
    return;
}

void sub_11961(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 7;
    sub_3747( iVar5, uParam0, uParam1, uParam2, "Henrique" );
    return;
}

void sub_12047()
{
    sub_12076( l_U686, l_U687, l_U333, l_U334 );
    sub_14100( l_U349 );
    sub_14722( 0 );
    sub_15630();
    if (l_U360)
    {
        sub_16187();
        sub_16493( 3, 16, l_U368 );
    }
    else
    {
        sub_16685();
        sub_16493( 7, 16, l_U368 );
    }
    sub_16719();
    g_U28807._fU128 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_12076(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;
    int[24] iVar7;
    int iVar32;
    int iVar33;
    unknown uVar34;
    int iVar35;

    if (g_U819)
    {
        return;
    }
    if ((((uParam0) || (uParam1)) || (uParam2)) || (uParam3))
    {
        return;
    }
    if (l_U196 == 0)
    {
        return;
    }
    I = 0;
    array(ref iVar7, 24);
    for ( I = 0; I < 24; I++ )
    {
        iVar7[I] = 0;
    }
    iVar32 = 0;
    for ( I = 0; I < l_U196; I++ )
    {
        if ((l_U187[I]._fU0 < 24) AND (l_U187[I]._fU0 >= 0))
        {
            iVar32 = iVar7[l_U187[I]._fU0];
            sub_12250( I, iVar32 );
            iVar7[l_U187[I]._fU0] = 1;
        }
    }
    iVar33 = l_U196 - 1;
    if (l_U196 > 1)
    {
        sub_13743( 3, 1, iVar33 );
        sub_13743( 7, 1, iVar33 );
    }
    uVar34 = sub_9765( l_U237 );
    iVar35 = 0;
    for ( I = 0; I < l_U196; I++ )
    {
        sub_11441( uVar34, l_U187[I]._fU0 );
    }
    if (l_U211)
    {
        g_U20825[uVar34]._fU172 = 1;
    }
    return;
}

void sub_12250(int iParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;

    if (iParam0 >= l_U196)
    {
        SCRIPT_ASSERT( "Store_Like_For_Alternative_Activity: array pos greater than max activities performed" );
        return;
    }
    uVar4 = l_U187[iParam0]._fU0;
    uVar5 = l_U187[iParam0]._fU4;
    iVar6 = 4;
    switch (uVar4)
    {
        case 6:
        iVar6 = sub_12505( uVar5 );
        break;
        case 7:
        iVar6 = sub_12585( uVar5 );
        break;
        case 10:
        iVar6 = sub_12665( uVar5 );
        break;
        case 11:
        iVar6 = sub_12745( uVar5 );
        break;
        case 12:
        iVar6 = sub_12825( uVar5 );
        break;
        case 13:
        iVar6 = sub_12897( uVar5 );
        break;
        case 15:
        iVar6 = sub_12969( uVar5 );
        break;
        case 18:
        iVar6 = sub_13049( uVar5 );
        break;
        case 20:
        iVar6 = sub_13129( uVar5 );
        break;
        case 22:
        iVar6 = sub_13209( uVar5 );
        break;
        case 23:
        iVar6 = sub_13285( uVar5 );
        break;
        case 9:
        iVar6 = sub_13369( uVar5 );
        break;
        default:
        SCRIPT_ASSERT( "Store_Like_For_Alternative_Activity: Unknown phone activity ID" );
        break;
    }
    uVar7 = sub_13528( iVar6, uParam1 );
    PRINTSTRING( "KGMSTAT ************* --> ADD ACT: " );
    PRINTINT( iParam0 );
    PRINTNL();
    sub_13743( 3, 1, uVar7 );
    sub_13743( 7, 1, uVar7 );
    return;
}

int sub_12505(unknown uParam0)
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

int sub_12585(unknown uParam0)
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

int sub_12665(unknown uParam0)
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

int sub_12745(unknown uParam0)
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

int sub_12825(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 1: return 2;
    }
    return 4;
}

int sub_12897(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 1: return 2;
    }
    return 4;
}

int sub_12969(unknown uParam0)
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

int sub_13049(unknown uParam0)
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

int sub_13129(unknown uParam0)
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

int sub_13209(unknown uParam0)
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

int sub_13285(unknown uParam0)
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

int sub_13369(unknown uParam0)
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

int sub_13528(unknown uParam0, boolean bParam1)
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

void sub_13743(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_14100(unknown uParam0)
{
    int iVar3;

    if (l_U207)
    {
        SET_CAM_ACTIVE( l_U208, 0 );
        SET_CAM_PROPAGATE( l_U208, 0 );
        DESTROY_ALL_CAMS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        iVar3 = 0;
        END_CAM_COMMANDS( ref iVar3 );
        if (NOT (iVar3 == 0))
        {
            SCRIPT_ASSERT( "Camera Scopes should now be 0 when ending camera use" );
        }
        l_U207 = 0;
    }
    sub_14253( 30000 );
    g_U10575 = 1;
    g_U10718 = 1;
    sub_14347( l_U175 );
    sub_14676( l_U237 );
    if (l_U203)
    {
        g_U10573 = l_U202;
    }
    return;
}

void sub_14253(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (NOT g_U9197)
    {
        return;
    }
    GET_ROOT_CAM( ref uVar3 );
    SET_DRUNK_CAM( uVar3, 0.00000000, -iParam0 );
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U9198 = iVar4 + iParam0;
    return;
}

void sub_14347(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 72; I++ )
    {
        if (sub_14375( I ))
        {
            if (DOES_BLIP_EXIST( g_U12231[I]._fU4 ))
            {
                sub_14602( ref g_U12231[I]._fU4 );
            }
        }
    }
    return;
}

int sub_14375(int iParam0)
{
    boolean bVar3;
    boolean bVar4;
    unknown uVar5;

    bVar3 = false;
    bVar4 = false;
    switch (g_U11582[iParam0]._fU12)
    {
        case 12:
        bVar3 = true;
        break;
        case 8:
        bVar4 = true;
        break;
        default: return 0;
    }
    if (bVar3)
    {
        uVar5 = g_U11582[iParam0]._fU16;
        switch (uVar5)
        {
            case 21:
            case 16: return 0;
        }
        if ((iParam0 == 2) || (iParam0 == 29))
        {
            return 0;
        }
        return 1;
    }
    if (bVar4)
    {
        if (((iParam0 == 35) || (iParam0 == 36)) || (iParam0 == 37))
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

void sub_14602(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP_AND_CLEAR_INDEX( uParam0 );
    (uParam0^) = nil;
    return;
}

void sub_14676(unknown uParam0)
{
    return;
}

void sub_14722(boolean bParam0)
{
    sub_14731();
    sub_14811();
    sub_14851();
    sub_14880( 3 );
    REMOVE_DECISION_MAKER( l_U261 );
    if (NOT (COMPARE_STRING( ref l_U295._fU0, l_U294 )))
    {
        REMOVE_ANIMS( ref l_U295._fU0 );
    }
    l_U245 = 0;
    if ((NOT (l_U349 == nil)) AND (NOT (IS_CHAR_DEAD( l_U349 ))))
    {
        if (IS_GROUP_MEMBER( l_U349, sub_15440() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U349 );
        }
        if (bParam0)
        {
            if (IS_CHAR_INJURED( l_U349 ))
            {
                SET_PED_DIES_WHEN_INJURED( l_U349, 1 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U349 );
            }
            else
            {
                DELETE_CHAR( ref l_U349 );
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

void sub_14731()
{
    sub_14744( ref l_U351 );
    sub_14744( ref l_U352 );
    return;
}

void sub_14744(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP_AND_CLEAR_INDEX( uParam0 );
    (uParam0^) = nil;
    return;
}

void sub_14811()
{
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U244 );
    l_U256 = 0;
    l_U257 = 0;
    return;
}

void sub_14851()
{
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U359 );
    return;
}

void sub_14880(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_14903( uParam0 ) );
    return;
}

int sub_14903(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -274568867;
        case 1: return 1662225612;
        case 2: return -448171135;
        case 3: return 1370299619;
        case 4: return -773750838;
        case 5: return 243666427;
        case 6: return -913924918;
        case 7: return 1905515841;
        case 9:
        SCRIPT_ASSERT( "Attempt to Return the model for the Reserve Strand 1 Character" );
        return 0;
        case 30: return -1949352469;
        case 31: return -401698464;
        case 32: return -487173849;
        case 33: return -407067034;
        case 13: return 714517099;
        case 14: return 653404222;
        case 15: return 1798610950;
    }
    sub_4600( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_15440()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_15630()
{
    int iVar2;

    if (l_U379)
    {
        DELETE_WIDGET_GROUP( l_U380 );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U376 );
    if (l_U375)
    {
        SET_CAM_ACTIVE( l_U371[1], 0 );
        SET_CAM_PROPAGATE( l_U371[1], 0 );
        sub_15714();
    }
    if (IS_PLAYER_PLAYING( sub_3523() ))
    {
        SET_PLAYER_CONTROL( sub_3523(), 1 );
    }
    CLEAR_HELP();
    sub_15809();
    iVar2 = 0;
    sub_16029( iVar2 );
    return;
}

void sub_15714()
{
    int iVar2;

    DESTROY_ALL_CAMS();
    SET_USE_HIGHDOF( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    iVar2 = 0;
    END_CAM_COMMANDS( ref iVar2 );
    l_U375 = 0;
    return;
}

void sub_15809()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U28807._fU0[I] = 34;
        g_U28807._fU12[I] = nil;
    }
    g_U28807._fU24 = 16;
    g_U28807._fU28 = 16;
    g_U28807._fU32 = 16;
    g_U28807._fU36 = 8;
    g_U28807._fU40 = 8;
    g_U28807._fU44 = 34;
    g_U28807._fU48 = 0;
    g_U28807._fU52 = 0;
    g_U28807._fU56 = 0;
    g_U28807._fU124 = 0;
    g_U28807._fU128 = 0;
    for ( I = 0; I < 15; I++ )
    {
        g_U28807._fU60[I] = 0;
    }
    return;
}

void sub_16029(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 >= 4) AND (g_U8865 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_16187()
{
    sub_16196();
    return;
}

void sub_16196()
{
    g_U12379 = 0;
    if (g_U819)
    {
        sub_16221();
        return;
    }
    sub_16347();
    return;
}

void sub_16221()
{
    if (COMPARE_STRING( ref g_U10966, "FPASS" ))
    {
        StrCopy( ref g_U10966, "", 16 );
        return;
    }
    sub_16266();
    return;
}

void sub_16266()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_16347()
{
    if (COMPARE_STRING( ref g_U10966, "FPASS" ))
    {
        StrCopy( ref g_U10966, "", 16 );
        return;
    }
    sub_16392();
    return;
}

void sub_16392()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_16493(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;

    if (g_U819)
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
    g_U20825[3]._fU152 = iVar7 + iVar5;
    g_U20825[7]._fU152 = iVar7 + iVar5;
    g_U20825[3]._fU156 = iVar7 + iVar6;
    g_U20825[7]._fU156 = iVar7 + iVar6;
    g_U20825[3]._fU148 = 24;
    g_U20825[7]._fU148 = 24;
    return;
}

void sub_16685()
{
    sub_16196();
    return;
}

void sub_16719()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    I = 0;
    for ( I = 0; I < 72; I++ )
    {
        if (l_U540[I]._fU0)
        {
            sub_16763( I );
        }
    }
    return;
}

void sub_16763(unknown uParam0)
{
    if (DOES_BLIP_EXIST( l_U540[uParam0]._fU4 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U540[uParam0]._fU4 );
        l_U540[uParam0]._fU4 = nil;
        l_U540[uParam0]._fU0 = 0;
    }
    return;
}

void sub_16928()
{
    boolean bVar2;

    PRINTSTRING( ".................... Dominicans Friends FAILED" );
    if (l_U367 == 7)
    {
        sub_17005();
    }
    switch (l_U367)
    {
        case 0:
        case 1:
        case 2:
        if (l_U686)
        {
            PRINTSTRING( ".................... Armando Killed\n" );
        }
        if (l_U688)
        {
            PRINTSTRING( ".................... Armando Killed By Player\n" );
        }
        if (l_U687)
        {
            PRINTSTRING( ".................... Henrique Killed\n" );
        }
        if (l_U689)
        {
            PRINTSTRING( ".................... Henrique Killed By Player\n" );
        }
        break;
        case 7:
        if (l_U333)
        {
            if (l_U334)
            {
                sub_18808( l_U350, 7, 0 );
            }
            sub_18808( l_U349, 3, 1 );
        }
        else if (l_U334)
        {
            sub_18808( l_U350, 7, 1 );
        }
        break;
        case 11:
        PRINTSTRING( ".......................(forced failure)\n" );
        break;
        case 12:
        sub_22073( "Unknown reason for failure" );
        break;
        default:
        sub_22073( "Unrecognised Fail ID" );
        break;
    }
    PRINTNL();
    sub_14731();
    sub_22298( l_U349, l_U350 );
    bVar2 = l_U688;
    if (NOT bVar2)
    {
        bVar2 = l_U689;
    }
    switch (l_U367)
    {
        case 0:
        if (l_U686)
        {
            if (l_U687)
            {
                if (bVar2)
                {
                    PRINT_NOW( "FAUKILLAH", 7000, 1 );
                }
                else
                {
                    PRINT_NOW( "FAKILLAH", 7000, 1 );
                }
            }
            else if (l_U688)
            {
                PRINT_NOW( "FAUKILLA", 7000, 1 );
            }
            else
            {
                PRINT_NOW( "FAKILLA", 7000, 1 );
            }
        }
        else if (l_U689)
        {
            PRINT_NOW( "FAUKILLH", 7000, 1 );
        }
        else
        {
            PRINT_NOW( "FAKILLH", 7000, 1 );
        }
        break;
        case 7:
        if (l_U333)
        {
            if (l_U334)
            {
                PRINT_NOW( "BUDDYLEFT", 7000, 1 );
            }
            else
            {
                PRINT_NOW( "BUDDYLEFTA", 7000, 1 );
            }
        }
        else if (l_U334)
        {
            PRINT_NOW( "BUDDYLEFTH", 7000, 1 );
        }
        break;
        default:
        sub_23789( bVar2 );
        break;
    }
    sub_12047();
    return;
}

void sub_17005()
{
    if (IS_CHAR_DEAD( sub_1473() ))
    {
        return;
    }
    if ((IS_CHAR_IN_MODEL( sub_1473(), -960289747 )) || (IS_CHAR_IN_ANY_TRAIN( sub_1473() )))
    {
        return;
    }
    if (NOT (IS_CHAR_DEAD( l_U349 )))
    {
        if (sub_17095( l_U349 ))
        {
            sub_16029( 0 );
            sub_17319( 3, ref l_U275 );
            return;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U350 )))
    {
        if (sub_17095( l_U350 ))
        {
            sub_16029( 0 );
            sub_17319( 7, ref l_U275 );
            return;
        }
    }
    return;
}

int sub_17095(unknown uParam0)
{
    unknown uVar3;
    vector vVar4;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1473() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar3 );
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_1473(), uVar3 )))
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
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1473(), vVar4.x, vVar4.y, vVar4.z, 4.00000000, 4.00000000, 4.00000000, 0 )))
    {
        return 0;
    }
    return 1;
}

void sub_17319(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_LFTB", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_LFTB", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_17378(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_17432( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_17432(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_17454( iParam1 )))
    {
        return 0;
    }
    l_U7._fU384 = 0;
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_18142( ref g_U8868, ref l_U7 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_17454(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_17531( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_17531( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_17531( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_17531(unknown uParam0)
{
    return;
}

void sub_18142(int iParam0, int iParam1)
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

void sub_18364(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_17378( uParam0, ref l_U7._fU0, uParam1, uParam2, uParam3 );
}

void sub_18808(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (bParam2)
    {
        uVar5 = g_U20825[uParam1]._fU104;
        uVar6 = g_U20825[uParam1]._fU136;
        sub_18860( uVar5 );
        sub_18966( uVar5, uParam1, uVar6, 0 );
    }
    uVar7 = sub_21569( uParam1 );
    sub_21774( uVar7 );
    return;
}

void sub_18860(unknown uParam0)
{
    g_U42731._fU12[uParam0]._fU0 = 0;
    g_U42731._fU12[uParam0]._fU4 = 0;
    g_U42731._fU12[uParam0]._fU12 = 37;
    g_U42731._fU12[uParam0]._fU16 = 0;
    g_U42731._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_18966(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 5;
    sub_18991( uParam0, uParam1, uParam2, uParam3, iVar6, 64537 );
    return;
}

void sub_18991(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = 10;
    if (iParam0 >= iVar8)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_19103( uParam1, uParam2 );
        return;
    }
    if (g_U42731._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar9 = 0;
    GET_GAME_TIMER( ref iVar9 );
    g_U42731._fU12[iParam0]._fU0 = 1;
    g_U42731._fU12[iParam0]._fU4 = 0;
    g_U42731._fU12[iParam0]._fU8 = 0;
    g_U42731._fU12[iParam0]._fU12 = uParam1;
    g_U42731._fU12[iParam0]._fU16 = uParam2;
    g_U42731._fU12[iParam0]._fU20 = iVar9 + iParam3;
    g_U42731._fU12[iParam0]._fU28 = uParam4;
    g_U42731._fU12[iParam0]._fU32 = uParam5;
    sub_21385( iParam0, iParam3 );
    return;
}

void sub_19103(unknown uParam0, unknown uParam1)
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
    uVar11 = sub_19126( uParam0 );
    sub_19505( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_19849( ref uVar4, 1 );
    sub_19877( ref uVar4, 0 );
    sub_19905( ref uVar4, 2 );
    sub_19936( ref uVar4, 0 );
    return;
}

int sub_19126(unknown uParam0)
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
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 20;
        case 21: return 21;
        case 22: return 22;
        case 23: return 23;
        case 24: return 24;
        case 25: return 25;
        case 26: return 26;
        case 27: return 27;
    }
    sub_4600( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_19505(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_19527( uParam0, 0, iParam4 + 0 );
    sub_19527( uParam1, 1, iParam4 + 0 );
    sub_19527( uParam2, 2, iParam4 + 0 );
    sub_19527( uParam3, 3, iParam4 + 0 );
    sub_19527( 0, 4, iParam4 + 0 );
    sub_19527( 1, 5, iParam4 + 0 );
    sub_19527( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_19527(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_19849(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_19877(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_19905(int iParam0, unknown uParam1)
{
    sub_19527( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_19936(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;
    char[16] cVar6;
    int iVar10;

    iVar5 = 0;
    StrCopy( ref cVar6, "T1_NAME_", 16 );
    if (g_U95._fU540)
    {
        return 0;
    }
    if ((g_U575[g_U575 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_20006())
        {
            sub_9447( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar10 = sub_20133( iParam0->_fU0 );
    if (iVar10 != -1)
    {
        sub_9447( iVar10 );
    }
    if (bParam1)
    {
        if (NOT (g_U560 == 9))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but other cellphone script is already active\n" );
            return 0;
        }
        if (NOT (g_U95._fU0 == 1000))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but cellphone screen is not OFF\n" );
            return 0;
        }
        if (NOT (g_U95._fU404 == 1000))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but cellphone quickscreen is not OFF\n" );
            return 0;
        }
    }
    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (g_U575[I]._fU0[0] == -1)
        {
            g_U575[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U575;
            iVar5++;
            if (iVar5 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar5 );
            }
            else
            {
                ConcatString(ref cVar6, sub_9161( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar6, iVar5 );
            }
            g_U95._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U560 == 9)
            {
                g_U95._fU404 = 1017;
            }
            else if (g_U95._fU0 == 1016)
            {
                g_U95._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15811[2] = 1;
        }
        else if ((sub_9161( 4, g_U575[I] )) == 0)
        {
            iVar5++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    g_U95._fU408 = 0;
    if (bParam1)
    {
        g_U95._fU408 = 1;
    }
    return 1;
}

int sub_20006()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_9161( 1, g_U575[I] )) != 0) AND (g_U575[I]._fU20))
        {
            sub_9447( I );
            return 1;
        }
    }
    return 0;
}

int sub_20133(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U575 - 1); Result++ )
    {
        if (g_U575[Result]._fU0[0] != -1)
        {
            if (sub_20198( uParam0, g_U575[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U575;
        }
    }
    return -1;
}

int sub_20198(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_9161( 0, uParam0 );
        if (iVar14 == (sub_9161( 0, uParam6 )))
        {
            iVar15 = sub_9161( 3, uParam0 );
            if (iVar15 == (sub_9161( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_21385(unknown uParam0, int iParam1)
{
    g_U42731._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_21424( iParam1 ))
    {
        g_U42731._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_21424(int iParam0)
{
    int iVar3;

    iVar3 = sub_11315();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_21454();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_21454()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_21569(unknown uParam0)
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
        case 9: return 8;
    }
    sub_4600( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 11;
}

void sub_21774(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = -5;
        break;
        default:
        sub_4600( "Flow_Friend_Left_Behind_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_13743( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_13743( uParam0, 0, iVar4 );
    return;
}

void sub_22073(unknown uParam0)
{
    sub_22113( "ERROR: DOMINICAN FRIENDS: ", uParam0 );
    return;
}

void sub_22113(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "ERROR: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_22298(unknown uParam0, int iParam1)
{
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    int iVar8;
    boolean bVar9;
    boolean bVar10;
    boolean bVar11;
    boolean bVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    int iVar16;
    int iVar17;
    boolean bVar18;

    if (IS_CHAR_INJURED( sub_1473() ))
    {
        return;
    }
    bVar4 = false;
    if (NOT (iParam1 == nil))
    {
        bVar4 = true;
    }
    if (IS_CHAR_IN_ANY_TRAIN( sub_1473() ))
    {
        DELETE_CHAR( ref uParam0 );
        if (bVar4)
        {
            DELETE_CHAR( ref iParam1 );
        }
        return;
    }
    uVar5 = nil;
    uVar6 = nil;
    iVar7 = 0;
    iVar8 = 0;
    bVar9 = false;
    bVar10 = false;
    bVar11 = false;
    bVar12 = false;
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1473(), 0.00000000, 25.00000000, 0.00000000, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1473() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar5 );
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (IS_CHAR_IN_CAR( uParam0, uVar5 ))
            {
                bVar9 = true;
                bVar11 = true;
                TASK_SMART_FLEE_POINT( uParam0, uVar13._fU0, uVar13._fU4, uVar13._fU8, 300.00000000, -2 );
                bVar12 = true;
            }
        }
        if (bVar4)
        {
            if (NOT (IS_CHAR_INJURED( iParam1 )))
            {
                if (IS_CHAR_IN_CAR( iParam1, uVar5 ))
                {
                    bVar10 = true;
                    bVar11 = true;
                    TASK_SMART_FLEE_POINT( iParam1, uVar13._fU0, uVar13._fU4, uVar13._fU8, 300.00000000, -2 );
                    bVar12 = true;
                }
            }
        }
        if (bVar11)
        {
            SET_PLAYER_CONTROL( sub_3523(), 0 );
            GET_GAME_TIMER( ref iVar8 );
            iVar16 = iVar8 + 3000;
            while (bVar11)
            {
                WAIT( 0 );
                bVar11 = false;
                GET_GAME_TIMER( ref iVar8 );
                if (NOT (IS_CHAR_INJURED( sub_1473() )))
                {
                    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_1473() )) || (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1473() )))
                    {
                        if (NOT (IS_CHAR_INJURED( uParam0 )))
                        {
                            if (bVar9)
                            {
                                if (IS_CHAR_IN_ANY_CAR( uParam0 ))
                                {
                                    if (iVar8 > iVar16)
                                    {
                                        TASK_SMART_FLEE_POINT( uParam0, uVar13._fU0, uVar13._fU4, uVar13._fU8, 300.00000000, -2 );
                                        bVar12 = true;
                                    }
                                    else
                                    {
                                        bVar11 = true;
                                    }
                                }
                            }
                        }
                        if (bVar4)
                        {
                            if (NOT (IS_CHAR_INJURED( iParam1 )))
                            {
                                if (bVar10)
                                {
                                    if (IS_CHAR_IN_ANY_CAR( iParam1 ))
                                    {
                                        if (iVar8 > iVar16)
                                        {
                                            TASK_SMART_FLEE_POINT( iParam1, uVar13._fU0, uVar13._fU4, uVar13._fU8, 300.00000000, -2 );
                                            bVar12 = true;
                                        }
                                        else
                                        {
                                            bVar11 = true;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (iVar8 > iVar16)
                {
                    bVar11 = false;
                }
            }
        }
    }
    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT bVar9))
    {
        TASK_SMART_FLEE_POINT( uParam0, uVar13._fU0, uVar13._fU4, uVar13._fU8, 300.00000000, -2 );
        bVar12 = true;
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    }
    if (bVar4)
    {
        if ((NOT (IS_CHAR_INJURED( iParam1 ))) AND (NOT bVar10))
        {
            TASK_SMART_FLEE_POINT( iParam1, uVar13._fU0, uVar13._fU4, uVar13._fU8, 300.00000000, -2 );
            bVar12 = true;
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref iParam1 );
        }
    }
    GET_GAME_TIMER( ref iVar8 );
    iVar17 = iVar8 + 3000;
    bVar18 = true;
    if (bVar12)
    {
        while (bVar18)
        {
            WAIT( 0 );
            bVar18 = false;
            if (((DOES_CHAR_EXIST( uParam0 )) || (DOES_CHAR_EXIST( iParam1 ))) || (NOT (sub_23176( l_U275 ))))
            {
                GET_GAME_TIMER( ref iVar8 );
                if (iVar17 > iVar8)
                {
                    bVar18 = true;
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_3523() ))
    {
        SET_PLAYER_CONTROL( sub_3523(), 1 );
    }
    return;
}

int sub_23176(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_17531( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_17531( "\n speech is not playing" );
    }
    return 0;
}

void sub_23789(boolean bParam0)
{
    switch (l_U367)
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
        PRINT_NOW( "BUDDYLEFT", 7000, 1 );
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

void sub_24341()
{
    int iVar2;

    l_U383 = 0;
    iVar2 = 0;
    if (NOT (sub_24373( 3, l_U349, iVar2, 7, l_U350 )))
    {
        return;
    }
    if (l_U366)
    {
        return;
    }
    sub_34759();
    sub_35661();
    sub_36188();
    sub_36604();
    sub_15809();
    sub_36657( 3, 0, l_U349 );
    sub_36657( 7, 1, l_U350 );
    sub_36885( 2 );
    sub_36964( 3 );
    sub_38072();
    return;
}

int sub_24373(unknown uParam0, int iParam1, boolean bParam2, int iParam3, int iParam4)
{
    boolean bVar7;
    int iVar8;

    bVar7 = false;
    if (NOT (iParam3 == 34))
    {
        bVar7 = true;
    }
    else
    {
        SCRIPT_ASSERT( "Friend_Activity_Stage_Pickup_Friend: 2nd Friend Index has been passed in but with no 2nd Friend ID" );
        iParam4 = nil;
    }
    iVar8 = 0;
    GET_GAME_TIMER( ref iVar8 );
    if (l_U363 == 0)
    {
        l_U430 = iVar8 + 3000;
        l_U431 = 0;
        l_U363++;
    }
    if (NOT (iParam1 == nil))
    {
        if (IS_CHAR_INJURED( iParam1 ))
        {
            l_U366 = 1;
            l_U367 = 0;
            g_U16014[uParam0]._fU8[0]._fU0[2] = 0;
            if (bVar7)
            {
                g_U16014[iParam3]._fU8[0]._fU0[2] = 0;
            }
            return 1;
        }
    }
    if (bVar7)
    {
        if (NOT (iParam4 == nil))
        {
            if (IS_CHAR_INJURED( iParam4 ))
            {
                l_U366 = 1;
                l_U367 = 0;
                g_U16014[uParam0]._fU8[0]._fU0[2] = 0;
                if (bVar7)
                {
                    g_U16014[iParam3]._fU8[0]._fU0[2] = 0;
                }
                return 1;
            }
        }
    }
    if (NOT l_U431)
    {
        if (l_U430 < iVar8)
        {
            l_U431 = sub_24790( uParam0 );
            if (NOT l_U431)
            {
                l_U430 = iVar8 + 3000;
            }
        }
    }
    if (l_U363 == 1)
    {
        if (sub_25134( uParam0, bParam2 ))
        {
            l_U363 = 99;
        }
    }
    if (l_U363 == 99)
    {
        l_U362 = 2;
        l_U363 = 0;
        if (NOT bParam2)
        {
            sub_34503( uParam0 );
        }
        g_U16014[uParam0]._fU8[0]._fU0[2] = 0;
        if (bVar7)
        {
            g_U16014[iParam3]._fU8[0]._fU0[2] = 0;
        }
        if (NOT (IS_CHAR_DEAD( sub_1473() )))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1473(), 0 );
        }
        return 1;
    }
    return 0;
}

int sub_24790(unknown uParam0)
{
    if ((g_U10559) AND (g_U10561))
    {
        return 1;
    }
    if (g_U20825[uParam0]._fU712._fU4)
    {
        return 1;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return 0;
    }
    if (NOT g_U10559)
    {
        if (g_U20825[uParam0]._fU144 == 19)
        {
            return 1;
        }
        sub_24900( uParam0 );
        g_U10559 = 1;
        return 1;
    }
    if (NOT g_U10561)
    {
        sub_25014( uParam0 );
        g_U10561 = 1;
        return 1;
    }
    return 1;
}

void sub_24900(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        if (l_U360)
        {
            PRINT_HELP( "FRPICKdf" );
        }
        else
        {
            PRINT_HELP( "FRPICKdfh" );
        }
        break;
        default:
    }
    return;
}

void sub_25014(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        PRINT_HELP( "FRQUITdf" );
        break;
        default:
    }
    return;
}

int sub_25134(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3: return sub_25162( uParam1 );
    }
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Not a friend" );
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Should never reach here" );
    return 0;
}

void sub_25162(boolean bParam0)
{
    if (bParam0)
    {
        return sub_25187( 3, ref l_U349, ref l_U351 );
    }
    return sub_32729( 3, ref l_U349, ref l_U351, 7, ref l_U350 );
}

int sub_25187(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_3523() )))
    {
        return 0;
    }
    sub_25220( uParam0 );
    sub_25255();
    sub_25585( (uParam1^) );
    sub_26365();
    if (l_U239 == 0)
    {
        sub_26480( uParam0, uParam1 );
        return 0;
    }
    if (l_U239 == 1)
    {
        sub_28359( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U239 == 2)
    {
        sub_29352( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U239 == 3)
    {
        sub_29649();
        return 0;
    }
    if (l_U239 == 4)
    {
        if (sub_30120( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_3523(), 1 );
    g_U20825[uParam0]._fU20 = 1;
    return 1;
}

void sub_25220(unknown uParam0)
{
    l_U246 = g_U20825[uParam0]._fU28;
    return;
}

void sub_25255()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3523() )))
    {
        return;
    }
    if (g_U12379)
    {
        return;
    }
    if (IS_BIT_SET( g_U10938._fU0, 4 ))
    {
        return;
    }
    if (sub_25340() < 20.00000000)
    {
        return;
    }
    if (NOT (GET_CLOSEST_CAR_NODE( l_U240._fU0, l_U240._fU4, l_U240._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 )))
    {
        return;
    }
    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    SET_CHAR_COORDINATES( sub_1473(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    return;
}

void sub_25340()
{
    vector vVar2;
    float Result;

    if (IS_CHAR_DEAD( sub_1473() ))
    {
        return 9999.90000000;
    }
    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    GET_CHAR_COORDINATES( sub_1473(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
    GET_DISTANCE_BETWEEN_COORDS_3D( vVar2.x, vVar2.y, vVar2.z, l_U240._fU0, l_U240._fU4, l_U240._fU8, ref Result );
    return Result;
}

void sub_25585(unknown uParam0)
{
    if (COMPARE_STRING( ref l_U295._fU0, l_U294 ))
    {
        return;
    }
    if (NOT l_U295._fU96)
    {
        return;
    }
    sub_25640( uParam0 );
    l_U295._fU80 = l_U239;
    return;
}

void sub_25640(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;
    boolean bVar9;

    if (l_U239 == 0)
    {
        return;
    }
    if (NOT (HAVE_ANIMS_LOADED( ref l_U295._fU0 )))
    {
        REQUEST_ANIMS( ref l_U295._fU0 );
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
        TASK_PLAY_ANIM( uParam0, ref l_U295._fU32, ref l_U295._fU0, 8.00000000, 1, 0, 0, 0, -2 );
        l_U295._fU88 = 0;
        l_U295._fU92 = 0;
        return;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = 0;
    if ((((l_U295._fU80 == 1) AND (l_U239 == 2)) AND (NOT (COMPARE_STRING( ref l_U295._fU48, l_U294 )))) AND (NOT l_U295._fU88))
    {
        iVar7 = 1;
    }
    bVar8 = false;
    if (l_U295._fU100)
    {
        bVar9 = sub_25939();
        if (NOT bVar9)
        {
            bVar9 = IS_CHAR_ON_FOOT( sub_1473() );
        }
        if (((((l_U295._fU80 == 1) AND (l_U239 == 2)) AND (bVar9)) AND (NOT (COMPARE_STRING( ref l_U295._fU64, l_U294 )))) AND (NOT l_U295._fU92))
        {
            iVar7 = 1;
            bVar8 = true;
        }
    }
    else if (l_U239 == 1)
    {
        l_U295._fU100 = 1;
    }
    if ((iVar6 > l_U295._fU84) || (iVar7))
    {
        CLEAR_CHAR_TASKS( uParam0 );
        if (bVar8)
        {
            TASK_PLAY_ANIM( uParam0, ref l_U295._fU64, ref l_U295._fU0, 8.00000000, 0, 0, 0, 0, -2 );
            l_U295._fU100 = 0;
            l_U295._fU92 = 1;
        }
        else if (NOT (COMPARE_STRING( ref l_U295._fU48, l_U294 )))
        {
            TASK_PLAY_ANIM( uParam0, ref l_U295._fU48, ref l_U295._fU0, 8.00000000, 0, 0, 0, 0, -2 );
        }
        l_U295._fU88 = 1;
        sub_2866();
        return;
    }
    return;
}

boolean sub_25939()
{
    unknown uVar2;
    float fVar3;

    if (IS_CHAR_DEAD( sub_1473() ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1473() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    return fVar3 > 0.02000000;
}

void sub_26365()
{
    int iVar2;

    if (NOT l_U257)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT (iVar2 > l_U256))
    {
        return;
    }
    CHANGE_BLIP_PRIORITY( l_U244, l_U3 );
    FLASH_BLIP( l_U244, 0 );
    l_U256 = 0;
    l_U257 = 0;
    return;
}

void sub_26480(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_25340();
    if (fVar4 > 98.00000000)
    {
        return;
    }
    if ((g_U12379) || (IS_BIT_SET( g_U10938._fU0, 4 )))
    {
        return;
    }
    sub_26543( uParam0 );
    if (l_U328)
    {
        sub_26543( l_U330 );
    }
    if (NOT (sub_26596( uParam0 )))
    {
        return;
    }
    if (l_U328)
    {
        if (NOT (sub_26596( l_U330 )))
        {
            return;
        }
    }
    if (NOT sub_26665())
    {
        return;
    }
    sub_26771( uParam0, uParam1, l_U240._fU0, l_U240._fU4, l_U240._fU8, l_U243 );
    SET_CHAR_DECISION_MAKER( (uParam1^), l_U261 );
    SET_CHAR_RELATIONSHIP( (uParam1^), 1, 0 );
    g_U20825[uParam0]._fU24 = 1;
    if (l_U328)
    {
        sub_26771( l_U330, ref l_U329, l_U240._fU0 + 1.00000000, l_U240._fU4 + 0.70000000, l_U240._fU8, l_U243 );
        SET_CHAR_DECISION_MAKER( l_U329, l_U261 );
        SET_CHAR_RELATIONSHIP( l_U329, 1, 0 );
    }
    sub_3217( 1, (uParam1^), "ARMANDO", 0 );
    sub_3217( 2, l_U329, "HENRIQUE", 0 );
    sub_28030( uParam0, (uParam1^) );
    sub_28144();
    l_U239 = 1;
    l_U248 = 0;
    return;
}

void sub_26543(unknown uParam0)
{
    REQUEST_MODEL( sub_14903( uParam0 ) );
    return;
}

void sub_26596(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_14903( uParam0 ) );
}

int sub_26665()
{
    if (NOT l_U321)
    {
        return 1;
    }
    REQUEST_MODEL( l_U322 );
    if (NOT (HAS_MODEL_LOADED( l_U322 )))
    {
        return 0;
    }
    return 1;
}

void sub_26771(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_26782( uParam0 ), sub_14903( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_26828( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_26862( uParam0, (uParam1^) );
    return;
}

int sub_26782(unknown uParam0)
{
    return 25;
}

void sub_26828(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_26862(unknown uParam0, unknown uParam1)
{
    sub_26874( ref uParam1, uParam0 );
    return;
}

void sub_26874(unknown uParam0, int iParam1)
{
    sub_26885( uParam0 );
    if (iParam1 == 37)
    {
        sub_26987( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_27571( (uParam0^), iParam1, g_U42825[iParam1] );
    }
    return;
}

void sub_26885(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_26987(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
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
        GET_CHAR_PROP_INDEX( (uParam0^), 1, ref iVar13 );
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

void sub_27571(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        sub_26987( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 1:
        sub_26987( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 31:
        sub_26987( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
        return;
        case 7:
        sub_26987( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_26987( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_28030(unknown uParam0, unknown uParam1)
{
    int iVar4;

    sub_27571( uParam1, uParam0, l_U291 );
    CLEAR_CHAR_PROP( uParam1, 0 );
    iVar4 = -1;
    if (NOT (iVar4 == l_U292))
    {
        if (l_U292 == -1)
        {
            CLEAR_CHAR_PROP( uParam1, 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( uParam1, 1, l_U292 );
        }
    }
    ENABLE_PED_HELMET( uParam1, l_U293 );
    return;
}

void sub_28144()
{
    if (NOT l_U321)
    {
        return;
    }
    if (DOES_VEHICLE_EXIST( l_U327 ))
    {
        return;
    }
    CLEAR_AREA( l_U323._fU0, l_U323._fU4, l_U323._fU8, 5.00000000, 0 );
    CREATE_CAR( l_U322, l_U323._fU0, l_U323._fU4, l_U323._fU8, ref l_U327, 1 );
    SET_CAR_HEADING( l_U327, l_U326 );
    SET_CAR_ON_GROUND_PROPERLY( l_U327 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U322 );
    }
    return;
}

void sub_28359(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_25340();
    if (((fVar5 > 100.00000000) || (g_U12379)) || (IS_BIT_SET( g_U10938._fU0, 4 )))
    {
        sub_28412( uParam1 );
        sub_14880( uParam0 );
        g_U20825[uParam0]._fU24 = 0;
        if (l_U328)
        {
            sub_28412( ref l_U329 );
            sub_14880( l_U330 );
        }
        sub_28493();
        l_U239 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_1473() )))
    {
        if (sub_28743( sub_1473() ))
        {
            return;
        }
    }
    if (fVar5 < 18.00000000)
    {
        l_U239 = 2;
        if (NOT IS_HINT_RUNNING())
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1473() ))
            {
                GET_CHAR_COORDINATES( (uParam1^), ref l_U288._fU0, ref l_U288._fU4, ref l_U288._fU8 );
                l_U288._fU8 += 1.50000000;
                HINT_CAM( l_U288._fU0, l_U288._fU4, l_U288._fU8, 0, 0, 0, 30000 );
            }
        }
        l_U247 = 0;
        sub_14811();
        sub_29157( (uParam1^), uParam2 );
        TASK_LOOK_AT_CHAR( (uParam1^), sub_1473(), -2, 0 );
        if (l_U328)
        {
            TASK_LOOK_AT_CHAR( l_U329, sub_1473(), -2, 0 );
        }
        return;
    }
    return;
}

void sub_28412(unknown uParam0)
{
    DELETE_CHAR( uParam0 );
    (uParam0^) = nil;
    return;
}

void sub_28493()
{
    float fVar2;

    if (NOT (DOES_VEHICLE_EXIST( l_U327 )))
    {
        return;
    }
    if (IS_CHAR_INJURED( sub_1473() ))
    {
        return;
    }
    if (IS_CAR_DEAD( l_U327 ))
    {
        return;
    }
    fVar2 = 98.00000000 - 5.00000000;
    if ((IS_CHAR_IN_CAR( sub_1473(), l_U327 )) || (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_1473(), l_U327, fVar2, fVar2, 30.00000000, 0 )))
    {
        sub_28626();
        return;
    }
    DELETE_CAR( ref l_U327 );
    l_U327 = nil;
    return;
}

void sub_28626()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U327 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U327 );
    l_U327 = nil;
    return;
}

int sub_28743(int iParam0)
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
                if (sub_28807( uVar3 ))
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

int sub_28807(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2687))
    {
        return 1;
    }
    return 0;
}

void sub_29157(unknown uParam0, unknown uParam1)
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
    sub_29226( (uParam1^) );
    return;
}

void sub_29226(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

void sub_29352(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_25340();
    if (sub_29374( uVar4, uParam0, uParam1 ))
    {
        return;
    }
    if (sub_29576( uVar4 ))
    {
        return;
    }
    return;
}

int sub_29374(float fParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    bVar5 = false;
    if (NOT (IS_CHAR_DEAD( sub_1473() )))
    {
        if (sub_28743( sub_1473() ))
        {
            bVar5 = true;
        }
    }
    if (((NOT g_U12379) AND (NOT (IS_BIT_SET( g_U10938._fU0, 4 )))) AND (NOT bVar5))
    {
        if (fParam0 <= 20.00000000)
        {
            return 0;
        }
    }
    l_U239 = 1;
    CLEAR_HELP();
    sub_14744( uParam1 );
    sub_2519( 0 );
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    TASK_CLEAR_LOOK_AT( uParam2 );
    if (l_U328)
    {
        TASK_CLEAR_LOOK_AT( l_U329 );
    }
    return 1;
}

int sub_29576(float fParam0)
{
    if (fParam0 > 7.00000000)
    {
        return 0;
    }
    l_U239 = 3;
    return 1;
}

void sub_29649()
{
    float fVar2;

    fVar2 = sub_25340();
    if (sub_29667( fVar2 ))
    {
        return;
    }
    if (fVar2 < 5.00000000)
    {
        if (NOT sub_29806())
        {
            return;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_1473() ))
        {
            TASK_LEAVE_ANY_CAR( sub_1473() );
        }
        l_U239 = 4;
    }
    return;
}

int sub_29667(float fParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_DEAD( sub_1473() )))
    {
        if (sub_28743( sub_1473() ))
        {
            bVar3 = true;
        }
    }
    if (((NOT g_U12379) AND (NOT (IS_BIT_SET( g_U10938._fU0, 4 )))) AND (NOT bVar3))
    {
        if (fParam0 <= 9.00000000)
        {
            return 0;
        }
    }
    l_U239 = 2;
    l_U247 = 0;
    return 1;
}

int sub_29806()
{
    int iVar2;
    unknown uVar3;
    float fVar4;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U347 == 0)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1473() )))
        {
            return 1;
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1473() )))
        {
            return 0;
        }
        SET_PLAYER_CONTROL( sub_3523(), 0 );
        l_U337 = iVar2 + 4000;
        l_U347 = 1;
    }
    if (l_U347 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1473() )))
        {
            l_U347 = 0;
            return 1;
        }
        if (sub_28743( sub_1473() ))
        {
            return 0;
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar3 );
        GET_CAR_SPEED( uVar3, ref fVar4 );
        if ((fVar4 < 0.04000000) || (l_U337 < iVar2))
        {
            SET_PLAYER_CONTROL( sub_3523(), 1 );
            l_U347 = 0;
            return 1;
        }
    }
    return 0;
}

int sub_30120(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    int iVar11;

    bVar4 = g_U12379;
    if (NOT bVar4)
    {
        if (IS_BIT_SET( g_U10938._fU0, 4 ))
        {
            bVar4 = true;
        }
    }
    if ((NOT l_U245) AND (bVar4))
    {
        l_U239 = 3;
        return 1;
    }
    uVar5 = nil;
    iVar6 = 0;
    iVar7 = 1;
    if (l_U328)
    {
        iVar7 = 2;
    }
    if (NOT l_U245)
    {
        if (NOT l_U250)
        {
            iVar7 = 3;
        }
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1473() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar5 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar5, ref iVar6 );
            if (((iVar6 < iVar7) || (l_U251)) || (NOT (IS_VEH_DRIVEABLE( uVar5 ))))
            {
                TASK_LEAVE_CAR( sub_1473(), uVar5 );
                l_U252 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( (uParam0^), 80, ref iVar8 );
        if ((NOT (iVar8 == 1)) AND (NOT (iVar8 == 7)))
        {
            return 1;
        }
        if (NOT (COMPARE_STRING( ref l_U295._fU0, l_U294 )))
        {
            CLEAR_CHAR_TASKS( (uParam0^) );
            REMOVE_ANIMS( ref l_U295._fU0 );
            l_U295._fU96 = 0;
        }
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        SET_GROUP_MEMBER( sub_15440(), (uParam0^) );
        if (l_U328)
        {
            SET_NEXT_DESIRED_MOVE_STATE( 2 );
            SET_GROUP_MEMBER( sub_15440(), l_U329 );
        }
        l_U245 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        if (l_U328)
        {
            TASK_CLEAR_LOOK_AT( l_U329 );
        }
        sub_30516();
        g_U12379 = 1;
    }
    iVar9 = 0;
    bVar10 = false;
    if ((IS_CHAR_IN_ANY_CAR( sub_1473() )) AND (NOT l_U252))
    {
        MODIFY_CHAR_MOVE_STATE( (uParam0^), 2 );
        if (l_U328)
        {
            MODIFY_CHAR_MOVE_STATE( l_U329, 2 );
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar5 );
        bVar10 = true;
        if (l_U328)
        {
            if (NOT (IS_CHAR_IN_CAR( l_U329, uVar5 )))
            {
                bVar10 = false;
            }
        }
        if ((NOT (IS_CHAR_IN_CAR( (uParam0^), uVar5 ))) || (NOT bVar10))
        {
            if (NOT (l_U287 == 0))
            {
                iVar11 = 0;
                GET_GAME_TIMER( ref iVar11 );
                if ((l_U287 < iVar11) || (NOT (IS_VEH_DRIVEABLE( uVar5 ))))
                {
                    SET_PLAYER_CONTROL( sub_3523(), 1 );
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U287 = 0;
                }
                else if (NOT (IS_GROUP_MEMBER( (uParam0^), sub_15440() )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    SET_GROUP_MEMBER( sub_15440(), (uParam0^) );
                }
                if (l_U328)
                {
                    if (NOT (IS_GROUP_MEMBER( l_U329, sub_15440() )))
                    {
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        SET_GROUP_MEMBER( sub_15440(), l_U329 );
                    }
                }
            }
            else if (sub_25340() > 20.00000000)
            {
                return 0;
            }
            return 1;
        }
        if (l_U246)
        {
            sub_31295( l_U286, ref l_U275 );
            iVar9 = sub_21569( l_U286 );
            sub_31874( iVar9 );
        }
        else
        {
            sub_32044( l_U286, ref l_U275 );
        }
        sub_14744( uParam1 );
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
        return 0;
    }
    if (l_U246)
    {
        if (l_U253)
        {
            sub_32313( l_U286, ref l_U275 );
        }
        else
        {
            sub_31308( l_U286, ref l_U275 );
        }
        iVar9 = sub_21569( l_U286 );
        sub_31874( iVar9 );
    }
    else if (l_U253)
    {
        sub_32394( l_U286, ref l_U275 );
    }
    else
    {
        sub_32425( l_U286, ref l_U275 );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    sub_28626();
    return 0;
}

void sub_30516()
{
    sub_30525();
    sub_30670( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_30744();
    return;
}

void sub_30525()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_30670(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_30744()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_9161( 1, g_U575[I] )) == 0)
        {
            sub_9447( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_9613())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

void sub_31295(unknown uParam0, unknown uParam1)
{
    sub_31308( uParam0, uParam1 );
    return;
}

void sub_31308(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LATE1", "E2FA_LATE2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_On_Foot_Late\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 8, 1 );
    return;
}

void sub_31372(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_31423( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_31423(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_31726(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_17432( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_31874(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = 0;
        break;
        default:
        sub_4600( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_13743( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_13743( uParam0, 0, iVar4 );
    return;
}

void sub_32044(unknown uParam0, unknown uParam1)
{
    if (IS_CHAR_DEAD( sub_1473() ))
    {
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_VEH1", "E2FA_VEH2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_In_Vehicle_Not_Late\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 8, 1 );
    return;
}

void sub_32313(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_32394(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_32425(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_FOOT1", "E2FA_FOOT2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\nFA_Friend_Speech_Arrive_On_Foot_Not_Late\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 8, 1 );
    return;
}

int sub_32729(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    boolean bVar7;

    l_U328 = 1;
    l_U329 = (uParam4^);
    l_U330 = uParam3;
    bVar7 = sub_32765( uParam0, uParam1, uParam2 );
    l_U328 = 0;
    (uParam4^) = l_U329;
    if (bVar7)
    {
        g_U20825[uParam3]._fU20 = 1;
        return 1;
    }
    return 0;
}

int sub_32765(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_3523() )))
    {
        return 0;
    }
    sub_25220( uParam0 );
    sub_25255();
    sub_25585( (uParam1^) );
    sub_26365();
    if (l_U239 == 0)
    {
        sub_26480( uParam0, uParam1 );
        return 0;
    }
    if (l_U239 == 1)
    {
        sub_28359( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U239 == 2)
    {
        sub_32890( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U239 == 3)
    {
        sub_33921();
        return 0;
    }
    if (l_U239 == 4)
    {
        if (sub_30120( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_3523(), 1 );
    g_U20825[uParam0]._fU20 = 1;
    return 1;
}

void sub_32890(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_25340();
    if (sub_29374( uVar4, uParam0, uParam1 ))
    {
        return;
    }
    if (sub_32927( uVar4 ))
    {
        return;
    }
    sub_33142();
    if ((sub_33236()) || (sub_33674()))
    {
        return;
    }
    return;
}

int sub_32927(float fParam0)
{
    if (fParam0 > 7.00000000)
    {
        return 0;
    }
    l_U239 = 3;
    if (NOT l_U248)
    {
        sub_32970();
    }
    if (l_U247)
    {
        if (l_U249)
        {
            PRINT_HELP_FOREVER( ref l_U262[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U262[1] );
        }
    }
    return 1;
}

int sub_32970()
{
    int iVar2;

    l_U248 = 1;
    iVar2 = IS_CHAR_IN_ANY_CAR( sub_1473() );
    if (l_U247 == iVar2)
    {
        return 0;
    }
    l_U247 = iVar2;
    l_U249 = 0;
    if (l_U247)
    {
        if (IS_CHAR_IN_ANY_HELI( sub_1473() ))
        {
            l_U249 = 1;
        }
    }
    return 1;
}

void sub_33142()
{
    if (NOT sub_32970())
    {
        return;
    }
    if (l_U247)
    {
        if (l_U249)
        {
            PRINT_HELP_FOREVER( ref l_U262[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U262[0] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_33236()
{
    unknown uVar2;
    float fVar3;
    int iVar4;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1473() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    if ((fVar3 < 0.01000000) AND (sub_33311( 1, 1 )))
    {
        if (NOT l_U249)
        {
            SET_PLAYER_CONTROL( sub_3523(), 0 );
        }
        l_U239 = 4;
        CLEAR_HELP();
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        l_U287 = iVar4 + 20000;
        return 1;
    }
    return 0;
}

int sub_33311(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1473() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1473() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1473()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1473() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1473() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3523() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3523() )))
    {
        return 0;
    }
    return 1;
}

int sub_33674()
{
    int iVar2;
    boolean bVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    bVar3 = false;
    if (((IS_CHAR_IN_ANY_CAR( sub_1473() )) AND (sub_33311( 1, 1 ))) AND (IS_PLAYER_PRESSING_HORN( sub_3523() )))
    {
        if (l_U249)
        {
            return 0;
        }
        if (l_U258 == 0)
        {
            l_U258 = iVar2 + 400;
            return 0;
        }
        if (l_U258 > iVar2)
        {
            return 0;
        }
        l_U258 = 0;
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        if (l_U258 > 0)
        {
            l_U258 = 0;
            bVar3 = true;
        }
    }
    if (bVar3)
    {
        SET_PLAYER_CONTROL( sub_3523(), 0 );
        l_U239 = 4;
        CLEAR_HELP();
        l_U287 = iVar2 + 20000;
        return 1;
    }
    return 0;
}

void sub_33921()
{
    unknown uVar2;

    uVar2 = sub_25340();
    if (sub_29667( uVar2 ))
    {
        if (l_U247)
        {
            if (l_U249)
            {
                PRINT_HELP_FOREVER( ref l_U262[2] );
            }
            else
            {
                PRINT_HELP_FOREVER( ref l_U262[0] );
            }
        }
        return;
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1473() )))
    {
        l_U239 = 4;
        return;
    }
    if ((sub_33236()) || (sub_33674()))
    {
        return;
    }
    sub_34051();
    return;
}

void sub_34051()
{
    if (NOT sub_32970())
    {
        return;
    }
    if (l_U247)
    {
        if (l_U249)
        {
            PRINT_HELP_FOREVER( ref l_U262[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U262[1] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

void sub_34503(unknown uParam0)
{
    if (g_U10560)
    {
        return;
    }
    if (g_U20825[uParam0]._fU712._fU4)
    {
        return;
    }
    if (NOT g_U10560)
    {
        if (sub_34563( uParam0 ))
        {
            g_U10560 = 1;
        }
        return;
    }
    return;
}

int sub_34563(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        PRINT_HELP( "FRLOCdf" );
        break;
        default:
    }
    return 1;
}

void sub_34759()
{
    SET_MISSION_FLAG( 1 );
    if (l_U360)
    {
        sub_34786();
    }
    else
    {
        sub_35620();
    }
    l_U368 = 1;
    return;
}

void sub_34786()
{
    int iVar2;

    iVar2 = 3;
    sub_34800( iVar2 );
    return;
}

void sub_34800(unknown uParam0)
{
    unknown uVar3;

    g_U12379 = 1;
    uVar3 = sub_9765( uParam0 );
    sub_34826( uVar3 );
    return;
}

void sub_34826(unknown uParam0)
{
    unknown uVar3;
    char[16] cVar4;

    uVar3 = g_U20825[uParam0]._fU144;
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
        StrCopy( ref cVar4, "DANCING", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "DARTS", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "DRINKING", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "EATING", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "GANGWAR", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "GOLF", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "HANGOUT", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "HELIRIDES", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "HILOCARDS", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "LIFTS", 16 );
        break;
        case 20:
        StrCopy( ref cVar4, "POOL", 16 );
        break;
        case 21:
        StrCopy( ref cVar4, "RACES", 16 );
        break;
        case 22:
        StrCopy( ref cVar4, "SHOW", 16 );
        break;
        case 23:
        StrCopy( ref cVar4, "STRIPCLUB", 16 );
        break;
        case 24: return;
    }
    SCRIPT_ASSERT( "Flow_Player_Stats_Friend_Activity_Started: Unknown Activity ID" );
    return;
    sub_35422( cVar4 );
    return;
}

void sub_35422(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10966, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up (see console log)" );
    }
    g_U10966 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10966 );
    return;
}

void sub_35620()
{
    int iVar2;

    iVar2 = 7;
    sub_34800( iVar2 );
    return;
}

void sub_35661()
{
    int I;

    I = 0;
    for ( I = 0; I < 72; I++ )
    {
        l_U540[I]._fU0 = 0;
        l_U540[I]._fU4 = nil;
    }
    sub_35724( 1 );
    sub_35724( 7 );
    sub_35724( 8 );
    sub_35724( 12 );
    sub_35818();
    sub_35724( 20 );
    sub_35724( 24 );
    if (g_U15811[30])
    {
        sub_35724( 14 );
    }
    sub_35989();
    return;
}

void sub_35724(int iParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 72; I++ )
    {
        if (g_U11582[I]._fU12 == iParam0)
        {
            l_U540[I]._fU0 = 1;
        }
    }
    return;
}

void sub_35818()
{
    if (g_U15811[35])
    {
        return;
    }
    sub_35724( 18 );
    sub_35851();
    return;
}

void sub_35851()
{
    if (l_U540[36]._fU0)
    {
        CHANGE_BLIP_DISPLAY( l_U540[36]._fU4, 2 );
    }
    if (l_U540[37]._fU0)
    {
        CHANGE_BLIP_DISPLAY( l_U540[37]._fU4, 2 );
    }
    sub_16763( 35 );
    return;
}

void sub_35989()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    I = 0;
    for ( I = 0; I < 72; I++ )
    {
        if (l_U540[I]._fU0)
        {
            uVar3 = {g_U11582[I]._fU0};
            ADD_BLIP_FOR_COORD( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U540[I]._fU4 );
            SET_BLIP_AS_SHORT_RANGE( l_U540[I]._fU4, 1 );
            CHANGE_BLIP_SPRITE( l_U540[I]._fU4, g_U11582[I]._fU20 );
            CHANGE_BLIP_DISPLAY( l_U540[I]._fU4, 2 );
            CHANGE_BLIP_PRIORITY( l_U540[I]._fU4, 2 );
        }
    }
    return;
}

void sub_36188()
{
    int iVar2;
    int I;

    l_U692[0]._fU0 = {1203.07800000, 1715.79700000, 15.66090000};
    l_U692[1]._fU0 = {1149.37800000, 737.44900000, 34.51500000};
    l_U692[2]._fU0 = {1473.99900000, 54.21650000, 24.18720000};
    l_U692[3]._fU0 = {1198.22000000, -665.67350000, 15.84490000};
    l_U692[4]._fU0 = {-440.87360000, 454.29660000, 9.39490000};
    l_U692[5]._fU0 = {-586.56010000, 77.30330000, 4.21710000};
    l_U692[6]._fU0 = {-570.74790000, -13.37720000, 3.81240000};
    l_U692[7]._fU0 = {-426.05210000, 351.84900000, 10.91160000};
    l_U692[8]._fU0 = {-486.86940000, 147.59600000, 6.55110000};
    l_U692[9]._fU0 = {-434.15340000, 353.02990000, 10.71170000};
    l_U692[10]._fU0 = {-481.88600000, 157.56130000, 6.54900000};
    l_U692[11]._fU0 = {-484.48750000, 161.29580000, 10.62010000};
    l_U692[12]._fU0 = {-1590.13100000, 25.70470000, 9.04640000};
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    I = 0;
    for ( I = 0; I < 13; I++ )
    {
        l_U692[I]._fU12 = iVar2;
    }
    return;
}

void sub_36604()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U746 = iVar2 + 180000;
    return;
}

void sub_36657(unknown uParam0, int iParam1, int iParam2)
{
    int I;

    if (iParam1 >= 2)
    {
        return;
    }
    for ( I = 0; I < iParam1; I++ )
    {
        if (g_U28807._fU0[I] == 34)
        {
            return;
        }
    }
    if (NOT (g_U28807._fU0[iParam1] == 34))
    {
        return;
    }
    if (iParam2 == nil)
    {
        return;
    }
    if (NOT (sub_36764( uParam0 )))
    {
        return;
    }
    g_U28807._fU0[iParam1] = uParam0;
    g_U28807._fU12[iParam1] = iParam2;
    g_U28807._fU28 = 16;
    g_U28807._fU32 = 16;
    return;
}

int sub_36764(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        case 7: return 1;
    }
    return 0;
}

void sub_36885(int iParam0)
{
    if (NOT (g_U28807._fU24 == 16))
    {
        return;
    }
    if (iParam0 == 16)
    {
        return;
    }
    if (g_U28807._fU0[0] == 34)
    {
        return;
    }
    g_U28807._fU24 = iParam0;
    return;
}

void sub_36964(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 24; I++ )
    {
        l_U212[I] = 0;
    }
    l_U175 = g_U20825[uParam0]._fU144;
    switch (uParam0)
    {
        case 3:
        sub_37050( uParam0, 6, 1 );
        sub_37050( uParam0, 7, 0 );
        sub_37050( uParam0, 10, 1 );
        sub_37050( uParam0, 11, 1 );
        sub_37050( uParam0, 12, 1 );
        sub_37050( uParam0, 13, 1 );
        sub_37050( uParam0, 15, 1 );
        sub_37050( uParam0, 18, 0 );
        sub_37050( uParam0, 20, 1 );
        sub_37050( uParam0, 22, 0 );
        sub_37050( uParam0, 23, 1 );
        sub_37050( uParam0, 9, 0 );
        break;
        default:
        SCRIPT_ASSERT( "Unknown Friend ID for setting up alternative activities" );
        break;
    }
    sub_37514( 4 );
    l_U177 = 0;
    l_U237 = sub_21569( uParam0 );
    sub_37565( l_U175 );
    l_U182 = 0;
    if (NOT l_U203)
    {
        l_U202 = g_U10573;
        g_U10573 = 1;
        l_U203 = 1;
    }
    return;
}

void sub_37050(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = sub_37061( iParam1 );
    if (iVar5 == 16)
    {
        if (NOT (iParam1 == l_U175))
        {
            l_U212[iParam1] = uParam2;
        }
        return;
    }
    sub_37299( iVar5, uParam2 );
    return;
}

int sub_37061(unknown uParam0)
{
    switch (uParam0)
    {
        case 6: return 0;
        case 7: return 1;
        case 8: return 2;
        case 9: return 14;
        case 10: return 3;
        case 11: return 4;
        case 12: return 5;
        case 13: return 6;
        case 15: return 7;
        case 17: return 8;
        case 18: return 9;
        case 20: return 10;
        case 22: return 12;
        case 23: return 13;
    }
    return 16;
}

void sub_37299(unknown uParam0, unknown uParam1)
{
    g_U28807._fU60[uParam0] = uParam1;
    return;
}

void sub_37514(unknown uParam0)
{
    g_U28807._fU56 = uParam0;
    return;
}

void sub_37565(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 72; I++ )
    {
        if (sub_14375( I ))
        {
            if (NOT (sub_37607( I, uParam0 )))
            {
                if (g_U12231[I]._fU0)
                {
                    if (NOT (DOES_BLIP_EXIST( g_U12231[I]._fU4 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( g_U11582[I]._fU32 )))
                        {
                            sub_37798( ref g_U12231[I]._fU4, g_U11582[I]._fU0, g_U11582[I]._fU24, g_U11582[I]._fU20 );
                            SET_BLIP_AS_SHORT_RANGE( g_U12231[I]._fU4, 1 );
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_37607(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 13: return g_U11582[uParam0]._fU12 == 12;
        case 12: return g_U11582[uParam0]._fU12 == 8;
    }
    return 0;
}

void sub_37798(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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
            if (iParam4 == 0)
            {
                CHANGE_BLIP_DISPLAY( (uParam0^), 2 );
            }
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

void sub_38072()
{
    g_U817 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_38136()
{
    sub_38145();
    l_U362 = 3;
    l_U363 = 0;
    return;
}

void sub_38145()
{
    sub_38168( l_U349, ref l_U351, l_U331 );
    sub_38168( l_U350, ref l_U352, l_U332 );
    return;
}

void sub_38168(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        sub_29157( uParam0, uParam1 );
        return;
    }
    sub_14744( uParam1 );
    return;
}

void sub_38263()
{
    sub_38145();
    l_U362 = 4;
    l_U363 = 0;
    return;
}

void sub_38302()
{
    sub_38145();
    l_U197 = 1;
    if (NOT l_U537)
    {
        return;
    }
    l_U362 = 5;
    l_U363 = 0;
    return;
}

void sub_38361()
{
    if (l_U338)
    {
        l_U363 = 99;
        return;
    }
    l_U383 = 0;
    l_U335 = 1;
    sub_38145();
    if (NOT (sub_38436( 3, l_U349, l_U353, "E2MF1AU", 7, l_U350 )))
    {
        l_U197 = 1;
        if (l_U363 >= 50)
        {
            l_U538 = 1;
        }
        return;
    }
    l_U538 = 1;
    return;
}

void sub_38436(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    int iVar10;

    iVar10 = 1;
    return sub_38465( uParam0, uParam1, uParam2, iVar10, uParam5, uParam6, uParam7 );
}

int sub_38465(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6, int iParam7, int iParam8)
{
    boolean bVar11;
    int iVar12;
    float fVar13;
    boolean bVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    vector vVar19;
    vector vVar22;
    vector vVar25;
    vector vVar28;
    float fVar31;
    int iVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    boolean bVar42;
    int iVar43;
    int iVar44;

    bVar11 = false;
    if (NOT (iParam7 == 34))
    {
        bVar11 = true;
    }
    if (NOT l_U433)
    {
        if (IS_CHAR_INJURED( iParam1 ))
        {
            l_U366 = 1;
            l_U367 = 0;
            return 1;
        }
        if (bVar11)
        {
            if (IS_CHAR_INJURED( iParam8 ))
            {
                l_U366 = 1;
                l_U367 = 0;
                return 1;
            }
        }
    }
    if (l_U363 == 0)
    {
        if (bParam5)
        {
            sub_38595( uParam0 );
        }
        else
        {
            sub_38908( uParam0, uParam2 );
        }
        l_U423 = {0.00000000, 0.00000000, 0.00000000};
        l_U426 = 0;
        l_U433 = 0;
        l_U363++;
    }
    if (l_U363 == 1)
    {
        if (NOT (sub_23176( l_U275 )))
        {
            sub_39287( uParam6 );
            sub_3217( 0, sub_1473(), l_U436, 0 );
            sub_3217( 1, iParam1, "ARMANDO", 0 );
            sub_3217( 2, iParam8, "HENRIQUE", 0 );
            if (l_U412)
            {
                sub_39473( l_U286, ref l_U275, l_U413 );
            }
            else
            {
                sub_39596( l_U286, ref l_U275 );
            }
            sub_39975( uParam0, bParam5 );
            l_U363++;
        }
        sub_40377( uParam0, bParam5, uParam2 );
    }
    iVar12 = 0;
    if (l_U363 == 2)
    {
        fVar13 = uParam2._fU8 + 0.00000000;
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1473(), uParam2._fU0, uParam2._fU4, fVar13, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            if (bVar11)
            {
                if ((sub_17095( iParam1 )) AND (sub_17095( iParam8 )))
                {
                    l_U363++;
                }
            }
            else if (sub_17095( iParam1 ))
            {
                l_U363++;
            }
        }
        else if (NOT l_U369)
        {
            if (g_U28807._fU56 <= 0)
            {
                GET_GAME_TIMER( ref iVar12 );
                if (NOT IS_MINIGAME_IN_PROGRESS())
                {
                    if (iVar12 > l_U370)
                    {
                        if (NOT (sub_23176( l_U275 )))
                        {
                            sub_40912( l_U286, ref l_U275 );
                            l_U369 = 1;
                        }
                    }
                }
                else
                {
                    l_U370 = iVar12 + 2000;
                }
            }
        }
        l_U383 = 1;
        if (l_U336)
        {
            sub_38168( iParam1, ref l_U408, 0 );
        }
        else
        {
            sub_41325( uParam0 );
        }
        sub_40377( uParam0, bParam5, uParam2 );
    }
    if (IS_CHAR_DEAD( sub_1473() ))
    {
        return 0;
    }
    bVar14 = IS_CHAR_SITTING_IN_ANY_CAR( sub_1473() );
    if (bVar14)
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar15 );
        if (IS_CAR_DEAD( uVar15 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_1473() )))
            {
                TASK_LEAVE_ANY_CAR( sub_1473() );
            }
            if (NOT (IS_CHAR_DEAD( iParam1 )))
            {
                TASK_LEAVE_ANY_CAR( iParam1 );
            }
            if (bVar11)
            {
                if (NOT (IS_CHAR_DEAD( iParam8 )))
                {
                    TASK_LEAVE_ANY_CAR( iParam8 );
                }
            }
            return 0;
        }
    }
    if (l_U363 == 3)
    {
        if (bVar14)
        {
            if (sub_28743( sub_1473() ))
            {
                return 0;
            }
            GET_CHAR_COORDINATES( sub_1473(), ref vVar19.x, ref vVar19.y, ref vVar19.z );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1473(), 2.00000000, 8.00000000, 3.00000000, ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
        }
        else
        {
            GET_CHAR_COORDINATES( sub_1473(), ref vVar22.x, ref vVar22.y, ref vVar22.z );
            GET_CHAR_COORDINATES( iParam1, ref vVar25.x, ref vVar25.y, ref vVar25.z );
            vVar28 = {vVar22 - vVar25};
            vVar28.x *= 1.00000000;
            vVar28.y *= 1.00000000;
            vVar28.z *= 1.00000000;
            vVar28.z += 2.00000000;
            uVar16 = {vVar22 + vVar28};
            vVar19 = {vVar25};
            vVar19 = {vVar19 + 0.50000000};
        }
        sub_41991();
        CREATE_CAM( 14, ref l_U371[1] );
        SET_CAM_POS( l_U371[1], uVar16._fU0, uVar16._fU4, uVar16._fU8 );
        POINT_CAM_AT_COORD( l_U371[1], vVar19.x, vVar19.y, vVar19.z );
        SET_CAM_FOV( l_U371[1], 50.00000000 );
        SET_CAM_ACTIVE( l_U371[1], 1 );
        SET_CAM_PROPAGATE( l_U371[1], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SETTIMERA( 0 );
        l_U363++;
    }
    if (l_U363 == 4)
    {
        if (sub_29806())
        {
            sub_42247( uParam0 );
            sub_40443( uParam0 );
            SET_PLAYER_CONTROL( sub_3523(), 0 );
            l_U363++;
        }
    }
    if (l_U363 == 5)
    {
        if ((NOT (IS_CHAR_DEAD( sub_1473() ))) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
        {
            if (bVar14)
            {
                TASK_LOOK_AT_CHAR( sub_1473(), iParam1, -2, 0 );
                TASK_LOOK_AT_CHAR( iParam1, sub_1473(), -2, 0 );
                if (bVar11)
                {
                    if (NOT (IS_CHAR_DEAD( iParam8 )))
                    {
                        TASK_LOOK_AT_CHAR( iParam8, sub_1473(), -2, 0 );
                    }
                }
            }
            else
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( sub_1473(), iParam1 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam1, sub_1473() );
                if (bVar11)
                {
                    if (NOT (IS_CHAR_DEAD( iParam8 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( iParam8, sub_1473() );
                    }
                }
            }
        }
        l_U363++;
    }
    if (l_U363 == 6)
    {
        if (TIMERA() > 2000)
        {
            SETTIMERA( 0 );
            l_U363++;
        }
    }
    fVar31 = 0.00000000;
    if (l_U363 == 7)
    {
        if (bVar14)
        {
            l_U363++;
        }
        else if ((IS_CHAR_DEAD( sub_1473() )) || (IS_CHAR_DEAD( iParam1 )))
        {
            l_U363++;
        }
        else
        {
            GET_CHAR_COORDINATES( sub_1473(), ref vVar22.x, ref vVar22.y, ref vVar22.z );
            GET_CHAR_COORDINATES( iParam1, ref vVar25.x, ref vVar25.y, ref vVar25.z );
            fVar31 = sub_42895( vVar22, vVar25 );
            if ((fVar31 < 5.00000000) || (TIMERA() > 7000))
            {
                l_U363++;
            }
        }
    }
    if (l_U363 == 8)
    {
        iVar32 = 0;
        sub_16029( iVar32 );
        sub_39287( uParam6 );
        sub_3217( 0, sub_1473(), l_U436, 0 );
        sub_3217( 1, iParam1, "ARMANDO", 0 );
        sub_3217( 2, iParam8, "HENRIQUE", 0 );
        if (l_U412)
        {
            sub_43108( l_U286, ref l_U275 );
        }
        else
        {
            sub_43196( l_U286, ref l_U275 );
        }
        sub_43645( sub_1473() );
        sub_43645( iParam1 );
        sub_43645( iParam8 );
        l_U363++;
    }
    fVar39 = 0.00000000;
    fVar40 = 0.00000000;
    fVar41 = 0.00000000;
    if (l_U363 == 9)
    {
        if (WAS_PED_SKELETON_UPDATED( sub_1473() ))
        {
            GET_PED_BONE_POSITION( sub_1473(), 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar33 );
        }
        else
        {
            GET_CHAR_COORDINATES( sub_1473(), ref uVar33._fU0, ref uVar33._fU4, ref uVar33._fU8 );
            uVar33._fU8 += 0.70000000;
        }
        if (bVar14)
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, 0.00000000, 0.00000000, 0.00000000, ref uVar36._fU0, ref uVar36._fU4, ref uVar36._fU8 );
            fVar31 = sub_42895( uVar33, uVar36 );
            fVar39 = fVar31 + 1.30000000;
            if (fVar31 > 4.00000000)
            {
                fVar39 += 0.70000000;
            }
            fVar40 = (uVar33._fU8 - uVar36._fU8) + 0.40000000;
            uVar16 = {0.00000000, fVar39, fVar40};
            fVar41 = uVar33._fU8 - uVar36._fU8;
            vVar19 = {0.00000000, 0.00000000, fVar41};
            l_U363++;
        }
        else
        {
            l_U363++;
        }
    }
    if (l_U363 == 10)
    {
        if (bVar14)
        {
            if (IS_CAR_DEAD( uVar15 ))
            {
                bVar14 = false;
            }
        }
        if (bVar14)
        {
            ATTACH_CAM_TO_VEHICLE( l_U371[1], uVar15 );
            SET_CAM_ATTACH_OFFSET( l_U371[1], uVar16._fU0, uVar16._fU4, uVar16._fU8 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U371[1], 1 );
            POINT_CAM_AT_VEHICLE( l_U371[1], uVar15 );
            SET_CAM_POINT_OFFSET( l_U371[1], vVar19.x, vVar19.y, vVar19.z );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U371[1], 1 );
            SET_CAM_FOV( l_U371[1], 40.00000000 );
        }
        else
        {
            ATTACH_CAM_TO_PED( l_U371[1], sub_1473() );
            SET_CAM_ATTACH_OFFSET( l_U371[1], 0.70000000, -1.40000000, 0.70000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U371[1], 1 );
            GET_CHAR_COORDINATES( iParam1, ref vVar19.x, ref vVar19.y, ref vVar19.z );
            vVar19.z += 0.50000000;
            POINT_CAM_AT_COORD( l_U371[1], vVar19.x, vVar19.y, vVar19.z );
            SET_CAM_FOV( l_U371[1], 50.00000000 );
        }
        l_U363++;
    }
    if (l_U363 == 11)
    {
        if (sub_45555())
        {
            l_U363 = 50;
            return 0;
        }
        if (NOT (sub_23176( l_U275 )))
        {
            if (bVar14)
            {
                bVar42 = false;
                iVar43 = nil;
                GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar15, 0, ref iVar43 );
                if (iVar43 == iParam1)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, 6.00000000, 0.00000000, 0.00000000, ref l_U401._fU0, ref l_U401._fU4, ref l_U401._fU8 );
                    bVar42 = true;
                }
                if (NOT bVar42)
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar15, 1, ref iVar43 );
                    if (iVar43 == iParam1)
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, -6.00000000, 0.00000000, 0.00000000, ref l_U401._fU0, ref l_U401._fU4, ref l_U401._fU8 );
                        bVar42 = true;
                    }
                }
                if (NOT bVar42)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, 6.00000000, 0.00000000, 0.00000000, ref l_U401._fU0, ref l_U401._fU4, ref l_U401._fU8 );
                }
                fVar13 = l_U401._fU8 + 1.50000000;
                GET_GROUND_Z_FOR_3D_COORD( l_U401._fU0, l_U401._fU4, fVar13, ref l_U401._fU8 );
                if (bVar11)
                {
                    bVar42 = false;
                    iVar43 = nil;
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar15, 0, ref iVar43 );
                    if (iVar43 == iParam8)
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, 6.00000000, 0.00000000, 0.00000000, ref l_U404._fU0, ref l_U404._fU4, ref l_U404._fU8 );
                        bVar42 = true;
                    }
                    if (NOT bVar42)
                    {
                        GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar15, 1, ref iVar43 );
                        if (iVar43 == iParam8)
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, -6.00000000, 0.00000000, 0.00000000, ref l_U404._fU0, ref l_U404._fU4, ref l_U404._fU8 );
                            bVar42 = true;
                        }
                    }
                    if (NOT bVar42)
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, 6.00000000, 0.00000000, 0.00000000, ref l_U404._fU0, ref l_U404._fU4, ref l_U404._fU8 );
                    }
                    fVar13 = l_U404._fU8 + 1.50000000;
                    GET_GROUND_Z_FOR_3D_COORD( l_U404._fU0, l_U404._fU4, fVar13, ref l_U404._fU8 );
                }
            }
            else
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1473(), -1.50000000, -5.00000000, 10.00000000, ref l_U401._fU0, ref l_U401._fU4, ref l_U401._fU8 );
                fVar13 = l_U401._fU8;
                GET_GROUND_Z_FOR_3D_COORD( l_U401._fU0, l_U401._fU4, fVar13, ref l_U401._fU8 );
                if (bVar11)
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1473(), --1.50000000, -5.00000000, 10.00000000, ref l_U404._fU0, ref l_U404._fU4, ref l_U404._fU8 );
                    fVar13 = l_U404._fU8;
                    GET_GROUND_Z_FOR_3D_COORD( l_U404._fU0, l_U404._fU4, fVar13, ref l_U404._fU8 );
                }
            }
            l_U245 = 0;
            if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
            {
                if (IS_GROUP_MEMBER( iParam1, sub_15440() ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam1 );
                }
            }
            if (bVar11)
            {
                if ((NOT (iParam8 == nil)) AND (NOT (IS_CHAR_DEAD( iParam8 ))))
                {
                    if (IS_GROUP_MEMBER( iParam8, sub_15440() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( iParam8 );
                    }
                }
            }
            SETTIMERA( 0 );
            l_U363++;
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( sub_1473(), 1 );
            BLOCK_CHAR_AMBIENT_ANIMS( iParam1, 1 );
            if (bVar11)
            {
                BLOCK_CHAR_AMBIENT_ANIMS( iParam8, 1 );
            }
        }
    }
    if (l_U363 == 12)
    {
        if (NOT (IS_CHAR_DEAD( sub_1473() )))
        {
            TASK_CLEAR_LOOK_AT( sub_1473() );
        }
        if ((sub_46694( iParam1, l_U401, iParam8, l_U404 )) || (TIMERA() > 7000))
        {
            l_U363++;
        }
    }
    if (l_U363 == 13)
    {
        sub_14880( uParam0 );
        DELETE_CHAR( ref iParam1 );
        if (bVar11)
        {
            sub_14880( iParam7 );
            DELETE_CHAR( ref iParam8 );
        }
        sub_15714();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U363 = 99;
    }
    if (l_U363 == 99)
    {
        l_U362 = 6;
        l_U363 = 0;
        return 1;
    }
    if (l_U363 == 50)
    {
        DO_SCREEN_FADE_OUT( 500 );
        SETTIMERA( 0 );
        l_U433 = 1;
        l_U363++;
    }
    if (l_U363 == 51)
    {
        if ((IS_SCREEN_FADED_OUT()) || (TIMERA() > 3000))
        {
            l_U363++;
        }
    }
    iVar44 = 0;
    if (l_U363 == 52)
    {
        sub_47309( ref l_U275, iVar44 );
        l_U245 = 0;
        if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
        {
            if (IS_GROUP_MEMBER( iParam1, sub_15440() ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam1 );
            }
        }
        sub_14880( uParam0 );
        DELETE_CHAR( ref iParam1 );
        if (bVar11)
        {
            if ((NOT (iParam8 == nil)) AND (NOT (IS_CHAR_DEAD( iParam8 ))))
            {
                if (IS_GROUP_MEMBER( iParam8, sub_15440() ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam8 );
                }
            }
            sub_14880( iParam7 );
            DELETE_CHAR( ref iParam8 );
        }
        sub_15714();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U363++;
    }
    if (l_U363 == 53)
    {
        DO_SCREEN_FADE_IN( 500 );
        SETTIMERA( 0 );
        l_U363++;
    }
    if (l_U363 == 54)
    {
        if ((IS_SCREEN_FADED_IN()) || (TIMERA() > 3000))
        {
            l_U363 = 99;
        }
    }
    return 0;
}

void sub_38595(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_38621();
        return;
    }
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Not a friend" );
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Should never reach here" );
    return;
}

void sub_38621()
{
    if (NOT (DOES_BLIP_EXIST( l_U359 )))
    {
        ADD_BLIP_FOR_COORD( l_U353._fU0, l_U353._fU4, l_U353._fU8, ref l_U359 );
        if (l_U335)
        {
            SET_ROUTE( l_U359, 1 );
        }
    }
    return;
}

void sub_38908(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 3:
        sub_38937( uParam1 );
        return;
    }
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Not a friend" );
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Should never reach here" );
    return;
}

void sub_38937(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U359 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U359 );
        if (l_U335)
        {
            SET_ROUTE( l_U359, 1 );
        }
    }
    return;
}

void sub_39287(unknown uParam0)
{
    StrCopy( ref l_U7._fU0, uParam0, 16 );
    sub_39304();
    return;
}

void sub_39304()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U7._fU16[I]._fU0 = nil;
        StrCopy( ref l_U7._fU16[I]._fU4, "", 32 );
        l_U7._fU344[I] = 0;
    }
    return;
}

void sub_39473(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U20825[uParam0]._fU712._fU4)
    {
        sub_39508( uParam0, uParam1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_39508(unknown uParam0, unknown uParam1)
{
    sub_18364( "PHOLDER_E2", uParam1, 8, 1 );
    return;
}

void sub_39596(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_39619( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_HOME1", "E2FA_HOME2" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Optional_Take_Me_Home\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_39619(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_HOME3", "E2FA_HOME4" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Optional_Take_Me_Home_Drunk\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_39975(unknown uParam0, boolean bParam1)
{
    boolean bVar4;
    boolean bVar5;

    if ((g_U10556) AND (g_U10557))
    {
        return;
    }
    if (g_U20825[uParam0]._fU712._fU4)
    {
        return;
    }
    bVar4 = false;
    if (NOT g_U10556)
    {
        if (bParam1)
        {
            bVar4 = true;
        }
    }
    bVar5 = false;
    if (NOT g_U10557)
    {
        if (g_U20825[uParam0]._fU144 == 12)
        {
            bVar5 = true;
        }
    }
    if (bVar5)
    {
        if (bVar4)
        {
            sub_40107( uParam0 );
            g_U10557 = 1;
            return;
        }
        PRINT_HELP( "FRDRUNK" );
        g_U10557 = 1;
        return;
    }
    if (bVar4)
    {
        if (g_U28807._fU56 == 0)
        {
            sub_40224( uParam0 );
        }
        else
        {
            sub_40288( uParam0 );
        }
        g_U10556 = 1;
    }
    return;
}

void sub_40107(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        PRINT_HELP( "FRDRHMdf" );
        break;
        default:
    }
    return;
}

void sub_40224(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        PRINT_HELP( "FRALTdfH" );
        break;
        default:
    }
    return;
}

void sub_40288(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        PRINT_HELP( "FRALTdf" );
        break;
        default:
    }
    return;
}

void sub_40377(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    boolean bVar7;

    bVar7 = true;
    if (l_U260)
    {
        bVar7 = false;
    }
    if (bVar7)
    {
        if (bParam1)
        {
            sub_38595( uParam0 );
        }
        else
        {
            sub_38908( uParam0, uParam2 );
        }
        return;
    }
    sub_40443( uParam0 );
    return;
}

void sub_40443(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_14851();
        return;
    }
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Not a friend" );
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Should never reach here" );
    return;
}

void sub_40912(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_40935( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_END1", "E2FA_END2" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Take_Me_Home\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_40935(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_ENDD1", "E2FA_ENDD2" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Take_Me_Home_Drunk\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_41325(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_38145();
        return;
    }
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Not a friend" );
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Should never reach here" );
    return;
}

void sub_41991()
{
    int iVar2;

    l_U375 = 1;
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

void sub_42247(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_14731();
        return;
    }
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Not a friend" );
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Should never reach here" );
    return;
}

void sub_42895(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_43108(unknown uParam0, unknown uParam1)
{
    if (g_U20825[uParam0]._fU712._fU4)
    {
        sub_39508( uParam0, uParam1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_43196(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_43219( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_43296( ref l_U154, "E2FA_DROP1", "E2FA_DROP2", "E2FA_DROP3" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Dropoff_At_Home\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_43219(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_43296( ref l_U154, "E2FA_DROP4", "E2FA_DROP5", "E2FA_DROP6" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Dropoff_At_Home_Drunk\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_43296(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_31423( uParam0, uParam1, uParam2, uParam3, "END", "END", "END", "END", "END" );
    return;
}

void sub_43645(int iParam0)
{
    int iVar3;
    unknown uVar4;
    int iVar5;

    if (iParam0 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam0 )))
    {
        return;
    }
    iVar3 = sub_43687( iParam0 );
    if (NOT (iVar3 == -1))
    {
        uVar4 = g_U9105[iVar3]._fU0;
        sub_43817( 1, uVar4, 1 );
        return;
    }
    iVar5 = sub_44466( iParam0 );
    if (iVar5 == -1)
    {
        return;
    }
    sub_44550( iVar5 );
    return;
}

int sub_43687(int iParam0)
{
    int Result;

    if (iParam0 == nil)
    {
        return -1;
    }
    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (NOT (g_U9105[Result]._fU0 == -1))
        {
            if (iParam0 == g_U9105[Result]._fU4)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_43817(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_43834( uParam0, uParam1, uParam2, 0, 0 );
    return;
}

void sub_43834(int iParam0, int iParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (iParam0 == -1)
    {
        SCRIPT_ASSERT( "Post_Notice: Unique Drunk Ped ID for poster is unknown" );
        return;
    }
    if (iParam1 == -1)
    {
        SCRIPT_ASSERT( "Post_Notice: Unique Drunk Ped ID for reader is unknown" );
        return;
    }
    if (iParam2 == 5)
    {
        SCRIPT_ASSERT( "Post_Notice: Notice ID is unknown" );
        return;
    }
    if (sub_44056( iParam0, iParam1, iParam2 ))
    {
        return;
    }
    iVar7 = sub_44205();
    if (iVar7 == -1)
    {
        SCRIPT_ASSERT( "All drunk notice slots are full - Tell Keith to increase MAX_NUMBER_OF_DRUNK_NOTICES" );
        return;
    }
    g_U9116[iVar7]._fU0 = iParam0;
    g_U9116[iVar7]._fU4 = iParam1;
    g_U9116[iVar7]._fU8 = iParam2;
    g_U9116[iVar7]._fU12 = uParam3;
    g_U9116[iVar7]._fU16 = uParam4;
    return;
}

int sub_44056(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((sub_44071( uParam0, uParam1, uParam2 )) == -1)
    {
        return 0;
    }
    return 1;
}

int sub_44071(int iParam0, int iParam1, int iParam2)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (iParam2 == g_U9116[Result]._fU8)
        {
            if (iParam0 == g_U9116[Result]._fU0)
            {
                if (iParam1 == g_U9116[Result]._fU4)
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_44205()
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (g_U9116[Result]._fU8 == 5)
        {
            return Result;
        }
    }
    return -1;
}

int sub_44466(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9074[Result]._fU4 == iParam0)
        {
            return Result;
        }
    }
    return -1;
}

void sub_44550(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 5))
    {
        SCRIPT_ASSERT( "Clear_One_Drunk_Request: array index out of bounds" );
        return;
    }
    if (NOT (g_U9074[iParam0]._fU4 == nil))
    {
        if (g_U9074[iParam0]._fU4 == sub_1473())
        {
            g_U9199 = 0;
        }
    }
    g_U9074[iParam0]._fU0 = 16;
    g_U9074[iParam0]._fU4 = nil;
    g_U9074[iParam0]._fU8 = 0;
    g_U9074[iParam0]._fU12 = 0;
    g_U9074[iParam0]._fU16 = nil;
    g_U9074[iParam0]._fU20 = nil;
    return;
}

int sub_45555()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_46694(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    if (l_U348 == 0)
    {
        if (IS_GROUP_MEMBER( uParam0, sub_15440() ))
        {
            REMOVE_CHAR_FROM_GROUP( uParam0 );
        }
        if (IS_GROUP_MEMBER( uParam4, sub_15440() ))
        {
            REMOVE_CHAR_FROM_GROUP( uParam4 );
        }
        if (IS_CHAR_IN_ANY_CAR( uParam4 ))
        {
            TASK_LEAVE_ANY_CAR( uParam4 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            l_U348 = 1;
            return 0;
        }
        SET_PLAYER_CONTROL( sub_3523(), 0 );
        TASK_LEAVE_ANY_CAR( uParam0 );
        l_U348 = 1;
    }
    if (l_U348 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 2, -2, 0.10000000 );
            SETTIMERA( 0 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam4 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( uParam4, uParam5._fU0, uParam5._fU4, uParam5._fU8, 2, -2, 0.10000000 );
        }
        if ((NOT (IS_CHAR_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_IN_ANY_CAR( uParam4 ))))
        {
            l_U348 = 2;
        }
    }
    if (l_U348 == 2)
    {
        if (TIMERA() > 3000)
        {
            SET_PLAYER_CONTROL( sub_3523(), 1 );
            l_U348 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_47309(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_47825()
{
    if (NOT l_U368)
    {
        if ((NOT (DOES_CHAR_EXIST( l_U349 ))) || (NOT (DOES_CHAR_EXIST( l_U350 ))))
        {
            return;
        }
    }
    if (l_U538)
    {
        return;
    }
    if (IS_CHAR_INJURED( l_U349 ))
    {
        l_U686 = 1;
        if (NOT l_U690)
        {
            l_U688 = sub_47932( l_U349 );
            l_U690 = 1;
        }
        sub_48025( l_U688, l_U349 );
    }
    if (IS_CHAR_INJURED( l_U350 ))
    {
        l_U687 = 1;
        if (NOT l_U691)
        {
            l_U689 = sub_47932( l_U350 );
            l_U691 = 1;
        }
        sub_53165( l_U689, l_U350 );
    }
    if ((l_U686) || (l_U687))
    {
        l_U366 = 1;
        l_U367 = 0;
        l_U690 = 1;
        l_U691 = 1;
    }
    return;
}

void sub_47932(unknown uParam0)
{
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_1473() )))
        {
            Result = HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_1473(), 0 );
        }
    }
    return Result;
}

void sub_48025(boolean bParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 3;
    iVar5 = 3;
    if (NOT (iParam1 == nil))
    {
        sub_48055( iVar4, iParam1 );
        sub_52778( iVar4, iParam1, iVar5 );
    }
    if (bParam0)
    {
        sub_52898( iVar5 );
    }
    return;
}

void sub_48055(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    if (NOT g_U20825[uParam0]._fU712._fU0)
    {
        return;
    }
    if (g_U20825[uParam0]._fU712._fU4)
    {
        return;
    }
    uVar4 = sub_21569( uParam0 );
    if (g_U14925[uVar4]._fU80._fU0 == 1)
    {
        sub_48150( uVar4 );
    }
    if (g_U14925[uVar4]._fU0._fU0 == 1)
    {
        sub_52241( uVar4 );
    }
    if (g_U14925[uVar4]._fU160._fU0)
    {
        if (g_U14925[uVar4]._fU160._fU8)
        {
            g_U16014[uParam0]._fU8[0]._fU0[5] = 0;
        }
        g_U14925[uVar4]._fU160._fU108._fU0 = 0;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U20825[uParam0]._fU712._fU4 = 1;
    g_U20825[uParam0]._fU712._fU168 = iVar5 + g_U20825[uParam0]._fU712._fU164;
    g_U20825[uParam0]._fU712._fU184 = uParam1;
    sub_52747( "CONTACT HOSPITALISED\n" );
    return;
}

void sub_48150(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14925[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14925[uParam0]._fU80._fU0 = 0;
        sub_48271( uParam0 );
        sub_50356( uParam0, 0 );
        break;
        case 2:
        g_U14925[uParam0]._fU0._fU0 = 6;
        sub_50641( uParam0, iVar4 );
        break;
        case 3:
        g_U14925[uParam0]._fU80._fU0 = 6;
        sub_50641( uParam0, iVar4 );
        break;
        case 6:
        sub_50641( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_51087( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_4600( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_48271(unknown uParam0)
{
    if ((NOT (g_U14925[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U14925[uParam0]._fU80._fU0 == 1)))
    {
        sub_48328( uParam0 );
        sub_48477( uParam0 );
        return;
    }
    if (g_U14925[uParam0]._fU80._fU0 == 1)
    {
        sub_48328( uParam0 );
        sub_48670( uParam0 );
        return;
    }
    if (g_U14925[uParam0]._fU80._fU0 == 0)
    {
        sub_48477( uParam0 );
    }
    if ((NOT (g_U14925[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U14925[uParam0]._fU0._fU0 == 1)))
    {
        sub_48328( uParam0 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU0 == 1)
    {
        sub_49594( uParam0 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        sub_48328( uParam0 );
    }
    return;
}

void sub_48328(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14925[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U14925[uParam0]._fU0._fU64 );
    g_U14925[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U14925[uParam0]._fU0._fU68;
    g_U14925[uParam0]._fU0._fU68 = 15;
    CLEAR_BIT( ref g_U10756[uVar3]._fU0, 3 );
    return;
}

void sub_48477(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14925[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U14925[uParam0]._fU80._fU64 );
    g_U14925[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U14925[uParam0]._fU80._fU68;
    g_U14925[uParam0]._fU80._fU68 = 15;
    CLEAR_BIT( ref g_U10756[uVar3]._fU0, 3 );
    return;
}

void sub_48670(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_48477( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10755;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14925[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14925[uParam0]._fU80._fU4;
        iVar8 = sub_4526( uParam0, iVar7 );
        iVar9 = g_U22960[iVar8]._fU16;
        vVar3 = {g_U10756[iVar9]._fU4};
        uVar6 = g_U10756[iVar9]._fU16;
        bVar10 = true;
        g_U14925[uParam0]._fU80._fU68 = iVar9;
        SET_BIT( ref g_U10756[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_4600( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14925[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14925[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14925[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14925[uParam0]._fU80._fU64, l_U3 );
        if ((NOT g_U28805._fU4) || (NOT g_U14925[uParam0]._fU80._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U14925[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14925[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U14925[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U14925[uParam0]._fU80._fU64, l_U4 );
        sub_49352( g_U14925[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

void sub_49352(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 3:
        sub_49404( ref uParam0, -448.57680000, 364.07570000, 9.22830000, 354.79170000 );
        break;
        default:
    }
    return;
}

void sub_49404(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2668 = (uParam0^);
        g_U2683 = {uParam1};
        g_U2681 = uParam4;
    }
    return;
}

void sub_49594(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_48328( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10755;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14925[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14925[uParam0]._fU0._fU4;
        iVar8 = sub_4526( uParam0, iVar7 );
        iVar9 = g_U22960[iVar8]._fU16;
        vVar3 = {g_U10756[iVar9]._fU4};
        uVar6 = g_U10756[iVar9]._fU16;
        bVar10 = true;
        g_U14925[uParam0]._fU0._fU68 = iVar9;
        SET_BIT( ref g_U10756[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_4600( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14925[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14925[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14925[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14925[uParam0]._fU0._fU64, l_U3 );
        if ((NOT g_U28805._fU4) || (NOT g_U14925[uParam0]._fU0._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U14925[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14925[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U14925[uParam0]._fU0._fU64, l_U4 );
        if (g_U22)
        {
            FLASH_BLIP( g_U14925[uParam0]._fU0._fU64, 1 );
            g_U22 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U14925[uParam0]._fU0._fU64, 1 );
            g_U22 = 1;
        }
        sub_49352( g_U14925[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_50356(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14925[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U14925[uParam0]._fU80._fU64 );
        }
    }
    g_U14925[uParam0]._fU80._fU0 = 0;
    g_U14925[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U14925[uParam0]._fU80._fU24, "", 32 );
    g_U14925[uParam0]._fU80._fU56 = 10;
    g_U14925[uParam0]._fU80._fU60 = nil;
    g_U14925[uParam0]._fU80._fU64 = nil;
    g_U14925[uParam0]._fU80._fU68 = 15;
    g_U14925[uParam0]._fU80._fU72 = 1;
    g_U14925[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_50641(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U14925[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14925[uParam0]._fU80._fU24 );
        sub_50356( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U14925[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14925[uParam0]._fU0._fU24 );
    sub_50779( uParam0, 0 );;
    sub_48271( uParam0 );
    return;
}

void sub_50779(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14925[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U14925[uParam0]._fU0._fU64 );
        }
    }
    g_U14925[uParam0]._fU0._fU0 = 0;
    g_U14925[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U14925[uParam0]._fU0._fU24, "", 32 );
    g_U14925[uParam0]._fU0._fU56 = 10;
    g_U14925[uParam0]._fU0._fU60 = nil;
    g_U14925[uParam0]._fU0._fU64 = nil;
    g_U14925[uParam0]._fU0._fU68 = 15;
    g_U14925[uParam0]._fU0._fU72 = 1;
    g_U14925[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_51087(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U14925[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U14925[iParam0]._fU80._fU60 );
        }
        sub_50356( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U14925[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U14925[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U14925[iParam0]._fU0._fU56;
    if ((iVar5 == 5) || (iVar5 == 6))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U12382[iParam0]._fU28 = 1;
        if (iParam0 == 3)
        {
            g_U12382[7]._fU28 = 1;
        }
    }
    sub_50779( iParam0, 0 );
    if (bVar4)
    {
        sub_51318();
    }
    g_U12382[iParam0]._fU12 = 0;;
    if (iParam0 == 9)
    {
        sub_51374();
        return;
    }
    sub_48271( iParam0 );
    if (bVar4)
    {
        g_U12379 = 0;
    }
    if (bVar4)
    {
        sub_52039( iParam0 );
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

void sub_51318()
{
    unknown uVar2;

    uVar2 = g_U10965;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_51374()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_3523() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1473() ))
        {
            if (NOT (g_U16004._fU24 == -1))
            {
                uVar3 = g_U28585[g_U16004._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_1473(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U16004._fU24;
    sub_51486();
    if (bVar2)
    {
        g_U16004._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref g_U16004._fU32 );
        g_U16004._fU24 = uVar4;
    }
    l_U451 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_3523(), 0 );
    sub_51641();
    if (IS_PLAYER_PLAYING( sub_3523() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1473() )))
        {
            SET_PLAYER_CONTROL( sub_3523(), 1 );
        }
    }
    return;
}

void sub_51486()
{
    g_U16004._fU0 = 0;
    g_U16004._fU4 = 0;
    g_U16004._fU8 = 0;
    g_U16004._fU12 = 0;
    g_U16004._fU16 = 0;
    g_U16004._fU20 = 0;
    g_U16004._fU24 = -1;
    g_U16004._fU32 = nil;
    g_U16004._fU28 = 0;
    return;
}

void sub_51641()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3523() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_1473() ))
    {
        l_U451 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_3523(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_1473() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_1473(), 837858166 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_1473(), -488123221 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U16004._fU20)
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
        if (l_U451)
        {
            return;
        }
        l_U451 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_3523(), 1 );
    }
    else if (NOT l_U451)
    {
        return;
    }
    l_U451 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_3523(), 0 );;
    return;
}

void sub_52039(int iParam0)
{
    if (NOT (g_U22948 == iParam0))
    {
        return;
    }
    g_U22947 = 1;
    return;
}

void sub_52241(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14925[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14925[uParam0]._fU0._fU0 = 0;
        sub_48271( uParam0 );
        sub_50779( uParam0, 0 );
        break;
        case 2:
        g_U14925[uParam0]._fU0._fU0 = 6;
        sub_50641( uParam0, iVar4 );
        break;
        case 3:
        g_U14925[uParam0]._fU0._fU0 = 6;
        sub_50641( uParam0, iVar4 );
        break;
        case 6:
        sub_50641( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_51087( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_4600( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_52747(unknown uParam0)
{
    return;
}

void sub_52778(unknown uParam0, int iParam1, unknown uParam2)
{
    if (iParam1 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam1 )))
    {
        return;
    }
    g_U42871._fU0 = uParam0;
    g_U42871._fU4 = iParam1;
    g_U42871._fU8 = uParam2;
    g_U42871._fU12 = 0;
    if (g_U12379)
    {
        g_U42871._fU12 = 1;
    }
    return;
}

void sub_52898(unknown uParam0)
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
        sub_5258( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_3949( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_53165(boolean bParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 7;
    iVar5 = 7;
    if (NOT (iParam1 == nil))
    {
        sub_48055( iVar4, iParam1 );
        sub_52778( iVar4, iParam1, iVar5 );
    }
    if (bParam0)
    {
        sub_52898( iVar5 );
    }
    return;
}

int sub_53469(unknown uParam0, int iParam1)
{
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    boolean bVar11;
    float fVar12;
    unknown uVar13;

    if (IS_CHAR_DEAD( sub_1473() ))
    {
        l_U340 = 3;
        return 0;
    }
    bVar4 = false;
    if (NOT (iParam1 == nil))
    {
        bVar4 = true;
    }
    l_U260 = 0;
    g_U28807._fU128 = 0;
    if (NOT l_U245)
    {
        l_U340 = 3;
        return 0;
    }
    if (IS_CHAR_INJURED( uParam0 ))
    {
        l_U340 = 3;
        return 0;
    }
    if (bVar4)
    {
        if (IS_CHAR_INJURED( iParam1 ))
        {
            l_U340 = 3;
            return 0;
        }
    }
    if (IS_MINIGAME_IN_PROGRESS())
    {
        l_U340 = 3;
        return 0;
    }
    if (NOT l_U259)
    {
        l_U340 = 3;
        return 0;
    }
    GET_CHAR_COORDINATES( sub_1473(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    bVar11 = false;
    if (NOT (IS_GROUP_MEMBER( uParam0, sub_15440() )))
    {
        bVar11 = true;
    }
    fVar12 = 0.00000000;
    if (bVar11)
    {
        fVar12 = sub_42895( uVar5, uVar8 );
        if (fVar12 > 200.00000000)
        {
            TASK_CLEAR_LOOK_AT( uParam0 );
            l_U331 = 0;
            l_U333 = 1;
            if (l_U332)
            {
                TASK_CLEAR_LOOK_AT( iParam1 );
                l_U332 = 0;
                l_U334 = 1;
            }
            return 1;
        }
        if (NOT l_U331)
        {
            TASK_LOOK_AT_CHAR( uParam0, sub_1473(), -2, 0 );
            l_U331 = 1;
        }
        if (fVar12 < 12.00000000)
        {
            SET_GROUP_MEMBER( sub_15440(), uParam0 );
            TASK_CLEAR_LOOK_AT( uParam0 );
            l_U331 = 0;
        }
    }
    if (bVar4)
    {
        GET_CHAR_COORDINATES( iParam1, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
        bVar11 = false;
        if (NOT (IS_GROUP_MEMBER( iParam1, sub_15440() )))
        {
            bVar11 = true;
        }
        if (bVar11)
        {
            fVar12 = sub_42895( uVar5, uVar8 );
            if (fVar12 > 200.00000000)
            {
                TASK_CLEAR_LOOK_AT( iParam1 );
                l_U332 = 0;
                l_U334 = 1;
                if (l_U331)
                {
                    TASK_CLEAR_LOOK_AT( uParam0 );
                    l_U331 = 0;
                    l_U333 = 1;
                }
                return 1;
            }
            if (NOT l_U332)
            {
                TASK_LOOK_AT_CHAR( iParam1, sub_1473(), -2, 0 );
                l_U332 = 1;
            }
            if (fVar12 < 12.00000000)
            {
                SET_GROUP_MEMBER( sub_15440(), iParam1 );
                TASK_CLEAR_LOOK_AT( iParam1 );
                l_U332 = 0;
            }
        }
    }
    uVar13 = nil;
    if (NOT l_U339)
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1473() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar13 );
            if (IS_CHAR_SITTING_IN_CAR( uParam0, uVar13 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( iParam1, uVar13 ))
                {
                    l_U339 = 1;
                }
            }
        }
    }
    if ((l_U331) || (l_U332))
    {
        l_U260 = 1;
        g_U28807._fU128 = 1;
    }
    if (NOT l_U260)
    {
        l_U340 = 3;
        return 0;
    }
    if ((l_U339) AND (l_U340 == 3))
    {
        if (l_U331)
        {
            if (sub_17095( iParam1 ))
            {
                sub_54314( 7, ref l_U275 );
                l_U339 = 0;
                return 0;
            }
        }
        else if (l_U332)
        {
            if (sub_17095( uParam0 ))
            {
                sub_54314( 3, ref l_U275 );
                l_U339 = 0;
                return 0;
            }
        }
    }
    if (sub_23176( l_U275 ))
    {
        return 0;
    }
    if (l_U331)
    {
        if (l_U332)
        {
            if (NOT (l_U340 == 0))
            {
                PRINT_NOW( "FA_LEFT_BOTH", 7500, 1 );
                l_U340 = 0;
            }
        }
        else if (NOT (l_U340 == 1))
        {
            PRINT_NOW( "FA_LEFT_FIRST", 7500, 1 );
            l_U340 = 1;
        }
    }
    else if (l_U332)
    {
        if (NOT (l_U340 == 2))
        {
            PRINT_NOW( "FA_LEFT_SECOND", 7500, 1 );
            l_U340 = 2;
        }
    }
    else
    {
        l_U340 = 3;
    }
    return 0;
}

void sub_54314(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_LVB", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_LVB", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_54985()
{
    int iVar2;
    int iVar3;

    if (NOT l_U197)
    {
        return;
    }
    iVar2 = sub_55018( 3, l_U349, ref l_U275 );
    if (NOT (iVar2 == 24))
    {
        sub_57677( iVar2 );
        l_U183 = sub_57941( iVar2 );
        sub_58100( 3, iVar2, "E2MF1AU", l_U285, l_U349, ref l_U281, ref l_U275, l_U350 );
    }
    iVar2 = sub_58117();
    if (NOT (iVar2 == 24))
    {
        l_U338 = sub_58163( iVar2 );
        sub_58399( 3, iVar2, "E2MF1AU", l_U285, l_U349, ref l_U281, ref l_U275, l_U350 );
        sub_68204( iVar2, ref l_U414, ref l_U417, ref l_U420 );
        sub_68242( iVar2, l_U176, g_U28807._fU56, l_U185 );
        sub_68461( iVar2 );
        l_U537 = 1;
    }
    iVar3 = sub_69509();
    if (iVar3 == 16)
    {
        iVar2 = 24;
    }
    else
    {
        iVar2 = sub_69570( iVar3 );
    }
    if (l_U200)
    {
        l_U259 = 0;
        l_U200 = 0;
    }
    if (l_U201)
    {
        l_U259 = 1;
        l_U201 = 0;
    }
    return;
}

int sub_55018(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int Result;

    if (l_U198)
    {
        sub_55043( uParam0, uParam1, uParam2 );
        return 24;
    }
    Result = 24;
    Result = 6;
    if (sub_57210( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 7;
    if (sub_57210( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 10;
    if (sub_57210( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 11;
    if (sub_57210( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 12;
    if (sub_57210( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 13;
    if (sub_57210( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 15;
    if (sub_57210( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 18;
    if (sub_57210( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 20;
    if (sub_57210( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 22;
    if (sub_57210( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 23;
    if (sub_57210( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 9;
    if (sub_57210( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    return 24;
}

void sub_55043(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (l_U205)
    {
        case 0:
        sub_55080();
        break;
        case 1:
        sub_55405();
        break;
    }
    return;
}

void sub_55080()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U206 == 0)
    {
        sub_55112();
        l_U204 = iVar2 + 3000;
        l_U206++;
    }
    if (l_U206 == 1)
    {
        if (l_U199 == 22)
        {
            if ((IS_SCREEN_FADED_OUT()) || (iVar2 > l_U204))
            {
                l_U206++;
            }
        }
        else
        {
            l_U206++;
        }
    }
    if (l_U206 == 2)
    {
        if (sub_55250())
        {
            if (l_U199 == 22)
            {
                sub_55293();
            }
            l_U206++;
        }
    }
    if (l_U206 == 3)
    {
        if (IS_SCREEN_FADED_IN())
        {
            l_U206 = 99;
        }
    }
    if (l_U206 == 99)
    {
        l_U205 = 1;
        l_U206 = 0;
    }
    return;
}

void sub_55112()
{
    g_U10575 = 1;
    g_U10718 = 0;
    return;
}

void sub_55250()
{
    return g_U28807._fU52;
}

void sub_55293()
{
    g_U10575 = 0;
    g_U10718 = 0;
    return;
}

void sub_55405()
{
    unknown uVar2;

    l_U179 = sub_55414();
    sub_55497( l_U199, l_U179 );
    uVar2 = sub_9765( l_U237 );
    sub_55684( uVar2, l_U199 );
    l_U198 = 0;
    l_U178 = l_U199;
    l_U199 = 24;
    if (l_U176)
    {
        l_U182 = 1;
    }
    g_U10567 = 1;
    l_U205 = 2;
    return;
}

void sub_55414()
{
    unknown Result;

    Result = g_U28807._fU40;
    g_U28807._fU28 = 16;
    g_U28807._fU40 = 8;
    g_U28807._fU48 = 0;
    g_U28807._fU52 = 0;
    return Result;
}

void sub_55497(unknown uParam0, unknown uParam1)
{
    if (l_U196 == 4)
    {
        SCRIPT_ASSERT( "Store_Alternative_Result: All allowed alternative activities have already been played" );
    }
    l_U187[l_U196]._fU0 = uParam0;
    l_U187[l_U196]._fU4 = uParam1;
    l_U196++;
    return;
}

void sub_55684(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_55695( uParam0 );
    g_U30326._fU0[uVar4]._fU0[uParam1]++;
    g_U30326._fU0[uVar4]._fU100++;
    sub_55871( uParam1 );
    sub_56826( uParam0, uParam1 );
    return;
}

int sub_55695(unknown uParam0)
{
    switch (uParam0)
    {
        case 3: return 0;
    }
    sub_4600( "Convert_Friend_To_Friend_Stats_ID: Unrecognised Friend ID" );
    return 1;
}

void sub_55871(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    char[64] cVar6;

    g_U30326._fU112[iParam0]++;
    g_U30326._fU212++;
    iVar3 = g_U30326._fU216;
    if (iVar3 == iParam0)
    {
        return;
    }
    iVar4 = g_U30326._fU112[iVar3];
    iVar5 = g_U30326._fU112[iParam0];
    if (iVar5 < iVar4)
    {
        return;
    }
    g_U30326._fU216 = iParam0;
    StrCopy( ref cVar6, "", 64 );
    sub_56015( iParam0, ref cVar6 );
    if (CAN_THE_STAT_HAVE_STRING( 662 ))
    {
        sub_8837( 662 );
        REGISTER_STRING_FOR_FRONTEND_STAT( 662, ref cVar6 );
    }
    return;
}

void sub_56015(unknown uParam0, unknown uParam1)
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
        StrCopy( (uParam1^), "statAct_dance", 64 );
        break;
        case 11:
        StrCopy( (uParam1^), "statAct_2", 64 );
        break;
        case 12:
        StrCopy( (uParam1^), "statAct_3", 64 );
        break;
        case 13:
        StrCopy( (uParam1^), "statAct_4", 64 );
        break;
        case 14:
        StrCopy( (uParam1^), "statAct_war", 64 );
        break;
        case 15:
        StrCopy( (uParam1^), "statAct_golf", 64 );
        break;
        case 16:
        StrCopy( (uParam1^), "statAct_hang", 64 );
        break;
        case 17:
        StrCopy( (uParam1^), "statAct_5", 64 );
        break;
        case 18:
        StrCopy( (uParam1^), "statAct_hilo", 64 );
        break;
        case 19:
        StrCopy( (uParam1^), "statAct_6", 64 );
        break;
        case 20:
        StrCopy( (uParam1^), "statAct_7", 64 );
        break;
        case 21:
        StrCopy( (uParam1^), "statAct_race", 64 );
        break;
        case 22:
        StrCopy( (uParam1^), "statAct_8", 64 );
        break;
        case 23:
        StrCopy( (uParam1^), "statAct_9", 64 );
        break;
        default: sub_4600( "Friend_Achievement_Fill_Activity_String: Unknown activity" );
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

void sub_56826(unknown uParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    char[64] cVar8;

    uVar4 = sub_55695( uParam0 );
    iVar5 = g_U30326._fU0[uVar4]._fU104;
    if (iVar5 == iParam1)
    {
        return;
    }
    iVar6 = g_U30326._fU0[uVar4]._fU0[iVar5];
    iVar7 = g_U30326._fU0[uVar4]._fU0[iParam1];
    if (iVar7 < iVar6)
    {
        return;
    }
    g_U30326._fU0[uVar4]._fU104 = iParam1;
    StrCopy( ref cVar8, "", 64 );
    sub_56015( iParam1, ref cVar8 );
    switch (uParam0)
    {
        case 3:
        if (CAN_THE_STAT_HAVE_STRING( 679 ))
        {
            sub_8837( 679 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 679, ref cVar8 );
        }
        break;
        default: sub_4600( "Friend_Achievement_Check_For_New_Favourite_Activity_With_Friend: Unknown friend ID" );
    }
    return;
}

int sub_57210(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = sub_37061( uParam0 );
    if (iVar6 == 16)
    {
        return 0;
    }
    if (NOT (sub_57243( iVar6 )))
    {
        return 0;
    }
    l_U205 = 0;
    l_U206 = 0;
    l_U198 = 1;
    l_U199 = uParam0;
    sub_55043( uParam1, uParam2, uParam3 );
    return 1;
}

int sub_57243(int iParam0)
{
    boolean bVar3;

    bVar3 = g_U28807._fU48;
    if (NOT bVar3)
    {
        return 0;
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    return 0;
}

void sub_57677(int iParam0)
{
    if (iParam0 == 13)
    {
        sub_57695();
        return;
    }
    sub_57716();
    return;
}

void sub_57695()
{
    if (l_U384._fU8)
    {
        sub_57716();
        return;
    }
    l_U384._fU32 = 1;
    sub_57783();
    return;
}

void sub_57716()
{
    int iVar2;

    iVar2 = 0;
    sub_47309( ref l_U341, iVar2 );
    g_U20825[l_U286]._fU900._fU44 = -1;
    return;
}

void sub_57783()
{
    unknown uVar2;

    if (l_U384._fU24)
    {
        return;
    }
    uVar2 = sub_57813( l_U341 );
    g_U20825[l_U286]._fU900._fU44 = uVar2;
    return;
}

void sub_57813(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_23176( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

boolean sub_57941(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    return 0;
    switch (uParam0)
    {
        case 13: break;
        default: return 0;
    }
    uVar3 = sub_9765( l_U237 );
    if (NOT g_U20825[uVar3]._fU172)
    {
        return 0;
    }
    if (NOT l_U176)
    {
        return 0;
    }
    iVar4 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
    return iVar4 < 20;
}

void sub_58100(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    return;
}

void sub_58117()
{
    unknown Result;

    Result = l_U178;
    l_U178 = 24;
    return Result;
}

int sub_58163(unknown uParam0)
{
    l_U184 = 0;
    switch (uParam0)
    {
        case 23: break;
        default: return 0;
    }
    if (l_U179 == 8)
    {
        SCRIPT_ASSERT( "m_altResultForSpeech = MGR_NOT_SET: Make sure this function called before Activity_Finished_Speech()" );
    }
    if (NOT (l_U179 == 7))
    {
        return 0;
    }
    l_U184 = 1;
    return 1;
}

void sub_58399(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    int iVar10;

    if ((NOT l_U183) AND (NOT l_U184))
    {
        iVar10 = 0;
        sub_47309( uParam6, iVar10 );
        sub_39287( uParam2 );
        sub_3217( 0, sub_1473(), "LUIS", 0 );
        sub_3217( 1, uParam4, "ARMANDO", 0 );
        sub_3217( 2, uParam7, "HENRIQUE", 0 );
        sub_58516( uParam1, l_U179, uParam0, uParam6 );
    }
    l_U179 = 8;
    return;
}

void sub_58516(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    uVar6 = sub_58525();
    switch (uParam0)
    {
        case 6:
        sub_58689( uParam1, uVar6, uParam3 );
        return;
        case 7:
        sub_59940( uParam1, uParam2, uParam3 );
        return;
        case 10:
        sub_60409( uParam1, uParam2, uParam3 );
        return;
        case 11:
        sub_61380( uParam1, uVar6, uParam3 );
        return;
        case 12:
        sub_62180( uParam2, uParam3, l_U186 );
        return;
        case 13:
        sub_63432( uParam2, uParam3, l_U186 );
        return;
        case 15:
        sub_64286( uParam1, uVar6, uParam3 );
        return;
        case 18:
        sub_65222( uParam1, uParam2, uParam3 );
        return;
        case 20:
        sub_65609( uParam1, uVar6, uParam3 );
        return;
        case 22:
        if (g_U10978 == 2)
        {
            sub_66215( uParam1, uParam2, uParam3 );
        }
        else
        {
            sub_66424( uParam1, uParam2, uParam3 );
        }
        return;
        case 23:
        sub_66552( uParam1, uParam2, uParam3 );
        return;
        case 9:
        sub_67170( uParam1, uVar6, uParam3 );
        return;
    }
    SCRIPT_ASSERT( "Play_Activity_Ended_Speech_For_Activity: Activity speech not set up" );
    return;
}

void sub_58525()
{
    if (g_U28807._fU0[0] == 34)
    {
        return 34;
    }
    return g_U28807._fU44;
}

void sub_58689(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_58743( uParam1, uParam2 );
        break;
        case 2:
        sub_59259( uParam1, uParam2 );
        break;
        case 1:
        sub_59285( uParam1, uParam2 );
        break;
        case 3:
        sub_59568( uParam1, uParam2 );
        break;
        default: sub_4600( "Ended_AirHockey_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_58743(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_58766( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_AMAIR", "E2FAAU", uParam1, 8, 1 );
        PRINTSTRING( "***** ARMANDO - LEAVE: AIR HOCKEY (Player Won)\n" );
        return;
        case 7:
        sub_17378( "E2FH_AMAIR", "E2FHAU", uParam1, 8, 1 );
        PRINTSTRING( "***** HENRIQUE - LEAVE: AIR HOCKEY (Player Won)\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_58766(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_APAIR", "E2FAAU", uParam1, 8, 1 );
        PRINTSTRING( "***** ARMANDO - LEAVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 7:
        sub_17378( "E2FH_APAIR", "E2FHAU", uParam1, 8, 1 );
        PRINTSTRING( "***** HENRIQUE - LEAVE: AIR HOCKEY - DRUNK\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_59259(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_59285(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_58766( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_ANAIR", "E2FAAU", uParam1, 8, 1 );
        PRINTSTRING( "***** ARMANDO - LEAVE: AIR HOCKEY (Player Lost)\n" );
        return;
        case 7:
        sub_17378( "E2FH_ANAIR", "E2FHAU", uParam1, 8, 1 );
        PRINTSTRING( "***** HENRIQUE - LEAVE: AIR HOCKEY (Player Lost)\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_59568(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_58766( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_AOAIR", "E2FAAU", uParam1, 8, 1 );
        PRINTSTRING( "***** ARMANDO - LEAVE: AIR HOCKEY (Abandoned)\n" );
        return;
        case 7:
        sub_17378( "E2FH_AOAIR", "E2FHAU", uParam1, 8, 1 );
        PRINTSTRING( "***** HENRIQUE - LEAVE: AIR HOCKEY (Abandoned)\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_59940(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_59994( uParam1, uParam2 );
        break;
        case 1:
        sub_60100( uParam1, uParam2 );
        break;
        case 2:
        sub_60171( uParam1, uParam2 );
        break;
        case 3:
        sub_60242( uParam1, uParam2 );
        break;
        default: sub_4600( "Ended_ArmWrestling_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_59994(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_60017( uParam0, uParam1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_60017(unknown uParam0, unknown uParam1)
{
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_60100(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_60017( uParam0, uParam1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_60171(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_60017( uParam0, uParam1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_60242(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_60017( uParam0, uParam1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_60409(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_60463( uParam1, uParam2 );
        break;
        case 2:
        sub_60843( uParam1, uParam2 );
        break;
        case 1:
        sub_60869( uParam1, uParam2 );
        break;
        case 3:
        sub_61080( uParam1, uParam2 );
        break;
        default: sub_4600( "Ended_Dancing_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_60463(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_60486( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LDNS1", "E2FA_LDNS2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Dancing_Player_Won\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_60486(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LDNS7", "E2FA_LDNS8" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Dancing_Drunk\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_60843(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_60869(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_60486( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LDNS3", "E2FA_LDNS4" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Dancing_Player_Lost\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_61080(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_60486( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LDNS5", "E2FA_LDNS6" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Dancing_Abandoned\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_61380(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_61434( uParam1, uParam2 );
        break;
        case 2:
        sub_61730( uParam1, uParam2 );
        break;
        case 1:
        sub_61756( uParam1, uParam2 );
        break;
        case 3:
        sub_61922( uParam1, uParam2 );
        break;
        default: sub_4600( "Ended_Darts_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_61434(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_61457( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_AVDAR", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_AVDAR", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_61457(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_AYDAR", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_AYDAR", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_61730(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_61756(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_61457( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_AWDAR", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_AWDAR", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_61922(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_61457( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_AXDAR", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_AXDAR", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_62180(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_62220( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Friend: Unknown friend ID" );
    SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Friend: Needs to be uncommented for E1" );
    return;
}

void sub_62220(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((LOCATE_CHAR_ON_FOOT_3D( sub_1473(), -434.15340000, 353.02990000, 10.71170000, 5.00000000, 5.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_1473(), -481.88600000, 157.56130000, 6.54900000, 5.00000000, 5.00000000, 2.00000000, 0 )))
    {
        sub_62327( uParam0, uParam1 );
    }
    else if (LOCATE_CHAR_ON_FOOT_3D( sub_1473(), -484.48750000, 161.29580000, 10.62010000, 5.00000000, 5.00000000, 2.00000000, 0 ))
    {
        sub_62574( uParam0, uParam1 );
    }
    else
    {
        sub_62768( uParam0, uParam1 );
        sub_62948( uParam0 );
        sub_63218();
        l_U185 = 1;
    }
    return;
}

void sub_62327(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LDPS1", "E2FA_LDPS2" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Drink_Shot_Drinking_Minigame\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_62574(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LDPC1", "E2FA_LDPC2" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Drink_Champagne_Minigame\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_62768(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LDP1", "E2FA_LDP2" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Drink_Favourite_Pub\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_62948(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    uVar3 = sub_62959( uParam0 );
    fVar4 = 50;
    fVar5 = fVar4 * uVar3;
    uVar6 = sub_63031( fVar5 );
    sub_63181( uVar6 );
    return;
}

float sub_62959(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        case 7: return 1.00000000;
    }
    return 1.00000000;
}

void sub_63031(unknown uParam0)
{
    int iVar3;
    int Result;
    int iVar5;

    iVar3 = sub_63040();
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
    sub_63136( iVar5 );
    return Result;
}

void sub_63040()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_3523() ))
    {
        STORE_SCORE( sub_3523(), ref Result );
    }
    return Result;
}

void sub_63136(unknown uParam0)
{
    ADD_SCORE( sub_3523(), uParam0 );
    return;
}

void sub_63181(unknown uParam0)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 94, uParam0 );
    return;
}

void sub_63218()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 283, 1 );
    return;
}

void sub_63432(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_63472( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Friend: Unknown friend ID" );
    return;
}

void sub_63472(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar5 );
    if (iVar5 < 50)
    {
        sub_63511( uParam0, uParam1 );
    }
    else
    {
        sub_63886( uParam0, uParam1 );
    }
    sub_64085( uParam0 );
    sub_64164();
    return;
}

void sub_63511(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_63534( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LDIN1", "E2FA_LDIN2" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Eating_High_End\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_63534(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LFDD1", "E2FA_LFDD2" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Eating_Drunk\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_63886(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_63534( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LFD1", "E2FA_LFD2" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Eating_Fast_Food\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_64085(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    uVar3 = sub_62959( uParam0 );
    fVar4 = 100;
    fVar5 = fVar4 * uVar3;
    uVar6 = sub_63031( fVar5 );
    sub_64127( uVar6 );
    return;
}

void sub_64127(unknown uParam0)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 97, uParam0 );
    return;
}

void sub_64164()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 306, 1 );
    return;
}

void sub_64286(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_64340( uParam1, uParam2 );
        break;
        case 2:
        sub_64636( uParam1, uParam2 );
        break;
        case 1:
        sub_64802( uParam1, uParam2 );
        break;
        case 3:
        sub_64968( uParam1, uParam2 );
        break;
        default: sub_4600( "Ended_Golf_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_64340(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_64363( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_AZDAR", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_AYGOL", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_64363(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_BDGOL", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_BCGOL", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_64636(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_64363( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_BAGOL", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_AZGOL", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_64802(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_64363( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_BBGOL", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_BAGOL", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_64968(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_64363( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_BCGOL", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_BBGOL", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_65222(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_65268( uParam1, uParam2 );
        break;
        case 1:
        sub_65374( uParam1, uParam2 );
        break;
        case 3:
        sub_65445( uParam1, uParam2 );
        break;
        default: sub_4600( "Ended_HiLoCards_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_65268(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_65291( uParam0, uParam1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_65291(unknown uParam0, unknown uParam1)
{
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_65374(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_65291( uParam0, uParam1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_65445(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_65291( uParam0, uParam1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_65609(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_65663( uParam1, uParam2 );
        break;
        case 2:
        sub_65805( uParam1, uParam2 );
        break;
        case 1:
        sub_65831( uParam1, uParam2 );
        break;
        case 3:
        sub_65973( uParam1, uParam2 );
        break;
        default: sub_4600( "Ended_Pool_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_65663(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_BEPO", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_BDPO", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_65805(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_65831(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_BFPO", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_BEPO", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_65973(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_BGPO", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_BFPO", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_66215(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 3)
    {
        sub_66237( uParam1, uParam2 );
    }
    else
    {
        sub_66343( uParam1, uParam2 );
    }
    return;
}

void sub_66237(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_66260( uParam0, uParam1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_66260(unknown uParam0, unknown uParam1)
{
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_66343(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_66260( uParam0, uParam1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_66424(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 3)
    {
        sub_66446( uParam1, uParam2 );
    }
    else
    {
        sub_66495( uParam1, uParam2 );
    }
    return;
}

void sub_66446(unknown uParam0, unknown uParam1)
{
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_66495(unknown uParam0, unknown uParam1)
{
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_66552(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 1)
    {
        return;
    }
    if (iParam0 == 3)
    {
        sub_66586( uParam1, uParam2 );
    }
    else
    {
        sub_66962( uParam1, uParam2 );
    }
    return;
}

void sub_66586(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_66609( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LSC3", "E2FA_LSC4" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Strip_Club_Early\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_66609(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LSC5", "E2FA_LSC6" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Strip_Club_Drunk\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_66962(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_66609( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_LSC1", "E2FA_LSC2" );
        sub_31726( ref l_U154, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Leave_Strip_Club\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_67170(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_67224( uParam1, uParam2 );
        break;
        case 2:
        sub_67517( uParam1, uParam2 );
        break;
        case 1:
        sub_67680( uParam1, uParam2 );
        break;
        case 3:
        sub_67843( uParam1, uParam2 );
        break;
        default: sub_4600( "Ended_Bowling_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_67224(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_67247( uParam0, uParam1 );
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_AQBOW", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_AQBOW", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_67247(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_AUBOW", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_AUBOW", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_67517(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_67247( uParam0, uParam1 );
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_ARBOW", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_ARBOW", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_67680(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_67247( uParam0, uParam1 );
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_ASBOW", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_ASBOW", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_67843(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_67247( uParam0, uParam1 );
    }
    switch (uParam0)
    {
        case 3:
        sub_17378( "E2FA_ATBOW", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_17378( "E2FH_ATBOW", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_68204(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_68242(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    int iVar6;

    if (iParam0 == 13)
    {
        sub_68260();
        return;
    }
    if (iParam0 == 12)
    {
        if (bParam3)
        {
            sub_68306();
        }
        return;
    }
    if (sub_23176( l_U341 ))
    {
        return;
    }
    iVar6 = uParam2;
    if (NOT (iVar6 == 1))
    {
        return;
    }
    sub_68394();
    return;
}

void sub_68260()
{
    l_U384._fU32 = 0;
    return;
}

void sub_68306()
{
    l_U384._fU0 = 1;
    l_U384._fU4 = 0;
    l_U384._fU8 = 1;
    l_U384._fU12 = 0;
    return;
}

void sub_68394()
{
    l_U384._fU0 = 1;
    l_U384._fU4 = 0;
    l_U384._fU8 = 0;
    l_U384._fU12 = 0;
    l_U384._fU16 = 0;
    return;
}

void sub_68461(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;
    int I;
    boolean bVar7;

    if (g_U28807._fU56 <= 0)
    {
        sub_16719();
        return;
    }
    iVar3 = 28;
    bVar4 = false;
    uVar5 = sub_37061( uParam0 );
    if (g_U28807._fU60[uVar5] > 0)
    {
        return;
    }
    switch (uParam0)
    {
        case 6:
        iVar3 = 1;
        PRINTSTRING( "....................SWITCHING OFF AIRHOCKEY ACTIVITY BLIPS\n" );
        break;
        case 10:
        bVar4 = true;
        PRINTSTRING( "....................COMPLETED DANCING, SO CHECK NIGHTCLUB BLIPS\n" );
        break;
        case 11:
        iVar3 = 7;
        PRINTSTRING( "....................SWITCHING OFF DARTS ACTIVITY BLIPS\n" );
        break;
        case 12:
        iVar3 = 8;
        bVar4 = true;
        PRINTSTRING( "....................SWITCHING OFF DRINKING ACTIVITY BLIPS, AND CHECKING NIGHTCLUB BLIPS\n" );
        break;
        case 13:
        iVar3 = 12;
        PRINTSTRING( "....................SWITCHING OFF EATING ACTIVITY BLIPS\n" );
        break;
        case 15:
        iVar3 = 14;
        PRINTSTRING( "....................SWITCHING OFF GOLF ACTIVITY BLIPS\n" );
        break;
        case 20:
        iVar3 = 20;
        PRINTSTRING( "....................SWITCHING OFF POOL ACTIVITY BLIPS\n" );
        break;
        case 23:
        iVar3 = 24;
        PRINTSTRING( "....................SWITCHING OFF STRIP CLUB ACTIVITY BLIPS\n" );
        break;
        default:
        SCRIPT_ASSERT( "Update_Activity_Blips_On_Activity_Completion: Unknown activity ID" );
        return;
    }
    I = 0;
    for ( I = 0; I < 72; I++ )
    {
        if (l_U540[I]._fU0)
        {
            if (g_U11582[I]._fU12 == iVar3)
            {
                sub_16763( I );
            }
        }
    }
    bVar7 = false;
    if (bVar4)
    {
        if (g_U28807._fU60[5] <= 0)
        {
            bVar7 = true;
        }
        if (bVar7)
        {
            for ( I = 0; I < 72; I++ )
            {
                if (l_U540[I]._fU0)
                {
                    if (g_U11582[I]._fU12 == 18)
                    {
                        sub_16763( I );
                    }
                }
            }
        }
    }
    return;
}

void sub_69509()
{
    unknown Result;

    Result = g_U28807._fU32;
    g_U28807._fU32 = 16;
    return Result;
}

int sub_69570(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 6;
        case 1: return 7;
        case 2: return 8;
        case 14: return 9;
        case 3: return 10;
        case 4: return 11;
        case 5: return 12;
        case 6: return 13;
        case 7: return 15;
        case 8: return 17;
        case 9: return 18;
        case 10: return 20;
        case 12: return 22;
        case 13: return 23;
    }
    SCRIPT_ASSERT( "Convert_Minigame_Activity_To_Phone_Activity: Minigame activity doesn't have a phone activity ID" );
    return 24;
}

void sub_69934()
{
    int iVar2;

    iVar2 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar2 );
    if (iVar2 < 50)
    {
        sub_69972( 3, 4, 1 );
    }
    else
    {
        sub_69972( 7, 14, 1 );
    }
    return;
}

void sub_69972(unknown uParam0, int iParam1, unknown uParam2)
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
    uVar13 = sub_19126( uParam0 );
    sub_19505( uVar13, iVar5, 16383, 16383, ref uVar6 );
    sub_19849( ref uVar6, 1 );
    sub_19877( ref uVar6, 0 );
    sub_19905( ref uVar6, 2 );
    sub_19936( ref uVar6, 0 );
    return;
}

void sub_70109(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown uVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (l_U384._fU0)
    {
        l_U400 = 0;
        if (sub_23176( l_U275 ))
        {
            return;
        }
        if (IS_PLAYER_PLAYING( sub_3523() ))
        {
            if (IS_AMBIENT_SPEECH_PLAYING( sub_1473() ))
            {
                return;
            }
            STOP_PED_SPEAKING( sub_1473(), 1 );
        }
        l_U384._fU0 = 0;
        l_U384._fU4 = 1;
        l_U384._fU12 = 0;
        l_U384._fU20 = 0;
        l_U384._fU24 = 0;
        l_U384._fU28 = 0;
        return;
    }
    sub_70269( uParam0 );
    if (l_U384._fU4)
    {
        if (sub_71225())
        {
            l_U384._fU4 = 0;
            if (l_U384._fU8)
            {
                l_U384._fU20 = iVar3 + 10000;
            }
            else
            {
                l_U384._fU20 = iVar3 + 15000;
            }
            return;
        }
    }
    if (NOT (l_U384._fU20 == 0))
    {
        if (NOT sub_71225())
        {
            l_U384._fU4 = 1;
            l_U384._fU20 = 0;
            return;
        }
        if (iVar3 > l_U384._fU20)
        {
            REQUEST_ANIMS( "Gestures@Niko" );
            if (NOT (HAVE_ANIMS_LOADED( "Gestures@Niko" )))
            {
                return;
            }
            bVar4 = false;
            if (NOT l_U384._fU8)
            {
                sub_39287( "E2FCAUD" );
                sub_71696();
                if (NOT (sub_71753( l_U286, ref l_U341, l_U384._fU16 )))
                {
                    bVar4 = true;
                }
            }
            else
            {
                sub_39287( "E2FC2AU" );
                sub_71696();
                sub_74802( l_U286, ref l_U341 );
            }
            if (bVar4)
            {
                ;
            }
            l_U384._fU20 = 0;
            l_U384._fU12 = 1;
            g_U20825[l_U286]._fU900._fU44 = -1;
        }
        return;
    }
    if (sub_76819())
    {
        return;
    }
    if (l_U384._fU12)
    {
        if (g_U20825[l_U286]._fU900._fU40 >= 0)
        {
            bVar5 = false;
            if (NOT l_U384._fU24)
            {
                if ((sub_77945( ref l_U341 )) || ((sub_57813( l_U341 )) > 5))
                {
                    bVar5 = true;
                }
            }
            if (bVar5)
            {
                l_U384._fU12 = 0;
                uVar6 = g_U20825[l_U286]._fU900._fU40;
                sub_72237( l_U286, uVar6 );
                if (IS_PLAYER_PLAYING( sub_3523() ))
                {
                    STOP_PED_SPEAKING( sub_1473(), 0 );
                }
                l_U400 = 1;
            }
            return;
        }
    }
    if (l_U400)
    {
        if (sub_77945( ref l_U341 ))
        {
            if (HAVE_ANIMS_LOADED( "Gestures@Niko" ))
            {
                REMOVE_ANIMS( "Gestures@Niko" );
            }
            l_U400 = 0;
        }
    }
    return;
}

void sub_70269(unknown uParam0)
{
    sub_70278();
    sub_70560();
    sub_70938();
    return;
}

void sub_70278()
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
    float fVar11;
    float fVar12;
    float fVar13;

    if ((IS_CHAR_DEAD( sub_1473() )) || (sub_70299()))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_1473(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    GET_CHAR_COORDINATES( l_U349, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    GET_CHAR_COORDINATES( l_U350, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    fVar11 = sub_42895( uVar2, uVar5 );
    fVar12 = sub_42895( uVar2, uVar8 );
    fVar13 = fVar11;
    if (fVar11 < fVar12)
    {
        fVar13 = fVar12;
    }
    if (l_U384._fU36)
    {
        if (fVar13 < 6.00000000)
        {
            l_U384._fU36 = 0;
        }
        return;
    }
    if (fVar13 < 12.00000000)
    {
        return;
    }
    l_U384._fU36 = 1;
    sub_57783();
    return;
}

int sub_70299()
{
    if ((IS_CHAR_INJURED( l_U349 )) || (IS_CHAR_INJURED( l_U350 )))
    {
        return 1;
    }
    return 0;
}

void sub_70560()
{
    boolean bVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    if ((IS_CHAR_DEAD( sub_1473() )) || (sub_70299()))
    {
        return;
    }
    bVar2 = false;
    if (IS_CHAR_INJURED( sub_1473() ))
    {
        bVar2 = true;
    }
    if (NOT bVar2)
    {
        iVar3 = 0;
        iVar4 = 0;
        iVar5 = 0;
        GET_CHAR_HEALTH( sub_1473(), ref iVar3 );
        GET_CHAR_HEALTH( l_U349, ref iVar4 );
        GET_CHAR_HEALTH( l_U350, ref iVar5 );
        if (l_U384._fU52 == 64537)
        {
            l_U384._fU52 = iVar3;
        }
        if (l_U384._fU56 == 64537)
        {
            l_U384._fU56 = iVar4;
        }
        if (l_U384._fU60 == 64537)
        {
            l_U384._fU60 = iVar5;
        }
        if (iVar3 < l_U384._fU52)
        {
            bVar2 = true;
        }
        if (iVar4 < l_U384._fU56)
        {
            bVar2 = true;
        }
        if (iVar5 < l_U384._fU60)
        {
            bVar2 = true;
        }
        l_U384._fU52 = iVar3;
        l_U384._fU56 = iVar4;
        l_U384._fU60 = iVar5;
    }
    if (l_U384._fU40)
    {
        if (NOT bVar2)
        {
            l_U384._fU40 = 0;
        }
        return;
    }
    if (NOT bVar2)
    {
        return;
    }
    if (l_U384._fU8)
    {
        return;
    }
    l_U384._fU40 = 1;
    sub_57783();
    return;
}

void sub_70938()
{
    boolean bVar2;

    if ((IS_CHAR_DEAD( sub_1473() )) || (sub_70299()))
    {
        return;
    }
    bVar2 = false;
    if (IS_CHAR_SHOOTING( sub_1473() ))
    {
        bVar2 = true;
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_1473() ))
    {
        bVar2 = true;
    }
    if (sub_71016())
    {
        bVar2 = true;
    }
    if (sub_71076())
    {
        bVar2 = true;
    }
    if (l_U384._fU44)
    {
        if (NOT bVar2)
        {
            l_U384._fU44 = 0;
        }
        return;
    }
    if (NOT bVar2)
    {
        return;
    }
    l_U384._fU44 = 1;
    sub_57783();
    return;
}

int sub_71016()
{
    if ((IS_CHAR_SHOOTING( l_U349 )) || (IS_CHAR_SHOOTING( l_U350 )))
    {
        return 1;
    }
    return 0;
}

int sub_71076()
{
    if ((IS_CHAR_IN_MELEE_COMBAT( l_U349 )) || (IS_CHAR_IN_MELEE_COMBAT( l_U350 )))
    {
        return 1;
    }
    return 0;
}

int sub_71225()
{
    unknown uVar2;

    if ((sub_71234()) || (l_U384._fU24))
    {
        return 0;
    }
    if ((l_U362 == 0) || (l_U362 == 1))
    {
        return 0;
    }
    if (NOT l_U384._fU8)
    {
        if (((NOT (IS_CHAR_DEAD( sub_1473() ))) AND (NOT (IS_CHAR_DEAD( l_U349 )))) AND (NOT (IS_CHAR_DEAD( l_U350 ))))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1473() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar2 );
                if ((IS_CHAR_IN_CAR( l_U349, uVar2 )) AND (IS_CHAR_IN_CAR( l_U350, uVar2 )))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    return 1;
}

int sub_71234()
{
    if (((((l_U384._fU32) || (l_U384._fU36)) || (l_U384._fU40)) || (l_U384._fU44)) || (l_U384._fU48))
    {
        return 1;
    }
    return 0;
}

void sub_71696()
{
    g_U43135 = l_U349;
    g_U43136 = l_U350;
    return;
}

int sub_71753(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    int I;
    int iVar8;
    boolean bVar9;
    int iVar10;

    switch (uParam0)
    {
        case 3:
        case 7: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: Unrecognised friend ID" );
        return 0;
    }
    sub_71868();
    g_U20825[uParam0]._fU900._fU40 = -1;
    iVar5 = 0;
    iVar6 = 0;
    I = 0;
    if ((NOT g_U20825[uParam0]._fU900._fU28) AND (uParam2))
    {
        iVar6 = g_U20825[uParam0]._fU900._fU24;
        I = 0;
        for ( I = 0; I < iVar6; I++ )
        {
            if ((sub_71914( uParam0, I )) AND (NOT (sub_72154( uParam0, I ))))
            {
                sub_72078( uParam0, I );
            }
        }
    }
    sub_72736( uParam0 );
    iVar5 = 0;
    iVar6 = g_U20825[uParam0]._fU900._fU24;
    I = 0;
    for ( I = 0; I < iVar6; I++ )
    {
        if (NOT (sub_71914( uParam0, I )))
        {
            iVar5++;
        }
    }
    if ((iVar5 == 0) AND (uParam2))
    {
        for ( I = 0; I < iVar6; I++ )
        {
            if (NOT (sub_72154( uParam0, I )))
            {
                sub_72078( uParam0, I );
                iVar5++;
            }
        }
    }
    if (iVar5 == 0)
    {
        return 0;
    }
    iVar8 = 0;
    if (g_U20825[uParam0]._fU900._fU28)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar5, ref iVar8 );
    }
    bVar9 = false;
    for ( I = 0; I < iVar6; I++ )
    {
        if (NOT bVar9)
        {
            if (NOT (sub_71914( uParam0, I )))
            {
                if (iVar8 == 0)
                {
                    if (sub_72993( I ))
                    {
                        g_U20825[uParam0]._fU900._fU40 = I;
                        sub_71997( uParam0, I );
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
    iVar10 = 0;
    switch (uParam0)
    {
        case 3:
        sub_73442( uParam1, iVar10 );
        return 1;
        case 7:
        sub_74231( uParam1, iVar10 );
        return 1;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: must have forgotten to update friend ID when added speech" );
    return 0;
}

void sub_71868()
{
    int iVar2;
    int I;
    int iVar4;
    int iVar5;

    iVar2 = g_U20825[3]._fU900._fU24;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if ((sub_71914( 3, I )) || (sub_71914( 7, I )))
        {
            sub_71997( 3, I );
            sub_71997( 7, I );
        }
        else
        {
            sub_72078( 3, I );
            sub_72078( 7, I );
        }
        if ((sub_72154( 3, I )) || (sub_72154( 7, I )))
        {
            sub_72237( 3, I );
            sub_72237( 7, I );
        }
        else
        {
            sub_72318( 3, I );
            sub_72318( 7, I );
        }
    }
    iVar4 = g_U20825[3]._fU900._fU24;
    iVar5 = (g_U20825[3]._fU900._fU32 + iVar4) - 1;
    I = 0;
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if ((sub_71914( 3, I )) || (sub_71914( 7, I )))
        {
            sub_71997( 3, I );
            sub_71997( 7, I );
        }
        else
        {
            sub_72078( 3, I );
            sub_72078( 7, I );
        }
        if ((sub_72154( 3, I )) || (sub_72154( 7, I )))
        {
            sub_72237( 3, I );
            sub_72237( 7, I );
        }
        else
        {
            sub_72318( 3, I );
            sub_72318( 7, I );
        }
    }
    return;
}

void sub_71914(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    return IS_BIT_SET( g_U20825[uParam0]._fU900._fU0[iVar4], iVar5 );
}

void sub_71997(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    SET_BIT( ref g_U20825[uParam0]._fU900._fU0[iVar4], iVar5 );
    return;
}

void sub_72078(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    CLEAR_BIT( ref g_U20825[uParam0]._fU900._fU0[iVar4], iVar5 );
    return;
}

void sub_72154(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    return IS_BIT_SET( g_U20825[uParam0]._fU900._fU12[iVar4], iVar5 );
}

void sub_72237(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    SET_BIT( ref g_U20825[uParam0]._fU900._fU12[iVar4], iVar5 );
    return;
}

void sub_72318(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    CLEAR_BIT( ref g_U20825[uParam0]._fU900._fU12[iVar4], iVar5 );
    return;
}

void sub_72736(unknown uParam0)
{
    return;
}

int sub_72993(unknown uParam0)
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
        sub_73117( "E2FCAUD" );
        sub_3217( 0, sub_1473(), "LUIS", 0 );
        sub_3217( 1, g_U43135, "ARMANDO", 0 );
        sub_3217( 2, g_U43136, "HENRIQUE", 0 );
        break;
        case 10:
        case 11:
        sub_73117( "E2FC2AU" );
        sub_3217( 0, sub_1473(), "LUIS", 0 );
        sub_3217( 1, g_U43135, "ARMANDO", 0 );
        sub_3217( 2, g_U43136, "HENRIQUE", 0 );
        break;
    }
    return 1;
}

int sub_73117(unknown uParam0)
{
    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        StrCopy( ref l_U7._fU0, uParam0, 16 );
        return 1;
    }
    return 0;
}

void sub_73442(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 3;
    if (NOT (12 == g_U20825[iVar4]._fU900._fU24))
    {
        sub_4600( "FA_Armando_Speech_Generic_Conversations: inconsistent number of conversations - see Armando Flow" );
        return;
    }
    sub_73586();
    iVar5 = 0;
    iVar6 = g_U20825[iVar4]._fU900._fU40;
    iVar7 = g_U20825[iVar4]._fU900._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_72993( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Armando_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_74087( ref l_U105[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_18364( ref l_U105[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_73586()
{
    StrCopy( ref l_U105[0], "E2FC_CONV1", 16 );
    StrCopy( ref l_U105[1], "E2FC_CONV2", 16 );
    StrCopy( ref l_U105[2], "E2FC_CONV3", 16 );
    StrCopy( ref l_U105[3], "E2FC_CONV4", 16 );
    StrCopy( ref l_U105[4], "E2FC_CONV5", 16 );
    StrCopy( ref l_U105[5], "E2FC_CONV6", 16 );
    StrCopy( ref l_U105[6], "E2FC_CONV7", 16 );
    StrCopy( ref l_U105[7], "E2FC_CONV8", 16 );
    StrCopy( ref l_U105[8], "E2FC_CONV9", 16 );
    StrCopy( ref l_U105[9], "E2FC_CON10", 16 );
    StrCopy( ref l_U105[10], "E2FC_CON11", 16 );
    StrCopy( ref l_U105[11], "E2FC_CON12", 16 );
    return;
}

void sub_74087(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_74112( uParam0, ref l_U7._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_74112(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_17432( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_74231(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 7;
    if (NOT (12 == g_U20825[iVar4]._fU900._fU24))
    {
        sub_4600( "FA_Henrique_Speech_Generic_Conversations: inconsistent number of conversations - see Henrique Flow" );
        return;
    }
    sub_73586();
    iVar5 = 0;
    iVar6 = g_U20825[iVar4]._fU900._fU40;
    iVar7 = g_U20825[iVar4]._fU900._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_72993( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Henrique_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_74087( ref l_U105[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_18364( ref l_U105[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_74802(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int I;
    int iVar8;
    boolean bVar9;
    int iVar10;
    int iVar11;

    switch (uParam0)
    {
        case 3:
        case 7: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Drunk_Conversations: Unrecognised friend ID" );
        return;
    }
    g_U20825[uParam0]._fU900._fU40 = -1;
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    I = 0;
    if (NOT g_U20825[uParam0]._fU900._fU36)
    {
        iVar5 = g_U20825[uParam0]._fU900._fU24;
        iVar6 = (g_U20825[uParam0]._fU900._fU32 + iVar5) - 1;
        I = 0;
        for ( I = iVar5; I <= iVar6; I++ )
        {
            if ((sub_71914( uParam0, I )) AND (NOT (sub_72154( uParam0, I ))))
            {
                sub_72078( uParam0, I );
            }
        }
    }
    iVar4 = 0;
    iVar5 = g_U20825[uParam0]._fU900._fU24;
    iVar6 = (g_U20825[uParam0]._fU900._fU32 + iVar5) - 1;
    I = 0;
    for ( I = iVar5; I <= iVar6; I++ )
    {
        if (NOT (sub_71914( uParam0, I )))
        {
            iVar4++;
        }
    }
    if (iVar4 == 0)
    {
        for ( I = iVar5; I <= iVar6; I++ )
        {
            if (NOT (sub_72154( uParam0, I )))
            {
                sub_72078( uParam0, I );
                iVar4++;
            }
        }
    }
    if (iVar4 == 0)
    {
        return;
    }
    iVar8 = 0;
    if (g_U20825[uParam0]._fU900._fU36)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar4, ref iVar8 );
    }
    bVar9 = false;
    iVar10 = 0;
    for ( I = iVar5; I <= iVar6; I++ )
    {
        if (NOT bVar9)
        {
            if (NOT (sub_71914( uParam0, I )))
            {
                if (iVar8 == 0)
                {
                    iVar10 = I - iVar5;
                    if (sub_75358( iVar10 ))
                    {
                        g_U20825[uParam0]._fU900._fU40 = I;
                        sub_71997( uParam0, I );
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
    iVar11 = 0;
    switch (uParam0)
    {
        case 3:
        sub_75631( uParam1, iVar11 );
        return;
        case 7:
        sub_76220( uParam1, iVar11 );
        return;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Drunk_Conversations: must have forgotten to update friend ID when added speech" );
    return;
}

int sub_75358(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        sub_73117( "E2FC2AU" );
        sub_3217( 0, sub_1473(), "LUIS", 0 );
        sub_3217( 1, g_U43135, "ARMANDO", 0 );
        sub_3217( 2, g_U43136, "HENRIQUE", 0 );
        break;
    }
    return 1;
}

void sub_75631(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 3;
    if (NOT (6 == g_U20825[iVar4]._fU900._fU32))
    {
        sub_4600( "FA_Armando_Speech_Drunk_Conversations: inconsistent number of drunk conversations - see Armando Flow" );
        return;
    }
    sub_75781();
    iVar5 = 0;
    iVar6 = g_U20825[iVar4]._fU900._fU40;
    iVar6 -= g_U20825[iVar4]._fU900._fU24;
    iVar7 = g_U20825[iVar4]._fU900._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_75358( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Armando_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_74087( ref l_U105[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_18364( ref l_U105[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_75781()
{
    StrCopy( ref l_U105[0], "E2FC2_DRUN1", 16 );
    StrCopy( ref l_U105[1], "E2FC2_DRUN2", 16 );
    StrCopy( ref l_U105[2], "E2FC2_DRUN3", 16 );
    StrCopy( ref l_U105[3], "E2FC2_DRUN4", 16 );
    StrCopy( ref l_U105[4], "E2FC2_DRUN5", 16 );
    StrCopy( ref l_U105[5], "E2FC2_DRUN6", 16 );
    return;
}

void sub_76220(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 7;
    if (NOT (6 == g_U20825[iVar4]._fU900._fU32))
    {
        sub_4600( "FA_Henrique_Speech_Drunk_Conversations: inconsistent number of drunk conversations - see Henrique Flow" );
        return;
    }
    sub_75781();
    iVar5 = 0;
    iVar6 = g_U20825[iVar4]._fU900._fU40;
    iVar6 -= g_U20825[iVar4]._fU900._fU24;
    iVar7 = g_U20825[iVar4]._fU900._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_75358( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Henrique_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_74087( ref l_U105[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_18364( ref l_U105[iVar6], uParam0, 5, iVar5 );
    return;
}

int sub_76819()
{
    int iVar2;
    int iVar3;

    if ((sub_70299()) || (IS_CHAR_DEAD( sub_1473() )))
    {
        return l_U384._fU24;
    }
    if (l_U384._fU24)
    {
        if (NOT sub_71234())
        {
            if (g_U20825[l_U286]._fU900._fU44 == -1)
            {
                l_U384._fU24 = 0;
                return 0;
            }
            iVar2 = 0;
            GET_GAME_TIMER( ref iVar2 );
            if (l_U384._fU28 == 0)
            {
                l_U384._fU28 = iVar2 + 3000;
            }
            if (sub_76963())
            {
                l_U384._fU28 = 0;
            }
            if ((NOT (l_U384._fU28 == 0)) AND (iVar2 > l_U384._fU28))
            {
                l_U384._fU28 = 0;
                if (l_U384._fU8)
                {
                    sub_77051( l_U286 );
                    sub_3217( 0, sub_1473(), l_U436, 0 );
                    sub_77337( l_U286, ref l_U341 );
                }
                else
                {
                    sub_77420( l_U286 );
                    sub_3217( 0, sub_1473(), l_U436, 0 );
                    sub_77706( l_U286, ref l_U341 );
                }
                l_U384._fU24 = 0;
                return 0;
            }
            return 1;
        }
        l_U384._fU28 = 0;
        return 1;
    }
    if (sub_71234())
    {
        if (sub_23176( l_U341 ))
        {
            iVar3 = 0;
            sub_47309( ref l_U341, iVar3 );
        }
        l_U384._fU24 = 1;
        l_U384._fU28 = 0;
        return 1;
    }
    return 0;
}

void sub_76963()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_77051(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_39287( "E2FC2AU" );
        return;
    }
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Not a friend" );
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Should never reach here" );
    return;
}

void sub_77337(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 3:
        sub_75631( uParam1, iVar4 );
        break;
        case 7:
        sub_76220( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_77420(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_39287( "E2FCAUD" );
        return;
    }
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Not a friend" );
    sub_4600( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Should never reach here" );
    return;
}

void sub_77706(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 3:
        sub_73442( uParam1, iVar4 );
        break;
        case 7:
        sub_74231( uParam1, iVar4 );
        break;
    }
    return;
}

int sub_77945(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            return 0;
        }
    }
    return 1;
}

void sub_78196()
{
    float fVar2;
    boolean bVar3;
    float[72] fVar4;
    unknown[72] uVar77;
    int I;
    int iVar151;
    vector vVar152;
    float fVar155;
    float fVar156;
    int iVar157;
    boolean bVar158;

    fVar2 = 10000.00000000 + 10.00000000;
    bVar3 = true;
    if (IS_MINIGAME_IN_PROGRESS())
    {
        bVar3 = false;
    }
    l_U685++;
    if (l_U685 < 23)
    {
        return;
    }
    l_U685 = 0;
    array(ref fVar4, 72);
    array(ref uVar77, 72);
    I = 0;
    iVar151 = 0;
    vVar152 = {9999.90000000, 9999.90000000, 9999.90000000};
    if (NOT (IS_CHAR_DEAD( sub_1473() )))
    {
        GET_CHAR_COORDINATES( sub_1473(), ref vVar152.x, ref vVar152.y, ref vVar152.z );
    }
    for ( I = 0; I < 72; I++ )
    {
        fVar4[I] = fVar2;
        if (bVar3)
        {
            if (l_U540[I]._fU0)
            {
                if (g_U10978 == g_U11582[I]._fU28)
                {
                    fVar4[I] = sub_42895( vVar152, g_U11582[I]._fU0 );
                    uVar77[iVar151] = fVar4[I];
                    iVar151++;
                }
            }
        }
    }
    fVar155 = 1000.00000000;
    fVar156 = 10000.00000000;
    iVar157 = 0;
    bVar158 = iVar151 > 8;
    while (bVar158)
    {
        fVar156 = fVar155;
        iVar157 = 0;
        I = 0;
        for ( I = 0; I < iVar151; I++ )
        {
            if (uVar77[I] < fVar155)
            {
                uVar77[iVar157] = uVar77[I];
                iVar157++;
            }
        }
        fVar155 -= 50.00000000;
        if (fVar155 <= 50.00000000)
        {
            bVar158 = false;
        }
        iVar151 = iVar157;
        if (iVar151 <= 8)
        {
            bVar158 = false;
        }
    }
    for ( I = 0; I < 72; I++ )
    {
        if (l_U540[I]._fU0)
        {
            if (fVar4[I] < fVar156)
            {
                if (IS_BLIP_SHORT_RANGE( l_U540[I]._fU4 ))
                {
                    SET_BLIP_AS_SHORT_RANGE( l_U540[I]._fU4, 0 );
                }
            }
            else if (NOT (IS_BLIP_SHORT_RANGE( l_U540[I]._fU4 )))
            {
                SET_BLIP_AS_SHORT_RANGE( l_U540[I]._fU4, 1 );
            }
        }
    }
    return;
}

void sub_78962()
{
    int iVar2;
    int I;

    if (((NOT l_U368) || (l_U538)) || (l_U260))
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (IS_MINIGAME_IN_PROGRESS())
    {
        l_U745 = iVar2 + 180000;
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3523() )))
    {
        return;
    }
    if (sub_23176( l_U275 ))
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 13; I++ )
    {
        if (l_U692[I]._fU12 < iVar2)
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_1473(), l_U692[I]._fU0._fU0, l_U692[I]._fU0._fU4, l_U692[I]._fU0._fU8, 5.00000000, 5.00000000, 2.00000000, 0 ))
            {
                if ((sub_17095( l_U349 )) || (sub_17095( l_U350 )))
                {
                    sub_79211( I, 3 );
                }
            }
        }
    }
    return;
}

void sub_79211(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    boolean bVar5;
    boolean bVar6;
    int iVar7;

    uVar4 = uParam0;
    bVar5 = true;
    bVar6 = false;
    switch (uVar4)
    {
        case 0:
        case 12:
        if (g_U28807._fU60[13] > 0)
        {
            sub_79368( uParam1, ref l_U275 );
        }
        else
        {
            bVar6 = true;
        }
        break;
        case 1:
        case 4:
        if (g_U28807._fU60[4] > 0)
        {
            sub_79775( uParam1, ref l_U275 );
        }
        else
        {
            bVar6 = true;
        }
        break;
        case 2:
        if (g_U28807._fU60[10] > 0)
        {
            sub_80168( uParam1, ref l_U275 );
        }
        else
        {
            bVar6 = true;
        }
        break;
        case 3:
        case 5:
        if (g_U28807._fU60[0] > 0)
        {
            sub_80563( uParam1, ref l_U275 );
        }
        else
        {
            bVar6 = true;
        }
        break;
        case 6:
        if (l_U540[49]._fU0)
        {
            if (g_U28807._fU60[7] > 0)
            {
                sub_80985( uParam1, ref l_U275 );
            }
            else
            {
                bVar6 = true;
            }
        }
        break;
        case 7:
        case 8:
        bVar6 = true;
        break;
        case 9:
        case 10:
        if (g_U28807._fU60[5] > 0)
        {
            sub_81388( uParam1, ref l_U275 );
        }
        else
        {
            bVar6 = true;
        }
        break;
        case 11:
        if (g_U28807._fU60[5] > 0)
        {
            sub_81615( uParam1, ref l_U275 );
        }
        else
        {
            bVar6 = true;
        }
        break;
        default:
        bVar5 = false;
        break;
    }
    if (NOT bVar5)
    {
        return;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    if (bVar6)
    {
        l_U692[uParam0]._fU12 = iVar7 + 300000;
    }
    else
    {
        l_U692[uParam0]._fU12 = iVar7 + 120000;
    }
    if (NOT bVar6)
    {
        return;
    }
    l_U692[uParam0]._fU12 = iVar7 + 300000;
    if (iVar7 < l_U745)
    {
        return;
    }
    sub_81944( 3, ref l_U275 );
    l_U745 = iVar7 + 180000;
    return;
}

void sub_79368(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_79391( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_STRP1", "E2FA_STRP2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Strip_Club\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_79391(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_STRP3", "E2FA_STRP4" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Strip_Club_Drunk\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_79775(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_79798( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_DRT1", "E2FA_DRT2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Darts\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_79798(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_DRT3", "E2FA_DRT4" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Darts_Drunk\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_80168(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_80191( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_POOL1", "E2FA_POOL2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Pool\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_80191(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_POOL3", "E2FA_POOL4" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Pool_Drunk\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_80563(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_80586( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_HOCK1", "E2FA_HOCK2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_AirHockey\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_80586(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_HOCK3", "E2FA_HOCK4" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_AirHockey_Drunk\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_80985(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_81008( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_GOLF1", "E2FA_GOLF2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Golf\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_81008(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_GOLF1", "E2FA_GOLF2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Golf_Drunk\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_81388(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_SHT1", "E2FA_SHT2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Drink_Shot_Drinking_Minigame\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_81615(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_CHP1", "E2FA_CHP2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Drink_Champagne_Minigame\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_81944(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_31372( ref l_U154, "E2FA_DIFF1", "E2FA_DIFF2" );
        sub_31726( ref l_U154, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_No_To_Different_Activity\n\n" );
        return;
    }
    sub_18364( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_82164()
{
    int iVar2;
    boolean bVar3;
    unknown uVar4;
    int[72] iVar5;
    int iVar78;
    int I;
    int iVar80;
    int iVar81;
    int iVar82;
    int iVar83;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT l_U368)
    {
        l_U746 = iVar2 + 180000;
        return;
    }
    if (NOT (l_U747 == 72))
    {
        if (NOT (DOES_BLIP_EXIST( l_U540[l_U747]._fU4 )))
        {
            l_U747 = 72;
            l_U748 = 0;
        }
        else if (((IS_MINIGAME_IN_PROGRESS()) || (iVar2 > l_U748)) || (IS_BLIP_SHORT_RANGE( l_U540[l_U747]._fU4 )))
        {
            FLASH_BLIP( l_U540[l_U747]._fU4, 0 );
            l_U747 = 72;
            l_U748 = 0;
        }
    }
    if (IS_MINIGAME_IN_PROGRESS())
    {
        l_U746 = iVar2 + 180000;
        return;
    }
    if (iVar2 < l_U746)
    {
        return;
    }
    if (sub_76963())
    {
        l_U746 = iVar2 + 30000;
        return;
    }
    bVar3 = false;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1473() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1473(), ref uVar4 );
        if ((IS_CHAR_SITTING_IN_CAR( l_U349, uVar4 )) AND (IS_CHAR_SITTING_IN_CAR( l_U350, uVar4 )))
        {
            bVar3 = true;
        }
    }
    if (NOT bVar3)
    {
        l_U746 = iVar2 + 30000;
        return;
    }
    array(ref iVar5, 72);
    iVar78 = 0;
    I = 0;
    for ( I = 0; I < 72; I++ )
    {
        if (l_U540[I]._fU0)
        {
            if (NOT (IS_BLIP_SHORT_RANGE( l_U540[I]._fU4 )))
            {
                iVar5[iVar78] = I;
                iVar78++;
            }
        }
    }
    if (iVar78 == 0)
    {
        l_U746 = iVar2 + 30000;
        return;
    }
    iVar80 = 0;
    iVar81 = 0;
    iVar82 = 34;
    iVar83 = 15;
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar78, ref iVar80 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar81 );
    if (iVar81 < 50)
    {
        iVar82 = 3;
    }
    else
    {
        iVar82 = 7;
    }
    iVar83 = sub_82762( iVar5[iVar80] );
    if (iVar83 == 15)
    {
        l_U746 = iVar2 + 30000;
        return;
    }
    sub_83038( iVar82, ref l_U275, iVar83 );
    FLASH_BLIP( l_U540[iVar5[iVar80]]._fU4, 1 );
    l_U747 = iVar5[iVar80];
    l_U748 = iVar2 + 10000;
    l_U746 = iVar2 + 180000;
    return;
}

int sub_82762(int iParam0)
{
    unknown uVar3;

    uVar3 = g_U11582[iParam0]._fU12;
    switch (uVar3)
    {
        case 1: return 0;
        case 3: return 1;
        case 18:
        if (iParam0 == 36)
        {
            return 3;
        }
        return 4;
        case 7: return 5;
        case 8: return 6;
        case 12:
        if (g_U11582[iParam0]._fU16 == 16)
        {
            return 7;
        }
        if (g_U11582[iParam0]._fU16 == 21)
        {
            return 8;
        }
        return 9;
        case 14: return 10;
        case 20: return 11;
        case 24:
        if (g_U11582[iParam0]._fU16 == 32)
        {
            return 12;
        }
        return 13;
    }
    return 15;
}

void sub_83038(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 3:
        switch (uParam2)
        {
            case 0:
            sub_17378( "E2FA_YSUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 1:
            sub_17378( "E2FA_ZSUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 2:
            sub_17378( "E2FA_AASUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 3:
            sub_17378( "E2FA_ABSUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 4:
            sub_17378( "E2FA_ACSUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 5:
            sub_17378( "E2FA_ADSUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 6:
            sub_17378( "E2FA_AESUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 7:
            sub_17378( "E2FA_AFSUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 8:
            sub_17378( "E2FA_AGSUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 9:
            sub_17378( "E2FA_AHSUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 10:
            sub_17378( "E2FA_AISUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 11:
            sub_17378( "E2FA_AJSUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 12:
            sub_17378( "E2FA_AKSUG", "E2FAAU", uParam1, 8, 1 );
            break;
            case 13:
            sub_17378( "E2FA_ALSUG", "E2FAAU", uParam1, 8, 1 );
            break;
        }
        break;
        case 7:
        switch (uParam2)
        {
            case 0:
            sub_17378( "E2FH_YSUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 1:
            sub_17378( "E2FH_ZSUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 2:
            sub_17378( "E2FH_AASUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 3:
            sub_17378( "E2FH_ABSUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 4:
            sub_17378( "E2FH_ACSUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 5:
            sub_17378( "E2FH_ADSUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 6:
            sub_17378( "E2FH_AESUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 7:
            sub_17378( "E2FH_AFSUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 8:
            sub_17378( "E2FH_AGSUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 9:
            sub_17378( "E2FH_AHSUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 10:
            sub_17378( "E2FH_AISUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 11:
            sub_17378( "E2FH_AJSUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 12:
            sub_17378( "E2FH_AKSUG", "E2FHAU", uParam1, 8, 1 );
            break;
            case 13:
            sub_17378( "E2FH_ALSUG", "E2FHAU", uParam1, 8, 1 );
            break;
        }
        break;
    }
    return;
}
