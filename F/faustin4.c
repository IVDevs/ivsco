void main()
{
    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U484 = 0;
    l_U485 = 0;
    l_U486 = 0;
    l_U487 = 0;
    l_U488 = 0;
    l_U489 = 0;
    l_U490 = 1;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 1;
    l_U495 = 0;
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 0;
    l_U499 = 0;
    l_U500 = 0;
    l_U501 = 0;
    l_U502 = 0;
    l_U503 = 0;
    l_U504 = 1;
    l_U505 = 0;
    l_U506 = 0;
    l_U507 = 0;
    l_U508 = 0;
    l_U509 = 0;
    l_U510 = 0;
    l_U511 = 0;
    l_U512 = 1;
    l_U513 = 1;
    l_U514 = 0;
    l_U515 = 0;
    l_U516 = 0;
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U1294 = 90.00000000;
    l_U1295 = 5.00000000;
    l_U1296 = 25.00000000;
    l_U1297 = 15.00000000;
    l_U1298 = 2.00000000;
    l_U1299 = 4.00000000;
    l_U1300 = 0.50000000;
    l_U1301 = 120.00000000;
    l_U1302 = 0.00000000;
    l_U1303 = 0.00000000;
    l_U1305 = 1.00000000;
    l_U1306 = 0.00000000;
    l_U1307 = 1.00000000;
    l_U1308 = 10.00000000;
    l_U1309 = 30.00000000;
    l_U1311 = 1.00000000;
    l_U1313 = 1.00000000;
    l_U1314 = 5.00000000;
    l_U1315 = 1.00000000;
    l_U1316 = 1.00000000;
    l_U1321 = 0.30000000;
    l_U1322 = 0.50000000;
    l_U1323 = 50.00000000;
    l_U1572 = 0;
    l_U1573 = 0;
    l_U1574 = 0;
    l_U1575 = 0;
    l_U1576 = 1;
    l_U1577 = 0;
    l_U1578 = 0;
    l_U1579 = 0;
    l_U1580 = 0;
    l_U1581 = -1;
    l_U1582 = 0;
    l_U1583 = 0;
    l_U1584 = 0;
    l_U1585 = 0;
    l_U1586 = 0;
    l_U1587 = 0;
    l_U1588 = 0;
    l_U2431 = 0;
    l_U2432 = 0;
    l_U2440 = 1100;
    l_U2451 = {0.00000000, 1.13800000, -1.00000000};
    l_U2454 = {0.00000000, 0.00000000, 0.00000000};
    l_U2457 = {0.00000000, 0.00000000, 0.00000000};
    l_U2463 = 0;
    l_U2464 = 0;
    l_U2465 = 0;
    l_U2466 = 0;
    l_U2467 = 0;
    l_U2493 = 0;
    l_U2498 = 0;
    l_U2499 = 0;
    l_U2500 = 0;
    l_U2511 = 0;
    l_U2529 = 0;
    l_U2530 = 0;
    l_U2531 = 0;
    l_U2532 = 0;
    l_U2533 = 0;
    l_U2534 = 0;
    l_U2535 = 0;
    l_U2536 = 0;
    l_U2537 = 0;
    l_U2538 = 0;
    l_U2539 = 0;
    l_U2540 = 0;
    l_U2541 = 0;
    l_U2542 = 0;
    l_U2563 = 0;
    l_U2564 = 0;
    l_U2565 = 0;
    l_U2589 = 170756246;
    l_U2590 = 1853617247;
    l_U2591 = 1574850459;
    l_U2599 = -570033273;
    l_U2600 = -909201658;
    sub_951( "FAUST4", 0 );
    sub_951( "F4AUD", 6 );
    sub_1108();
    SET_MISSION_FLAG( 1 );
    if (g_U9893._fU24)
    {
        SET_CUTSCENE_EXTRA_ROOM_POS( 1309.60000000, -858.30000000, 9.10000000 );
        ENABLE_SCENE_STREAMING( 0 );
        START_CUTSCENE_NOW( "FAU4_A" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        FORCE_WEATHER_NOW( 0 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "FAU4_A" );
        ENABLE_SCENE_STREAMING( 1 );
    }
    sub_4686();
    l_U2436 = 0;
    l_U2463 = 1;
    while (l_U2463)
    {
        switch (l_U2436)
        {
            case 0:
            sub_5419();
            break;
            case 1:
            sub_6570();
            break;
            case 2:
            sub_9131();
            break;
            case 3:
            sub_9912();
            break;
            case 4:
            sub_47089();
            break;
            case 5:
            sub_55507();
            break;
            case -1: break;
        }
        WAIT( 0 );
        if (l_U2465 == 1)
        {
            CLEAR_HELP();
            CLEAR_WANTED_LEVEL( l_U2612 );
            sub_58171();
        }
        else if (l_U2464 == 1)
        {
            CLEAR_HELP();
            sub_69878();
        }
    }
    sub_3251();
    return;
}

void sub_951(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_987())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_987()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_1108()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1129();
        l_U2464 = 1;
        l_U2436 = -1;
        sub_3251();
    }
    return;
}

void sub_1129()
{
    sub_1138();
    return;
}

void sub_1138()
{
    int iVar2;

    iVar2 = 4;
    sub_1152( iVar2 );
    sub_2328( iVar2 );
    return;
}

void sub_1152(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1196();
        sub_1357();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1465();
            sub_1504();
        }
    }
    sub_1580();
    sub_1681();
    uVar5 = sub_1794( uParam0 );
    sub_2235( uVar5, 0 );
    return;
}

void sub_1196()
{
    sub_1210( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1310();
    }
    return;
}

void sub_1210(int iParam0)
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
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1310()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1357()
{
    sub_1366();
    return;
}

void sub_1366()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1465()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1504()
{
    sub_1513();
    return;
}

void sub_1513()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1580()
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

void sub_1681()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1703();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1703()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1794(unknown uParam0)
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
    sub_2193( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2193(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2235(int iParam0, boolean bParam1)
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

void sub_2328(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2337();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_3112();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2337()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2375( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2375( 1, g_U569[I] )) != 0)
            {
                sub_2661( I );
            }
        }
    }
    if (NOT sub_2827())
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

int sub_2375(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2661(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2746( g_U569 - 1 );
    return;
}

void sub_2746(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2827()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2375( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3112()
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

void sub_3251()
{
    int I;

    SWITCH_ROADS_BACK_TO_ORIGINAL( 1680.96000000, 711.79000000, 25.74000000, 1892.89000000, 724.94000000, 23.40000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1744.01000000, 825.19000000, 13.38000000, 1775.83000000, 848.47000000, 17.43000000 );
    RELEASE_WEATHER();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_3353();
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    ENABLE_CHASE_AUDIO( 0 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    ALLOW_EMERGENCY_SERVICES( 1 );
    ENABLE_SCENE_STREAMING( 1 );
    sub_3555();
    sub_3635();
    sub_3715();
    DESTROY_ALL_CAMS();
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    sub_3822();
    if (NOT (IS_CAR_DEAD( l_U2593 )))
    {
        FREEZE_CAR_POSITION( l_U2593, 0 );
        SET_CAR_PROOFS( l_U2593, 0, 0, 0, 0, 0 );
    }
    if (DOES_VEHICLE_EXIST( l_U2598 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2598 );
    }
    if (DOES_BLIP_EXIST( l_U2543 ))
    {
        REMOVE_BLIP( l_U2543 );
    }
    if (DOES_BLIP_EXIST( l_U2545 ))
    {
        REMOVE_BLIP( l_U2545 );
    }
    if (DOES_BLIP_EXIST( l_U2544 ))
    {
        REMOVE_BLIP( l_U2544 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2581 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2580 );
    for ( I = 0; I < l_U2582; I++ )
    {
        if ((NOT (IS_CHAR_INJURED( l_U2582[I] ))) AND (NOT (IS_CHAR_DEAD( sub_4063() ))))
        {
            CLEAR_CHAR_TASKS( l_U2582[I] );
            TASK_COMBAT( l_U2582[I], sub_4063() );
            SET_CHAR_KEEP_TASK( l_U2582[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2582[I] );
        }
    }
    for ( I = 0; I < l_U2586; I++ )
    {
        if ((NOT (IS_CHAR_INJURED( l_U2586[I] ))) AND (NOT (IS_CHAR_DEAD( sub_4063() ))))
        {
            CLEAR_CHAR_TASKS( l_U2586[I] );
            TASK_COMBAT( l_U2586[I], sub_4063() );
            SET_CHAR_KEEP_TASK( l_U2586[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2586[I] );
        }
    }
    REMOVE_COVER_POINT( l_U2552[0] );
    REMOVE_COVER_POINT( l_U2552[1] );
    REMOVE_COVER_POINT( l_U2552[2] );
    REMOVE_COVER_POINT( l_U2552[3] );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2590 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2589 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2591 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2599 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2600 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2592 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2593 );
    DONT_SUPPRESS_CAR_MODEL( l_U2599 );
    DONT_SUPPRESS_CAR_MODEL( l_U2600 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3353()
{
    if (l_U484)
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
    l_U482 = 0;
    l_U481 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3555()
{
    int I;

    if (l_U2572 != 0)
    {
        for ( I = 0; I <= (l_U2572 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2566[I] );
        }
    }
    l_U2572 = 0;
    return;
}

void sub_3635()
{
    int I;

    if (l_U2579 != 0)
    {
        for ( I = 0; I <= (l_U2579 - 1); I++ )
        {
            REMOVE_ANIMS( l_U2573[I] );
        }
    }
    l_U2579 = 0;
    return;
}

void sub_3715()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U2601[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U2601[I] );
        }
    }
    return;
}

void sub_3822()
{
    g_U965 = -1;
    return;
}

void sub_4063()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4686()
{
    STOP_PED_SPEAKING( sub_4063(), 0 );
    sub_4716( "F4AUD" );
    sub_4843( 0, sub_4063(), "Niko", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    l_U2611 = sub_4063();
    l_U2612 = sub_5010();
    while (NOT sub_5046())
    {
        WAIT( 0 );
    }
    sub_5165( "missfrancis2" );
    while (NOT sub_5217())
    {
        WAIT( 0 );
    }
    return;
}

void sub_4716(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4735();
    return;
}

void sub_4735()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_4843(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4927( "\n PED NUMBER ", uParam0 );
    sub_4967( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4927(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4967(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5010()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_5046()
{
    int I;

    if (l_U2572 != 0)
    {
        for ( I = 0; I <= (l_U2572 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U2566[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_5165(unknown uParam0)
{
    REQUEST_ANIMS( uParam0 );
    l_U2573[l_U2579] = uParam0;
    l_U2579++;
    return;
}

int sub_5217()
{
    int I;

    if (l_U2579 != 0)
    {
        for ( I = 0; I <= (l_U2579 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U2573[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_5419()
{
    sub_5428();
    if (NOT (IS_CHAR_DEAD( l_U2611 )))
    {
        SET_CHAR_COORDINATES( l_U2611, 1329.51400000, -846.77630000, 7.11670000 );
        SET_CHAR_HEADING( l_U2611, 271.30580000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    sub_6264();
    LOAD_SCENE( 1329.51400000, -846.77630000, 7.11670000 );
    sub_6483();
    DO_SCREEN_FADE_IN( 500 );
    SET_PLAYER_CONTROL_ADVANCED( sub_5010(), 1, 1, 1 );
    l_U2436++;
    return;
}

void sub_5428()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar4 = 0;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U2598 );
    if (((DOES_VEHICLE_EXIST( l_U2598 )) AND (NOT (IS_CAR_DEAD( l_U2598 )))) AND (l_U2598 != nil))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( l_U2598 )))
        {
            SET_CAR_AS_MISSION_CAR( l_U2598 );
            l_U2541 = 1;
        }
        GET_CAR_MODEL( l_U2598, ref iVar2 );
        if ((((((((((((iVar2 == -713569950) || (iVar2 == 1353720154)) || (iVar2 == 850991848)) || (iVar2 == -2137348917)) || (iVar2 == -1961627517)) || (iVar2 == 569305213)) || (iVar2 == 904750859)) || (iVar2 == 2053223216)) || (iVar2 == -1099960214)) || (iVar2 == 1677715180)) || (iVar2 == 1938952078)) || (iVar2 == 1917016601))
        {
            PRINTSTRING( "\n ---> PLAYER IN LARGE CAR <--- \n\n" );
            iVar4 = 1;
        }
        if ((LOCATE_CAR_3D( l_U2598, 1329.51400000, -846.77630000, 7.11670000, 3.00000000, 3.00000000, 3.00000000, 0 )) || ((LOCATE_CAR_3D( l_U2598, 1329.51400000, -846.77630000, 7.11670000, 15.00000000, 15.00000000, 15.00000000, 0 )) AND (iVar4 == 1)))
        {
            PRINTSTRING( "\n ---> MOVE CAR <--- \n\n" );
            if ((iVar3 != l_U2598) AND (iVar3 != nil))
            {
                if (DOES_VEHICLE_EXIST( iVar3 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref iVar3 );
                }
            }
            GET_CAR_MODEL( l_U2598, ref iVar2 );
            if (iVar4 == 1)
            {
                PRINTSTRING( "\n ---> MOVE LARGE CAR <--- \n\n" );
                CLEAR_AREA( 1340.27800000, -846.68380000, 7.21230000, 4.00000000, 1 );
                SET_CAR_HEADING( l_U2598, 359.78210000 );
                SET_CAR_COORDINATES( l_U2598, 1340.27800000, -846.68380000, 7.21230000 );
                if (NOT (IS_THIS_MODEL_A_BOAT( iVar2 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( l_U2598 );
                }
            }
            else
            {
                CLEAR_AREA( 1340.27800000, -846.68380000, 7.21230000, 3.00000000, 1 );
                SET_CAR_HEADING( l_U2598, 359.78210000 );
                SET_CAR_COORDINATES( l_U2598, 1340.27800000, -846.68380000, 7.21230000 );
                if (NOT (IS_THIS_MODEL_A_BOAT( iVar2 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( l_U2598 );
                }
            }
            if (l_U2541 == 1)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2598 );
                l_U2541 = 0;
            }
        }
        iVar3 = l_U2598;
        iVar4 = 0;
    }
    return;
}

void sub_6264()
{
    unknown uVar2;

    REQUEST_MODEL( 162883121 );
    while (NOT (HAS_MODEL_LOADED( 162883121 )))
    {
        WAIT( 0 );
    }
    CLEAR_AREA( 1328.32900000, -819.01180000, 7.24070000, 3.00000000, 1 );
    CREATE_CAR( 162883121, 1328.32900000, -819.01180000, 7.24070000, ref uVar2, 1 );
    SET_CAR_HEADING( uVar2, 270.00000000 );
    CHANGE_CAR_COLOUR( uVar2, 12, 0 );
    TURN_OFF_VEHICLE_EXTRA( uVar2, 1, 1 );
    TURN_OFF_VEHICLE_EXTRA( uVar2, 2, 1 );
    SET_CAR_ON_GROUND_PROPERLY( uVar2 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 162883121 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar2 );
    return;
}

void sub_6483()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_6570()
{
    if (l_U2531 == 0)
    {
        PRINT_NOW( "FAU4_I1", 7500, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U2543 )))
        {
            ADD_BLIP_FOR_COORD( 962.21390000, -604.44050000, 13.64740000, ref l_U2543 );
            SET_ROUTE( l_U2543, 1 );
        }
        l_U2531 = 1;
    }
    if (l_U2530 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U2611, 962.21390000, -604.44050000, 13.64740000, 150.00000000, 150.00000000, 100.00000000, 0 ))
        {
            sub_6737();
            sub_7018();
            sub_7103();
            sub_7338();
            l_U2530 = 1;
        }
    }
    if (DOES_CHAR_EXIST( l_U2581 ))
    {
        sub_7515();
    }
    if (((NOT (IS_CHAR_INJURED( l_U2581 ))) AND (l_U2542 == 0)) AND (l_U2464 == 0))
    {
        if (((LOCATE_CHAR_ANY_MEANS_3D( l_U2611, 959.50000000, -604.44050000, 13.80000000 + (2.50000000 / 2), 2.50000000, 2.50000000, 2.50000000, 1 )) AND (sub_8448( 1, 1 ))) AND (NOT (IS_CHAR_ON_FIRE( l_U2581 ))))
        {
            if (DOES_BLIP_EXIST( l_U2543 ))
            {
                REMOVE_BLIP( l_U2543 );
            }
            l_U2542 = 1;
            l_U2436++;
        }
    }
    if ((((NOT (IS_CAR_DEAD( l_U2593 ))) AND (NOT (IS_CHAR_INJURED( l_U2581 )))) AND (l_U2542 == 0)) AND (l_U2464 == 0))
    {
        if (((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U2611, l_U2593, 4.00000000, 4.00000000, 4.00000000, 0 )) AND (sub_8448( 1, 1 ))) AND (NOT (IS_CHAR_ON_FIRE( l_U2581 ))))
        {
            if (DOES_BLIP_EXIST( l_U2543 ))
            {
                REMOVE_BLIP( l_U2543 );
            }
            l_U2542 = 1;
            l_U2436++;
        }
    }
    if (((NOT (IS_CHAR_INJURED( l_U2581 ))) AND (l_U2542 == 0)) AND (l_U2464 == 0))
    {
        if (((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U2611, l_U2581, 8.00000000, 8.00000000, 4.00000000, 0 )) AND (sub_8448( 1, 1 ))) AND (NOT (IS_CHAR_ON_FIRE( l_U2581 ))))
        {
            if (DOES_BLIP_EXIST( l_U2543 ))
            {
                REMOVE_BLIP( l_U2543 );
            }
            l_U2542 = 1;
            l_U2436++;
        }
    }
    if (DOES_CHAR_EXIST( l_U2581 ))
    {
        sub_7515();
    }
    return;
}

void sub_6737()
{
    # -sub_C1FFC0-0xc214c8( 3, ref l_U2606 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U2605 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U2604 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2608 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2608, 0 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U2609 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2609, 0 );
    LOAD_COMBAT_DECISION_MAKER( 6, ref l_U2610 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2610, 0 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U2607 );
    sub_6874( l_U2589 );
    sub_6874( l_U2590 );
    while (NOT sub_5046())
    {
        WAIT( 0 );
        PRINTSTRING( "\n -----> Waiting for models to load...\n\n" );
    }
    return;
}

void sub_6874(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U2566[l_U2572] = uParam0;
    l_U2572++;
    return;
}

void sub_7018()
{
    sub_6874( l_U2599 );
    sub_6874( l_U2600 );
    while (NOT sub_5046())
    {
        WAIT( 0 );
    }
    SUPPRESS_CAR_MODEL( l_U2599 );
    SUPPRESS_CAR_MODEL( l_U2600 );
    return;
}

void sub_7103()
{
    CREATE_CHAR( 26, l_U2590, 975.33670000, -605.49350000, 13.22130000, ref l_U2581, 1 );
    SET_CHAR_HEADING( l_U2581, 304.59500000 );
    SET_CHAR_DECISION_MAKER( l_U2581, l_U2606 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2581, 1 );
    SET_CHAR_NEVER_TARGETTED( l_U2581, 1 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U2581, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U2581, 23 );
    SET_CHAR_MAX_HEALTH( l_U2581, 150 );
    SET_CHAR_HEALTH( l_U2581, 150 );
    sub_4843( 2, l_U2581, "ANNA", 0 );
    TASK_START_SCENARIO_IN_PLACE( l_U2581, "Scenario_SmokingOutsideOffice", -1082130432 );
    return;
}

void sub_7338()
{
    CLEAR_AREA( 969.04220000, -605.53630000, 13.22720000, 5.00000000, 1 );
    CREATE_CAR( l_U2600, 969.04220000, -605.55000000, 13.22700000, ref l_U2593, 1 );
    SET_CAR_HEADING( l_U2593, 89.50000000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U2593 );
    SET_CAR_ENGINE_ON( l_U2593, 1, 1 );
    if (NOT (IS_CAR_DEAD( l_U2593 )))
    {
        FREEZE_CAR_POSITION( l_U2593, 1 );
    }
    return;
}

void sub_7515()
{
    if ((DOES_CHAR_EXIST( l_U2581 )) AND (l_U2464 == 0))
    {
        if ((IS_CHAR_DEAD( l_U2581 )) || (IS_CHAR_INJURED( l_U2581 )))
        {
            sub_7584( ref l_U2613, 0 );
            PRINT_NOW( "FAU4_FAIL2", 7000, 1 );
            sub_7753( 4, "F4_GDEAD", "F4AUD", 0 );
            l_U2436 = -1;
            l_U2464 = 1;
        }
    }
    return;
}

void sub_7584(int iParam0, unknown uParam1)
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

void sub_7753(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_7797( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_7797(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
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
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

int sub_8448(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_4063() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4063(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_4063() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4063(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4063()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4063() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4063() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5010() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5010() )))
    {
        return 0;
    }
    return 1;
}

void sub_9131()
{
    SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
    SET_PED_DENSITY_MULTIPLIER( 2.00000000 );
    if (IS_CHAR_IN_ANY_CAR( l_U2611 ))
    {
        SET_PLAYER_CONTROL_ADVANCED( l_U2612, 0, 1, 1 );
    }
    SET_CHAR_PROOFS( l_U2611, 1, 1, 1, 1, 1 );
    if (NOT (IS_CHAR_INJURED( l_U2581 )))
    {
        SET_CHAR_HEALTH( l_U2581, 150 );
        SET_CHAR_PROOFS( l_U2581, 1, 1, 1, 1, 1 );
    }
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        sub_7515();
        WAIT( 0 );
    }
    if (l_U2464 == 0)
    {
        SET_PLAYER_CONTROL_ADVANCED( l_U2612, 0, 1, 1 );
        if (IS_CHAR_IN_ANY_CAR( l_U2611 ))
        {
            GET_CAR_CHAR_IS_USING( l_U2611, ref l_U2598 );
            SET_CAR_HEADING( l_U2598, 180.00000000 );
            SET_CAR_COORDINATES( l_U2598, 959.50000000, -600.00000000, 13.80000000 );
            WARP_CHAR_FROM_CAR_TO_COORD( l_U2611, 959.50000000, -604.44050000, 13.80000000 );
            if (NOT (IS_CAR_DEAD( l_U2598 )))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( l_U2598 )))
                {
                    SET_CAR_AS_MISSION_CAR( l_U2598 );
                    l_U2541 = 1;
                }
            }
        }
        if (NOT (IS_CAR_DEAD( l_U2593 )))
        {
            SET_CAR_IN_CUTSCENE( l_U2593, 1 );
        }
        CLEAR_AREA( 978.75330000, -604.98890000, 13.66110000, 8.00000000, 1 );
        CLEAR_AREA( 962.21390000, -604.44050000, 13.80000000, 5.00000000, 1 );
        CLEAR_AREA( 972.90440000, -604.80160000, 13.22360000, 15.00000000, 1 );
        SET_CAR_IN_CUTSCENE( l_U2593, 1 );
        sub_951( "F4AUD", 6 );
        START_CUTSCENE_NOW( "imFau4" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "imFau4" );
        if (NOT (IS_CHAR_INJURED( l_U2581 )))
        {
            SET_CHAR_PROOFS( l_U2581, 0, 0, 0, 0, 0 );
        }
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        SET_WANTED_MULTIPLIER( 0.10000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        l_U2436++;
    }
    else
    {
        SET_PLAYER_CONTROL_ADVANCED( l_U2612, 1, 1, 1 );
        SET_CHAR_PROOFS( l_U2611, 0, 0, 0, 0, 0 );
        if (NOT (IS_CHAR_INJURED( l_U2581 )))
        {
            SET_CHAR_PROOFS( l_U2581, 0, 0, 0, 0, 0 );
        }
        WAIT( 1100 );
        DO_SCREEN_FADE_IN_UNHACKED( 400 );
    }
    return;
}

void sub_9912()
{
    if (l_U2532 == 0)
    {
        sub_9933();
        sub_10085();
        if (NOT (IS_CAR_DEAD( l_U2593 )))
        {
            FREEZE_CAR_POSITION( l_U2593, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U2581 )))
        {
            SET_CHAR_HEADING( l_U2581, 84.49940000 );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U2581, l_U2611 );
        }
        SET_CHAR_COORDINATES( l_U2611, 972.87690000, -604.07870000, 13.22450000 );
        SET_CHAR_HEADING( l_U2611, 92.04690000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        LOAD_SCENE( 972.90440000, -604.80160000, 13.22360000 );
        if (NOT (IS_CAR_DEAD( l_U2593 )))
        {
            SET_CAR_COORDINATES( l_U2593, 969.04220000, -605.35000000, 13.22700000 );
        }
        sub_10663();
        ENABLE_CHASE_AUDIO( 1 );
        REQUEST_CAR_RECORDING( 1180 );
        while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1180 )))
        {
            WAIT( 0 );
        }
        REQUEST_CAR_RECORDING( 1181 );
        while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1181 )))
        {
            WAIT( 0 );
        }
        REQUEST_CAR_RECORDING( 1182 );
        while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1182 )))
        {
            WAIT( 0 );
        }
        REQUEST_CAR_RECORDING( 1183 );
        while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1183 )))
        {
            WAIT( 0 );
        }
        OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
        WAIT( 1000 );
        DO_SCREEN_FADE_IN_UNHACKED( 100 );
        SET_CHAR_PROOFS( l_U2611, 0, 0, 0, 0, 0 );
        SET_PLAYER_CONTROL_ADVANCED( l_U2612, 1, 1, 1 );
        if (DOES_VEHICLE_EXIST( l_U2598 ))
        {
            if (l_U2541 == 1)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2598 );
                l_U2541 = 0;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U2593 )))
        {
            PRINT_NOW( "FAU4_CMD_01", 7500, 1 );
        }
        SETTIMERB( 0 );
        l_U2439 = 8000;
        if ((NOT (DOES_BLIP_EXIST( l_U2545 ))) AND (NOT (IS_CAR_DEAD( l_U2593 ))))
        {
            ADD_BLIP_FOR_CAR( l_U2593, ref l_U2545 );
            SET_BLIP_AS_FRIENDLY( l_U2545, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U2580 )))
        {
            sub_24399( ref l_U2580 );
        }
        ALLOW_EMERGENCY_SERVICES( 0 );
        SWITCH_ROADS_OFF( 1680.96000000, 711.79000000, 25.74000000, 1892.89000000, 724.94000000, 23.40000000 );
        ADD_SCENARIO_BLOCKING_AREA( 680.96000000, 711.79000000, 25.74000000, 1892.89000000, 724.94000000, 23.40000000 );
        l_U2532 = 1;
        SETTIMERA( 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U2593 )))
    {
        if (IS_CHAR_SITTING_IN_CAR( l_U2611, l_U2593 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2580 )))
            {
                PRINTSTRING( "\n ---> Remove Biker Proofs 2 <--- \n\n" );
                SET_CHAR_PROOFS( l_U2580, 0, 0, 0, 0, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U2580, 0 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U2580, 1 );
            }
            l_U2436++;
        }
    }
    if ((IS_CHAR_IN_ANY_CAR( l_U2611 )) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U2611, 972.90440000, -604.80160000, 13.22360000, 10.00000000, 10.00000000, 10.00000000, 0 ))))
    {
        if (NOT (IS_CHAR_DEAD( l_U2580 )))
        {
            PRINTSTRING( "\n ---> Remove Biker Proofs 3 <--- \n\n" );
            SET_CHAR_PROOFS( l_U2580, 0, 0, 0, 0, 0 );
            SET_CHAR_NEVER_TARGETTED( l_U2580, 0 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U2580, 1 );
        }
        l_U2436++;
    }
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U2611, 972.90440000, -604.80160000, 13.22360000, 20.00000000, 20.00000000, 20.00000000, 0 )))
    {
        if (NOT (IS_CHAR_DEAD( l_U2580 )))
        {
            PRINTSTRING( "\n ---> Remove Biker Proofs 4 <--- \n\n" );
            SET_CHAR_PROOFS( l_U2580, 0, 0, 0, 0, 0 );
            SET_CHAR_NEVER_TARGETTED( l_U2580, 0 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U2580, 1 );
        }
        l_U2436++;
    }
    if ((TIMERA() > 10000) AND (l_U2534 == 0))
    {
        if (NOT (IS_CHAR_DEAD( l_U2580 )))
        {
            PRINTSTRING( "\n ---> Remove Biker Proofs 5 <--- \n\n" );
            SET_CHAR_PROOFS( l_U2580, 0, 0, 0, 0, 0 );
            SET_CHAR_NEVER_TARGETTED( l_U2580, 0 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U2580, 1 );
        }
        l_U2534 = 1;
    }
    if (l_U2535 == 0)
    {
        sub_25882( l_U2592, l_U2611, ref l_U2447, 1.00000000, 7.50000000, 15.00000000, 100.00000000, 1073741824, 1065353216, 1060320051, 1 );
        sub_28979( l_U2592, l_U2447 );
    }
    sub_44229();
    sub_44725();
    sub_45016();
    sub_46367();
    if (DOES_CHAR_EXIST( l_U2581 ))
    {
        sub_7515();
    }
    sub_46575();
    sub_46835();
    sub_46965();
    return;
}

void sub_9933()
{
    CLEAR_AREA( 978.75330000, -604.98890000, 13.66110000, 5.00000000, 1 );
    CREATE_CAR( l_U2599, 963.62150000, -607.49500000, 13.19750000, ref l_U2592, 1 );
    SET_CAR_HEADING( l_U2592, 14.04210000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U2592 );
    CHANGE_CAR_COLOUR( l_U2592, 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U2592, 4, 35 );
    SET_CAN_BURST_CAR_TYRES( l_U2592, 0 );
    return;
}

void sub_10085()
{
    CREATE_CHAR( 26, l_U2589, 963.62150000 + 1.00000000, -607.49500000, 13.19750000, ref l_U2580, 1 );
    SET_CHAR_HEADING( l_U2580, 356.41670000 );
    SET_CHAR_DECISION_MAKER( l_U2580, l_U2605 );
    SET_COMBAT_DECISION_MAKER( l_U2580, l_U2608 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U2580, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2580, 1 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U2580, 0 );
    SET_CHAR_NEVER_TARGETTED( l_U2580, 1 );
    ALLOW_TARGET_WHEN_INJURED( l_U2580, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U2580 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U2580, 23 );
    SET_CHAR_RELATIONSHIP( l_U2580, 5, 0 );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U2580, 10, 25000, 0 );
    SET_CHAR_ACCURACY( l_U2580, 10 );
    SET_CHAR_PROOFS( l_U2580, 1, 1, 1, 1, 1 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U2580, 0 );
    SET_CHAR_HEALTH( l_U2580, 350 );
    SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U2580, 1 );
    if ((NOT (IS_CAR_DEAD( l_U2592 ))) AND (NOT (IS_CHAR_DEAD( l_U2580 ))))
    {
        WARP_CHAR_INTO_CAR( l_U2580, l_U2592 );
    }
    sub_4843( 1, l_U2580, "JASON", 0 );
    return;
}

void sub_10663()
{
    sub_10674( 1, 1 );
    l_U1751[0] = {941.31250000, -570.94950000, 13.57040000};
    l_U546[0] = 0.01030000;
    l_U622[0] = -0.00060000;
    l_U698[0] = -0.70700000;
    l_U774[0] = 0.70710000;
    l_U1324[0] = 1101;
    l_U850[0] = 7842.00000000;
    l_U1589[0] = -1150599089;
    l_U1751[1] = {932.79060000, -565.46530000, 13.67890000};
    l_U546[1] = -0.00780000;
    l_U622[1] = 0.01850000;
    l_U698[1] = 0.70460000;
    l_U774[1] = 0.70940000;
    l_U1324[1] = 1102;
    l_U850[1] = 5891.00000000;
    l_U1589[1] = 1884962369;
    l_U1751[2] = {951.51860000, -577.99020000, 13.85420000};
    l_U546[2] = -0.02140000;
    l_U622[2] = 0.00450000;
    l_U698[2] = 0.99960000;
    l_U774[2] = 0.01860000;
    l_U1324[2] = 1103;
    l_U850[2] = 5980.00000000;
    l_U1589[2] = 1208856469;
    l_U1751[3] = {947.40900000, -570.93860000, 13.70380000};
    l_U546[3] = 0.02300000;
    l_U622[3] = -0.00320000;
    l_U698[3] = -0.70200000;
    l_U774[3] = 0.71180000;
    l_U1324[3] = 1104;
    l_U850[3] = 6637.00000000;
    l_U1589[3] = 0;
    l_U1751[4] = {956.49630000, -565.19530000, 13.71960000};
    l_U546[4] = -0.01660000;
    l_U622[4] = 0.01680000;
    l_U698[4] = 0.70260000;
    l_U774[4] = 0.71120000;
    l_U1324[4] = 1105;
    l_U850[4] = 6637.00000000;
    l_U1589[4] = -1150599089;
    l_U1751[5] = {973.11520000, -571.44290000, 13.84830000};
    l_U546[5] = 0.01910000;
    l_U622[5] = 0.00890000;
    l_U698[5] = -0.70680000;
    l_U774[5] = 0.70710000;
    l_U1324[5] = 1106;
    l_U850[5] = 6696.00000000;
    l_U1589[5] = -1883869285;
    l_U1751[6] = {966.44740000, -565.26960000, 13.73380000};
    l_U546[6] = -0.01790000;
    l_U622[6] = 0.01160000;
    l_U698[6] = 0.70410000;
    l_U774[6] = 0.70980000;
    l_U1324[6] = 1107;
    l_U850[6] = 6884.00000000;
    l_U1589[6] = -1883869285;
    l_U1751[7] = {973.47970000, -565.93830000, 13.86210000};
    l_U546[7] = -0.01430000;
    l_U622[7] = 0.00270000;
    l_U698[7] = 0.71890000;
    l_U774[7] = 0.69490000;
    l_U1324[7] = 1108;
    l_U850[7] = 7671.00000000;
    l_U1589[7] = -1883869285;
    l_U1751[8] = {987.17950000, -550.23880000, 14.28990000};
    l_U546[8] = -0.02020000;
    l_U622[8] = -0.01150000;
    l_U698[8] = 0.99960000;
    l_U774[8] = 0.01660000;
    l_U1324[8] = 1109;
    l_U850[8] = 9819.00000000;
    l_U1589[8] = -276900515;
    l_U1751[9] = {987.35240000, -559.63500000, 13.91210000};
    l_U546[9] = 0.00010000;
    l_U622[9] = 0.00140000;
    l_U698[9] = 1.00000000;
    l_U774[9] = 0.00170000;
    l_U1324[9] = 1110;
    l_U850[9] = 10146.00000000;
    l_U1589[9] = -276900515;
    l_U1751[10] = {992.55270000, -565.75430000, 13.88960000};
    l_U546[10] = -0.00300000;
    l_U622[10] = 0.00490000;
    l_U698[10] = 0.71070000;
    l_U774[10] = 0.70350000;
    l_U1324[10] = 1111;
    l_U850[10] = 10527.00000000;
    l_U1589[10] = -1883869285;
    l_U1751[11] = {1008.16000000, -566.09720000, 13.80170000};
    l_U546[11] = 0.00760000;
    l_U622[11] = 0.00620000;
    l_U698[11] = 0.70960000;
    l_U774[11] = 0.70450000;
    l_U1324[11] = 1112;
    l_U850[11] = 11020.00000000;
    l_U1589[11] = -276900515;
    l_U1751[12] = {1022.65300000, -571.50300000, 13.75300000};
    l_U546[12] = -0.00570000;
    l_U622[12] = 0.00260000;
    l_U698[12] = 0.70800000;
    l_U774[12] = -0.70610000;
    l_U1324[12] = 1113;
    l_U850[12] = 11302.00000000;
    l_U1589[12] = 1208856469;
    l_U1751[13] = {1062.79300000, -571.44670000, 13.17300000};
    l_U546[13] = -0.00490000;
    l_U622[13] = 0.00430000;
    l_U698[13] = -0.70580000;
    l_U774[13] = 0.70840000;
    l_U1324[13] = 1114;
    l_U850[13] = 13611.00000000;
    l_U1589[13] = -276900515;
    l_U1751[14] = {1134.51100000, -565.32720000, 13.47140000};
    l_U546[14] = 0.00060000;
    l_U622[14] = 0.00080000;
    l_U698[14] = 0.70520000;
    l_U774[14] = 0.70900000;
    l_U1324[14] = 1115;
    l_U850[14] = 16855.00000000;
    l_U1589[14] = 1884962369;
    l_U1751[15] = {1162.70400000, -564.92210000, 13.29340000};
    l_U546[15] = 0.00160000;
    l_U622[15] = 0.00310000;
    l_U698[15] = 0.70420000;
    l_U774[15] = 0.71000000;
    l_U1324[15] = 1116;
    l_U850[15] = 18630.00000000;
    l_U1589[15] = 974744810;
    l_U1751[16] = {1179.22700000, -565.90690000, 13.41670000};
    l_U546[16] = 0.00570000;
    l_U622[16] = -0.00430000;
    l_U698[16] = 0.70930000;
    l_U774[16] = 0.70490000;
    l_U1324[16] = 1117;
    l_U850[16] = 19677.00000000;
    l_U1589[16] = 974744810;
    l_U1751[17] = {1194.44700000, -560.43250000, 13.56060000};
    l_U546[17] = -0.00410000;
    l_U622[17] = 0.00740000;
    l_U698[17] = -0.08080000;
    l_U774[17] = 0.99670000;
    l_U1324[17] = 1118;
    l_U850[17] = 20509.00000000;
    l_U1589[17] = -1883869285;
    l_U1751[18] = {1224.99100000, -566.25150000, 13.49550000};
    l_U546[18] = 0.00360000;
    l_U622[18] = 0.02220000;
    l_U698[18] = 0.72570000;
    l_U774[18] = 0.68770000;
    l_U1324[18] = 1119;
    l_U850[18] = 21960.00000000;
    l_U1589[18] = 1208856469;
    l_U1751[19] = {1246.92300000, -567.13790000, 13.38370000};
    l_U546[19] = 0.01220000;
    l_U622[19] = -0.02240000;
    l_U698[19] = 0.67960000;
    l_U774[19] = 0.73310000;
    l_U1324[19] = 1120;
    l_U850[19] = 22986.00000000;
    l_U1589[19] = 1884962369;
    l_U1977[0] = {1212.02600000, -564.19790000, 13.46150000};
    l_U990[0] = -0.02320000;
    l_U1066[0] = 0.01320000;
    l_U1142[0] = 0.68710000;
    l_U1218[0] = 0.72610000;
    l_U1665[0] = -276900515;
    l_U1977[1] = {1245.41100000, -563.63540000, 13.00260000};
    l_U990[1] = -0.01010000;
    l_U1066[1] = 0.02610000;
    l_U1142[1] = 0.72460000;
    l_U1218[1] = 0.68860000;
    l_U1665[1] = -276900515;
    l_U1751[20] = {1323.72700000, -555.97600000, 13.86760000};
    l_U546[20] = 0.00200000;
    l_U622[20] = 0.00230000;
    l_U698[20] = 0.78140000;
    l_U774[20] = 0.62400000;
    l_U1324[20] = 1121;
    l_U850[20] = 26043.00000000;
    l_U1589[20] = 974744810;
    l_U1751[21] = {1330.77600000, -554.15110000, 13.82620000};
    l_U546[21] = -0.00100000;
    l_U622[21] = -0.00210000;
    l_U698[21] = 0.79250000;
    l_U774[21] = 0.60990000;
    l_U1324[21] = 1122;
    l_U850[21] = 27218.00000000;
    l_U1589[21] = 974744810;
    l_U1751[22] = {1349.92100000, -547.20060000, 14.02820000};
    l_U546[22] = 0.00940000;
    l_U622[22] = -0.00990000;
    l_U698[22] = 0.83860000;
    l_U774[22] = 0.54460000;
    l_U1324[22] = 1123;
    l_U850[22] = 27834.00000000;
    l_U1589[22] = 1208856469;
    l_U1751[23] = {1383.69400000, -549.22140000, 13.92320000};
    l_U546[23] = 0.01290000;
    l_U622[23] = 0.01610000;
    l_U698[23] = -0.44240000;
    l_U774[23] = 0.89660000;
    l_U1324[23] = 1124;
    l_U850[23] = 28481.00000000;
    l_U1589[23] = 974744810;
    l_U1751[24] = {1471.84700000, -501.22490000, 30.71750000};
    l_U546[24] = -0.02920000;
    l_U622[24] = 0.03500000;
    l_U698[24] = 0.79930000;
    l_U774[24] = -0.59920000;
    l_U1324[24] = 1125;
    l_U850[24] = 32356.00000000;
    l_U1589[24] = 1884962369;
    l_U1751[25] = {1437.98900000, -491.47560000, 27.21090000};
    l_U546[25] = -0.03950000;
    l_U622[25] = 0.06600000;
    l_U698[25] = 0.75470000;
    l_U774[25] = -0.65150000;
    l_U1324[25] = 1126;
    l_U850[25] = 32555.00000000;
    l_U1589[25] = 1884962369;
    l_U1751[26] = {1443.91300000, -466.22960000, 14.15560000};
    l_U546[26] = 0.01210000;
    l_U622[26] = 0.01640000;
    l_U698[26] = -0.14950000;
    l_U774[26] = 0.98860000;
    l_U1324[26] = 1127;
    l_U850[26] = 33179.00000000;
    l_U1589[26] = 1208856469;
    l_U1751[27] = {1470.17900000, -389.40740000, 14.01450000};
    l_U546[27] = 0.00160000;
    l_U622[27] = -0.00050000;
    l_U698[27] = -0.25880000;
    l_U774[27] = 0.96590000;
    l_U1324[27] = 1128;
    l_U850[27] = 36193.00000000;
    l_U1589[27] = -1883869285;
    l_U1977[2] = {1450.87100000, -377.11540000, 14.11040000};
    l_U990[2] = 0.13820000;
    l_U1066[2] = 0.00760000;
    l_U1142[2] = 0.87170000;
    l_U1218[2] = 0.47010000;
    l_U1665[2] = -67282078;
    l_U1751[28] = {1505.60000000, -327.52950000, 13.91960000};
    l_U546[28] = -0.00430000;
    l_U622[28] = -0.03110000;
    l_U698[28] = -0.25320000;
    l_U774[28] = 0.96690000;
    l_U1324[28] = 1129;
    l_U850[28] = 40208.00000000;
    l_U1589[28] = 974744810;
    l_U1751[29] = {1483.61500000, -342.48350000, 13.98880000};
    l_U546[29] = 0.02380000;
    l_U622[29] = -0.00300000;
    l_U698[29] = 0.96900000;
    l_U774[29] = 0.24580000;
    l_U1324[29] = 1130;
    l_U850[29] = 40208.00000000;
    l_U1589[29] = -825837129;
    l_U1751[30] = {1476.89900000, -256.35500000, 15.04750000};
    l_U546[30] = 0.01300000;
    l_U622[30] = 0.02180000;
    l_U698[30] = 0.40010000;
    l_U774[30] = 0.91610000;
    l_U1324[30] = 1131;
    l_U850[30] = 43886.00000000;
    l_U1589[30] = -67282078;
    l_U1751[31] = {1414.31500000, -205.53170000, 19.52240000};
    l_U546[31] = 0.02850000;
    l_U622[31] = -0.01010000;
    l_U698[31] = 0.28770000;
    l_U774[31] = 0.95720000;
    l_U1324[31] = 1132;
    l_U850[31] = 46978.00000000;
    l_U1589[31] = 974744810;
    l_U1751[32] = {1384.72300000, -152.02550000, 21.03210000};
    l_U546[32] = 0.00960000;
    l_U622[32] = 0.00650000;
    l_U698[32] = 0.96400000;
    l_U774[32] = -0.26560000;
    l_U1324[32] = 1133;
    l_U850[32] = 49703.00000000;
    l_U1589[32] = -825837129;
    l_U1751[33] = {1373.18000000, -140.97340000, 21.21080000};
    l_U546[33] = 0.02410000;
    l_U622[33] = 0.02190000;
    l_U698[33] = 0.71010000;
    l_U774[33] = 0.70340000;
    l_U1324[33] = 1134;
    l_U850[33] = 50707.00000000;
    l_U1589[33] = 1075851868;
    l_U1751[34] = {1374.49800000, -145.30850000, 20.95410000};
    l_U546[34] = 0.02030000;
    l_U622[34] = -0.01730000;
    l_U698[34] = 0.73630000;
    l_U774[34] = -0.67620000;
    l_U1324[34] = 1135;
    l_U850[34] = 52135.00000000;
    l_U1589[34] = -1883869285;
    l_U1751[35] = {1438.48500000, -11.88040000, 24.08000000};
    l_U546[35] = -0.01520000;
    l_U622[35] = -0.00970000;
    l_U698[35] = 0.93530000;
    l_U774[35] = 0.35340000;
    l_U1324[35] = 1136;
    l_U850[35] = 55625.00000000;
    l_U1589[35] = 1075851868;
    l_U1751[36] = {1437.05900000, 0.76170000, 24.65890000};
    l_U546[36] = 0.02660000;
    l_U622[36] = -0.07210000;
    l_U698[36] = 0.15410000;
    l_U774[36] = 0.98510000;
    l_U1324[36] = 1137;
    l_U850[36] = 56676.00000000;
    l_U1589[36] = -67282078;
    l_U1751[37] = {1462.29200000, 4.92060000, 23.98780000};
    l_U546[37] = -0.00260000;
    l_U622[37] = 0.00170000;
    l_U698[37] = 0.91660000;
    l_U774[37] = 0.39990000;
    l_U1324[37] = 1138;
    l_U850[37] = 57094.00000000;
    l_U1589[37] = 1208856469;
    l_U1751[38] = {1499.48800000, 15.43960000, 24.33450000};
    l_U546[38] = 0.00540000;
    l_U622[38] = -0.00440000;
    l_U698[38] = -0.39480000;
    l_U774[38] = 0.91870000;
    l_U1324[38] = 1139;
    l_U850[38] = 58263.00000000;
    l_U1589[38] = -1883869285;
    l_U1751[39] = {1516.85500000, 61.51270000, 24.14260000};
    l_U546[39] = 0.00030000;
    l_U622[39] = 0.00090000;
    l_U698[39] = 0.89750000;
    l_U774[39] = 0.44090000;
    l_U1324[39] = 1140;
    l_U850[39] = 63193.00000000;
    l_U1589[39] = 0;
    l_U1751[40] = {1520.14700000, 57.25010000, 24.14320000};
    l_U546[40] = 0.00050000;
    l_U622[40] = 0.00070000;
    l_U698[40] = 0.89760000;
    l_U774[40] = 0.44090000;
    l_U1324[40] = 1141;
    l_U850[40] = 63193.00000000;
    l_U1589[40] = 0;
    l_U1751[41] = {1484.74000000, 116.97270000, 22.29060000};
    l_U546[41] = -0.00030000;
    l_U622[41] = 0.04050000;
    l_U698[41] = 0.99920000;
    l_U774[41] = 0.00110000;
    l_U1324[41] = 1142;
    l_U850[41] = 64187.00000000;
    l_U1589[41] = 1884962369;
    l_U1751[42] = {1485.21100000, 163.98180000, 20.31710000};
    l_U546[42] = 0.00360000;
    l_U622[42] = -0.00600000;
    l_U698[42] = 1.00000000;
    l_U774[42] = 0.00300000;
    l_U1324[42] = 1143;
    l_U850[42] = 67093.00000000;
    l_U1589[42] = 1208856469;
    l_U1977[3] = {1493.31100000, 117.86630000, 22.03820000};
    l_U990[3] = -0.04100000;
    l_U1066[3] = 0.02610000;
    l_U1142[3] = 0.00400000;
    l_U1218[3] = 0.99880000;
    l_U1665[3] = 1075851868;
    l_U1977[4] = {1493.38300000, 126.02850000, 21.10070000};
    l_U990[4] = -0.03910000;
    l_U1066[4] = 0.02690000;
    l_U1142[4] = 0.02450000;
    l_U1218[4] = 0.99860000;
    l_U1665[4] = 974744810;
    l_U1977[5] = {1492.91300000, 145.07550000, 20.15170000};
    l_U990[5] = -0.00050000;
    l_U1066[5] = 0.02780000;
    l_U1142[5] = 0.01800000;
    l_U1218[5] = 0.99950000;
    l_U1665[5] = -825837129;
    l_U1751[43] = {1485.48500000, 201.84490000, 22.50910000};
    l_U546[43] = 0.00010000;
    l_U622[43] = -0.00130000;
    l_U698[43] = 1.00000000;
    l_U774[43] = -0.00060000;
    l_U1324[43] = 1144;
    l_U850[43] = 69002.00000000;
    l_U1589[43] = -67282078;
    l_U1751[44] = {1484.73900000, 223.21290000, 23.31030000};
    l_U546[44] = -0.00020000;
    l_U622[44] = -0.02300000;
    l_U698[44] = 0.99970000;
    l_U774[44] = 0.00330000;
    l_U1324[44] = 1145;
    l_U850[44] = 69987.00000000;
    l_U1589[44] = -67282078;
    l_U1977[6] = {1493.21900000, 170.72960000, 20.93530000};
    l_U990[6] = 0.07310000;
    l_U1066[6] = 0.01880000;
    l_U1142[6] = 0.02800000;
    l_U1218[6] = 0.99680000;
    l_U1665[6] = -825837129;
    l_U1751[45] = {1476.12500000, 270.30000000, 25.51490000};
    l_U546[45] = 0.00140000;
    l_U622[45] = -0.01500000;
    l_U698[45] = 0.70710000;
    l_U774[45] = -0.70690000;
    l_U1324[45] = 1146;
    l_U850[45] = 71569.00000000;
    l_U1589[45] = 1884962369;
    l_U1751[46] = {1500.00000000, 275.69970000, 25.40360000};
    l_U546[46] = -0.00360000;
    l_U622[46] = 0.00430000;
    l_U698[46] = 0.70710000;
    l_U774[46] = 0.70710000;
    l_U1324[46] = 1147;
    l_U850[46] = 72291.00000000;
    l_U1589[46] = 1075851868;
    l_U1977[7] = {1515.66900000, 200.01790000, 22.55290000};
    l_U990[7] = -0.02450000;
    l_U1066[7] = 0.01190000;
    l_U1142[7] = 0.69630000;
    l_U1218[7] = 0.71720000;
    l_U1665[7] = -1883869285;
    l_U1977[8] = {1481.82900000, 278.08330000, 25.28250000};
    l_U990[8] = 0.00190000;
    l_U1066[8] = 0.00480000;
    l_U1142[8] = 0.72280000;
    l_U1218[8] = 0.69110000;
    l_U1665[8] = 1075851868;
    l_U1751[47] = {1539.63100000, 339.43140000, 26.92530000};
    l_U546[47] = -0.00820000;
    l_U622[47] = -0.03230000;
    l_U698[47] = 0.98680000;
    l_U774[47] = -0.15860000;
    l_U1324[47] = 1148;
    l_U850[47] = 75608.00000000;
    l_U1589[47] = -825837129;
    l_U1751[48] = {1555.15000000, 312.47790000, 24.98730000};
    l_U546[48] = 0.01250000;
    l_U622[48] = -0.03030000;
    l_U698[48] = 0.95420000;
    l_U774[48] = -0.29730000;
    l_U1324[48] = 1149;
    l_U850[48] = 75726.00000000;
    l_U1589[48] = 1208856469;
    l_U1751[49] = {1604.26000000, 255.02020000, 21.66980000};
    l_U546[49] = -0.00910000;
    l_U622[49] = -0.03230000;
    l_U698[49] = -0.23520000;
    l_U774[49] = 0.97140000;
    l_U1324[49] = 1150;
    l_U850[49] = 79635.00000000;
    l_U1589[49] = 974744810;
    l_U1977[9] = {1583.21100000, 256.08580000, 21.59580000};
    l_U990[9] = 0.02740000;
    l_U1066[9] = 0.02480000;
    l_U1142[9] = -0.68390000;
    l_U1218[9] = 0.72870000;
    l_U1665[9] = 974744810;
    l_U1751[50] = {1564.81900000, 308.23580000, 10.73880000};
    l_U546[50] = 0.01600000;
    l_U622[50] = -0.03470000;
    l_U698[50] = 0.80670000;
    l_U774[50] = -0.58980000;
    l_U1324[50] = 1151;
    l_U850[50] = 83091.00000000;
    l_U1589[50] = 1884962369;
    l_U1751[51] = {1557.22100000, 310.85930000, 24.59260000};
    l_U546[51] = -0.00440000;
    l_U622[51] = -0.03550000;
    l_U698[51] = 0.94870000;
    l_U774[51] = -0.31400000;
    l_U1324[51] = 1152;
    l_U850[51] = 83668.00000000;
    l_U1589[51] = 974744810;
    l_U1751[52] = {1557.73100000, 315.39360000, 11.33510000};
    l_U546[52] = 0.02510000;
    l_U622[52] = -0.02880000;
    l_U698[52] = 0.79050000;
    l_U774[52] = -0.61130000;
    l_U1324[52] = 1153;
    l_U850[52] = 85048.00000000;
    l_U1589[52] = 1208856469;
    l_U1751[53] = {1514.95800000, 433.68100000, 28.51370000};
    l_U546[53] = -0.00190000;
    l_U622[53] = 0.00120000;
    l_U698[53] = 0.83070000;
    l_U774[53] = -0.55680000;
    l_U1324[53] = 1154;
    l_U850[53] = 90049.00000000;
    l_U1589[53] = -1883869285;
    l_U1751[54] = {1637.14000000, 423.65450000, 28.63430000};
    l_U546[54] = 0.00080000;
    l_U622[54] = -0.00040000;
    l_U698[54] = -0.67900000;
    l_U774[54] = 0.73420000;
    l_U1324[54] = 1155;
    l_U850[54] = 97274.00000000;
    l_U1589[54] = 1208856469;
    l_U1751[55] = {1651.95000000, 432.22900000, 28.65380000};
    l_U546[55] = -0.00130000;
    l_U622[55] = -0.00060000;
    l_U698[55] = -0.00040000;
    l_U774[55] = 1.00000000;
    l_U1324[55] = 1156;
    l_U850[55] = 97274.00000000;
    l_U1589[55] = 1208856469;
    l_U1751[56] = {1646.55200000, 445.18660000, 28.42410000};
    l_U546[56] = -0.00000000;
    l_U622[56] = 0.00030000;
    l_U698[56] = 1.00000000;
    l_U774[56] = -0.00040000;
    l_U1324[56] = 1157;
    l_U850[56] = 98170.00000000;
    l_U1589[56] = 974744810;
    l_U1751[57] = {1662.67500000, 464.34380000, 28.83640000};
    l_U546[57] = 0.01780000;
    l_U622[57] = 0.00890000;
    l_U698[57] = -0.65840000;
    l_U774[57] = 0.75240000;
    l_U1324[57] = 1158;
    l_U850[57] = 100590.00000000;
    l_U1589[57] = 1075851868;
    l_U1977[10] = {1665.91000000, 422.33250000, 28.30000000};
    l_U990[10] = -0.00330000;
    l_U1066[10] = 0.00540000;
    l_U1142[10] = -0.69860000;
    l_U1218[10] = 0.71550000;
    l_U1665[10] = 974744810;
    l_U1751[58] = {1645.76200000, 526.07610000, 28.59400000};
    l_U546[58] = -0.00680000;
    l_U622[58] = 0.00310000;
    l_U698[58] = 0.99670000;
    l_U774[58] = -0.08060000;
    l_U1324[58] = 1159;
    l_U850[58] = 103420.00000000;
    l_U1589[58] = 1884962369;
    l_U1977[11] = {1644.11700000, 514.68020000, 28.50880000};
    l_U990[11] = -0.02310000;
    l_U1066[11] = 0.00410000;
    l_U1142[11] = 0.99950000;
    l_U1218[11] = -0.02020000;
    l_U1665[11] = 1075851868;
    l_U1751[59] = {1646.32400000, 590.82860000, 28.80590000};
    l_U546[59] = -0.00010000;
    l_U622[59] = -0.01500000;
    l_U698[59] = 0.99990000;
    l_U774[59] = -0.00260000;
    l_U1324[59] = 1160;
    l_U850[59] = 106153.00000000;
    l_U1589[59] = -67282078;
    l_U1751[60] = {1645.29500000, 595.85310000, 29.13420000};
    l_U546[60] = -0.00040000;
    l_U622[60] = 0.01020000;
    l_U698[60] = 0.99990000;
    l_U774[60] = 0.00370000;
    l_U1324[60] = 1161;
    l_U850[60] = 107855.00000000;
    l_U1589[60] = 1208856469;
    l_U1977[12] = {1684.46400000, 548.96150000, 28.53240000};
    l_U990[12] = -0.01890000;
    l_U1066[12] = 0.01430000;
    l_U1142[12] = 0.71180000;
    l_U1218[12] = 0.70200000;
    l_U1665[12] = 1075851868;
    l_U1977[13] = {1687.01000000, 538.63490000, 28.26850000};
    l_U990[13] = 0.02190000;
    l_U1066[13] = 0.01060000;
    l_U1142[13] = -0.70610000;
    l_U1218[13] = 0.70770000;
    l_U1665[13] = 974744810;
    l_U1751[61] = {1731.24000000, 533.09810000, 28.88190000};
    l_U546[61] = 0.00480000;
    l_U622[61] = 0.01060000;
    l_U698[61] = -0.00100000;
    l_U774[61] = 0.99990000;
    l_U1324[61] = 1162;
    l_U850[61] = 110372.00000000;
    l_U1589[61] = 1884962369;
    l_U1977[14] = {1712.48000000, 538.81440000, 28.65150000};
    l_U990[14] = 0.01510000;
    l_U1066[14] = 0.01800000;
    l_U1142[14] = -0.69840000;
    l_U1218[14] = 0.71530000;
    l_U1665[14] = -825837129;
    l_U1751[62] = {1803.75000000, 583.07500000, 28.74000000};
    l_U546[62] = -0.00890000;
    l_U622[62] = 0.01030000;
    l_U698[62] = 0.70710000;
    l_U774[62] = 0.70700000;
    l_U1324[62] = 1163;
    l_U850[62] = 113859.00000000;
    l_U1589[62] = 1075851868;
    l_U1751[63] = {1730.98700000, 606.51610000, 28.67060000};
    l_U546[63] = 0.00020000;
    l_U622[63] = 0.00010000;
    l_U698[63] = 0.00040000;
    l_U774[63] = 1.00000000;
    l_U1324[63] = 1164;
    l_U850[63] = 114601.00000000;
    l_U1589[63] = 974744810;
    l_U1751[64] = {1730.02600000, 622.48320000, 28.66930000};
    l_U546[64] = 0.00810000;
    l_U622[64] = 0.01790000;
    l_U698[64] = -0.20950000;
    l_U774[64] = 0.97760000;
    l_U1324[64] = 1165;
    l_U850[64] = 114860.00000000;
    l_U1589[64] = 0;
    l_U1977[15] = {1723.22200000, 635.98310000, 28.54170000};
    l_U990[15] = -0.02260000;
    l_U1066[15] = 0.02090000;
    l_U1142[15] = 0.99890000;
    l_U1218[15] = -0.03510000;
    l_U1665[15] = -825837129;
    l_U1977[16] = {1723.40900000, 667.36810000, 27.73840000};
    l_U990[16] = -0.02380000;
    l_U1066[16] = 0.00230000;
    l_U1142[16] = 0.99930000;
    l_U1218[16] = -0.02800000;
    l_U1665[16] = -825837129;
    l_U1751[65] = {1731.46700000, 721.93790000, 25.34690000};
    l_U546[65] = 0.00670000;
    l_U622[65] = 0.00020000;
    l_U698[65] = -0.01460000;
    l_U774[65] = 0.99990000;
    l_U1324[65] = 1166;
    l_U850[65] = 120797.00000000;
    l_U1589[65] = 974744810;
    l_U1751[66] = {1716.49600000, 714.31790000, 25.52630000};
    l_U546[66] = -0.00000000;
    l_U622[66] = -0.00010000;
    l_U698[66] = -0.70710000;
    l_U774[66] = 0.70710000;
    l_U1324[66] = 1167;
    l_U850[66] = 121785.00000000;
    l_U1589[66] = 0;
    l_U1751[67] = {1740.37500000, 719.82500000, 25.42410000};
    l_U546[67] = -0.01800000;
    l_U622[67] = 0.01500000;
    l_U698[67] = 0.70690000;
    l_U774[67] = 0.70690000;
    l_U1324[67] = 1168;
    l_U850[67] = 121967.00000000;
    l_U1589[67] = 0;
    l_U1977[17] = {1754.47400000, 678.27940000, 27.28050000};
    l_U990[17] = 0.00340000;
    l_U1066[17] = 0.05220000;
    l_U1142[17] = 0.99860000;
    l_U1218[17] = -0.00420000;
    l_U1665[17] = 1075851868;
    l_U1977[18] = {1733.20000000, 700.73540000, 25.53350000};
    l_U990[18] = -0.02750000;
    l_U1066[18] = 0.03190000;
    l_U1142[18] = -0.01190000;
    l_U1218[18] = 0.99900000;
    l_U1665[18] = 1390084576;
    l_U1751[68] = {1726.94700000, 768.11320000, 23.91800000};
    l_U546[68] = 0.00010000;
    l_U622[68] = 0.04430000;
    l_U698[68] = 0.99870000;
    l_U774[68] = 0.02310000;
    l_U1324[68] = 1169;
    l_U850[68] = 123003.00000000;
    l_U1589[68] = 0;
    l_U1977[19] = {1701.78500000, 717.29620000, 25.64820000};
    l_U990[19] = -0.01100000;
    l_U1066[19] = -0.01330000;
    l_U1142[19] = 0.77550000;
    l_U1218[19] = -0.63110000;
    l_U1665[19] = 0;
    l_U1977[20] = {1735.23400000, 779.63060000, 22.26200000};
    l_U990[20] = -0.06980000;
    l_U1066[20] = 0.02660000;
    l_U1142[20] = -0.01660000;
    l_U1218[20] = 0.99710000;
    l_U1665[20] = 1390084576;
    l_U1977[21] = {1737.12800000, 801.43020000, 19.21140000};
    l_U990[21] = -0.07990000;
    l_U1066[21] = -0.02360000;
    l_U1142[21] = -0.07420000;
    l_U1218[21] = 0.99380000;
    l_U1665[21] = -825837129;
    l_U1977[22] = {1726.94100000, 802.67840000, 19.11950000};
    l_U990[22] = -0.02390000;
    l_U1066[22] = 0.06570000;
    l_U1142[22] = 0.99260000;
    l_U1218[22] = 0.09880000;
    l_U1665[22] = -825837129;
    l_U1751[69] = {1752.18400000, 867.89450000, 16.21170000};
    l_U546[69] = 0.00580000;
    l_U622[69] = -0.00090000;
    l_U698[69] = -0.14720000;
    l_U774[69] = 0.98910000;
    l_U1324[69] = 1170;
    l_U850[69] = 128453.00000000;
    l_U1589[69] = -825837129;
    l_U1751[70] = {1747.79300000, 874.23800000, 16.15890000};
    l_U546[70] = -0.00100000;
    l_U622[70] = -0.01520000;
    l_U698[70] = 0.98940000;
    l_U774[70] = 0.14420000;
    l_U1324[70] = 1171;
    l_U850[70] = 128644.00000000;
    l_U1589[70] = 974744810;
    l_U1977[23] = {1733.91800000, 833.78720000, 15.75560000};
    l_U990[23] = -0.02420000;
    l_U1066[23] = 0.00520000;
    l_U1142[23] = 0.98720000;
    l_U1218[23] = 0.15740000;
    l_U1665[23] = -825837129;
    l_U1977[24] = {1755.19000000, 814.23890000, 16.46460000};
    l_U990[24] = 0.00060000;
    l_U1066[24] = 0.01940000;
    l_U1142[24] = 0.99960000;
    l_U1218[24] = 0.02160000;
    l_U1665[24] = 1075851868;
    l_U1977[25] = {1746.27000000, 840.23270000, 15.69400000};
    l_U990[25] = 0.00770000;
    l_U1066[25] = 0.02330000;
    l_U1142[25] = -0.16010000;
    l_U1218[25] = 0.98680000;
    l_U1665[25] = -825837129;
    l_U1977[26] = {1766.00000000, 833.50000000, 16.06020000};
    l_U990[26] = 0.00000000;
    l_U1066[26] = 0.00000000;
    l_U1142[26] = -0.14350000;
    l_U1218[26] = 0.98960000;
    l_U1665[26] = l_U2599;
    l_U2203[0] = {1253.01800000, -592.01600000, 13.23720000};
    l_U930[0] = -0.00820000;
    l_U940[0] = 0.00140000;
    l_U950[0] = -0.00770000;
    l_U960[0] = 0.99990000;
    l_U1476[0] = 1172;
    l_U970[0] = 23000.00000000;
    l_U980[0] = 1.30000000;
    l_U1741[0] = -344943009;
    l_U2203[1] = {1275.51600000, -570.82840000, 13.09590000};
    l_U930[1] = 0.00890000;
    l_U940[1] = -0.00070000;
    l_U950[1] = -0.69420000;
    l_U960[1] = 0.71970000;
    l_U1476[1] = 1173;
    l_U970[1] = 24000.00000000;
    l_U980[1] = 1.30000000;
    l_U1741[1] = -344943009;
    l_U2203[2] = {1290.22800000, -575.19450000, 13.27720000};
    l_U930[2] = -0.02150000;
    l_U940[2] = -0.00280000;
    l_U950[2] = 0.71360000;
    l_U960[2] = -0.70020000;
    l_U1476[2] = 1174;
    l_U970[2] = 25000.00000000;
    l_U980[2] = 1.25000000;
    l_U1741[2] = -344943009;
    l_U2203[3] = {1508.83000000, 198.13360000, 22.58320000};
    l_U930[3] = -0.01840000;
    l_U940[3] = 0.01830000;
    l_U950[3] = 0.69250000;
    l_U960[3] = 0.72090000;
    l_U1476[3] = 1175;
    l_U970[3] = 71000.00000000;
    l_U980[3] = 1.25000000;
    l_U1741[3] = -344943009;
    l_U2203[6] = {1477.00300000, -409.06700000, 17.07630000};
    l_U930[6] = -0.06710000;
    l_U940[6] = 0.01520000;
    l_U950[6] = -0.26750000;
    l_U960[6] = 0.96110000;
    l_U1476[6] = 1184;
    l_U970[6] = 35000.00000000;
    l_U980[6] = 1.00000000;
    l_U1741[6] = -344943009;
    l_U2203[7] = {1620.19800000, 263.15510000, 22.12000000};
    l_U930[7] = -0.03250000;
    l_U940[7] = 0.00020000;
    l_U950[7] = 0.70330000;
    l_U960[7] = 0.71020000;
    l_U1476[7] = 1185;
    l_U970[7] = 75000.00000000;
    l_U980[7] = 1.00000000;
    l_U1741[7] = -344943009;
    l_U2203[8] = {1489.98800000, 384.81690000, 17.69820000};
    l_U930[8] = -0.06050000;
    l_U940[8] = 0.03730000;
    l_U950[8] = 0.70600000;
    l_U960[8] = -0.70470000;
    l_U1476[8] = 1186;
    l_U970[8] = 85000.00000000;
    l_U980[8] = 1.00000000;
    l_U1741[8] = -344943009;
    REQUEST_CAR_RECORDING( 1100 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1100 )))
    {
        WAIT( 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U2592 )))
    {
        START_PLAYBACK_RECORDED_CAR( l_U2592, 1100 );
        SET_PLAYBACK_SPEED( l_U2592, 1.00000000 );
    }
    return;
}

void sub_10674(boolean bParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    l_U504 = 1;
    l_U514 = 0;
    l_U1572 = 0;
    l_U1573 = 0;
    l_U1574 = 0;
    l_U1575 = 0;
    l_U1576 = 1;
    l_U1577 = 0;
    l_U1578 = 0;
    l_U1579 = 0;
    l_U1580 = 0;
    l_U1581 = -1;
    l_U1582 = 0;
    l_U1583 = 0;
    l_U1584 = 0;
    l_U1585 = 0;
    l_U1304 = 0.00000000;
    l_U517 = 0;
    if (IS_PLAYER_PLAYING( sub_5010() ))
    {
        GET_CHAR_COORDINATES( sub_4063(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        l_U2237._fU0 = uVar4._fU0 - 100.00000000;
        l_U2237._fU4 = uVar4._fU4 - 100.00000000;
        l_U2237._fU8 = uVar4._fU8 - 100.00000000;
        l_U2240._fU0 = uVar4._fU0 + 100.00000000;
        l_U2240._fU4 = uVar4._fU4 + 100.00000000;
        l_U2240._fU8 = uVar4._fU8 + 100.00000000;
        SWITCH_ROADS_OFF( l_U2237._fU0, l_U2237._fU4, l_U2237._fU8, l_U2240._fU0, l_U2240._fU4, l_U2240._fU8 );
        if (bParam0)
        {
            CLEAR_AREA_OF_CARS( uVar4._fU0, uVar4._fU4, uVar4._fU8, 500.00000000 );
        }
    }
    sub_11015();
    l_U516 = 0;
    if (IS_PLAYER_PLAYING( sub_5010() ))
    {
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_5010(), 1 );
        SET_CREATE_RANDOM_COPS( 0 );
    }
    sub_11193();
    return;
}

void sub_11015()
{
    ADD_SCENARIO_BLOCKING_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000, 0 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    return;
}

void sub_11193()
{
    int I;

    for ( I = 0; I < 75; I++ )
    {
        l_U2249[I] = nil;
        l_U1751[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U546[I] = 0.00000000;
        l_U622[I] = 0.00000000;
        l_U698[I] = 0.00000000;
        l_U774[I] = 0.00000000;
        l_U1324[I] = 0;
        l_U850[I] = 0.00000000;
        l_U1400[I] = 0;
        l_U1589[I] = 0;
    }
    for ( I = 0; I < 8; I++ )
    {
        l_U2325[I] = nil;
    }
    l_U1580 = 0;
    l_U1572 = 0;
    l_U1573 = 0;
    for ( I = 0; I < 75; I++ )
    {
        l_U2334[I] = nil;
        l_U1977[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U990[I] = 0.00000000;
        l_U1066[I] = 0.00000000;
        l_U1142[I] = 0.00000000;
        l_U1218[I] = 0.00000000;
        l_U1496[I] = 0;
        l_U1665[I] = 0;
    }
    for ( I = 0; I < 6; I++ )
    {
        l_U2420[I] = nil;
    }
    l_U1579 = 0;
    l_U1575 = 0;
    for ( I = 0; I < 9; I++ )
    {
        l_U2410[I] = nil;
        l_U2203[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U930[I] = 0.00000000;
        l_U940[I] = 0.00000000;
        l_U950[I] = 0.00000000;
        l_U960[I] = 0.00000000;
        l_U1476[I] = 0;
        l_U970[I] = 0.00000000;
        l_U1486[I] = 0;
        l_U1741[I] = 0;
    }
    l_U1574 = 0;
    l_U1582 = 0;
    l_U1586 = 0;
    l_U1587 = 0;
    l_U1588 = 0;
    return;
}

void sub_24399(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U484)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U482) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U483 + 500))
        {
            l_U482 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_4063() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_24567())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U483 );
            l_U482 = 1;
            l_U481 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U481) AND (NOT l_U482))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U481 = 1;
        }
    }
    else if (l_U481)
    {
        if (l_U484)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U481 = 0;
    };;;
    return;
}

int sub_24567()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_25882(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3, float fParam4, float fParam5, float fParam6, unknown uParam7, float fParam8, unknown uParam9, boolean bParam10)
{
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;

    if (l_U517 == 0)
    {
        if ((uParam2^) < fParam3)
        {
            (uParam2^) = fParam3;
            l_U517 = 1;
        }
    }
    if (fParam4 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist cannot be less than zero." );
    }
    if (fParam4 >= fParam5)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( ", fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist must be less than fIdealDist" );
    }
    if (fParam4 >= fParam6)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( ", fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist must be less than fSlowDownDist" );
    }
    if (fParam5 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist cannot be less than zero." );
    }
    if (fParam5 >= fParam6)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( ", fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist must be less than fSlowDownDist" );
    }
    if (fParam6 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fSlowDownDist cannot be less than zero." );
    }
    if (fParam8 < 0.00000000)
    {
        fParam8 = l_U1316;
    }
    fVar13 = fParam3 * uParam7;
    if (NOT (fVar13 > fParam3))
    {
        fVar13 = fParam3 + 0.10000000;
    }
    fVar18 = fParam3 * uParam9;
    fVar19 = ((fParam6 - fParam5) * 0.40000000) + fParam5;
    fVar15 = sub_27220( uParam0, uParam1 );
    if (fVar15 < 0.00000000)
    {
        fVar15 *= -1.00000000;
    }
    fVar16 = fVar15;
    if (fVar16 < fParam4)
    {
        fVar16 = fParam4;
    }
    if (fVar16 > fVar19)
    {
        fVar16 = fVar19;
    }
    fVar17 = fParam3;
    if (DOES_CHAR_EXIST( uParam1 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (sub_27547( uParam1, uParam0 ))
            {
                if (IS_CHAR_IN_ANY_CAR( uParam1 ))
                {
                    fVar17 = fVar13;
                }
                else if (fVar15 < 50.00000000)
                {
                    fVar17 = fParam3;
                }
                else
                {
                    fVar17 = fVar13;
                }
            }
            else if (fVar15 < fParam5)
            {
                if ((sub_27930( uParam0, uParam1 )) < fParam5)
                {
                    fVar14 = sub_28063( uParam0, uParam1 );
                    fVar14 += -15.00000000;
                    if (fVar14 < 0.00000000)
                    {
                        fVar14 = 0.00000000;
                    }
                    if (fVar14 > 75.00000000)
                    {
                        fVar14 = 75.00000000;
                    }
                    fVar20 = (75.00000000 - fVar14) / 75.00000000;
                }
                else
                {
                    fVar20 = 1.00000000;
                }
                fVar17 = (((((fParam5 - fParam4) - (fVar16 - fParam4)) / (fParam5 - fParam4)) * (fVar13 - fParam3)) * fVar20) + fParam3;
            }
            else if (fVar15 > fParam6)
            {
                fVar17 = fVar18;
                l_U518 = 1;
            }
            else if (l_U518)
            {
                if (fVar15 < fVar19)
                {
                    fVar17 = fParam3;
                    l_U518 = 0;
                }
                else
                {
                    fVar17 = fVar18;
                }
            }
            else
            {
                fVar17 = fParam3;
            };;;;
        }
    }
    fVar14 = fVar17 - (uParam2^);
    if (fVar14 > 0.00000000)
    {
        GET_FRAME_TIME( ref fVar14 );
        fVar21 = (l_U1321 * fParam3) * fVar14;
        fVar14 = fVar17 - (uParam2^);
        if (fVar14 > fVar21)
        {
            fVar14 = fVar21;
        }
        (uParam2^) += fVar14;
    }
    else
    {
        GET_FRAME_TIME( ref fVar14 );
        fVar21 = (l_U1322 * fParam3) * fVar14;
        fVar14 = fVar17 - (uParam2^);
        if (fVar14 < (fVar21 * -1.00000000))
        {
            fVar14 = fVar21 * -1.00000000;
        }
        (uParam2^) += fVar14;
    }
    if (bParam10)
    {
        if (NOT (IS_CHAR_INJURED( uParam1 )))
        {
            if (IS_CHAR_IN_ANY_CAR( uParam1 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar22 );
                if (DOES_VEHICLE_EXIST( uVar22 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar22 )))
                    {
                        GET_CAR_MODEL( uVar22, ref uVar23 );
                        if ((IS_THIS_MODEL_A_CAR( uVar23 )) || (IS_THIS_MODEL_A_BIKE( uVar23 )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar22 ))
                            {
                                fVar14 = fVar17;
                                if (fVar14 < fParam3)
                                {
                                    fVar14 = fParam3;
                                }
                                fVar14 -= fParam3;
                                fVar14 /= fVar13 - fParam3;
                                fVar14 *= fParam8;
                                fVar14 *= l_U1314 - l_U1315;
                                fVar14 += l_U1315;
                                l_U1313 = fVar14;
                                if (l_U1313 < l_U1315)
                                {
                                    l_U1313 = l_U1315;
                                }
                                if (l_U1313 > l_U1314)
                                {
                                    l_U1313 = l_U1314;
                                }
                                FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_5010(), l_U1313 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

float sub_27220(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

int sub_27547(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_27768( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

float sub_27768(int iParam0, int iParam1)
{
    return ((iParam0->_fU0 * iParam1->_fU0) + (iParam0->_fU4 * iParam1->_fU4)) + (iParam0->_fU8 * iParam1->_fU8);
}

void sub_27930(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown Result;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    uVar10._fU8 = 0.00000000;
    Result = VMAG( uVar10 );
    return Result;
}

void sub_28063(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown Result;
    unknown uVar17;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
        if (IS_CHAR_IN_ANY_CAR( uParam1 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar17 );
            GET_CAR_FORWARD_X( uVar17, ref uVar13._fU0 );
            GET_CAR_FORWARD_Y( uVar17, ref uVar13._fU4 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
            uVar13 = {vVar10 - vVar7};
        }
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar4._fU0, uVar4._fU4, uVar13._fU0, uVar13._fU4, ref Result );
    return Result;
}

void sub_28979(unknown uParam0, float fParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    int iVar10;

    GET_FRAME_TIME( ref fVar5 );
    fVar5 *= 1000.00000000;
    l_U2433 += fVar5;
    l_U2434 += fVar5;
    l_U2435 += fVar5;
    l_U1312 = fParam1;
    if (NOT l_U507)
    {
        if (l_U506)
        {
            sub_11015();
            l_U516 = 0;
            if (IS_PLAYER_PLAYING( sub_5010() ))
            {
                GET_CHAR_COORDINATES( sub_4063(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                CLEAR_AREA( uVar6._fU0, uVar6._fU4, uVar6._fU8, 1000.00000000, 1 );
                PRINTSTRING( "UPDATE_UBER_PLAYBACK - called massive clear area! \n" );
            }
            l_U507 = 1;
        }
    }
    else if (NOT l_U506)
    {
        sub_29230();
        l_U516 = 1;
        l_U507 = 0;
    }
    if (l_U506)
    {
        fParam1 = 1.00000000;
    }
    if (NOT l_U497)
    {
        if (l_U488)
        {
            l_U1307 = 0.00000000;
        }
        else
        {
            l_U1307 = 1.00000000;
        }
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                if (IS_PLAYER_PLAYING( sub_5010() ))
                {
                    if (sub_27547( sub_4063(), uParam0 ))
                    {
                        l_U505 = 1;
                    }
                    else
                    {
                        l_U505 = 0;
                    }
                }
                l_U1304 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                l_U1581 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                SET_PLAYBACK_SPEED( uParam0, (fParam1 * l_U1305) * l_U1307 );
                if (l_U492)
                {
                    # -NULL-0xbfc99f( uParam0, 1 );
                }
                else
                {
                    # -NULL-0xbfc99f( uParam0, 0 );
                }
                if (l_U504)
                {
                    if (l_U1310 > 1000.00000000)
                    {
                        sub_29669( uParam0, l_U1304 );
                        sub_30274( uParam0, 100.00000000 );
                        for ( I = 0; I < 3; I++ )
                        {
                            fVar5 = TO_FLOAT( I );
                            fVar5 *= 2000.00000000;
                            fVar5 += l_U1304;
                            fVar5 += 4000.00000000;
                            sub_30500( uParam0, fVar5, l_U1309 );
                        }
                        l_U1310 = 0.00000000;
                    }
                    else
                    {
                        GET_FRAME_TIME( ref fVar5 );
                        fVar5 *= 1000.00000000;
                        l_U1310 += fVar5;
                    }
                }
            }
        }
        iVar10 = 0;
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                iVar10 = 1;
            }
        }
        if ((l_U1304 == 0) || (IS_SCREEN_FADED_OUT()))
        {
            iVar10 = 1;
        }
        if ((iVar10) AND (NOT l_U519))
        {
            if (NOT l_U485)
            {
                sub_31132( uParam0, (fParam1 * l_U1305) * l_U1307 );
                sub_37052( ref uParam0 );
                sub_37616( ref uParam0 );
            }
            if (l_U490)
            {
                sub_38129( uParam0 );
            }
            if (NOT l_U485)
            {
                sub_39281( uParam0, (fParam1 * l_U1305) * l_U1307 );
            }
        }
        if (l_U499)
        {
            if (IS_PLAYER_PLAYING( sub_5010() ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_4063() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4063(), ref l_U2427 );
                    GET_CAR_COORDINATES( l_U2427, ref l_U2231._fU0, ref l_U2231._fU4, ref l_U2231._fU8 );
                    GET_VEHICLE_QUATERNION( l_U2427, ref l_U926, ref l_U927, ref l_U928, ref l_U929 );
                }
            }
            l_U499 = 0;
        }
        if (l_U498)
        {
            if (DOES_VEHICLE_EXIST( l_U2427 ))
            {
                sub_31975( l_U2428 );
                l_U2428 = l_U2427;
            }
            if (IS_VEH_DRIVEABLE( l_U2428 ))
            {
                SET_CAR_COORDINATES( l_U2428, l_U2231._fU0, l_U2231._fU4, l_U2231._fU8 );
                SET_VEHICLE_QUATERNION( l_U2428, l_U926, l_U927, l_U928, l_U929 );
            }
            l_U1303 = l_U1306;
            l_U485 = 1;
            l_U498 = 0;
        }
        if (l_U485)
        {
            while (NOT (sub_43213( ref uParam0, l_U1303 )))
            {
                WAIT( 0 );
            }
            l_U488 = 1;
        }
    }
    return;
}

void sub_29230()
{
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    sub_29253();
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    return;
}

void sub_29253()
{
    int I;

    for ( I = 0; I < 20; I++ )
    {
        if (g_U8708[I]._fU60)
        {
            SWITCH_CAR_GENERATOR( g_U9029[I], 0 );
        }
        else
        {
            SWITCH_CAR_GENERATOR( g_U9029[I], 101 );
        }
    }
    return;
}

void sub_29669(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    vVar6 = {99999.90000000, 99999.90000000, 99999.90000000};
    vVar9 = {-99999.90000000, -99999.90000000, -99999.90000000};
    sub_29718();
    for ( I = 0; I < 15; I++ )
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1 + ((TO_FLOAT( I - 1 )) * 2000), ref uVar12 );
                if (uVar12._fU0 < vVar6.x)
                {
                    vVar6.x = uVar12._fU0;
                }
                if (uVar12._fU4 < vVar6.y)
                {
                    vVar6.y = uVar12._fU4;
                }
                if (uVar12._fU8 < vVar6.z)
                {
                    vVar6.z = uVar12._fU8;
                }
                if (uVar12._fU0 > vVar9.x)
                {
                    vVar9.x = uVar12._fU0;
                }
                if (uVar12._fU4 > vVar9.y)
                {
                    vVar9.y = uVar12._fU4;
                }
                if (uVar12._fU8 > vVar9.z)
                {
                    vVar9.z = uVar12._fU8;
                }
            }
        }
    }
    vVar6 = {vVar6 + (vector( l_U1323 * -1.00000000, l_U1323 * -1.00000000, l_U1323 * -1.00000000))};
    vVar9 = {vVar9 + (vector( l_U1323, l_U1323, l_U1323))};
    l_U2243 = {vVar6};
    l_U2246 = {vVar9};
    SWITCH_ROADS_OFF( l_U2237._fU0, l_U2237._fU4, l_U2237._fU8, l_U2240._fU0, l_U2240._fU4, l_U2240._fU8 );
    SWITCH_ROADS_OFF( l_U2243._fU0, l_U2243._fU4, l_U2243._fU8, l_U2246._fU0, l_U2246._fU4, l_U2246._fU8 );
    return;
}

void sub_29718()
{
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U2243._fU0, l_U2243._fU4, l_U2243._fU8, l_U2246._fU0, l_U2246._fU4, l_U2246._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U2237._fU0, l_U2237._fU4, l_U2237._fU8, l_U2240._fU0, l_U2240._fU4, l_U2240._fU8 );
    return;
}

void sub_30274(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT l_U507)
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_PLAYER_PLAYING( sub_5010() ))
            {
                GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                GET_CHAR_COORDINATES( sub_4063(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
                uVar10 = {vVar4 - vVar7};
                if ((VMAG2( uVar10 )) > (uParam1 * uParam1))
                {
                    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                }
                else
                {
                    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_30500(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
        {
            uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
            GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1, ref vVar6 );
            GET_CAR_COORDINATES( uParam0, ref vVar9.x, ref vVar9.y, ref vVar9.z );
            uVar12 = {vVar9 - vVar6};
            fVar15 = VMAG( uVar12 );
            if (fVar15 > fParam2)
            {
                fVar15 = fParam2;
            }
            sub_30629( vVar6, fVar15 );
        }
    }
    return;
}

void sub_30629(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    boolean bVar6;
    unknown uVar7;

    if (NOT l_U507)
    {
        if (NOT (sub_30659( uParam0, uParam3, 150.00000000 )))
        {
            bVar6 = true;
            if (IS_PLAYER_PLAYING( sub_5010() ))
            {
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar7 )))
                    {
                        if (LOCATE_CAR_3D( uVar7, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, uParam3, uParam3, 0 ))
                        {
                            bVar6 = false;
                        }
                    }
                }
            }
            if (bVar6)
            {
                CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
            }
        }
    }
    return;
}

int sub_30659(vector vParam0, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT l_U507)
        {
            if (NOT l_U485)
            {
                GET_GAME_VIEWPORT_ID( ref uVar7 );
                if (CAM_IS_SPHERE_VISIBLE( uVar7, vParam0.x, vParam0.y, vParam0.z, uParam3 ))
                {
                    if (IS_PLAYER_PLAYING( sub_5010() ))
                    {
                        GET_CHAR_COORDINATES( sub_4063(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
                        uVar11 = {vVar8 - vParam0};
                        if (((VMAG( uVar11 )) - uParam3) < fParam4)
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_31132(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    unknown uVar15;
    boolean bVar16;
    boolean bVar17;
    int iVar18;

    l_U1583 = 0;
    iVar5 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 75; I++ )
        {
            if (I < l_U1582)
            {
                I = l_U1582;
            }
            if (l_U1400[I] == 0)
            {
                if (((l_U1324[I] > 0) AND (l_U1324[I] < 3000)) AND (NOT (l_U1589[I] == 0)))
                {
                    if (NOT l_U485)
                    {
                        if (l_U1304 > (l_U850[I] - (7000.00000000 * uParam1)))
                        {
                            l_U1588++;
                            l_U1400[I]++;
                        }
                        else if (iVar5 > 3)
                        {
                            return;
                        }
                        else
                        {
                            iVar5++;
                        }
                    }
                    else
                    {
                        fVar14 = l_U1304 - l_U850[I];
                        if (fVar14 >= 0.00000000)
                        {
                            if (fVar14 < (sub_31406( l_U1324[I] )))
                            {
                                l_U1588++;
                                l_U1400[I]++;
                            }
                            else
                            {
                                sub_31532( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    sub_31532( I, 1090519040 );
                }
            }
            if (l_U1400[I] == 1)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1324[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U1324[I] );
                }
                else if (l_U1589[I] == sub_32260())
                {
                    if (HAS_MODEL_LOADED( sub_32288() ))
                    {
                        l_U1400[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_32288() );
                    }
                }
                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    l_U1400[I]++;
                }
                else if (HAS_MODEL_LOADED( sub_32403() ))
                {
                    l_U1400[I]++;
                }
                else
                {
                    REQUEST_MODEL( sub_32403() );
                };;;;
            }
            if (l_U1400[I] == 2)
            {
                if (HAS_MODEL_LOADED( l_U1589[I] ))
                {
                    if (NOT (DOES_VEHICLE_EXIST( l_U2249[I] )))
                    {
                        bVar16 = false;
                        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                        {
                            bVar16 = true;
                        }
                        else if (HAS_MODEL_LOADED( sub_32403() ))
                        {
                            bVar16 = true;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_32403() );
                        }
                        if (bVar16)
                        {
                            bVar17 = false;
                            if ((NOT (sub_30659( l_U1751[I], 5.00000000, 1120403456 ))) AND (NOT (sub_32646( l_U1751[I] ))))
                            {
                                bVar17 = true;
                            }
                            if (l_U511)
                            {
                                bVar17 = true;
                            }
                            if (bVar17)
                            {
                                if (l_U504)
                                {
                                    sub_30629( l_U1751[I], l_U1309 );
                                }
                                CREATE_CAR( l_U1589[I], l_U1751[I]._fU0, l_U1751[I]._fU4, l_U1751[I]._fU8, ref l_U2249[I], 1 );
                                if (l_U1589[I] == sub_32260())
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U2249[I], 6, sub_32288(), ref uVar6 );
                                    SET_CHAR_RELATIONSHIP_GROUP( uVar6, 23 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_32288() );
                                }
                                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                {
                                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U2249[I], ref uVar6 );
                                }
                                else
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U2249[I], 4, sub_32403(), ref uVar6 );
                                    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_32403() );
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar6, 1 );
                                SET_VEHICLE_QUATERNION( l_U2249[I], l_U546[I], l_U622[I], l_U698[I], l_U774[I] );
                                FREEZE_CAR_POSITION( l_U2249[I], 1 );
                                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U2249[I], 1 );
                                SET_CAR_COLLISION( l_U2249[I], 0 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1589[I] );
                                sub_33170( l_U2249[I] );
                                GET_INTERIOR_FROM_CAR( l_U2249[I], ref iVar18 );
                                if (NOT (iVar18 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U2249[I] );
                                }
                                l_U1588--;
                                l_U1400[I]++;
                            }
                            else if (l_U1304 > l_U850[I])
                            {
                                l_U1588--;
                                sub_31532( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    REQUEST_MODEL( l_U1589[I] );
                }
            }
            if (l_U1400[I] == 3)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1324[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U1324[I] );
                }
                if (IS_VEH_DRIVEABLE( l_U2249[I] ))
                {
                    if (l_U1304 > l_U850[I])
                    {
                        if (8 > l_U1572)
                        {
                            if (IS_VEH_DRIVEABLE( uParam0 ))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                {
                                    l_U1304 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                }
                            }
                            fVar14 = l_U1304 - l_U850[I];
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1324[I] ))
                            {
                                if (fVar14 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1324[I] )))
                                {
                                    GET_CAR_COORDINATES( l_U2249[I], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                                    GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U1324[I], fVar14, ref uVar11 );
                                    if ((NOT (sub_30659( uVar8, 5.00000000, 1120403456 ))) AND (sub_30659( uVar11, 5.00000000, 1120403456 )))
                                    {
                                        sub_31532( I, 1090519040 );
                                    }
                                    else if (sub_33759( ref l_U2249[I], l_U1324[I], fVar14, 1, 0, 0 ))
                                    {
                                        SET_CAR_COLLISION( l_U2249[I], 1 );
                                        SET_PLAYBACK_SPEED( l_U2249[I], uParam1 );
                                        sub_34125( ref l_U2249[I] );
                                        l_U1572++;
                                        l_U1400[I]++;
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "Traffic car removed from processing (check A) car = " );
                                    PRINTINT( I );
                                    PRINTSTRING( "/n" );
                                    sub_31532( I, 1090519040 );
                                }
                            }
                        }
                        else
                        {
                            PRINTSTRING( "Traffic car removed from processing (check B) car = " );
                            PRINTINT( I );
                            PRINTSTRING( "/n" );
                            sub_31532( I, 1090519040 );
                        }
                    }
                    else if ((l_U505) AND (NOT l_U520))
                    {
                        PRINTSTRING( "Traffic car removed from processing (check C) car = " );
                        PRINTINT( I );
                        PRINTSTRING( "/n" );
                        sub_31532( I, 1090519040 );
                    }
                }
                else
                {
                    PRINTSTRING( "Traffic car removed from processing (check D) car = " );
                    PRINTINT( I );
                    PRINTSTRING( "/n" );
                    sub_31532( I, 1090519040 );
                }
            }
            if (l_U1400[I] == 4)
            {
                if (IS_VEH_DRIVEABLE( l_U2249[I] ))
                {
                    SET_CAR_COLLISION( l_U2249[I], 1 );
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2249[I] ))
                    {
                        GET_DRIVER_OF_CAR( l_U2249[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                if (IS_PLAYER_PLAYING( sub_5010() ))
                                {
                                    if ((((IS_CHAR_TOUCHING_VEHICLE( sub_4063(), l_U2249[I] )) AND (NOT l_U491)) AND (NOT l_U488)) AND (NOT l_U500))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( sub_4063() ))
                                        {
                                            bVar16 = false;
                                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4063(), ref uVar7 );
                                            if (NOT (sub_34983( l_U2249[I], uVar7 )))
                                            {
                                                bVar16 = true;
                                            }
                                            if (NOT bVar16)
                                            {
                                                if (sub_35145( uVar7, l_U2249[I] ))
                                                {
                                                    bVar16 = true;
                                                }
                                            }
                                            if (bVar16)
                                            {
                                                sub_35376( l_U2249[I] );
                                                l_U1400[I]++;
                                            }
                                        }
                                    }
                                    else if (sub_35145( l_U2249[I], uParam0 ))
                                    {
                                        SET_PLAYBACK_SPEED( l_U2249[I], uParam1 );
                                    }
                                    else if ((sub_35503( uParam0, l_U2249[I] )) AND (NOT l_U500))
                                    {
                                        sub_35376( l_U2249[I] );
                                        l_U1400[I]++;
                                    }
                                    else
                                    {
                                        SET_PLAYBACK_SPEED( l_U2249[I], uParam1 );
                                    }
                                    if (l_U493)
                                    {
                                        # -NULL-0xbfc99f( l_U2249[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U2249[I], 0 );
                                    }
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U2249[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U2249[I] );
                        }
                    }
                    else
                    {
                        l_U1400[I]++;
                    }
                }
                else
                {
                    l_U1400[I]++;
                }
            }
            if (l_U1400[I] == 5)
            {
                if (IS_VEH_DRIVEABLE( l_U2249[I] ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2249[I] )))
                    {
                        l_U1400[I]++;
                    }
                    else
                    {
                        GET_DRIVER_OF_CAR( l_U2249[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                SET_PLAYBACK_SPEED( l_U2249[I], uParam1 );
                                if (l_U493)
                                {
                                    # -NULL-0xbfc99f( l_U2249[I], 1 );
                                }
                                else
                                {
                                    # -NULL-0xbfc99f( l_U2249[I], 0 );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U2249[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U2249[I] );
                        }
                        if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1324[I] ))
                        {
                            if (l_U1304 > (l_U850[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1324[I] ))))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U2249[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U2249[I] );
                        }
                    }
                }
                else
                {
                    l_U1400[I]++;
                }
            }
            if (l_U1400[I] == 6)
            {
                if (NOT (IS_CAR_DEAD( l_U2249[I] )))
                {
                    GET_CAR_SPEED( l_U2249[I], ref uVar15 );
                }
                sub_36616( ref l_U2249[I] );
                l_U1572--;
                sub_31532( I, uVar15 );
            }
            l_U1583++;
        }
    }
    else
    {
        sub_36775();
    }
    return;
}

void sub_31406(unknown uParam0)
{
    unknown Result;

    REQUEST_CAR_RECORDING( uParam0 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( uParam0 )))
    {
        WAIT( 0 );
    }
    Result = GET_TOTAL_DURATION_OF_CAR_RECORDING( uParam0 );
    REMOVE_CAR_RECORDING( uParam0 );
    return Result;
}

void sub_31532(int iParam0, float fParam1)
{
    int I;
    unknown uVar5;

    if (NOT (l_U1589[iParam0] == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1589[iParam0] );
    }
    if (DOES_VEHICLE_EXIST( l_U2249[iParam0] ))
    {
        if (IS_VEH_DRIVEABLE( l_U2249[iParam0] ))
        {
            GET_DRIVER_OF_CAR( l_U2249[iParam0], ref uVar5 );
            if (DOES_CHAR_EXIST( uVar5 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 0 );
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U2249[iParam0] ))
    {
        sub_31702( l_U2249[iParam0] );
        SET_CAR_COLLISION( l_U2249[iParam0], 1 );
        FREEZE_CAR_POSITION( l_U2249[iParam0], 0 );
    }
    if (NOT l_U489)
    {
        if (DOES_CHAR_EXIST( uVar5 ))
        {
            if (NOT (IS_CHAR_INJURED( uVar5 )))
            {
                if (fParam1 < 8.00000000)
                {
                    fParam1 = 8.00000000;
                }
                SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fParam1 );
            }
            sub_31941( uVar5 );
        }
        sub_31975( l_U2249[iParam0] );
    }
    else if (DOES_CHAR_EXIST( uVar5 ))
    {
        DELETE_CHAR( ref uVar5 );
    }
    if (DOES_VEHICLE_EXIST( l_U2249[iParam0] ))
    {
        DELETE_CAR( ref l_U2249[iParam0] );
    }
    if (iParam0 >= l_U1582)
    {
        for ( I = 0; I < 75; I++ )
        {
            if (NOT (l_U1400[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 74)
                    {
                        l_U1582 = iParam0 + 1;
                    }
                }
                I = 75;
            }
        }
    }
    l_U1400[iParam0] = 99;
    return;
}

void sub_31702(unknown uParam0)
{
    float fVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_DRIVER_OF_CAR( uParam0, ref iVar4 );
        if (DOES_CHAR_EXIST( iVar4 ))
        {
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (NOT (iVar4 == sub_4063()))
                {
                    GET_CAR_SPEED( uParam0, ref fVar3 );
                    if (fVar3 < 8.00000000)
                    {
                        fVar3 = 8.00000000;
                    }
                    TASK_CAR_MISSION( iVar4, uParam0, 0, 1, fVar3, 0, 5, 5 );
                }
            }
        }
    }
    return;
}

void sub_31941(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_31975(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_32260()
{
    return 2046537925;
}

int sub_32288()
{
    return -183203150;
}

int sub_32403()
{
    return -2139064254;
}

int sub_32646(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U521[I] ))
        {
            if (LOCATE_CAR_3D( l_U521[I], uParam0._fU0, uParam0._fU4, uParam0._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_33170(unknown uParam0)
{
    unknown uVar3;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_CAR_MODEL( uParam0, ref uVar3 );
            if ((IS_THIS_MODEL_A_CAR( uVar3 )) || (IS_THIS_MODEL_A_BIKE( uVar3 )))
            {
                return SET_CAR_ON_GROUND_PROPERLY( uParam0 );
            }
        }
    }
    return 0;
}

int sub_33759(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5)
{
    unknown uVar8;

    if ((iParam1 > 0) AND (iParam1 < 3000))
    {
        if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( iParam1 )))
        {
            REQUEST_CAR_RECORDING( iParam1 );
        }
        else if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) )))
            {
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                    return 1;
                }
            }
            else if ((GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( (uParam0^) )) == iParam1)
            {
                uVar8 = FIND_TIME_POSITION_IN_RECORDING( (uParam0^) );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 - uVar8 );
                if (NOT bParam3)
                {
                    STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                    REQUEST_CAR_RECORDING( iParam1 );
                }
                return 1;
            }
            else
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                }
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_34125(unknown uParam0)
{
    int iVar3;

    if (l_U501)
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            iVar3 = sub_34159();
            if (NOT (iVar3 == -1))
            {
                l_U521[iVar3] = (uParam0^);
                if (IS_VEH_DRIVEABLE( l_U521[iVar3] ))
                {
                    ADD_BLIP_FOR_CAR( l_U521[iVar3], ref l_U530[iVar3] );
                }
            }
        }
    }
    return;
}

int sub_34159()
{
    int Result;

    for ( Result = 0; Result < 8; Result++ )
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U521[Result] )))
        {
            return Result;
        }
    }
    return -1;
}

int sub_34983(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar4, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar7, 0 );
    }
    else
    {
        return 0;
    }
    uVar4._fU8 = 0.00000000;
    uVar7._fU8 = 0.00000000;
    fVar10 = sub_27768( ref uVar4, ref uVar7 );
    if (fVar10 < 0.00000000)
    {
        return 0;
    }
    return 1;
}

int sub_35145(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_27768( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_35376(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        sub_31702( uParam0 );
        CHANGE_PLAYBACK_TO_USE_AI( uParam0 );
    }
    return;
}

int sub_35503(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;

    fVar4 = sub_35516( uParam0, uParam1 );
    fVar5 = sub_35740( uParam0, uParam1 );
    if (fVar4 > fVar5)
    {
        return 1;
    }
    return 0;
}

float sub_35516(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

float sub_35740(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (COS( fVar16 ));
}

void sub_36616(unknown uParam0)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (l_U521[I] == (uParam0^))
        {
            l_U521[I] = nil;
            if (DOES_BLIP_EXIST( l_U530[I] ))
            {
                REMOVE_BLIP( l_U530[I] );
            }
            return;
        }
    }
    return;
}

void sub_36775()
{
    int I;

    for ( I = 0; I < 75; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2249[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U2249[I] )))
            {
                SET_CAR_COLLISION( l_U2249[I], 1 );
            }
            if (IS_VEH_DRIVEABLE( l_U2249[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2249[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U2249[I] );
                }
            }
            sub_31702( l_U2249[I] );
            sub_31975( l_U2249[I] );
        }
        l_U1400[I] = 0;
    }
    for ( I = 0; I < 75; I++ )
    {
        if (NOT (l_U1589[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1589[I] );
        }
    }
    l_U1582 = 0;
    l_U1572 = 0;
    return;
}

void sub_37052(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U1582 - 5;
    iVar5 = iVar4 + 15;
    if (l_U2433 > 4000.00000000)
    {
        if (IS_PLAYER_PLAYING( sub_5010() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_4063() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4063(), ref uVar6 );
            }
            for ( I = 0; I < 75; I++ )
            {
                if (I < iVar4)
                {
                    I = iVar4;
                }
                if (DOES_VEHICLE_EXIST( l_U2249[I] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U2249[I] ))
                    {
                        if ((sub_37221( l_U2249[I], (uParam0^) )) || (sub_37221( l_U2249[I], uVar6 )))
                        {
                            SOUND_CAR_HORN( l_U2249[I], 3000 );
                            l_U2433 = 0.00000000;
                        }
                    }
                }
                if (I >= iVar5)
                {
                    I = 75;
                }
            }
        }
    }
    return;
}

int sub_37221(unknown uParam0, unknown uParam1)
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

    if ((DOES_VEHICLE_EXIST( uParam0 )) AND (DOES_VEHICLE_EXIST( uParam1 )))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (NOT (sub_34983( uParam0, uParam1 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 25.00000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 20.00000000, 0.00000000, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                    if (((LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )) || (LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))) || (LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_37616(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U1582 - 5;
    iVar5 = iVar4 + 15;
    if (IS_PLAYER_PLAYING( sub_5010() ))
    {
        switch (l_U2431)
        {
            case 0:
            if (l_U2434 > 3000.00000000)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_4063() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4063(), ref uVar6 );
                }
                for ( I = 0; I < 75; I++ )
                {
                    if (I < iVar4)
                    {
                        I = iVar4;
                    }
                    if (DOES_VEHICLE_EXIST( l_U2249[I] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U2249[I] ))
                        {
                            if ((sub_37221( l_U2249[I], (uParam0^) )) || (sub_37221( l_U2249[I], uVar6 )))
                            {
                                l_U2430 = l_U2249[I];
                                l_U2434 = 0.00000000;
                                I = 75;
                                l_U2431++;
                            }
                        }
                    }
                    if (I >= iVar5)
                    {
                        I = 75;
                    }
                }
            }
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( l_U2430 ))
            {
                if (l_U2434 < 1000.00000000)
                {
                    if (l_U2435 > 100.00000000)
                    {
                        if (NOT l_U2432)
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U2430, 2.00000000 );
                            l_U2432 = 1;
                        }
                        else
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U2430, 1.00000000 );
                            l_U2432 = 0;
                        }
                        l_U2435 = 0.00000000;
                    }
                }
                else
                {
                    SET_CAR_LIGHT_MULTIPLIER( l_U2430, 1.00000000 );
                    l_U2431 = 0;
                    l_U2434 = 0.00000000;
                    l_U2432 = 0;
                }
            }
            else
            {
                l_U2431 = 0;
                l_U2434 = 0.00000000;
                l_U2432 = 0;
            }
            break;
        }
    }
    return;
}

void sub_38129(unknown uParam0)
{
    int I;
    int iVar4;

    l_U1585 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 75; I++ )
        {
            if (I < l_U1584)
            {
                I = l_U1584;
            }
            if (l_U1496[I] == 0)
            {
                if (NOT (l_U1665[I] == 0))
                {
                    if (LOCATE_CAR_2D( uParam0, l_U1977[I]._fU0, l_U1977[I]._fU4, l_U1301, l_U1301, 0 ))
                    {
                        l_U1586++;
                        l_U1496[I]++;
                    }
                }
                else
                {
                    sub_38311( I );
                }
            }
            if (l_U1496[I] == 1)
            {
                if (6 > l_U1575)
                {
                    if (HAS_MODEL_LOADED( l_U1665[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U2334[I] )))
                        {
                            if (((NOT (sub_30659( l_U1977[I], 5.00000000, 1120403456 ))) || (l_U485)) || (l_U511))
                            {
                                if (l_U504)
                                {
                                    sub_30629( l_U1977[I], l_U1309 );
                                }
                                CREATE_CAR( l_U1665[I], l_U1977[I]._fU0, l_U1977[I]._fU4, l_U1977[I]._fU8, ref l_U2334[I], 1 );
                                SET_VEHICLE_QUATERNION( l_U2334[I], l_U990[I], l_U1066[I], l_U1142[I], l_U1218[I] );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1665[I] );
                                if (IS_CAR_MODEL( l_U2334[I], sub_32260() ))
                                {
                                    SWITCH_CAR_SIREN( l_U2334[I], 1 );
                                }
                                if (IS_CAR_MODEL( l_U2334[I], sub_38754() ))
                                {
                                    CHANGE_CAR_COLOUR( l_U2334[I], 0, 0 );
                                }
                                GET_INTERIOR_FROM_CAR( l_U2334[I], ref iVar4 );
                                if (NOT (iVar4 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U2334[I] );
                                }
                                l_U1586--;
                                l_U1575++;
                                l_U1496[I]++;
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U1665[I] );
                    }
                }
            }
            if (l_U1496[I] == 2)
            {
                if (NOT (sub_35145( l_U2334[I], uParam0 )))
                {
                    if (NOT l_U489)
                    {
                        sub_31975( l_U2334[I] );
                    }
                    else
                    {
                        DELETE_CAR( ref l_U2334[I] );
                    }
                    l_U1575--;
                    sub_38311( I );
                }
            }
            l_U1585++;
            if (l_U1585 >= 15)
            {
                return;
            }
        }
    }
    else
    {
        sub_39060();
    }
    return;
}

void sub_38311(int iParam0)
{
    int I;

    if (iParam0 >= l_U1584)
    {
        for ( I = 0; I < 75; I++ )
        {
            if (NOT (l_U1496[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 74)
                    {
                        l_U1584 = iParam0 + 1;
                    }
                }
                I = 75;
            }
        }
    }
    l_U1496[iParam0] = 99;
    return;
}

int sub_38754()
{
    return 1264341792;
}

void sub_39060()
{
    int I;

    for ( I = 0; I < 75; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2334[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U2334[I] )))
            {
                SET_CAR_COLLISION( l_U2334[I], 1 );
            }
            sub_31975( l_U2334[I] );
        }
    }
    for ( I = 0; I < 75; I++ )
    {
        if (NOT (l_U1665[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1665[I] );
        }
    }
    l_U1584 = 0;
    l_U1575 = 0;
    return;
}

void sub_39281(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;
    float fVar14;
    boolean bVar15;
    int iVar16;
    int iVar17;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 9; I++ )
        {
            if (((l_U1476[I] > 0) AND (l_U1476[I] < 3000)) AND (NOT (l_U1741[I] == 0)))
            {
                if (l_U1486[I] == 0)
                {
                    if (NOT l_U485)
                    {
                        if (l_U1304 > (l_U970[I] - (7000.00000000 * uParam1)))
                        {
                            l_U1486[I]++;
                            l_U1587++;
                        }
                    }
                    else
                    {
                        fVar13 = l_U1304 - l_U970[I];
                        fVar13 *= l_U980[I];
                        if (fVar13 >= 0.00000000)
                        {
                            if (fVar13 < (sub_31406( l_U1476[I] )))
                            {
                                l_U1486[I]++;
                                l_U1587++;
                            }
                            else
                            {
                                l_U1486[I] = 99;
                            }
                        }
                    }
                }
                if (l_U1486[I] == 1)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1476[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U1476[I] );
                    }
                    else if (l_U1741[I] == sub_32260())
                    {
                        if (HAS_MODEL_LOADED( sub_32288() ))
                        {
                            l_U1486[I]++;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_32288() );
                        }
                    }
                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                    {
                        l_U1486[I]++;
                    }
                    else if (HAS_MODEL_LOADED( sub_32403() ))
                    {
                        l_U1486[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_32403() );
                    };;;;
                }
                if (l_U1486[I] == 2)
                {
                    if (HAS_MODEL_LOADED( l_U1741[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U2410[I] )))
                        {
                            bVar15 = false;
                            if (l_U1741[I] == sub_32260())
                            {
                                if (HAS_MODEL_LOADED( sub_32288() ))
                                {
                                    bVar15 = true;
                                }
                                else
                                {
                                    REQUEST_MODEL( sub_32288() );
                                }
                            }
                            else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                            {
                                bVar15 = true;
                            }
                            else if (HAS_MODEL_LOADED( sub_32403() ))
                            {
                                bVar15 = true;
                            }
                            else
                            {
                                REQUEST_MODEL( sub_32403() );
                            };;;
                            if (bVar15)
                            {
                                if ((NOT (sub_30659( l_U2203[I], 5.00000000, 1120403456 ))) || (l_U511))
                                {
                                    CREATE_CAR( l_U1741[I], l_U2203[I]._fU0, l_U2203[I]._fU4, l_U2203[I]._fU8, ref l_U2410[I], 1 );
                                    if (l_U1741[I] == sub_32260())
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U2410[I], 6, sub_32288(), ref uVar5 );
                                        SET_CHAR_RELATIONSHIP_GROUP( uVar5, 23 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_32288() );
                                    }
                                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                    {
                                        CREATE_RANDOM_CHAR_AS_DRIVER( l_U2410[I], ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                    }
                                    else
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U2410[I], 26, sub_32403(), ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_32403() );
                                    }
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 1 );
                                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( uVar5, 1 );
                                    SET_CHAR_SUFFERS_CRITICAL_HITS( uVar5, 0 );
                                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( uVar5, 0 );
                                    sub_31941( uVar5 );
                                    SET_VEHICLE_QUATERNION( l_U2410[I], l_U930[I], l_U940[I], l_U950[I], l_U960[I] );
                                    FREEZE_CAR_POSITION( l_U2410[I], 1 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1741[I] );
                                    sub_33170( l_U2410[I] );
                                    GET_INTERIOR_FROM_CAR( l_U2410[I], ref iVar16 );
                                    if (NOT (iVar16 == nil))
                                    {
                                        # -NULL-0xbfc5b5( l_U2410[I] );
                                    }
                                    l_U1486[I]++;
                                    l_U1587--;
                                }
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U1741[I] );
                    }
                }
                if (l_U1486[I] == 3)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1476[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U1476[I] );
                    }
                    if (IS_VEH_DRIVEABLE( l_U2410[I] ))
                    {
                        if (l_U1304 > l_U970[I])
                        {
                            if (4 > l_U1574)
                            {
                                if (IS_VEH_DRIVEABLE( uParam0 ))
                                {
                                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                    {
                                        l_U1304 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                    }
                                }
                                fVar13 = l_U1304 - l_U970[I];
                                fVar13 *= l_U980[I];
                                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1476[I] ))
                                {
                                    if (fVar13 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1476[I] )))
                                    {
                                        GET_CAR_COORDINATES( l_U2410[I], ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                        GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U1476[I], fVar13, ref uVar10 );
                                        if (((NOT (sub_30659( uVar7, 5.00000000, 1120403456 ))) AND (sub_30659( uVar10, 5.00000000, 1120403456 ))) AND (NOT l_U511))
                                        {
                                            l_U1574++;
                                            l_U1486[I]++;
                                        }
                                        else if (sub_33759( ref l_U2410[I], l_U1476[I], fVar13, 1, 0, 0 ))
                                        {
                                            SET_PLAYBACK_SPEED( l_U2410[I], uParam1 * l_U980[I] );
                                            if (IS_VEH_DRIVEABLE( l_U2410[I] ))
                                            {
                                                if (l_U1741[I] == sub_32260())
                                                {
                                                    SWITCH_CAR_SIREN( l_U2410[I], 1 );
                                                }
                                            }
                                            if (l_U502)
                                            {
                                                # -NULL-0xbfc99f( l_U2410[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U2410[I], 0 );
                                            }
                                            l_U1574++;
                                            l_U1486[I]++;
                                        }
                                    }
                                    else
                                    {
                                        l_U1574++;
                                        l_U1486[I]++;
                                    }
                                }
                            }
                            else
                            {
                                SCRIPT_ASSERT( "Too many set peice cars playing back at once" );
                                l_U1574++;
                                l_U1486[I]++;
                            }
                        }
                    }
                    else
                    {
                        l_U1574++;
                        l_U1486[I]++;
                    }
                }
                if (l_U1486[I] == 4)
                {
                    if (IS_VEH_DRIVEABLE( l_U2410[I] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2410[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U2410[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    if (IS_PLAYER_PLAYING( sub_5010() ))
                                    {
                                        if (((IS_CHAR_TOUCHING_VEHICLE( sub_4063(), l_U2410[I] )) AND (NOT l_U491)) AND (NOT l_U488))
                                        {
                                            if (IS_CHAR_IN_ANY_CAR( sub_4063() ))
                                            {
                                                bVar15 = false;
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4063(), ref uVar6 );
                                                if (NOT (sub_41437( l_U2410[I], uVar6, 45.00000000 )))
                                                {
                                                    bVar15 = true;
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_35145( uVar6, l_U2410[I] ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    GET_CAR_SPEED( uVar6, ref fVar14 );
                                                    if (fVar14 < 1.00000000)
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_41722( uVar6, l_U2410[I], 15.00000000 ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (bVar15)
                                                {
                                                    sub_35376( l_U2410[I] );
                                                    l_U1486[I]++;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            SET_PLAYBACK_SPEED( l_U2410[I], uParam1 * l_U980[I] );
                                            if (l_U502)
                                            {
                                                # -NULL-0xbfc99f( l_U2410[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U2410[I], 0 );
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U2410[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U2410[I] );
                            }
                        }
                        else
                        {
                            l_U1486[I]++;
                        }
                    }
                    else
                    {
                        l_U1486[I]++;
                    }
                }
                if (l_U1486[I] == 5)
                {
                    if (IS_VEH_DRIVEABLE( l_U2410[I] ))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2410[I] )))
                        {
                            l_U1486[I]++;
                        }
                        else
                        {
                            GET_DRIVER_OF_CAR( l_U2410[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    SET_PLAYBACK_SPEED( l_U2410[I], uParam1 * l_U980[I] );
                                    if (l_U502)
                                    {
                                        # -NULL-0xbfc99f( l_U2410[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U2410[I], 0 );
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U2410[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U2410[I] );
                            }
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1476[I] ))
                            {
                                if (l_U1304 > (l_U970[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1476[I] ))))
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U2410[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U2410[I] );
                            }
                        }
                    }
                    else
                    {
                        l_U1486[I]++;
                    }
                }
                if (l_U1486[I] == 6)
                {
                    if (NOT (l_U2410[I] == l_U2429))
                    {
                        if (IS_VEH_DRIVEABLE( l_U2410[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U2410[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( uVar5, 29, ref iVar17 );
                                    if (iVar17 == 7)
                                    {
                                        GET_CAR_SPEED( l_U2410[I], ref fVar14 );
                                        if (fVar14 < 8.00000000)
                                        {
                                            fVar14 = 8.00000000;
                                        }
                                        SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fVar14 );
                                    }
                                }
                            }
                        }
                        if (NOT l_U489)
                        {
                            sub_31975( l_U2410[I] );
                        }
                        else if (DOES_VEHICLE_EXIST( l_U2410[I] ))
                        {
                            DELETE_CAR( ref l_U2410[I] );
                        }
                    }
                    l_U1574--;
                    l_U1486[I] = 99;
                }
            }
        }
    }
    else
    {
        sub_42701();
    }
    return;
}

int sub_41437(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar5, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar8, 0 );
    }
    else
    {
        return 0;
    }
    uVar5._fU8 = 0.00000000;
    uVar8._fU8 = 0.00000000;
    fVar11 = sub_27768( ref uVar5, ref uVar8 );
    if (fVar11 < 0.00000000)
    {
        return 0;
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar11 );
    if (NOT (fVar11 < fParam2))
    {
        return 0;
    }
    return 1;
}

int sub_41722(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_SPEED( uParam0, ref uVar5 );
    }
    if (NOT (IS_CAR_DEAD( uParam1 )))
    {
        GET_CAR_SPEED( uParam1, ref uVar6 );
    }
    if (((uVar5 - uVar6) > fParam2) || ((uVar5 - uVar6) < (fParam2 * -1.00000000)))
    {
        return 1;
    }
    return 0;
}

void sub_42701()
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2410[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U2410[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2410[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U2410[I] );
                }
            }
            sub_31702( l_U2410[I] );
            sub_31975( l_U2410[I] );
        }
        l_U1486[I] = 0;
    }
    for ( I = 0; I < 9; I++ )
    {
        if (NOT (l_U1741[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1741[I] );
        }
    }
    return;
}

int sub_43213(unknown uParam0, unknown uParam1)
{
    if (NOT l_U514)
    {
        l_U485 = 1;
        sub_43239();
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FIX_CAR( (uParam0^) );
            }
            if (NOT (l_U1581 == -1))
            {
                while (NOT (sub_33759( uParam0, l_U1581, uParam1, 1, 0, 0 )))
                {
                    WAIT( 0 );
                }
                if (NOT l_U496)
                {
                    l_U488 = 1;
                    l_U1307 = 0.00000000;
                    l_U1582 = 0;
                    l_U1584 = 0;
                    l_U1572 = 0;
                    l_U1574 = 0;
                    l_U1575 = 0;
                    l_U1586 = 0;
                    l_U1587 = 0;
                    l_U1588 = 0;
                }
            }
        }
        l_U514 = 1;
    }
    else if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
        {
            SET_PLAYBACK_SPEED( (uParam0^), (1.00000000 * l_U1305) * l_U1307 );
            sub_33759( uParam0, l_U1581, uParam1, 1, 0, 0 );
        }
    }
    l_U1304 = uParam1;
    sub_39281( (uParam0^), (1.00000000 * l_U1305) * l_U1307 );
    sub_31132( (uParam0^), (1.00000000 * l_U1305) * l_U1307 );
    if (((l_U1586 == 0) AND (l_U1587 == 0)) AND (l_U1588 == 0))
    {
        l_U488 = 0;
        l_U485 = 0;
        l_U514 = 0;
        return 1;
    }
    return 0;
}

void sub_43239()
{
    sub_43248();
    sub_43464();
    sub_43612();
    return;
}

void sub_43248()
{
    int I;

    for ( I = 0; I < 75; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2249[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U2249[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2249[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U2249[I] );
                }
            }
            DELETE_CAR( ref l_U2249[I] );
        }
        l_U1400[I] = 0;
    }
    for ( I = 0; I < 75; I++ )
    {
        if (NOT (l_U1589[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1589[I] );
        }
    }
    l_U1582 = 0;
    l_U1572 = 0;
    return;
}

void sub_43464()
{
    int I;

    for ( I = 0; I < 75; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2334[I] ))
        {
            DELETE_CAR( ref l_U2334[I] );
        }
    }
    for ( I = 0; I < 75; I++ )
    {
        if (NOT (l_U1665[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1665[I] );
        }
    }
    l_U1584 = 0;
    l_U1575 = 0;
    return;
}

void sub_43612()
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2410[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U2410[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2410[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U2410[I] );
                }
            }
            DELETE_CAR( ref l_U2410[I] );
        }
        l_U1486[I] = 0;
    }
    for ( I = 0; I < 9; I++ )
    {
        if (NOT (l_U1741[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1741[I] );
        }
    }
    return;
}

void sub_44229()
{
    if (((NOT (IS_CHAR_DEAD( l_U2580 ))) AND (NOT (IS_CAR_DEAD( l_U2592 )))) AND (l_U2536 == 0))
    {
        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U2580, l_U2592 )))
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U2592 );
            l_U2535 = 1;
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2580, 0 );
            SET_CHAR_RELATIONSHIP( l_U2580, 5, 0 );
            sub_44347( 0 );
            sub_3353();
            GET_CHAR_HEALTH( l_U2580, ref l_U2442 );
            if (l_U2442 < 200)
            {
                SET_CHAR_HEALTH( l_U2580, 200 );
            }
            l_U2536 = 1;
        }
    }
    else if ((IS_CAR_DEAD( l_U2592 )) AND (l_U2536 == 0))
    {
        l_U2535 = 1;
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2580, 0 );
        SET_CHAR_RELATIONSHIP( l_U2580, 5, 0 );
        sub_44347( 0 );
        sub_3353();
        GET_CHAR_HEALTH( l_U2580, ref l_U2442 );
        if (l_U2442 < 200)
        {
            SET_CHAR_HEALTH( l_U2580, 200 );
        }
        l_U2536 = 1;
    }
    return;
}

void sub_44347(boolean bParam0)
{
    l_U517 = 0;
    sub_29230();
    l_U516 = 1;
    sub_29718();
    if (IS_PLAYER_PLAYING( sub_5010() ))
    {
        FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_5010(), 1.00000000 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_5010(), 0 );
        SET_CREATE_RANDOM_COPS( 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_32403() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_38754() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_32260() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_32288() );
    if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT bParam0))
    {
        sub_36775();
        sub_39060();
        sub_42701();
    }
    else
    {
        sub_43239();
        sub_11193();
    }
    return;
}

void sub_44725()
{
    if ((NOT (IS_CAR_DEAD( l_U2592 ))) AND (l_U2536 == 0))
    {
        if ((((NOT (IS_VEH_DRIVEABLE( l_U2592 ))) || (IS_CAR_IN_WATER( l_U2592 ))) || (LOCATE_CAR_3D( l_U2592, 1767.23300000, 828.23800000, 15.43190000, 1.00000000, 1.00000000, 1.00000000, 0 ))) || (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2592 ))))
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U2592 );
            l_U2535 = 1;
            TASK_EVERYONE_LEAVE_CAR( l_U2592 );
            WAIT( 1000 );
            if ((NOT (IS_CHAR_INJURED( l_U2580 ))) AND (NOT (IS_CHAR_DEAD( l_U2611 ))))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2580, 0 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U2580, 1 );
                SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U2580, 0 );
                SET_CHAR_RELATIONSHIP( l_U2580, 5, 0 );
                TASK_COMBAT( l_U2580, l_U2611 );
            }
            sub_3353();
            sub_44347( 0 );
            l_U2536 = 1;
        }
    }
    return;
}

void sub_45016()
{
    if (NOT (IS_CHAR_DEAD( l_U2581 )))
    {
        if (((((IS_PLAYER_FREE_AIMING_AT_CHAR( l_U2612, l_U2581 )) || (IS_PLAYER_TARGETTING_CHAR( l_U2612, l_U2581 ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U2581, l_U2611, 0 ))) AND (NOT (sub_45103( l_U2613 )))) AND (NOT (IS_PED_RAGDOLL( l_U2581 ))))
        {
            if (l_U2500 == 1)
            {
                SETTIMERB( 15000 );
                l_U2500 = 0;
            }
            if (TIMERB() > l_U2439)
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U2581, l_U2611 );
                sub_45379( "F4_TARGET", ref l_U2613, 6, 1 );
                GENERATE_RANDOM_INT_IN_RANGE( 8000, 12000, ref l_U2439 );
                SETTIMERB( 0 );
            }
        }
    }
    return;
}

int sub_45103(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_45215( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_45215( "\n speech is not playing" );
    }
    return 0;
}

void sub_45215(unknown uParam0)
{
    return;
}

void sub_45379(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_45402( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_45402(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_45456( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_45456(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_45478( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
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
    sub_46158( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_45478(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_45215( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_45215( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_45215( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_46158(int iParam0, int iParam1)
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

void sub_46367()
{
    if (NOT (IS_CHAR_DEAD( l_U2581 )))
    {
        if ((((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U2611, l_U2581, 8.00000000, 8.00000000, 8.00000000, 0 )) AND (TIMERB() > l_U2439)) AND (NOT (sub_45103( l_U2613 )))) AND (NOT (IS_PED_RAGDOLL( l_U2581 ))))
        {
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U2581, l_U2611 );
            sub_45379( "F4_SCREAM", ref l_U2613, 6, 1 );
            GENERATE_RANDOM_INT_IN_RANGE( 8000, 15000, ref l_U2439 );
            l_U2500 = 1;
            SETTIMERB( 0 );
        }
    }
    return;
}

void sub_46575()
{
    if ((NOT (IS_CHAR_DEAD( l_U2580 ))) AND (l_U2464 == 0))
    {
        if (l_U2540 == 0)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U2611, l_U2580, 250.00000000, 250.00000000, 200.00000000, 0 )))
            {
                PRINT_NOW( "FAU4_FAIL", 7000, 1 );
                sub_7753( 4, "F4_CALLP", "F4AUD", 0 );
                l_U2436 = -1;
                l_U2464 = 1;
            }
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U2611, l_U2580, 175.00000000, 175.00000000, 175.00000000, 0 )))
        {
            PRINT_NOW( "FAU4_FAIL", 7000, 1 );
            sub_7753( 4, "F4_CALLP", "F4AUD", 0 );
            l_U2436 = -1;
            l_U2464 = 1;
        }
    }
    return;
}

void sub_46835()
{
    if (IS_CHAR_DEAD( l_U2580 ))
    {
        sub_44347( 0 );
        sub_3353();
        if (NOT (IS_CHAR_DEAD( l_U2581 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U2581 )))
            {
                DELETE_CHAR( ref l_U2581 );
            }
        }
        sub_7753( 4, "F4_CALLF", "F4AUD", 0 );
        l_U2436 = -1;
        l_U2465 = 1;
    }
    return;
}

void sub_46965()
{
    if (NOT (IS_CHAR_DEAD( l_U2581 )))
    {
        if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U2611, l_U2581, 50.00000000, 50.00000000, 50.00000000, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U2581 ))))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2590 );
            DELETE_CHAR( ref l_U2581 );
        }
    }
    return;
}

void sub_47089()
{
    if (l_U2533 == 0)
    {
        if (DOES_BLIP_EXIST( l_U2545 ))
        {
            REMOVE_BLIP( l_U2545 );
        }
        if ((NOT (DOES_BLIP_EXIST( l_U2544 ))) AND (NOT (IS_CHAR_DEAD( l_U2580 ))))
        {
            ADD_BLIP_FOR_CHAR( l_U2580, ref l_U2544 );
            SET_BLIP_AS_FRIENDLY( l_U2544, 0 );
        }
        PRINT_NOW( "FAU4_CMD_02", 7500, 1 );
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        l_U2439 = 7000;
        l_U2533 = 1;
    }
    if (NOT (IS_CHAR_INJURED( l_U2580 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U2580 ))
        {
            sub_24399( ref l_U2580 );
        }
    }
    sub_47299();
    if (l_U2539 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U2611, 1728.46200000, 705.07890000, 24.84420000, 250.00000000, 250.00000000, 250.00000000, 0 ))
        {
            sub_47935();
            if (NOT (IS_CAR_DEAD( l_U2592 )))
            {
                SET_CAN_BURST_CAR_TYRES( l_U2592, 1 );
            }
            SWITCH_ROADS_OFF( 1744.01000000, 825.19000000, 13.38000000, 1775.83000000, 848.47000000, 17.43000000 );
            l_U2539 = 1;
        }
    }
    if (l_U2535 == 0)
    {
        sub_25882( l_U2592, l_U2611, ref l_U2447, 1.00000000 + 0.10000000, 7.50000000 + 0.75000000, 15.00000000 + 1.50000000, 100.00000000 + 10.00000000, 1073741824, 1065353216, 1060320051, 1 );
        sub_28979( l_U2592, l_U2447 );
    }
    if (NOT (IS_CHAR_DEAD( l_U2580 )))
    {
        if (NOT (IS_CAR_DEAD( l_U2410[0] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U2580, l_U2410[0], 9.00000000, 9.00000000, 2.00000000, 0 )) AND (l_U2501[0] == 0))
            {
                SOUND_CAR_HORN( l_U2410[0], 4000 );
                l_U2501[0] = 1;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U2410[4] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U2580, l_U2410[4], 16.00000000, 16.00000000, 3.00000000, 0 )) AND (l_U2501[4] == 0))
            {
                SOUND_CAR_HORN( l_U2410[4], 5000 );
                l_U2501[4] = 1;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U2410[5] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U2580, l_U2410[5], 16.00000000, 16.00000000, 3.00000000, 0 )) AND (l_U2501[5] == 0))
            {
                SOUND_CAR_HORN( l_U2410[5], 3000 );
                l_U2501[5] = 1;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U2410[6] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U2580, l_U2410[6], 20.00000000, 20.00000000, 2.00000000, 0 )) AND (l_U2501[6] == 0))
            {
                SOUND_CAR_HORN( l_U2410[6], 4000 );
                l_U2501[6] = 1;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U2410[8] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U2580, l_U2410[8], 10.00000000, 10.00000000, 2.00000000, 0 )) AND (l_U2501[8] == 0))
            {
                SOUND_CAR_HORN( l_U2410[8], 3000 );
                l_U2501[8] = 1;
            }
        }
    }
    sub_44229();
    sub_44725();
    sub_50423();
    if ((l_U2540 == 0) AND (NOT (IS_CAR_DEAD( l_U2592 ))))
    {
        if (LOCATE_CAR_3D( l_U2592, 1728.46200000, 705.07890000, 24.84420000, 60.00000000, 60.00000000, 60.00000000, 1 ))
        {
            g_U8219 = 1;
        }
    }
    if (DOES_CHAR_EXIST( l_U2581 ))
    {
        sub_7515();
    }
    sub_46575();
    sub_46835();
    sub_46965();
    sub_45016();
    sub_46367();
    if (l_U2538 == 0)
    {
        sub_55332();
    }
    return;
}

void sub_47299()
{
    if ((NOT (IS_CHAR_DEAD( l_U2611 ))) AND (NOT (IS_CAR_DEAD( l_U2593 ))))
    {
        if (IS_CHAR_SITTING_IN_CAR( l_U2611, l_U2593 ))
        {
            if (TIMERA() < 5000)
            {
                if (# -NULL-0xc238b5( 1 ))
                {
                    PRINT_HELP_FOREVER( "FAU4_HELP11" );
                }
                else
                {
                    PRINT_HELP_FOREVER( "FAU4_HELP1" );
                }
            }
            if ((TIMERA() > 5000) AND (TIMERA() < 10000))
            {
                PRINT_HELP_FOREVER( "FAU4_HELP2" );
            }
            if ((TIMERA() > 10000) AND (TIMERA() < 16000))
            {
                if (# -NULL-0xc238b5( 1 ))
                {
                    PRINT_HELP_FOREVER( "FAU4_HELP12" );
                }
                else
                {
                    PRINT_HELP_FOREVER( "FAU4_HELP13" );
                }
            }
            if ((TIMERA() > 16000) AND (TIMERA() < 22000))
            {
                PRINT_HELP_FOREVER( "FAU4_HELP3" );
            }
            if ((TIMERA() > 22000) AND (TIMERA() < 28000))
            {
                PRINT_HELP_FOREVER( "FAU4_HELP4" );
            }
            if (TIMERA() > 28000)
            {
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "FAU4_HELP4" ))
                {
                    CLEAR_HELP();
                }
            }
        }
        else if (TIMERA() < 5000)
        {
            SETTIMERA( 0 );
        }
        if ((TIMERA() > 10000) AND (TIMERA() < 16000))
        {
            SETTIMERA( 10000 );
        }
        if ((TIMERA() > 16000) AND (TIMERA() < 22000))
        {
            SETTIMERA( 16000 );
        }
        if ((TIMERA() > 22000) AND (TIMERA() < 28000))
        {
            SETTIMERA( 22000 );
        }
        CLEAR_HELP();;
    }
    return;
}

void sub_47935()
{
    CLEAR_AREA( 1690.98500000, 717.26070000, 25.19030000, 50.00000000, 1 );
    sub_6874( l_U2591 );
    while (NOT (HAS_MODEL_LOADED( l_U2591 )))
    {
        WAIT( 0 );
    }
    CREATE_CAR( l_U2599, 1690.98500000, 717.26070000, 25.19030000, ref l_U2594[0], 1 );
    SET_CAR_HEADING( l_U2594[0], 258.63050000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U2594[0] );
    CHANGE_CAR_COLOUR( l_U2594[0], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U2594[0], 4, 35 );
    CREATE_CAR( l_U2599, 1687.25200000, 718.00670000, 25.37340000, ref l_U2594[1], 1 );
    SET_CAR_HEADING( l_U2594[1], 261.07150000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U2594[1] );
    CHANGE_CAR_COLOUR( l_U2594[1], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U2594[1], 4, 35 );
    CREATE_CAR( l_U2599, 1689.29500000, 720.10290000, 25.38620000, ref l_U2594[2], 1 );
    SET_CAR_HEADING( l_U2594[2], 258.76570000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U2594[2] );
    CHANGE_CAR_COLOUR( l_U2594[2], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U2594[2], 4, 35 );
    CREATE_CHAR( 26, l_U2591, 1690.98500000 + 0.50000000, 717.26070000, 25.19030000, ref l_U2582[0], 1 );
    SET_CHAR_HEADING( l_U2582[0], 142.77260000 );
    CREATE_CHAR( 26, l_U2591, 1687.25200000 + 0.50000000, 718.00670000, 25.37340000, ref l_U2582[1], 1 );
    SET_CHAR_HEADING( l_U2582[1], 180.27220000 );
    CREATE_CHAR( 26, l_U2591, 1689.29500000 + 0.50000000, 720.10290000, 25.38620000, ref l_U2582[2], 1 );
    SET_CHAR_HEADING( l_U2582[2], 80.27220000 );
    CREATE_CHAR( 26, l_U2591, 1772.40000000 + 0.50000000, 843.50000000, 15.43240000, ref l_U2586[0], 1 );
    SET_CHAR_HEADING( l_U2586[0], 180.27220000 );
    CREATE_CHAR( 26, l_U2591, 1772.37400000 + 0.50000000, 843.22620000, 15.43240000, ref l_U2586[1], 1 );
    SET_CHAR_HEADING( l_U2586[1], 80.27220000 );
    l_U2441 = 0;
    while (l_U2441 < 3)
    {
        if (NOT (IS_CHAR_DEAD( l_U2582[l_U2441] )))
        {
            SET_CHAR_DECISION_MAKER( l_U2582[l_U2441], l_U2605 );
            SET_COMBAT_DECISION_MAKER( l_U2582[l_U2441], l_U2608 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U2582[l_U2441], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2582[l_U2441], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U2582[l_U2441], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U2582[l_U2441] );
            if (l_U2441 > 0)
            {
                GIVE_WEAPON_TO_CHAR( l_U2582[l_U2441], 12, 25000, 0 );
                SET_CHAR_ACCURACY( l_U2582[l_U2441], 10 );
            }
            else
            {
                GIVE_WEAPON_TO_CHAR( l_U2582[l_U2441], 7, 25000, 0 );
                SET_CHAR_ACCURACY( l_U2582[l_U2441], 20 );
            }
            SET_CHAR_RELATIONSHIP_GROUP( l_U2582[l_U2441], 23 );
        }
        l_U2441++;
        WAIT( 0 );
    }
    l_U2441 = 0;
    while (l_U2441 < 2)
    {
        if (NOT (IS_CHAR_DEAD( l_U2586[l_U2441] )))
        {
            SET_CHAR_DECISION_MAKER( l_U2586[l_U2441], l_U2605 );
            SET_COMBAT_DECISION_MAKER( l_U2586[l_U2441], l_U2609 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U2586[l_U2441], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2586[l_U2441], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U2586[l_U2441], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U2586[l_U2441] );
            GIVE_WEAPON_TO_CHAR( l_U2586[l_U2441], 7, 25000, 0 );
            SET_CHAR_ACCURACY( l_U2586[l_U2441], 20 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U2586[l_U2441], 23 );
            SET_CHAR_RELATIONSHIP( l_U2586[l_U2441], 5, 0 );
        }
        l_U2441++;
        WAIT( 0 );
    }
    if ((NOT (IS_CAR_DEAD( l_U2594[0] ))) AND (NOT (IS_CHAR_DEAD( l_U2582[0] ))))
    {
        WARP_CHAR_INTO_CAR( l_U2582[0], l_U2594[0] );
    }
    if ((NOT (IS_CAR_DEAD( l_U2594[1] ))) AND (NOT (IS_CHAR_DEAD( l_U2582[1] ))))
    {
        WARP_CHAR_INTO_CAR( l_U2582[1], l_U2594[1] );
    }
    if ((NOT (IS_CAR_DEAD( l_U2594[2] ))) AND (NOT (IS_CHAR_DEAD( l_U2582[2] ))))
    {
        WARP_CHAR_INTO_CAR( l_U2582[2], l_U2594[2] );
    }
    if ((NOT (IS_CAR_DEAD( l_U2594[1] ))) AND (NOT (IS_CHAR_DEAD( l_U2586[0] ))))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U2586[0], l_U2594[1], 0 );
    }
    if ((NOT (IS_CAR_DEAD( l_U2594[2] ))) AND (NOT (IS_CHAR_DEAD( l_U2586[1] ))))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U2586[1], l_U2594[2], 0 );
    }
    REQUEST_CAR_RECORDING( 1180 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1180 )))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( 1181 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1181 )))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( 1182 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1182 )))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( 1183 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1183 )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_50423()
{
    if (((NOT (IS_CAR_DEAD( l_U2592 ))) AND (NOT (IS_CHAR_INJURED( l_U2580 )))) AND (l_U2540 == 0))
    {
        if ((LOCATE_CAR_3D( l_U2592, 1728.46200000, 705.07890000, 24.84420000, 30.00000000, 30.00000000, 30.00000000, 1 )) AND (IS_CHAR_SITTING_IN_CAR( l_U2580, l_U2592 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U2611, l_U2580, 150.00000000, 150.00000000, 150.00000000, 0 )))
            {
                PRINT_NOW( "FAU4_FAIL", 7000, 1 );
                sub_7753( 4, "F4_CALLP", "F4AUD", 0 );
                l_U2436 = -1;
                l_U2464 = 1;
            }
            else
            {
                SET_PLAYER_CONTROL( l_U2612, 0 );
                OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
                SET_CAR_DENSITY_MULTIPLIER( 0 );
                STOP_PLAYBACK_RECORDED_CAR( l_U2592 );
                l_U2535 = 1;
                sub_44347( 0 );
                sub_50697();
                if (NOT (IS_CHAR_DEAD( l_U2580 )))
                {
                    GET_CHAR_HEALTH( l_U2580, ref l_U2437 );
                    if (l_U2437 > 200)
                    {
                        SET_CHAR_HEALTH( l_U2580, 200 );
                    }
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U2580, 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U2582[0] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U2582[0], ref l_U2546[0] );
                    SET_BLIP_AS_FRIENDLY( l_U2546[0], 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U2582[1] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U2582[1], ref l_U2546[1] );
                    SET_BLIP_AS_FRIENDLY( l_U2546[1], 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U2582[2] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U2582[2], ref l_U2546[2] );
                    SET_BLIP_AS_FRIENDLY( l_U2546[2], 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U2586[0] )))
                {
                    TASK_DRIVE_BY( l_U2586[0], l_U2611, 0, 0, 0, 0, 100, 8, 0, 25 );
                    ADD_BLIP_FOR_CHAR( l_U2586[0], ref l_U2546[3] );
                    SET_BLIP_AS_FRIENDLY( l_U2546[3], 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U2586[1] )))
                {
                    TASK_DRIVE_BY( l_U2586[1], l_U2611, 0, 0, 0, 0, 100, 8, 0, 25 );
                    ADD_BLIP_FOR_CHAR( l_U2586[1], ref l_U2546[4] );
                    SET_BLIP_AS_FRIENDLY( l_U2546[4], 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U2580 )))
                {
                    PRINTSTRING( "\n ---> Remove Biker Proofs 1 <--- \n\n" );
                    SET_CHAR_PROOFS( l_U2580, 0, 0, 0, 0, 0 );
                }
                PRINT_NOW( "FAU4_CMD_04", 7000, 1 );
                sub_54977();
                SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                SET_PED_IS_BLIND_RAGING( l_U2611, 1 );
                l_U2436++;
                l_U2540 = 1;
            }
        }
    }
    return;
}

void sub_50697()
{
    while (l_U2511 == 0)
    {
        if (l_U2512[0] == 0)
        {
            SETTIMERA( 1 );
            l_U2512[0] = 1;
        }
        if (((TIMERA() > 0) AND (l_U2512[1] == 0)) AND (l_U2512[0] == 1))
        {
            SET_PLAYER_CONTROL( l_U2612, 0 );
            FREEZE_CHAR_POSITION( l_U2611, 1 );
            SETTIMERA( 1 );
            l_U2512[1] = 1;
        }
        if (((TIMERA() > 0) AND (l_U2512[2] == 0)) AND (l_U2512[1] == 1))
        {
            SETTIMERA( 1 );
            l_U2512[2] = 1;
        }
        if (((TIMERA() > 0) AND (l_U2512[3] == 0)) AND (l_U2512[2] == 1))
        {
            DISPLAY_RADAR( 0 );
            DISPLAY_HUD( 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref l_U2561 );
            CREATE_CAM( 14, ref l_U2557 );
            CREATE_CAM( 14, ref l_U2558 );
            CREATE_CAM( 14, ref l_U2559 );
            CREATE_CAM( 3, ref l_U2560 );
            SET_CAM_POS( l_U2557, 1722.11500000, 708.41770000, 25.22554000 );
            SET_CAM_ROT( l_U2557, 1.71487700, 0.00000000, 59.26213000 );
            SET_CAM_FOV( l_U2557, 15.00000000 );
            SET_CAM_POS( l_U2558, 1722.11500000, 708.41770000, 25.22554000 );
            SET_CAM_ROT( l_U2558, 1.71487700, 0.00000000, 59.26213000 );
            SET_CAM_FOV( l_U2558, 25.00000000 );
            SET_CAM_POS( l_U2557, 1692.66000000, 715.73350000, 25.19839000 );
            SET_CAM_ROT( l_U2557, 3.12748100, 0.00000000, -84.29418000 );
            SET_CAM_FOV( l_U2557, 30.00000000 );
            SET_CAM_POS( l_U2558, 1722.11500000, 708.41770000, 25.22554000 );
            SET_CAM_ROT( l_U2558, 1.71487700, 0.00000000, 59.26213000 );
            SET_CAM_FOV( l_U2558, 30.00000000 );
            SET_CAM_POS( l_U2559, 1722.11500000, 708.41770000, 25.22554000 );
            SET_CAM_ROT( l_U2559, 1.71487700, 0.00000000, 59.26213000 );
            SET_CAM_FOV( l_U2559, 20.00000000 );
            if (NOT (IS_CAR_DEAD( l_U2594[0] )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U2594[0], 1180 );
                SET_PLAYBACK_SPEED( l_U2594[0], 1.00000000 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2594[0], 2000 );
            }
            if (NOT (IS_CAR_DEAD( l_U2592 )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U2592, 1183 );
                SET_PLAYBACK_SPEED( l_U2592, 1.00000000 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2592, 2000 );
            }
            if (NOT (IS_CAR_DEAD( l_U2594[1] )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U2594[1], 1181 );
                SET_PLAYBACK_SPEED( l_U2594[1], 1.00000000 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2594[1], 1000 );
            }
            if (NOT (IS_CAR_DEAD( l_U2594[2] )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U2594[2], 1182 );
                SET_PLAYBACK_SPEED( l_U2594[2], 1.00000000 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2594[2], 1000 );
            }
            if (NOT (IS_CHAR_DEAD( l_U2580 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U2582[0] )))
                {
                    TASK_LOOK_AT_CHAR( l_U2582[0], l_U2580, 8000, 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U2582[1] )))
                {
                    TASK_LOOK_AT_CHAR( l_U2582[1], l_U2580, 8000, 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U2586[1] )))
                {
                    TASK_LOOK_AT_CHAR( l_U2586[1], l_U2580, 8000, 0 );
                }
            }
            SETTIMERA( 1 );
            l_U2512[3] = 1;
        }
        if (((TIMERA() > 0) AND (l_U2512[4] == 0)) AND (l_U2512[3] == 1))
        {
            SET_CAM_ACTIVE( l_U2557, 1 );
            SET_CAM_PROPAGATE( l_U2557, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            CLEAR_AREA( 1728.74200000, 700.33240000, 25.11570000, 10.00000000, 1 );
            CLEAR_AREA( 1807.25600000, 715.54490000, 24.82230000, 50.00000000, 1 );
            CLEAR_AREA( 1690.98500000, 717.26070000, 25.19030000, 50.00000000, 1 );
            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U2611 ))
            {
                SET_CHAR_COORDINATES( l_U2611, 1731.61900000 - 1.00000000, 702.82060000 - 10, 24.88960000 );
                SET_CHAR_HEADING( l_U2611, 345.00000000 );
            }
            SETTIMERA( 0 );
            l_U2512[4] = 1;
        }
        if (((TIMERA() > 0) AND (l_U2512[5] == 0)) AND (l_U2512[4] == 1))
        {
            SETTIMERA( 0 );
            l_U2512[5] = 1;
        }
        if ((((sub_52145( l_U2582[0], 1692.66000000, 715.73350000, 25.19839000 )) < 1.50000000) AND (l_U2498 == 0)) AND (l_U2512[4] == 1))
        {
            SET_CAM_COMPONENT_SHAKE( l_U2557, 0, 3, 1500, 0.00400000, 5.00000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2557, 1, 3, 1500, 0.00400000, 5.00000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2557, 3, 3, 1500, 0.00400000, 5.00000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2557, 4, 3, 1500, 0.00400000, 5.00000000, 0.00000000 );
            l_U2498 = 1;
        }
        if ((((sub_52145( l_U2582[2], 1692.66000000, 715.73350000, 25.19839000 )) < 3.80000000) AND (l_U2499 == 0)) AND (l_U2512[4] == 1))
        {
            SET_CAM_COMPONENT_SHAKE( l_U2557, 0, 3, 1500, 0.00300000, 5.00000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2557, 1, 3, 1500, 0.00300000, 5.00000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2557, 3, 3, 1500, 0.00300000, 5.00000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2557, 4, 3, 1500, 0.00300000, 5.00000000, 0.00000000 );
            l_U2499 = 1;
        }
        if (((TIMERA() > 1750) AND (l_U2512[6] == 0)) AND (l_U2512[5] == 1))
        {
            sub_7584( ref l_U2613, 0 );
            sub_45379( "F4_ARRGS", ref l_U2613, 3, 1 );
            l_U2512[6] = 1;
        }
        if (((TIMERA() > 3000) AND (l_U2512[7] == 0)) AND (l_U2512[6] == 1))
        {
            SET_CAM_PROPAGATE( l_U2557, 0 );
            SET_CAM_ACTIVE( l_U2558, 1 );
            SET_CAM_PROPAGATE( l_U2558, 1 );
            if (NOT (IS_CAR_DEAD( l_U2594[0] )))
            {
                ATTACH_CAM_TO_VEHICLE( l_U2558, l_U2594[0] );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2558, 1 );
                SET_CAM_ATTACH_OFFSET( l_U2558, -1.50000000, 3.75000000, 0 );
                POINT_CAM_AT_VEHICLE( l_U2558, l_U2594[0] );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U2558, 1 );
                SET_CAM_POINT_OFFSET( l_U2558, 0, -3, 0 );
            }
            SETTIMERA( 0 );
            l_U2512[7] = 1;
        }
        if (((TIMERA() > 3000) AND (l_U2512[8] == 0)) AND (l_U2512[7] == 1))
        {
            SET_CAM_PROPAGATE( l_U2558, 0 );
            SET_CAM_ACTIVE( l_U2559, 1 );
            SET_CAM_PROPAGATE( l_U2559, 1 );
            if (NOT (IS_CHAR_DEAD( l_U2582[0] )))
            {
                POINT_CAM_AT_PED( l_U2559, l_U2582[0] );
            }
            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U2611 ))
            {
                SET_CHAR_COORDINATES( l_U2611, 1731.61900000 - 1.00000000, 702.82060000, 24.88960000 );
                SET_CHAR_HEADING( l_U2611, 345.00000000 );
                GET_CAR_CHAR_IS_USING( l_U2611, ref l_U2598 );
                if (NOT (IS_CAR_DEAD( l_U2598 )))
                {
                    if (IS_CHAR_ON_ANY_BIKE( l_U2611 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U2562 );
                        l_U2443[0] = 1500;
                        l_U2443[1] = 1000;
                        l_U2443[2] = 500;
                        TASK_CAR_TEMP_ACTION( 0, l_U2598, 9, l_U2443[0] );
                        TASK_CAR_TEMP_ACTION( 0, l_U2598, 8, l_U2443[1] );
                        TASK_CAR_TEMP_ACTION( 0, l_U2598, 9, l_U2443[2] );
                        CLOSE_SEQUENCE_TASK( l_U2562 );
                        TASK_PERFORM_SEQUENCE( l_U2611, l_U2562 );
                        CLEAR_SEQUENCE_TASK( l_U2562 );
                    }
                    else if (IS_CHAR_IN_ANY_CAR( l_U2611 ))
                    {
                        l_U2443[0] = 1600;
                        l_U2443[1] = 900;
                        l_U2443[2] = 750;
                        OPEN_SEQUENCE_TASK( ref l_U2562 );
                        TASK_CAR_TEMP_ACTION( 0, l_U2598, 9, l_U2443[0] );
                        TASK_CAR_TEMP_ACTION( 0, l_U2598, 8, l_U2443[1] );
                        TASK_CAR_TEMP_ACTION( 0, l_U2598, 9, l_U2443[2] );
                        CLOSE_SEQUENCE_TASK( l_U2562 );
                        TASK_PERFORM_SEQUENCE( l_U2611, l_U2562 );
                        CLEAR_SEQUENCE_TASK( l_U2562 );
                    }
                }
            }
            SETTIMERA( 0 );
            l_U2512[8] = 1;
        }
        if (((TIMERA() > 100) AND (l_U2512[9] == 0)) AND (l_U2512[8] == 1))
        {
            SETTIMERA( 0 );
            l_U2512[9] = 1;
        }
        if ((((TIMERA() > ((l_U2443[0] + l_U2443[1]) + l_U2443[2])) AND (l_U2512[10] == 0)) AND (l_U2512[9] == 1)) AND (NOT (sub_45103( l_U2613 ))))
        {
            SET_CAM_ACTIVE( l_U2558, 0 );
            SET_CAM_PROPAGATE( l_U2558, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( l_U2557 );
            DESTROY_CAM( l_U2558 );
            DESTROY_CAM( l_U2560 );
            END_CAM_COMMANDS( ref l_U2561 );
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            CLEAR_CHAR_TASKS( l_U2611 );
            FREEZE_CHAR_POSITION( l_U2611, 0 );
            SET_PLAYER_CONTROL( l_U2612, 1 );
            SETTIMERA( 0 );
            l_U2511 = 1;
            l_U2512[10] = 1;
        }
        if (((sub_53767()) AND (IS_SCREEN_FADED_IN())) AND (l_U2511 == 0))
        {
            DO_SCREEN_FADE_OUT( 1000 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CAM_ACTIVE( l_U2557, 0 );
            SET_CAM_PROPAGATE( l_U2557, 0 );
            SET_CAM_ACTIVE( l_U2558, 0 );
            SET_CAM_PROPAGATE( l_U2558, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( l_U2557 );
            DESTROY_CAM( l_U2558 );
            DESTROY_CAM( l_U2560 );
            GET_CAR_CHAR_IS_USING( l_U2611, ref l_U2598 );
            if (NOT (IS_CAR_DEAD( l_U2598 )))
            {
                SET_CHAR_HEADING( l_U2611, 269.39380000 );
                SET_CHAR_COORDINATES( l_U2611, 1745.09200000, 716.20780000, 24.87880000 );
                TASK_CAR_TEMP_ACTION( l_U2611, l_U2598, 9, 1500 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_WIDESCREEN_BORDERS( 0 );
            END_CAM_COMMANDS( ref l_U2561 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            if (NOT (IS_CAR_DEAD( l_U2594[0] )))
            {
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2594[0], 6500 );
            }
            if (NOT (IS_CAR_DEAD( l_U2592 )))
            {
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2592, 6500 );
            }
            if (NOT (IS_CAR_DEAD( l_U2594[1] )))
            {
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2594[1], 5500 );
            }
            if (NOT (IS_CAR_DEAD( l_U2594[2] )))
            {
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2594[2], 5500 );
            }
            WAIT( 1000 );
            CLEAR_CHAR_TASKS( l_U2611 );
            FREEZE_CHAR_POSITION( l_U2611, 0 );
            SET_PLAYER_CONTROL( l_U2612, 1 );
            DO_SCREEN_FADE_IN( 500 );
            SETTIMERA( 0 );
            l_U2511 = 1;
            l_U2512[10] = 1;
        }
        WAIT( 0 );
    }
    return;
}

void sub_52145(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    }
    else
    {
        return -1.00000000;
    }
    return VDIST( uVar6, uParam1 );
}

int sub_53767()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_54977()
{
    ADD_COVER_POINT( 1882.57000000, 856.45000000, 14.38000000, 3, 161.19040000, 3, 1, ref l_U2552[0] );
    ADD_COVER_POINT( 1885.70000000, 865.11000000, 14.39000000, 3, 140.86230000, 3, 1, ref l_U2552[1] );
    ADD_COVER_POINT( 1879.40000000, 886.88000000, 15.10000000, 3, 157.88250000, 3, 1, ref l_U2552[2] );
    ADD_COVER_POINT( 1885.02000000, 877.49000000, 14.54900000, 3, 155.23100000, 3, 1, ref l_U2552[3] );
    return;
}

void sub_55332()
{
    if (NOT (IS_CHAR_DEAD( l_U2580 )))
    {
        if ((((TIMERB() > l_U2439) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U2611, l_U2580, 13.00000000, 13.00000000, 13.00000000, 0 ))) AND (NOT (sub_45103( l_U2613 )))) AND (NOT (IS_PED_RAGDOLL( l_U2580 ))))
        {
            sub_45379( "F4_CHASE", ref l_U2613, 6, 1 );
            GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref l_U2439 );
            SETTIMERB( 0 );
        }
    }
    return;
}

void sub_55507()
{
    sub_55516();
    sub_55896();
    sub_44229();
    sub_56559();
    sub_57013();
    sub_57240();
    sub_46575();
    sub_57486();
    sub_57732();
    if (NOT (IS_CHAR_INJURED( l_U2580 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U2580 ))
        {
            sub_24399( ref l_U2580 );
        }
    }
    return;
}

void sub_55516()
{
    if ((NOT (IS_CAR_DEAD( l_U2592 ))) AND (l_U2493 == 0))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2592 )))
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U2592 );
            sub_3353();
            GET_CHAR_COORDINATES( l_U2611, ref l_U2448._fU0, ref l_U2448._fU4, ref l_U2448._fU8 );
            if (NOT (IS_CHAR_INJURED( l_U2580 )))
            {
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U2580, 1 );
                SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U2580, 0 );
                SET_CHAR_RELATIONSHIP( l_U2580, 5, 0 );
                CLEAR_CHAR_TASKS( l_U2580 );
                OPEN_SEQUENCE_TASK( ref l_U2562 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1885.63900000, 877.52280000, 14.49750000, 4, 10000, 1.00000000 );
                TASK_SEEK_COVER_TO_COVER_POINT( 0, l_U2552[3], l_U2448._fU0, l_U2448._fU4, l_U2448._fU8, 10000 );
                CLOSE_SEQUENCE_TASK( l_U2562 );
                TASK_PERFORM_SEQUENCE( l_U2580, l_U2562 );
                CLEAR_SEQUENCE_TASK( l_U2562 );
            }
            OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
            ENABLE_CHASE_AUDIO( 0 );
            SET_WANTED_MULTIPLIER( 0 );
            l_U2493 = 1;
            WAIT( 0 );
            if (NOT (IS_CAR_DEAD( l_U2592 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U2592 );
            }
        }
    }
    return;
}

void sub_55896()
{
    int I;

    for ( I = 0; I < l_U2582; I++ )
    {
        if ((NOT (IS_CAR_DEAD( l_U2594[I] ))) AND (l_U2494[I] == 0))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2594[I] )))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U2594[I] );
                GET_CHAR_COORDINATES( l_U2611, ref l_U2448._fU0, ref l_U2448._fU4, ref l_U2448._fU8 );
                if ((NOT (IS_CHAR_INJURED( l_U2582[I] ))) AND (NOT (IS_CHAR_DEAD( l_U2611 ))))
                {
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U2582[I], 1 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U2582[I], 0 );
                    CLEAR_CHAR_TASKS( l_U2582[I] );
                    OPEN_SEQUENCE_TASK( ref l_U2562 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_COMBAT( 0, l_U2611 );
                    TASK_SEEK_COVER_TO_COVER_POINT( 0, l_U2552[I], l_U2448._fU0, l_U2448._fU4, l_U2448._fU8, 7000 + (1000 * I) );
                    CLOSE_SEQUENCE_TASK( l_U2562 );
                    TASK_PERFORM_SEQUENCE( l_U2582[I], l_U2562 );
                    CLEAR_SEQUENCE_TASK( l_U2562 );
                }
                if ((I == 0) || (I == 1))
                {
                    if ((NOT (IS_CHAR_INJURED( l_U2586[I] ))) AND (NOT (IS_CHAR_DEAD( l_U2611 ))))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2586[I], 0 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U2586[I], 1 );
                        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U2586[I], 0 );
                        CLEAR_CHAR_TASKS( l_U2586[I] );
                        SET_CHAR_RELATIONSHIP( l_U2586[I], 5, 0 );
                        OPEN_SEQUENCE_TASK( ref l_U2562 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U2611 );
                        TASK_SEEK_COVER_FROM_PED( 0, l_U2611, 4500 + (1000 * I) );
                        CLOSE_SEQUENCE_TASK( l_U2562 );
                        TASK_PERFORM_SEQUENCE( l_U2586[I], l_U2562 );
                        CLEAR_SEQUENCE_TASK( l_U2562 );
                    }
                }
                SET_WANTED_MULTIPLIER( 0 );
                l_U2494[I] = 1;
                WAIT( 0 );
                if (NOT (IS_CAR_DEAD( l_U2594[I] )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( l_U2594[I] );
                }
            }
        }
    }
    return;
}

void sub_56559()
{
    int I;

    for ( I = 0; I < l_U2582; I++ )
    {
        if (((NOT (IS_CHAR_INJURED( l_U2582[I] ))) AND (NOT (IS_CAR_DEAD( l_U2594[I] )))) AND (l_U2489[I] == 0))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U2582[I], l_U2594[I] )))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U2594[I] );
                if (NOT (IS_CHAR_DEAD( l_U2582[I] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2582[I], 0 );
                    SET_CHAR_RELATIONSHIP( l_U2582[I], 5, 0 );
                }
                l_U2489[I] = 1;
            }
        }
        else if (((IS_CHAR_INJURED( l_U2582[I] )) AND (NOT (IS_CAR_DEAD( l_U2594[I] )))) AND (l_U2489[I] == 0))
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U2594[I] );
            if (NOT (IS_CHAR_DEAD( l_U2582[I] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2582[I], 0 );
                SET_CHAR_RELATIONSHIP( l_U2582[I], 5, 0 );
            }
            l_U2489[I] = 1;
        }
        else if ((IS_CAR_DEAD( l_U2594[I] )) AND (l_U2489[I] == 0))
        {
            if (NOT (IS_CHAR_DEAD( l_U2582[I] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2582[I], 0 );
                SET_CHAR_RELATIONSHIP( l_U2582[I], 5, 0 );
            }
            l_U2489[I] = 1;
        };;;
    }
    return;
}

void sub_57013()
{
    unknown uVar2;
    int iVar3;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar2 );
    if (NOT (IS_CHAR_DEAD( l_U2582[uVar2] )))
    {
        if ((TIMERB() > l_U2439) AND (NOT (sub_45103( l_U2613 ))))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar3 );
            if (iVar3 == 0)
            {
                SAY_AMBIENT_SPEECH( l_U2582[uVar2], "TARGET", 0, 0, 0 );
            }
            else if (iVar3 == 1)
            {
                SAY_AMBIENT_SPEECH( l_U2582[uVar2], "FIGHT", 0, 0, 0 );
            }
            else
            {
                SAY_AMBIENT_SPEECH( l_U2582[uVar2], "MOVE_IN", 0, 0, 0 );
            }
            GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref l_U2439 );
            SETTIMERB( 0 );
        }
    }
    return;
}

void sub_57240()
{
    if (((l_U2493 == 1) AND (l_U2563 == 0)) AND (NOT (IS_CHAR_IN_ANY_CAR( l_U2611 ))))
    {
        l_U2563 = 1;
    }
    if ((l_U2563 == 1) AND (l_U2564 == 0))
    {
        if (l_U2565 == 0)
        {
            l_U2565 = 1;
            PRINT_HELP_FOREVER( "FAU4_TUT_01" );
            SETTIMERA( 0 );
        }
        if ((l_U2565 == 1) AND (TIMERA() > 7500))
        {
            l_U2565 = 2;
            CLEAR_HELP();
            PRINT_HELP_FOREVER( "FAU4_TUT_02" );
            SETTIMERA( 0 );
        }
        if ((l_U2565 == 2) AND (TIMERA() > 7500))
        {
            l_U2565 = 3;
            CLEAR_HELP();
            l_U2564 = 1;
            SETTIMERA( 0 );
        }
    }
    return;
}

void sub_57486()
{
    if ((((((IS_CHAR_DEAD( l_U2580 )) AND (IS_CHAR_INJURED( l_U2582[0] ))) AND (IS_CHAR_INJURED( l_U2582[1] ))) AND (IS_CHAR_INJURED( l_U2582[2] ))) AND (IS_CHAR_INJURED( l_U2586[0] ))) AND (IS_CHAR_INJURED( l_U2586[1] )))
    {
        sub_44347( 0 );
        sub_3353();
        while (TIMERA() < 3000)
        {
            WAIT( 0 );
        }
        STOP_PED_SPEAKING( l_U2611, 0 );
        SAY_AMBIENT_SPEECH( l_U2611, "KILLED_ALL", 1, 1, 0 );
        STOP_PED_SPEAKING( l_U2611, 1 );
        sub_7753( 4, "F4_CALLF", "F4AUD", 0 );
        l_U2436 = -1;
        l_U2465 = 1;
    }
    return;
}

void sub_57732()
{
    if (IS_CHAR_DEAD( l_U2580 ))
    {
        if (DOES_BLIP_EXIST( l_U2544 ))
        {
            REMOVE_BLIP( l_U2544 );
        }
    }
    if (IS_CHAR_INJURED( l_U2582[0] ))
    {
        if (DOES_BLIP_EXIST( l_U2546[0] ))
        {
            REMOVE_BLIP( l_U2546[0] );
        }
    }
    if (IS_CHAR_INJURED( l_U2582[1] ))
    {
        if (DOES_BLIP_EXIST( l_U2546[1] ))
        {
            REMOVE_BLIP( l_U2546[1] );
        }
    }
    if (IS_CHAR_INJURED( l_U2582[2] ))
    {
        if (DOES_BLIP_EXIST( l_U2546[2] ))
        {
            REMOVE_BLIP( l_U2546[2] );
        }
    }
    if (IS_CHAR_INJURED( l_U2586[0] ))
    {
        if (DOES_BLIP_EXIST( l_U2546[3] ))
        {
            REMOVE_BLIP( l_U2546[3] );
        }
    }
    if (IS_CHAR_INJURED( l_U2586[1] ))
    {
        if (DOES_BLIP_EXIST( l_U2546[4] ))
        {
            REMOVE_BLIP( l_U2546[4] );
        }
    }
    return;
}

void sub_58171()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    l_U2463 = 0;
    sub_58196();
    sub_69788( 2032, 3 );
    return;
}

void sub_58196()
{
    sub_58205();
    return;
}

void sub_58205()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_58223();
    sub_58282( iVar2, iVar3, iVar4 );
    return;
}

void sub_58223()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_58282(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 4;
    sub_58314( iVar5, uParam0, uParam1, uParam2, "Contact_5" );
    return;
}

void sub_58314(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_58410( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_58410( ref cVar9 );
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
            sub_58410( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_58410( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_58410( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_58410( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_58987( iParam0, iVar7 );;;
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
                sub_59384( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_59384( 0, 4 );
            }
        }
    }
    if (NOT (sub_59473( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5010(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_5010() );
    }
    sub_2337();
    bVar27 = true;
    uVar28 = sub_58987( iParam0, iVar7 );
    uVar29 = sub_1794( iParam0 );
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
                sub_68849( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_69279();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_69364( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_69421( iParam0 );
                sub_69460( 0 );
                sub_2235( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_69568();
        }
    }
    if (bParam2)
    {
        sub_69279();
        sub_69656();
        sub_69460( 0 );
    }
    if (bParam3)
    {
        sub_69279();
        sub_69696();
        sub_69460( 0 );
        sub_2235( uVar29, 0 );
    }
    sub_1681();
    return;
}

void sub_58410(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_58987(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_2193( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_59384(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_59473(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_59681( uParam1 );
        break;
        case 1:
        bVar8 = sub_61759( uParam1 );
        break;
        case 2:
        bVar8 = sub_61985( uParam1 );
        break;
        case 3:
        bVar8 = sub_62135( uParam1 );
        break;
        case 4:
        bVar8 = sub_62413( uParam1 );
        break;
        case 5:
        bVar8 = sub_62716( uParam1 );
        break;
        case 6:
        bVar8 = sub_62915( uParam1 );
        break;
        case 7:
        bVar8 = sub_63141( uParam1 );
        break;
        case 8:
        bVar8 = sub_63376( uParam1 );
        break;
        case 9:
        bVar8 = sub_63751( uParam1 );
        break;
        case 10:
        bVar8 = sub_63998( uParam1 );
        break;
        case 11:
        bVar8 = sub_64137( uParam1 );
        break;
        case 12:
        bVar8 = sub_64436( uParam1 );
        break;
        case 13:
        bVar8 = sub_64664( uParam1 );
        break;
        case 14:
        bVar8 = sub_64951( uParam1 );
        break;
        case 15:
        bVar8 = sub_65233( uParam1 );
        break;
        case 16:
        bVar8 = sub_65515( uParam1 );
        break;
        case 17:
        bVar8 = sub_65716( uParam1 );
        break;
        case 18:
        bVar8 = sub_65789( uParam1 );
        break;
        case 19:
        bVar8 = sub_66003( uParam1 );
        break;
        case 20:
        bVar8 = sub_66256( uParam1 );
        break;
        case 21:
        bVar8 = sub_66503( uParam1 );
        break;
        case 22:
        bVar8 = sub_66704( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_61364( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_58987( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_67027( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_59681(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_59960( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_59960( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_59960( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_59960( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_59960( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_59960( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_59960( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_59960( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_59960( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_59960( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_59960( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_59960( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_59960( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_59960( iVar3, 0, 3, 1, 0, 0 );
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
        sub_59960( iVar3, 0, sub_61242(), sub_61508(), 0, 0 );
        break;
        default:
        sub_61667( "Friend 1", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Friend 1", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_59960(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_59971( uParam1 );
    sub_60145( uParam0, 0, uParam2 );
    sub_60145( uParam0, 1, uParam3 );
    sub_60145( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_58223();
    return;
}

void sub_59971(unknown uParam0)
{
    ADD_SCORE( sub_5010(), uParam0 );
    sub_59996( uParam0 );
    return;
}

void sub_59996(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2193( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_60145(unknown uParam0, int iParam1, int iParam2)
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
        sub_60302( uParam0 );
    }
    return;
}

void sub_60302(unknown uParam0)
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

int sub_61242()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_61364( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_61364(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_61508()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_61364( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_61667(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_61759(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59960( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_61667( "Contact 2", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 2", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61985(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_59960( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_61667( "Girl 3", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Girl 3", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62135(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_59960( iVar3, 0, sub_61242(), sub_61508(), 0, 0 );
        break;
        default:
        sub_61667( "Friend 4", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Friend 4", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62413(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59960( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_59960( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_59960( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_59960( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_61667( "Contact 5", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 5", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62716(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_61667( "Contact 7", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 7", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62915(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59960( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_61667( "Contact 7b", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 7b", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63141(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_59960( iVar3, 0, sub_61242(), sub_61508(), 0, 0 );
        break;
        default:
        sub_61667( "Friend 8", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Friend 8", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63376(unknown uParam0)
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
        sub_59960( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_59960( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_59960( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_59960( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_59960( iVar3, 0, sub_61242(), sub_61508(), 0, 0 );
        break;
        default:
        sub_61667( "Friend 9", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Friend 9", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63751(unknown uParam0)
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
        sub_59960( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_59960( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_59960( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_61667( "Contact 10", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_61667( "Contact 10", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63998(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_61667( "Girl 11", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Girl 11", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64137(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59960( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_59960( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_59960( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_59960( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_59960( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_61667( "Contact 12", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 12", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64436(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59960( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_61667( "Contact 13", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 13", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64664(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_59960( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_59960( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_59960( iVar3, 0, sub_61242(), sub_61508(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_61667( "Friend 15", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Friend 15", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64951(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59960( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_59960( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_59960( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_61667( "Contact 16", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 16", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65233(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_59960( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_59960( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_59960( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_61667( "Contact 18", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 18", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65515(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_61667( "Contact 19", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 19", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65716(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_61667( "Girl 20", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65789(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_61667( "Contact 21", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 21", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_66003(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59960( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_59960( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_61667( "Contact 22", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 22", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_66256(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_59960( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59960( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_59960( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_61667( "Contact 24", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 24", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_66503(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59960( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59960( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59960( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_61667( "Contact 25", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61667( "Contact 25", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_66704(unknown uParam0)
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
        sub_59960( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_61667( "Girl 26", 1 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_61667( "Girl 26", 0 );
        sub_59960( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_67027(int iParam0, int iParam1)
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
    if (sub_67075( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_67806( iParam1 );
    }
    return;
}

int sub_67075(int iParam0, int iParam1)
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
            sub_67215( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_67215(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_67397( 0 );
    return;
}

void sub_67397(boolean bParam0)
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
        sub_67652();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_67652()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_67806(int iParam0)
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
        sub_68139( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_68139( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_68139( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_68139( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_68139( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_68139( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_68139( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_68139( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_68139( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_68139( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_68139( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_68139( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_68139( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_68139( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_68139( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_68139( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_68139( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_68139( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_68139( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_68139(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_68849(unknown uParam0, unknown uParam1)
{
    sub_68868( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_68868(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_69279()
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

int sub_69364(int iParam0, int iParam1)
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

void sub_69421(unknown uParam0)
{
    sub_1580();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_69460(unknown uParam0)
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

void sub_69568()
{
    sub_69577();
    return;
}

void sub_69577()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_69656()
{
    sub_69577();
    return;
}

void sub_69696()
{
    sub_69577();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_69788(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_69878()
{
    WAIT( 3000 );
    SET_PLAYER_MOOD_PISSED_OFF( sub_5010(), 150 );
    SAY_AMBIENT_SPEECH( l_U2611, "MISSION_FAIL_RAGE", 1, 1, 0 );
    l_U2463 = 0;
    sub_69953();
    return;
}

void sub_69953()
{
    sub_69962();
    return;
}

void sub_69962()
{
    int iVar2;

    iVar2 = 4;
    sub_69976( iVar2 );
    sub_2328( iVar2 );
    return;
}

void sub_69976(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_5010(), 150 );
    CLEAR_HELP();
    sub_1152( uParam0 );
    return;
}
