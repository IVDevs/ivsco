void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U10 = 0;
    l_U11 = 1;
    l_U12 = 3;
    l_U14 = 0;
    l_U15 = -1;
    l_U16 = 0;
    l_U17 = 0;
    l_U22 = 1;
    l_U211 = 0;
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    l_U223 = 1;
    l_U289 = 6;
    l_U327 = nil;
    l_U340 = nil;
    l_U358 = 1;
    l_U393 = nil;
    l_U413 = 1;
    l_U489 = 6;
    l_U498 = "BOGT_BoxDrop";
    l_U499 = "BOGT_Box_TickDrop";
    l_U564 = 0.63600000;
    l_U565 = 0.37600000;
    l_U614 = 0.05200000;
    l_U615 = 0.35300000;
    l_U616 = 0.30000000;
    l_U617 = 0.37200000;
    l_U618 = 0.37300000;
    l_U619 = 0.38700000;
    l_U620 = 0.44400000;
    l_U621 = 0.03750000;
    l_U622 = 0.36900000;
    l_U623 = 0.62350000;
    l_U624 = 0.60800000;
    l_U625 = {0.24300000, 0.46700000, 0.00000000};
    l_U628 = {0.23100000, 0.43500000, 0.00000000};
    l_U631 = {0.23100000, 0.43500000, 0.00000000};
    l_U634 = {0.31920000, 0.65250000, 0.00000000};
    l_U637 = {0.31920000, 0.65250000, 0.00000000};
    l_U640 = {0.24300000, 0.46700000, 0.00000000};
    l_U643 = {0.50000000, 1.10000000, 0.00000000};
    l_U646 = {0.31920000, 0.65250000, 0.00000000};
    l_U649 = {0.18225000, 0.35025000, 0.00000000};
    l_U652 = 0.30000000;
    l_U653 = 0.37000000;
    l_U654 = 0.56200000;
    l_U655 = 0.40100000;
    l_U656 = 0.30000000;
    l_U657 = 0.37000000;
    l_U658 = 0.69700000;
    l_U659 = 0.40100000;
    l_U660 = 0.30000000;
    l_U661 = 0.37000000;
    l_U662 = 0.66500000;
    l_U663 = 0.40100000;
    l_U664 = 0.32500000;
    l_U665 = 0.62500000;
    l_U666 = 0.00800000;
    l_U667 = 0.49700000;
    l_U668 = 0.52500000;
    l_U669 = 0.49700000;
    l_U670 = 0.51800000;
    l_U671 = 1;
    l_U672 = 0;
    l_U673 = {0.50000000, 0.50000000, 0};
    l_U676 = 0.20000000;
    l_U677 = 0.20000000;
    l_U721 = 0;
    l_U722 = 0;
    l_U734 = 0;
    l_U738 = 0;
    l_U911 = -1322822451;
    l_U912 = -556126186;
    l_U913 = -846446816;
    l_U914 = -846446816;
    l_U915 = 1670568326;
    l_U916 = 1354281938;
    l_U981 = {-141.76940000, -256.82210000, 14.68240000};
    l_U984 = {-164.38570000, 1394.17900000, 42.78320000};
    l_U987 = {1580.19500000, 568.05810000, 27.95520000};
    l_U990 = {1575.76800000, 572.46580000, 27.90830000};
    l_U2632 = 0;
    l_U2664 = 1;
    l_U2712 = 5000;
    l_U2713 = 10;
    l_U2730 = 492;
    l_U2731 = 0;
    l_U2788 = 1;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_983();
        sub_3300();
    }
    WAIT( 0 );
    LOAD_ADDITIONAL_TEXT( "RBULG4", 0 );
    LOAD_ADDITIONAL_TEXT( "E2BG3AU", 6 );
    sub_3876( "E2BG3AU" );
    sub_4031( 0, sub_3982(), "LUIS", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (true)
    {
        WAIT( 0 );
        switch (l_U2631)
        {
            case 0:
            sub_4282();
            break;
            case 1:
            sub_11213();
            break;
            case 2:
            sub_17910();
            break;
            case 3:
            sub_17932();
            break;
            case 4:
            sub_27360();
            break;
            case 5:
            sub_48830();
            break;
            case 6:
            sub_56315();
            break;
            case 7:
            sub_69371();
            break;
            case 8:
            sub_76030();
            break;
        }
        sub_76603( 0 );
    }
    return;
}

void sub_983()
{
    int iVar2;

    iVar2 = 5;
    sub_997( iVar2 );
    sub_2283( iVar2 );
    return;
}

void sub_997(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    sub_1006();
    if (g_U43133)
    {
        return;
    }
    iVar3 = g_U14925[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U819)
    {
        sub_1182();
        sub_1390();
        g_U11063 = 1;
    }
    else if (NOT g_U12382[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1515();
            sub_1567();
            g_U11063 = 1;
        }
    }
    sub_1660();
    sub_1799();
    uVar5 = sub_1912( uParam0 );
    sub_2190( uVar5, 0 );
    return;
}

void sub_1006()
{
    g_U43588 = 0;
    g_U43628 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionStatTracker" );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) > 0)
    {
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "MissionResultsTimer" );
    }
    return;
}

void sub_1182()
{
    if (g_U10972)
    {
        return;
    }
    sub_1209( g_U10971 );
    if (NOT (IS_BIT_SET( g_U10938._fU0, 7 )))
    {
        sub_1330();
    }
    return;
}

void sub_1209(int iParam0)
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
    if (g_U10972)
    {
        return;
    }
    iVar3 = g_U22960[iParam0]._fU100;
    iVar3--;
    g_U22960[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1330()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1390()
{
    sub_1399();
    return;
}

void sub_1399()
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

void sub_1515()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1567()
{
    sub_1576();
    return;
}

void sub_1576()
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

void sub_1660()
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

void sub_1799()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1821();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_1821()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1912(unknown uParam0)
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
    sub_2143( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_2143(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2190(int iParam0, boolean bParam1)
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

void sub_2283(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2292();
    if (g_U0)
    {
        return;
    }
    if (g_U43133)
    {
        return;
    }
    if (g_U95._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12379)
    {
        return;
    }
    iVar3 = g_U14925[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12382[iParam0]._fU12)
    {
        return;
    }
    if (g_U10938._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10938._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_3067())
    {
        return;
    }
    if (NOT g_U819)
    {
        sub_3133();
        SET_BIT( ref g_U10938._fU0, 2 );
    }
    return;
}

void sub_2292()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_2330( 5, g_U575[I] )) == 1) AND (g_U575[I]._fU20))
        {
            if ((sub_2330( 1, g_U575[I] )) != 0)
            {
                sub_2616( I );
            }
        }
    }
    if (NOT sub_2782())
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

int sub_2330(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2616(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2701( g_U575 - 1 );
    return;
}

void sub_2701(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2782()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2330( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3067()
{
    if ((g_U10938._fU4 == 0) AND (g_U10938._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_3133()
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

void sub_3300()
{
    for ( l_U920 = 0; l_U920 < 15; l_U920++ )
    {
        if (DOES_SCRIPT_FIRE_EXIST( l_U2614[l_U920] ))
        {
            REMOVE_SCRIPT_FIRE( l_U2614[l_U920] );
        }
    }
    if (l_U1090)
    {
        for ( l_U920 = 0; l_U920 < 7; l_U920++ )
        {
            STOP_PTFX( l_U943[l_U920] );
            STOP_SOUND( l_U935[l_U920] );
        }
    }
    REMOVE_ANIMS( "Gestures@Niko" );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    g_U2801 = 0;
    RELEASE_SOUND_ID( l_U2505 );
    RELEASE_SOUND_ID( l_U2504 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -198.53690000, -298.63930000, 0.00000000, -193.48020000, -237.36880000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -237.29280000, -237.65370000, 0.00000000, -136.77810000, -230.19910000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -198.53690000, -298.63930000, 0.00000000, -193.48020000, -237.36880000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -237.29280000, -237.65370000, 0.00000000, -136.77810000, -230.19910000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -249.17520000, -313.98180000, 0.00000000, -137.38420000, -301.52290000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -198.54060000, -301.03550000, 0.00000000, -192.01030000, -235.49840000, 100.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3876(unknown uParam0)
{
    StrCopy( ref l_U23._fU0, uParam0, 16 );
    sub_3893();
    return;
}

void sub_3893()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U23._fU16[I]._fU0 = nil;
        StrCopy( ref l_U23._fU16[I]._fU4, "", 32 );
        l_U23._fU344[I] = 0;
    }
    return;
}

void sub_3982()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4031(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U23._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U23._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4111( "\n PED NUMBER ", uParam0 );
    sub_4151( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4111(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4151(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4282()
{
    unknown uVar2;

    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (DOES_VEHICLE_EXIST( uVar2 ))
    {
        if (NOT (IS_CAR_DEAD( uVar2 )))
        {
            if (LOCATE_CAR_3D( uVar2, 1576.20700000, 567.76700000, 27.89480000, 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                SET_CAR_AS_MISSION_CAR( uVar2 );
                SET_CAR_COORDINATES( uVar2, 1575.97600000, 586.61860000, 27.90100000 );
                SET_CAR_HEADING( uVar2, 180.10430000 );
                CLEAR_ROOM_FOR_CAR( uVar2 );
                SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                APPLY_FORCE_TO_CAR( uVar2, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                CLOSE_ALL_CAR_DOORS( uVar2 );
                SET_CAR_ENGINE_ON( uVar2, 0, 0 );
            }
        }
    }
    g_U43137 = 24;
    sub_4512();
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1461381085, 65387, 65281, 36, 1, 0.00000000 );
    sub_7737();
    l_U2505 = GET_SOUND_ID();
    l_U2504 = GET_SOUND_ID();
    l_U1115 = 1;
    if ((IS_BIT_SET( g_U10938._fU0, 7 )) AND (NOT g_U43133))
    {
        GET_CURRENT_WEATHER( ref l_U2655 );
        FORCE_WEATHER_NOW( 1 );
        START_CUTSCENE_NOW( "BU04_AA" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        ENABLE_SCENE_STREAMING( 1 );
        CLEAR_NAMED_CUTSCENE( "BU04_AA" );
        FORCE_WEATHER_NOW( l_U2655 );
        RELEASE_WEATHER();
        g_U43104[24] = 0;
    }
    else if (g_U43133)
    {
        if (g_U43104[24] > 0)
        {
            g_U43104[24] = 0;
        }
    }
    # -sub_C1FFC0-0xc214c8( 1, ref l_U2605 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U2607 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U2606 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U2603 );
    SET_DECISION_MAKER_ATTRIBUTE_STANDING_STYLE( l_U2603, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_SIGHT_RANGE( l_U2603, 200 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U2609 );
    SET_DECISION_MAKER_ATTRIBUTE_STANDING_STYLE( l_U2609, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U2609, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_SIGHT_RANGE( l_U2609, 200 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2608 );
    SET_DECISION_MAKER_ATTRIBUTE_SIGHT_RANGE( l_U2608, 200 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2608, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2608, 50 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U2604 );
    REQUEST_MODEL( 1348744438 );
    LOAD_ALL_OBJECTS_NOW();
    while (NOT (HAS_MODEL_LOADED( 1348744438 )))
    {
        WAIT( 0 );
        if (NOT (HAS_MODEL_LOADED( l_U911 )))
        {
            PRINTSTRING( "\n LOADING... mGangModel \n" );
        }
        if (NOT (HAS_MODEL_LOADED( -1962071130 )))
        {
            PRINTSTRING( "\n LOADING... PRES \n" );
        }
        sub_9801( "CUTSCENE" );
    }
    SUPPRESS_CAR_MODEL( 1348744438 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3982() );
    CLEAR_AREA( l_U990._fU0, l_U990._fU4, l_U990._fU8, 150.00000000, 1 );
    CREATE_CAR( 1348744438, l_U990._fU0, l_U990._fU4, l_U990._fU8, ref l_U2573, 1 );
    CHANGE_CAR_COLOUR( l_U2573, 0, 0 );
    SET_CAR_HEADING( l_U2573, 180 );
    SET_CAR_ON_GROUND_PROPERLY( l_U2573 );
    if (g_U43104[24] == 0)
    {
        sub_10100( l_U987._fU0, l_U987._fU4, l_U987._fU8, 88 );
        sub_10234( 0 );
        DO_SCREEN_FADE_IN( 1000 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        CLEAR_PRINTS();
        l_U2631 = 1;
    }
    else if (g_U43104[24] == 1)
    {
        SWITCH_ROADS_OFF( -198.53690000, -298.63930000, 0.00000000, -193.48020000, -237.36880000, 100.00000000 );
        SWITCH_ROADS_OFF( -237.29280000, -237.65370000, 0.00000000, -136.77810000, -230.19910000, 100.00000000 );
        SWITCH_ROADS_OFF( -249.17520000, -313.98180000, 0.00000000, -137.38420000, -301.52290000, 100.00000000 );
        sub_10100( -145.20490000, -252.17230000, 34.60300000, 0 );
        if (NOT (HAS_CHAR_GOT_WEAPON( sub_3982(), 35 )))
        {
            GIVE_WEAPON_TO_CHAR( sub_3982(), 35, 40, 1 );
        }
        l_U2631 = 3;
    }
    else if (g_U43104[24] == 2)
    {
        sub_10100( -145.20490000, -252.17230000, 34.60300000, 0 );
        REQUEST_MODEL( 675415136 );
        REQUEST_MODEL( -1660661558 );
        REQUEST_MODEL( 1376298265 );
        REQUEST_MODEL( l_U911 );
        REQUEST_MODEL( l_U912 );
        REQUEST_ANIMS( "Missbulgarin03" );
        REQUEST_CAR_RECORDING( 490 );
        REQUEST_CAR_RECORDING( 491 );
        REQUEST_CAR_RECORDING( 492 );
        REQUEST_CAR_RECORDING( 493 );
        REQUEST_CAR_RECORDING( 470 );
        while (((((((((((NOT (HAS_MODEL_LOADED( 675415136 ))) || (NOT (HAS_MODEL_LOADED( -1660661558 )))) || (NOT (HAS_MODEL_LOADED( 1376298265 )))) || (NOT (HAS_MODEL_LOADED( l_U911 )))) || (NOT (HAS_MODEL_LOADED( l_U912 )))) || (NOT (HAVE_ANIMS_LOADED( "Missbulgarin03" )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 490 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 491 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 492 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 493 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 470 ))))
        {
            WAIT( 0 );
        }
        g_U2799 = 1;
        g_U2801 = 1;
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SET_CREATE_RANDOM_COPS( 0 );
        CLEAR_AREA_OF_COPS( -149.00000000, -255.00000000, 36.00000000, 500.00000000 );
        GIVE_WEAPON_TO_CHAR( sub_3982(), 35, 70, 1 );
        l_U2654 = 1;
        l_U2631 = 5;
    }
    else if (g_U43104[24] >= 3)
    {
        ;
    };;;;
    return;
}

void sub_4512()
{
    sub_4521();
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) > 0)
    {
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "MissionResultsTimer" );
    }
    g_U43628 = 1;
    g_U43593 = 0;
    g_U43594 = 0;
    g_U43595 = 0;
    g_U43596 = 0;
    REQUEST_SCRIPT( "MissionResultsTimer" );
    if (g_U43137 == 0)
    {
        REQUEST_SCRIPT( "MissionResultHelp" );
        sub_6300();
        sub_6338();
    }
    else
    {
        g_U43626 = 1;
        sub_6300();
        sub_6338();
        if (g_U43137 == 22)
        {
            sub_6441( 0, 0, 0 );
        }
        if (g_U43137 == 17)
        {
            sub_6441( 1, 0, 0 );
        }
        if (g_U43137 == 15)
        {
            sub_6441( 0, 1, 0 );
        }
        if (g_U43137 == 18)
        {
            sub_6441( 0, 0, 1 );
        }
        if (g_U43137 == 16)
        {
            sub_6441( 0, 0, 1 );
        }
    }
    if (g_U43133 == 1)
    {
        if ((g_U43463[g_U43137] == 0) || (g_U43463[g_U43137] == -1))
        {
            PRINTNL();
            PRINTSTRING( "**************************************" );
            PRINTNL();
            PRINTSTRING( "g_FirstPlaythroughOfMission = TRUE" );
            PRINTNL();
            PRINTSTRING( "**************************************" );
            PRINTNL();
            g_U43624 = 1;
        }
        else
        {
            PRINTSTRING( "**************************************" );
            PRINTNL();
            PRINTSTRING( "g_FirstPlaythroughOfMission = FALSE" );
            PRINTNL();
            PRINTSTRING( "**************************************" );
            PRINTNL();
            g_U43624 = 0;
        }
    }
    else
    {
        PRINTSTRING( "**************************************" );
        PRINTNL();
        PRINTSTRING( "g_FirstPlaythroughOfMission = TRUE" );
        PRINTNL();
        PRINTSTRING( "**************************************" );
        PRINTNL();
        g_U43624 = 1;
    }
    g_U43611 = 0;
    g_U43612 = 0;
    g_U43615 = 0;
    g_U43617 = 0;
    g_U43614 = 0;
    g_U43622 = 0;
    g_U43619 = 0;
    g_U43620 = 0;
    g_U43621 = 0;
    g_U43616 = 0;
    g_U43613 = 0;
    g_U43503 = 0;
    g_U43506 = 0;
    g_U43509 = 0;
    g_U43512 = 0;
    g_U43515 = 0;
    g_U43516 = 0;
    g_U43519 = 0;
    g_U43522 = 0;
    g_U43558 = 0;
    g_U43559 = 0;
    l_U728 = 0;
    g_U43509 = 0;
    g_U43508 = 0;
    g_U43507 = 0;
    g_U43498 = 0;
    PRINTNL();
    PRINTNL();
    PRINTSTRING( "*******************************************************" );
    PRINTSTRING( "g_AreMissionStatsNeeded = TRUE & Requesting MissionStatTracker.sc" );
    PRINTNL();
    PRINTSTRING( "*******************************************************" );
    PRINTNL();
    g_U43588 = 1;
    REQUEST_SCRIPT( "MissionStatTracker" );
    return;
}

void sub_4521()
{
    g_U43138[0]._fU0 = 4;
    g_U43138[0]._fU4 = 30;
    g_U43138[0]._fU8 = 0;
    g_U43138[0]._fU12 = 10;
    g_U43138[1]._fU0 = 5;
    g_U43138[1]._fU4 = 20;
    g_U43138[1]._fU8 = 10;
    g_U43138[1]._fU20 = 70;
    g_U43138[1]._fU16 = 31;
    g_U43138[2]._fU0 = 4;
    g_U43138[2]._fU4 = 0;
    g_U43138[2]._fU8 = 50;
    g_U43138[2]._fU20 = 70;
    g_U43138[2]._fU16 = 11;
    g_U43138[3]._fU0 = 2;
    g_U43138[3]._fU4 = 30;
    g_U43138[3]._fU12 = 0;
    g_U43138[5]._fU0 = 3;
    g_U43138[5]._fU4 = 10;
    g_U43138[5]._fU8 = 40;
    g_U43138[4]._fU0 = 2;
    g_U43138[4]._fU4 = 10;
    g_U43138[4]._fU8 = 0;
    g_U43138[4]._fU44 = 8000;
    g_U43138[6]._fU0 = 5;
    g_U43138[6]._fU4 = 0;
    g_U43138[6]._fU8 = 50;
    g_U43138[7]._fU0 = 5;
    g_U43138[7]._fU4 = 45;
    g_U43138[7]._fU8 = 50;
    g_U43138[7]._fU44 = 35000;
    g_U43138[8]._fU0 = 4;
    g_U43138[8]._fU4 = 35;
    g_U43138[8]._fU8 = 20;
    g_U43138[8]._fU12 = 80;
    g_U43138[9]._fU0 = 8;
    g_U43138[9]._fU4 = 50;
    g_U43138[9]._fU12 = 0;
    g_U43138[10]._fU0 = 3;
    g_U43138[10]._fU4 = 55;
    g_U43138[10]._fU44 = 7000;
    g_U43138[11]._fU0 = 10;
    g_U43138[11]._fU4 = 0;
    g_U43138[11]._fU8 = 50;
    g_U43138[11]._fU20 = 70;
    g_U43138[11]._fU16 = 25;
    g_U43138[12]._fU0 = 5;
    g_U43138[12]._fU4 = 0;
    g_U43138[12]._fU8 = 50;
    g_U43138[12]._fU12 = 60;
    g_U43138[12]._fU20 = 70;
    g_U43138[12]._fU16 = 10;
    g_U43138[12]._fU24 = 70;
    g_U43138[13]._fU0 = 7;
    g_U43138[13]._fU4 = 35;
    g_U43138[13]._fU8 = 0;
    g_U43138[14]._fU0 = 5;
    g_U43138[14]._fU4 = 15;
    g_U43138[14]._fU12 = 20;
    g_U43138[14]._fU24 = 140;
    g_U43138[15]._fU0 = 6;
    g_U43138[15]._fU4 = 0;
    g_U43138[15]._fU8 = 0;
    g_U43138[15]._fU20 = 70;
    g_U43138[15]._fU28 = 4;
    g_U43138[16]._fU0 = 4;
    g_U43138[16]._fU4 = 10;
    g_U43138[16]._fU8 = 50;
    g_U43138[16]._fU20 = 70;
    g_U43138[16]._fU16 = 6;
    g_U43138[16]._fU28 = 4;
    g_U43138[17]._fU0 = 7;
    g_U43138[17]._fU4 = 25;
    g_U43138[17]._fU8 = 50;
    g_U43138[17]._fU28 = 6;
    g_U43138[17]._fU12 = 50;
    g_U43138[18]._fU0 = 4;
    g_U43138[18]._fU4 = 20;
    g_U43138[18]._fU8 = 50;
    g_U43138[18]._fU28 = 8;
    g_U43138[19]._fU0 = 7;
    g_U43138[19]._fU4 = 50;
    g_U43138[19]._fU8 = 40;
    g_U43138[19]._fU16 = 20;
    g_U43138[19]._fU20 = 55;
    g_U43138[20]._fU0 = 5;
    g_U43138[20]._fU4 = 0;
    g_U43138[20]._fU8 = 40;
    g_U43138[20]._fU20 = 55;
    g_U43138[20]._fU16 = 20;
    g_U43138[21]._fU0 = 3;
    g_U43138[21]._fU4 = 10;
    g_U43138[21]._fU8 = 10;
    g_U43138[22]._fU0 = 6;
    g_U43138[22]._fU4 = 30;
    g_U43138[22]._fU8 = 50;
    g_U43138[22]._fU20 = 70;
    g_U43138[22]._fU16 = 20;
    g_U43138[22]._fU28 = 5;
    g_U43138[23]._fU0 = 6;
    g_U43138[23]._fU4 = 40;
    g_U43138[23]._fU8 = 40;
    g_U43138[23]._fU20 = 70;
    g_U43138[23]._fU16 = 20;
    g_U43138[24]._fU0 = 4;
    g_U43138[24]._fU4 = 30;
    g_U43138[24]._fU8 = 40;
    g_U43138[24]._fU20 = 60;
    g_U43138[24]._fU16 = 10;
    g_U43138[25]._fU0 = 4;
    g_U43138[25]._fU4 = 30;
    g_U43138[25]._fU8 = 90;
    g_U43138[25]._fU20 = 70;
    g_U43138[25]._fU16 = 25;
    g_U43138[25]._fU28 = 4;
    return;
}

void sub_6300()
{
    GET_GAME_TIMER( ref g_U43501 );
    g_U43496 = 1;
    return;
}

void sub_6338()
{
    if (NOT (IS_CHAR_DEAD( sub_3982() )))
    {
        GET_CHAR_HEALTH( sub_3982(), ref g_U43520 );
        g_U43520 = 200;
    }
    return;
}

void sub_6441(int iParam0, int iParam1, int iParam2)
{
    if (iParam1 == 1)
    {
        g_U43517 = GET_INT_STAT( 296 );
    }
    else if (iParam2 == 1)
    {
        g_U43517 = GET_INT_STAT( 297 );
    }
    else
    {
        g_U43517 = GET_INT_STAT( 294 );
    }
    if (iParam0 == 1)
    {
        RESET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER();
    }
    return;
}

void sub_7737()
{
    l_U739[7]._fU0 = 1;
    l_U739[7]._fU4[0] = {-148.57060000, -247.35840000, 35.69370000};
    l_U739[7]._fU4[1] = {-148.57060000, -247.35840000, 35.69370000};
    l_U739[7]._fU32[0] = {4.50000000, 1.00000000, 2.00000000};
    l_U739[7]._fU32[1] = {4.50000000, 1.00000000, 2.00000000};
    l_U739[7]._fU60[0] = 1;
    l_U739[7]._fU60[1] = 2;
    l_U739[7]._fU60[2] = -1;
    l_U739[6]._fU0 = 2;
    l_U739[6]._fU4[0] = {-145.11620000, -251.96430000, 35.69370000};
    l_U739[6]._fU4[1] = {-145.11620000, -251.96430000, 35.69370000};
    l_U739[6]._fU32[0] = {1.50000000, 5.50000000, 2.00000000};
    l_U739[6]._fU32[1] = {1.50000000, 5.50000000, 2.00000000};
    l_U739[6]._fU60[0] = 0;
    l_U739[6]._fU60[1] = 2;
    l_U739[6]._fU60[2] = -1;
    l_U739[5]._fU0 = 3;
    l_U739[5]._fU4[0] = {-148.45630000, -256.24410000, 35.69370000};
    l_U739[5]._fU4[1] = {-148.45630000, -256.24410000, 35.69370000};
    l_U739[5]._fU32[0] = {4.50000000, 1.30000000, 2.00000000};
    l_U739[5]._fU32[1] = {4.50000000, 1.30000000, 2.00000000};
    l_U739[5]._fU60[0] = 0;
    l_U739[5]._fU60[1] = 1;
    l_U739[5]._fU60[2] = 3;
    l_U739[4]._fU0 = 4;
    l_U739[4]._fU4[0] = {-150.97860000, -251.99870000, 35.69370000};
    l_U739[4]._fU4[1] = {-150.97860000, -251.99870000, 35.69370000};
    l_U739[4]._fU32[0] = {2.00000000, 5.50000000, 2.00000000};
    l_U739[4]._fU32[1] = {2.00000000, 5.50000000, 2.00000000};
    l_U739[4]._fU60[0] = 1;
    l_U739[4]._fU60[1] = 3;
    l_U739[4]._fU60[2] = -1;
    l_U739[3]._fU0 = 5;
    l_U739[3]._fU4[0] = {l_U739[0]._fU4[0]};
    l_U739[3]._fU4[1] = {l_U739[1]._fU4[0]};
    l_U739[3]._fU32[0] = {l_U739[0]._fU32[0]};
    l_U739[3]._fU32[1] = {l_U739[1]._fU32[0]};
    l_U739[3]._fU60[0] = 1;
    l_U739[3]._fU60[1] = 2;
    l_U739[3]._fU60[2] = 0;
    l_U739[2]._fU0 = 6;
    l_U739[2]._fU4[0] = {l_U739[0]._fU4[0]};
    l_U739[2]._fU4[1] = {l_U739[3]._fU4[0]};
    l_U739[2]._fU32[0] = {l_U739[0]._fU32[0]};
    l_U739[2]._fU32[1] = {l_U739[3]._fU32[0]};
    l_U739[2]._fU60[0] = 1;
    l_U739[2]._fU60[1] = 2;
    l_U739[2]._fU60[2] = 3;
    l_U739[1]._fU0 = 7;
    l_U739[1]._fU4[0] = {l_U739[2]._fU4[0]};
    l_U739[1]._fU4[1] = {l_U739[1]._fU4[0]};
    l_U739[1]._fU32[0] = {l_U739[2]._fU32[0]};
    l_U739[1]._fU32[1] = {l_U739[1]._fU32[0]};
    l_U739[1]._fU60[0] = 0;
    l_U739[1]._fU60[1] = 2;
    l_U739[1]._fU60[2] = 3;
    l_U739[0]._fU0 = 8;
    l_U739[0]._fU4[0] = {l_U739[2]._fU4[0]};
    l_U739[0]._fU4[1] = {l_U739[3]._fU4[0]};
    l_U739[0]._fU32[0] = {l_U739[2]._fU32[0]};
    l_U739[0]._fU32[1] = {l_U739[3]._fU32[0]};
    l_U739[0]._fU60[0] = 0;
    l_U739[0]._fU60[1] = 1;
    l_U739[0]._fU60[2] = 3;
    return;
}

void sub_9801(unknown uParam0)
{
    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    SET_TEXT_CENTRE( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.30000000, 0.50000000 );
    DISPLAY_TEXT( 0.51000000, 0.50000000, uParam0 );
    return;
}

void sub_10100(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    CLEAR_AREA( uParam0, uParam1, uParam2, 2.00000000, 1 );
    if (IS_CHAR_IN_ANY_CAR( sub_3982() ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( sub_3982(), uParam0, uParam1, uParam2 );
    }
    else
    {
        SET_CHAR_COORDINATES( sub_3982(), uParam0, uParam1, uParam2 );
    }
    SET_CHAR_HEADING( sub_3982(), uParam3 );
    LOAD_SCENE( uParam0, uParam1, uParam2 );
    SET_CAM_BEHIND_PED( sub_3982() );
    return;
}

void sub_10234(boolean bParam0)
{
    if (bParam0)
    {
        SET_PLAYER_CONTROL( sub_10250(), 0 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        CLEAR_PRINTS();
    }
    else
    {
        SET_PLAYER_CONTROL( sub_10250(), 1 );
        DISPLAY_HUD( 1 );
        DISPLAY_RADAR( 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        for ( l_U920 = 0; l_U920 < 4; l_U920++ )
        {
            if (DOES_CAM_EXIST( l_U2598[l_U920] ))
            {
                DESTROY_CAM( l_U2598[l_U920] );
            }
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_CAM_BEHIND_PED( sub_3982() );
    }
    return;
}

void sub_10250()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_11213()
{
    switch (l_U918)
    {
        case 0:
        if (IS_PLAYER_CONTROL_ON( sub_10250() ))
        {
            if (NOT l_U2663)
            {
                ADD_BLIP_FOR_COORD( l_U981._fU0, l_U981._fU4, l_U981._fU8 - 0.50000000, ref l_U2581 );
                SET_ROUTE( l_U2581, 1 );
                sub_11355( ref l_U2581, -126.85650000, -262.65030000, 12.31900000, 180.94240000 );
                PRINT_NOW( "STAGE_POS1", 7500, 1 );
                l_U2663 = 1;
            }
            if (sub_11441())
            {
                if (sub_11658())
                {
                    if (l_U2664)
                    {
                        if (l_U2661)
                        {
                            l_U2661 = 0;
                        }
                        switch (l_U2666)
                        {
                            case 0:
                            if (sub_11856( 3, "E2BG3_CARMA", "E2BG3AU" ))
                            {
                                l_U2666++;
                            }
                            break;
                            case 1:
                            if ((sub_15014( 0 )) || (sub_15275() == 2))
                            {
                                l_U2666++;
                            }
                            break;
                            case 2:
                            if (NOT (IS_WANTED_LEVEL_GREATER( sub_10250(), 0 )))
                            {
                                if (DOES_BLIP_EXIST( l_U2581 ))
                                {
                                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2581 );
                                    l_U2665 = 1;
                                }
                                CREATE_PICKUP_ROTATE( sub_15417( 35 ), 22, 40, -151.90400000, -256.96100000, 12.64700000, 90.00000000, 300.00000000, 90.00000000, ref l_U2610 );
                                ADD_BLIP_FOR_PICKUP( l_U2610, ref l_U2630 );
                                SET_ROUTE( l_U2630, 1 );
                                sub_11355( ref l_U2630, -126.85650000, -262.65030000, 12.31900000, 180.94240000 );
                                PRINT_NOW( "STAGE_POS2", 7500, 1 );
                                l_U2664 = 0;
                                l_U2660 = 1;
                                l_U2662 = 1;
                                l_U2666++;
                            }
                            break;
                        }
                    }
                    else
                    {
                        l_U2661 = 0;
                        if (((NOT (HAS_CHAR_GOT_WEAPON( sub_3982(), 35 ))) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_3982(), 16 )))) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_3982(), 17 ))))
                        {
                            if (l_U2662)
                            {
                                if (NOT l_U2656)
                                {
                                    if (HAS_PLAYER_COLLECTED_PICKUP( 0, l_U2610 ))
                                    {
                                        SCRIPT_ASSERT( "Collected1" );
                                        l_U2656 = 1;
                                    }
                                    else if (NOT (DOES_BLIP_EXIST( l_U2630 )))
                                    {
                                        ADD_BLIP_FOR_PICKUP( l_U2610, ref l_U2630 );
                                        SET_ROUTE( l_U2630, 1 );
                                        sub_11355( ref l_U2630, -126.85650000, -262.65030000, 12.31900000, 180.94240000 );
                                    }
                                    if (DOES_BLIP_EXIST( l_U2581 ))
                                    {
                                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2581 );
                                    }
                                    if (l_U2659)
                                    {
                                        l_U2659 = 0;
                                    }
                                }
                                else
                                {
                                    sub_15872( 1 );
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U2661 = 1;
                if (DOES_BLIP_EXIST( l_U2630 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2630 );
                    SET_ROUTE( l_U2630, 0 );
                }
            }
        }
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_10250(), 0 )))
        {
            if (NOT l_U2661)
            {
                if (HAS_PLAYER_COLLECTED_PICKUP( 0, l_U2610 ))
                {
                    l_U2656 = 1;
                    l_U2661 = 1;
                }
                if (NOT l_U2665)
                {
                    if (NOT (DOES_BLIP_EXIST( l_U2630 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U2581 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U981._fU0, l_U981._fU4, l_U981._fU8 - 0.50000000, ref l_U2581 );
                            sub_11355( ref l_U2581, -126.85650000, -262.65030000, 12.31900000, 180.94240000 );
                            SET_ROUTE( l_U2581, 1 );
                            if (l_U2659)
                            {
                                l_U2659 = 0;
                            }
                        }
                    }
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U2581 )))
            {
                if ((NOT l_U2658) AND (NOT l_U2659))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), l_U981._fU0, l_U981._fU4, l_U981._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
                    {
                        PRINT_NOW( "STAGE_POS1", 7500, 1 );
                    }
                    else
                    {
                        PRINT_NOW( "Into_Buil", 7500, 1 );
                    }
                    l_U2658 = 1;
                }
                if (l_U2659)
                {
                    l_U2659 = 0;
                }
                ADD_BLIP_FOR_COORD( l_U981._fU0, l_U981._fU4, l_U981._fU8 - 0.50000000, ref l_U2581 );
                sub_11355( ref l_U2581, -126.85650000, -262.65030000, 12.31900000, 180.94240000 );
                SET_ROUTE( l_U2581, 1 );
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), l_U981._fU0, l_U981._fU4, l_U981._fU8, 1.50000000, 1.50000000, 3.00000000, 1 ))
            {
                g_U43104[24] = 1;
                SET_ROUTE( l_U2581, 0 );
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2581 );
                sub_17481( 500 );
                SWITCH_ROADS_OFF( -198.53690000, -298.63930000, 0.00000000, -193.48020000, -237.36880000, 100.00000000 );
                SWITCH_ROADS_OFF( -237.29280000, -237.65370000, 0.00000000, -136.77810000, -230.19910000, 100.00000000 );
                SWITCH_ROADS_OFF( -249.17520000, -313.98180000, 0.00000000, -137.38420000, -301.52290000, 100.00000000 );
                l_U918++;
            };;;
        }
        else if (l_U2666 != 1)
        {
            if (DOES_BLIP_EXIST( l_U2581 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2581 );
            }
            if (DOES_BLIP_EXIST( l_U2630 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2630 );
            }
            if (NOT l_U2659)
            {
                PRINT_NOW( "LOSEWAN", 7500, 1 );
                l_U2659 = 1;
            }
        }
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            sub_10100( -145.20490000, -252.17230000, 34.60300000, 0 );
            l_U918++;
            l_U2631 = 3;
        }
        break;
    }
    return;
}

void sub_11355(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2668 = (uParam0^);
        g_U2683 = {uParam1};
        g_U2681 = uParam4;
    }
    return;
}

int sub_11441()
{
    int iVar2;

    if (((NOT (HAS_CHAR_GOT_WEAPON( sub_3982(), 35 ))) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_3982(), 16 )))) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_3982(), 17 ))))
    {
        return 1;
    }
    else if (NOT l_U2656)
    {
        if (HAS_CHAR_GOT_WEAPON( sub_3982(), 35 ))
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_3982(), 35, ref iVar2 );
        }
        else if (HAS_CHAR_GOT_WEAPON( sub_3982(), 16 ))
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_3982(), 16, ref iVar2 );
        }
        else if (HAS_CHAR_GOT_WEAPON( sub_3982(), 17 ))
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_3982(), 17, ref iVar2 );
        };;;
        if (iVar2 < 10)
        {
            return 1;
        }
    }
    return 0;
}

void sub_11658()
{
    if (NOT l_U2657)
    {
        if ((IS_CHAR_IN_ANY_CAR( sub_3982() )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), l_U981._fU0, l_U981._fU4, l_U981._fU8, 100.00000000, 100.00000000, 100.00000000, 0 )))
        {
            l_U2657 = 1;
        }
    }
    return l_U2657;
}

void sub_11856(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_11914( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_11914(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U95._fU540)
    {
        return 0;
    }
    sub_11984( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 >= 6)
        {
            sub_11984( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_10250() )))
    {
        sub_11984( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_3982() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3982() ))))
    {
        sub_11984( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_11984( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_12441()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU48 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
        case 1:
        if (g_U95._fU368)
        {
            if ((g_U95._fU372) || (NOT bParam8))
            {
                sub_11984( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U95._fU60 != -1)
        {
            if ((g_U16014[g_U95._fU60]._fU212._fU24 != 5) AND (g_U16014[g_U95._fU60]._fU212._fU24 != 4))
            {
                g_U16014[g_U95._fU60]._fU212._fU24 = 0;
            }
        }
        g_U95._fU368 = 1;
        g_U95._fU372 = bParam8;
        uParam0 = g_U95._fU60;
        break;
        case 2:
        if ((NOT sub_12441()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU52 = 1;
        g_U95._fU56 = 1;
        g_U95._fU372 = 1;
        g_U95._fU368 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_13813( uParam0, ref g_U95._fU176 );
    sub_14473( ref g_U95._fU160 );
    g_U95._fU380 = uParam10;
    g_U95._fU376 = bParam11;
    g_U95._fU420 = uParam12;
    g_U95._fU424 = -1;
    g_U95._fU364 = uParam3;
    StrCopy( ref g_U95._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8972[I] = {(uParam1^)[I]};
        sub_4151( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U95._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U95._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U95._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U95._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U95._fU208, uParam6, 16 );
    g_U95._fU80 = uParam7;
    g_U95._fU384 = 0;
    g_U95._fU532 = uParam13;
    g_U8867 = 4;
    return 1;
}

void sub_11984(unknown uParam0)
{
    return;
}

int sub_12441()
{
    if ((g_U95._fU48) || (g_U95._fU52))
    {
        return 0;
    }
    if (g_U95._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_12498())
    {
        return 0;
    }
    if (g_U560 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_12498()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_10250() )))
    {
        sub_11984( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_11984( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U95._fU376)
    {
        sub_11984( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U95._fU100) || (g_U95._fU104))
    {
        sub_11984( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_10250() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3982() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3982(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_11984( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3982() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_11984( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_11984( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_10250() )))
    {
        sub_11984( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_13813(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "TONY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "MORI", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "YUSUF", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ARMANDO", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ADRIANA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "BULGARIN", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ROCCO", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "HENRIQUE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "reserve1", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "ASSISTANT", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "DESSIE", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "JOJO", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "TAYLOR", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "VIKKY", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "ANA", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "DANA", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "CINDY", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "TANIA", 32 );
        break;
        case 23:
        StrCopy( (uParam1^), "LILY", 32 );
        break;
        case 24:
        StrCopy( (uParam1^), "TAMI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DOMINO", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "HEIDI", 32 );
        break;
        case 27:
        StrCopy( (uParam1^), "SIMONE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_14473(unknown uParam0)
{
    StrCopy( (uParam0^), "LUIS", 16 );
    return;
}

int sub_15014(boolean bParam0)
{
    unknown uVar3;

    if (g_U95._fU60 != -1)
    {
        switch (g_U16014[g_U95._fU60]._fU212._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U95._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_3982(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_11984( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

int sub_15275()
{
    if (g_U95._fU60 != -1)
    {
        return g_U16014[g_U95._fU60]._fU212._fU24;
    }
    return 6;
}

void sub_15417(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

void sub_15872(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        SCRIPT_ASSERT( "haven’t dealt with every fail condition" );
        break;
        case 2:
        PRINT_NOW( "ABANDON", 7000, 1 );
        sub_16017( 0, "E2BG3_FCTON", "E2BG3AU", 0 );
        break;
        case 1:
        PRINT_NOW( "OUTAMMO", 7000, 1 );
        sub_16017( 5, "E2BG3_GENF", "E2BG3AU", 0 );
        break;
    }
    sub_16766();
    sub_3300();
    return;
}

void sub_16017(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_16061( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_16061(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

    if (g_U43133)
    {
        PRINTSTRING( "KGM........End of mission call blocked because the mission is being repeated\n" );
        return;
    }
    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U818 )))
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
        g_U817 = 1;
        g_U818 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_16766()
{
    int iVar2;

    iVar2 = 5;
    sub_16780( iVar2 );
    sub_2283( iVar2 );
    return;
}

void sub_16780(unknown uParam0)
{
    if (g_U12382[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_10250(), 150 );
    CLEAR_HELP();
    sub_997( uParam0 );
    return;
}

void sub_17481(unknown uParam0)
{
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT()))
    {
        DO_SCREEN_FADE_OUT( uParam0 );
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    return;
}

void sub_17910()
{
    return;
}

void sub_17932()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    switch (l_U919)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_10250(), 0 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1461381085, 65387, 65281, 36, 0, 0.00000000 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1348744438 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2573 );
        g_U2799 = 1;
        LOAD_ADDITIONAL_TEXT( "E2BG3AU", 6 );
        START_CUTSCENE_NOW( "BU04_BA" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        g_U2801 = 1;
        SET_CREATE_RANDOM_COPS( 0 );
        CLEAR_AREA_OF_COPS( -149.00000000, -255.00000000, 36.00000000, 500.00000000 );
        CLEAR_NAMED_CUTSCENE( "BU04_BA" );
        if (HAS_CHAR_GOT_WEAPON( sub_3982(), 35 ))
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_3982(), 35, ref iVar2 );
            if (iVar2 < 40)
            {
                iVar3 = 40 - iVar2;
                ADD_AMMO_TO_CHAR( sub_3982(), 35, iVar3 );
            }
            SET_CURRENT_CHAR_WEAPON( sub_3982(), 35, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( sub_3982(), 16 ))
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_3982(), 16, ref iVar2 );
            if (iVar2 < 40)
            {
                iVar3 = 40 - iVar2;
                ADD_AMMO_TO_CHAR( sub_3982(), 16, iVar3 );
            }
            SET_CURRENT_CHAR_WEAPON( sub_3982(), 16, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( sub_3982(), 17 ))
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_3982(), 17, ref iVar2 );
            if (iVar2 < 40)
            {
                iVar3 = 40 - iVar2;
                ADD_AMMO_TO_CHAR( sub_3982(), 17, iVar3 );
            }
            SET_CURRENT_CHAR_WEAPON( sub_3982(), 17, 1 );
        };;;
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3982() );
        SET_CHAR_COORDINATES( sub_3982(), -145.04500000, -249.85480000, 34.68870000 );
        SET_CHAR_HEADING( sub_3982(), 237.89510000 );
        TOGGLE_CHAR_DUCKING( sub_3982() );
        SET_CHAR_DUCKING( sub_3982(), 1 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1461381085, 65387, 65281, 36, 1, 0.00000000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        GET_WEAPONTYPE_MODEL( 34, ref uVar4 );
        GET_WEAPONTYPE_MODEL( 32, ref uVar5 );
        REQUEST_MODEL( uVar4 );
        REQUEST_MODEL( uVar5 );
        REQUEST_MODEL( 675415136 );
        REQUEST_MODEL( -1660661558 );
        REQUEST_MODEL( 1376298265 );
        REQUEST_MODEL( l_U913 );
        REQUEST_MODEL( l_U914 );
        REQUEST_MODEL( l_U915 );
        REQUEST_MODEL( l_U911 );
        REQUEST_MODEL( l_U912 );
        REQUEST_ANIMS( "Missbulgarin03" );
        REQUEST_CAR_RECORDING( 490 );
        REQUEST_CAR_RECORDING( 491 );
        REQUEST_CAR_RECORDING( 492 );
        REQUEST_CAR_RECORDING( 493 );
        REQUEST_CAR_RECORDING( 470 );
        REQUEST_CAR_RECORDING( 468 );
        REQUEST_CAR_RECORDING( 456 );
        REQUEST_CAR_RECORDING( 457 );
        while ((((((((((((((((((((NOT (HAS_MODEL_LOADED( 675415136 ))) || (NOT (HAS_MODEL_LOADED( -1660661558 )))) || (NOT (HAS_MODEL_LOADED( 1376298265 )))) || (NOT (HAS_MODEL_LOADED( uVar4 )))) || (NOT (HAS_MODEL_LOADED( uVar5 )))) || (NOT (HAS_MODEL_LOADED( l_U913 )))) || (NOT (HAS_MODEL_LOADED( l_U914 )))) || (NOT (HAS_MODEL_LOADED( l_U915 )))) || (NOT (HAS_MODEL_LOADED( l_U911 )))) || (NOT (HAS_MODEL_LOADED( l_U912 )))) || (NOT (HAVE_ANIMS_LOADED( "Missbulgarin03" )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 490 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 491 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 492 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 493 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 470 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 468 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 456 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 457 )))) || (NOT (REQUEST_MISSION_AUDIO_BANK( "EP2_SFX\BG3_IN_THE_CROSSHAIRS" ))))
        {
            WAIT( 0 );
        }
        sub_19172( 0 );
        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2603, 0 );
        SET_DECISION_MAKER_ATTRIBUTE_SIGHT_RANGE( l_U2603, 254 );
        for ( l_U920 = 0; l_U920 < 4; l_U920++ )
        {
            GET_GAME_TIMER( ref l_U927[l_U920] );
        }
        SET_PLAYER_MOOD_PISSED_OFF( sub_10250(), 150 );
        sub_26284( 500 );
        SET_PLAYER_CONTROL( sub_10250(), 1 );
        for ( l_U920 = 0; l_U920 < 4; l_U920++ )
        {
            GET_GAME_TIMER( ref l_U927[l_U920] );
            if (NOT (IS_CHAR_INJURED( l_U2553[l_U920] )))
            {
                SET_CHAR_DECISION_MAKER( l_U2553[l_U920], l_U2607 );
                SET_CHAR_RELATIONSHIP( l_U2553[l_U920], 5, 0 );
                if ((l_U920 > 0) AND (l_U920 <= 3))
                {
                    SET_COMBAT_DECISION_MAKER( l_U2553[l_U920], l_U2603 );
                }
                else if (l_U920 == 0)
                {
                    SET_COMBAT_DECISION_MAKER( l_U2553[l_U920], l_U2609 );
                }
                OPEN_SEQUENCE_TASK( ref uVar6 );
                if (l_U920 != 2)
                {
                    TASK_TOGGLE_DUCK( 0, 1 );
                }
                TASK_COMBAT( 0, sub_3982() );
                CLOSE_SEQUENCE_TASK( uVar6 );
                TASK_PERFORM_SEQUENCE( l_U2553[l_U920], uVar6 );
                CLEAR_SEQUENCE_TASK( uVar6 );
                SET_CHAR_KEEP_TASK( l_U2553[l_U920], 1 );
                SET_CHAR_SHOOT_RATE( l_U2553[l_U920], 20 );
            }
        }
        PRINT_NOW( "SNIPERS", 7000, 1 );
        l_U919 = 99;
        sub_26761();
        l_U2631 = 4;
        break;
        case 1: break;
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: break;
    }
    return;
}

void sub_19172(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    switch (uParam0)
    {
        case 0:
        l_U1012[0] = {-86.47930000, -293.81680000, 50.78280000};
        l_U955[0] = 56.29510000;
        l_U1012[1] = {-207.50490000, -248.02850000, 39.94120000};
        l_U955[1] = 233.47700000;
        l_U1012[2] = {-141.85710000, -202.68070000, 63.76870000};
        l_U955[2] = 182.33710000;
        l_U1012[3] = {-174.08470000, -285.54310000, 35.93690000};
        l_U955[3] = 322.49710000;
        CLEAR_AREA( l_U1012[0]._fU0, l_U1012[0]._fU4, l_U1012[0]._fU8, 1000.00000000, 1 );
        for ( l_U920 = 0; l_U920 <= 3; l_U920++ )
        {
            CLEAR_AREA( l_U1012[l_U920]._fU0, l_U1012[l_U920]._fU4, l_U1012[l_U920]._fU8, 20.00000000, 1 );
            if ((l_U920 == 0) || (l_U920 == 2))
            {
                l_U2553[l_U920] = sub_19645( l_U911, l_U1012[l_U920], l_U955[l_U920], l_U920 );
                SET_PED_FORCE_VISUALISE_HEAD_DAMAGE_FROM_BULLETS( l_U2553[l_U920], 1 );
            }
            else
            {
                l_U2553[l_U920] = sub_19645( l_U912, l_U1012[l_U920], l_U955[l_U920], l_U920 );
            }
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U2553[l_U920], l_U1012[l_U920], 2.00000000 );
            OPEN_SEQUENCE_TASK( ref uVar3 );
            TASK_TOGGLE_DUCK( 0, 1 );
            CLOSE_SEQUENCE_TASK( uVar3 );
            TASK_PERFORM_SEQUENCE( l_U2553[l_U920], uVar3 );
            CLEAR_SEQUENCE_TASK( uVar3 );
            SET_CHAR_KEEP_TASK( l_U2553[l_U920], 1 );
        }
        break;
        case 1: break;
        case 2:
        l_U1116[1]._fU0 = sub_20088( l_U911, 24, -166.78920000, -250.23110000, 33.36990000, 263.11100000, 32, "", 1, 1 );
        l_U1116[1]._fU68 = {-166.77740000, -250.20260000, 33.36930000};
        l_U1116[1]._fU80 = 0;
        l_U1116[1]._fU132 = l_U2608;
        l_U1116[2]._fU0 = sub_20088( l_U912, 24, -171.04090000, -246.66860000, 33.83240000, 270.00000000, 14, "", 1, 1 );
        l_U1116[2]._fU68 = {-171.04090000, -246.66860000, 33.83240000};
        l_U1116[2]._fU80 = 0;
        l_U1116[2]._fU132 = l_U2608;
        l_U1116[2]._fU24 = 2;
        l_U1116[3]._fU0 = sub_20088( l_U911, 24, -213.35770000, -247.28810000, 39.44340000, 284.39410000, 16, "", 1, 1 );
        l_U1116[3]._fU68 = {-207.52270000, -247.91240000, 39.44340000};
        l_U1116[3]._fU80 = 0;
        l_U1116[3]._fU132 = l_U2603;
        break;
        case 3:
        l_U1116[4]._fU0 = sub_20088( l_U912, 24, -181.83040000, -263.18900000, 28.94700000, 284.39410000, 14, "", 1, 1 );
        l_U1116[4]._fU68 = {-181.83040000, -263.18900000, 28.94700000};
        l_U1116[4]._fU80 = 0;
        l_U1116[4]._fU132 = l_U2608;
        l_U1116[5]._fU0 = sub_20088( l_U911, 24, -219.99420000, -289.97700000, 30.84530000, 284.39410000, 16, "", 1, 1 );
        l_U1116[5]._fU68 = {-207.39610000, -280.12150000, 30.84470000};
        l_U1116[5]._fU80 = 0;
        l_U1116[5]._fU132 = l_U2603;
        CREATE_CAR( 675415136, -198.65360000, -277.80630000, 13.62810000, ref l_U2574[0], 1 );
        SET_CAR_HEADING( l_U2574[0], 30.91000000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2574[0] );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U2574[0], 1 );
        CREATE_CAR( 675415136, -212.33120000, -229.42130000, 13.44021000, ref l_U2574[1], 1 );
        SET_CAR_HEADING( l_U2574[1], 141.10000000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2574[1] );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U2574[1], 1 );
        CREATE_CAR( 675415136, -204.90690000, -237.82630000, 13.46470000, ref l_U2574[2], 1 );
        SET_CAR_HEADING( l_U2574[2], 290.79420000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2574[2] );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U2574[2], 1 );
        CREATE_CAR( 1376298265, -197.90500000, -268.85520000, 13.66810000, ref l_U2574[4], 1 );
        SET_CAR_HEADING( l_U2574[4], 335.80000000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2574[4] );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U2574[4], 1 );
        CREATE_CAR( 1376298265, -199.00840000, -250.73710000, 13.56280000, ref l_U2574[5], 1 );
        SET_CAR_HEADING( l_U2574[5], 151.40000000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2574[5] );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U2574[5], 1 );
        l_U1116[6]._fU0 = sub_20088( l_U912, 24, -198.59220000, -280.50040000, 13.72990000, 284.39410000, 34, "", 1, 1 );
        l_U1116[6]._fU68 = {-198.59220000, -280.50040000, 13.72990000};
        l_U1116[6]._fU80 = 6;
        l_U1116[6]._fU132 = l_U2608;
        l_U1116[7]._fU0 = sub_20088( l_U911, 24, -213.61540000, -229.14580000, 13.43190000, 190.00000000, 14, "", 1, 1 );
        l_U1116[7]._fU68 = {-213.61540000, -229.14580000, 13.43190000};
        l_U1116[7]._fU80 = 2;
        l_U1116[7]._fU132 = l_U2608;
        l_U1116[8]._fU0 = sub_20088( l_U912, 24, -204.28470000, -235.98840000, 13.53080000, 190.00000000, 14, "", 1, 1 );
        l_U1116[8]._fU68 = {-204.28470000, -235.98840000, 13.53080000};
        l_U1116[8]._fU80 = 3;
        l_U1116[8]._fU132 = l_U2608;
        l_U1116[9]._fU0 = sub_20088( l_U911, 24, -199.76090000, -269.70860000, 13.57290000, 190.00000000, 32, "", 1, 1 );
        l_U1116[9]._fU68 = {-199.76090000, -269.70860000, 13.57290000};
        l_U1116[9]._fU80 = 4;
        l_U1116[9]._fU132 = l_U2608;
        l_U1116[10]._fU0 = sub_20088( l_U912, 24, -202.09660000, -251.80050000, 13.65760000, 180.00000000, 34, "", 1, 1 );
        l_U1116[10]._fU68 = {-198.41300000, -266.87260000, 13.64260000};
        l_U1116[10]._fU80 = 6;
        l_U1116[10]._fU132 = l_U2608;
        l_U1116[10]._fU24 = 2;
        l_U1116[11]._fU0 = sub_20088( l_U911, 24, -199.72120000, -248.58380000, 13.44370000, 190.00000000, 13, "", 1, 1 );
        l_U1116[11]._fU68 = {-199.72120000, -248.58380000, 13.44370000};
        l_U1116[11]._fU80 = 5;
        l_U1116[11]._fU132 = l_U2608;
        break;
        case 4:
        CLEAR_AREA( -210.15540000, -304.89990000, 14.60990000, 300, 1 );
        CREATE_CAR( 675415136, -210.15540000, -304.89990000, 14.60990000, ref l_U2488[0], 1 );
        SET_VEHICLE_QUATERNION( l_U2488[0], 0.00220000, 0.01450000, -0.67840000, 0.73460000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2488[0] );
        CREATE_CHAR_INSIDE_CAR( l_U2488[0], 26, l_U911, ref l_U2494[0] );
        SET_CHAR_DECISION_MAKER( l_U2494[0], l_U2606 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2494[0], 1 );
        GIVE_WEAPON_TO_CHAR( l_U2494[0], 13, 3000, 1 );
        l_U1116[0]._fU0 = sub_20088( l_U911, 24, -147.59270000, -250.09320000, 37.55260000, 163.99780000, 0, "", 1, 1 );
        SET_CHAR_PROOFS( l_U1116[0]._fU0, 1, 1, 1, 1, 1 );
        FREEZE_CHAR_POSITION( l_U1116[0]._fU0, 1 );
        SET_CHAR_VISIBLE( l_U1116[0]._fU0, 0 );
        STOP_PED_SPEAKING( l_U1116[0]._fU0, 1 );
        CREATE_CHAR_AS_PASSENGER( l_U2488[0], 26, l_U911, 0, ref l_U2494[1] );
        SET_CHAR_DECISION_MAKER( l_U2494[1], l_U2606 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2494[1], 1 );
        GIVE_WEAPON_TO_CHAR( l_U2494[1], 13, 3000, 1 );
        CREATE_CAR( -1660661558, -87.52310000, -238.98900000, 41.76360000, ref l_U2488[3], 1 );
        SET_HELI_BLADES_FULL_SPEED( l_U2488[3] );
        SET_VEHICLE_QUATERNION( l_U2488[3], 0.00130000, 0.00080000, 0.69150000, 0.72240000 );
        CREATE_CHAR_INSIDE_CAR( l_U2488[3], 26, l_U911, ref l_U2494[4] );
        CHANGE_CAR_COLOUR( l_U2488[3], 38, 38 );
        SET_CHAR_DECISION_MAKER( l_U2494[4], l_U2606 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2494[4], 1 );
        START_PLAYBACK_RECORDED_CAR( l_U2488[3], 493 );
        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2488[3], 5000 );
        PAUSE_PLAYBACK_RECORDED_CAR( l_U2488[3] );
        CREATE_CHAR_AS_PASSENGER( l_U2488[3], 26, l_U911, 1, ref l_U2567[1] );
        SET_CHAR_DECISION_MAKER( l_U2567[1], l_U2606 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2567[1], 1 );
        GIVE_WEAPON_TO_CHAR( l_U2567[1], 13, 1000, 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U2567[1], 0 );
        SET_CHAR_ACCURACY( l_U2567[1], 0 );
        CREATE_CHAR_AS_PASSENGER( l_U2488[3], 26, l_U911, 2, ref l_U2567[2] );
        SET_CHAR_DECISION_MAKER( l_U2567[2], l_U2606 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2567[2], 1 );
        GIVE_WEAPON_TO_CHAR( l_U2567[2], 13, 1000, 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U2567[2], 0 );
        SET_CHAR_ACCURACY( l_U2567[2], 0 );
        CREATE_CAR( 675415136, -238.00530000, -223.61740000, 14.29590000, ref l_U2488[1], 1 );
        SET_CAR_HEADING( l_U2488[1], 204.49910000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2488[1] );
        CREATE_CHAR_INSIDE_CAR( l_U2488[1], 26, l_U911, ref l_U2494[2] );
        SET_CHAR_DECISION_MAKER( l_U2494[2], l_U2606 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2494[2], 1 );
        GIVE_WEAPON_TO_CHAR( l_U2494[2], 13, 3000, 1 );
        CREATE_CHAR_AS_PASSENGER( l_U2488[1], 26, l_U911, 0, ref l_U2494[3] );
        SET_CHAR_DECISION_MAKER( l_U2494[3], l_U2606 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2494[3], 1 );
        GIVE_WEAPON_TO_CHAR( l_U2494[3], 13, 3000, 1 );
        CLEAR_AREA( -164.92870000, -306.54810000, 14.29650000, 300, 1 );
        CREATE_CAR( 1376298265, -164.92870000, -306.54810000, 14.29650000, ref l_U2488[2], 1 );
        SET_VEHICLE_QUATERNION( l_U2488[2], 0.01740000, -0.01500000, 0.60580000, 0.79530000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2488[2] );
        break;
        case 7:
        l_U1116[15]._fU0 = sub_20088( l_U912, 24, -175.20820000, -253.39510000, 33.83240000, 270.00000000, 34, "", 1, 1 );
        l_U1116[15]._fU68 = {-171.04090000, -246.66860000, 33.83240000};
        l_U1116[15]._fU80 = 0;
        l_U1116[15]._fU132 = l_U2608;
        l_U1116[15]._fU24 = 1;
        break;
        case 11:
        CREATE_CAR( -1660661558, -199.46430000, -201.05430000, 13.44960000, ref l_U2574[3], 1 );
        CHANGE_CAR_COLOUR( l_U2574[3], 38, 38 );
        SET_CAR_HEADING( l_U2574[3], 67.99030000 );
        FREEZE_CAR_POSITION( l_U2574[3], 1 );
        CREATE_CHAR_INSIDE_CAR( l_U2574[3], 26, l_U911, ref l_U2567[0] );
        SET_CHAR_DECISION_MAKER( l_U2567[0], l_U2606 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2567[0], 1 );
        SET_HELI_BLADES_FULL_SPEED( l_U2574[3] );
        break;
        case 12:
        if (NOT (IS_CAR_DEAD( l_U2574[3] )))
        {
            CREATE_CHAR( 26, l_U912, -178.66400000, -226.68500000, 13.33170000, ref l_U2567[1], 1 );
            SET_CHAR_DECISION_MAKER( l_U2567[1], l_U2606 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2567[1], 1 );
            GIVE_WEAPON_TO_CHAR( l_U2567[1], 34, 1000, 1 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U2567[1], 0 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U2567[1], 24 );
            TASK_PLAY_ANIM( l_U2567[1], "helicopter_shoot_loop", "missBulgarin03", 1000, 1, 0, 0, 0, 0 );
            SET_CHAR_AS_ENEMY( l_U2567[1], 1 );
            ATTACH_PED_TO_CAR( l_U2567[1], l_U2574[3], 0, -0.77000000, -0.14000000, 0.00000000, 90.00000000, 0, 1, 1 );
            SET_CHAR_HEALTH( l_U2567[1], 2000 );
        }
        break;
        case 13:
        if (NOT (IS_CAR_DEAD( l_U2574[3] )))
        {
            CREATE_CHAR( 26, l_U911, -180.47530000, -225.95250000, 13.38880000, ref l_U2567[2], 1 );
            SET_CHAR_DECISION_MAKER( l_U2567[2], l_U2606 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2567[2], 1 );
            GIVE_WEAPON_TO_CHAR( l_U2567[2], 34, 1000, 1 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U2567[2], 0 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U2567[2], 24 );
            TASK_PLAY_ANIM( l_U2567[2], "helicopter_idle", "missBulgarin03", 1000, 1, 0, 0, 0, 0 );
            SET_CHAR_AS_ENEMY( l_U2567[2], 1 );
            ATTACH_PED_TO_CAR( l_U2567[2], l_U2574[3], 0, 0.77000000, 0.03000000, 0.00000000, 270.00000000, 0, 0, 0 );
        }
        break;
        case 14:
        if (NOT (IS_CAR_DEAD( l_U2574[3] )))
        {
            if (IS_CAR_PASSENGER_SEAT_FREE( l_U2574[3], 1 ))
            {
                CREATE_CHAR_AS_PASSENGER( l_U2574[3], 26, l_U912, 1, ref l_U2567[1] );
                SET_CHAR_DECISION_MAKER( l_U2567[1], l_U2606 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2567[1], 1 );
                GIVE_WEAPON_TO_CHAR( l_U2567[1], 34, 1000, 1 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U2567[1], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U2567[1], 24 );
                SET_CHAR_AS_ENEMY( l_U2567[1], 1 );
                SET_SENSE_RANGE( l_U2567[1], 150.00000000 );
            }
            else
            {
                SCRIPT_ASSERT( "0 Not free!" );
            }
            if (IS_CAR_PASSENGER_SEAT_FREE( l_U2574[3], 2 ))
            {
                CREATE_CHAR_AS_PASSENGER( l_U2574[3], 26, l_U911, 2, ref l_U2567[2] );
                SET_CHAR_DECISION_MAKER( l_U2567[2], l_U2606 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2567[2], 1 );
                GIVE_WEAPON_TO_CHAR( l_U2567[2], 34, 1000, 1 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U2567[2], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U2567[2], 24 );
                SET_CHAR_AS_ENEMY( l_U2567[2], 1 );
                SET_SENSE_RANGE( l_U2567[2], 150.00000000 );
            }
        }
        break;
        case 8:
        l_U1116[17]._fU0 = sub_20088( l_U911, 24, -175.22790000, -253.65040000, 33.83240000, 270.00000000, 32, "", 1, 1 );
        l_U1116[17]._fU68 = {-175.96350000, -249.53800000, 33.83240000};
        l_U1116[17]._fU80 = 0;
        l_U1116[17]._fU132 = l_U2608;
        l_U1116[17]._fU24 = 2;
        l_U1116[18]._fU0 = sub_20088( l_U912, 24, -175.20090000, -254.13110000, 33.83240000, 270.00000000, 32, "", 1, 1 );
        l_U1116[18]._fU68 = {-175.20090000, -254.13110000, 33.83240000};
        l_U1116[18]._fU80 = 0;
        l_U1116[18]._fU132 = l_U2608;
        break;
        case 9:
        l_U1116[14]._fU0 = sub_20088( l_U912, 24, -175.46020000, -255.17240000, 33.83240000, 339.50600000, 4, "", 1, 1 );
        sub_4031( 1, l_U1116[14]._fU0, "ASSASSIN", 0 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U1116[14]._fU0, 1 );
        break;
        case 10:
        l_U1116[16]._fU0 = sub_20088( l_U912, 24, -212.71600000, -251.54900000, 39.59330000, 270.00000000, 21, "", 1, 1 );
        break;
        case 15:
        l_U1116[19]._fU0 = sub_20088( l_U912, 24, -166.41810000, -284.75470000, 32.11220000, 90.00000000, 34, "", 1, 1 );
        l_U1116[19]._fU68 = {-171.12710000, -274.67270000, 32.13070000};
        l_U1116[19]._fU80 = 0;
        l_U1116[19]._fU132 = l_U2608;
        l_U1116[20]._fU0 = sub_20088( l_U911, 24, -165.63800000, -287.02450000, 32.04510000, 0.00000000, 34, "", 1, 1 );
        l_U1116[20]._fU68 = {-168.40000000, -273.60420000, 32.13120000};
        l_U1116[20]._fU80 = 0;
        l_U1116[20]._fU132 = l_U2608;
        l_U1116[20]._fU24 = 2;
        l_U1116[21]._fU0 = sub_20088( l_U912, 24, -164.94620000, -285.92360000, 32.07740000, 0.00000000, 34, "", 1, 1 );
        l_U1116[21]._fU68 = {-163.79020000, -274.84260000, 32.13060000};
        l_U1116[21]._fU80 = 0;
        l_U1116[21]._fU132 = l_U2608;
        break;
        case 5:
        l_U2477[0] = sub_25406( l_U913, 30, -71.12200000, -300.02450000, 13.76250000, 93.26380000 );
        l_U2477[1] = sub_25406( l_U914, 30, -99.96230000, -297.68200000, 13.75900000, 289.34250000 );
        l_U2477[2] = sub_25406( l_U915, 30, -72.86090000, -301.72050000, 13.76250000, 93.26380000 );
        break;
        case 6:
        CLEAR_AREA_OF_CARS( -135.59650000, -180.28790000, 13.61580000, 20.00000000 );
        CREATE_CAR( l_U2652, -135.59650000, -180.28790000, 13.61580000, ref l_U2651, 1 );
        SET_CAR_HEADING( l_U2651, 180.76070000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2651 );
        l_U2477[0] = sub_25406( l_U913, 30, -123.76390000, -211.24390000, 11.76360000, 93.26380000 );
        WARP_CHAR_INTO_CAR( l_U2477[0], l_U2651 );
        GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( -135.59650000, -180.28790000, 13.61580000, 300.00000000, 300.00000000, 300.00000000, ref l_U2477[1] );
        if (l_U2477[1] != nil)
        {
            SET_CHAR_AS_MISSION_CHAR( l_U2477[1] );
            SET_CHAR_COORDINATES( l_U2477[1], -141.19240000, -187.24510000, 13.28960000 );
            SET_CHAR_HEADING( l_U2477[1], 173.00000000 );
            SET_CHAR_DECISION_MAKER( l_U2477[1], l_U2606 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2477[1], 1 );
        }
        GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( -135.59650000, -180.28790000, 13.61580000, 300.00000000, 300.00000000, 300.00000000, ref l_U2477[2] );
        if (l_U2477[2] != nil)
        {
            SET_CHAR_AS_MISSION_CHAR( l_U2477[2] );
            SET_CHAR_COORDINATES( l_U2477[2], -140.29610000, -219.98690000, 11.76740000 );
            SET_CHAR_HEADING( l_U2477[2], 21.20000000 );
            SET_CHAR_DECISION_MAKER( l_U2477[2], l_U2606 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2477[2], 1 );
        }
        l_U2477[3] = sub_25406( l_U914, 30, -139.36710000, -190.39670000, 13.04700000, 185.00000000 );
        l_U2477[4] = sub_25406( l_U913, 30, -142.09520000, -215.66730000, 11.77700000, 16.80000000 );
        break;
    }
    return;
}

void sub_19645(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam4 );
    SET_CHAR_RELATIONSHIP_GROUP( Result, 23 );
    GIVE_WEAPON_TO_CHAR( Result, 16, 30000, 1 );
    SET_CURRENT_CHAR_WEAPON( Result, 16, 0 );
    SET_CHAR_ACCURACY( Result, 70 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( Result, 1 );
    SET_CHAR_HEALTH( Result, 1000 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( Result, 0 );
    ADD_BLIP_FOR_CHAR( Result, ref l_U2582[uParam5] );
    CHANGE_BLIP_DISPLAY( l_U2582[uParam5], 2 );
    return Result;
}

void sub_20088(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam5 );
    SET_CHAR_DECISION_MAKER( Result, l_U2606 );
    GIVE_WEAPON_TO_CHAR( Result, uParam6, 3000, bParam9 );
    if (bParam9)
    {
        SET_CURRENT_CHAR_WEAPON( Result, uParam6, bParam9 );
    }
    SET_CHAR_RELATIONSHIP_GROUP( Result, uParam1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    SET_CHAR_RELATIONSHIP( Result, 1, 24 );
    SET_CHAR_AS_ENEMY( Result, 1 );
    SET_PED_DIES_WHEN_INJURED( Result, 1 );
    if (bParam8)
    {
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( Result, 1 );
    }
    if (NOT (COMPARE_STRING( uParam7, "" )))
    {
        SET_ROOM_FOR_CHAR_BY_NAME( Result, uParam7 );
    }
    return Result;
}

void sub_25406(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam5 );
    SET_CHAR_RELATIONSHIP_GROUP( Result, uParam1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( Result, 1 );
    SET_CHAR_DECISION_MAKER( Result, l_U2606 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    return Result;
}

void sub_26284(unknown uParam0)
{
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    if ((NOT IS_SCREEN_FADED_IN()) AND (NOT IS_SCREEN_FADING_IN()))
    {
        DO_SCREEN_FADE_IN( uParam0 );
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    return;
}

void sub_26761()
{
    sub_26770();
    sub_26804();
    return;
}

void sub_26770()
{
    g_U43513 = GET_INT_STAT( 289 );
    return;
}

void sub_26804()
{
    RESET_LOCAL_PLAYER_WEAPON_STAT( 21, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 21, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 29, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 29, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 30, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 30, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 31, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 31, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 32, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 32, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 33, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 33, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 34, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 34, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 35, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 35, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 36, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 36, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 37, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 37, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 39, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 39, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 40, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 40, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 14, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 14, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 7, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 7, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 9, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 9, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 12, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 12, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 13, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 13, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 15, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 15, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 10, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 10, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 11, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 11, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 4, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 4, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 5, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 5, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 18, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 18, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 16, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 16, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 17, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 17, 1 );
    return;
}

void sub_27360()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    vector vVar12;
    vector vVar15;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    int iVar21;

    if (l_U2710 == 0)
    {
        GET_GAME_TIMER( ref l_U2710 );
    }
    if (NOT l_U2502)
    {
        GET_CURRENT_CHAR_WEAPON( sub_3982(), ref iVar5 );
        if (iVar5 == 35)
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_3982(), 35, ref l_U2500 );
            l_U2502 = 1;
        }
        else if (iVar5 == 16)
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_3982(), 16, ref l_U2500 );
            l_U2502 = 1;
        }
        else if (iVar5 == 17)
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_3982(), 17, ref l_U2500 );
            l_U2502 = 1;
        };;;
    }
    if (((NOT (HAS_CHAR_GOT_WEAPON( sub_3982(), 35 ))) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_3982(), 16 )))) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_3982(), 17 ))))
    {
        sub_15872( 1 );
    }
    if (NOT l_U2708)
    {
        if ((((IS_CHAR_INJURED( l_U2553[0] )) || (IS_CHAR_INJURED( l_U2553[1] ))) || (IS_CHAR_INJURED( l_U2553[2] ))) || (IS_CHAR_INJURED( l_U2553[3] )))
        {
            l_U2708 = 1;
        }
    }
    else
    {
        for ( l_U920 = 0; l_U920 < 4; l_U920++ )
        {
            if (NOT l_U1085[l_U920])
            {
                if (IS_CHAR_INJURED( l_U2553[l_U920] ))
                {
                    if (DOES_BLIP_EXIST( l_U2582[l_U920] ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2582[l_U920] );
                    }
                    l_U921++;
                    l_U1085[l_U920] = 1;
                }
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U2553[2] )))
    {
        if (NOT l_U976[2])
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U2553[2], -143.09250000, -202.60590000, 64.77370000, 2.00000000, 1.00000000, 2.00000000, 0 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar6 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -142.79590000, -202.48810000, 63.76870000, 3, -1, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar6 );
                SET_CHAR_DECISION_MAKER( l_U2553[2], l_U2606 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2553[2], 1 );
                TASK_PERFORM_SEQUENCE( l_U2553[2], uVar6 );
                CLEAR_SEQUENCE_TASK( uVar6 );
                l_U976[2] = 1;
            }
        }
        else if (sub_28042( l_U2553[2], 1, 0 ))
        {
            OPEN_SEQUENCE_TASK( ref uVar6 );
            TASK_TOGGLE_DUCK( 0, 1 );
            TASK_COMBAT( 0, sub_3982() );
            CLOSE_SEQUENCE_TASK( uVar6 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2553[2], 0 );
            SET_CHAR_DECISION_MAKER( l_U2553[2], l_U2607 );
            SET_COMBAT_DECISION_MAKER( l_U2553[2], l_U2603 );
            SET_CHAR_KEEP_TASK( l_U2553[2], 1 );
            SET_CHAR_SHOOT_RATE( l_U2553[2], 20 );
            TASK_PERFORM_SEQUENCE( l_U2553[2], uVar6 );
            CLEAR_SEQUENCE_TASK( uVar6 );
            l_U976[2] = 0;
        }
    }
    if (NOT l_U1092)
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            CLEAR_THIS_PRINT( "SNIPERS" );
            PRINT_HELP( "SNIPE_HELP1" );
            l_U1092 = 1;
            l_U2715 = 1;
        }
    }
    if (l_U921 >= 4)
    {
        if (NOT l_U2690)
        {
            if (HAS_CHAR_GOT_WEAPON( sub_3982(), 35 ))
            {
                GET_AMMO_IN_CHAR_WEAPON( sub_3982(), 35, ref l_U2501 );
            }
            else if (HAS_CHAR_GOT_WEAPON( sub_3982(), 16 ))
            {
                GET_AMMO_IN_CHAR_WEAPON( sub_3982(), 16, ref l_U2500 );
            }
            else if (HAS_CHAR_GOT_WEAPON( sub_3982(), 17 ))
            {
                GET_AMMO_IN_CHAR_WEAPON( sub_3982(), 17, ref l_U2500 );
            };;;
            if ((l_U2500 - l_U2501) == 4)
            {
                g_U43571 = 1;
            }
            else
            {
                g_U43571 = 0;
            }
            SETTIMERA( 0 );
            GET_CHAR_COORDINATES( sub_3982(), ref l_U951, ref l_U952, ref l_U953 );
            GET_CHAR_HEADING( sub_3982(), ref l_U954 );
            GET_GAME_TIMER( ref l_U2709 );
            g_U43104[24] = 2;
            l_U2631 = 5;
        }
    }
    if (NOT l_U2506[0])
    {
        if (NOT (IS_CHAR_INJURED( l_U2553[0] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U2553[0], sub_3982(), 1 ))
            {
                l_U2506[0] = 1;
            }
            else
            {
                GET_CHAR_COORDINATES( l_U2553[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if (uVar2._fU8 < 48.61000000)
                {
                    SET_CHAR_HEALTH( l_U2553[0], 10 );
                }
            }
        }
    }
    else if (sub_28786())
    {
        if (NOT (IS_CHAR_INJURED( l_U2553[0] )))
        {
            SET_CHAR_HEALTH( l_U2553[0], 5 );
        }
    }
    if (NOT l_U2506[1])
    {
        if (NOT (IS_CHAR_INJURED( l_U2553[1] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U2553[1], sub_3982(), 1 ))
            {
                l_U2506[1] = 1;
            }
        }
    }
    else if (sub_32635())
    {
        if (NOT (IS_CHAR_INJURED( l_U2553[1] )))
        {
            SET_CHAR_HEALTH( l_U2553[1], 5 );
        }
    }
    if (NOT l_U2506[2])
    {
        if (NOT (IS_CHAR_INJURED( l_U2553[2] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U2553[2], sub_3982(), 1 ))
            {
                l_U2506[2] = 1;
            }
        }
    }
    else if (sub_35140())
    {
        if (NOT (IS_CHAR_INJURED( l_U2553[2] )))
        {
            SET_CHAR_HEALTH( l_U2553[2], 5 );
        }
    }
    if (NOT l_U2506[3])
    {
        if (NOT (IS_CHAR_INJURED( l_U2553[3] )))
        {
            if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U2553[3], sub_3982(), 1 )) || (IS_KEYBOARD_KEY_JUST_PRESSED( 2 )))
            {
                l_U2506[3] = 1;
            }
        }
    }
    else if (sub_39196())
    {
        if (NOT (IS_CHAR_INJURED( l_U2553[3] )))
        {
            SET_CHAR_HEALTH( l_U2553[3], 5 );
        }
    }
    if (NOT l_U2690)
    {
        if (NOT l_U2714)
        {
            if (sub_41648() > 0)
            {
                if (NOT (IS_PED_IN_COVER( sub_3982() )))
                {
                    if (sub_30395( l_U2710, 10000 ))
                    {
                        if ((sub_30395( l_U2711, l_U2712 )) || (l_U2711 == 0))
                        {
                            if (NOT (IS_CHAR_SHOOTING( sub_3982() )))
                            {
                                iVar21 = sub_41832();
                                if (iVar21 > -1)
                                {
                                    if (NOT (IS_CHAR_DEAD( l_U2553[iVar21] )))
                                    {
                                        GET_CHAR_COORDINATES( l_U2553[iVar21], ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                                        sub_42307( sub_3982(), uVar9, ref vVar12 );
                                        vVar15 = {vVar12 / (VMAG( vVar12 ))};
                                        vVar15 = {vVar15 * 3.00000000};
                                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3982(), vVar15.x, vVar15.y, vVar15.z, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                                        GET_CHAR_COORDINATES( sub_3982(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                        FIRE_SINGLE_BULLET( uVar9._fU0, uVar9._fU4, uVar9._fU8, uVar2._fU0, uVar2._fU4, uVar2._fU8 + 0.30000000, l_U2713 );
                                        GET_GAME_TIMER( ref l_U2711 );
                                    }
                                }
                            }
                            else
                            {
                                GET_GAME_TIMER( ref l_U2711 );
                            }
                        }
                    }
                }
            }
        }
    }
    if (NOT l_U2690)
    {
        if (NOT l_U2714)
        {
            GET_CHAR_COORDINATES( sub_3982(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (uVar2._fU8 < 16.30000000)
            {
                if (NOT (IS_PED_RAGDOLL( sub_3982() )))
                {
                    for ( l_U920 = 0; l_U920 < 4; l_U920++ )
                    {
                        if (DOES_BLIP_EXIST( l_U2582[l_U920] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2582[l_U920] );
                        }
                    }
                    ADD_BLIP_FOR_COORD( l_U981._fU0, l_U981._fU4, l_U981._fU8 - 0.50000000, ref l_U2581 );
                    sub_11355( ref l_U2581, -126.85650000, -262.65030000, 12.31900000, 180.94240000 );
                    SET_ROUTE( l_U2581, 1 );
                    PRINT_NOW( "GETBR", 7500, 1 );
                    l_U2714 = 1;
                }
            }
        }
        else if (LOCATE_CHAR_ON_FOOT_3D( sub_3982(), l_U981._fU0, l_U981._fU4, l_U981._fU8, 1.50000000, 1.50000000, 3.00000000, 1 ))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3982() )))
            {
                SET_ROUTE( l_U2581, 0 );
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2581 );
                sub_17481( 500 );
                SET_PLAYER_CONTROL( sub_10250(), 0 );
                LOAD_SCENE( -148.11540000, -256.18670000, 34.68870000 );
                SET_CHAR_COORDINATES( sub_3982(), -148.11540000, -256.18670000, 34.68870000 );
                SET_CHAR_HEADING( sub_3982(), 224.56420000 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_PLAYER_CONTROL( sub_10250(), 1 );
                l_U2714 = 0;
                sub_26284( 500 );
            }
        }
    }
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -161.16030000, -269.03720000, 35.58970000, 200.00000000, 200.00000000, 200.00000000, 0 )))
    {
        sub_15872( 2 );
    }
    if (NOT l_U2690)
    {
        if (NOT l_U2714)
        {
            if (l_U2715)
            {
                if (sub_43213())
                {
                    if ((sub_30395( l_U2716, 10000 )) || (l_U2716 == 0))
                    {
                        sub_43469( "E2BG3_LATCK", ref l_U1107, 6, 1 );
                        GET_GAME_TIMER( ref l_U2716 );
                    }
                }
            }
        }
    }
    if (NOT l_U2714)
    {
        sub_44440();
    }
    sub_44989();
    sub_45630();
    return;
}

int sub_28042(unknown uParam0, boolean bParam1, int iParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar5 );
        if (bParam1)
        {
            if (iVar5 == 7)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (iVar5 == 1)
        {
            GET_SEQUENCE_PROGRESS( uParam0, ref iVar6 );
            if (iVar6 > iParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_28786()
{
    vector vVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    if (NOT l_U2696[0])
    {
        if (NOT sub_28809())
        {
            l_U2696[0] = 1;
        }
    }
    else if ((((l_U2670[0] > 0) AND (NOT l_U2701[0])) AND (l_U2670[0] < 99)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_28809())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U2701[0] = 1;
            l_U2670[0] = 99;
            l_U2675[0] = 99;
        }
    }
    switch (l_U2670[0])
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U2553[0] )))
        {
            l_U2690 = 1;
            BEGIN_CAM_COMMANDS( ref l_U2511 );
            SET_PLAYER_CONTROL( sub_10250(), 0 );
            SET_INSTANT_WIDESCREEN_BORDERS( 1 );
            DISPLAY_RADAR( 0 );
            sub_29187( 0 );
            CREATE_CAM( 14, ref l_U2512[18] );
            CREATE_CAM( 14, ref l_U2512[21] );
            CREATE_CAM( 14, ref l_U2512[22] );
            CREATE_CAM( 3, ref l_U2512[23] );
            CREATE_CAM( 14, ref l_U2512[24] );
            CREATE_CAM( 14, ref l_U2512[25] );
            CREATE_CAM( 3, ref l_U2512[26] );
            SET_CAM_POS( l_U2512[18], -80.46612000, -300.08120000, 53.65993000 );
            SET_CAM_ROT( l_U2512[18], -15.89512000, -0.00000000, 54.90575000 );
            SET_CAM_FOV( l_U2512[18], 36.60002000 );
            SET_CAM_ACTIVE( l_U2512[18], 1 );
            SET_CAM_PROPAGATE( l_U2512[18], 1 );
            SET_CAM_POS( l_U2512[21], -69.81602000, -319.01230000, 22.71431000 );
            SET_CAM_ROT( l_U2512[21], 38.13408000, 0.00000100, 32.18996000 );
            SET_CAM_FOV( l_U2512[21], 37.50002000 );
            SET_CAM_ACTIVE( l_U2512[21], 0 );
            SET_CAM_PROPAGATE( l_U2512[21], 0 );
            SET_CAM_POS( l_U2512[22], -69.81602000, -319.01230000, 22.71431000 );
            SET_CAM_ROT( l_U2512[22], 15.28993000, 0.00000000, 32.18996000 );
            SET_CAM_FOV( l_U2512[22], 37.50002000 );
            SET_CAM_ACTIVE( l_U2512[22], 0 );
            SET_CAM_PROPAGATE( l_U2512[22], 0 );
            SET_CAM_POS( l_U2512[24], -66.27950000, -302.07680000, 14.09669000 );
            SET_CAM_ROT( l_U2512[24], 10.36747000, -0.00000000, 89.50233000 );
            SET_CAM_FOV( l_U2512[24], 28.20004000 );
            SET_CAM_ACTIVE( l_U2512[24], 0 );
            SET_CAM_PROPAGATE( l_U2512[24], 0 );
            SET_CAM_POS( l_U2512[25], -66.27950000, -302.07680000, 14.09669000 );
            SET_CAM_ROT( l_U2512[25], 10.36747000, -0.00000000, 89.50233000 );
            SET_CAM_FOV( l_U2512[25], 28.20004000 );
            SET_CAM_ACTIVE( l_U2512[25], 0 );
            SET_CAM_PROPAGATE( l_U2512[25], 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2553[0], 1 );
            SET_CHAR_DECISION_MAKER( l_U2553[0], l_U2606 );
            SET_CHAR_COORDINATES( l_U2553[0], -85.71820000, -295.21860000, 50.78280000 );
            SET_CHAR_HEADING( l_U2553[0], 53.64610000 );
            if (IS_CHAR_DUCKING( l_U2553[0] ))
            {
                TASK_TOGGLE_DUCK( l_U2553[0], 0 );
            }
            l_U2680[0] = GET_DAMAGE_TO_PED_BODY_PART( l_U2553[0], 0 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U2670[0]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U2553[0] )))
        {
            if (NOT (IS_CHAR_DUCKING( l_U2553[0] )))
            {
                vVar2 = {0.79200000, -0.61100000, 0.00000000};
                uVar5 = {vVar2};
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U2553[0], 0, 20000, 4, 0.00000000, -0.95700000, -0.28900000, 20.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_GAME_TIMER( ref l_U2685[0] );
                l_U2670[0]++;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U2553[0] )))
        {
            if ((sub_30395( l_U2685[0], 5000 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U2553[0], -84.93290000, -296.54640000, 46.78780000, 10.00000000, 8.00000000, 3.00000000, 0 )))
            {
                SET_CHAR_COORDINATES( l_U2553[0], -84.88365000, -299.24220000, 45.30652000 );
                SWITCH_PED_TO_RAGDOLL( l_U2553[0], 0, 20000, 1, 1, 1, 1 );
                CREATE_NM_MESSAGE( 1, 246 );
                SET_NM_MESSAGE_BOOL( 266, 1 );
                SEND_NM_MESSAGE( l_U2553[0] );
                if (l_U2680[0] < 10)
                {
                    PLAY_SOUND_FROM_PED( l_U2505, "BG3_IN_THE_CROSSHAIRS_SCREAM", l_U2553[0] );
                }
                SET_CAM_ACTIVE( l_U2512[21], 1 );
                SET_CAM_ACTIVE( l_U2512[22], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U2512[23], l_U2512[21], l_U2512[22], 3000, 0 );
                SET_CAM_ACTIVE( l_U2512[23], 1 );
                SET_CAM_PROPAGATE( l_U2512[23], 1 );
                SET_CAM_PROPAGATE( l_U2512[18], 0 );
                GET_GAME_TIMER( ref l_U2685[0] );
                l_U2670[0]++;
            }
            else if (sub_30395( l_U2685[0], 10000 ))
            {
                l_U2670[0] = 99;
            }
        }
        else
        {
            l_U2670[0] = 99;
        }
        break;
        case 3:
        if (sub_30395( l_U2685[0], 2000 ))
        {
            SET_CAM_ACTIVE( l_U2512[24], 1 );
            SET_CAM_ACTIVE( l_U2512[25], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U2512[26], l_U2512[24], l_U2512[25], 500, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U2512[26], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U2512[26], 1 );
            SET_CAM_PROPAGATE( l_U2512[26], 1 );
            SET_CAM_PROPAGATE( l_U2512[23], 0 );
            l_U2670[0] = 99;
            GET_GAME_TIMER( ref l_U2685[0] );
        }
        break;
        case 99:
        if (((IS_KEYBOARD_KEY_JUST_PRESSED( 2 )) || (sub_30395( l_U2685[0], 3500 ))) || (l_U2701[0]))
        {
            if (NOT (IS_CHAR_DEAD( l_U2553[0] )))
            {
                SET_CHAR_HEALTH( l_U2553[0], 5 );
            }
            SET_CAM_ACTIVE( l_U2512[18], 0 );
            SET_CAM_PROPAGATE( l_U2512[18], 0 );
            DESTROY_CAM( l_U2512[18] );
            sub_31194( ref l_U2512[21], ref l_U2512[22], ref l_U2512[23] );
            sub_31194( ref l_U2512[24], ref l_U2512[25], ref l_U2512[26] );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U2511 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            if (l_U2701[0])
            {
                STOP_SOUND( l_U2505 );
                DO_SCREEN_FADE_IN( 500 );
            }
            SET_PLAYER_CONTROL( sub_10250(), 1 );
            l_U2690 = 0;
            l_U2670[0] = 100;
        }
        break;
        case 100:
        if (NOT l_U2691[0])
        {
            if (DOES_CHAR_EXIST( l_U2477[0] ))
            {
                DELETE_CHAR( ref l_U2477[0] );
            }
            if (DOES_CHAR_EXIST( l_U2477[1] ))
            {
                DELETE_CHAR( ref l_U2477[1] );
            }
            if (DOES_CHAR_EXIST( l_U2477[2] ))
            {
                DELETE_CHAR( ref l_U2477[2] );
            }
            l_U2691[0] = 1;
            STOP_SOUND( l_U2505 );
        }
        return 1;
        break;
    }
    switch (l_U2675[0])
    {
        case 0:
        sub_19172( 5 );
        l_U2675[0]++;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U2477[0] )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2477[0], -95.13340000, -296.68080000, 13.66920000, 2, -2, 0.50000000 );
        }
        if (NOT (IS_CHAR_INJURED( l_U2477[1] )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2477[1], -79.35550000, -300.75490000, 13.76250000, 2, -2, 0.50000000 );
        }
        if (NOT (IS_CHAR_INJURED( l_U2477[2] )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2477[2], -78.06960000, -301.19360000, 13.76250000, 2, -2, 0.50000000 );
        }
        l_U2675[0]++;
        break;
        case 2:
        if (l_U2670[0] > 2)
        {
            if (NOT (IS_CHAR_DEAD( l_U2553[0] )))
            {
                GET_CHAR_COORDINATES( l_U2553[0], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (uVar8._fU8 < 17.00000000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U2477[0] )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar11 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar8._fU0 + 3.00000000, uVar8._fU4, 13.66920000, 3, -2, 0.50000000 );
                        TASK_LOOK_AT_CHAR( 0, l_U2553[0], 999999, 0 );
                        CLOSE_SEQUENCE_TASK( uVar11 );
                        TASK_PERFORM_SEQUENCE( l_U2477[0], uVar11 );
                        CLEAR_SEQUENCE_TASK( uVar11 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U2477[1] )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar11 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar8._fU0 - 3.00000000, uVar8._fU4, 13.66920000, 3, -2, 0.50000000 );
                        TASK_LOOK_AT_CHAR( 0, l_U2553[0], 9999999, 0 );
                        CLOSE_SEQUENCE_TASK( uVar11 );
                        TASK_PERFORM_SEQUENCE( l_U2477[1], uVar11 );
                        CLEAR_SEQUENCE_TASK( uVar11 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U2477[2] )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar11 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "scream", "Missbulgarin03", 100.00000000, 0, 1, 1, 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar11 );
                        TASK_PERFORM_SEQUENCE( l_U2477[2], uVar11 );
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U2477[2], "PANIC", "PAIN_VOICE", 1, 1, 2 );
                        CLEAR_SEQUENCE_TASK( uVar11 );
                    }
                    l_U2675[0]++;
                }
            }
            else
            {
                SCRIPT_ASSERT( "Sniper 0 Dead!" );
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_DEAD( l_U2553[0] )))
        {
            GET_CHAR_COORDINATES( l_U2553[0], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            if (uVar8._fU8 < 15.00000000)
            {
                STOP_SOUND( l_U2505 );
                l_U2675[0]++;
            }
        }
        break;
    }
    return 0;
}

int sub_28809()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_29187(unknown uParam0)
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

int sub_30395(int iParam0, int iParam1)
{
    int iVar4;

    if (iParam0 > 0)
    {
        GET_GAME_TIMER( ref iVar4 );
        if ((iVar4 - iParam0) > iParam1)
        {
            return 1;
        }
    }
    return 0;
}

void sub_31194(unknown uParam0, unknown uParam1, unknown uParam2)
{
    SET_CAM_ACTIVE( (uParam2^), 0 );
    SET_CAM_PROPAGATE( (uParam2^), 0 );
    SET_CAM_ACTIVE( (uParam1^), 0 );
    SET_CAM_PROPAGATE( (uParam1^), 0 );
    SET_CAM_ACTIVE( (uParam0^), 0 );
    SET_CAM_PROPAGATE( (uParam0^), 0 );
    DESTROY_CAM( (uParam2^) );
    DESTROY_CAM( (uParam0^) );
    DESTROY_CAM( (uParam1^) );
    return;
}

int sub_32635()
{
    vector vVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT l_U2696[1])
    {
        if (NOT sub_28809())
        {
            l_U2696[1] = 1;
        }
    }
    else if ((((l_U2670[1] > 0) AND (NOT l_U2701[1])) AND (l_U2670[1] < 99)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_28809())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U2701[1] = 1;
            l_U2670[1] = 99;
        }
    }
    switch (l_U2670[1])
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U2553[1] )))
        {
            l_U2690 = 1;
            BEGIN_CAM_COMMANDS( ref l_U2511 );
            SET_PLAYER_CONTROL( sub_10250(), 0 );
            SET_INSTANT_WIDESCREEN_BORDERS( 1 );
            DISPLAY_RADAR( 0 );
            sub_29187( 0 );
            CREATE_CAM( 14, ref l_U2512[18] );
            CREATE_CAM( 14, ref l_U2512[19] );
            CREATE_CAM( 3, ref l_U2512[20] );
            CREATE_CAM( 14, ref l_U2512[21] );
            CREATE_CAM( 14, ref l_U2512[22] );
            CREATE_CAM( 3, ref l_U2512[23] );
            CREATE_CAM( 14, ref l_U2512[24] );
            CREATE_CAM( 14, ref l_U2512[25] );
            CREATE_CAM( 3, ref l_U2512[26] );
            SET_CAM_POS( l_U2512[18], -209.04190000, -251.09550000, 39.70486000 );
            SET_CAM_ROT( l_U2512[18], 15.14097000, -0.00000000, -20.61112000 );
            SET_CAM_FOV( l_U2512[18], 30.60004000 );
            SET_CAM_ACTIVE( l_U2512[18], 1 );
            SET_CAM_PROPAGATE( l_U2512[18], 1 );
            SET_CAM_POS( l_U2512[19], -209.04190000, -251.09550000, 39.70486000 );
            SET_CAM_ROT( l_U2512[19], 15.14097000, -0.00000000, -7.97501100 );
            SET_CAM_FOV( l_U2512[19], 30.60004000 );
            SET_CAM_ACTIVE( l_U2512[19], 1 );
            SET_CAM_PROPAGATE( l_U2512[19], 0 );
            SET_CAM_POS( l_U2512[21], -69.81602000, -319.01230000, 22.71431000 );
            SET_CAM_ROT( l_U2512[21], 38.13408000, 0.00000100, 32.18996000 );
            SET_CAM_FOV( l_U2512[21], 37.50002000 );
            SET_CAM_ACTIVE( l_U2512[21], 0 );
            SET_CAM_PROPAGATE( l_U2512[21], 0 );
            SET_CAM_POS( l_U2512[22], -69.81602000, -319.01230000, 22.71431000 );
            SET_CAM_ROT( l_U2512[22], 15.28993000, 0.00000000, 32.18996000 );
            SET_CAM_FOV( l_U2512[22], 37.50002000 );
            SET_CAM_ACTIVE( l_U2512[22], 0 );
            SET_CAM_PROPAGATE( l_U2512[22], 0 );
            SET_CAM_POS( l_U2512[24], -66.27950000, -302.07680000, 14.09669000 );
            SET_CAM_ROT( l_U2512[24], 10.36747000, -0.00000000, 89.50233000 );
            SET_CAM_FOV( l_U2512[24], 28.20004000 );
            SET_CAM_ACTIVE( l_U2512[24], 0 );
            SET_CAM_PROPAGATE( l_U2512[24], 0 );
            SET_CAM_POS( l_U2512[25], -66.27950000, -302.07680000, 14.09669000 );
            SET_CAM_ROT( l_U2512[25], 10.36747000, -0.00000000, 89.50233000 );
            SET_CAM_FOV( l_U2512[25], 28.20004000 );
            SET_CAM_ACTIVE( l_U2512[25], 0 );
            SET_CAM_PROPAGATE( l_U2512[25], 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2553[1], 1 );
            SET_CHAR_DECISION_MAKER( l_U2553[1], l_U2606 );
            SET_TIME_SCALE( 0.50000000 );
            vVar2 = {-0.71780000, -0.00260000, 0.69630000};
            vVar2 = {vVar2 * 2.00000000};
            SET_CHAR_HEALTH( l_U2553[1], 5 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U2512[20], l_U2512[18], l_U2512[19], 2000, 0 );
            SET_CAM_ACTIVE( l_U2512[20], 1 );
            SET_CAM_PROPAGATE( l_U2512[20], 1 );
            SET_CAM_PROPAGATE( l_U2512[18], 0 );
            GET_GAME_TIMER( ref l_U2685[1] );
            l_U2670[1] = 99;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U2553[1] )))
        {
            if (NOT (IS_CHAR_DUCKING( l_U2553[1] )))
            {
                vVar2 = {0.79200000, -0.61100000, 0.00000000};
                uVar5 = {vVar2};
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U2553[1], 0, 20000, 4, 0.00000000, -0.95700000, -0.28900000, 20.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_GAME_TIMER( ref l_U2685[1] );
                l_U2670[1]++;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U2553[1] )))
        {
            if ((sub_30395( l_U2685[1], 5000 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U2553[1], -84.93290000, -296.54640000, 46.78780000, 10.00000000, 8.00000000, 3.00000000, 0 )))
            {
                SET_CHAR_COORDINATES( l_U2553[1], -84.88365000, -299.24220000, 45.30652000 );
                SWITCH_PED_TO_RAGDOLL( l_U2553[1], 0, 20000, 1, 1, 1, 1 );
                CREATE_NM_MESSAGE( 1, 246 );
                SET_NM_MESSAGE_BOOL( 266, 1 );
                SEND_NM_MESSAGE( l_U2553[1] );
                SET_CAM_ACTIVE( l_U2512[21], 1 );
                SET_CAM_ACTIVE( l_U2512[22], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U2512[23], l_U2512[21], l_U2512[22], 3000, 0 );
                SET_CAM_ACTIVE( l_U2512[23], 1 );
                SET_CAM_PROPAGATE( l_U2512[23], 1 );
                SET_CAM_PROPAGATE( l_U2512[18], 0 );
                GET_GAME_TIMER( ref l_U2685[1] );
                l_U2670[1]++;
            }
            else if (sub_30395( l_U2685[1], 10000 ))
            {
                l_U2670[0] = 99;
            }
        }
        else
        {
            l_U2670[1] = 99;
        }
        break;
        case 3:
        if (sub_30395( l_U2685[1], 2000 ))
        {
            SET_CAM_ACTIVE( l_U2512[24], 1 );
            SET_CAM_ACTIVE( l_U2512[25], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U2512[26], l_U2512[24], l_U2512[25], 500, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U2512[26], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U2512[26], 1 );
            SET_CAM_PROPAGATE( l_U2512[26], 1 );
            SET_CAM_PROPAGATE( l_U2512[23], 0 );
            l_U2670[1] = 99;
            GET_GAME_TIMER( ref l_U2685[1] );
        }
        break;
        case 99:
        if (((IS_KEYBOARD_KEY_JUST_PRESSED( 2 )) || (sub_30395( l_U2685[1], 2000 ))) || (l_U2701[1]))
        {
            if (NOT (IS_CHAR_DEAD( l_U2553[1] )))
            {
                SET_CHAR_HEALTH( l_U2553[1], 5 );
            }
            SET_TIME_SCALE( 1.00000000 );
            sub_31194( ref l_U2512[18], ref l_U2512[19], ref l_U2512[20] );
            sub_31194( ref l_U2512[21], ref l_U2512[22], ref l_U2512[23] );
            sub_31194( ref l_U2512[24], ref l_U2512[25], ref l_U2512[26] );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U2511 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            if (l_U2701[1])
            {
                DO_SCREEN_FADE_IN( 500 );
            }
            SET_PLAYER_CONTROL( sub_10250(), 1 );
            l_U2690 = 0;
            l_U2670[1] = 100;
        }
        break;
        case 100:
        return 1;
        break;
    }
    return 0;
}

int sub_35140()
{
    vector vVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int I;
    int iVar12;
    unknown uVar13;

    if (NOT l_U2696[2])
    {
        if (NOT sub_28809())
        {
            l_U2696[2] = 1;
        }
    }
    else if ((((l_U2670[2] > 0) AND (NOT l_U2701[2])) AND (l_U2670[2] < 99)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_28809())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 2 );
            }
            l_U2701[2] = 1;
            l_U2670[2] = 99;
            l_U2675[2] = 99;
        }
    }
    switch (l_U2670[2])
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U2553[2] )))
        {
            l_U2690 = 1;
            BEGIN_CAM_COMMANDS( ref l_U2511 );
            SET_PLAYER_CONTROL( sub_10250(), 0 );
            SET_INSTANT_WIDESCREEN_BORDERS( 1 );
            DISPLAY_RADAR( 0 );
            sub_29187( 0 );
            CREATE_CAM( 14, ref l_U2512[18] );
            CREATE_CAM( 14, ref l_U2512[21] );
            CREATE_CAM( 14, ref l_U2512[22] );
            CREATE_CAM( 3, ref l_U2512[23] );
            CREATE_CAM( 14, ref l_U2512[24] );
            CREATE_CAM( 14, ref l_U2512[25] );
            CREATE_CAM( 3, ref l_U2512[26] );
            SET_CAM_POS( l_U2512[18], -138.31610000, -198.65910000, 67.49438000 );
            SET_CAM_ROT( l_U2512[18], -25.13674000, 0.00000100, 147.67120000 );
            SET_CAM_FOV( l_U2512[18], 24.90005000 );
            SET_CAM_ACTIVE( l_U2512[18], 1 );
            SET_CAM_PROPAGATE( l_U2512[18], 1 );
            SET_CAM_POS( l_U2512[21], -121.32650000, -228.01080000, 33.10831000 );
            SET_CAM_ROT( l_U2512[21], 47.51431000, 0.00000100, 42.36149000 );
            SET_CAM_FOV( l_U2512[21], 32.10003000 );
            SET_CAM_ACTIVE( l_U2512[21], 0 );
            SET_CAM_PROPAGATE( l_U2512[21], 0 );
            SET_CAM_POS( l_U2512[22], -121.32650000, -228.01080000, 33.10831000 );
            SET_CAM_ROT( l_U2512[22], -9.21526000, -0.00000000, 42.36149000 );
            SET_CAM_FOV( l_U2512[22], 32.10003000 );
            SET_CAM_ACTIVE( l_U2512[22], 0 );
            SET_CAM_PROPAGATE( l_U2512[22], 0 );
            SET_CAM_POS( l_U2512[24], -142.59190000, -185.75590000, 14.00464000 );
            SET_CAM_ROT( l_U2512[24], 6.15533900, -0.00000000, -164.76310000 );
            SET_CAM_FOV( l_U2512[24], 33.30003000 );
            SET_CAM_ACTIVE( l_U2512[24], 0 );
            SET_CAM_PROPAGATE( l_U2512[24], 0 );
            SET_CAM_POS( l_U2512[25], -142.59190000, -185.75590000, 14.00464000 );
            SET_CAM_ROT( l_U2512[25], 6.15533900, -0.00000000, -164.76310000 );
            SET_CAM_FOV( l_U2512[25], 33.30003000 );
            SET_CAM_ACTIVE( l_U2512[25], 0 );
            SET_CAM_PROPAGATE( l_U2512[25], 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2553[2] );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2553[2], 1 );
            SET_CHAR_DECISION_MAKER( l_U2553[2], l_U2606 );
            SET_CHAR_COORDINATES( l_U2553[2], -142.75770000, -202.40260000, 63.76870000 );
            SET_CHAR_HEADING( l_U2553[2], 180.00000000 );
            if (IS_CHAR_DUCKING( l_U2553[2] ))
            {
                TASK_TOGGLE_DUCK( l_U2553[2], 0 );
            }
            l_U2680[2] = GET_DAMAGE_TO_PED_BODY_PART( l_U2553[2], 0 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U2670[2]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U2553[2] )))
        {
            if (NOT (IS_CHAR_DUCKING( l_U2553[2] )))
            {
                vVar2 = {0.00000000, -0.95700000, 0.00000000};
                uVar5 = {vVar2};
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U2553[2], 0, 20000, 4, 0.00000000, -0.95700000, -0.28900000, 20.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_GAME_TIMER( ref l_U2685[2] );
                l_U2670[2]++;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U2553[2] )))
        {
            if ((sub_30395( l_U2685[2], 5000 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U2553[2], -142.14710000, -205.68400000, 60.77370000, 12.00000000, 2.00000000, 2.00000000, 0 )))
            {
                SET_CHAR_COORDINATES( l_U2553[2], -140.04680000, -206.21340000, 59.11388000 );
                SWITCH_PED_TO_RAGDOLL( l_U2553[2], 0, 20000, 1, 1, 1, 1 );
                CREATE_NM_MESSAGE( 1, 246 );
                SET_NM_MESSAGE_BOOL( 266, 1 );
                SEND_NM_MESSAGE( l_U2553[2] );
                if (l_U2680[2] < 10)
                {
                    PLAY_SOUND_FROM_PED( l_U2505, "BG3_IN_THE_CROSSHAIRS_SCREAM", l_U2553[2] );
                }
                SET_CAM_ACTIVE( l_U2512[21], 1 );
                SET_CAM_ACTIVE( l_U2512[22], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U2512[23], l_U2512[21], l_U2512[22], 3000, 0 );
                SET_CAM_ACTIVE( l_U2512[23], 1 );
                SET_CAM_PROPAGATE( l_U2512[23], 1 );
                SET_CAM_PROPAGATE( l_U2512[18], 0 );
                GET_GAME_TIMER( ref l_U2685[2] );
                l_U2670[2]++;
            }
            else if (sub_30395( l_U2685[2], 10000 ))
            {
                l_U2670[2] = 99;
            }
        }
        else
        {
            l_U2670[2] = 99;
        }
        break;
        case 3:
        if (NOT (IS_CHAR_DEAD( l_U2553[2] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U2553[2], -137.60640000, -201.44440000, 12.97290000, 32.00000000, 14.00000000, 15.00000000, 0 ))
            {
                SET_CAM_ACTIVE( l_U2512[24], 1 );
                SET_CAM_ACTIVE( l_U2512[25], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U2512[26], l_U2512[24], l_U2512[25], 500, 0 );
                SET_CAM_INTERP_STYLE_DETAILED( l_U2512[26], 0, 0, 1, 1 );
                SET_CAM_ACTIVE( l_U2512[26], 1 );
                SET_CAM_PROPAGATE( l_U2512[26], 1 );
                SET_CAM_PROPAGATE( l_U2512[23], 0 );
                l_U2670[2] = 99;
                GET_GAME_TIMER( ref l_U2685[2] );
            }
        }
        else
        {
            l_U2670[2] = 99;
        }
        break;
        case 99:
        if (((IS_KEYBOARD_KEY_JUST_PRESSED( 2 )) || (sub_30395( l_U2685[2], 4500 ))) || (l_U2701[2]))
        {
            if (NOT (IS_CHAR_DEAD( l_U2553[2] )))
            {
                SET_CHAR_HEALTH( l_U2553[2], 5 );
            }
            SET_CAM_ACTIVE( l_U2512[18], 0 );
            SET_CAM_PROPAGATE( l_U2512[18], 0 );
            DESTROY_CAM( l_U2512[18] );
            sub_31194( ref l_U2512[21], ref l_U2512[22], ref l_U2512[23] );
            sub_31194( ref l_U2512[24], ref l_U2512[25], ref l_U2512[26] );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U2511 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            if (l_U2701[2])
            {
                STOP_SOUND( l_U2505 );
                l_U2707 = 1;
                DO_SCREEN_FADE_IN( 500 );
            }
            SET_PLAYER_CONTROL( sub_10250(), 1 );
            l_U2690 = 0;
            l_U2670[2] = 100;
        }
        if (NOT l_U2707)
        {
            if (NOT (IS_CHAR_DEAD( l_U2553[2] )))
            {
                GET_CHAR_COORDINATES( l_U2553[2], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (uVar8._fU8 < 13.50000000)
                {
                    STOP_SOUND( l_U2505 );
                    l_U2707 = 1;
                }
            }
        }
        break;
        case 100:
        if (NOT l_U2691[2])
        {
            for ( I = 0; I < l_U2477; I++ )
            {
                if (DOES_CHAR_EXIST( l_U2477[I] ))
                {
                    DELETE_CHAR( ref l_U2477[I] );
                }
            }
            if (DOES_VEHICLE_EXIST( l_U2651 ))
            {
                DELETE_CAR( ref l_U2651 );
            }
            STOP_SOUND( l_U2505 );
            l_U2691[2] = 1;
        }
        return 1;
        break;
    }
    switch (l_U2675[2])
    {
        case 0:
        GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U2652, ref iVar12 );
        if (iVar12 == 0)
        {
            sub_19172( 6 );
        }
        l_U2675[2]++;
        break;
        case 1:
        if (l_U2670[2] > 2)
        {
            if (NOT (IS_CHAR_INJURED( l_U2477[0] )))
            {
                if (NOT (IS_CAR_DEAD( l_U2651 )))
                {
                    TASK_CAR_MISSION_COORS_TARGET( l_U2477[0], l_U2651, -135.31760000, -224.80720000, 11.96358000, 4, 10.00000000, 2, 0, 10 );
                    l_U2675[2]++;
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U2477[1] )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2477[1], -141.87090000, -220.62150000, 11.76490000, 2, -2, 0.50000000 );
            }
            if (NOT (IS_CHAR_INJURED( l_U2477[2] )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2477[2], -139.14270000, -196.70780000, 12.45220000, 2, -2, 0.50000000 );
            }
            if (NOT (IS_CHAR_INJURED( l_U2477[3] )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2477[3], -139.00040000, -213.00800000, 11.72180000, 2, -2, 0.50000000 );
            }
            if (NOT (IS_CHAR_INJURED( l_U2477[4] )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2477[4], -138.67830000, -198.71360000, 12.24230000, 2, -2, 0.50000000 );
            }
        }
        break;
        case 2:
        if (l_U2670[2] > 3)
        {
            if (NOT (IS_CAR_DEAD( l_U2651 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U2553[2] )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U2477[0] )))
                    {
                        GET_CHAR_COORDINATES( l_U2553[2], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                        if (uVar8._fU8 < 15.00000000)
                        {
                            OPEN_SEQUENCE_TASK( ref uVar13 );
                            TASK_CAR_MISSION_PED_TARGET( 0, l_U2651, sub_3982(), 5, 10.00000000, 2, -1, -1 );
                            CLOSE_SEQUENCE_TASK( uVar13 );
                            TASK_PERFORM_SEQUENCE( l_U2477[0], uVar13 );
                            GET_GAME_TIMER( ref l_U2706 );
                            CLEAR_SEQUENCE_TASK( uVar13 );
                            l_U2675[2]++;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U2477[1] )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar13 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -138.89270000, -203.41570000, 11.82880000, 3, -2, 0.50000000 );
                            TASK_LOOK_AT_CHAR( 0, l_U2553[2], 999999, 0 );
                            CLOSE_SEQUENCE_TASK( uVar13 );
                            TASK_PERFORM_SEQUENCE( l_U2477[1], uVar13 );
                            CLEAR_SEQUENCE_TASK( uVar13 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U2477[2] )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar13 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -139.10000000, -211.18030000, 11.74440000, 3, -2, 0.50000000 );
                            TASK_LOOK_AT_CHAR( 0, l_U2553[2], 999999, 0 );
                            CLOSE_SEQUENCE_TASK( uVar13 );
                            TASK_PERFORM_SEQUENCE( l_U2477[2], uVar13 );
                            CLEAR_SEQUENCE_TASK( uVar13 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U2477[3] )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar13 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -140.81420000, -204.41930000, 11.78380000, 3, -2, 0.50000000 );
                            TASK_LOOK_AT_CHAR( 0, l_U2553[2], 999999, 0 );
                            CLOSE_SEQUENCE_TASK( uVar13 );
                            TASK_PERFORM_SEQUENCE( l_U2477[3], uVar13 );
                            CLEAR_SEQUENCE_TASK( uVar13 );
                        }
                        STOP_SOUND( l_U2505 );
                    }
                }
            }
        }
        break;
        case 3:
        if (NOT (IS_CAR_DEAD( l_U2651 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U2553[2] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U2477[0] )))
                {
                    if (sub_30395( l_U2706, 1500 ))
                    {
                        GET_CHAR_COORDINATES( l_U2553[2], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                        OPEN_SEQUENCE_TASK( ref uVar13 );
                        TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, l_U2651 );
                        TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar8._fU0, uVar8._fU4, uVar8._fU8 );
                        TASK_LOOK_AT_CHAR( 0, l_U2553[2], 999999, 0 );
                        CLOSE_SEQUENCE_TASK( uVar13 );
                        TASK_PERFORM_SEQUENCE( l_U2477[0], uVar13 );
                        GET_GAME_TIMER( ref l_U2706 );
                        CLEAR_SEQUENCE_TASK( uVar13 );
                        l_U2675[2]++;
                    }
                }
            }
        }
        break;
    }
    return 0;
}

int sub_39196()
{
    vector vVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT l_U2696[3])
    {
        if (NOT sub_28809())
        {
            l_U2696[3] = 1;
        }
    }
    else if ((((l_U2670[3] > 0) AND (NOT l_U2701[3])) AND (l_U2670[3] < 99)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_28809())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U2701[3] = 1;
            l_U2670[3] = 99;
        }
    }
    switch (l_U2670[3])
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U2553[3] )))
        {
            l_U2690 = 1;
            BEGIN_CAM_COMMANDS( ref l_U2511 );
            SET_PLAYER_CONTROL( sub_10250(), 0 );
            SET_INSTANT_WIDESCREEN_BORDERS( 1 );
            DISPLAY_RADAR( 0 );
            sub_29187( 0 );
            CREATE_CAM( 14, ref l_U2512[18] );
            CREATE_CAM( 14, ref l_U2512[19] );
            CREATE_CAM( 3, ref l_U2512[20] );
            CREATE_CAM( 14, ref l_U2512[21] );
            CREATE_CAM( 14, ref l_U2512[22] );
            CREATE_CAM( 3, ref l_U2512[23] );
            CREATE_CAM( 14, ref l_U2512[24] );
            CREATE_CAM( 14, ref l_U2512[25] );
            CREATE_CAM( 3, ref l_U2512[26] );
            SET_CAM_POS( l_U2512[18], -179.16730000, -286.83540000, 36.18000000 );
            SET_CAM_ROT( l_U2512[18], 12.14744000, -0.00000000, -73.97157000 );
            SET_CAM_FOV( l_U2512[18], 35.40002000 );
            SET_CAM_ACTIVE( l_U2512[18], 1 );
            SET_CAM_PROPAGATE( l_U2512[18], 1 );
            SET_CAM_POS( l_U2512[19], -179.16730000, -286.83540000, 36.18000000 );
            SET_CAM_ROT( l_U2512[19], 12.14744000, -0.00000000, -73.97157000 );
            SET_CAM_FOV( l_U2512[19], 35.40002000 );
            SET_CAM_ACTIVE( l_U2512[19], 1 );
            SET_CAM_PROPAGATE( l_U2512[19], 0 );
            SET_CAM_POS( l_U2512[21], -69.81602000, -319.01230000, 22.71431000 );
            SET_CAM_ROT( l_U2512[21], 38.13408000, 0.00000100, 32.18996000 );
            SET_CAM_FOV( l_U2512[21], 37.50002000 );
            SET_CAM_ACTIVE( l_U2512[21], 0 );
            SET_CAM_PROPAGATE( l_U2512[21], 0 );
            SET_CAM_POS( l_U2512[22], -69.81602000, -319.01230000, 22.71431000 );
            SET_CAM_ROT( l_U2512[22], 15.28993000, 0.00000000, 32.18996000 );
            SET_CAM_FOV( l_U2512[22], 37.50002000 );
            SET_CAM_ACTIVE( l_U2512[22], 0 );
            SET_CAM_PROPAGATE( l_U2512[22], 0 );
            SET_CAM_POS( l_U2512[24], -66.27950000, -302.07680000, 14.09669000 );
            SET_CAM_ROT( l_U2512[24], 10.36747000, -0.00000000, 89.50233000 );
            SET_CAM_FOV( l_U2512[24], 28.20004000 );
            SET_CAM_ACTIVE( l_U2512[24], 0 );
            SET_CAM_PROPAGATE( l_U2512[24], 0 );
            SET_CAM_POS( l_U2512[25], -66.27950000, -302.07680000, 14.09669000 );
            SET_CAM_ROT( l_U2512[25], 10.36747000, -0.00000000, 89.50233000 );
            SET_CAM_FOV( l_U2512[25], 28.20004000 );
            SET_CAM_ACTIVE( l_U2512[25], 0 );
            SET_CAM_PROPAGATE( l_U2512[25], 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2553[3], 1 );
            SET_CHAR_DECISION_MAKER( l_U2553[3], l_U2606 );
            SET_TIME_SCALE( 0.50000000 );
            vVar2 = {-0.71780000, -0.00260000, 0.69630000};
            vVar2 = {vVar2 * 2.00000000};
            SET_CHAR_HEALTH( l_U2553[3], 5 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U2512[20], l_U2512[18], l_U2512[19], 2000, 0 );
            SET_CAM_ACTIVE( l_U2512[20], 1 );
            SET_CAM_PROPAGATE( l_U2512[20], 1 );
            SET_CAM_PROPAGATE( l_U2512[18], 0 );
            GET_GAME_TIMER( ref l_U2685[3] );
            l_U2670[3] = 99;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U2553[3] )))
        {
            if (NOT (IS_CHAR_DUCKING( l_U2553[3] )))
            {
                vVar2 = {0.79200000, -0.61100000, 0.00000000};
                uVar5 = {vVar2};
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U2553[3], 0, 20000, 4, 0.00000000, -0.95700000, -0.28900000, 20.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                GET_GAME_TIMER( ref l_U2685[3] );
                l_U2670[3]++;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U2553[3] )))
        {
            if ((sub_30395( l_U2685[3], 5000 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U2553[3], -84.93290000, -296.54640000, 46.78780000, 10.00000000, 8.00000000, 3.00000000, 0 )))
            {
                SET_CHAR_COORDINATES( l_U2553[3], -84.88365000, -299.24220000, 45.30652000 );
                SWITCH_PED_TO_RAGDOLL( l_U2553[3], 0, 20000, 1, 1, 1, 1 );
                CREATE_NM_MESSAGE( 1, 246 );
                SET_NM_MESSAGE_BOOL( 266, 1 );
                SEND_NM_MESSAGE( l_U2553[3] );
                SET_CAM_ACTIVE( l_U2512[21], 1 );
                SET_CAM_ACTIVE( l_U2512[22], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U2512[23], l_U2512[21], l_U2512[22], 3000, 0 );
                SET_CAM_ACTIVE( l_U2512[23], 1 );
                SET_CAM_PROPAGATE( l_U2512[23], 1 );
                SET_CAM_PROPAGATE( l_U2512[18], 0 );
                GET_GAME_TIMER( ref l_U2685[3] );
                l_U2670[3]++;
            }
            else if (sub_30395( l_U2685[3], 10000 ))
            {
                l_U2670[0] = 99;
            }
        }
        else
        {
            l_U2670[3] = 99;
        }
        break;
        case 3:
        if (sub_30395( l_U2685[3], 2000 ))
        {
            SET_CAM_ACTIVE( l_U2512[24], 1 );
            SET_CAM_ACTIVE( l_U2512[25], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U2512[26], l_U2512[24], l_U2512[25], 500, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U2512[26], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U2512[26], 1 );
            SET_CAM_PROPAGATE( l_U2512[26], 1 );
            SET_CAM_PROPAGATE( l_U2512[23], 0 );
            l_U2670[3] = 99;
            GET_GAME_TIMER( ref l_U2685[3] );
        }
        break;
        case 99:
        if (((IS_KEYBOARD_KEY_JUST_PRESSED( 2 )) || (sub_30395( l_U2685[3], 2000 ))) || (l_U2701[3]))
        {
            if (NOT (IS_CHAR_DEAD( l_U2553[3] )))
            {
                SET_CHAR_HEALTH( l_U2553[3], 5 );
            }
            SET_TIME_SCALE( 1.00000000 );
            sub_31194( ref l_U2512[18], ref l_U2512[19], ref l_U2512[20] );
            sub_31194( ref l_U2512[21], ref l_U2512[22], ref l_U2512[23] );
            sub_31194( ref l_U2512[24], ref l_U2512[25], ref l_U2512[26] );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U2511 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            if (l_U2701[3])
            {
                DO_SCREEN_FADE_IN( 500 );
            }
            SET_PLAYER_CONTROL( sub_10250(), 1 );
            l_U2690 = 0;
            l_U2670[3] = 100;
        }
        break;
        case 100:
        return 1;
        break;
    }
    return 0;
}

void sub_41648()
{
    int I;
    int Result;

    for ( I = 0; I < l_U2553; I++ )
    {
        if (DOES_CHAR_EXIST( l_U2553[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U2553[I] )))
            {
                Result++;
            }
        }
    }
    return Result;
}

int sub_41832()
{
    int I;
    int Result;
    int iVar4;

    iVar4 = sub_41841();
    if (iVar4 > -1)
    {
        for ( I = 0; I <= 2; I++ )
        {
            Result = l_U739[iVar4]._fU60[I];
            if (Result > -1)
            {
                if (NOT (IS_CHAR_INJURED( l_U2553[Result] )))
                {
                    if (DOES_BLIP_EXIST( l_U2582[Result] ))
                    {
                        return Result;
                    }
                }
            }
        }
    }
    return -1;
}

int sub_41841()
{
    int Result;
    unknown[2] uVar3;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown[2] uVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    array(ref uVar3, 2);
    array(ref uVar10, 2);
    for ( Result = 0; Result < l_U739; Result++ )
    {
        uVar3[0] = {l_U739[Result]._fU4[0]};
        uVar3[1] = {l_U739[Result]._fU4[1]};
        uVar10[0] = {l_U739[Result]._fU32[0]};
        uVar10[1] = {l_U739[Result]._fU32[1]};
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), uVar3[0]._fU0, uVar3[0]._fU4, uVar3[0]._fU8, uVar10[0]._fU0, uVar10[0]._fU4, uVar10[0]._fU8, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), uVar3[1]._fU0, uVar3[1]._fU4, uVar3[1]._fU8, uVar10[1]._fU0, uVar10[1]._fU4, uVar10[1]._fU8, 0 )))
        {
            return Result;
        }
    }
    return -1;
}

void sub_42307(unknown uParam0, vector vParam1, int iParam4)
{
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar7.x, ref vVar7.y, ref vVar7.z );
        GET_CHAR_HEADING( uParam0, ref uVar13 );
        uVar10 = {vParam1 - vVar7};
        iParam4->_fU0 = (uVar10._fU0 * (COS( uVar13 ))) + (uVar10._fU4 * (SIN( uVar13 )));
        iParam4->_fU4 = (uVar10._fU4 * (COS( uVar13 ))) - (uVar10._fU0 * (SIN( uVar13 )));
        iParam4->_fU8 = uVar10._fU8;
    }
    return;
}

int sub_43213()
{
    if ((NOT (sub_43228( l_U1107 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
    {
        return 1;
    }
    return 0;
}

int sub_43228(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_11984( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_11984( "\n speech is not playing" );
    }
    return 0;
}

void sub_43469(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_43490( uParam0, ref l_U23._fU0, uParam1, uParam2, uParam3 );
}

void sub_43490(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_43544( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_43544(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_43566( iParam1 )))
    {
        return 0;
    }
    l_U23._fU384 = 0;
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
    sub_44242( ref g_U8868, ref l_U23 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_43566(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_11984( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_11984( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_11984( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_44242(int iParam0, int iParam1)
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

void sub_44440()
{
    int iVar2;

    for ( l_U920 = 0; l_U920 < 4; l_U920++ )
    {
        GET_GAME_TIMER( ref l_U922[l_U920] );
        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref iVar2 );
        if (NOT (IS_CHAR_INJURED( l_U2553[l_U920] )))
        {
            if (NOT l_U2506[l_U920])
            {
                if (IS_CHAR_SHOOTING( l_U2553[l_U920] ))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U2582[l_U920] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U2553[l_U920], ref l_U2582[l_U920] );
                        CHANGE_BLIP_DISPLAY( l_U2582[l_U920], 2 );
                        GET_GAME_TIMER( ref l_U927[l_U920] );
                        PRINTSTRING( "ADD BLIP AND RESET TIMER \n" );
                    }
                }
                else if ((l_U922[l_U920] - l_U927[l_U920]) > iVar2)
                {
                    if (NOT (DOES_BLIP_EXIST( l_U2582[l_U920] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U2553[l_U920], ref l_U2582[l_U920] );
                        CHANGE_BLIP_DISPLAY( l_U2582[l_U920], 2 );
                        GET_GAME_TIMER( ref l_U927[l_U920] );
                    }
                }
                else if ((l_U922[l_U920] - l_U927[l_U920]) > 2000)
                {
                    if (DOES_BLIP_EXIST( l_U2582[l_U920] ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2582[l_U920] );
                        GET_GAME_TIMER( ref l_U927[l_U920] );
                        PRINTSTRING( "REMOVE BLIP AND RESET TIMER \n" );
                    }
                };;;
            }
        }
    }
    return;
}

void sub_44989()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    GET_CHAR_COORDINATES( sub_3982(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    if (NOT l_U2644)
    {
        if (uVar2._fU8 > 15.30000000)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -156.13430000, -263.68790000, 12.68360000, 8.00000000, 5.00000000, 10.00000000, 0 ))
            {
                SET_CHAR_HEALTH( sub_3982(), 0 );
            }
        }
        if (sub_45113( sub_3982() ))
        {
            if (((uVar2._fU8 < 14.00000000) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -141.62310000, -254.63530000, 15.14230000, 4.00000000, 8.00000000, 2.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -143.62310000, -261.63530000, 15.14230000, 6.00000000, 3.00000000, 2.00000000, 0 )))
            {
                if (((sub_45460( sub_3982() )) == 3) || ((sub_45460( sub_3982() )) == 5))
                {
                    SET_CHAR_HEALTH( sub_3982(), 0 );
                }
            }
        }
    }
    return;
}

int sub_45113(unknown uParam0)
{
    int iVar3;

    if (sub_45122())
    {
        iVar3 = sub_45188( uParam0 );
        if (iVar3 < 0)
        {
            return 0;
        }
        else if (g_U2692[iVar3]._fU60)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_45122()
{
    if ((HAS_MODEL_LOADED( 1490460832 )) AND (HAVE_ANIMS_LOADED( "PARACHUTE" )))
    {
        return 1;
    }
    return 0;
}

int sub_45188(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < g_U2692; Result++ )
    {
        if (g_U2692[Result]._fU0 == iParam0)
        {
            if (g_U2692[Result]._fU56)
            {
                return Result;
            }
        }
    }
    return -1;
}

int sub_45460(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_45188( uParam0 );
    if (iVar3 >= 0)
    {
        return g_U2692[iVar3]._fU4;
        break;
    }
    SCRIPT_ASSERT( "GET_PARACHUTE_PED_STATE: Ped does not have a parachute equipped." );
    return 0;
}

void sub_45630()
{
    if (sub_45639() >= g_U43138[g_U43137]._fU16)
    {
        g_U43566 = 1;
    }
    else
    {
        g_U43566 = 0;
    }
    if (g_U43603 == 1)
    {
        g_U43614 = sub_45783();
        g_U43603 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (sub_45639() > g_U43614)
            {
                g_U43578 = 1;
            }
            else
            {
                g_U43578 = 0;
            }
        }
        else
        {
            g_U43578 = 0;
        }
    }
    else
    {
        g_U43578 = 0;
    }
    if (g_U43137 != 15)
    {
        if (sub_46404() >= g_U43138[g_U43137]._fU20)
        {
            g_U43567 = 1;
        }
        else
        {
            g_U43567 = 0;
        }
        if (g_U43604 == 1)
        {
            g_U43616 = sub_47945();
            g_U43604 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (sub_46404() > g_U43616)
                {
                    g_U43579 = 1;
                }
                else
                {
                    g_U43579 = 0;
                }
            }
            else
            {
                g_U43579 = 0;
            }
        }
        else
        {
            g_U43579 = 0;
        }
    }
    if (g_U43137 == 15)
    {
        if (((g_U43523[9] + g_U43523[10]) / 2) >= g_U43138[g_U43137]._fU20)
        {
            g_U43567 = 1;
        }
        else
        {
            g_U43567 = 0;
        }
        if (g_U43604 == 1)
        {
            g_U43616 = sub_47945();
            g_U43604 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (((g_U43523[9] + g_U43523[10]) / 2) > g_U43616)
                {
                    g_U43579 = 1;
                }
                else
                {
                    g_U43579 = 0;
                }
            }
            else
            {
                g_U43579 = 0;
            }
        }
        else
        {
            g_U43579 = 0;
        }
    }
    return;
}

void sub_45639()
{
    g_U43514 = GET_INT_STAT( 289 );
    g_U43515 = g_U43514 - g_U43513;
    if (g_U43515 < 0)
    {
        g_U43515 = 0;
    }
    return g_U43515;
}

int sub_45783()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 485 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 551 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 527 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 569 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 574 );
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 584 );
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 600 );
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 606 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 521 );
    }
    return 0;
}

void sub_46404()
{
    unknown uVar2;
    unknown uVar3;
    float fVar4;
    int iVar5;
    int I;

    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 29, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 29, 1 ) );
    g_U43523[1] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 30, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 30, 1 ) );
    g_U43523[2] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 31, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 31, 1 ) );
    g_U43523[3] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 32, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 32, 1 ) );
    g_U43523[4] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 33, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 33, 1 ) );
    g_U43523[5] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 34, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 34, 1 ) );
    g_U43523[6] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 35, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 35, 1 ) );
    g_U43523[7] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 37, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 37, 1 ) );
    g_U43523[9] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 39, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 39, 1 ) );
    g_U43523[10] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 40, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 40, 1 ) );
    g_U43523[11] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 14, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 14, 1 ) );
    g_U43523[12] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 7, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 7, 1 ) );
    g_U43523[13] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 9, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 9, 1 ) );
    g_U43523[14] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 12, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 12, 1 ) );
    g_U43523[15] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 13, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 13, 1 ) );
    g_U43523[16] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 15, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 15, 1 ) );
    g_U43523[17] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 10, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 10, 1 ) );
    g_U43523[18] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 11, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 11, 1 ) );
    g_U43523[19] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 18, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 18, 1 ) );
    g_U43523[22] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 16, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 16, 1 ) );
    g_U43523[23] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 17, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 17, 1 ) );
    g_U43523[24] = (uVar3 / uVar2) * 100;
    fVar4 = 0.00000000;
    iVar5 = 0;
    for ( I = 0; I <= 24; I++ )
    {
        if (g_U43523[I] > 0)
        {
            if (g_U43523[I] != g_U43523[0])
            {
                if (g_U43523[I] != g_U43523[8])
                {
                    if (g_U43523[I] != g_U43523[20])
                    {
                        if (g_U43523[I] != g_U43523[21])
                        {
                            fVar4 += g_U43523[I];
                            iVar5++;
                        }
                    }
                }
            }
        }
    }
    fVar4 /= iVar5;
    g_U43516 = FLOOR( fVar4 );
    if (g_U43516 > 100)
    {
        g_U43516 = 100;
    }
    if (g_U43516 < 0)
    {
        g_U43516 = 0;
    }
    return g_U43516;
}

int sub_47945()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 480 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 486 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 552 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 528 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 570 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 575 );
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 585 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 593 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 601 );
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 607 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 522 );
    }
    return 0;
}

void sub_48830()
{
    vector vVar2;
    float fVar5;
    float fVar6;
    unknown uVar7;
    int I;
    float fVar9;

    if (NOT l_U2763)
    {
        if (NOT sub_28809())
        {
            l_U2763 = 1;
        }
    }
    else if ((((l_U2762 > 0) AND (l_U2762 < 9)) AND (NOT l_U2764)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_28809())
        {
            CLEAR_PRINTS();
            DISABLE_PAUSE_MENU( 1 );
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U2764 = 1;
            l_U2762 = 8;
        }
    }
    switch (l_U2762)
    {
        case 0:
        if ((sub_30395( l_U2709, 2000 )) || (l_U2654))
        {
            if (sub_49090( 1, 1 ))
            {
                CLEAR_HELP();
                BEGIN_CAM_COMMANDS( ref l_U2511 );
                SET_PLAYER_CONTROL( sub_10250(), 0 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U913 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U914 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U915 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U916 );
                for ( I = 0; I < l_U2553; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U2553[I] ))
                    {
                        DELETE_CHAR( ref l_U2553[I] );
                    }
                }
                if (DOES_BLIP_EXIST( l_U2581 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2581 );
                }
                for ( I = 0; I < l_U2582; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U2582[I] ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2582[I] );
                    }
                }
                SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                DISPLAY_RADAR( 0 );
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -150.85670000, -251.36210000, 35.69370000, 3.00000000, 7.00000000, 3.00000000, 0 ))
                {
                    vVar2 = {-151.15250000, -247.90090000, 34.68870000};
                    fVar5 = 184.96570000;
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -145.25650000, -251.73950000, 35.69370000, 3.00000000, 7.00000000, 3.00000000, 0 ))
                {
                    vVar2 = {-145.49600000, -248.68930000, 34.68870000};
                    fVar5 = 189.20400000;
                }
                else
                {
                    vVar2 = {-151.15250000, -247.90090000, 34.68870000};
                    fVar5 = 184.96570000;
                }
                SET_CHAR_COORDINATES( sub_3982(), vVar2.x, vVar2.y, vVar2.z );
                SET_CHAR_HEADING( sub_3982(), fVar5 );
                g_U2799 = 1;
                GET_CURRENT_CHAR_WEAPON( sub_3982(), ref l_U2767 );
                SET_CURRENT_CHAR_WEAPON( sub_3982(), 0, 1 );
                SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
                SWITCH_ROADS_OFF( -198.53690000, -298.63930000, 0.00000000, -193.48020000, -237.36880000, 100.00000000 );
                SWITCH_ROADS_OFF( -237.29280000, -237.65370000, 0.00000000, -136.77810000, -230.19910000, 100.00000000 );
                SWITCH_ROADS_OFF( -249.17520000, -313.98180000, 0.00000000, -137.38420000, -301.52290000, 100.00000000 );
                SET_USE_HIGHDOF( 1 );
                CREATE_CAM( 14, ref l_U2512[6] );
                CREATE_CAM( 14, ref l_U2512[7] );
                CREATE_CAM( 3, ref l_U2512[8] );
                CREATE_CAM( 14, ref l_U2512[9] );
                CREATE_CAM( 14, ref l_U2512[10] );
                CREATE_CAM( 3, ref l_U2512[11] );
                CREATE_CAM( 14, ref l_U2512[12] );
                CREATE_CAM( 14, ref l_U2512[13] );
                CREATE_CAM( 3, ref l_U2512[14] );
                CREATE_CAM( 14, ref l_U2512[15] );
                CREATE_CAM( 14, ref l_U2512[16] );
                CREATE_CAM( 3, ref l_U2512[17] );
                CREATE_CAM( 14, ref l_U2512[0] );
                CREATE_CAM( 14, ref l_U2512[1] );
                CREATE_CAM( 3, ref l_U2512[2] );
                CREATE_CAM( 14, ref l_U2512[3] );
                CREATE_CAM( 14, ref l_U2512[4] );
                CREATE_CAM( 3, ref l_U2512[5] );
                SET_CAM_POS( l_U2512[6], -138.32760000, -252.54820000, 54.87355000 );
                SET_CAM_ROT( l_U2512[6], -62.02643000, 0.00000000, 85.98867000 );
                SET_CAM_FOV( l_U2512[6], 30.30004000 );
                SET_CAM_FAR_DOF( l_U2512[6], 25.00000000 );
                SET_CAM_ACTIVE( l_U2512[6], 1 );
                SET_CAM_PROPAGATE( l_U2512[6], 1 );
                SET_CAM_POS( l_U2512[7], -138.32760000, -263.07530000, 54.87355000 );
                SET_CAM_ROT( l_U2512[7], -58.44643000, 0.00000000, 45.15801000 );
                SET_CAM_FOV( l_U2512[7], 30.30004000 );
                SET_CAM_FAR_DOF( l_U2512[7], 25.00000000 );
                SET_CAM_ACTIVE( l_U2512[7], 1 );
                SET_CAM_PROPAGATE( l_U2512[7], 0 );
                SET_CAM_POS( l_U2512[9], -144.66250000, -257.84480000, 35.94219000 );
                SET_CAM_ROT( l_U2512[9], -0.07386800, 0.00000000, 53.96803000 );
                SET_CAM_FOV( l_U2512[9], 22.80006000 );
                SET_CAM_FAR_DOF( l_U2512[9], 15.00000000 );
                SET_CAM_ACTIVE( l_U2512[9], 0 );
                SET_CAM_PROPAGATE( l_U2512[9], 0 );
                SET_CAM_POS( l_U2512[10], -145.21500000, -257.44290000, 35.94131000 );
                SET_CAM_ROT( l_U2512[10], -0.07386800, 0.00000000, 53.96803000 );
                SET_CAM_FOV( l_U2512[10], 22.80006000 );
                SET_CAM_FAR_DOF( l_U2512[10], 15.00000000 );
                SET_CAM_ACTIVE( l_U2512[10], 0 );
                SET_CAM_PROPAGATE( l_U2512[10], 0 );
                SET_CAM_POS( l_U2512[12], -137.90120000, -225.74590000, 56.79660000 );
                SET_CAM_ROT( l_U2512[12], -42.51746000, 0.00000000, 159.27550000 );
                SET_CAM_FOV( l_U2512[12], 36.60002000 );
                SET_CAM_FAR_DOF( l_U2512[12], 40.00000000 );
                SET_CAM_ACTIVE( l_U2512[12], 0 );
                SET_CAM_PROPAGATE( l_U2512[12], 0 );
                SET_CAM_POS( l_U2512[13], -137.90120000, -225.74590000, 56.79660000 );
                SET_CAM_ROT( l_U2512[13], -20.28669000, 0.00000000, 113.55340000 );
                SET_CAM_FOV( l_U2512[13], 36.60002000 );
                SET_CAM_FAR_DOF( l_U2512[13], 40.00000000 );
                SET_CAM_ACTIVE( l_U2512[13], 0 );
                SET_CAM_PROPAGATE( l_U2512[13], 0 );
                SET_CAM_POS( l_U2512[15], -206.09490000, -220.58870000, 51.58023000 );
                SET_CAM_ROT( l_U2512[15], -23.53192000, 0.00000000, -126.42100000 );
                SET_CAM_FOV( l_U2512[15], 38.40002000 );
                SET_CAM_ACTIVE( l_U2512[15], 0 );
                SET_CAM_PROPAGATE( l_U2512[15], 0 );
                SET_CAM_POS( l_U2512[16], -206.09490000, -220.58870000, 51.58023000 );
                SET_CAM_ROT( l_U2512[16], -23.53192000, 0.00000100, -144.98500000 );
                SET_CAM_FOV( l_U2512[16], 38.40002000 );
                SET_CAM_ACTIVE( l_U2512[16], 0 );
                SET_CAM_PROPAGATE( l_U2512[16], 0 );
                SET_CAM_POS( l_U2512[0], -204.03340000, -283.41710000, 14.07242000 );
                SET_CAM_ROT( l_U2512[0], 19.44151000, -0.00000100, -27.86746000 );
                SET_CAM_FOV( l_U2512[0], 53.09998000 );
                SET_CAM_ACTIVE( l_U2512[0], 0 );
                SET_CAM_PROPAGATE( l_U2512[0], 0 );
                SET_CAM_POS( l_U2512[1], -202.68580000, -274.86240000, 13.79341000 );
                SET_CAM_ROT( l_U2512[1], 16.34754000, -0.00000000, -125.61410000 );
                SET_CAM_FOV( l_U2512[1], 37.80002000 );
                SET_CAM_ACTIVE( l_U2512[1], 0 );
                SET_CAM_ACTIVE( l_U2512[2], 0 );
                SET_CAM_PROPAGATE( l_U2512[2], 0 );
                SET_CAM_POS( l_U2512[3], -196.23250000, -231.92210000, 13.75641000 );
                SET_CAM_ROT( l_U2512[3], 56.02465000, 0.00000000, -151.96570000 );
                SET_CAM_FOV( l_U2512[3], 38.10002000 );
                SET_CAM_ACTIVE( l_U2512[3], 0 );
                SET_CAM_PROPAGATE( l_U2512[3], 0 );
                SET_CAM_POS( l_U2512[4], -196.23250000, -231.92210000, 13.75641000 );
                SET_CAM_ROT( l_U2512[4], 14.88628000, -0.00000000, 122.09070000 );
                SET_CAM_FOV( l_U2512[4], 38.10002000 );
                SET_CAM_ACTIVE( l_U2512[4], 0 );
                SET_CAM_ACTIVE( l_U2512[5], 0 );
                SET_CAM_PROPAGATE( l_U2512[5], 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                if (NOT IS_SCREEN_FADED_IN())
                {
                    DO_SCREEN_FADE_IN( 500 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                }
                OPEN_SEQUENCE_TASK( ref uVar7 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -147.38870000, -256.20790000, 34.69000000, 3, -2, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar7 );
                TASK_PERFORM_SEQUENCE( sub_3982(), uVar7 );
                CLEAR_SEQUENCE_TASK( uVar7 );
                SET_CAM_INTERP_STYLE_CORE( l_U2512[8], l_U2512[6], l_U2512[7], 10000, 0 );
                SET_CAM_ACTIVE( l_U2512[8], 1 );
                SET_CAM_PROPAGATE( l_U2512[8], 1 );
                SET_CAM_PROPAGATE( l_U2512[6], 0 );
                GET_GAME_TIMER( ref l_U2761 );
                l_U2762 = 1;
            }
        }
        break;
        case 1:
        if ((sub_30395( l_U2761, 7000 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -147.81910000, -255.87070000, 35.69370000, 1.20000000, 1.50000000, 3.00000000, 0 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3982() );
            SET_CHAR_COORDINATES( sub_3982(), -147.38870000, -256.20790000, 34.69000000 );
            SET_CHAR_HEADING( sub_3982(), 7.00000000 );
            TASK_PLAY_ANIM_WITH_FLAGS( sub_3982(), "Attempt_Door", "missbulgarin03", 1000, 0, 3 );
            SET_CAM_ACTIVE( l_U2512[9], 1 );
            SET_CAM_ACTIVE( l_U2512[10], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U2512[11], l_U2512[9], l_U2512[10], 10000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U2512[11], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U2512[11], 1 );
            SET_CAM_PROPAGATE( l_U2512[11], 1 );
            SET_CAM_ACTIVE( l_U2512[8], 0 );
            SET_CAM_PROPAGATE( l_U2512[8], 0 );
            GET_GAME_TIMER( ref l_U2761 );
            l_U2762 = 2;
        }
        break;
        case 2:
        if (NOT l_U2765)
        {
            if (IS_CHAR_PLAYING_ANIM( sub_3982(), "missbulgarin03", "Attempt_Door" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3982(), "missbulgarin03", "Attempt_Door", ref fVar6 );
            }
            if (NOT l_U2766)
            {
                if (fVar6 > 0.10000000)
                {
                    sub_43469( "E2BG3_LOCK", ref l_U1107, 6, 1 );
                    l_U2766 = 1;
                }
            }
            if ((sub_30395( l_U2761, 7000 )) || (fVar6 > 0.20000000))
            {
                if (NOT (DOES_VEHICLE_EXIST( l_U2488[3] )))
                {
                    sub_19172( 4 );
                }
            }
            if ((sub_30395( l_U2761, 7000 )) || ((fVar6 > 0.30000000) AND (NOT (sub_43228( l_U1107 )))))
            {
                SET_CAM_ACTIVE( l_U2512[12], 1 );
                SET_CAM_PROPAGATE( l_U2512[12], 1 );
                SET_CAM_ACTIVE( l_U2512[11], 0 );
                SET_CAM_PROPAGATE( l_U2512[11], 0 );
                if (NOT (IS_CAR_DEAD( l_U2488[3] )))
                {
                    UNPAUSE_PLAYBACK_RECORDED_CAR( l_U2488[3] );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3982() );
                OPEN_SEQUENCE_TASK( ref uVar7 );
                TASK_TOGGLE_DUCK( 0, 1 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -152.41970000, -247.43320000, 34.52720000, 2, -2, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar7 );
                TASK_PERFORM_SEQUENCE( sub_3982(), uVar7 );
                CLEAR_SEQUENCE_TASK( uVar7 );
                l_U2765 = 1;
            }
        }
        else if (NOT (IS_CAR_DEAD( l_U2488[3] )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2488[3] ))
            {
                fVar9 = FIND_TIME_POSITION_IN_RECORDING( l_U2488[3] );
                if (fVar9 > 7900)
                {
                    if (NOT (IS_CHAR_DEAD( l_U1116[0]._fU0 )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U2567[1] )))
                        {
                            TASK_DRIVE_BY( l_U2567[1], l_U1116[0]._fU0, 0, 0.00000000, 0.00000000, 0.00000000, 500.00000000, 8, 0, 60 );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U2567[2] )))
                        {
                            TASK_DRIVE_BY( l_U2567[2], l_U1116[0]._fU0, 0, 0.00000000, 0.00000000, 0.00000000, 500.00000000, 8, 0, 60 );
                        }
                    }
                    TASK_TOGGLE_DUCK( sub_3982(), 1 );
                    SET_CAM_ACTIVE( l_U2512[12], 1 );
                    SET_CAM_PROPAGATE( l_U2512[12], 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U2512[14], l_U2512[12], l_U2512[13], 5000, 0 );
                    SET_CAM_ACTIVE( l_U2512[14], 1 );
                    SET_CAM_PROPAGATE( l_U2512[14], 1 );
                    l_U2762 = 3;
                }
            }
        }
        break;
        case 3:
        if (NOT (IS_CAR_DEAD( l_U2488[3] )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2488[3] ))
            {
                fVar9 = FIND_TIME_POSITION_IN_RECORDING( l_U2488[3] );
                if (fVar9 > 12635)
                {
                    SET_CAM_ACTIVE( l_U2512[14], 0 );
                    SET_CAM_PROPAGATE( l_U2512[14], 0 );
                    SET_CAM_ACTIVE( l_U2512[13], 0 );
                    SET_CAM_ACTIVE( l_U2512[15], 1 );
                    SET_CAM_PROPAGATE( l_U2512[15], 1 );
                    SET_CAM_ACTIVE( l_U2512[16], 1 );
                    SET_CAM_ACTIVE( l_U2512[15], 0 );
                    SET_CAM_PROPAGATE( l_U2512[15], 0 );
                    SET_CAM_INTERP_STYLE_CORE( l_U2512[17], l_U2512[15], l_U2512[16], 5000, 0 );
                    SET_CAM_INTERP_STYLE_DETAILED( l_U2512[17], 0, 0, 1, 1 );
                    SET_CAM_ACTIVE( l_U2512[17], 1 );
                    SET_CAM_PROPAGATE( l_U2512[17], 1 );
                    GET_GAME_TIMER( ref l_U2761 );
                    if (NOT (IS_CAR_DEAD( l_U2488[2] )))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U2488[2], 470 );
                    }
                    l_U2762 = 4;
                }
            }
        }
        break;
        case 4:
        if (sub_30395( l_U2761, 5000 ))
        {
            SET_CAM_ACTIVE( l_U2512[17], 0 );
            SET_CAM_PROPAGATE( l_U2512[17], 0 );
            SET_CAM_ACTIVE( l_U2512[16], 0 );
            SET_CAM_ACTIVE( l_U2512[3], 1 );
            SET_CAM_PROPAGATE( l_U2512[3], 1 );
            if (NOT (IS_CAR_DEAD( l_U2488[3] )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2488[3] ))
                {
                    ;
                }
            }
            if (NOT (IS_CAR_DEAD( l_U2488[1] )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U2488[1], 491 );
            }
            GET_GAME_TIMER( ref l_U2761 );
            l_U2762 = 6;
        }
        break;
        case 6:
        if (NOT (IS_CAM_ACTIVE( l_U2512[5] )))
        {
            if (sub_30395( l_U2761, 1000 ))
            {
                SET_CAM_ACTIVE( l_U2512[3], 0 );
                SET_CAM_PROPAGATE( l_U2512[3], 0 );
                SET_CAM_INTERP_STYLE_CORE( l_U2512[5], l_U2512[3], l_U2512[4], 4000, 0 );
                SET_CAM_ACTIVE( l_U2512[5], 1 );
                SET_CAM_PROPAGATE( l_U2512[5], 1 );
            }
            else if (sub_30395( l_U2761, 1000 ))
            {
                ;
            }
        }
        else if (NOT (IS_CAR_DEAD( l_U2488[1] )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2488[1] )))
            {
                OPEN_SEQUENCE_TASK( ref uVar7 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -195.19030000, -239.60440000, 13.66588000, 3, -2, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar7 );
                if (NOT (IS_CHAR_INJURED( l_U2494[2] )))
                {
                    TASK_PERFORM_SEQUENCE( l_U2494[2], uVar7 );
                }
                if (NOT (IS_CHAR_INJURED( l_U2494[3] )))
                {
                    TASK_PERFORM_SEQUENCE( l_U2494[3], uVar7 );
                }
                GET_GAME_TIMER( ref l_U2761 );
                l_U2762 = 5;
            }
        }
        break;
        case 5:
        if (NOT (IS_CAM_ACTIVE( l_U2512[0] )))
        {
            if (sub_30395( l_U2761, 1000 ))
            {
                if (NOT (IS_CAR_DEAD( l_U2488[3] )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2488[3] ))
                    {
                        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2488[3], 60536 );
                    }
                }
                SET_CAM_ACTIVE( l_U2512[0], 1 );
                SET_CAM_PROPAGATE( l_U2512[0], 1 );
                SET_CAM_ACTIVE( l_U2512[5], 0 );
                SET_CAM_PROPAGATE( l_U2512[5], 0 );
                SET_CAM_ACTIVE( l_U2512[4], 0 );
                SET_CAM_PROPAGATE( l_U2512[4], 0 );
                SET_CAM_ACTIVE( l_U2512[3], 0 );
                SET_CAM_PROPAGATE( l_U2512[3], 0 );
                if (NOT (IS_CAR_DEAD( l_U2488[0] )))
                {
                    START_PLAYBACK_RECORDED_CAR( l_U2488[0], 490 );
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2488[0], 3500 );
                }
                GET_GAME_TIMER( ref l_U2761 );
            }
        }
        else if (sub_30395( l_U2761, 100 ))
        {
            l_U2762 = 7;
        }
        break;
        case 7:
        if (NOT (IS_CAR_DEAD( l_U2488[0] )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2488[0] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3982() );
                SET_CHAR_COORDINATES( sub_3982(), -152.16630000, -250.02020000, 34.68870000 );
                SET_CHAR_HEADING( sub_3982(), 87.67390000 );
                TASK_TOGGLE_DUCK( sub_3982(), 1 );
                SET_CURRENT_CHAR_WEAPON( sub_3982(), l_U2767, 1 );
                OPEN_SEQUENCE_TASK( ref uVar7 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -194.95870000, -283.68100000, 13.70630000, 3, -2, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar7 );
                if (NOT (IS_CHAR_INJURED( l_U2494[0] )))
                {
                    TASK_PERFORM_SEQUENCE( l_U2494[0], uVar7 );
                }
                if (NOT (IS_CHAR_INJURED( l_U2494[1] )))
                {
                    TASK_PERFORM_SEQUENCE( l_U2494[1], uVar7 );
                }
                l_U2762 = 8;
                GET_GAME_TIMER( ref l_U2761 );
            }
        }
        break;
        case 8:
        if (((IS_KEYBOARD_KEY_JUST_PRESSED( 2 )) || (sub_30395( l_U2761, 1500 ))) || (l_U2764))
        {
            if (((NOT (IS_CHAR_DUCKING( sub_3982() ))) || (l_U2764)) || (NOT (sub_28042( sub_3982(), 1, 0 ))))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3982() );
                SET_CHAR_COORDINATES( sub_3982(), -152.16630000, -250.02020000, 34.68870000 );
                SET_CHAR_HEADING( sub_3982(), 87.67390000 );
                TASK_TOGGLE_DUCK( sub_3982(), 1 );
            }
            SET_CURRENT_CHAR_WEAPON( sub_3982(), l_U2767, 1 );
            SET_CAM_ACTIVE( l_U2512[8], 0 );
            SET_CAM_PROPAGATE( l_U2512[8], 0 );
            SET_CAM_ACTIVE( l_U2512[7], 0 );
            SET_CAM_PROPAGATE( l_U2512[7], 0 );
            SET_CAM_ACTIVE( l_U2512[6], 0 );
            SET_CAM_PROPAGATE( l_U2512[6], 0 );
            SET_CAM_ACTIVE( l_U2512[11], 0 );
            SET_CAM_PROPAGATE( l_U2512[11], 0 );
            SET_CAM_ACTIVE( l_U2512[10], 0 );
            SET_CAM_PROPAGATE( l_U2512[10], 0 );
            SET_CAM_ACTIVE( l_U2512[9], 0 );
            SET_CAM_PROPAGATE( l_U2512[9], 0 );
            SET_CAM_ACTIVE( l_U2512[2], 0 );
            SET_CAM_PROPAGATE( l_U2512[2], 0 );
            SET_CAM_ACTIVE( l_U2512[1], 0 );
            SET_CAM_PROPAGATE( l_U2512[1], 0 );
            SET_CAM_ACTIVE( l_U2512[0], 0 );
            SET_CAM_PROPAGATE( l_U2512[0], 0 );
            SET_CAM_ACTIVE( l_U2512[5], 0 );
            SET_CAM_PROPAGATE( l_U2512[5], 0 );
            SET_CAM_ACTIVE( l_U2512[4], 0 );
            SET_CAM_PROPAGATE( l_U2512[4], 0 );
            SET_CAM_ACTIVE( l_U2512[3], 0 );
            SET_CAM_PROPAGATE( l_U2512[3], 0 );
            SET_CAM_ACTIVE( l_U2512[14], 0 );
            SET_CAM_PROPAGATE( l_U2512[14], 0 );
            SET_CAM_ACTIVE( l_U2512[13], 0 );
            SET_CAM_PROPAGATE( l_U2512[13], 0 );
            SET_CAM_ACTIVE( l_U2512[12], 0 );
            SET_CAM_PROPAGATE( l_U2512[12], 0 );
            SET_CAM_ACTIVE( l_U2512[17], 0 );
            SET_CAM_PROPAGATE( l_U2512[17], 0 );
            SET_CAM_ACTIVE( l_U2512[16], 0 );
            SET_CAM_PROPAGATE( l_U2512[16], 0 );
            SET_CAM_ACTIVE( l_U2512[15], 0 );
            SET_CAM_PROPAGATE( l_U2512[15], 0 );
            DESTROY_CAM( l_U2512[8] );
            DESTROY_CAM( l_U2512[7] );
            DESTROY_CAM( l_U2512[6] );
            DESTROY_CAM( l_U2512[11] );
            DESTROY_CAM( l_U2512[10] );
            DESTROY_CAM( l_U2512[9] );
            DESTROY_CAM( l_U2512[14] );
            DESTROY_CAM( l_U2512[13] );
            DESTROY_CAM( l_U2512[12] );
            DESTROY_CAM( l_U2512[17] );
            DESTROY_CAM( l_U2512[16] );
            DESTROY_CAM( l_U2512[15] );
            DESTROY_CAM( l_U2512[2] );
            DESTROY_CAM( l_U2512[1] );
            DESTROY_CAM( l_U2512[0] );
            DESTROY_CAM( l_U2512[5] );
            DESTROY_CAM( l_U2512[4] );
            DESTROY_CAM( l_U2512[3] );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U2511 );
            SET_USE_HIGHDOF( 0 );
            SET_GAME_CAM_HEADING( 15.00000000 );
            CREATE_PICKUP_ROTATE( sub_15417( 34 ), 22, 100, -159.75750000, -247.24900000, 32.04560000, 90.00000000, 0.00000000, 0.00000000, ref l_U2612 );
            CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -164.02920000, -248.13890000, 33.43080000, 269.30000000, 0, 66.96000000, ref l_U2613 );
            if (DOES_CHAR_EXIST( l_U2567[1] ))
            {
                DELETE_CHAR( ref l_U2567[1] );
            }
            if (DOES_CHAR_EXIST( l_U2567[2] ))
            {
                DELETE_CHAR( ref l_U2567[2] );
            }
            if (DOES_CHAR_EXIST( l_U1116[0]._fU0 ))
            {
                DELETE_CHAR( ref l_U1116[0]._fU0 );
            }
            for ( I = 0; I < l_U2494; I++ )
            {
                if (DOES_CHAR_EXIST( l_U2494[I] ))
                {
                    DELETE_CHAR( ref l_U2494[I] );
                }
                if (DOES_VEHICLE_EXIST( l_U2488[I] ))
                {
                    DELETE_CAR( ref l_U2488[I] );
                }
            }
            g_U2801 = 1;
            sub_19172( 11 );
            sub_19172( 13 );
            sub_19172( 12 );
            START_PLAYBACK_RECORDED_CAR( l_U2574[3], 492 );
            sub_19172( 2 );
            SET_PLAYER_CONTROL( sub_10250(), 1 );
            SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            SET_PED_IS_BLIND_RAGING( sub_3982(), 1 );
            if (l_U2764)
            {
                DO_SCREEN_FADE_IN( 500 );
            }
            l_U2631 = 6;
            l_U2762 = 9;
        }
        break;
    }
    return;
}

int sub_49090(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3982() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3982(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3982() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3982(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3982()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3982() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3982() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_10250() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_10250() )))
    {
        return 0;
    }
    return 1;
}

void sub_56315()
{
    int I;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT l_U2777)
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            PRINT_NOW( "ESCAPE_ROOF", 7500, 1 );
            l_U2777 = 1;
        }
    }
    if (NOT l_U1116[0]._fU4)
    {
        l_U1116[0]._fU4 = 1;
        l_U1116[1]._fU4 = 1;
        l_U1116[2]._fU4 = 1;
        l_U1116[3]._fU4 = 1;
    }
    if (NOT l_U1116[4]._fU4)
    {
        if (sub_56467())
        {
            sub_19172( 3 );
            l_U1116[4]._fU4 = 1;
            l_U1116[5]._fU4 = 1;
            l_U1116[6]._fU4 = 1;
            l_U1116[7]._fU4 = 1;
            l_U1116[8]._fU4 = 1;
            l_U1116[9]._fU4 = 1;
            l_U1116[11]._fU4 = 1;
        }
    }
    if (NOT l_U2778)
    {
        if (NOT (DOES_BLIP_EXIST( l_U2791 )))
        {
            ADD_BLIP_FOR_COORD( -186.95620000, -258.07870000, 26.32210000, ref l_U2791 );
        }
        else
        {
            GET_CHAR_COORDINATES( sub_3982(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            if (((LOCATE_CHAR_ON_FOOT_3D( sub_3982(), -186.70300000, -258.29900000, 28.72200000, 1.60000000, 1.60000000, 1.60000000, 1 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_3982(), -186.59920000, -257.11530000, 20.32700000, 1.00000000, 3.00000000, 6.00000000, 1 ))) || (uVar4._fU8 < 21.00000000))
            {
                SWITCH_ROADS_BACK_TO_ORIGINAL( -198.53690000, -298.63930000, 0.00000000, -193.48020000, -237.36880000, 100.00000000 );
                SWITCH_ROADS_BACK_TO_ORIGINAL( -237.29280000, -237.65370000, 0.00000000, -136.77810000, -230.19910000, 100.00000000 );
                SWITCH_ROADS_BACK_TO_ORIGINAL( -249.17520000, -313.98180000, 0.00000000, -137.38420000, -301.52290000, 100.00000000 );
                SWITCH_ROADS_OFF( -198.54060000, -301.03550000, 0.00000000, -192.01030000, -235.49840000, 100.00000000 );
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2791 );
                l_U2778 = 1;
            }
        }
    }
    else if (NOT l_U2779)
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            PRINT_NOW( "ESCAPE_LEAVE", 7500, 1 );
            l_U2779 = 1;
        }
    }
    if (sub_57090())
    {
        sub_57186( ref l_U1116[12], ref l_U1116[1], 1 );
        if ((l_U1116[2]._fU4) || (l_U2744))
        {
            if (NOT l_U1116[15]._fU4)
            {
                if (IS_CHAR_INJURED( l_U1116[2]._fU0 ))
                {
                    if (l_U2789 < 5)
                    {
                        sub_19172( 7 );
                        l_U1116[15]._fU4 = 1;
                        l_U2789++;
                    }
                }
            }
            else if (IS_CHAR_INJURED( l_U1116[15]._fU0 ))
            {
                sub_57436( ref l_U1116[15] );
            }
        }
    }
    sub_57755();
    if (sub_58772())
    {
        sub_58866();
    }
    if (sub_59169())
    {
        if (NOT l_U1116[17]._fU4)
        {
            sub_19172( 8 );
            sub_19172( 15 );
            l_U1116[17]._fU4 = 1;
            l_U1116[18]._fU4 = 1;
        }
    }
    if (sub_59957())
    {
        if (sub_57858( -166.68630000, -277.37630000, 34.84523000, 1.50000000 ))
        {
            l_U1116[19]._fU4 = 1;
            l_U1116[20]._fU4 = 1;
            l_U1116[21]._fU4 = 1;
        }
    }
    if (sub_60122())
    {
        if (sub_57858( -202.18610000, -257.92560000, 14.81358000, 1.50000000 ))
        {
            l_U1116[10]._fU4 = 1;
        }
    }
    sub_45630();
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -161.16030000, -269.03720000, 35.58970000, 250.00000000, 250.00000000, 250.00000000, 0 )))
    {
        l_U1115 = 0;
        l_U2631 = 7;
    }
    for ( I = 0; I < l_U2574; I++ )
    {
        if (I != 3)
        {
            if (NOT l_U2780[I])
            {
                if (NOT (IS_CAR_DEAD( l_U2574[I] )))
                {
                    GET_CAR_HEALTH( l_U2574[I], ref iVar3 );
                    if (iVar3 < 500)
                    {
                        EXPLODE_CAR( l_U2574[I], 1, 0 );
                        l_U2780[I] = 1;
                    }
                }
            }
        }
    }
    if (NOT l_U2787)
    {
        GET_CHAR_COORDINATES( sub_3982(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (uVar4._fU8 < 24.14000000)
        {
            SET_WANTED_MULTIPLIER( 0.00000000 );
            l_U2787 = 1;
        }
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (l_U2788)
        {
            if (sub_60545())
            {
                l_U2788 = 0;
                GET_GAME_TIMER( ref l_U2790 );
            }
            else if (sub_61160())
            {
                l_U2788 = 0;
                GET_GAME_TIMER( ref l_U2790 );
            }
            else if (sub_61285())
            {
                l_U2788 = 0;
                GET_GAME_TIMER( ref l_U2790 );
            };;;
        }
        else if (sub_30395( l_U2790, 5000 ))
        {
            l_U2788 = 1;
        }
    }
    sub_44989();
    sub_61480();
    sub_67065();
    return;
}

void sub_56467()
{
    if (NOT l_U2647)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -171.62580000, -250.24570000, 32.99770000, 1.00000000, 11.00000000, 5.00000000, 0 ))
        {
            l_U2647 = 1;
        }
    }
    return l_U2647;
}

int sub_57090()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -147.76930000, -251.75790000, 38.67870000, 6.00000000, 6.00000000, 6.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_57186(int iParam0, int iParam1, boolean bParam2)
{
    unknown[2] uVar5;
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
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;

    array(ref uVar5, 2);
    if (NOT iParam1->_fU92)
    {
        if ((ref iParam0->_fU68->_fU0) != (ref iParam1->_fU68->_fU0))
        {
            uVar5[0] = {(iParam0^)};
            if (sub_57257( ref uVar5, 1, 1, 1, 1 ))
            {
                sub_57436( iParam1 );
                iParam1->_fU80 = iParam0->_fU80;
                iParam1->_fU68 = {iParam0->_fU68};
                if (bParam2)
                {
                    iParam1->_fU24 = 3;
                }
                iParam1->_fU92 = 1;
                iParam1->_fU4 = 1;
            }
        }
    }
    return;
}

int sub_57257(unknown uParam0, int iParam1, int iParam2, boolean bParam3, boolean bParam4)
{
    int I;
    int iVar8;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (((uParam0^)[I]._fU4) || (NOT bParam4))
        {
            if ((IS_CHAR_DEAD( (uParam0^)[I]._fU0 )) || (IS_CHAR_FATALLY_INJURED( (uParam0^)[I]._fU0 )))
            {
                iVar8++;
            }
            else if (bParam3)
            {
                if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
                {
                    iVar8++;
                }
            }
        }
    }
    if (iVar8 >= iParam2)
    {
        return 1;
    }
    return 0;
}

void sub_57436(int iParam0)
{
    iParam0->_fU4 = 0;
    iParam0->_fU8 = 0;
    iParam0->_fU12 = 0;
    iParam0->_fU16 = 0;
    iParam0->_fU84 = 0;
    iParam0->_fU20 = 0;
    iParam0->_fU24 = 0;
    if (NOT (IS_CHAR_DEAD( iParam0->_fU0 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
        REMOVE_CHAR_DEFENSIVE_AREA( iParam0->_fU0 );
    }
    return;
}

void sub_57755()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    switch (l_U2772)
    {
        case 0:
        if (NOT l_U2773)
        {
            if (NOT sub_57090())
            {
                bVar4 = false;
            }
            if (NOT (sub_57858( -174.61050000, -248.38520000, 33.83240000, 1.50000000 )))
            {
                bVar4 = false;
            }
            if ((l_U2774 != 0) AND (NOT (sub_30395( l_U2774, 10000 ))))
            {
                bVar4 = false;
            }
            if (IS_VEH_DRIVEABLE( l_U2574[3] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2574[3] ))
                {
                    fVar3 = FIND_TIME_POSITION_IN_RECORDING( l_U2574[3] );
                    if (fVar3 < 12000)
                    {
                        bVar4 = false;
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U1116[13]._fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U1116[13]._fU0 )))
                {
                    if (NOT l_U1116[13]._fU16)
                    {
                        bVar4 = false;
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U1116[12]._fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U1116[12]._fU0 )))
                {
                    if ((l_U2740 != 0) AND (NOT (sub_30395( l_U2740, 6000 ))))
                    {
                        bVar4 = false;
                    }
                }
            }
            if (bVar4)
            {
                sub_19172( 9 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -174.61050000, -248.38520000, 33.83240000, 3, -2, 0.50000000 );
                TASK_ACHIEVE_HEADING( 0, 270.00000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                if (HAS_CHAR_GOT_WEAPON( l_U1116[14]._fU0, 4 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U1116[14]._fU0, 4, 1 );
                }
                TASK_PERFORM_SEQUENCE( l_U1116[14]._fU0, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U2772++;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U1116[14]._fU0 )))
        {
            if (sub_28042( l_U1116[14]._fU0, 1, 0 ))
            {
                sub_43469( "E2BG3_AATT", ref l_U1107, 7, 1 );
                TASK_SHOOT_AT_COORD( l_U1116[14]._fU0, -153.35490000, -247.33160000, 35.89925000, 2000, 2 );
                GET_GAME_TIMER( ref l_U2774 );
                l_U2772++;
            }
        }
        else
        {
            l_U2773 = 1;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U1116[14]._fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U1116[14]._fU0, 36, ref iVar5 );
            if ((iVar5 == 7) || (sub_30395( l_U2774, 5000 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -175.49080000, -255.43120000, 33.83240000, 3, -2, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U1116[14]._fU0, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U2772++;
            }
        }
        else
        {
            l_U2773 = 1;
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U1116[14]._fU0 )))
        {
            if (sub_28042( l_U1116[14]._fU0, 1, 0 ))
            {
                DELETE_CHAR( ref l_U1116[14]._fU0 );
                l_U2772 = 0;
            }
        }
        else
        {
            l_U2773 = 1;
        }
        break;
    }
    return;
}

int sub_57858(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_58772()
{
    if (NOT l_U2645)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -155.62580000, -249.24570000, 32.99770000, 1.00000000, 11.00000000, 5.00000000, 0 ))
        {
            l_U2645 = 1;
        }
    }
    return l_U2645;
}

void sub_58866()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;
    boolean bVar5;
    vector vVar6;
    unknown uVar9;

    bVar5 = true;
    switch (l_U2768)
    {
        case 0:
        sub_19172( 10 );
        l_U2768++;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U1116[16]._fU0 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar3 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -208.11470000, -250.81900000, 39.45900000, 3, -2, 0.50000000 );
            TASK_ACHIEVE_HEADING( 0, 270.00000000 );
            TASK_TOGGLE_DUCK( 0, 1 );
            CLOSE_SEQUENCE_TASK( uVar3 );
            TASK_PERFORM_SEQUENCE( l_U1116[16]._fU0, uVar3 );
            CLEAR_SEQUENCE_TASK( uVar3 );
            l_U2768++;
        }
        break;
        case 2:
        if ((NOT sub_59096()) AND (NOT sub_59169()))
        {
            bVar5 = false;
        }
        if ((l_U2770 != 0) AND (NOT (sub_30395( l_U2770, 10000 ))))
        {
            bVar5 = false;
        }
        if (NOT (IS_CHAR_INJURED( l_U1116[16]._fU0 )))
        {
            if (NOT (IS_CHAR_VISIBLE( l_U1116[16]._fU0 )))
            {
                bVar5 = false;
            }
        }
        if ((l_U2771 mod 2) == 0)
        {
            vVar6 = {-168.75120000, -240.92850000, 42.34843000};
        }
        else
        {
            vVar6 = {-192.80310000, -251.63110000, 42.34843000};
        }
        if (bVar5)
        {
            if (NOT (IS_CHAR_INJURED( l_U1116[16]._fU0 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar3 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_SHOOT_AT_COORD( 0, vVar6.x, vVar6.y, vVar6.z, 2000, 2 );
                CLOSE_SEQUENCE_TASK( uVar3 );
                TASK_PERFORM_SEQUENCE( l_U1116[16]._fU0, uVar3 );
                CLEAR_SEQUENCE_TASK( uVar3 );
                GET_GAME_TIMER( ref l_U2770 );
                l_U2771++;
                l_U2768++;
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U1116[16]._fU0 )))
        {
            if (sub_28042( l_U1116[16]._fU0, 1, 0 ))
            {
                TASK_TOGGLE_DUCK( l_U1116[16]._fU0, 1 );
                l_U2768++;
            }
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U1116[16]._fU0 )))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar4 );
            if (sub_30395( l_U2770, 4000 + iVar4 ))
            {
                OPEN_SEQUENCE_TASK( ref uVar3 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_AIM_GUN_AT_CHAR( 0, sub_3982(), 999999 );
                CLOSE_SEQUENCE_TASK( uVar3 );
                TASK_PERFORM_SEQUENCE( l_U1116[16]._fU0, uVar3 );
                CLEAR_SEQUENCE_TASK( uVar3 );
                l_U2768 = 2;
            }
        }
        break;
    }
    return;
}

int sub_59096()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -166.69450000, -249.67120000, 34.36430000, 4.00000000, 8.00000000, 2.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_59169()
{
    if (NOT l_U2646)
    {
        if (((LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -162.62580000, -249.24570000, 32.99770000, 1.00000000, 11.00000000, 5.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -161.53520000, -245.92130000, 34.82030000, 2.00000000, 2.00000000, 1.30000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -158.84510000, -244.05100000, 34.82020000, 4.00000000, 2.00000000, 1.30000000, 0 )))
        {
            l_U2646 = 1;
        }
    }
    return l_U2646;
}

void sub_59957()
{
    if (NOT l_U2648)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -168.38020000, -250.26020000, 34.37510000, 1.70000000, 7.00000000, 2.00000000, 0 ))
        {
            l_U2648 = 1;
        }
    }
    return l_U2648;
}

void sub_60122()
{
    if (NOT l_U2649)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3982(), -183.60250000, -268.01100000, 29.65550000, 2.70000000, 14.00000000, 5.00000000, 0 ))
        {
            l_U2649 = 1;
        }
    }
    return l_U2649;
}

int sub_60545()
{
    int iVar2;

    iVar2 = sub_60556( 1, 0 );
    if (iVar2 != -1)
    {
        if (NOT (IS_CHAR_INJURED( l_U1116[iVar2]._fU0 )))
        {
            if ((l_U2775 mod 2) == 0)
            {
                SAY_AMBIENT_SPEECH( l_U1116[iVar2]._fU0, "COVER_ME", 1, 1, 2 );
            }
            else
            {
                SAY_AMBIENT_SPEECH( l_U1116[iVar2]._fU0, "MOVE_IN", 1, 1, 2 );
            }
            l_U2775++;
            return 1;
        }
    }
    return 0;
}

void sub_60556(boolean bParam0, boolean bParam1)
{
    int I;
    int Result;
    float fVar6;
    float fVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    Result = -1;
    fVar6 = 1000.00000000;
    GET_CHAR_COORDINATES( sub_3982(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    for ( I = 0; I < l_U1116; I++ )
    {
        if (l_U1116[I]._fU4)
        {
            if (NOT (IS_CHAR_INJURED( l_U1116[I]._fU0 )))
            {
                GET_CHAR_COORDINATES( l_U1116[I]._fU0, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                if ((ABSF( uVar11._fU8 - uVar8._fU8 )) < 3.00000000)
                {
                    if ((((NOT bParam0) AND (NOT bParam1)) || ((bParam0) AND ((l_U1116[I]._fU8) AND (NOT l_U1116[I]._fU16)))) || ((bParam1) AND (IS_CHAR_SHOOTING( l_U1116[I]._fU0 ))))
                    {
                        fVar7 = sub_60806( sub_3982(), l_U1116[I]._fU0 );
                        if (fVar7 < fVar6)
                        {
                            if (fVar7 < 30.00000000)
                            {
                                Result = I;
                                fVar6 = fVar7;
                            }
                        }
                    }
                }
            }
        }
    }
    return Result;
}

void sub_60806(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            GET_CHAR_COORDINATES( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref Result );
            return Result;
        }
    }
    return Result;
}

int sub_61160()
{
    int iVar2;

    iVar2 = sub_60556( 0, 1 );
    if (iVar2 != -1)
    {
        if (NOT (IS_CHAR_INJURED( l_U1116[iVar2]._fU0 )))
        {
            SAY_AMBIENT_SPEECH( l_U1116[iVar2]._fU0, "TARGET", 1, 1, 2 );
            return 1;
        }
    }
    return 0;
}

int sub_61285()
{
    int iVar2;

    if (NOT l_U2776)
    {
        if (IS_CHAR_SHOOTING( sub_3982() ))
        {
            l_U2776 = 1;
        }
    }
    else if (NOT (IS_CHAR_SHOOTING( sub_3982() )))
    {
        iVar2 = sub_60556( 0, 0 );
        if (iVar2 != -1)
        {
            SAY_AMBIENT_SPEECH( l_U1116[iVar2]._fU0, "TAKE_COVER", 1, 1, 2 );
            l_U2776 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_61480()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    float fVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    vector vVar11;
    vector vVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    int iVar23;

    if (l_U2733)
    {
        if (NOT l_U2503)
        {
            if ((l_U2736 mod 2) == 0)
            {
                l_U2730 = 456;
            }
            else
            {
                l_U2730 = 457;
            }
        }
        else
        {
            l_U2730 = 492;
        }
    }
    switch (l_U2727)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U2574[3] )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2574[3] ))
            {
                FREEZE_CAR_POSITION( l_U2574[3], 0 );
            }
        }
        l_U2727 = 2;
        break;
        case 1: break;
        case 2:
        if (IS_VEH_DRIVEABLE( l_U2574[3] ))
        {
            if (IS_CHAR_DEAD( l_U2567[0] ))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U2574[3] );
                FREEZE_CAR_POSITION( l_U2574[3], 0 );
                APPLY_FORCE_TO_CAR( l_U2574[3], 1, -1, 0, 0, 0, -3, 0, 0, 1, 1, 1 );
                STOP_SOUND( l_U2504 );
                l_U2727++;
            }
            else if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U2730 )))
            {
                REQUEST_CAR_RECORDING( l_U2730 );
            }
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2574[3] )))
            {
                if (sub_61916( l_U2574[3], 1500, -184.14350000, -236.15860000, 42.61770000, 0.00000000, -0.00000000, 187.29420000, -0.53292100 ))
                {
                    if (HAS_CAR_RECORDING_BEEN_LOADED( l_U2730 ))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U2574[3], l_U2730 );
                        if (NOT l_U2503)
                        {
                            l_U2736++;
                        }
                        l_U1114 = 0;
                        l_U2723 = 0;
                        l_U2724 = 0;
                    }
                    else
                    {
                        l_U2632 = 0;
                        sub_62816( l_U2730, "Car rec to use...." );
                        sub_62816( l_U2731, "Car rec count...." );
                        SCRIPT_ASSERT( "Car rec not loaded!" );
                    }
                }
            }
        }
        else if (NOT (IS_CAR_DEAD( l_U2574[3] )))
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U2574[3] );
            FREEZE_CAR_POSITION( l_U2574[3], 0 );
            APPLY_FORCE_TO_CAR( l_U2574[3], 1, -1, 0, 0, 0, -3, 0, 0, 1, 1, 1 );
            GET_GAME_TIMER( ref l_U2739 );
        }
        l_U2727++;;
        if (NOT l_U2728)
        {
            if (NOT (IS_CHAR_INJURED( l_U2567[1] )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U2567[1] ))
                {
                    SET_CHAR_DECISION_MAKER( l_U2567[1], l_U2605 );
                    SET_COMBAT_DECISION_MAKER( l_U2567[1], l_U2604 );
                    SET_CHAR_RELATIONSHIP( l_U2567[1], 5, 0 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2567[1], 0 );
                    TASK_DRIVE_BY( l_U2567[1], sub_3982(), 0, 0.00000000, 0.00000000, 0.00000000, 500.00000000, 8, 0, 60 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U2567[2] )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U2567[2] ))
                {
                    SET_CHAR_DECISION_MAKER( l_U2567[2], l_U2605 );
                    SET_COMBAT_DECISION_MAKER( l_U2567[2], l_U2604 );
                    SET_CHAR_RELATIONSHIP( l_U2567[2], 5, 0 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2567[2], 0 );
                    TASK_DRIVE_BY( l_U2567[2], sub_3982(), 0, 0.00000000, 0.00000000, 0.00000000, 500.00000000, 8, 0, 60 );
                }
            }
            l_U2728 = 1;
        }
        break;
        case 3:
        if (NOT (IS_CAR_DEAD( l_U2574[3] )))
        {
            GET_CAR_COORDINATES( l_U2574[3], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            if ((uVar3._fU8 < 22.00000000) || (sub_30395( l_U2739, 7000 )))
            {
                EXPLODE_CAR( l_U2574[3], 1, 0 );
                if (NOT (IS_CHAR_DEAD( l_U2567[1] )))
                {
                    if (IS_PED_ATTACHED_TO_ANY_CAR( l_U2567[1] ))
                    {
                        DETACH_PED( l_U2567[1], 1 );
                        SET_CHAR_HEALTH( l_U2567[1], 5 );
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U2567[2] )))
                {
                    if (IS_PED_ATTACHED_TO_ANY_CAR( l_U2567[2] ))
                    {
                        DETACH_PED( l_U2567[2], 1 );
                        SET_CHAR_HEALTH( l_U2567[2], 5 );
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U2567[1] )))
        {
            if (IS_PED_ATTACHED_TO_ANY_CAR( l_U2567[1] ))
            {
                DETACH_PED( l_U2567[1], 1 );
                SET_CHAR_HEALTH( l_U2567[1], 5 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U2567[2] )))
        {
            if (IS_PED_ATTACHED_TO_ANY_CAR( l_U2567[2] ))
            {
                DETACH_PED( l_U2567[2], 1 );
                SET_CHAR_HEALTH( l_U2567[2], 5 );
            }
        }
        break;
        case 4:
        if (NOT (IS_CAR_DEAD( l_U2574[3] )))
        {
            if (sub_28042( l_U2567[0], 1, 0 ))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_HELI_MISSION( 0, l_U2574[3], 0, 0, -206.97650000, -217.61890000, 53.08921000, 4, 30.00000000, 50, -1, 40, 35 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                if (NOT (IS_CHAR_INJURED( l_U2567[0] )))
                {
                    TASK_PERFORM_SEQUENCE( l_U2567[0], uVar2 );
                }
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U2727 = 2;
            }
        }
        break;
    }
    if (DOES_BLIP_EXIST( l_U2732 ))
    {
        if (IS_CAR_DEAD( l_U2574[3] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U2732 );
        }
    }
    if ((NOT l_U2733) || (l_U2503))
    {
        if (NOT (IS_CAR_DEAD( l_U2574[3] )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2574[3] ))
            {
                fVar6 = FIND_TIME_POSITION_IN_RECORDING( l_U2574[3] );
                if (l_U1116[2]._fU4)
                {
                    if (fVar6 > 6000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1116[2]._fU0 )))
                        {
                            sub_57436( ref l_U1116[2] );
                            if (NOT (IS_CHAR_INJURED( l_U1116[2]._fU0 )))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1116[2]._fU0, 1 );
                                SET_CHAR_DECISION_MAKER( l_U1116[2]._fU0, l_U2606 );
                                TASK_SHOOT_AT_COORD( l_U1116[2]._fU0, -153.35490000, -247.33160000, 35.89925000, 5000, 5 );
                                GET_GAME_TIMER( ref l_U2737 );
                                l_U2744 = 1;
                            }
                        }
                    }
                }
                if ((fVar6 > 8500) AND (fVar6 < 10500))
                {
                    if (l_U2735 == 0)
                    {
                        if (NOT l_U2754[0])
                        {
                            if (NOT l_U2757[0])
                            {
                                l_U2745[0] = 1;
                            }
                            GET_GAME_TIMER( ref l_U2735 );
                        }
                    }
                    else if (NOT l_U2754[1])
                    {
                        l_U2745[1] = 1;
                        GET_GAME_TIMER( ref l_U2735 );
                        l_U2733 = 1;
                        l_U2503 = 0;
                        l_U2734 = 1;
                    }
                }
            }
        }
    }
    if (l_U2734)
    {
        if (IS_VEH_DRIVEABLE( l_U2574[3] ))
        {
            if (NOT (IS_CAR_ON_SCREEN( l_U2574[3] )))
            {
                if (sub_30395( l_U2735, 5000 ))
                {
                    sub_19172( 14 );
                    if (NOT (IS_CHAR_INJURED( l_U2567[1] )))
                    {
                        TASK_LOOK_AT_CHAR( l_U2567[1], sub_3982(), 9999999, 0 );
                        TASK_DRIVE_BY( l_U2567[1], sub_3982(), 0, 0.00000000, 0.00000000, 0.00000000, 500.00000000, 8, 0, 50 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U2567[2] )))
                    {
                        TASK_LOOK_AT_CHAR( l_U2567[2], sub_3982(), 9999999, 0 );
                        TASK_DRIVE_BY( l_U2567[2], sub_3982(), 0, 0.00000000, 0.00000000, 0.00000000, 500.00000000, 8, 0, 50 );
                    }
                    l_U2735 = 0;
                    l_U2734 = 0;
                }
            }
        }
    }
    if (l_U2745[0])
    {
        if (NOT (IS_CHAR_INJURED( l_U2567[1] )))
        {
            if (NOT l_U2748[0])
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "helicopter_shoot_out", "missbulgarin03", 8.00000000, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "helicopter_jump", "missbulgarin03", 1000, 0, 64 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                STOP_SOUND( l_U2504 );
                TASK_PERFORM_SEQUENCE( l_U2567[1], uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U2748[0] = 1;
            }
            else if (NOT l_U2751[0])
            {
                if (IS_CHAR_PLAYING_ANIM( l_U2567[1], "missbulgarin03", "helicopter_jump" ))
                {
                    l_U2751[0] = 1;
                }
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( l_U2567[1], "missbulgarin03", "helicopter_jump" )))
            {
                DETACH_PED( l_U2567[1], 1 );
                SET_CURRENT_CHAR_WEAPON( l_U2567[1], 34, 1 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -171.33690000, -249.67060000, 33.83240000, 3, -2, 0.50000000 );
                TASK_CLIMB( 0, 1 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U2567[1], uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U1116[12]._fU0 = l_U2567[1];
                sub_57436( ref l_U1116[12] );
                l_U2741[0] = 1;
                l_U2748[0] = 0;
                l_U2751[0] = 0;
                l_U2745[0] = 0;
                l_U2754[0] = 1;
            };;;
        }
    }
    else if (NOT (IS_CHAR_INJURED( l_U2567[1] )))
    {
        if (IS_CHAR_PLAYING_ANIM( l_U2567[1], "missBulgarin03", "helicopter_shoot_loop" ))
        {
            if (NOT (IS_CHAR_INJURED( l_U2567[0] )))
            {
                if (NOT (IS_CAR_DEAD( l_U2574[3] )))
                {
                    if (NOT l_U2760)
                    {
                        GET_CHAR_COORDINATES( sub_3982(), ref vVar11.x, ref vVar11.y, ref vVar11.z );
                        GET_CHAR_COORDINATES( l_U2567[1], ref vVar14.x, ref vVar14.y, ref vVar14.z );
                        uVar17 = {vVar11 - vVar14};
                        GET_HEADING_FROM_VECTOR_2D( uVar17._fU0, uVar17._fU4, ref uVar8 );
                        GET_CAR_HEADING( l_U2574[3], ref uVar9 );
                        fVar7 = uVar8 - uVar9;
                        if (fVar7 > 135.00000000)
                        {
                            fVar7 = 135.00000000;
                        }
                        else if (fVar7 < 45.00000000)
                        {
                            fVar7 = 45.00000000;
                        }
                        DETACH_PED( l_U2567[1], 1 );
                        ATTACH_PED_TO_CAR( l_U2567[1], l_U2574[3], 0, -0.77000000, -0.14000000, 0.00000000, fVar7, 0, 0, 0 );
                        GET_CHAR_HEADING( l_U2567[1], ref uVar10 );
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U2567[1], 0.11400000, 1.16300000, 0.11600000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        if ((l_U2738 == 0) || (sub_30395( l_U2738, 50 )))
                        {
                            uVar20 = {sub_65636()};
                            FIRE_SINGLE_BULLET( uVar3._fU0, uVar3._fU4, uVar3._fU8, vVar11.x + uVar20._fU0, vVar11.y + uVar20._fU4, vVar11.z, 1 );
                            PLAY_SOUND_FROM_POSITION( l_U2504, "BG3_IN_THE_CROSSHAIRS_MACHINE_GUN", uVar3 );
                            TRIGGER_PTFX( "muz_m249", uVar3, 0.00000000, 0.00000000, uVar10, 1.00000000 );
                            GET_GAME_TIMER( ref l_U2738 );
                        }
                    }
                }
                else if (NOT l_U2760)
                {
                    STOP_SOUND( l_U2504 );
                    l_U2760 = 1;
                }
            }
            else if (NOT l_U2760)
            {
                STOP_SOUND( l_U2504 );
                l_U2760 = 1;
            }
        }
    }
    else if (NOT l_U2760)
    {
        STOP_SOUND( l_U2504 );
        l_U2760 = 1;
    };;;
    if (l_U2745[1])
    {
        if (NOT (IS_CHAR_INJURED( l_U2567[2] )))
        {
            if (NOT l_U2748[1])
            {
                TASK_PLAY_ANIM_WITH_FLAGS( l_U2567[2], "helicopter_jump", "missbulgarin03", 1000, 0, 64 );
                l_U2748[1] = 1;
            }
            else if (NOT l_U2751[1])
            {
                if (IS_CHAR_PLAYING_ANIM( l_U2567[2], "missbulgarin03", "helicopter_jump" ))
                {
                    l_U2751[1] = 1;
                }
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( l_U2567[2], "missbulgarin03", "helicopter_jump" )))
            {
                DETACH_PED( l_U2567[2], 1 );
                SET_CURRENT_CHAR_WEAPON( l_U2567[2], 34, 1 );
                l_U1116[13]._fU0 = l_U2567[2];
                l_U1116[13]._fU68 = {-171.77120000, -248.60180000, 33.83240000};
                l_U1116[13]._fU80 = 0;
                l_U1116[13]._fU132 = l_U2608;
                l_U1116[13]._fU24 = 2;
                l_U1116[13]._fU4 = 1;
                l_U2741[1] = 1;
                l_U2748[1] = 0;
                l_U2751[1] = 0;
                l_U2745[1] = 0;
                l_U2754[1] = 1;
            };;;
        }
    }
    if (NOT l_U2757[0])
    {
        if (NOT (IS_CHAR_DEAD( l_U2567[1] )))
        {
            GET_CHAR_HEALTH( l_U2567[1], ref iVar23 );
            if (iVar23 < 2000)
            {
                if (IS_PED_ATTACHED_TO_ANY_CAR( l_U2567[1] ))
                {
                    DETACH_PED( l_U2567[1], 1 );
                    SET_CHAR_HEALTH( l_U2567[1], 5 );
                    l_U2757[0] = 1;
                    l_U2734 = 1;
                    l_U2745[0] = 0;
                }
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U1116[12]._fU0 ))
    {
        if (NOT l_U1116[12]._fU4)
        {
            if (NOT (IS_PED_ATTACHED_TO_ANY_CAR( l_U1116[12]._fU0 )))
            {
                l_U1116[12]._fU68 = {-163.39570000, -246.77540000, 33.30510000};
                l_U1116[12]._fU80 = 0;
                l_U1116[12]._fU132 = l_U2608;
                l_U1116[12]._fU24 = 1;
                l_U1116[12]._fU4 = 1;
                GET_GAME_TIMER( ref l_U2740 );
            }
        }
    }
    if (l_U2744)
    {
        if (NOT (IS_CHAR_DEAD( l_U1116[2]._fU0 )))
        {
            if ((sub_30395( l_U2737, 3000 )) AND (NOT (IS_CHAR_SHOOTING( l_U1116[2]._fU0 ))))
            {
                l_U1116[2]._fU68 = {-171.04090000, -246.66860000, 33.83240000};
                l_U1116[2]._fU80 = 0;
                l_U1116[2]._fU132 = l_U2608;
                l_U1116[2]._fU24 = 2;
                l_U1116[2]._fU4 = 1;
                l_U2744 = 0;
            }
        }
    }
    return;
}

int sub_61916(unknown uParam0, unknown uParam1, vector vParam2, vector vParam5, unknown uParam8)
{
    vector vVar11;
    vector vVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    vector vVar20;
    vector vVar23;
    vector vVar26;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;

    if (NOT l_U206)
    {
        l_U207 = uParam1;
        l_U206 = 1;
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_CAR_SPEED_VECTOR( uParam0, ref l_U208, 0 );
        }
    }
    if (l_U207 <= 0)
    {
        l_U206 = 0;
        return 1;
    }
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_FRAME_TIME( ref uVar36 );
        GET_CAR_COORDINATES( uParam0, ref vVar11.x, ref vVar11.y, ref vVar11.z );
        GET_CAR_PITCH( uParam0, ref vVar14.x );
        GET_CAR_ROLL( uParam0, ref vVar14.y );
        GET_CAR_HEADING( uParam0, ref vVar14.z );
        vVar26 = {(vector( 0.00000000, 0.00000000, 0.00000000)) - l_U208};
        vVar26 = {vVar26 / (((TO_FLOAT( l_U207 )) / 1000.00000000) / uVar36)};
        l_U208 = {l_U208 + vVar26};
        vVar11 = {vVar11 + (l_U208 * uVar36)};
        vVar20 = {vParam2 - vVar11};
        vVar23 = {vParam5 - vVar14};
        vVar20 = {vVar20 * (((VMAG( vVar20 )) / (TO_FLOAT( l_U207 ))) * (uVar36 * 1000.00000000))};
        vVar23 = {vVar23 * (((VMAG( vVar23 )) / (TO_FLOAT( l_U207 ))) * (uVar36 * 1000.00000000))};
        vVar11 = {vVar11 + vVar20};
        vVar14 = {vVar14 + vVar23};
        sub_62356( vVar14.x, vVar14.y, vVar14.z, ref uVar32, ref uVar33, ref uVar34, ref uVar35 );
        SET_CAR_COORDINATES( uParam0, vVar11.x, vVar11.y, vVar11.z + uParam8 );
        SET_VEHICLE_QUATERNION( uParam0, uVar32, uVar33, uVar34, uVar35 );
        l_U207 -= ROUND( uVar36 * 1000.00000000 );
    }
    return 0;
}

void sub_62356(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    float fVar9;
    float fVar10;
    float fVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    fVar9 = uParam0 * 0.50000000;
    fVar10 = uParam1 * 0.50000000;
    fVar11 = uParam2 * 0.50000000;
    uVar12 = COS( fVar10 );
    uVar13 = SIN( fVar10 );
    uVar14 = COS( fVar9 );
    uVar15 = SIN( fVar9 );
    uVar16 = COS( fVar11 );
    uVar17 = SIN( fVar11 );
    (uParam3^) = ((uVar16 * uVar15) * uVar12) + ((uVar17 * uVar14) * uVar13);
    (uParam4^) = ((uVar16 * uVar14) * uVar13) - ((uVar17 * uVar15) * uVar12);
    (uParam4^) *= -1.00000000;
    (uParam5^) = ((uVar17 * uVar14) * uVar12) - ((uVar16 * uVar15) * uVar13);
    (uParam6^) = ((uVar16 * uVar14) * uVar12) + ((uVar17 * uVar15) * uVar13);
    return;
}

void sub_62816(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_65636()
{
    unknown Result;
    unknown uVar3;
    unknown uVar4;
    float fVar5;

    GENERATE_RANDOM_FLOAT( ref fVar5 );
    if (NOT (IS_CHAR_INJURED( sub_3982() )))
    {
        if (fVar5 <= 0.10000000)
        {
            Result._fU0 = 0;
            Result._fU4 = 0;
            Result._fU8 = 0;
        }
        else if ((fVar5 > 0.10000000) AND (fVar5 <= 0.40000000))
        {
            Result._fU0 = -2;
            Result._fU4 = 2;
        }
        else if ((fVar5 > 0.40000000) AND (fVar5 <= 0.60000000))
        {
            Result._fU0 = 2;
            Result._fU4 = -2;
        }
        else if ((fVar5 > 0.60000000) AND (fVar5 <= 0.80000000))
        {
            Result._fU0 = -2;
            Result._fU4 = -2;
        }
        else if ((fVar5 > 0.80000000) AND (fVar5 <= 1.00000000))
        {
            Result._fU0 = 2;
            Result._fU4 = 2;
        };;;;;
    }
    return Result;
}

void sub_67065()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    for ( I = 0; I <= 39; I++ )
    {
        if (l_U1116[I]._fU4)
        {
            if (NOT (IS_CHAR_DEAD( l_U1116[I]._fU0 )))
            {
                if (NOT l_U1116[I]._fU8)
                {
                    SET_CHAR_DECISION_MAKER( l_U1116[I]._fU0, l_U2606 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1116[I]._fU0, 1 );
                    SET_CHAR_RELATIONSHIP( l_U1116[I]._fU0, 5, 0 );
                    switch (l_U1116[I]._fU24)
                    {
                        case 0:
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U1116[I]._fU68._fU0, l_U1116[I]._fU68._fU4, l_U1116[I]._fU68._fU8, 3, -1, 0.50000000 );
                        if (l_U1116[I]._fU20)
                        {
                            TASK_DUCK( 0, -2 );
                        }
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                        case 1:
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_GO_TO_COORD_WHILE_AIMING( 0, l_U1116[I]._fU68._fU0, l_U1116[I]._fU68._fU4, l_U1116[I]._fU68._fU8, 3, 0.50000000, 0.50000000, sub_3982(), 0.00000000, 0.00000000, 0.00000000, 1 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                        case 2:
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U1116[I]._fU68._fU0, l_U1116[I]._fU68._fU4, l_U1116[I]._fU68._fU8, 3, 0.50000000, 0.50000000, sub_3982(), 1 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                        case 3:
                        GET_CHAR_COORDINATES( sub_3982(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_SHOOT_AT_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8 + 0.50000000, 2000, 5 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U1116[I]._fU68._fU0, l_U1116[I]._fU68._fU4, l_U1116[I]._fU68._fU8, 2, 0.50000000, 0.50000000, sub_3982(), 1 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                        case 4:
                        ADD_COVER_POINT( l_U1116[I]._fU68._fU0, l_U1116[I]._fU68._fU4, l_U1116[I]._fU68._fU8, l_U1116[I]._fU100._fU8, l_U1116[I]._fU100._fU4, l_U1116[I]._fU100._fU12, 0, ref l_U1116[I]._fU100._fU0 );
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_SEEK_COVER_TO_COVER_POINT( 0, l_U1116[I]._fU100._fU0, l_U1116[I]._fU100._fU16._fU0, l_U1116[I]._fU100._fU16._fU4, l_U1116[I]._fU100._fU16._fU8, 50 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                        case 5:
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_TOGGLE_DUCK( 0, 1 );
                        TASK_COMBAT_ROLL( 0, 0 );
                        TASK_SHOOT_AT_CHAR( 0, sub_3982(), 2000, 3 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                    }
                    if (NOT (IS_CHAR_INJURED( l_U1116[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1116[I]._fU0, uVar6 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar6 );
                    l_U1116[I]._fU8 = 1;
                }
                else if ((NOT l_U1116[I]._fU16) || (l_U1116[I]._fU12))
                {
                    if (NOT l_U1116[I]._fU20)
                    {
                        if ((sub_28042( l_U1116[I]._fU0, 1, 0 )) || ((l_U1116[I]._fU24 == 4) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1116[I]._fU0, l_U1116[I]._fU68._fU0, l_U1116[I]._fU68._fU4, l_U1116[I]._fU68._fU8, 0.50000000, 0.50000000, 2.00000000, 0 ))))
                        {
                            if (l_U1116[I]._fU24 == 4)
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1116[I]._fU0, l_U1116[I]._fU68._fU0, l_U1116[I]._fU68._fU4, l_U1116[I]._fU68._fU8, 0.50000000, 0.50000000, 2.00000000, 0 )))
                                {
                                    REMOVE_COVER_POINT( l_U1116[I]._fU100._fU0 );
                                    l_U1116[I]._fU8 = 0;
                                    return;
                                }
                                if (l_U1116[I]._fU100._fU28)
                                {
                                    REMOVE_COVER_POINT( l_U1116[I]._fU100._fU0 );
                                }
                            }
                            SET_CHAR_DECISION_MAKER( l_U1116[I]._fU0, l_U2607 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1116[I]._fU0, 0 );
                            l_U2632 = 0;
                            sub_62816( I, "Setting cdm for ped..." );
                            l_U2632 = 0;
                            SET_COMBAT_DECISION_MAKER( l_U1116[I]._fU0, l_U1116[I]._fU132 );
                            l_U2632 = 0;
                            sub_68665( ref l_U1116[I], l_U1116[I]._fU80 );
                            SET_CHAR_RELATIONSHIP( l_U1116[I]._fU0, 5, 23 );
                            SET_CHAR_RELATIONSHIP( l_U1116[I]._fU0, 5, 0 );
                            if (l_U1116[I]._fU84)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar6 );
                                if (NOT (IS_CHAR_DEAD( l_U1116[I]._fU88 )))
                                {
                                    TASK_COMBAT( 0, l_U1116[I]._fU88 );
                                }
                                CLOSE_SEQUENCE_TASK( uVar6 );
                            }
                            else
                            {
                                OPEN_SEQUENCE_TASK( ref uVar6 );
                                TASK_COMBAT( 0, sub_3982() );
                                CLOSE_SEQUENCE_TASK( uVar6 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U1116[I]._fU0 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U1116[I]._fU0, uVar6 );
                            }
                            CLEAR_SEQUENCE_TASK( uVar6 );
                            l_U1116[I]._fU16 = 1;
                            l_U1116[I]._fU12 = 0;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_68665(int iParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU0, iParam0->_fU68, 2 );
        break;
        case 1:
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU0, -198.65360000, -277.80630000, 13.62810000, 5.00000000 );
        break;
        case 2:
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU0, -212.33120000, -229.42130000, 13.44021000, 5.00000000 );
        break;
        case 3:
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU0, -204.90690000, -237.82630000, 13.46470000, 5.00000000 );
        break;
        case 4:
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU0, -197.90500000, -268.85520000, 13.66810000, 5.00000000 );
        break;
        case 5:
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU0, -199.00840000, -250.73710000, 13.56280000, 5.00000000 );
        break;
        case 6:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -198.27170000, -266.36570000, 16.15720000, -198.27170000, -281.36570000, 13.15720000, 5.50000000 );
        break;
        case 7:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, 102.25010000, -439.23290000, 32.74800000, 102.25010000, -437.73290000, 30.24800000, 2.00000000 );
        break;
    }
    return;
}

void sub_69371()
{
    CLEAR_WANTED_LEVEL( sub_10250() );
    g_U25 = 80;
    sub_16017( 0, "E2BG3_PASS", "E2BG3AU", 0 );
    sub_69428();
    sub_3300();
    return;
}

void sub_69428()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_69446();
    sub_69505( iVar2, iVar3, iVar4 );
    return;
}

void sub_69446()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U200[I] = 4;
    }
    return;
}

void sub_69505(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 5;
    sub_69536( iVar5, uParam0, uParam1, uParam2, "Bulgarin" );
    return;
}

void sub_69536(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_69564();
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
            sub_69738( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_69738( ref cVar9 );
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
            sub_69738( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_69738( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU160._fU76;
    }
    else if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_69738( ref cVar9 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_69738( ref cVar9 );
        return;
    }
    iVar7 = g_U14925[uParam0]._fU0._fU4;
    iVar8 = sub_70315( uParam0, iVar7 );;;
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
    if (NOT (sub_70763( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14925[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_10250() );
    sub_2292();
    bVar28 = true;
    uVar29 = sub_70315( uParam0, iVar7 );
    uVar30 = sub_1912( uParam0 );
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
                sub_75037( 9, ref g_U14925[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12379))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_69564();
                    g_U10953._fU8 = 1;
                    g_U10953._fU20 = sub_75488( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_75567( uParam0 );
                sub_75606( 0 );
                sub_2190( uVar30, 0 );
                g_U11076 = 0;
            }
            g_U12382[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_75781();
        }
    }
    if (bParam2)
    {
        sub_69564();
        sub_75880();
        sub_75606( 0 );
        g_U11062 = 1;
        g_U11076 = 0;
    }
    if (bParam3)
    {
        sub_69564();
        sub_75932();
        sub_75606( 0 );
        sub_2190( uVar30, 0 );
    }
    sub_1799();
    return;
}

void sub_69564()
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

void sub_69738(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_70315(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_2143( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_70763(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_70859( uParam1 );
        break;
        case 1:
        bVar8 = sub_71740( uParam1 );
        break;
        case 2:
        bVar8 = sub_71929( uParam1 );
        break;
        case 3:
        bVar8 = sub_72147( uParam1 );
        break;
        case 4:
        bVar8 = sub_72745( uParam1 );
        break;
        case 5:
        bVar8 = sub_72878( uParam1 );
        break;
        case 6:
        bVar8 = sub_73075( uParam1 );
        break;
        case 7:
        bVar8 = sub_73212( uParam1 );
        break;
        case 8:
        bVar8 = sub_73361( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_72358( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_70315( uParam0, uParam1 );
    if (bParam3)
    {
        sub_73579( uVar9, uParam0 );
    }
    return 1;
}

int sub_70859(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_71026( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        sub_71026( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_71026( iVar3, 1500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_71026( iVar3, 500, 0, 0, 0, 0 );
        break;
        case 5:
        sub_71026( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 6:
        sub_71026( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 7:
        sub_71026( iVar3, 3000, 5, 2, 0, 0 );
        break;
        case 8:
        sub_71026( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 9:
        sub_71026( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 10:
        sub_71026( iVar3, 4500, 5, 2, 0, 0 );
        break;
        case 11:
        sub_71026( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 12:
        sub_71026( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 0:
        case 13:
        case 14:
        case 15:
        case 16: break;
        default:
        sub_71648( "Gay Tony", 1 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71648( "Gay Tony", 0 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_71026(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_71037( uParam1 );
    sub_71211( uParam0, 0, uParam2 );
    sub_71211( uParam0, 1, uParam3 );
    sub_71211( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_69446();
    return;
}

void sub_71037(unknown uParam0)
{
    ADD_SCORE( sub_10250(), uParam0 );
    sub_71062( uParam0 );
    return;
}

void sub_71062(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2143( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_71211(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_71648(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_71740(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71026( iVar3, 500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_71026( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_71026( iVar3, 1500, 5, 2, 0, 0 );
        break;
        default:
        sub_71648( "Mori", 1 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71648( "Mori", 0 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71929(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71026( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_71026( iVar3, 15000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_71026( iVar3, 20000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_71026( iVar3, 25000, 5, 2, 0, 0 );
        break;
        default:
        sub_71648( "Yusuf", 1 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71648( "Yusuf", 0 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_72147(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71026( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_71026( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 2:
        sub_71026( iVar3, 0, sub_72236(), sub_72502(), 0, 0 );
        break;
        default:
        sub_71648( "Dominicans", 1 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71648( "Dominicans", 0 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_72236()
{
    switch (l_U200[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_72358( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_72358(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_72502()
{
    switch (l_U200[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_72358( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_72745(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71026( iVar3, 1000, 5, 2, 0, 0 );
        break;
        default:
        sub_71648( "Mum", 1 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71648( "Mum", 0 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_72878(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71026( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_71026( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_71026( iVar3, 6000, 5, 2, 0, 0 );
        break;
        default:
        sub_71648( "Bulgarin", 1 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71648( "Bulgarin", 0 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_73075(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71026( iVar3, 5000, 5, 2, 0, 0 );
        break;
        default:
        sub_71648( "Rocco", 1 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71648( "Rocco", 0 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_73212(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71026( iVar3, 0, sub_72236(), sub_72502(), 0, 0 );
        break;
        default:
        sub_71648( "Henrique", 1 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71648( "Henrique", 0 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_73361(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    if (bVar4)
    {
        sub_71648( "Reserve 1", 0 );
        sub_71026( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_73579(int iParam0, int iParam1)
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
    if (sub_73640( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_74366( iParam1 );
    }
    return;
}

int sub_73640(int iParam0, int iParam1)
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
            sub_73780( 0, iVar6 );
            g_U14902[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U22960[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_73780(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_73950( 0 );
    return;
}

void sub_73950(boolean bParam0)
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
        sub_74195();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_74195()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_74366(int iParam0)
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
        sub_74605( 188 );
        SET_FLOAT_STAT( 188, fVar3 );
        break;
        case 1:
        sub_74605( 192 );
        SET_FLOAT_STAT( 192, fVar3 );
        break;
        case 2:
        sub_74605( 191 );
        SET_FLOAT_STAT( 191, fVar3 );
        break;
        case 3:
        sub_74605( 197 );
        SET_FLOAT_STAT( 197, fVar3 );
        break;
        case 4: break;
        case 5:
        sub_74605( 200 );
        SET_FLOAT_STAT( 200, fVar3 );
        break;
        case 6:
        sub_74605( 201 );
        SET_FLOAT_STAT( 201, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_74605(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_75037(unknown uParam0, unknown uParam1)
{
    sub_75056( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_75056(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_75488(int iParam0, int iParam1)
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

void sub_75567(unknown uParam0)
{
    sub_1660();
    g_U12382[uParam0]._fU120 = 0;
    return;
}

void sub_75606(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_75657( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_75657(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_75781()
{
    sub_75790();
    return;
}

void sub_75790()
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

void sub_75880()
{
    sub_75790();
    return;
}

void sub_75932()
{
    sub_75790();
    StrCopy( ref g_U10966, "FPASS", 16 );
    return;
}

void sub_76030()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    GET_WEAPONTYPE_MODEL( 34, ref uVar3 );
    REQUEST_MODEL( 856283163 );
    while (NOT (HAS_MODEL_LOADED( 856283163 )))
    {
        WAIT( 0 );
    }
    if (NOT (HAS_MODEL_LOADED( uVar3 )))
    {
        REQUEST_MODEL( uVar3 );
        while (NOT (HAS_MODEL_LOADED( uVar3 )))
        {
            WAIT( 0 );
        }
    }
    switch (l_U2795)
    {
        case 0:
        REQUEST_MODEL( l_U912 );
        while (NOT (HAS_MODEL_LOADED( l_U912 )))
        {
            WAIT( 0 );
        }
        l_U2796 = sub_20088( l_U912, 24, -208.11470000, -250.81900000, 39.45900000, 270.00000000, 21, "", 1, 1 );
        SET_AMBIENT_VOICE_NAME( l_U2796, "M_Y_E2Russian_01" );
        l_U2795++;
        break;
        case 1:
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 2 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U2796 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U2796 )))
                {
                    ;
                }
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 2 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2796 )))
            {
                SAY_AMBIENT_SPEECH( l_U2796, "COVER_ME", 1, 1, 2 );
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 3 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2796 )))
            {
                SAY_AMBIENT_SPEECH( l_U2796, "MOVE_IN", 1, 1, 2 );
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 4 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2796 )))
            {
                SAY_AMBIENT_SPEECH( l_U2796, "TAKE_COVER", 1, 1, 2 );
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 5 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2796 )))
            {
                SAY_AMBIENT_SPEECH( l_U2796, "TARGET", 1, 1, 2 );
            }
        }
        break;
    }
    return;
}

void sub_76603(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (sub_76612() == 0)
    {
        sub_76637();
    }
    if (HAS_SCRIPT_LOADED( "MissionResultsTimer" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) == 0)
        {
            START_NEW_SCRIPT( "MissionResultsTimer", 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionResultsTimer" );
        }
    }
    if (sub_79392() <= g_U43138[g_U43137]._fU8)
    {
        g_U43568 = 1;
    }
    else
    {
        g_U43568 = 0;
    }
    if (g_U43600 == 1)
    {
        g_U43612 = sub_79674();
        g_U43600 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (sub_79392() < g_U43612)
            {
                g_U43575 = 1;
            }
            else
            {
                g_U43575 = 0;
            }
        }
        else
        {
            g_U43575 = 0;
        }
    }
    else
    {
        g_U43575 = 0;
    }
    if (g_U43137 == 22)
    {
        if ((sub_80467( 0, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_80777();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_80467( 0, 0, 0 )) > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43137 == 17)
    {
        if ((sub_80467( 1, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_80777();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_80467( 1, 0, 0 )) > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43137 == 15)
    {
        g_U43519 = uParam0;
        if (g_U43519 >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_80777();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (g_U43519 > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if ((g_U43137 == 18) || (g_U43137 == 16))
    {
        if ((sub_80467( 0, 0, 1 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_80777();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_80467( 0, 0, 1 )) > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43137 == 25)
    {
        g_U43519 = uParam0;
        if (g_U43519 >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_80777();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (g_U43519 > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43571 == 1)
    {
        iVar3 = 1;
    }
    else
    {
        iVar3 = 0;
    }
    if (g_U43572 == 1)
    {
        iVar4 = 1;
    }
    else
    {
        iVar4 = 0;
    }
    if (g_U43573 == 1)
    {
        iVar5 = 1;
    }
    else
    {
        iVar5 = 0;
    }
    if (g_U43607 == 1)
    {
        g_U43619 = sub_82249();
        g_U43607 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (iVar3 > g_U43619)
            {
                g_U43582 = 1;
            }
            else
            {
                g_U43582 = 0;
            }
        }
        else
        {
            g_U43582 = 0;
        }
    }
    else
    {
        g_U43582 = 0;
    }
    if (g_U43608 == 1)
    {
        g_U43620 = sub_82945();
        g_U43608 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (iVar4 > g_U43620)
            {
                g_U43583 = 1;
            }
            else
            {
                g_U43583 = 0;
            }
        }
        else
        {
            g_U43583 = 0;
        }
    }
    else
    {
        g_U43583 = 0;
    }
    if (g_U43609 == 1)
    {
        g_U43621 = sub_83524();
        g_U43609 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (iVar5 > g_U43621)
            {
                g_U43584 = 1;
            }
            else
            {
                g_U43584 = 0;
            }
        }
        else
        {
            g_U43584 = 0;
        }
    }
    else
    {
        g_U43584 = 0;
    }
    return;
}

int sub_76612()
{
    return 0;
}

void sub_76637()
{
    if (sub_76651( sub_3982() ))
    {
        if (IS_CONTROL_PRESSED( 2, 77 ))
        {
            if (l_U738 == 0)
            {
                GET_GAME_TIMER( ref l_U735 );
                l_U738 = 1;
            }
            GET_GAME_TIMER( ref l_U736 );
            l_U737 = l_U736 - l_U735;
            if (l_U737 < 1000)
            {
                PRINTNL();
                PRINTSTRING( "***************************" );
                PRINTNL();
                PRINTSTRING( "Player is in the back of a taxi - Blocking Mission Time Goal" );
                PRINTNL();
                PRINTSTRING( "***************************" );
                PRINTNL();
                g_U43593 = 1;
            }
        }
    }
    sub_77181();
    if (g_U12379 == 1)
    {
        if ((IS_BIT_SET( g_U10938._fU0, 7 )) == 0)
        {
            if (g_U43133 == 0)
            {
                if (l_U734 == 0)
                {
                    GET_GAME_TIMER( ref l_U731 );
                    l_U734 = 1;
                }
                GET_GAME_TIMER( ref l_U732 );
                l_U733 = l_U732 - l_U731;
                if (l_U733 < 1000)
                {
                    g_U43597 = 1;
                    PRINTNL();
                    PRINTSTRING( "***************************" );
                    PRINTNL();
                    PRINTSTRING( "Player has used a trip skip - Blocking Mission Goals" );
                    PRINTNL();
                    PRINTSTRING( "***************************" );
                    PRINTNL();
                }
            }
            else
            {
                g_U43597 = 0;
            }
        }
        else
        {
            g_U43597 = 0;
        }
    }
    return;
}

int sub_76651(int iParam0)
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
                if (sub_76715( uVar3 ))
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

int sub_76715(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2687))
    {
        return 1;
    }
    return 0;
}

void sub_77181()
{
    int iVar2;

    iVar2 = 1000;
    if (CHEAT_HAPPENED_RECENTLY( 0, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Poor Weapon Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 1, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Advance Weapon Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 22, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used E2 Weapon Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 30, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used E2 Explosive punch cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 7, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Annihilitor cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 27, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Buzzard cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 26, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used APC cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 2, iVar2 ))
    {
        g_U43594 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Health Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 4, iVar2 ))
    {
        g_U43596 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Wanted Level Reduction - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    return;
}

void sub_79392()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;

    if (g_U12379 == 1)
    {
        if (NOT (IS_CHAR_DEAD( sub_3982() )))
        {
            GET_CHAR_HEALTH( sub_3982(), ref g_U43521 );
        }
    }
    uVar3 = TO_FLOAT( g_U43521 );
    uVar4 = TO_FLOAT( g_U43520 );
    fVar2 = uVar3 / uVar4;
    fVar2 *= 100;
    fVar2 -= 100;
    if (fVar2 < 0)
    {
        fVar2 *= -1;
    }
    fVar2 *= 2;
    if (fVar2 < 0)
    {
        fVar2 = 0;
    }
    if (fVar2 > 100)
    {
        fVar2 = 100;
    }
    g_U43522 = FLOOR( fVar2 );
    if (g_U43522 < 0)
    {
        g_U43522 = 0;
    }
    return g_U43522;
}

int sub_79674()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 475 );
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 479 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 484 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 578 );
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 544 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 550 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 557 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 525 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 533 );
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 568 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 573 );
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 493 );
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 498 );
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 502 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 506 );
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 511 );
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 583 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 591 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 599 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 563 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 605 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 520 );
    }
    return 0;
}

void sub_80467(int iParam0, int iParam1, int iParam2)
{
    if (iParam1 == 1)
    {
        g_U43518 = GET_INT_STAT( 296 );
        g_U43519 = g_U43518 - g_U43517;
    }
    else if (iParam2 == 1)
    {
        g_U43518 = GET_INT_STAT( 297 );
        g_U43519 = g_U43518 - g_U43517;
    }
    else if (iParam0 == 1)
    {
        if (l_U730 < GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER())
        {
            g_U43519++;
        }
        l_U730 = GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER();
    }
    else
    {
        g_U43518 = GET_INT_STAT( 294 );
        g_U43519 = g_U43518 - g_U43517;
    };;;
    if (g_U43519 < 0)
    {
        g_U43519 = 0;
    }
    return g_U43519;
}

int sub_80777()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 547 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 553 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 558 );
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 586 );
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 565 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 608 );
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_82249()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 481 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 487 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 579 );
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 560 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 529 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 534 );
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 495 );
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 503 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 507 );
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 613 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 541 );
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 587 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 594 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 602 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 564 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_82945()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 580 );
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 535 );
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 494 );
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 612 );
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 588 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 595 );
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_83524()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 554 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 596 );
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}
