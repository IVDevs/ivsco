void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U100 = 0;
    l_U112 = 0;
    l_U113 = 1;
    l_U114 = 3;
    l_U116 = 0;
    l_U117 = -1;
    l_U118 = 0;
    l_U119 = 0;
    l_U124 = 1;
    l_U210 = 0;
    l_U211 = 0;
    l_U212 = 0;
    l_U213 = 0;
    l_U214 = 1;
    l_U280 = 6;
    l_U318 = nil;
    l_U331 = nil;
    l_U349 = 1;
    l_U384 = nil;
    l_U404 = 1;
    l_U480 = 6;
    l_U489 = "BOGT_BoxDrop";
    l_U490 = "BOGT_Box_TickDrop";
    l_U555 = 0.63600000;
    l_U556 = 0.37600000;
    l_U605 = 0.05200000;
    l_U606 = 0.35300000;
    l_U607 = 0.30000000;
    l_U608 = 0.37200000;
    l_U609 = 0.37300000;
    l_U610 = 0.38700000;
    l_U611 = 0.44400000;
    l_U612 = 0.03750000;
    l_U613 = 0.36900000;
    l_U614 = 0.62350000;
    l_U615 = 0.60800000;
    l_U616 = {0.24300000, 0.46700000, 0.00000000};
    l_U619 = {0.23100000, 0.43500000, 0.00000000};
    l_U622 = {0.23100000, 0.43500000, 0.00000000};
    l_U625 = {0.31920000, 0.65250000, 0.00000000};
    l_U628 = {0.31920000, 0.65250000, 0.00000000};
    l_U631 = {0.24300000, 0.46700000, 0.00000000};
    l_U634 = {0.50000000, 1.10000000, 0.00000000};
    l_U637 = {0.31920000, 0.65250000, 0.00000000};
    l_U640 = {0.18225000, 0.35025000, 0.00000000};
    l_U643 = 0.30000000;
    l_U644 = 0.37000000;
    l_U645 = 0.56200000;
    l_U646 = 0.40100000;
    l_U647 = 0.30000000;
    l_U648 = 0.37000000;
    l_U649 = 0.69700000;
    l_U650 = 0.40100000;
    l_U651 = 0.30000000;
    l_U652 = 0.37000000;
    l_U653 = 0.66500000;
    l_U654 = 0.40100000;
    l_U655 = 0.32500000;
    l_U656 = 0.62500000;
    l_U657 = 0.00800000;
    l_U658 = 0.49700000;
    l_U659 = 0.52500000;
    l_U660 = 0.49700000;
    l_U661 = 0.51800000;
    l_U662 = 1;
    l_U663 = 0;
    l_U664 = {0.50000000, 0.50000000, 0};
    l_U667 = 0.20000000;
    l_U668 = 0.20000000;
    l_U712 = 0;
    l_U713 = 0;
    l_U725 = 0;
    l_U729 = 0;
    l_U731 = 0;
    l_U732 = 0;
    l_U733 = 0;
    l_U734 = 0;
    l_U735 = 0;
    l_U736 = 0;
    l_U764 = 10.00000000;
    l_U765 = 15.00000000;
    l_U786 = 0;
    l_U787 = 0;
    l_U798 = 2;
    l_U799 = 29;
    l_U800 = 1;
    l_U801 = 3;
    l_U802 = 23;
    l_U803 = 87;
    l_U804 = 28;
    l_U805 = 4;
    l_U806 = 20;
    l_U807 = 7;
    l_U3028 = 0;
    l_U3037 = 1;
    l_U3038 = 0;
    l_U3039 = 1337041428;
    l_U3040 = 871281791;
    l_U3041 = -1084007777;
    l_U3042 = -183203150;
    l_U3043 = 683712035;
    l_U3208 = 0;
    l_U3209 = 1;
    l_U3210 = 0;
    l_U3211 = 1;
    l_U3283 = 0;
    l_U3290 = 1;
    l_U3311 = 50.00000000;
    l_U3312 = 1;
    l_U3321 = 1;
    l_U3326 = 200;
    l_U3327 = 2000;
    l_U3333 = 1;
    l_U3334 = 0;
    l_U3390 = 1;
    l_U3405 = 1;
    l_U3457 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1108();
        sub_3425();
    }
    while (true)
    {
        WAIT( 0 );
        switch (l_U808)
        {
            case 0:
            sub_4077();
            l_U808 = 1;
            break;
            case 1:
            sub_8061();
            break;
            case 2:
            sub_18823();
            break;
            case 6:
            sub_38351();
            break;
            case 3: break;
            case 5:
            sub_75666();
            break;
            case 4:
            if (sub_86679())
            {
                sub_86849();
            }
            break;
            case 13:
            sub_89848();
            break;
        }
        if (l_U3212)
        {
            if (IS_CHAR_INJURED( l_U3057 ))
            {
                l_U3215 = 0;
                sub_90995( 0, l_U3057, 0 );
                sub_88898();
            }
        }
        if (l_U3213)
        {
            if (NOT (IS_CHAR_INJURED( l_U3057 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3731(), l_U3057, 250.00000000, 250.00000000, 250.00000000, 0 )))
                {
                    l_U3215 = 1;
                    sub_88898();
                }
            }
        }
        if (l_U3214)
        {
            if (NOT (sub_18896( l_U3056 )))
            {
                l_U808 = 4;
                l_U3214 = 0;
                l_U3213 = 0;
                l_U3212 = 0;
            }
        }
        sub_91240( 0 );
    }
    return;
}

void sub_1108()
{
    int iVar2;

    iVar2 = 0;
    sub_1122( iVar2 );
    sub_2408( iVar2 );
    return;
}

void sub_1122(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    sub_1131();
    if (g_U43133)
    {
        return;
    }
    iVar3 = g_U14925[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U819)
    {
        sub_1307();
        sub_1515();
        g_U11063 = 1;
    }
    else if (NOT g_U12382[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1640();
            sub_1692();
            g_U11063 = 1;
        }
    }
    sub_1785();
    sub_1924();
    uVar5 = sub_2037( uParam0 );
    sub_2315( uVar5, 0 );
    return;
}

void sub_1131()
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

void sub_1307()
{
    if (g_U10972)
    {
        return;
    }
    sub_1334( g_U10971 );
    if (NOT (IS_BIT_SET( g_U10938._fU0, 7 )))
    {
        sub_1455();
    }
    return;
}

void sub_1334(int iParam0)
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

void sub_1455()
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

void sub_1515()
{
    sub_1524();
    return;
}

void sub_1524()
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

void sub_1640()
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

void sub_1692()
{
    sub_1701();
    return;
}

void sub_1701()
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

void sub_1785()
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

void sub_1924()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1946();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_1946()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_2037(unknown uParam0)
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
    sub_2268( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_2268(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2315(int iParam0, boolean bParam1)
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

void sub_2408(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2417();
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
    if (NOT sub_3192())
    {
        return;
    }
    if (NOT g_U819)
    {
        sub_3258();
        SET_BIT( ref g_U10938._fU0, 2 );
    }
    return;
}

void sub_2417()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_2455( 5, g_U575[I] )) == 1) AND (g_U575[I]._fU20))
        {
            if ((sub_2455( 1, g_U575[I] )) != 0)
            {
                sub_2741( I );
            }
        }
    }
    if (NOT sub_2907())
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

int sub_2455(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2741(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2826( g_U575 - 1 );
    return;
}

void sub_2826(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2907()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2455( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3192()
{
    if ((g_U10938._fU4 == 0) AND (g_U10938._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_3258()
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

void sub_3425()
{
    if (NOT (IS_CHAR_DEAD( l_U3157 )))
    {
        SET_CHAR_VISIBLE( l_U3157, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U3157, 0 );
        SET_CHAR_COLLISION( l_U3157, 1 );
        SET_CHAR_PROOFS( l_U3157, 0, 0, 0, 0, 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U3158 )))
    {
        SET_CHAR_VISIBLE( l_U3158, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U3158, 0 );
        SET_CHAR_COLLISION( l_U3158, 1 );
        SET_CHAR_PROOFS( l_U3158, 0, 0, 0, 0, 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    sub_3591( 0 );
    SET_PED_IS_BLIND_RAGING( sub_3731(), 0 );
    SET_ALL_RANDOM_PEDS_FLEE( sub_3780(), 0 );
    if (DOES_CHAR_EXIST( l_U3057 ))
    {
        ADD_PED_TO_MISSION_DELETION_LIST( l_U3057, 1 );
    }
    SWITCH_GARBAGE_TRUCKS( 1 );
    SET_CREATE_RANDOM_COPS( 1 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 132.25680000, -435.59270000, -100.00000000, 140.57100000, -420.95360000, 100.00000000, 1 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -84.58950000, -233.01110000, 12.84580000, -67.96600000, -225.09730000, 16.73580000, 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3591(unknown uParam0)
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

void sub_3731()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3780()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4077()
{
    unknown uVar2;
    int I;

    sub_4089( 500 );
    LOAD_ADDITIONAL_TEXT( "TONY2", 0 );
    LOAD_ADDITIONAL_TEXT( "E2T2AUD", 6 );
    sub_4239( "E2T2AUD" );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    sub_4366( 0, sub_3731(), "LUIS", 0 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3731(), 0 );
    l_U3060 = {135.80300000, -438.03900000, 16.04700000};
    l_U3064 = {-75.71000000, -229.37000000, 15.86000000};
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 132.25680000, -435.59270000, -100.00000000, 140.57100000, -420.95360000, 100.00000000, 0 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -84.58950000, -233.01110000, 12.84580000, -67.96600000, -225.09730000, 16.73580000, 0 );
    SET_WANTED_MULTIPLIER( 0.50000000 );
    SET_GROUP_SEPARATION_RANGE( sub_4664(), 40.00000000 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    for ( I = 0; I < 8; I++ )
    {
        l_U3197[I] = 1;
    }
    sub_4766();
    g_U43137 = 1;
    sub_4847();
    return;
}

void sub_4089(unknown uParam0)
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

void sub_4239(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_4256();
    return;
}

void sub_4256()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U2._fU16[I]._fU0 = nil;
        StrCopy( ref l_U2._fU16[I]._fU4, "", 32 );
        l_U2._fU344[I] = 0;
    }
    return;
}

void sub_4366(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4446( "\n PED NUMBER ", uParam0 );
    sub_4486( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4446(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4486(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4664()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4766()
{
    sub_4776( 1 );
    sub_4776( 2 );
    sub_4776( 0 );
    return;
}

void sub_4776(unknown uParam0)
{
    g_U30226[uParam0] = GET_ID_OF_THIS_THREAD();
    g_U30149[uParam0] = 1;
    return;
}

void sub_4847()
{
    sub_4856();
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
        sub_6635();
        sub_6673();
    }
    else
    {
        g_U43626 = 1;
        sub_6635();
        sub_6673();
        if (g_U43137 == 22)
        {
            sub_6776( 0, 0, 0 );
        }
        if (g_U43137 == 17)
        {
            sub_6776( 1, 0, 0 );
        }
        if (g_U43137 == 15)
        {
            sub_6776( 0, 1, 0 );
        }
        if (g_U43137 == 18)
        {
            sub_6776( 0, 0, 1 );
        }
        if (g_U43137 == 16)
        {
            sub_6776( 0, 0, 1 );
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
    l_U719 = 0;
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

void sub_4856()
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

void sub_6635()
{
    GET_GAME_TIMER( ref g_U43501 );
    g_U43496 = 1;
    return;
}

void sub_6673()
{
    if (NOT (IS_CHAR_DEAD( sub_3731() )))
    {
        GET_CHAR_HEALTH( sub_3731(), ref g_U43520 );
        g_U43520 = 200;
    }
    return;
}

void sub_6776(int iParam0, int iParam1, int iParam2)
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

void sub_8061()
{
    unknown uVar2;
    unknown uVar3;

    switch (l_U3457)
    {
        case 0:
        l_U3020 = 1;
        if ((IS_BIT_SET( g_U10938._fU0, 7 )) AND (NOT g_U43133))
        {
            if (sub_8141())
            {
                if (g_U43104[1] > 0)
                {
                    g_U43104[1] = 0;
                }
                SET_PLAYER_CONTROL( sub_3780(), 0 );
                GET_CURRENT_WEATHER( ref l_U3459 );
                FORCE_WEATHER_NOW( 1 );
                START_CUTSCENE_NOW( "GT02_AA" );
                sub_8304( 1, 0 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, -468.00000000, 153.00000000, 10.00000000, 1, 1.00000000 );
                l_U3457 = 1;
            }
        }
        else
        {
            l_U3457 = 2;
            if (g_U43133)
            {
                if (g_U43104[1] > 0)
                {
                    g_U43104[1] = 0;
                }
                if (g_U43004 < 100)
                {
                    g_U43004 = 100;
                }
                if (g_U43007 < 100)
                {
                    g_U43007 = 100;
                }
                if (g_U43005 < 100)
                {
                    g_U43005 = 100;
                }
                if (g_U43006 < 100)
                {
                    g_U43006 = 100;
                }
                if (g_U43008 < 100)
                {
                    g_U43008 = 100;
                }
                if (g_U43009 < 100)
                {
                    g_U43009 = 100;
                }
            }
        }
        break;
        case 1:
        if (HAS_CUTSCENE_LOADED())
        {
            GET_GAME_TIMER( ref l_U3460 );
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
                if (NOT l_U3461)
                {
                    if (sub_8646( l_U3460, 15000 ))
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, -468.00000000, 153.00000000, 10.00000000, 1, 0.00000000 );
                        l_U3461 = 1;
                    }
                }
            }
            l_U3457 = 2;
            CLEAR_NAMED_CUTSCENE( "GT02_AA" );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, -468.00000000, 153.00000000, 10.00000000, 0, 0.00000000 );
            FORCE_WEATHER_NOW( l_U3459 );
            RELEASE_WEATHER();
        }
        break;
        case 2:
        ADD_COVER_POINT( 114.03050000, -429.10280000, 30.74300000, 1, 0.01830000, 3, 0, ref l_U3154 );
        ADD_COVER_POINT( 116.06340000, -428.71400000, 30.74290000, 1, 92.86440000, 3, 0, ref l_U3155 );
        ADD_COVER_BLOCKING_AREA( 115.12230000, -428.54780000, 30.06510000, 116.46960000, -427.42260000, 32.90810000, 1, 1, 1 );
        sub_8941();
        sub_4766();
        switch (g_U43104[1])
        {
            case 0:
            sub_9169( 0 );
            REQUEST_MODEL( sub_9630( 0 ) );
            while ((NOT (sub_9792( 0 ))) || (NOT (HAS_MODEL_LOADED( sub_9630( 0 ) ))))
            {
                sub_9169( 0 );
                WAIT( 0 );
            }
            CLEAR_AREA( -465.18530000, 148.33410000, 8.86880000, 50.00000000, 1 );
            SET_CHAR_COORDINATES( sub_3731(), -465.18530000, 148.33410000, 8.86880000 );
            SET_CHAR_HEADING( sub_3731(), 278.25370000 );
            sub_9938( 0 );
            sub_9938( 1 );
            if (NOT (IS_CHAR_DEAD( l_U3057 )))
            {
                SET_CHAR_COORDINATES( l_U3057, -464.36550000, 150.15010000, 8.85860000 );
                SET_CHAR_HEADING( l_U3057, 270.00000000 );
            }
            LOAD_SCENE( -465.18530000, 148.33410000, 8.86880000 );
            CLEAR_ROOM_FOR_CHAR( sub_3731() );
            sub_18144();
            SET_CAM_BEHIND_PED( sub_3731() );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL( sub_3780(), 1 );
            WAIT( 500 );
            if (HAS_CHAR_GOT_WEAPON( sub_3731(), 32 ))
            {
                REMOVE_WEAPON_FROM_CHAR( sub_3731(), 32 );
            }
            DO_SCREEN_FADE_IN( 500 );
            l_U808 = 2;
            break;
            case 1:
            sub_18144();
            l_U3021 = 1;
            l_U808 = 6;
            break;
            case 2:
            sub_9169( 0 );
            REQUEST_MODEL( sub_9630( 0 ) );
            while ((NOT (sub_9792( 0 ))) || (NOT (HAS_MODEL_LOADED( sub_9630( 0 ) ))))
            {
                sub_9169( 0 );
                WAIT( 0 );
            }
            SET_CHAR_COORDINATES( sub_3731(), 130.32430000, -442.83450000, 13.75990000 );
            SET_CHAR_HEADING( sub_3731(), 278.25370000 );
            sub_9938( 0 );
            sub_9938( 1 );
            if (NOT (IS_CAR_DEAD( l_U3056 )))
            {
                SET_CAR_COORDINATES( l_U3056, 135.26060000, -436.41930000, 13.64230000 );
                SET_CAR_HEADING( l_U3056, 180.06960000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U3056 );
            }
            if (NOT (IS_CHAR_DEAD( l_U3057 )))
            {
                SET_CHAR_COORDINATES( l_U3057, 130.94120000, -440.01540000, 13.76610000 );
                SET_GROUP_MEMBER( sub_4664(), l_U3057 );
            }
            LOAD_SCENE( 130.94120000, -440.01540000, 13.76610000 );
            CLEAR_AREA( 130.94120000, -440.01540000, 13.76610000, 100.00000000, 1 );
            CLEAR_ROOM_FOR_CHAR( sub_3731() );
            sub_18144();
            SET_CAM_BEHIND_PED( sub_3731() );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL( sub_3780(), 1 );
            sub_18676( 500 );
            l_U809 = 26;
            l_U808 = 5;
            break;
        }
        l_U3457 = 3;
        break;
    }
    return;
}

void sub_8141()
{
    return sub_8152( 1, 1 );
}

int sub_8152(boolean bParam0, unknown uParam1)
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

void sub_8304(unknown uParam0, unknown uParam1)
{
    g_U30154[uParam0] = 1;
    return;
}

int sub_8646(int iParam0, int iParam1)
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

void sub_8941()
{
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U3029 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U3029, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3029, 66 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U3030 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U3030, 0 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U3031 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U3031, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U3031, 0 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U3032 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U3033 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U3033, 0 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U3034 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U3035 );
    return;
}

void sub_9169(unknown uParam0)
{
    REQUEST_MODEL( sub_9180( uParam0 ) );
    return;
}

int sub_9180(unknown uParam0)
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
    sub_2268( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

int sub_9630(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -1255452397;
        case 3: return -789894171;
        case 2: return 1638119866;
        case 1: return -304802106;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -1660661558;
}

void sub_9792(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_9180( uParam0 ) );
}

void sub_9938(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        CLEAR_AREA( -460.63110000, 150.03400000, 8.74540000, 5.00000000, 1 );
        while (NOT (sub_10075( 0, -460.55780000, 152.55330000, 8.74930000, 181.41900000, ref l_U3056 )))
        {
            WAIT( 0 );
        }
        CHANGE_CAR_COLOUR( l_U3056, 0, 0 );
        l_U3214 = 1;
        break;
        case 1:
        sub_11406( 0, ref l_U3057, -465.17520000, 151.10240000, 8.80710000, 338.20000000 );
        sub_4366( 1, l_U3057, "TONY", 0 );
        SET_CHAR_DECISION_MAKER( l_U3057, l_U3034 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3057, 1 );
        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U3057, 0 );
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        l_U3212 = 1;
        l_U3213 = 1;
        break;
        case 2:
        l_U2653._fU0 = sub_12615( 2397320, 24, 117.83200000, -427.59400000, 30.74280000, 180.00000000, 7, "E2_XJ_OFFICE", 1, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U2653._fU0, 0, 0, 1 );
        UNLOCK_RAGDOLL( l_U2653._fU0, 0 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2397320 );
        STOP_PED_SPEAKING( l_U2653._fU0, 1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U2653._fU0, "Knocked_out", "MissTony02", 1000.00000000, 1, 0, 0, 0, 0 );
        SET_CHAR_PROOFS( l_U2653._fU0, 1, 1, 1, 1, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U2653._fU0, 1 );
        SET_CHAR_KEEP_TASK( l_U2653._fU0, 1 );
        FREEZE_CHAR_POSITION( l_U2653._fU0, 1 );
        break;
        case 3:
        l_U810[0]._fU0 = sub_12615( l_U3041, 24, 110.84930000, -421.98860000, 30.74280000, 194.83820000, 12, "GtaMloRoom06", 1, 1 );
        l_U810[0]._fU68 = {111.65110000, -422.77240000, 30.74300000};
        l_U810[0]._fU80 = 2;
        l_U810[0]._fU136 = l_U3029;
        l_U810[0]._fU24 = 1;
        FORCE_PED_TO_LOAD_COVER( l_U810[0]._fU0, 1 );
        l_U810[7]._fU0 = sub_12615( l_U3040, 24, 106.61270000, -424.32860000, 30.74300000, 270.00000000, 12, "GtaMloRoom06", 1, 1 );
        l_U810[7]._fU68 = {106.51480000, -421.81220000, 30.74300000};
        l_U810[7]._fU80 = 2;
        l_U810[7]._fU136 = l_U3029;
        l_U810[7]._fU24 = 6;
        l_U810[15]._fU0 = sub_12615( l_U3041, 24, 107.62450000, -435.33630000, 30.74300000, 53.30730000, 12, "GtaMloRoom02", 1, 1 );
        l_U810[15]._fU68 = {107.62450000, -435.33630000, 30.74300000};
        l_U810[15]._fU80 = 1;
        l_U810[15]._fU136 = l_U3029;
        l_U810[1]._fU0 = sub_12615( l_U3040, 24, 104.42940000, -436.42400000, 30.74300000, 273.37400000, 10, "GtaMloRoom03", 1, 1 );
        l_U810[1]._fU68 = {104.42940000, -436.42400000, 30.74300000};
        l_U810[1]._fU80 = 2;
        l_U810[1]._fU136 = l_U3029;
        l_U810[2]._fU0 = sub_12615( l_U3041, 24, 102.83050000, -438.25370000, 30.74300000, 273.37400000, 12, "GtaMloRoom03", 1, 1 );
        l_U810[2]._fU68 = {102.83050000, -438.25370000, 30.74300000};
        l_U810[2]._fU80 = 2;
        l_U810[2]._fU136 = l_U3029;
        l_U810[3]._fU0 = sub_12615( l_U3040, 24, 91.93020000, -439.92410000, 30.74300000, 285.62070000, 12, "GtaMloRoom07", 1, 1 );
        l_U810[3]._fU68 = {91.51170000, -437.55490000, 30.74300000};
        l_U810[3]._fU80 = 0;
        l_U810[3]._fU136 = l_U3029;
        l_U810[4]._fU0 = sub_12615( l_U3043, 24, 89.67050000, -422.50160000, 27.89420000, 181.22260000, 12, "GtaMloRoom08", 1, 1 );
        l_U810[4]._fU68 = {89.59890000, -425.79920000, 30.08570000};
        l_U810[4]._fU80 = 2;
        l_U810[4]._fU136 = l_U3029;
        l_U810[4]._fU24 = 1;
        l_U810[21]._fU0 = sub_12615( l_U3041, 24, 101.25010000, -430.96620000, 30.74290000, 270.72030000, 32, "GtaMloRoom02", 1, 1 );
        l_U810[21]._fU68 = {107.50080000, -431.32710000, 30.74290000};
        l_U810[21]._fU80 = 2;
        l_U810[21]._fU136 = l_U3029;
        l_U810[21]._fU24 = 1;
        l_U3157 = sub_12615( l_U3041, 24, 101.90970000, -432.40650000, 30.74290000, 276.72030000, 32, "GtaMloRoom02", 1, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U3157, 1 );
        SET_CHAR_VISIBLE( l_U3157, 0 );
        SET_CHAR_COLLISION( l_U3157, 0 );
        SET_CHAR_PROOFS( l_U3157, 1, 1, 1, 1, 1 );
        l_U3158 = sub_12615( l_U3041, 24, 101.82340000, -430.17340000, 30.74290000, 253.06470000, 32, "GtaMloRoom02", 1, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U3158, 1 );
        SET_CHAR_VISIBLE( l_U3158, 0 );
        SET_CHAR_COLLISION( l_U3158, 0 );
        SET_CHAR_PROOFS( l_U3158, 1, 1, 1, 1, 1 );
        l_U810[20]._fU0 = sub_12615( l_U3040, 24, 88.25510000, -430.22220000, 30.74300000, 172.00000000, 9, "GtaMloRoom07", 1, 1 );
        l_U810[20]._fU68 = {90.33650000, -439.74160000, 30.74300000};
        l_U810[20]._fU80 = 2;
        l_U810[20]._fU136 = l_U3029;
        l_U810[20]._fU24 = 5;
        l_U810[20]._fU104 = {sub_14595( 280.34590000, 1, 3, ref l_U3081[20], 106.22220000, -438.00030000, 32.67871000, 1 )};
        l_U810[22]._fU0 = sub_12615( l_U3041, 24, 93.63440000, -432.66460000, 30.74300000, 297.38620000, 13, "GtaMloRoom07", 1, 1 );
        l_U810[22]._fU68 = {94.34280000, -439.32420000, 30.74290000};
        l_U810[22]._fU80 = 2;
        l_U810[22]._fU136 = l_U3029;
        l_U810[22]._fU24 = 2;
        l_U810[24]._fU0 = sub_12615( l_U3041, 24, 89.26830000, -439.65270000, 25.04420000, 355.08150000, 7, "GtaMloRoom11", 1, 1 );
        l_U810[24]._fU68 = {87.57890000, -430.86360000, 25.04440000};
        l_U810[24]._fU80 = 2;
        l_U810[24]._fU136 = l_U3029;
        l_U810[24]._fU24 = 1;
        break;
        case 4:
        l_U810[5]._fU0 = sub_12615( l_U3041, 24, 91.66940000, -437.39100000, 25.04420000, 0.00000000, 12, "GtaMloRoom11", 1, 1 );
        l_U810[5]._fU68 = {89.35900000, -437.06470000, 25.04420000};
        l_U810[5]._fU80 = 2;
        l_U810[5]._fU136 = l_U3029;
        l_U810[5]._fU24 = 6;
        l_U810[6]._fU0 = sub_12615( l_U3040, 24, 100.19550000, -439.20230000, 25.04430000, 288.80720000, 10, "GtaMloRoom10", 1, 1 );
        l_U810[6]._fU68 = {100.19550000, -439.20230000, 25.04430000};
        l_U810[6]._fU80 = 2;
        l_U810[6]._fU136 = l_U3029;
        l_U810[8]._fU0 = sub_12615( l_U3041, 24, 106.77420000, -438.26390000, 25.04450000, 86.80000000, 12, "GtaMloRoom09", 1, 1 );
        l_U810[8]._fU68 = {106.77420000, -438.26390000, 25.04452000};
        l_U810[8]._fU80 = 2;
        l_U810[8]._fU136 = l_U3029;
        l_U810[9]._fU0 = sub_12615( l_U3040, 24, 105.04770000, -440.28730000, 25.04430000, 155.00000000, 13, "GtaMloRoom09", 1, 1 );
        l_U810[9]._fU68 = {105.04770000, -440.28730000, 25.04430000};
        l_U810[9]._fU80 = 2;
        l_U810[9]._fU136 = l_U3029;
        l_U810[9]._fU24 = 1;
        l_U810[10]._fU0 = sub_12615( l_U3043, 24, 105.77020000, -433.15970000, 25.04420000, 155.00000000, 13, "GtaMloRoom09", 1, 1 );
        l_U810[10]._fU68 = {107.19740000, -437.45280000, 25.04420000};
        l_U810[10]._fU80 = 2;
        l_U810[10]._fU136 = l_U3029;
        l_U810[10]._fU24 = 1;
        l_U810[12]._fU0 = sub_12615( l_U3040, 24, 107.79210000, -422.83090000, 25.04420000, 155.00000000, 12, "GtaMloRoom17", 1, 1 );
        l_U810[12]._fU68 = {107.79210000, -422.83090000, 25.04420000};
        l_U810[12]._fU80 = 2;
        l_U810[12]._fU136 = l_U3029;
        l_U810[35]._fU0 = sub_12615( l_U3041, 24, 105.53700000, -435.96500000, 26.04500000, 0.00000000, 0, "GtaMloRoom09", 1, 1 );
        l_U810[35]._fU68 = {107.56010000, -429.85950000, 25.04440000};
        l_U810[35]._fU80 = 2;
        l_U810[35]._fU136 = l_U3029;
        SET_CURRENT_CHAR_WEAPON( l_U810[35]._fU0, 0, 0 );
        CREATE_OBJECT_NO_OFFSET( 993473937, 105.53700000, -435.96500000, 26.04500000, ref l_U3075, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3075, "GtaMloRoom09" );
        ATTACH_OBJECT_TO_PED( l_U3075, l_U810[35]._fU0, 1219, 0.09200000, 0.02900000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
        break;
        case 5:
        l_U810[13]._fU0 = sub_12615( l_U3041, 24, 108.32060000, -437.02690000, 19.34620000, 90.00000000, 13, "GtaMloRoom12", 1, 1 );
        l_U810[13]._fU68 = {104.22860000, -436.49250000, 19.34620000};
        l_U810[13]._fU80 = 2;
        l_U810[13]._fU136 = l_U3029;
        l_U810[13]._fU24 = 3;
        l_U810[14]._fU0 = sub_12615( l_U3040, 24, 108.60120000, -438.41090000, 19.34620000, 90.00000000, 10, "GtaMloRoom12", 1, 1 );
        l_U810[14]._fU68 = {94.75430000, -439.79150000, 19.34610000};
        l_U810[14]._fU80 = 5;
        l_U810[14]._fU136 = l_U3029;
        l_U810[16]._fU0 = sub_12615( l_U3043, 24, 108.28280000, -439.04930000, 19.34620000, 90.00000000, 12, "GtaMloRoom12", 1, 1 );
        l_U810[16]._fU68 = {101.70970000, -438.01740000, 19.34620000};
        l_U810[16]._fU80 = 2;
        l_U810[16]._fU136 = l_U3029;
        l_U810[25]._fU0 = sub_12615( l_U3040, 24, 89.97540000, -421.81900000, 16.49660000, 165.82360000, 12, "GtaMloRoom08", 1, 1 );
        l_U810[25]._fU68 = {89.52710000, -427.42030000, 19.34730000};
        l_U810[25]._fU80 = 2;
        l_U810[25]._fU136 = l_U3029;
        l_U810[25]._fU24 = 1;
        l_U810[26]._fU0 = sub_12615( l_U3040, 24, 89.44950000, -421.37420000, 22.19690000, 106.58200000, 9, "GtaMloRoom08", 1, 1 );
        l_U810[26]._fU68 = {87.80310000, -427.37990000, 19.34800000};
        l_U810[26]._fU80 = 2;
        l_U810[26]._fU136 = l_U3029;
        l_U810[26]._fU24 = 2;
        CLEAR_AREA( 92.74150000, -436.02010000, 21.69898000, 10.00000000, 1 );
        l_U810[30]._fU0 = sub_12615( l_U3041, 24, 88.32650000, -434.51460000, 19.34610000, 249.00000000, 13, "GtaMloRoom14", 1, 1 );
        l_U810[30]._fU68 = {89.21520000, -439.54700000, 19.34610000};
        l_U810[30]._fU80 = 2;
        l_U810[30]._fU136 = l_U3029;
        l_U810[30]._fU24 = 2;
        break;
        case 6:
        l_U810[29]._fU0 = sub_12615( l_U3041, 24, 92.06400000, -435.50500000, 19.34630000, 180.00000000, 14, "GtaMloRoom13", 1, 1 );
        l_U810[29]._fU68 = {92.62220000, -437.82330000, 19.34610000};
        l_U810[29]._fU80 = 2;
        l_U810[29]._fU136 = l_U3029;
        l_U810[29]._fU24 = 2;
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U810[29]._fU0, 1 );
        break;
        case 7:
        l_U810[17]._fU0 = sub_12615( l_U3040, 24, 105.58530000, -436.52570000, 13.91260000, 90.00000000, 12, "GtaMloRoom15", 1, 1 );
        l_U810[17]._fU68 = {105.58530000, -436.52570000, 13.91260000};
        l_U810[17]._fU80 = 2;
        l_U810[17]._fU136 = l_U3029;
        l_U810[18]._fU0 = sub_12615( l_U3041, 24, 110.35950000, -437.46640000, 13.91260000, 345.00000000, 12, "GtaMloRoom18", 1, 1 );
        l_U810[18]._fU68 = {110.35950000, -437.46640000, 13.91260000};
        l_U810[18]._fU80 = 2;
        l_U810[18]._fU136 = l_U3029;
        l_U810[19]._fU0 = sub_12615( l_U3040, 24, 112.07440000, -437.82120000, 13.91280000, 28.05990000, 10, "GtaMloRoom18", 1, 1 );
        l_U810[19]._fU68 = {104.53560000, -432.50380000, 13.91280000};
        l_U810[19]._fU80 = 2;
        l_U810[19]._fU136 = l_U3029;
        l_U810[19]._fU24 = 2;
        l_U810[27]._fU0 = sub_12615( l_U3040, 24, 91.48420000, -433.89870000, 13.91260000, 0.00000000, 10, "GtaMloRoom15", 1, 1 );
        l_U810[27]._fU68 = {89.06530000, -433.95070000, 13.91260000};
        l_U810[27]._fU80 = 2;
        l_U810[27]._fU136 = l_U3029;
        l_U810[27]._fU24 = 6;
        l_U810[32]._fU0 = sub_12615( l_U3043, 24, 113.36710000, -440.05200000, 13.91280000, 27.20000000, 13, "GtaMloRoom19", 1, 1 );
        l_U810[32]._fU68 = {113.36710000, -440.05200000, 13.91280000};
        l_U810[32]._fU80 = 2;
        l_U810[32]._fU136 = l_U3029;
        l_U810[33]._fU0 = sub_12615( l_U3041, 24, 118.04990000, -441.71340000, 13.91280000, 57.20000000, 9, "GtaMloRoom19", 1, 1 );
        l_U810[33]._fU68 = {112.86780000, -441.57440000, 13.91280000};
        l_U810[33]._fU80 = 7;
        l_U810[33]._fU136 = l_U3029;
        l_U810[33]._fU24 = 1;
        l_U810[34]._fU0 = sub_12615( l_U3040, 24, 98.89070000, -435.38980000, 13.91280000, 57.20000000, 12, "GtaMloRoom15", 1, 1 );
        l_U810[34]._fU68 = {98.77840000, -435.36880000, 13.91290000};
        l_U810[34]._fU80 = 6;
        l_U810[34]._fU136 = l_U3031;
        l_U810[34]._fU24 = 1;
        break;
    }
    return;
}

void sub_10075(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_9630( uParam0 );
    return sub_10106( uParam5, uVar8, uParam1, uParam4, uParam0 );
}

int sub_10106(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_10238( (uParam0^), uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_10238(unknown uParam0, int iParam1)
{
    if (iParam1 == 8)
    {
        return;
    }
    switch (iParam1)
    {
        case 0:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_3731() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3731() )))
            {
                PRINTSTRING( "KGM.............Retune TONY car to K109_THE_STUDIO\n" );
                RETUNE_RADIO_TO_STATION_NAME( "K109_THE_STUDIO" );
            }
        }
        break;
        case 3:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 0 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 0, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 3.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_3731() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3731() )))
            {
                PRINTSTRING( "KGM.............Retune DOMINICANS car to SAN_JUAN_SOUNDS\n" );
                RETUNE_RADIO_TO_STATION_NAME( "SAN_JUAN_SOUNDS" );
            }
        }
        break;
        case 2:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 134, 136 );
        SET_EXTRA_CAR_COLOURS( uParam0, 134, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_3731() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3731() )))
            {
                PRINTSTRING( "KGM.............Retune YUSUF car to BEAT\n" );
                RETUNE_RADIO_TO_STATION_NAME( "BEAT_95" );
            }
        }
        break;
        case 1:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 45, 45 );
        SET_EXTRA_CAR_COLOURS( uParam0, 35, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_3731() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3731() )))
            {
                PRINTSTRING( "KGM.............Retune MORI car to DANCE_ROCK\n" );
                RETUNE_RADIO_TO_STATION_NAME( "DANCE_ROCK" );
            }
        }
        break;
    }
    return;
}

void sub_11406(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_11417( uParam0 ), sub_9180( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_11463( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_11497( uParam0, (uParam1^) );
    return;
}

int sub_11417(unknown uParam0)
{
    return 25;
}

void sub_11463(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_11497(unknown uParam0, unknown uParam1)
{
    sub_11509( ref uParam1, uParam0 );
    return;
}

void sub_11509(unknown uParam0, int iParam1)
{
    sub_11520( uParam0 );
    if (iParam1 == 37)
    {
        sub_11622( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_12206( (uParam0^), iParam1, g_U42825[iParam1] );
    }
    return;
}

void sub_11520(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_11622(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_12206(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        sub_11622( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 1:
        sub_11622( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 31:
        sub_11622( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
        return;
        case 7:
        sub_11622( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_11622( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_12615(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
{
    unknown Result;

    if (NOT (HAS_MODEL_LOADED( uParam0 )))
    {
        REQUEST_MODEL( uParam0 );
        while (NOT (HAS_MODEL_LOADED( uParam0 )))
        {
            WAIT( 0 );
        }
    }
    CREATE_CHAR( 26, uParam0, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam5 );
    SET_CHAR_DECISION_MAKER( Result, l_U3034 );
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
    SET_PED_DONT_DO_EVASIVE_DIVES( Result, 1 );
    if (bParam8)
    {
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( Result, 1 );
    }
    if (NOT (COMPARE_STRING( uParam7, "" )))
    {
        SET_ROOM_FOR_CHAR_BY_NAME( Result, uParam7 );
    }
    SET_CHAR_MAX_HEALTH( Result, 230 );
    SET_CHAR_HEALTH( Result, 230 );
    return Result;
}

void sub_14595(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown Result;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    Result._fU0 = (uParam3^);
    Result._fU4 = uParam0;
    Result._fU8 = uParam1;
    Result._fU12 = uParam2;
    Result._fU16 = {uParam4};
    Result._fU28 = uParam7;
    return Result;
}

void sub_18144()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_18676(unknown uParam0)
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

void sub_18823()
{
    int iVar2;

    switch (l_U3405)
    {
        case 0: break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U3057 )))
        {
            if (sub_18896( l_U3056 ))
            {
                if (NOT l_U3406)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        sub_19059( "E2T2_WHERE", ref l_U3159, 6, 1 );
                        l_U3212 = 1;
                        l_U3406 = 1;
                    }
                }
                if (sub_20121( 135.80300000, -438.03900000, 16.04700000, 2.50000000, 2.50000000, 2.50000000, 1, l_U3057, l_U3056, "GoToMeet", "TonyBeh", "InTonyCar", 0, 1, "TonyWant", 0 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3063 );
                    CLEAR_PRINTS();
                    SET_PLAYER_CONTROL( sub_3780(), 0 );
                    sub_4089( 500 );
                    l_U3292 = 0;
                    l_U3291 = 0;
                    l_U3214 = 0;
                    if (IS_CHAR_IN_ANY_CAR( sub_3731() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3731(), ref iVar2 );
                        if (iVar2 == l_U3056)
                        {
                            l_U3021 = 1;
                        }
                        GET_CAR_COORDINATES( iVar2, ref l_U3022._fU0, ref l_U3022._fU4, ref l_U3022._fU8 );
                        GET_CAR_HEADING( iVar2, ref l_U3025 );
                        GET_CAR_COLOURS( iVar2, ref l_U3026, ref l_U3027 );
                        GET_CAR_MODEL( iVar2, ref l_U3028 );
                    }
                    g_U43104[1] = 1;
                    if (NOT l_U3211)
                    {
                        l_U3405 = 2;
                    }
                    else
                    {
                        l_U3405 = 3;
                        l_U808 = 6;
                    }
                }
                else if (IS_CHAR_IN_CAR( sub_3731(), l_U3056 ))
                {
                    if (IS_CHAR_IN_CAR( l_U3057, l_U3056 ))
                    {
                        if (NOT l_U3409)
                        {
                            l_U3409 = 1;
                        }
                        if (sub_35342( 0, 0, 0 ))
                        {
                            if (NOT (sub_35673( l_U3159 )))
                            {
                                if (NOT l_U3166)
                                {
                                    if (NOT l_U3165)
                                    {
                                        if (NOT l_U3167)
                                        {
                                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_3731(), 33 )))
                                            {
                                                if (g_U43010 == 0)
                                                {
                                                    if (sub_19059( "E2T2_GUN1", ref l_U3159, 6, 1 ))
                                                    {
                                                        l_U3207 = "E2T2_GUN1";
                                                        g_U43010++;
                                                        GIVE_WEAPON_TO_CHAR( sub_3731(), 32, 500, 0 );
                                                        SET_CURRENT_CHAR_WEAPON( sub_3731(), 0, 0 );
                                                        l_U3167 = 1;
                                                    }
                                                }
                                                else if (sub_19059( "E2T2_GUN2", ref l_U3159, 6, 1 ))
                                                {
                                                    l_U3207 = "E2T2_GUN2";
                                                    GIVE_WEAPON_TO_CHAR( sub_3731(), 32, 500, 0 );
                                                    SET_CURRENT_CHAR_WEAPON( sub_3731(), 0, 0 );
                                                    l_U3167 = 1;
                                                }
                                            }
                                        }
                                        else if (sub_36167( l_U3159 ))
                                        {
                                            sub_36204( l_U3207, ref l_U3159, 6, 1 );
                                        }
                                        else if (g_U15811[15])
                                        {
                                            if ((g_U43004 == 0) || (g_U43004 == 100))
                                            {
                                                if (sub_19059( "E2T2_B1AV2", ref l_U3159, 6, 1 ))
                                                {
                                                    l_U3207 = "E2T2_B1AV2";
                                                    g_U43004++;
                                                    l_U3165 = 1;
                                                }
                                            }
                                            else if ((g_U43004 == 1) || (g_U43004 == 101))
                                            {
                                                if (sub_19059( "E2T2_B1AV3", ref l_U3159, 6, 1 ))
                                                {
                                                    l_U3207 = "E2T2_B1AV2";
                                                    g_U43004++;
                                                    l_U3165 = 1;
                                                }
                                            }
                                            else
                                            {
                                                SAY_AMBIENT_SPEECH( l_U3057, "LISTEN_TO_RADIO", 1, 1, 0 );
                                                l_U3165 = 1;
                                                l_U3407 = 1;
                                            }
                                        }
                                        else if ((g_U43007 == 0) || (g_U43007 == 100))
                                        {
                                            if (sub_19059( "E2T2_B1AV1", ref l_U3159, 6, 1 ))
                                            {
                                                l_U3207 = "E2T2_B1AV1";
                                                g_U43007++;
                                                l_U3165 = 1;
                                            }
                                        }
                                        else if ((g_U43007 == 1) || (g_U43007 == 101))
                                        {
                                            if (sub_19059( "E2T2_B1AV3", ref l_U3159, 6, 1 ))
                                            {
                                                l_U3207 = "E2T2_B1AV3";
                                                g_U43007++;
                                                l_U3165 = 1;
                                            }
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( l_U3057, "LISTEN_TO_RADIO", 1, 1, 0 );
                                            l_U3407 = 1;
                                            l_U3165 = 1;
                                        };;;;;
                                    }
                                    else if (sub_36167( l_U3159 ))
                                    {
                                        sub_36204( l_U3207, ref l_U3159, 6, 1 );
                                    }
                                    else if (NOT l_U3407)
                                    {
                                        if (g_U15811[15])
                                        {
                                            if ((g_U43005 == 0) || (g_U43005 == 100))
                                            {
                                                if (sub_19059( "E2T2_B1BV2", ref l_U3159, 6, 1 ))
                                                {
                                                    l_U3207 = "E2T2_B1BV2";
                                                    g_U43005++;
                                                    l_U3166 = 1;
                                                }
                                            }
                                            else if (sub_19059( "E2T2_B1BV3", ref l_U3159, 6, 1 ))
                                            {
                                                l_U3207 = "E2T2_B1BV3";
                                                l_U3166 = 1;
                                            }
                                        }
                                        else if ((g_U43006 == 0) || (g_U43006 == 100))
                                        {
                                            if (sub_19059( "E2T2_B1BV1", ref l_U3159, 6, 1 ))
                                            {
                                                l_U3207 = "E2T2_B1BV1";
                                                g_U43006++;
                                                l_U3166 = 1;
                                            }
                                        }
                                        else if (sub_19059( "E2T2_B1BV3", ref l_U3159, 6, 1 ))
                                        {
                                            l_U3207 = "E2T2_B1BV3";
                                            l_U3166 = 1;
                                        };;;
                                    };;;
                                }
                                else if (sub_36167( l_U3159 ))
                                {
                                    sub_36204( l_U3207, ref l_U3159, 6, 1 );
                                }
                            }
                            else
                            {
                                BLOCK_CHAR_AMBIENT_ANIMS( l_U3057, 1 );
                            }
                        }
                    }
                    else if (sub_35673( l_U3159 ))
                    {
                        if (l_U3409)
                        {
                            sub_37297( ref l_U3159 );
                        }
                    }
                }
                else if (sub_35673( l_U3159 ))
                {
                    if (l_U3409)
                    {
                        sub_37297( ref l_U3159 );
                    }
                };;;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U3057 )))
        {
            if (NOT (IS_CAR_DEAD( l_U3056 )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3731() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_3731(), 129.63010000, -472.55000000, 13.76250000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( sub_3731(), 129.63010000, -472.55000000, 13.76250000 );
                }
                if (IS_CHAR_IN_ANY_CAR( l_U3057 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U3057, 129.63010000, -472.55000000, 13.76250000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U3057, 130.50940000, -476.28090000, 13.76060000 );
                }
                CLEAR_AREA( 135.54380000, -475.12200000, 13.65660000, 5.00000000, 1 );
                SET_CAR_COORDINATES( l_U3056, 135.54380000, -475.12200000, 13.65660000 );
                SET_CAR_HEADING( l_U3056, 180.06780000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U3056 );
                GIVE_WEAPON_TO_CHAR( sub_3731(), 21, 20, 0 );
                if (l_U3210)
                {
                    if (NOT (IS_CAR_DEAD( l_U3056 )))
                    {
                        ATTACH_PED_TO_CAR( sub_3731(), l_U3056, 0, 0.34400000, -0.34700000, 0.59300000, 180.00000000, 359.00000000, 1, 0 );
                    }
                }
                else
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_3731(), l_U3056, 0 );
                }
                WARP_CHAR_INTO_CAR( l_U3057, l_U3056 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U3216 = 0;
                l_U808 = 3;
                l_U3405 = 3;
            }
        }
        break;
    }
    if (NOT l_U3408)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 128.00000000, -443.00000000, 15.00000000, 50.00000000, 50.00000000, 50.00000000, 0 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 128, 65093, 15, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 128, 65096, 15, 1, 0.00000000 );
            l_U3408 = 1;
        }
    }
    return;
}

int sub_18896(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (NOT (CHECK_STUCK_TIMER( uParam0, 3, 60000 )))
        {
            if (NOT (CHECK_STUCK_TIMER( uParam0, 2, 30000 )))
            {
                if (NOT (CHECK_STUCK_TIMER( uParam0, 1, 40000 )))
                {
                    if (NOT (CHECK_STUCK_TIMER( uParam0, 0, 5000 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_19059(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_19080( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_19080(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_19134( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_19134(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_19156( iParam1 )))
    {
        return 0;
    }
    l_U2._fU384 = 0;
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
    sub_19844( ref g_U8868, ref l_U2 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_19156(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_19233( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_19233( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_19233( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_19233(unknown uParam0)
{
    return;
}

void sub_19844(int iParam0, int iParam1)
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

void sub_20121(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15)
{
    return sub_20181( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam10, uParam10, uParam10, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15 );
}

int sub_20181(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20)
{
    int iVar23;
    int I;
    unknown uVar25;

    l_U771[0] = uParam7;
    l_U771[1] = uParam8;
    l_U771[2] = uParam9;
    l_U770 = uParam7;
    sub_20229();
    sub_20561();
    sub_21441();
    if (IS_VEH_DRIVEABLE( uParam10 ))
    {
        if (sub_21639( l_U771[0], l_U771[1], l_U771[2], uParam12, uParam13, uParam14, uParam15, l_U765, uParam17, uParam10, 0, 0 ))
        {
            if (IS_SCREEN_FADED_IN())
            {
                if (IS_CHAR_IN_CAR( sub_3731(), uParam10 ))
                {
                    l_U735 = 1;
                    l_U746 = 1;
                    sub_22187( uParam16 );
                    sub_22187( uParam20 );
                    if ((uParam18) AND (IS_WANTED_LEVEL_GREATER( sub_3780(), 0 )))
                    {
                        if ((DOES_BLIP_EXIST( l_U762 )) || (DOES_BLIP_EXIST( l_U757 )))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U762 );
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U757 );
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 1" );
                            PRINTNL();
                            sub_22187( uParam11 );
                        }
                        if (((NOT (sub_26305( 0 ))) AND (NOT sub_27711())) AND (NOT l_U731))
                        {
                            sub_22067( uParam19, 0 );
                            l_U775 = uParam19;
                            l_U731 = 1;
                            l_U732 = 0;
                            if (NOT (IS_CHAR_INJURED( l_U771[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U771[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                            }
                        }
                    }
                    else if (l_U731)
                    {
                        sub_22187( uParam19 );
                        l_U731 = 0;
                        l_U732 = 1;
                    }
                    if (l_U732)
                    {
                        if (NOT (sub_26305( 0 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U771[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U771[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                            }
                            l_U732 = 0;
                        }
                    }
                    if (LOCATE_CHAR_IN_CAR_3D( sub_3731(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
                    {
                        iVar23 = 1;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U771[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U771[I], uParam10 )))
                                {
                                    iVar23 = 0;
                                }
                            }
                        }
                        if ((iVar23) AND (sub_28110()))
                        {
                            sub_22187( uParam11 );
                            sub_22187( uParam12 );
                            sub_22187( uParam13 );
                            sub_22187( uParam14 );
                            sub_22187( uParam15 );
                            sub_22187( uParam19 );
                            sub_28591();
                            for ( I = 0; I < 3; I++ )
                            {
                                if (NOT (IS_CHAR_INJURED( l_U771[I] )))
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U771[I], 0 );
                                }
                            }
                            return 1;
                        }
                    }
                    else
                    {
                        iVar23 = 1;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U771[I] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U771[I] )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U771[I], uParam10 )))
                                    {
                                        iVar23 = 0;
                                    }
                                }
                            }
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U762 )))
                        {
                            if (DOES_BLIP_EXIST( l_U757 ))
                            {
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U757 );
                            }
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 2" );
                            PRINTNL();
                            ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U762 );
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - add blip 1" );
                            PRINTNL();
                            sub_24138( l_U762 );
                            if (l_U750)
                            {
                                SHOW_BLIP_ON_ALTIMETER( l_U762, 1 );
                            }
                        }
                        if (NOT (sub_26305( 0 )))
                        {
                            if (NOT l_U733)
                            {
                                sub_22067( uParam11, 0 );
                                l_U733 = 1;
                            }
                        }
                    }
                }
                else if (((uParam18) AND (IS_WANTED_LEVEL_GREATER( sub_3780(), 0 ))) AND (NOT l_U746))
                {
                    sub_22187( uParam16 );
                    sub_22187( uParam20 );
                    if ((DOES_BLIP_EXIST( l_U762 )) || (DOES_BLIP_EXIST( l_U757 )))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U762 );
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U757 );
                        PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 3" );
                        PRINTNL();
                        sub_22187( uParam11 );
                    }
                    if (((NOT (sub_26305( 0 ))) AND (NOT sub_27711())) AND (NOT l_U731))
                    {
                        sub_22067( uParam19, 0 );
                        l_U775 = uParam19;
                        l_U731 = 1;
                        l_U732 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U771[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U771[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                        }
                    }
                }
                else if (l_U731)
                {
                    sub_22187( uParam19 );
                    l_U731 = 0;
                    l_U732 = 1;
                }
                if (l_U732)
                {
                    if (NOT (sub_26305( 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U771[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U771[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                        }
                        l_U732 = 0;
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U757 )))
                {
                    if (DOES_BLIP_EXIST( l_U762 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U762 );
                        sub_22187( uParam11 );
                    }
                    ADD_BLIP_FOR_CAR( uParam10, ref l_U757 );
                    CHANGE_BLIP_DISPLAY( l_U757, 2 );
                    PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - add blip 2" );
                    PRINTNL();
                    SET_BLIP_AS_FRIENDLY( l_U757, 1 );
                    if (NOT l_U736)
                    {
                        sub_24138( l_U757 );
                    }
                }
                if (NOT (sub_26305( 0 )))
                {
                    if (NOT l_U735)
                    {
                        sub_22067( uParam16, 0 );
                        l_U735 = 1;
                    }
                    else if (l_U746)
                    {
                        if (NOT (IS_STRING_NULL( uParam20 )))
                        {
                            if (NOT l_U736)
                            {
                                sub_22067( uParam20, 0 );
                                l_U736 = 1;
                            }
                        }
                        else if (NOT l_U736)
                        {
                            sub_22067( uParam16, 0 );
                            l_U736 = 1;
                        }
                    }
                };;;
            }
        }
        else if (l_U731)
        {
            l_U731 = 0;
        }
        if (DOES_BLIP_EXIST( l_U762 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U762 );
            sub_22187( uParam11 );
        }
        if (DOES_BLIP_EXIST( l_U757 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U757 );
            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 3" );
            PRINTNL();
            sub_22187( uParam16 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - check vehicle is alive before calling this." );
        return 0;
    }
    sub_30517( uParam0, uParam1, uParam2, 0, uParam10 );
    sub_34674( uParam0, uParam1, uParam2 );
    l_U748 = 0;
    l_U749 = 0;
    l_U750 = 0;
    return 0;
}

void sub_20229()
{
    int I;

    for ( I = 0; I < l_U771; I++ )
    {
        if (DOES_CHAR_EXIST( l_U771[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U771[I] )))
            {
                if (((IS_CHAR_SITTING_IN_ANY_CAR( l_U771[I] )) AND (sub_20322( l_U771[I] ))) AND (sub_20387()))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U771[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_3780() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_3731() )))
        {
            if (((IS_CHAR_SITTING_IN_ANY_CAR( sub_3731() )) AND (sub_20322( sub_3731() ))) AND (sub_20387()))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_3731(), 1 );
            }
        }
    }
    return;
}

int sub_20322(int iParam0)
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (l_U2._fU16[I]._fU0 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_20387()
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        return 1;
    }
    return 0;
}

void sub_20561()
{
    if (NOT l_U744)
    {
        l_U779 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U731 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U732 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U733 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U734 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U736 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U735 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U737 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U738[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U738[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U738[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U742 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U743 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U764, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U765, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U766, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U776._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U776._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U776._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U745 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U746 );
        END_WIDGET_GROUP();
        l_U744 = 1;
    }
    return;
}

void sub_21441()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_3780() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3731(), 0 );
    }
    for ( I = 0; I < l_U771; I++ )
    {
        if (DOES_CHAR_EXIST( l_U771[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U771[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U771[I], 0 );
            }
        }
    }
    return;
}

int sub_21639(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int[3] iVar20;
    boolean bVar24;
    boolean bVar25;
    int iVar26;
    int iVar27;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    l_U771[0] = uParam0;
    l_U771[1] = uParam1;
    l_U771[2] = uParam2;
    l_U770 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    iVar18 = 1;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U771[I] )))
        {
            iVar16++;
        }
    }
    if (((NOT sub_21810()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_3731() ))) AND (NOT (DOES_VEHICLE_EXIST( iParam9 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3731(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U751)
            {
                sub_22067( "MORE_SEATS", 0 );
                l_U751 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U751 = 0;
        sub_22187( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U771[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U771[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U771[I], sub_4664() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U771[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U771[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3731() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3731(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U771[I], sub_4664() ))
                        {
                            if ((NOT sub_21810()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_3731() )))
                            {
                                if (NOT (sub_22463( l_U771[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U771[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U771[I], sub_4664() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U771[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U771[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3731(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U771[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U771[I], sub_4664() ))
                {
                    if (sub_23024())
                    {
                        if (l_U753[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U771[I], -1 );
                            l_U753[I] = 0;
                        }
                    }
                    else if (NOT l_U753[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U771[I], 2 );
                        l_U753[I] = 1;
                    }
                }
                if (((NOT (IS_GROUP_MEMBER( l_U771[I], sub_4664() ))) AND (NOT (sub_23206( l_U771[I], iParam9 )))) AND (NOT (sub_23302( l_U771[I], iParam9 ))))
                {
                    if (sub_23415( l_U771[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U771[I], sub_4664() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U771[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U771[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_4664(), l_U771[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U758[I] )))
                        {
                            GET_GAME_TIMER( ref l_U768 );
                            ADD_BLIP_FOR_CHAR( l_U771[I], ref l_U758[I] );
                            CHANGE_BLIP_DISPLAY( l_U758[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U758[I], 1 );
                            if (bParam8)
                            {
                                sub_24138( l_U758[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U758[I] ))
                {
                    if (((sub_24257( l_U771[I] )) || (sub_23206( l_U771[I], iParam9 ))) || (uParam11))
                    {
                        if (DOES_BLIP_EXIST( l_U758[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U758[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_22187( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_24138( l_U758[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U771[I], iParam9 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U771[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )) AND (NOT l_U748))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U771[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U771[I], iParam9 )))
                                {
                                    if (NOT (sub_24257( l_U771[I] )))
                                    {
                                        if (sub_24865( l_U771[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U771[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U771[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3731(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_3731(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U771[I], sub_4664() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U771[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U771[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U771[I], 1 );
                                if (l_U747)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U771[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U771[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_3731(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U771[I], ref l_U758[I] );
                                CHANGE_BLIP_DISPLAY( l_U758[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U758[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U771[I], sub_4664() )))
                        {
                            if (sub_23415( l_U771[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U771[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U771[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U771[I], 0 );
                                SET_GROUP_MEMBER( sub_4664(), l_U771[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_3731(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U771[I], sub_4664() )))
                        {
                            SET_GROUP_MEMBER( sub_4664(), l_U771[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U771[I], sub_4664() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U771[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U758[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U758[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_22187( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U758[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_26305( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U771[I] )))
                    {
                        if ((sub_22463( l_U771[I] )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U771[I], sub_3731(), 40.00000000, 40.00000000, 40.00000000, 0 )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if (((iVar17 - l_U768) > 1500) || (iVar16 == 1))
        {
            if (iVar15 > 0)
            {
                if (l_U769 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U769 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar15 == iVar16) AND (iVar16 > 1))
                    {
                        if ((NOT l_U737) AND (NOT (l_U769 == iVar15)))
                        {
                            sub_22067( uParam6, 0 );
                            l_U737 = 1;
                            l_U769 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT l_U738[I]) AND (NOT (l_U769 == iVar15)))
                                {
                                    sub_22067( uVar28[I], 0 );
                                    l_U738[I] = 1;
                                    l_U769 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U769 = 0;
            }
        }
    }
    l_U747 = 0;
    if ((iVar18) AND (NOT bVar25))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U758[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U758[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_22187( uVar28[I] );
            }
        }
        sub_22187( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_3731() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3731(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U771[I] )))
                {
                    SET_CHAR_COORDINATES( l_U771[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_21810()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3731() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3731(), ref uVar2 );
        if (sub_21851( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_21851(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U771; I++ )
        {
            if (DOES_CHAR_EXIST( l_U771[I] ))
            {
                iVar3++;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        if (iVar4 >= iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_22067(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (IS_STRING_NULL( uParam0 )))
        {
            if (NOT (COMPARE_STRING( uParam0, "" )))
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U767 );
    return;
}

void sub_22187(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

int sub_22463(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_3780() ))
    {
        GET_CAR_CHAR_IS_USING( sub_3731(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3731(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )))
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

int sub_23024()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_3731(), ref uVar2 );
    if (sub_21851( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_23206(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_23302(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_4664() )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (IS_VEH_DRIVEABLE( iParam1 ))
            {
                if (iVar4 == iParam1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_23415(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_VEH_DRIVEABLE( uVar5 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_3731(), uVar5 ))
                    {
                        if (sub_21810())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3731(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3731(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_23024())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_3731(), ref uVar5 );
                    if (NOT (DOES_VEHICLE_EXIST( uVar5 )))
                    {
                        return 1;
                    }
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

void sub_24138(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U763 ))
        {
            SET_ROUTE( l_U763, 0 );
        }
        l_U763 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_24257(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3731() ))
        {
            if (sub_24305( sub_3731(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_4664(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_4664() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_4664(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_24305(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_24865(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 > -0.50000000) AND (fVar3 < 0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_26305(boolean bParam0)
{
    if (((((IS_MESSAGE_BEING_DISPLAYED()) || (((sub_20387()) AND (NOT bParam0)) || ((sub_26330()) AND (bParam0)))) || (sub_26359())) || (IS_SCRIPTED_CONVERSATION_ONGOING())) || (sub_26418()))
    {
        return 1;
    }
    return 0;
}

void sub_26330()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_26359()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_26418()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U767;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

int sub_27711()
{
    if (NOT (IS_CHAR_INJURED( l_U770 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U770 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_28110()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3731() ))
    {
        if ((IS_CHAR_ON_ANY_BIKE( sub_3731() )) || (IS_CHAR_IN_ANY_HELI( sub_3731() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U749)
    {
        if (sub_24865( sub_3731() ))
        {
            if ((sub_28200( 1, iVar2 )) || (l_U743))
            {
                return 1;
            }
        }
    }
    else if ((sub_28200( 1, iVar2 )) || (l_U743))
    {
        return 1;
    }
    return 0;
}

int sub_28200(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3731() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3731(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3731() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3731(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3731()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3731() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3731() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3780() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3780() )))
    {
        return 0;
    }
    return 1;
}

void sub_28591()
{
    int I;

    sub_28600();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U758[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U758[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U757 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U757 );
    }
    l_U763 = nil;
    l_U737 = 0;
    for ( I = 0; I < l_U738; I++ )
    {
        l_U738[I] = 0;
        l_U753[I] = 0;
    }
    l_U733 = 0;
    l_U731 = 0;
    l_U732 = 0;
    l_U734 = 0;
    l_U736 = 0;
    l_U735 = 0;
    l_U742 = 0;
    l_U743 = 0;
    l_U745 = 0;
    l_U746 = 0;
    l_U769 = 0;
    for ( I = 0; I < l_U771; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U771[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U771[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U771[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_3780() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_3731(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_3780() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3731(), 1 );
    }
    l_U747 = 0;
    l_U748 = 0;
    l_U749 = 0;
    l_U750 = 0;
    return;
}

void sub_28600()
{
    if (DOES_BLIP_EXIST( l_U762 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U762 );
    }
    return;
}

void sub_30517(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_20561();
    if (l_U742)
    {
        uParam0 = l_U776._fU0;
        uParam1 = l_U776._fU4;
        uParam2 = l_U776._fU8;
        uVar12 = l_U766;
        l_U742 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_3731() )))
    {
        GET_CHAR_HEADING( sub_3731(), ref uVar12 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            PRINTSTRING( "J_SKIP - called" );
            PRINTNL();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_3780() );
            sub_30728( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_31149( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U771; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U771[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U771[I] );
                        if (NOT (IS_CHAR_INJURED( sub_3731() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3731(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U771[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U771[I], uVar12 );
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( uParam4 ))
            {
                PRINTSTRING( "J_SKIP - SpecificCarID exists" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3731() );
                    WARP_CHAR_INTO_CAR( sub_3731(), uParam4 );
                    for ( I = 0; I < l_U771; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U771[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U771[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U771[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U771[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U771[I], 0 );
                            }
                        }
                    }
                }
                sub_31149( uParam0, uParam1, uParam2, uVar12 );
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    SET_CAR_COORDINATES( uParam4, uParam0, uParam1, uParam2 );
                }
            }
            else
            {
                PRINTSTRING( "J_SKIP - searching for temp_car" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( uVar8 )))
                    {
                        PRINTSTRING( "J_SKIP - temp_car existed but not driveable" );
                        PRINTNL();
                        uVar8 = nil;
                    }
                }
                if (NOT (DOES_VEHICLE_EXIST( uVar8 )))
                {
                    PRINTSTRING( "J_SKIP - creating new temp_car" );
                    PRINTNL();
                    REQUEST_MODEL( 1264341792 );
                    while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar8, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3731() );
                    WARP_CHAR_INTO_CAR( sub_3731(), uVar8 );
                    sub_32056( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3731() );
                        WARP_CHAR_INTO_CAR( sub_3731(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U771; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U771[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U771[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U771[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U771[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U771; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U771[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U771[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U771[I], uVar8, I );
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( uVar8 ))
                {
                    SET_CAR_COORDINATES( uVar8, uParam0, uParam1, uParam2 );
                    SET_CAR_HEADING( uVar8, uVar12 );
                }
            }
            LOAD_SCENE( uParam0, uParam1, uParam2 );
            WAIT( 500 );
            sub_32676( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_30728(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_3780() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3731() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3731(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_3731(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_30848( (uParam0^) );
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    else
    {
        (uParam0^) = nil;
    }
    return;
}

void sub_30848(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
                else
                {
                    DELETE_CHAR( ref uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                        else
                        {
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_31149(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_3731(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_3731(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_3731(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_3731(), uParam3 );
    return;
}

void sub_32056(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_32676(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if ((NOT (IS_CHAR_INJURED( sub_3731() ))) AND ((IS_SCREEN_FADED_OUT()) || (bParam0)))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_33056( sub_3731(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_33056( sub_3731(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_33056( sub_3731(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_34333( 0 );
        sub_34333( 1 );
        sub_34333( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U730 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U730;
            if ((iVar6 > 15000) || (((g_U30110[0] == 0) AND (g_U30110[1] == 0)) AND (g_U30110[2] == 0)))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_33056(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_33067( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_33227( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_33067(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( 14.17720000, 397.67000000, -399.10690000);
        break;
        case 1:
        return vector( 9.80000000, 153.41000000, -468.03000000);
        break;
        case 2:
        return vector( 11.54000000, 356.98000000, -440.28000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

int sub_33227(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_33255( uParam0, uParam1 ))
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

int sub_33255(unknown uParam0, unknown uParam1)
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
            if (IS_CHAR_IN_AREA_3D( sub_3731(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_34333(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_34674(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_34699( uParam0, uParam1, uParam2, l_U764, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U764, l_U764, l_U764, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U764 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U764 );
            }
        }
    }
    return;
}

int sub_34699(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_34716( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_3731(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_34716(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

int sub_35342(boolean bParam0, boolean bParam1, boolean bParam2)
{
    boolean bVar5;

    bVar5 = true;
    if (bParam0)
    {
        if (NOT (IS_CHAR_INJURED( l_U3057 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3731(), l_U3057, 20.00000000, 20.00000000, 20.00000000, 0 )))
            {
                bVar5 = false;
            }
        }
    }
    if (bParam1)
    {
        if (NOT sub_35428())
        {
            bVar5 = false;
        }
    }
    if (bParam2)
    {
        if (NOT (sub_35569( sub_3731(), l_U3057 )))
        {
            bVar5 = false;
        }
    }
    if (bVar5)
    {
        if ((((NOT (sub_35673( l_U3159 ))) AND (NOT sub_26330())) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT sub_26418()))
        {
            return 1;
        }
    }
    return 0;
}

int sub_35428()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;

    if (NOT (IS_CHAR_INJURED( l_U3057 )))
    {
        GET_CHAR_COORDINATES( l_U3057, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        GET_CHAR_COORDINATES( sub_3731(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        fVar8 = uVar5._fU8 - uVar2._fU8;
        if ((ABSF( fVar8 )) < 1.00000000)
        {
            return 1;
        }
    }
    return 0;
}

int sub_35569(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_35673(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_19233( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_19233( "\n speech is not playing" );
    }
    return 0;
}

void sub_36167(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_36204(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_36225( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

int sub_36225(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_19134( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_37297(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_19233( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (iParam0->_fU4 == g_U8866)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_19233( "\n CONVERSATION PAUSED AT LINE " );
            sub_37453( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_19233( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_19233( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_19233( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_37453(unknown uParam0)
{
    return;
}

void sub_38351()
{
    unknown uVar2;
    float fVar3;
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    switch (l_U3353)
    {
        case 0:
        sub_4089( 500 );
        CLEAR_AREA( 114.75230000, -431.42960000, 30.74290000, 300.00000000, 1 );
        sub_38433();
        CLEAR_PRINTS();
        sub_3591( 0 );
        CLEAR_WANTED_LEVEL( sub_3780() );
        LOAD_SCENE( 114.75230000, -431.42960000, 30.74290000 );
        if (IS_CHAR_IN_ANY_CAR( sub_3731() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3731(), ref uVar8 );
            GET_CAR_MODEL( uVar8, ref uVar9 );
            WARP_CHAR_FROM_CAR_TO_COORD( sub_3731(), 114.75230000, -431.42960000, 30.74290000 );
            if (IS_THIS_MODEL_A_HELI( uVar9 ))
            {
                DELETE_CAR( ref uVar8 );
            }
        }
        else
        {
            SET_CHAR_COORDINATES( sub_3731(), 114.75230000, -431.42960000, 30.74290000 );
        }
        SET_CHAR_COORDINATES( sub_3731(), 114.75230000, -431.42960000, 30.74290000 );
        SET_CHAR_HEADING( sub_3731(), 354.59060000 );
        SET_ROOM_FOR_CHAR_BY_NAME( sub_3731(), "E2_XJ_OFFICE" );
        if (DOES_VEHICLE_EXIST( l_U3056 ))
        {
            DELETE_CAR( ref l_U3056 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_9630( 0 ) );
        if (DOES_CHAR_EXIST( l_U3057 ))
        {
            DELETE_CHAR( ref l_U3057 );
            l_U3212 = 0;
            l_U3213 = 0;
        }
        sub_38974( 0 );
        g_U2792 = 1;
        START_CUTSCENE_NOW( "GT02_BA" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "GT02_BA" );
        REQUEST_MODEL( 993473937 );
        REQUEST_MODEL( l_U3040 );
        REQUEST_MODEL( l_U3041 );
        REQUEST_MODEL( 2397320 );
        REQUEST_MODEL( l_U3043 );
        REQUEST_ANIMS( "misstony02" );
        REQUEST_ANIMS( "move_m@TONY_SCARED" );
        sub_9169( 0 );
        while (((((((((NOT (HAS_MODEL_LOADED( 993473937 ))) || (NOT (HAS_MODEL_LOADED( l_U3040 )))) || (NOT (HAS_MODEL_LOADED( l_U3041 )))) || (NOT (HAS_MODEL_LOADED( l_U3043 )))) || (NOT (HAS_MODEL_LOADED( 2397320 )))) || (NOT (sub_9792( 0 )))) || (NOT (HAVE_ANIMS_LOADED( "misstony02" )))) || (NOT (HAVE_ANIMS_LOADED( "move_m@TONY_SCARED" )))) || (NOT (REQUEST_MISSION_AUDIO_BANK( "EP2_SFX\GT02_CHINESE_TAKEOUT" ))))
        {
            WAIT( 0 );
        }
        sub_9938( 2 );
        CLEAR_AREA_OF_COPS( 113.10550000, -431.71580000, 32.32280000, 500.00000000 );
        SET_CREATE_RANDOM_COPS( 0 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        ADD_ARMOUR_TO_CHAR( sub_3731(), 100 );
        GET_INTERIOR_AT_COORDS( 113.10550000, -431.71580000, 32.32280000, ref uVar10 );
        LOAD_SCENE_FOR_ROOM_BY_KEY( uVar10, GET_HASH_KEY( "E2_XJ_OFFICE" ) );
        SET_CHAR_COORDINATES( sub_3731(), 114.75230000, -431.42960000, 30.74290000 );
        SET_CHAR_HEADING( sub_3731(), 354.59060000 );
        SET_ROOM_FOR_CHAR_BY_NAME( sub_3731(), "E2_XJ_OFFICE" );
        sub_11406( 0, ref l_U3057, 116.81500000, -432.08270000, 31.74290000, 96.98070000 );
        sub_4366( 1, l_U3057, "TONY", 0 );
        SET_CHAR_DECISION_MAKER( l_U3057, l_U3034 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3057, 1 );
        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U3057, 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U3057, "E2_XJ_OFFICE" );
        FORCE_PED_TO_LOAD_COVER( l_U3057, 1 );
        SET_ALL_RANDOM_PEDS_FLEE( sub_3780(), 1 );
        SET_PED_IS_BLIND_RAGING( sub_3731(), 1 );
        l_U3212 = 1;
        sub_9938( 3 );
        l_U3216 = 0;
        ADD_COVER_POINT( 104.52890000, -436.42380000, 30.74300000, 0, 358.86460000, 3, 0, ref l_U3081[1] );
        ADD_COVER_POINT( 90.54010000, -432.12590000, 30.74300000, 0, 270.40300000, 3, 0, ref l_U3081[23] );
        ADD_COVER_POINT( 105.03380000, -435.93010000, 30.74300000, 1, 96.09880000, 3, 0, ref l_U3081[2] );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -310318444, 114, 65112, 32, 1, -1.00000000 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3731() );
        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( sub_3731(), 114.03050000, -429.10280000, 30.74300000, -2 );
        GET_GAME_TIMER( ref l_U3401 );
        if (NOT (HAS_CHAR_GOT_WEAPON( sub_3731(), 33 )))
        {
            if (HAS_CHAR_GOT_WEAPON( sub_3731(), 32 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_3731(), 32, 1 );
            }
            else
            {
                GIVE_WEAPON_TO_CHAR( sub_3731(), 32, 500, 0 );
                SET_CURRENT_CHAR_WEAPON( sub_3731(), 32, 1 );
            }
        }
        else
        {
            SET_CURRENT_CHAR_WEAPON( sub_3731(), 33, 1 );
        }
        CREATE_PICKUP_ROTATE( sub_40101( 4 ), 22, 5, 106.54080000, -421.30700000, 25.11480000, 0.00000000, 0.00000000, 0.00000000, ref l_U3076 );
        CREATE_PICKUP_ROTATE( sub_40101( 32 ), 22, 200, 91.77800000, -431.00660000, 30.74280000, 90.00000000, 0.00000000, 0.00000000, ref l_U3078 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 98.54250000, -431.30580000, 30.79280000, 269.30000000, 0, 66.96000000, ref l_U3077 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 106.24610000, -420.87470000, 19.34550000 + 0.05000000, 269.30000000, 0, 66.96000000, ref l_U3080 );
        CREATE_PICKUP_ROTATE( sub_40101( 11 ), 22, 50, 98.65830000, -432.53230000, 30.79280000, 90.00000000, 0.00000000, 0.00000000, ref l_U3079 );
        ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U3076, "GtaMloRoom17" );
        ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U3077, "GtaMloRoom02" );
        ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U3080, "GtaMloRoom17" );
        ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U3079, "GtaMloRoom02" );
        ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U3078, "GtaMloRoom07" );
        l_U3354 = 1;
        l_U3391 = 1;
        sub_40529();
        SET_PLAYER_MOOD_PISSED_OFF( sub_3780(), 150 );
        l_U3353 = 1;
        break;
        case 1:
        if ((sub_8646( l_U3401, 5000 )) || (IS_PED_IN_COVER( sub_3731() )))
        {
            SET_CAM_BEHIND_PED( sub_3731() );
            SET_GAME_CAM_PITCH( 0 );
            SET_PLAYER_CONTROL( sub_3780(), 1 );
            sub_18676( 500 );
            sub_19059( "E2T2_THELP", ref l_U3159, 6, 1 );
            l_U3353 = 2;
        }
        break;
        case 2:
        if (sub_41214())
        {
            ;
        }
        if (sub_41307())
        {
            ;
        }
        if (NOT l_U3332)
        {
            if (NOT (sub_35673( l_U3159 )))
            {
                PRINT_NOW( "TonyEscape", 7500, 1 );
                GET_GAME_TIMER( ref l_U3334 );
                GET_GAME_TIMER( ref l_U3404 );
                l_U3332 = 1;
            }
        }
        else if (NOT l_U3356)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                l_U3356 = 1;
            }
        }
        if (NOT l_U3395)
        {
            if (sub_8646( l_U3404, 1000 ))
            {
                PRINT_HELP( "TonyLock" );
                GET_GAME_TIMER( ref l_U3404 );
                l_U3395 = 1;
            }
        }
        else if (NOT l_U3394)
        {
            if (sub_8646( l_U3404, 1000 ))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TonyLock" )))
                {
                    PRINT_HELP( "TonyZoom" );
                    l_U3394 = 1;
                    GET_GAME_TIMER( ref l_U3404 );
                }
            }
        }
        else if (NOT l_U3400)
        {
            if (sub_8646( l_U3404, 1000 ))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TonyZoom" )))
                {
                    if (USING_STANDARD_CONTROLS())
                    {
                        PRINT_HELP( "TonyFreeAim" );
                        GET_GAME_TIMER( ref l_U3404 );
                    }
                    l_U3400 = 1;
                }
            }
        }
        else if (NOT l_U3396)
        {
            if (sub_8646( l_U3404, 1000 ))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TonyFreeAim" )))
                {
                    if (USING_STANDARD_CONTROLS())
                    {
                        PRINT_HELP( "TonyReload" );
                        GET_GAME_TIMER( ref l_U3404 );
                    }
                    l_U3396 = 1;
                }
            }
        }
        else if (NOT l_U3397)
        {
            if (sub_8646( l_U3404, 1000 ))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TonyReload" )))
                {
                    PRINT_HELP( "TonyCover" );
                    l_U3397 = 1;
                    GET_GAME_TIMER( ref l_U3404 );
                }
            }
        }
        else if (NOT l_U3398)
        {
            if (sub_41214())
            {
                if (sub_8646( l_U3404, 1000 ))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TonyCover" )))
                    {
                        PRINT_HELP( "TonyWswitch" );
                        l_U3398 = 1;
                        GET_GAME_TIMER( ref l_U3404 );
                    }
                }
            }
        }
        else if (NOT l_U3399)
        {
            if (sub_41307())
            {
                if (sub_8646( l_U3404, 1000 ))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TonyWswitch" )))
                    {
                        PRINT_HELP( "TonySwitch" );
                        l_U3399 = 1;
                        GET_GAME_TIMER( ref l_U3404 );
                    }
                }
            }
        };;;;;;;;
        sub_42220( ref l_U810[15], ref l_U810[2], 1 );
        sub_42220( ref l_U810[1], ref l_U810[2], 1 );
        sub_42220( ref l_U810[6], ref l_U810[9], 1 );
        sub_42220( ref l_U810[8], ref l_U810[10], 1 );
        sub_42220( ref l_U810[13], ref l_U810[16], 1 );
        sub_42220( ref l_U810[14], ref l_U810[30], 1 );
        sub_42220( ref l_U810[19], ref l_U810[18], 1 );
        if (NOT l_U810[0]._fU4)
        {
            if (IS_SCREEN_FADED_IN())
            {
                l_U3393 = 1;
                l_U810[0]._fU4 = 1;
                l_U810[1]._fU4 = 1;
                l_U810[2]._fU4 = 1;
                l_U810[3]._fU4 = 1;
                l_U810[15]._fU4 = 1;
                l_U3389 = 1;
            }
        }
        if (NOT l_U810[23]._fU4)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 96.34130000, -437.93450000, 31.74780000, 1.00000000, 2.00000000, 2.00000000, 0 ))
            {
                l_U810[23]._fU4 = 1;
            }
        }
        if (NOT l_U810[21]._fU4)
        {
            if (l_U3389)
            {
                if (sub_42997())
                {
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD_HDG_RATE( 0, 103.50930000, -431.12280000, 30.74280000, 3, -1, 0.50000000, 270.00000000, 1000.00000000 );
                    TASK_GO_TO_COORD_WHILE_AIMING( 0, l_U810[21]._fU68._fU0, l_U810[21]._fU68._fU4, l_U810[21]._fU68._fU8, 3, 0.50000000, 0.50000000, sub_3731(), 0.00000000, 0.00000000, 0.00000000, 0 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    if (NOT (IS_CHAR_INJURED( l_U810[21]._fU0 )))
                    {
                        sub_4366( 2, l_U810[21]._fU0, "TRIAD", 0 );
                        sub_19059( "E2T2_TSCRM", ref l_U3345, 7, 1 );
                        TASK_PERFORM_SEQUENCE( l_U810[21]._fU0, uVar2 );
                    }
                    l_U810[21]._fU8 = 1;
                    l_U810[21]._fU4 = 1;
                }
            }
        }
        else if (DOES_CHAR_EXIST( l_U3157 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U810[21]._fU0 )))
            {
                if ((sub_43835( l_U3157, 1, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( l_U810[21]._fU0, 105.73670000, -431.20730000, 31.74790000, 1.00000000, 1.00000000, 2.00000000, 0 )))
                {
                    DELETE_CHAR( ref l_U3157 );
                }
            }
            else
            {
                DELETE_CHAR( ref l_U3157 );
            }
        }
        if (DOES_CHAR_EXIST( l_U3158 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U810[21]._fU0 )))
            {
                if ((sub_43835( l_U3158, 1, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( l_U810[21]._fU0, 105.73670000, -431.20730000, 31.74790000, 1.00000000, 1.00000000, 2.00000000, 0 )))
                {
                    DELETE_CHAR( ref l_U3158 );
                }
            }
            else
            {
                DELETE_CHAR( ref l_U3158 );
            }
        }
        if (NOT l_U810[7]._fU4)
        {
            if (sub_44583())
            {
                if (sub_43234( 104.55220000, -422.67670000, 31.82984000, 1.50000000 ))
                {
                    l_U810[7]._fU4 = 1;
                }
            }
        }
        if (NOT l_U810[24]._fU4)
        {
            if (sub_44738())
            {
                if (sub_43234( 86.90294000, -425.93920000, 27.60169000, 1.50000000 ))
                {
                    l_U810[24]._fU4 = 1;
                }
            }
        }
        if (NOT l_U810[20]._fU4)
        {
            if (((IS_CHAR_INJURED( l_U810[3]._fU0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 100.74460000, -438.11490000, 31.74800000, 1.00000000, 2.00000000, 2.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 102.44630000, -438.15910000, 31.74780000, 2.00000000, 2.00000000, 2.00000000, 0 )))
            {
                l_U810[20]._fU4 = 1;
                l_U810[22]._fU4 = 1;
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_MORE", ref l_U3159, 6, 1 );
                    l_U3169 = 1;
                }
            }
        }
        if (NOT l_U3357[0])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.77770000, -426.43250000, 31.74800000, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                l_U3357[0] = 1;
            }
        }
        if (NOT l_U3357[1])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 97.48990000, -438.08150000, 31.74800000, 7.00000000, 2.00000000, 2.00000000, 0 ))
            {
                if (NOT l_U3169)
                {
                    if (sub_35342( 0, 0, 0 ))
                    {
                        sub_19059( "E2T2_MORE", ref l_U3159, 6, 1 );
                    }
                }
                else
                {
                    l_U3169 = 0;
                }
                l_U3357[1] = 1;
            }
        }
        if (NOT l_U3357[2])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.77920000, -432.94070000, 31.74800000, 2.00000000, 3.00000000, 2.00000000, 0 ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    ;
                }
                l_U3357[2] = 1;
            }
        }
        if (NOT l_U3357[3])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.66160000, -427.88950000, 31.74930000, 2.00000000, 1.00000000, 2.00000000, 0 ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_GDOWN", ref l_U3159, 6, 1 );
                    l_U3357[3] = 1;
                }
            }
        }
        else if (NOT l_U3373[3])
        {
            if (sub_35342( 0, 0, 0 ))
            {
                sub_19059( "E2T2_ILLGO", ref l_U3159, 6, 1 );
                l_U3373[3] = 1;
            }
        }
        if (NOT l_U810[4]._fU4)
        {
            if (sub_45648())
            {
                if (sub_43234( 88.76010000, -421.19080000, 31.62845000, 2.00000000 ))
                {
                    l_U810[4]._fU4 = 1;
                }
            }
        }
        if (NOT l_U810[5]._fU4)
        {
            if (sub_45848())
            {
                sub_9938( 4 );
                l_U810[5]._fU4 = 1;
                l_U810[6]._fU4 = 1;
                l_U810[8]._fU4 = 1;
                l_U810[9]._fU4 = 1;
                l_U810[12]._fU4 = 1;
            }
        }
        if (NOT l_U810[35]._fU4)
        {
            if (sub_46032())
            {
                l_U3037 = 1;
                l_U810[35]._fU4 = 1;
            }
        }
        else if (l_U3318)
        {
            if (NOT l_U3317)
            {
                if ((sub_8646( l_U3324, 200 )) AND (NOT (sub_8646( l_U3324, 5000 ))))
                {
                    sub_19059( "E2T2_GREN", ref l_U3159, 6, 1 );
                    l_U3317 = 1;
                }
            }
        }
        if (NOT l_U3357[4])
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 94.15210000, -438.15610000, 26.04920000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 89.76860000, -439.25850000, 26.04930000, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                if (NOT l_U810[9]._fU4)
                {
                    l_U810[9]._fU4 = 1;
                }
                if (NOT l_U810[10]._fU4)
                {
                    l_U810[10]._fU4 = 1;
                }
                l_U3357[4] = 1;
            }
        }
        if (NOT l_U3357[5])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.77160000, -434.12990000, 26.04920000, 2.00000000, 1.00000000, 2.00000000, 0 ))
            {
                l_U3357[5] = 1;
            }
        }
        if (NOT l_U3357[6])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.86560000, -422.38220000, 26.05070000, 1.00000000, 1.00000000, 2.00000000, 0 ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_GDOWN", ref l_U3159, 6, 1 );
                    l_U3357[6] = 1;
                }
            }
        }
        else if (NOT l_U3373[6])
        {
            if (sub_35342( 0, 0, 0 ))
            {
                sub_19059( "E2T2_ILLGO", ref l_U3159, 6, 1 );
                l_U3373[6] = 1;
            }
        }
        if (NOT l_U810[13]._fU4)
        {
            if (sub_48077())
            {
                if (NOT (DOES_CHAR_EXIST( l_U810[13]._fU0 )))
                {
                    sub_9938( 5 );
                }
                if (sub_43234( 104.93260000, -428.22540000, 19.96092000, 1.50000000 ))
                {
                    l_U810[13]._fU4 = 1;
                    l_U810[14]._fU4 = 1;
                    l_U810[16]._fU4 = 1;
                }
            }
        }
        if (NOT l_U810[29]._fU4)
        {
            if (sub_48289())
            {
                l_U810[29]._fU4 = 1;
            }
            else if (DOES_CHAR_EXIST( l_U810[29]._fU0 ))
            {
                if (IS_CHAR_INJURED( l_U810[29]._fU0 ))
                {
                    l_U810[29]._fU4 = 1;
                }
            }
        }
        else if (NOT l_U810[30]._fU4)
        {
            l_U810[30]._fU4 = 1;
        }
        if (NOT l_U810[25]._fU4)
        {
            if (sub_49291())
            {
                GET_CHAR_SPEED( sub_3731(), ref fVar3 );
                if ((sub_43234( 87.33054000, -430.39470000, 20.37849000, 1.50000000 )) || ((sub_43234( 86.83736000, -436.99780000, 21.13917000, 1.50000000 )) AND (fVar3 > 5.00000000)))
                {
                    l_U810[25]._fU4 = 1;
                    l_U810[26]._fU4 = 1;
                }
            }
        }
        if (NOT l_U3357[7])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.78870000, -426.15380000, 20.35120000, 2.00000000, 1.00000000, 2.00000000, 0 ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    l_U3357[7] = 1;
                }
            }
        }
        else if (NOT l_U3373[7])
        {
            if (sub_35342( 0, 0, 0 ))
            {
                l_U3373[7] = 1;
            }
        }
        if (NOT l_U3357[8])
        {
            if (sub_49291())
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    ;
                }
                l_U3357[8] = 1;
            }
        }
        if (NOT l_U3357[9])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.66820000, -428.03770000, 20.35220000, 2.00000000, 1.00000000, 2.00000000, 0 ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_GDOWN", ref l_U3159, 6, 1 );
                }
                l_U3357[9] = 1;
            }
        }
        else if (NOT l_U3373[9])
        {
            if (sub_35342( 0, 0, 0 ))
            {
                sub_19059( "E2T2_ILLGO", ref l_U3159, 6, 1 );
                l_U3373[9] = 1;
            }
        }
        if (NOT l_U810[27]._fU4)
        {
            if (sub_50262())
            {
                if (NOT (DOES_CHAR_EXIST( l_U810[17]._fU0 )))
                {
                    sub_9938( 7 );
                }
                else if (sub_43234( 89.65835000, -435.24530000, 15.22199000, 1.50000000 ))
                {
                    l_U810[27]._fU4 = 1;
                }
            }
        }
        if (NOT l_U810[17]._fU4)
        {
            if (sub_50498())
            {
                l_U810[17]._fU4 = 1;
                l_U810[18]._fU4 = 1;
                l_U810[34]._fU4 = 1;
            }
        }
        if (NOT l_U810[19]._fU4)
        {
            if (sub_50650())
            {
                if (sub_43234( 111.26430000, -434.96060000, 15.91418000, 1.50000000 ))
                {
                    l_U810[19]._fU4 = 1;
                }
            }
        }
        if (NOT l_U810[31]._fU4)
        {
            if (sub_50805())
            {
                l_U810[31]._fU4 = 1;
                l_U810[32]._fU4 = 1;
            }
        }
        if (NOT l_U810[33]._fU4)
        {
            if (sub_50946())
            {
                if (sub_43234( 114.47350000, -442.11950000, 15.64741000, 1.50000000 ))
                {
                    l_U810[33]._fU4 = 1;
                }
            }
        }
        if (NOT l_U3357[10])
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 95.33230000, -434.92780000, 14.91780000, 2.00000000, 3.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.63160000, -435.56840000, 14.91780000, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                l_U3357[10] = 1;
            }
        }
        for ( I = 0; I < l_U810; I++ )
        {
            if (l_U810[I]._fU4)
            {
                if (DOES_CHAR_EXIST( l_U810[I]._fU0 ))
                {
                    if (IS_CHAR_INJURED( l_U810[I]._fU0 ))
                    {
                        if (NOT l_U810[I]._fU96)
                        {
                            if (WAS_PED_KILLED_BY_HEADSHOT( l_U810[I]._fU0 ))
                            {
                                l_U3402++;
                            }
                            l_U810[I]._fU96 = 1;
                        }
                    }
                }
            }
        }
        sub_51371();
        if (sub_54558())
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 128, 65093, 15, 0, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 128, 65096, 15, 0, 0.00000000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 993473937 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3040 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3041 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3043 );
            sub_38433();
            l_U3390 = 0;
            l_U3036 = 0;
            if (DOES_BLIP_EXIST( l_U3068[1] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3068[1] );
            }
            if (DOES_BLIP_EXIST( l_U3058 ))
            {
                ;
            }
            if (NOT (IS_CHAR_DEAD( l_U3057 )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U3057, sub_4664() )))
                {
                    ;
                }
            }
            if (l_U809 != 26)
            {
                PRINT_NOW( "TonyExit", 7500, 1 );
            }
            SET_WANTED_MULTIPLIER( 0.50000000 );
            for ( I = 0; I < l_U810; I++ )
            {
                if (l_U810[I]._fU4)
                {
                    l_U3403++;
                }
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3040 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3041 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3043 );
            for ( I = 0; I < l_U810; I++ )
            {
                if (IS_CHAR_INJURED( l_U810[I]._fU0 ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U810[I]._fU0 );
                }
            }
            SET_PED_IS_BLIND_RAGING( sub_3731(), 0 );
            sub_43940( l_U3402, "Num headshots...." );
            if (l_U3402 >= g_U43138[1]._fU16)
            {
                g_U43571 = 1;
            }
            else
            {
                g_U43571 = 0;
            }
            l_U3213 = 1;
            SET_CREATE_RANDOM_COPS( 1 );
            SET_PLAYER_MOOD_NORMAL( sub_3780() );
            g_U43104[1] = 2;
            l_U808 = 5;
        }
        break;
    }
    sub_55237();
    if (l_U3354)
    {
        sub_55385();
    }
    if (l_U3390)
    {
        sub_57879();
    }
    if (l_U3391)
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U3056 )))
        {
            if (NOT l_U3392)
            {
                GET_CHAR_COORDINATES( sub_3731(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                if (uVar5._fU8 < 16.00000000)
                {
                    if (l_U3021)
                    {
                        REQUEST_MODEL( sub_9630( 0 ) );
                    }
                    else if (l_U3028 != 0)
                    {
                        REQUEST_MODEL( l_U3028 );
                    }
                    l_U3392 = 1;
                }
            }
            else if (l_U3021)
            {
                if (HAS_MODEL_LOADED( sub_9630( 0 ) ))
                {
                    CLEAR_AREA( 135.26060000, -436.41930000, 13.64230000, 5.00000000, 1 );
                    if (sub_10075( 0, 135.22450000, -435.46360000, 13.64230000, 180.12490000, ref l_U3056 ))
                    {
                        l_U3391 = 0;
                        l_U3214 = 1;
                    }
                }
            }
            else if (l_U3028 != 0)
            {
                if (HAS_MODEL_LOADED( l_U3028 ))
                {
                    if (NOT (sub_58430( l_U3022, 0.00000000, 0.00000000, 0.00000000 )))
                    {
                        CREATE_CAR( l_U3028, l_U3022._fU0, l_U3022._fU4, l_U3022._fU8, ref l_U3056, 1 );
                        SET_CAR_HEADING( l_U3056, l_U3025 );
                    }
                    else
                    {
                        CREATE_CAR( l_U3028, 135.26060000, -436.41930000, 13.64230000, ref l_U3056, 1 );
                        SET_CAR_HEADING( l_U3056, 180.12490000 );
                    }
                    CHANGE_CAR_COLOUR( l_U3056, l_U3026, l_U3027 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U3056 );
                }
            };;;
        }
    }
    if (l_U3393)
    {
        if (sub_58637())
        {
            l_U3393 = 0;
            GET_GAME_TIMER( ref l_U3339 );
        }
        else if (sub_59239())
        {
            l_U3393 = 0;
            GET_GAME_TIMER( ref l_U3339 );
        }
        else if (sub_59364())
        {
            l_U3393 = 0;
            GET_GAME_TIMER( ref l_U3339 );
        };;;
    }
    else if (sub_8646( l_U3339, 5000 ))
    {
        l_U3393 = 1;
    }
    sub_59554();
    return;
}

void sub_38433()
{
    int I;

    for ( I = 0; I < l_U3068; I++ )
    {
        if (DOES_BLIP_EXIST( l_U3068[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3068[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U3063 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3063 );
    }
    if (DOES_BLIP_EXIST( l_U3067 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3067 );
    }
    for ( I = 0; I < l_U810; I++ )
    {
        if (DOES_BLIP_EXIST( l_U810[I]._fU100 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U810[I]._fU100 );
        }
    }
    return;
}

void sub_38974(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_9180( uParam0 ) );
    return;
}

void sub_40101(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

void sub_40529()
{
    sub_40538();
    sub_40572();
    return;
}

void sub_40538()
{
    g_U43513 = GET_INT_STAT( 289 );
    return;
}

void sub_40572()
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

void sub_41214()
{
    if (NOT l_U3221)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 112.82620000, -426.15360000, 31.74780000, 1.00000000, 1.00000000, 2.00000000, 0 ))
        {
            l_U3221 = 1;
        }
    }
    return l_U3221;
}

void sub_41307()
{
    if (NOT l_U3222)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 109.89310000, -422.24500000, 31.74780000, 1.00000000, 2.00000000, 2.00000000, 0 ))
        {
            l_U3222 = 1;
        }
    }
    return l_U3222;
}

void sub_42220(int iParam0, int iParam1, boolean bParam2)
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
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;

    array(ref uVar5, 2);
    if (NOT iParam1->_fU92)
    {
        if ((ref iParam0->_fU68->_fU0) != (ref iParam1->_fU68->_fU0))
        {
            uVar5[0] = {(iParam0^)};
            if (sub_42291( ref uVar5, 1, 1, 1, 1 ))
            {
                sub_42470( iParam1 );
                iParam1->_fU80 = iParam0->_fU80;
                iParam1->_fU68 = {iParam0->_fU68};
                if (bParam2)
                {
                    iParam1->_fU24 = 2;
                }
                iParam1->_fU92 = 1;
                iParam1->_fU4 = 1;
            }
        }
    }
    return;
}

int sub_42291(unknown uParam0, int iParam1, int iParam2, boolean bParam3, boolean bParam4)
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

void sub_42470(int iParam0)
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

int sub_42997()
{
    unknown uVar2;
    unknown[5] uVar3;
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
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    int iVar204;

    array(ref uVar3, 5);
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 11 ))
    {
        iVar204 = 1;
    }
    switch (l_U3313)
    {
        case 0:
        uVar3[0] = {l_U810[1]};
        uVar3[1] = {l_U810[15]};
        if (((sub_43103()) || (sub_42291( ref uVar3, 2, 1, 1, 1 ))) || (iVar204))
        {
            if ((sub_43234( 106.65030000, -440.63580000, 33.64857000, 1.50000000 )) || (iVar204))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_SHOOT_AT_COORD( 0, 104.85790000, -430.66970000, 30.94232000, 500, 5 );
                TASK_SHOOT_AT_COORD( 0, 104.80780000, -430.39630000, 31.24653000, 500, 5 );
                TASK_SHOOT_AT_COORD( 0, 104.95910000, -431.45300000, 31.16060000, 500, 5 );
                TASK_SHOOT_AT_COORD( 0, 104.68900000, -431.15020000, 32.27721000, 500, 5 );
                TASK_SHOOT_AT_COORD( 0, 104.79230000, -431.54780000, 33.06558000, 500, 5 );
                TASK_SHOOT_AT_COORD( 0, 104.78090000, -431.28740000, 31.36787000, 500, 5 );
                TASK_SHOOT_AT_COORD( 0, 104.85790000, -430.66970000, 30.94232000, 500, 5 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                if (NOT (IS_CHAR_INJURED( l_U3157 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U3157, uVar2 );
                }
                CLEAR_SEQUENCE_TASK( uVar2 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_SHOOT_AT_COORD( 0, 105.10450000, -430.53170000, 31.69739000, 500, 5 );
                TASK_SHOOT_AT_COORD( 0, 104.85030000, -431.40390000, 31.71615000, 500, 5 );
                TASK_SHOOT_AT_COORD( 0, 104.95510000, -431.37990000, 31.25730000, 500, 5 );
                TASK_SHOOT_AT_COORD( 0, 104.68900000, -431.15020000, 32.27721000, 500, 5 );
                TASK_SHOOT_AT_COORD( 0, 104.82240000, -430.86960000, 31.25451000, 500, 5 );
                TASK_SHOOT_AT_COORD( 0, 104.85790000, -430.66970000, 30.94232000, 500, 5 );
                TASK_SHOOT_AT_COORD( 0, 104.80780000, -430.39630000, 31.24653000, 500, 5 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                if (NOT (IS_CHAR_INJURED( l_U3158 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U3158, uVar2 );
                }
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U3313++;
            }
        }
        break;
        case 1:
        if (sub_43835( l_U3157, 0, 1 ))
        {
            return 1;
        }
        break;
    }
    return 0;
}

void sub_43103()
{
    if (NOT l_U3240)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.75350000, -425.09950000, 31.74780000, 2.00000000, 1.00000000, 2.00000000, 0 ))
        {
            l_U3240 = 1;
        }
    }
    return l_U3240;
}

int sub_43234(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

int sub_43835(unknown uParam0, boolean bParam1, int iParam2)
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
            sub_43940( iVar6, "Progress...." );
            l_U3208 = 0;
            if (iVar6 > iParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_43940(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_44583()
{
    if (NOT l_U3225)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 112.91670000, -422.32280000, 31.74780000, 1.00000000, 1.00000000, 2.00000000, 0 ))
        {
            l_U3225 = 1;
        }
    }
    return l_U3225;
}

void sub_44738()
{
    if (NOT l_U3228)
    {
        if (((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 87.76360000, -421.80800000, 28.89770000, 1.00000000, 3.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 87.01979000, -424.96950000, 28.19227000, 1.00000000, 1.00000000, 2.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 87.70890000, -427.79890000, 26.05240000, 2.00000000, 1.00000000, 2.00000000, 0 )))
        {
            l_U3228 = 1;
        }
    }
    return l_U3228;
}

void sub_45648()
{
    if (NOT l_U3223)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.71750000, -438.08900000, 31.74800000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.87490000, -431.67340000, 31.74800000, 2.00000000, 2.00000000, 2.00000000, 0 )))
        {
            l_U3223 = 1;
        }
    }
    return l_U3223;
}

void sub_45848()
{
    if (NOT l_U3229)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.74190000, -427.54790000, 26.05120000, 2.00000000, 3.00000000, 3.00000000, 0 ))
        {
            l_U3229 = 1;
        }
    }
    return l_U3229;
}

int sub_46032()
{
    unknown[5] uVar2;
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
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    float fVar208;

    array(ref uVar2, 5);
    switch (l_U3319)
    {
        case 0:
        uVar2[0] = {l_U810[6]};
        uVar2[1] = {l_U810[8]};
        uVar2[2] = {l_U810[9]};
        if ((sub_46174()) AND (sub_43234( 105.38130000, -440.19880000, 27.01432000, 1.00000000 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U810[35]._fU0 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar207 );
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "Grenade_Throw", "misstony02", 8.00000000, 0, 3 );
                CLOSE_SEQUENCE_TASK( uVar207 );
                TASK_PERFORM_SEQUENCE( l_U810[35]._fU0, uVar207 );
                CLEAR_SEQUENCE_TASK( uVar207 );
                l_U3037 = 0;
                l_U3319++;
            }
            else
            {
                return 1;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U810[35]._fU0 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U810[35]._fU0, "misstony02", "Grenade_Throw" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U810[35]._fU0, "misstony02", "Grenade_Throw", ref fVar208 );
                if (fVar208 > 0.36000000)
                {
                    GET_OBJECT_COORDINATES( l_U3075, ref uVar204._fU0, ref uVar204._fU4, ref uVar204._fU8 );
                    DETACH_OBJECT( l_U3075, 1 );
                    DELETE_OBJECT( ref l_U3075 );
                    CREATE_OBJECT_NO_OFFSET( 993473937, 104.50280000, uVar204._fU4, uVar204._fU8, ref l_U3075, 1 );
                    SET_OBJECT_ROTATION( l_U3075, 121.00000000, -27.00000000, 9.10800000 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3075, "GtaMloRoom10" );
                    l_U3319++;
                }
                else if (fVar208 > 0.20000000)
                {
                    if (NOT l_U3325)
                    {
                        if (sub_46875())
                        {
                            sub_19080( "E2T2_GRN2", "E2T2BAU", ref l_U3159, 6, 1 );
                            l_U3325 = 1;
                        }
                    }
                }
            }
            else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U810[35]._fU0, sub_3731(), 0 ))
            {
                l_U3323 = 1;
                l_U3319 = 4;
            }
        }
        else
        {
            return 1;
        }
        break;
        case 2:
        if (DOES_OBJECT_EXIST( l_U3075 ))
        {
            APPLY_FORCE_TO_OBJECT( l_U3075, 1, -18.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
            GET_GAME_TIMER( ref l_U3320 );
            l_U3319++;
        }
        break;
        case 3:
        if (DOES_OBJECT_EXIST( l_U3075 ))
        {
            GET_OBJECT_COORDINATES( l_U3075, ref uVar204._fU0, ref uVar204._fU4, ref uVar204._fU8 );
            if (sub_8646( l_U3320, 3500 ))
            {
                l_U3318 = 1;
                ADD_EXPLOSION( uVar204._fU0, uVar204._fU4, uVar204._fU8, 0, 1.00000000, 1, 0, 1.00000000 );
                GET_GAME_TIMER( ref l_U3324 );
                DELETE_OBJECT( ref l_U3075 );
                l_U3319++;
            }
        }
        break;
        case 4:
        if ((sub_43835( l_U810[35]._fU0, 1, 0 )) || (l_U3323))
        {
            if (NOT (IS_CHAR_INJURED( l_U810[35]._fU0 )))
            {
                GIVE_WEAPON_TO_CHAR( l_U810[35]._fU0, 13, 3000, 1 );
                SET_CURRENT_CHAR_WEAPON( l_U810[35]._fU0, 13, 1 );
                l_U3037 = 1;
                l_U3319++;
            }
        }
        else if (IS_CHAR_INJURED( l_U810[35]._fU0 ))
        {
            return 1;
        }
        break;
        case 5:
        return 1;
        break;
    }
    if (l_U3318)
    {
        if (NOT l_U3317)
        {
            if (sub_35342( 0, 0, 0 ))
            {
                if (sub_8646( l_U3324, 200 ))
                {
                    sub_19059( "E2T2_GREN", ref l_U3159, 6, 1 );
                    l_U3318 = 0;
                    l_U3317 = 1;
                }
            }
        }
    }
    return 0;
}

void sub_46174()
{
    float fVar2;

    if (NOT l_U3242)
    {
        GET_CHAR_SPEED( sub_3731(), ref fVar2 );
        if (((fVar2 >= 1.15000000) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.74050000, -438.73520000, 26.04920000, 2.00000000, 3.00000000, 2.00000000, 0 ))) || ((fVar2 < 1.15000000) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.74050000, -438.73520000, 26.04920000, 2.00000000, 3.50000000, 2.00000000, 0 ))))
        {
            l_U3242 = 1;
        }
    }
    return l_U3242;
}

int sub_46875()
{
    return 1;
}

void sub_48077()
{
    if (NOT l_U3230)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 107.09130000, -421.32250000, 20.35120000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            l_U3230 = 1;
        }
    }
    return l_U3230;
}

int sub_48289()
{
    unknown uVar2;
    float fVar3;
    unknown[3] uVar4;
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
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;

    array(ref uVar4, 3);
    switch (l_U3314)
    {
        case 0:
        uVar4[0] = {l_U810[13]};
        uVar4[1] = {l_U810[14]};
        uVar4[2] = {l_U810[16]};
        if ((sub_48407()) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.70560000, -438.23960000, 20.35110000, 2.00000000, 2.00000000, 1.00000000, 0 )) AND (sub_42291( ref uVar4, 3, 3, 1, 1 ))))
        {
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 91.98007000, -436.08240000, 21.80583000, 3.00000000, -75496193 ))
            {
                if (sub_43234( 89.15554000, -437.99170000, 20.56137000, 1.50000000 ))
                {
                    sub_9938( 6 );
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "smash_through_window", "misstony02", 8.00000000, 0, 72 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    TASK_PERFORM_SEQUENCE( l_U810[29]._fU0, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                    SAY_AMBIENT_SPEECH( l_U810[29]._fU0, "COVER_ME", 1, 1, 2 );
                    GET_GAME_TIMER( ref l_U3315 );
                    l_U3314 = 2;
                }
            }
        }
        break;
        case 1: break;
        case 2:
        if (NOT l_U3316)
        {
            if (NOT (IS_CHAR_DEAD( l_U810[29]._fU0 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U810[29]._fU0, "misstony02", "smash_through_window" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U810[29]._fU0, "misstony02", "smash_through_window", ref fVar3 );
                    if (fVar3 >= 0.10000000)
                    {
                        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 91.98007000, -436.08240000, 21.80583000, 3.00000000, -75496193 ))
                        {
                            SMASH_GLASS_ON_OBJECT( 91.98007000, -436.08240000, 21.80583000, 3.00000000, -75496193, 1.00000000 );
                            PLAY_SOUND_FROM_POSITION( -1, "GT02_CHINESE_TAKEOUT_SMASH_GLASS", 91.98007000, -436.08240000, 21.80583000 );
                            l_U3316 = 1;
                        }
                    }
                }
            }
        }
        if (sub_43835( l_U810[29]._fU0, 1, 0 ))
        {
            l_U810[29]._fU8 = 1;
            return 1;
        }
        break;
    }
    return 0;
}

void sub_48407()
{
    if (NOT l_U3241)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 103.71760000, -438.16980000, 20.35110000, 1.00000000, 2.00000000, 2.00000000, 0 ))
        {
            l_U3241 = 1;
        }
    }
    return l_U3241;
}

void sub_49291()
{
    float fVar2;

    if (NOT l_U3233)
    {
        GET_CHAR_SPEED( sub_3731(), ref fVar2 );
        if (((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.68410000, -434.53120000, 20.35120000, 2.00000000, 1.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.72670000, -438.23510000, 20.35110000, 2.00000000, 2.00000000, 2.00000000, 0 ))) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 92.78980000, -438.14440000, 20.41450000, 1.00000000, 2.00000000, 2.00000000, 0 )) AND (fVar2 > 5.00000000)))
        {
            l_U3233 = 1;
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 92.78980000, -438.14440000, 20.41450000, 1.00000000, 2.00000000, 2.00000000, 0 )) AND (fVar2 > 5.00000000))
            {
                if (NOT (IS_CHAR_DEAD( l_U810[25]._fU0 )))
                {
                    SET_CHAR_COORDINATES( l_U810[25]._fU0, 89.94130000, -425.60090000, 18.68910000 );
                    SET_CHAR_HEADING( l_U810[25]._fU0, 180.00000000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U810[25]._fU0, "GtaMloRoom08" );
                }
                if (NOT (IS_CHAR_DEAD( l_U810[26]._fU0 )))
                {
                    SET_CHAR_COORDINATES( l_U810[26]._fU0, 87.59990000, -426.09060000, 20.00590000 );
                    SET_CHAR_HEADING( l_U810[26]._fU0, 180.00000000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U810[26]._fU0, "GtaMloRoom08" );
                }
            }
        }
    }
    return l_U3233;
}

void sub_50262()
{
    if (NOT l_U3234)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.63910000, -421.63300000, 17.50130000, 2.00000000, 1.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 87.62280000, -425.12150000, 15.96690000, 1.00000000, 2.00000000, 2.00000000, 0 )))
        {
            l_U3234 = 1;
        }
    }
    return l_U3234;
}

void sub_50498()
{
    if (NOT l_U3235)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.67310000, -427.80570000, 14.91760000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            l_U3235 = 1;
        }
    }
    return l_U3235;
}

void sub_50650()
{
    if (NOT l_U3236)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.71590000, -434.87570000, 14.91780000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            l_U3236 = 1;
        }
    }
    return l_U3236;
}

void sub_50805()
{
    if (NOT l_U3237)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 95.33230000, -434.92780000, 14.91780000, 2.00000000, 3.00000000, 2.00000000, 0 ))
        {
            l_U3237 = 1;
        }
    }
    return l_U3237;
}

void sub_50946()
{
    if (NOT l_U3238)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 105.29980000, -434.29380000, 14.91780000, 1.00000000, 3.00000000, 2.00000000, 0 ))
        {
            l_U3238 = 1;
        }
    }
    return l_U3238;
}

void sub_51371()
{
    if (sub_51380() >= g_U43138[g_U43137]._fU16)
    {
        g_U43566 = 1;
    }
    else
    {
        g_U43566 = 0;
    }
    if (g_U43603 == 1)
    {
        g_U43614 = sub_51524();
        g_U43603 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (sub_51380() > g_U43614)
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
        if (sub_52145() >= g_U43138[g_U43137]._fU20)
        {
            g_U43567 = 1;
        }
        else
        {
            g_U43567 = 0;
        }
        if (g_U43604 == 1)
        {
            g_U43616 = sub_53686();
            g_U43604 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (sub_52145() > g_U43616)
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
            g_U43616 = sub_53686();
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

void sub_51380()
{
    g_U43514 = GET_INT_STAT( 289 );
    g_U43515 = g_U43514 - g_U43513;
    if (g_U43515 < 0)
    {
        g_U43515 = 0;
    }
    return g_U43515;
}

int sub_51524()
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

void sub_52145()
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

int sub_53686()
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

int sub_54558()
{
    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 129.19370000, -436.08670000, 14.78420000, 1.00000000, 11.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 127.00000000, -441.59800000, 15.41300000, 1.60000000, 1.60000000, 1.60000000, 0 )))
    {
        return 1;
    }
    return 0;
}

void sub_55237()
{
    switch (l_U3312)
    {
        case 0: break;
        case 1:
        if (DOES_BLIP_EXIST( l_U3068[1] ))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_3731(), 127.00000000, -441.59800000, 15.41300000, 1.60000000, 1.60000000, 1.60000000, 1 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3068[1] );
            }
        }
        break;
    }
    return;
}

void sub_55385()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    for ( I = 0; I <= 39; I++ )
    {
        if (l_U810[I]._fU4)
        {
            if (NOT (IS_CHAR_DEAD( l_U810[I]._fU0 )))
            {
                if (NOT l_U810[I]._fU8)
                {
                    SET_CHAR_DECISION_MAKER( l_U810[I]._fU0, l_U3034 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U810[I]._fU0, 1 );
                    SET_CHAR_RELATIONSHIP( l_U810[I]._fU0, 5, 0 );
                    switch (l_U810[I]._fU24)
                    {
                        case 0:
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U810[I]._fU68._fU0, l_U810[I]._fU68._fU4, l_U810[I]._fU68._fU8, 3, -1, 0.50000000 );
                        if (l_U810[I]._fU20)
                        {
                            TASK_DUCK( 0, -2 );
                        }
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                        case 1:
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_GO_TO_COORD_WHILE_AIMING( 0, l_U810[I]._fU68._fU0, l_U810[I]._fU68._fU4, l_U810[I]._fU68._fU8, 3, 0.50000000, 0.50000000, sub_3731(), 0.00000000, 0.00000000, 0.00000000, 1 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                        case 2:
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U810[I]._fU68._fU0, l_U810[I]._fU68._fU4, l_U810[I]._fU68._fU8, 3, 0.50000000, 0.50000000, sub_3731(), 1 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                        case 3:
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U810[I]._fU68._fU0, l_U810[I]._fU68._fU4, l_U810[I]._fU68._fU8, 2, 0.50000000, 0.50000000, sub_3731(), 1 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                        case 4:
                        GET_CHAR_COORDINATES( sub_3731(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_SHOOT_AT_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8 + 0.50000000, 2000, 5 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U810[I]._fU68._fU0, l_U810[I]._fU68._fU4, l_U810[I]._fU68._fU8, 2, 0.50000000, 0.50000000, sub_3731(), 1 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                        case 5:
                        ADD_COVER_POINT( l_U810[I]._fU68._fU0, l_U810[I]._fU68._fU4, l_U810[I]._fU68._fU8, l_U810[I]._fU104._fU8, l_U810[I]._fU104._fU4, l_U810[I]._fU104._fU12, 0, ref l_U810[I]._fU104._fU0 );
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_SEEK_COVER_TO_COVER_POINT( 0, l_U810[I]._fU104._fU0, l_U810[I]._fU104._fU16._fU0, l_U810[I]._fU104._fU16._fU4, l_U810[I]._fU104._fU16._fU8, 50 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                        case 6:
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_TOGGLE_DUCK( 0, 1 );
                        TASK_COMBAT_ROLL( 0, 0 );
                        TASK_SHOOT_AT_CHAR( 0, sub_3731(), 2000, 3 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        break;
                    }
                    if (NOT (IS_CHAR_INJURED( l_U810[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U810[I]._fU0, uVar6 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar6 );
                    l_U810[I]._fU8 = 1;
                }
                else if ((NOT l_U810[I]._fU16) || (l_U810[I]._fU12))
                {
                    if (NOT l_U810[I]._fU20)
                    {
                        if ((sub_43835( l_U810[I]._fU0, 1, 0 )) || ((l_U810[I]._fU24 == 5) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U810[I]._fU0, l_U810[I]._fU68._fU0, l_U810[I]._fU68._fU4, l_U810[I]._fU68._fU8, 0.50000000, 0.50000000, 2.00000000, 0 ))))
                        {
                            if (l_U810[I]._fU24 == 5)
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U810[I]._fU0, l_U810[I]._fU68._fU0, l_U810[I]._fU68._fU4, l_U810[I]._fU68._fU8, 0.50000000, 0.50000000, 2.00000000, 0 )))
                                {
                                    REMOVE_COVER_POINT( l_U810[I]._fU104._fU0 );
                                    l_U810[I]._fU8 = 0;
                                    return;
                                }
                                if (l_U810[I]._fU104._fU28)
                                {
                                    REMOVE_COVER_POINT( l_U810[I]._fU104._fU0 );
                                }
                            }
                            SET_CHAR_DECISION_MAKER( l_U810[I]._fU0, l_U3035 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U810[I]._fU0, 0 );
                            SET_COMBAT_DECISION_MAKER( l_U810[I]._fU0, l_U810[I]._fU136 );
                            sub_57041( ref l_U810[I], l_U810[I]._fU80 );
                            SET_CHAR_RELATIONSHIP( l_U810[I]._fU0, 5, 23 );
                            SET_CHAR_RELATIONSHIP( l_U810[I]._fU0, 5, 0 );
                            if (l_U810[I]._fU84)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar6 );
                                if (NOT (IS_CHAR_DEAD( l_U810[I]._fU88 )))
                                {
                                    TASK_COMBAT( 0, l_U810[I]._fU88 );
                                }
                                CLOSE_SEQUENCE_TASK( uVar6 );
                            }
                            else
                            {
                                OPEN_SEQUENCE_TASK( ref uVar6 );
                                TASK_COMBAT( 0, sub_3731() );
                                CLOSE_SEQUENCE_TASK( uVar6 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U810[I]._fU0 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U810[I]._fU0, uVar6 );
                            }
                            CLEAR_SEQUENCE_TASK( uVar6 );
                            l_U810[I]._fU16 = 1;
                            l_U810[I]._fU12 = 0;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_57041(int iParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, 91.95930000, -437.26200000, 32.74800000, 92.16840000, -439.25100000, 30.24800000, 2.00000000 );
        break;
        case 1:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, 107.35430000, -434.35680000, 33.24800000, 107.54600000, -436.34760000, 30.24800000, 1.50000000 );
        break;
        case 2:
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU0, iParam0->_fU68, 2 );
        break;
        case 3:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, 106.96920000, -423.72260000, 33.24800000, 106.96920000, -420.82260000, 30.24800000, 3.50000000 );
        break;
        case 4:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, 109.19660000, -424.08880000, 32.74800000, 109.19660000, -422.08880000, 30.24800000, 4.50000000 );
        break;
        case 5:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, 95.94940000, -438.79800000, 21.35110000, 94.44940000, -438.79800000, 18.85110000, 1.00000000 );
        break;
        case 6:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, 97.15390000, -435.40230000, 16.41790000, 99.15390000, -435.40230000, 13.41790000, 0.50000000 );
        break;
        case 7:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, 111.33890000, -436.45290000, 15.91770000, 111.33890000, -441.95290000, 12.91770000, 5.50000000 );
        break;
        case 8:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, 102.25010000, -439.23290000, 32.74800000, 102.25010000, -437.73290000, 30.24800000, 2.00000000 );
        break;
    }
    return;
}

void sub_57879()
{
    int I;

    for ( I = 0; I < l_U810; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U810[I]._fU0 )))
        {
            if (l_U810[I]._fU4)
            {
                if (NOT (DOES_BLIP_EXIST( l_U810[I]._fU100 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U810[I]._fU0, ref l_U810[I]._fU100 );
                    CHANGE_BLIP_SCALE( l_U810[I]._fU100, 0.50000000 );
                    CHANGE_BLIP_DISPLAY( l_U810[I]._fU100, 5 );
                }
            }
        }
        else if (DOES_BLIP_EXIST( l_U810[I]._fU100 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U810[I]._fU100 );
        }
    }
    return;
}

boolean sub_58430(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return ((uParam0._fU0 == uParam3._fU0) AND (uParam0._fU4 == uParam3._fU4)) AND (uParam0._fU8 == uParam3._fU8);
}

int sub_58637()
{
    int iVar2;

    iVar2 = sub_58648( 1, 0 );
    if (iVar2 != -1)
    {
        if (NOT (IS_CHAR_INJURED( l_U810[iVar2]._fU0 )))
        {
            if ((l_U3351 mod 2) == 0)
            {
                SAY_AMBIENT_SPEECH( l_U810[iVar2]._fU0, "COVER_ME", 1, 1, 2 );
            }
            else
            {
                SAY_AMBIENT_SPEECH( l_U810[iVar2]._fU0, "MOVE_IN", 1, 1, 2 );
            }
            l_U3351++;
            return 1;
        }
    }
    return 0;
}

void sub_58648(boolean bParam0, boolean bParam1)
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
    GET_CHAR_COORDINATES( sub_3731(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    for ( I = 0; I < l_U810; I++ )
    {
        if (l_U810[I]._fU4)
        {
            if (NOT (IS_CHAR_INJURED( l_U810[I]._fU0 )))
            {
                GET_CHAR_COORDINATES( l_U810[I]._fU0, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                if ((ABSF( uVar11._fU8 - uVar8._fU8 )) < 1.00000000)
                {
                    if ((((NOT bParam0) AND (NOT bParam1)) || ((bParam0) AND ((l_U810[I]._fU8) AND (NOT l_U810[I]._fU16)))) || ((bParam1) AND (IS_CHAR_SHOOTING( l_U810[I]._fU0 ))))
                    {
                        fVar7 = sub_58898( sub_3731(), l_U810[I]._fU0 );
                        if (fVar7 < fVar6)
                        {
                            Result = I;
                            fVar6 = fVar7;
                        }
                    }
                }
            }
        }
    }
    return Result;
}

void sub_58898(unknown uParam0, unknown uParam1)
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

int sub_59239()
{
    int iVar2;

    iVar2 = sub_58648( 0, 1 );
    if (iVar2 != -1)
    {
        if (NOT (IS_CHAR_INJURED( l_U810[iVar2]._fU0 )))
        {
            SAY_AMBIENT_SPEECH( l_U810[iVar2]._fU0, "TARGET", 1, 1, 2 );
            return 1;
        }
    }
    return 0;
}

int sub_59364()
{
    int iVar2;

    if (NOT l_U3352)
    {
        if (IS_CHAR_SHOOTING( sub_3731() ))
        {
            l_U3352 = 1;
        }
    }
    else if (NOT (IS_CHAR_SHOOTING( sub_3731() )))
    {
        iVar2 = sub_58648( 0, 0 );
        if (iVar2 != -1)
        {
            SAY_AMBIENT_SPEECH( l_U810[iVar2]._fU0, "TAKE_COVER", 1, 1, 2 );
            l_U3352 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_59554()
{
    unknown[40] uVar2;
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
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown uVar246;
    unknown uVar247;
    unknown uVar248;
    unknown uVar249;
    unknown uVar250;
    unknown uVar251;
    unknown uVar252;
    unknown uVar253;
    unknown uVar254;
    unknown uVar255;
    unknown uVar256;
    unknown uVar257;
    unknown uVar258;
    unknown uVar259;
    unknown uVar260;
    unknown uVar261;
    unknown uVar262;
    unknown uVar263;
    unknown uVar264;
    unknown uVar265;
    unknown uVar266;
    unknown uVar267;
    unknown uVar268;
    unknown uVar269;
    unknown uVar270;
    unknown uVar271;
    unknown uVar272;
    unknown uVar273;
    unknown uVar274;
    unknown uVar275;
    unknown uVar276;
    unknown uVar277;
    unknown uVar278;
    unknown uVar279;
    unknown uVar280;
    unknown uVar281;
    unknown uVar282;
    unknown uVar283;
    unknown uVar284;
    unknown uVar285;
    unknown uVar286;
    unknown uVar287;
    unknown uVar288;
    unknown uVar289;
    unknown uVar290;
    unknown uVar291;
    unknown uVar292;
    unknown uVar293;
    unknown uVar294;
    unknown uVar295;
    unknown uVar296;
    unknown uVar297;
    unknown uVar298;
    unknown uVar299;
    unknown uVar300;
    unknown uVar301;
    unknown uVar302;
    unknown uVar303;
    unknown uVar304;
    unknown uVar305;
    unknown uVar306;
    unknown uVar307;
    unknown uVar308;
    unknown uVar309;
    unknown uVar310;
    unknown uVar311;
    unknown uVar312;
    unknown uVar313;
    unknown uVar314;
    unknown uVar315;
    unknown uVar316;
    unknown uVar317;
    unknown uVar318;
    unknown uVar319;
    unknown uVar320;
    unknown uVar321;
    unknown uVar322;
    unknown uVar323;
    unknown uVar324;
    unknown uVar325;
    unknown uVar326;
    unknown uVar327;
    unknown uVar328;
    unknown uVar329;
    unknown uVar330;
    unknown uVar331;
    unknown uVar332;
    unknown uVar333;
    unknown uVar334;
    unknown uVar335;
    unknown uVar336;
    unknown uVar337;
    unknown uVar338;
    unknown uVar339;
    unknown uVar340;
    unknown uVar341;
    unknown uVar342;
    unknown uVar343;
    unknown uVar344;
    unknown uVar345;
    unknown uVar346;
    unknown uVar347;
    unknown uVar348;
    unknown uVar349;
    unknown uVar350;
    unknown uVar351;
    unknown uVar352;
    unknown uVar353;
    unknown uVar354;
    unknown uVar355;
    unknown uVar356;
    unknown uVar357;
    unknown uVar358;
    unknown uVar359;
    unknown uVar360;
    unknown uVar361;
    unknown uVar362;
    unknown uVar363;
    unknown uVar364;
    unknown uVar365;
    unknown uVar366;
    unknown uVar367;
    unknown uVar368;
    unknown uVar369;
    unknown uVar370;
    unknown uVar371;
    unknown uVar372;
    unknown uVar373;
    unknown uVar374;
    unknown uVar375;
    unknown uVar376;
    unknown uVar377;
    unknown uVar378;
    unknown uVar379;
    unknown uVar380;
    unknown uVar381;
    unknown uVar382;
    unknown uVar383;
    unknown uVar384;
    unknown uVar385;
    unknown uVar386;
    unknown uVar387;
    unknown uVar388;
    unknown uVar389;
    unknown uVar390;
    unknown uVar391;
    unknown uVar392;
    unknown uVar393;
    unknown uVar394;
    unknown uVar395;
    unknown uVar396;
    unknown uVar397;
    unknown uVar398;
    unknown uVar399;
    unknown uVar400;
    unknown uVar401;
    unknown uVar402;
    unknown uVar403;
    unknown uVar404;
    unknown uVar405;
    unknown uVar406;
    unknown uVar407;
    unknown uVar408;
    unknown uVar409;
    unknown uVar410;
    unknown uVar411;
    unknown uVar412;
    unknown uVar413;
    unknown uVar414;
    unknown uVar415;
    unknown uVar416;
    unknown uVar417;
    unknown uVar418;
    unknown uVar419;
    unknown uVar420;
    unknown uVar421;
    unknown uVar422;
    unknown uVar423;
    unknown uVar424;
    unknown uVar425;
    unknown uVar426;
    unknown uVar427;
    unknown uVar428;
    unknown uVar429;
    unknown uVar430;
    unknown uVar431;
    unknown uVar432;
    unknown uVar433;
    unknown uVar434;
    unknown uVar435;
    unknown uVar436;
    unknown uVar437;
    unknown uVar438;
    unknown uVar439;
    unknown uVar440;
    unknown uVar441;
    unknown uVar442;
    unknown uVar443;
    unknown uVar444;
    unknown uVar445;
    unknown uVar446;
    unknown uVar447;
    unknown uVar448;
    unknown uVar449;
    unknown uVar450;
    unknown uVar451;
    unknown uVar452;
    unknown uVar453;
    unknown uVar454;
    unknown uVar455;
    unknown uVar456;
    unknown uVar457;
    unknown uVar458;
    unknown uVar459;
    unknown uVar460;
    unknown uVar461;
    unknown uVar462;
    unknown uVar463;
    unknown uVar464;
    unknown uVar465;
    unknown uVar466;
    unknown uVar467;
    unknown uVar468;
    unknown uVar469;
    unknown uVar470;
    unknown uVar471;
    unknown uVar472;
    unknown uVar473;
    unknown uVar474;
    unknown uVar475;
    unknown uVar476;
    unknown uVar477;
    unknown uVar478;
    unknown uVar479;
    unknown uVar480;
    unknown uVar481;
    unknown uVar482;
    unknown uVar483;
    unknown uVar484;
    unknown uVar485;
    unknown uVar486;
    unknown uVar487;
    unknown uVar488;
    unknown uVar489;
    unknown uVar490;
    unknown uVar491;
    unknown uVar492;
    unknown uVar493;
    unknown uVar494;
    unknown uVar495;
    unknown uVar496;
    unknown uVar497;
    unknown uVar498;
    unknown uVar499;
    unknown uVar500;
    unknown uVar501;
    unknown uVar502;
    unknown uVar503;
    unknown uVar504;
    unknown uVar505;
    unknown uVar506;
    unknown uVar507;
    unknown uVar508;
    unknown uVar509;
    unknown uVar510;
    unknown uVar511;
    unknown uVar512;
    unknown uVar513;
    unknown uVar514;
    unknown uVar515;
    unknown uVar516;
    unknown uVar517;
    unknown uVar518;
    unknown uVar519;
    unknown uVar520;
    unknown uVar521;
    unknown uVar522;
    unknown uVar523;
    unknown uVar524;
    unknown uVar525;
    unknown uVar526;
    unknown uVar527;
    unknown uVar528;
    unknown uVar529;
    unknown uVar530;
    unknown uVar531;
    unknown uVar532;
    unknown uVar533;
    unknown uVar534;
    unknown uVar535;
    unknown uVar536;
    unknown uVar537;
    unknown uVar538;
    unknown uVar539;
    unknown uVar540;
    unknown uVar541;
    unknown uVar542;
    unknown uVar543;
    unknown uVar544;
    unknown uVar545;
    unknown uVar546;
    unknown uVar547;
    unknown uVar548;
    unknown uVar549;
    unknown uVar550;
    unknown uVar551;
    unknown uVar552;
    unknown uVar553;
    unknown uVar554;
    unknown uVar555;
    unknown uVar556;
    unknown uVar557;
    unknown uVar558;
    unknown uVar559;
    unknown uVar560;
    unknown uVar561;
    unknown uVar562;
    unknown uVar563;
    unknown uVar564;
    unknown uVar565;
    unknown uVar566;
    unknown uVar567;
    unknown uVar568;
    unknown uVar569;
    unknown uVar570;
    unknown uVar571;
    unknown uVar572;
    unknown uVar573;
    unknown uVar574;
    unknown uVar575;
    unknown uVar576;
    unknown uVar577;
    unknown uVar578;
    unknown uVar579;
    unknown uVar580;
    unknown uVar581;
    unknown uVar582;
    unknown uVar583;
    unknown uVar584;
    unknown uVar585;
    unknown uVar586;
    unknown uVar587;
    unknown uVar588;
    unknown uVar589;
    unknown uVar590;
    unknown uVar591;
    unknown uVar592;
    unknown uVar593;
    unknown uVar594;
    unknown uVar595;
    unknown uVar596;
    unknown uVar597;
    unknown uVar598;
    unknown uVar599;
    unknown uVar600;
    unknown uVar601;
    unknown uVar602;
    unknown uVar603;
    unknown uVar604;
    unknown uVar605;
    unknown uVar606;
    unknown uVar607;
    unknown uVar608;
    unknown uVar609;
    unknown uVar610;
    unknown uVar611;
    unknown uVar612;
    unknown uVar613;
    unknown uVar614;
    unknown uVar615;
    unknown uVar616;
    unknown uVar617;
    unknown uVar618;
    unknown uVar619;
    unknown uVar620;
    unknown uVar621;
    unknown uVar622;
    unknown uVar623;
    unknown uVar624;
    unknown uVar625;
    unknown uVar626;
    unknown uVar627;
    unknown uVar628;
    unknown uVar629;
    unknown uVar630;
    unknown uVar631;
    unknown uVar632;
    unknown uVar633;
    unknown uVar634;
    unknown uVar635;
    unknown uVar636;
    unknown uVar637;
    unknown uVar638;
    unknown uVar639;
    unknown uVar640;
    unknown uVar641;
    unknown uVar642;
    unknown uVar643;
    unknown uVar644;
    unknown uVar645;
    unknown uVar646;
    unknown uVar647;
    unknown uVar648;
    unknown uVar649;
    unknown uVar650;
    unknown uVar651;
    unknown uVar652;
    unknown uVar653;
    unknown uVar654;
    unknown uVar655;
    unknown uVar656;
    unknown uVar657;
    unknown uVar658;
    unknown uVar659;
    unknown uVar660;
    unknown uVar661;
    unknown uVar662;
    unknown uVar663;
    unknown uVar664;
    unknown uVar665;
    unknown uVar666;
    unknown uVar667;
    unknown uVar668;
    unknown uVar669;
    unknown uVar670;
    unknown uVar671;
    unknown uVar672;
    unknown uVar673;
    unknown uVar674;
    unknown uVar675;
    unknown uVar676;
    unknown uVar677;
    unknown uVar678;
    unknown uVar679;
    unknown uVar680;
    unknown uVar681;
    unknown uVar682;
    unknown uVar683;
    unknown uVar684;
    unknown uVar685;
    unknown uVar686;
    unknown uVar687;
    unknown uVar688;
    unknown uVar689;
    unknown uVar690;
    unknown uVar691;
    unknown uVar692;
    unknown uVar693;
    unknown uVar694;
    unknown uVar695;
    unknown uVar696;
    unknown uVar697;
    unknown uVar698;
    unknown uVar699;
    unknown uVar700;
    unknown uVar701;
    unknown uVar702;
    unknown uVar703;
    unknown uVar704;
    unknown uVar705;
    unknown uVar706;
    unknown uVar707;
    unknown uVar708;
    unknown uVar709;
    unknown uVar710;
    unknown uVar711;
    unknown uVar712;
    unknown uVar713;
    unknown uVar714;
    unknown uVar715;
    unknown uVar716;
    unknown uVar717;
    unknown uVar718;
    unknown uVar719;
    unknown uVar720;
    unknown uVar721;
    unknown uVar722;
    unknown uVar723;
    unknown uVar724;
    unknown uVar725;
    unknown uVar726;
    unknown uVar727;
    unknown uVar728;
    unknown uVar729;
    unknown uVar730;
    unknown uVar731;
    unknown uVar732;
    unknown uVar733;
    unknown uVar734;
    unknown uVar735;
    unknown uVar736;
    unknown uVar737;
    unknown uVar738;
    unknown uVar739;
    unknown uVar740;
    unknown uVar741;
    unknown uVar742;
    unknown uVar743;
    unknown uVar744;
    unknown uVar745;
    unknown uVar746;
    unknown uVar747;
    unknown uVar748;
    unknown uVar749;
    unknown uVar750;
    unknown uVar751;
    unknown uVar752;
    unknown uVar753;
    unknown uVar754;
    unknown uVar755;
    unknown uVar756;
    unknown uVar757;
    unknown uVar758;
    unknown uVar759;
    unknown uVar760;
    unknown uVar761;
    unknown uVar762;
    unknown uVar763;
    unknown uVar764;
    unknown uVar765;
    unknown uVar766;
    unknown uVar767;
    unknown uVar768;
    unknown uVar769;
    unknown uVar770;
    unknown uVar771;
    unknown uVar772;
    unknown uVar773;
    unknown uVar774;
    unknown uVar775;
    unknown uVar776;
    unknown uVar777;
    unknown uVar778;
    unknown uVar779;
    unknown uVar780;
    unknown uVar781;
    unknown uVar782;
    unknown uVar783;
    unknown uVar784;
    unknown uVar785;
    unknown uVar786;
    unknown uVar787;
    unknown uVar788;
    unknown uVar789;
    unknown uVar790;
    unknown uVar791;
    unknown uVar792;
    unknown uVar793;
    unknown uVar794;
    unknown uVar795;
    unknown uVar796;
    unknown uVar797;
    unknown uVar798;
    unknown uVar799;
    unknown uVar800;
    unknown uVar801;
    unknown uVar802;
    unknown uVar803;
    unknown uVar804;
    unknown uVar805;
    unknown uVar806;
    unknown uVar807;
    unknown uVar808;
    unknown uVar809;
    unknown uVar810;
    unknown uVar811;
    unknown uVar812;
    unknown uVar813;
    unknown uVar814;
    unknown uVar815;
    unknown uVar816;
    unknown uVar817;
    unknown uVar818;
    unknown uVar819;
    unknown uVar820;
    unknown uVar821;
    unknown uVar822;
    unknown uVar823;
    unknown uVar824;
    unknown uVar825;
    unknown uVar826;
    unknown uVar827;
    unknown uVar828;
    unknown uVar829;
    unknown uVar830;
    unknown uVar831;
    unknown uVar832;
    unknown uVar833;
    unknown uVar834;
    unknown uVar835;
    unknown uVar836;
    unknown uVar837;
    unknown uVar838;
    unknown uVar839;
    unknown uVar840;
    unknown uVar841;
    unknown uVar842;
    unknown uVar843;
    unknown uVar844;
    unknown uVar845;
    unknown uVar846;
    unknown uVar847;
    unknown uVar848;
    unknown uVar849;
    unknown uVar850;
    unknown uVar851;
    unknown uVar852;
    unknown uVar853;
    unknown uVar854;
    unknown uVar855;
    unknown uVar856;
    unknown uVar857;
    unknown uVar858;
    unknown uVar859;
    unknown uVar860;
    unknown uVar861;
    unknown uVar862;
    unknown uVar863;
    unknown uVar864;
    unknown uVar865;
    unknown uVar866;
    unknown uVar867;
    unknown uVar868;
    unknown uVar869;
    unknown uVar870;
    unknown uVar871;
    unknown uVar872;
    unknown uVar873;
    unknown uVar874;
    unknown uVar875;
    unknown uVar876;
    unknown uVar877;
    unknown uVar878;
    unknown uVar879;
    unknown uVar880;
    unknown uVar881;
    unknown uVar882;
    unknown uVar883;
    unknown uVar884;
    unknown uVar885;
    unknown uVar886;
    unknown uVar887;
    unknown uVar888;
    unknown uVar889;
    unknown uVar890;
    unknown uVar891;
    unknown uVar892;
    unknown uVar893;
    unknown uVar894;
    unknown uVar895;
    unknown uVar896;
    unknown uVar897;
    unknown uVar898;
    unknown uVar899;
    unknown uVar900;
    unknown uVar901;
    unknown uVar902;
    unknown uVar903;
    unknown uVar904;
    unknown uVar905;
    unknown uVar906;
    unknown uVar907;
    unknown uVar908;
    unknown uVar909;
    unknown uVar910;
    unknown uVar911;
    unknown uVar912;
    unknown uVar913;
    unknown uVar914;
    unknown uVar915;
    unknown uVar916;
    unknown uVar917;
    unknown uVar918;
    unknown uVar919;
    unknown uVar920;
    unknown uVar921;
    unknown uVar922;
    unknown uVar923;
    unknown uVar924;
    unknown uVar925;
    unknown uVar926;
    unknown uVar927;
    unknown uVar928;
    unknown uVar929;
    unknown uVar930;
    unknown uVar931;
    unknown uVar932;
    unknown uVar933;
    unknown uVar934;
    unknown uVar935;
    unknown uVar936;
    unknown uVar937;
    unknown uVar938;
    unknown uVar939;
    unknown uVar940;
    unknown uVar941;
    unknown uVar942;
    unknown uVar943;
    unknown uVar944;
    unknown uVar945;
    unknown uVar946;
    unknown uVar947;
    unknown uVar948;
    unknown uVar949;
    unknown uVar950;
    unknown uVar951;
    unknown uVar952;
    unknown uVar953;
    unknown uVar954;
    unknown uVar955;
    unknown uVar956;
    unknown uVar957;
    unknown uVar958;
    unknown uVar959;
    unknown uVar960;
    unknown uVar961;
    unknown uVar962;
    unknown uVar963;
    unknown uVar964;
    unknown uVar965;
    unknown uVar966;
    unknown uVar967;
    unknown uVar968;
    unknown uVar969;
    unknown uVar970;
    unknown uVar971;
    unknown uVar972;
    unknown uVar973;
    unknown uVar974;
    unknown uVar975;
    unknown uVar976;
    unknown uVar977;
    unknown uVar978;
    unknown uVar979;
    unknown uVar980;
    unknown uVar981;
    unknown uVar982;
    unknown uVar983;
    unknown uVar984;
    unknown uVar985;
    unknown uVar986;
    unknown uVar987;
    unknown uVar988;
    unknown uVar989;
    unknown uVar990;
    unknown uVar991;
    unknown uVar992;
    unknown uVar993;
    unknown uVar994;
    unknown uVar995;
    unknown uVar996;
    unknown uVar997;
    unknown uVar998;
    unknown uVar999;
    unknown uVar1000;
    unknown uVar1001;
    unknown uVar1002;
    unknown uVar1003;
    unknown uVar1004;
    unknown uVar1005;
    unknown uVar1006;
    unknown uVar1007;
    unknown uVar1008;
    unknown uVar1009;
    unknown uVar1010;
    unknown uVar1011;
    unknown uVar1012;
    unknown uVar1013;
    unknown uVar1014;
    unknown uVar1015;
    unknown uVar1016;
    unknown uVar1017;
    unknown uVar1018;
    unknown uVar1019;
    unknown uVar1020;
    unknown uVar1021;
    unknown uVar1022;
    unknown uVar1023;
    unknown uVar1024;
    unknown uVar1025;
    unknown uVar1026;
    unknown uVar1027;
    unknown uVar1028;
    unknown uVar1029;
    unknown uVar1030;
    unknown uVar1031;
    unknown uVar1032;
    unknown uVar1033;
    unknown uVar1034;
    unknown uVar1035;
    unknown uVar1036;
    unknown uVar1037;
    unknown uVar1038;
    unknown uVar1039;
    unknown uVar1040;
    unknown uVar1041;
    unknown uVar1042;
    unknown uVar1043;
    unknown uVar1044;
    unknown uVar1045;
    unknown uVar1046;
    unknown uVar1047;
    unknown uVar1048;
    unknown uVar1049;
    unknown uVar1050;
    unknown uVar1051;
    unknown uVar1052;
    unknown uVar1053;
    unknown uVar1054;
    unknown uVar1055;
    unknown uVar1056;
    unknown uVar1057;
    unknown uVar1058;
    unknown uVar1059;
    unknown uVar1060;
    unknown uVar1061;
    unknown uVar1062;
    unknown uVar1063;
    unknown uVar1064;
    unknown uVar1065;
    unknown uVar1066;
    unknown uVar1067;
    unknown uVar1068;
    unknown uVar1069;
    unknown uVar1070;
    unknown uVar1071;
    unknown uVar1072;
    unknown uVar1073;
    unknown uVar1074;
    unknown uVar1075;
    unknown uVar1076;
    unknown uVar1077;
    unknown uVar1078;
    unknown uVar1079;
    unknown uVar1080;
    unknown uVar1081;
    unknown uVar1082;
    unknown uVar1083;
    unknown uVar1084;
    unknown uVar1085;
    unknown uVar1086;
    unknown uVar1087;
    unknown uVar1088;
    unknown uVar1089;
    unknown uVar1090;
    unknown uVar1091;
    unknown uVar1092;
    unknown uVar1093;
    unknown uVar1094;
    unknown uVar1095;
    unknown uVar1096;
    unknown uVar1097;
    unknown uVar1098;
    unknown uVar1099;
    unknown uVar1100;
    unknown uVar1101;
    unknown uVar1102;
    unknown uVar1103;
    unknown uVar1104;
    unknown uVar1105;
    unknown uVar1106;
    unknown uVar1107;
    unknown uVar1108;
    unknown uVar1109;
    unknown uVar1110;
    unknown uVar1111;
    unknown uVar1112;
    unknown uVar1113;
    unknown uVar1114;
    unknown uVar1115;
    unknown uVar1116;
    unknown uVar1117;
    unknown uVar1118;
    unknown uVar1119;
    unknown uVar1120;
    unknown uVar1121;
    unknown uVar1122;
    unknown uVar1123;
    unknown uVar1124;
    unknown uVar1125;
    unknown uVar1126;
    unknown uVar1127;
    unknown uVar1128;
    unknown uVar1129;
    unknown uVar1130;
    unknown uVar1131;
    unknown uVar1132;
    unknown uVar1133;
    unknown uVar1134;
    unknown uVar1135;
    unknown uVar1136;
    unknown uVar1137;
    unknown uVar1138;
    unknown uVar1139;
    unknown uVar1140;
    unknown uVar1141;
    unknown uVar1142;
    unknown uVar1143;
    unknown uVar1144;
    unknown uVar1145;
    unknown uVar1146;
    unknown uVar1147;
    unknown uVar1148;
    unknown uVar1149;
    unknown uVar1150;
    unknown uVar1151;
    unknown uVar1152;
    unknown uVar1153;
    unknown uVar1154;
    unknown uVar1155;
    unknown uVar1156;
    unknown uVar1157;
    unknown uVar1158;
    unknown uVar1159;
    unknown uVar1160;
    unknown uVar1161;
    unknown uVar1162;
    unknown uVar1163;
    unknown uVar1164;
    unknown uVar1165;
    unknown uVar1166;
    unknown uVar1167;
    unknown uVar1168;
    unknown uVar1169;
    unknown uVar1170;
    unknown uVar1171;
    unknown uVar1172;
    unknown uVar1173;
    unknown uVar1174;
    unknown uVar1175;
    unknown uVar1176;
    unknown uVar1177;
    unknown uVar1178;
    unknown uVar1179;
    unknown uVar1180;
    unknown uVar1181;
    unknown uVar1182;
    unknown uVar1183;
    unknown uVar1184;
    unknown uVar1185;
    unknown uVar1186;
    unknown uVar1187;
    unknown uVar1188;
    unknown uVar1189;
    unknown uVar1190;
    unknown uVar1191;
    unknown uVar1192;
    unknown uVar1193;
    unknown uVar1194;
    unknown uVar1195;
    unknown uVar1196;
    unknown uVar1197;
    unknown uVar1198;
    unknown uVar1199;
    unknown uVar1200;
    unknown uVar1201;
    unknown uVar1202;
    unknown uVar1203;
    unknown uVar1204;
    unknown uVar1205;
    unknown uVar1206;
    unknown uVar1207;
    unknown uVar1208;
    unknown uVar1209;
    unknown uVar1210;
    unknown uVar1211;
    unknown uVar1212;
    unknown uVar1213;
    unknown uVar1214;
    unknown uVar1215;
    unknown uVar1216;
    unknown uVar1217;
    unknown uVar1218;
    unknown uVar1219;
    unknown uVar1220;
    unknown uVar1221;
    unknown uVar1222;
    unknown uVar1223;
    unknown uVar1224;
    unknown uVar1225;
    unknown uVar1226;
    unknown uVar1227;
    unknown uVar1228;
    unknown uVar1229;
    unknown uVar1230;
    unknown uVar1231;
    unknown uVar1232;
    unknown uVar1233;
    unknown uVar1234;
    unknown uVar1235;
    unknown uVar1236;
    unknown uVar1237;
    unknown uVar1238;
    unknown uVar1239;
    unknown uVar1240;
    unknown uVar1241;
    unknown uVar1242;
    unknown uVar1243;
    unknown uVar1244;
    unknown uVar1245;
    unknown uVar1246;
    unknown uVar1247;
    unknown uVar1248;
    unknown uVar1249;
    unknown uVar1250;
    unknown uVar1251;
    unknown uVar1252;
    unknown uVar1253;
    unknown uVar1254;
    unknown uVar1255;
    unknown uVar1256;
    unknown uVar1257;
    unknown uVar1258;
    unknown uVar1259;
    unknown uVar1260;
    unknown uVar1261;
    unknown uVar1262;
    unknown uVar1263;
    unknown uVar1264;
    unknown uVar1265;
    unknown uVar1266;
    unknown uVar1267;
    unknown uVar1268;
    unknown uVar1269;
    unknown uVar1270;
    unknown uVar1271;
    unknown uVar1272;
    unknown uVar1273;
    unknown uVar1274;
    unknown uVar1275;
    unknown uVar1276;
    unknown uVar1277;
    unknown uVar1278;
    unknown uVar1279;
    unknown uVar1280;
    unknown uVar1281;
    unknown uVar1282;
    unknown uVar1283;
    unknown uVar1284;
    unknown uVar1285;
    unknown uVar1286;
    unknown uVar1287;
    unknown uVar1288;
    unknown uVar1289;
    unknown uVar1290;
    unknown uVar1291;
    unknown uVar1292;
    unknown uVar1293;
    unknown uVar1294;
    unknown uVar1295;
    unknown uVar1296;
    unknown uVar1297;
    unknown uVar1298;
    unknown uVar1299;
    unknown uVar1300;
    unknown uVar1301;
    unknown uVar1302;
    unknown uVar1303;
    unknown uVar1304;
    unknown uVar1305;
    unknown uVar1306;
    unknown uVar1307;
    unknown uVar1308;
    unknown uVar1309;
    unknown uVar1310;
    unknown uVar1311;
    unknown uVar1312;
    unknown uVar1313;
    unknown uVar1314;
    unknown uVar1315;
    unknown uVar1316;
    unknown uVar1317;
    unknown uVar1318;
    unknown uVar1319;
    unknown uVar1320;
    unknown uVar1321;
    unknown uVar1322;
    unknown uVar1323;
    unknown uVar1324;
    unknown uVar1325;
    unknown uVar1326;
    unknown uVar1327;
    unknown uVar1328;
    unknown uVar1329;
    unknown uVar1330;
    unknown uVar1331;
    unknown uVar1332;
    unknown uVar1333;
    unknown uVar1334;
    unknown uVar1335;
    unknown uVar1336;
    unknown uVar1337;
    unknown uVar1338;
    unknown uVar1339;
    unknown uVar1340;
    unknown uVar1341;
    unknown uVar1342;
    unknown uVar1343;
    unknown uVar1344;
    unknown uVar1345;
    unknown uVar1346;
    unknown uVar1347;
    unknown uVar1348;
    unknown uVar1349;
    unknown uVar1350;
    unknown uVar1351;
    unknown uVar1352;
    unknown uVar1353;
    unknown uVar1354;
    unknown uVar1355;
    unknown uVar1356;
    unknown uVar1357;
    unknown uVar1358;
    unknown uVar1359;
    unknown uVar1360;
    unknown uVar1361;
    unknown uVar1362;
    unknown uVar1363;
    unknown uVar1364;
    unknown uVar1365;
    unknown uVar1366;
    unknown uVar1367;
    unknown uVar1368;
    unknown uVar1369;
    unknown uVar1370;
    unknown uVar1371;
    unknown uVar1372;
    unknown uVar1373;
    unknown uVar1374;
    unknown uVar1375;
    unknown uVar1376;
    unknown uVar1377;
    unknown uVar1378;
    unknown uVar1379;
    unknown uVar1380;
    unknown uVar1381;
    unknown uVar1382;
    unknown uVar1383;
    unknown uVar1384;
    unknown uVar1385;
    unknown uVar1386;
    unknown uVar1387;
    unknown uVar1388;
    unknown uVar1389;
    unknown uVar1390;
    unknown uVar1391;
    unknown uVar1392;
    unknown uVar1393;
    unknown uVar1394;
    unknown uVar1395;
    unknown uVar1396;
    unknown uVar1397;
    unknown uVar1398;
    unknown uVar1399;
    unknown uVar1400;
    unknown uVar1401;
    unknown uVar1402;
    unknown uVar1403;
    unknown uVar1404;
    unknown uVar1405;
    unknown uVar1406;
    unknown uVar1407;
    unknown uVar1408;
    unknown uVar1409;
    unknown uVar1410;
    unknown uVar1411;
    unknown uVar1412;
    unknown uVar1413;
    unknown uVar1414;
    unknown uVar1415;
    unknown uVar1416;
    unknown uVar1417;
    unknown uVar1418;
    unknown uVar1419;
    unknown uVar1420;
    unknown uVar1421;
    unknown uVar1422;
    unknown uVar1423;
    unknown uVar1424;
    unknown uVar1425;
    unknown uVar1426;
    unknown uVar1427;
    unknown uVar1428;
    unknown uVar1429;
    unknown uVar1430;
    unknown uVar1431;
    unknown uVar1432;
    unknown uVar1433;
    unknown uVar1434;
    unknown uVar1435;
    unknown uVar1436;
    unknown uVar1437;
    unknown uVar1438;
    unknown uVar1439;
    unknown uVar1440;
    unknown uVar1441;
    unknown uVar1442;
    unknown uVar1443;
    unknown uVar1444;
    unknown uVar1445;
    unknown uVar1446;
    unknown uVar1447;
    unknown uVar1448;
    unknown uVar1449;
    unknown uVar1450;
    unknown uVar1451;
    unknown uVar1452;
    unknown uVar1453;
    unknown uVar1454;
    unknown uVar1455;
    unknown uVar1456;
    unknown uVar1457;
    unknown uVar1458;
    unknown uVar1459;
    unknown uVar1460;
    unknown uVar1461;
    unknown uVar1462;
    unknown uVar1463;
    unknown uVar1464;
    unknown uVar1465;
    unknown uVar1466;
    unknown uVar1467;
    unknown uVar1468;
    unknown uVar1469;
    unknown uVar1470;
    unknown uVar1471;
    unknown uVar1472;
    unknown uVar1473;
    unknown uVar1474;
    unknown uVar1475;
    unknown uVar1476;
    unknown uVar1477;
    unknown uVar1478;
    unknown uVar1479;
    unknown uVar1480;
    unknown uVar1481;
    unknown uVar1482;
    unknown uVar1483;
    unknown uVar1484;
    unknown uVar1485;
    unknown uVar1486;
    unknown uVar1487;
    unknown uVar1488;
    unknown uVar1489;
    unknown uVar1490;
    unknown uVar1491;
    unknown uVar1492;
    unknown uVar1493;
    unknown uVar1494;
    unknown uVar1495;
    unknown uVar1496;
    unknown uVar1497;
    unknown uVar1498;
    unknown uVar1499;
    unknown uVar1500;
    unknown uVar1501;
    unknown uVar1502;
    unknown uVar1503;
    unknown uVar1504;
    unknown uVar1505;
    unknown uVar1506;
    unknown uVar1507;
    unknown uVar1508;
    unknown uVar1509;
    unknown uVar1510;
    unknown uVar1511;
    unknown uVar1512;
    unknown uVar1513;
    unknown uVar1514;
    unknown uVar1515;
    unknown uVar1516;
    unknown uVar1517;
    unknown uVar1518;
    unknown uVar1519;
    unknown uVar1520;
    unknown uVar1521;
    unknown uVar1522;
    unknown uVar1523;
    unknown uVar1524;
    unknown uVar1525;
    unknown uVar1526;
    unknown uVar1527;
    unknown uVar1528;
    unknown uVar1529;
    unknown uVar1530;
    unknown uVar1531;
    unknown uVar1532;
    unknown uVar1533;
    unknown uVar1534;
    unknown uVar1535;
    unknown uVar1536;
    unknown uVar1537;
    unknown uVar1538;
    unknown uVar1539;
    unknown uVar1540;
    unknown uVar1541;
    unknown uVar1542;
    unknown uVar1543;
    unknown uVar1544;
    unknown uVar1545;
    unknown uVar1546;
    unknown uVar1547;
    unknown uVar1548;
    unknown uVar1549;
    unknown uVar1550;
    unknown uVar1551;
    unknown uVar1552;
    unknown uVar1553;
    unknown uVar1554;
    unknown uVar1555;
    unknown uVar1556;
    unknown uVar1557;
    unknown uVar1558;
    unknown uVar1559;
    unknown uVar1560;
    unknown uVar1561;
    unknown uVar1562;
    unknown uVar1563;
    unknown uVar1564;
    unknown uVar1565;
    unknown uVar1566;
    unknown uVar1567;
    unknown uVar1568;
    unknown uVar1569;
    unknown uVar1570;
    unknown uVar1571;
    unknown uVar1572;
    unknown uVar1573;
    unknown uVar1574;
    unknown uVar1575;
    unknown uVar1576;
    unknown uVar1577;
    unknown uVar1578;
    unknown uVar1579;
    unknown uVar1580;
    unknown uVar1581;
    unknown uVar1582;
    unknown uVar1583;
    unknown uVar1584;
    unknown uVar1585;
    unknown uVar1586;
    unknown uVar1587;
    unknown uVar1588;
    unknown uVar1589;
    unknown uVar1590;
    unknown uVar1591;
    unknown uVar1592;
    unknown uVar1593;
    unknown uVar1594;
    unknown uVar1595;
    unknown uVar1596;
    unknown uVar1597;
    unknown uVar1598;
    unknown uVar1599;
    unknown uVar1600;
    unknown uVar1601;
    unknown uVar1602;
    unknown uVar1603;
    int iVar1604;
    int iVar1605;

    array(ref uVar2, 40);
    switch (l_U809)
    {
        case 0:
        if (IS_SCREEN_FADED_IN())
        {
            if (NOT (IS_CHAR_DEAD( l_U3057 )))
            {
                l_U2411[0]._fU0 = l_U3057;
                ADD_BLIP_FOR_CHAR( l_U3057, ref l_U3058 );
                SET_BLIP_AS_FRIENDLY( l_U3058, 1 );
                CHANGE_BLIP_SCALE( l_U3058, 0.50000000 );
                CHANGE_BLIP_DISPLAY( l_U3058, 5 );
                SET_PED_DONT_DO_EVASIVE_DIVES( l_U3057, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U3057, 1 );
                ADD_COVER_POINT( 107.92640000, -423.08900000, 30.74290000, 0, 190.22480000, 3, 1, ref l_U3133[0] );
                ADD_COVER_POINT( 90.91840000, -436.42370000, 30.74290000, 1, 0.00000000, 3, 0, ref l_U3133[1] );
                ADD_COVER_POINT( 90.36210000, -435.94200000, 25.04420000, 0, 270.00000000, 3, 0, ref l_U3133[2] );
                ADD_COVER_POINT( 104.49710000, -436.54890000, 25.04420000, 0, 358.93210000, 3, 0, ref l_U3133[3] );
                ADD_COVER_POINT( 107.80170000, -423.08900000, 19.34560000, 0, 181.28510000, 3, 0, ref l_U3133[4] );
                ADD_COVER_POINT( 105.03440000, -436.01180000, 19.34630000, 1, 88.34210000, 3, 0, ref l_U3133[5] );
                ADD_COVER_POINT( 90.99480000, -436.42370000, 19.34630000, 1, 0.00000000, 3, 0, ref l_U3133[6] );
                ADD_COVER_POINT( 94.96260000, -439.05430000, 19.34610000, 2, 270.00000000, 0, 0, ref l_U3156 );
                OPEN_SEQUENCE_TASK( ref uVar1603 );
                TASK_PLAY_ANIM( 0, "tony_cower", "missTony02", 8.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( uVar1603 );
                if (NOT (IS_CHAR_INJURED( l_U3057 )))
                {
                    SET_CHAR_COORDINATES( l_U3057, 116.15730000, -428.66890000, 30.74280000 );
                    SET_CHAR_HEADING( l_U3057, 92.95040000 );
                }
                CLEAR_SEQUENCE_TASK( uVar1603 );
                GET_GAME_TIMER( ref l_U3335 );
                SET_CREATE_RANDOM_COPS( 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U3057, 0 );
                SET_ANIM_GROUP_FOR_CHAR( l_U3057, "move_m@TONY_SCARED" );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 128, 65093, 15, 0, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 128, 65096, 15, 0, 0.00000000 );
                l_U3340 = 1;
                l_U3342 = 1;
                l_U809 = 1;
            }
        }
        break;
        case 1:
        uVar2[0] = {l_U810[0]};
        uVar2[1] = {l_U810[7]};
        uVar2[2] = {l_U810[21]};
        if (((sub_42291( ref uVar2, 2, 2, 1, 1 )) AND (sub_44583())) || (sub_60602( 1 )))
        {
            CLEAR_THIS_PRINT( "TonyEscape" );
            sub_19059( "E2T2_OKAY", ref l_U3159, 6, 1 );
            GET_GAME_TIMER( ref l_U3335 );
            sub_62352( 112.36120000, -423.59070000, 31.24780000, 270.00000000, 7, "tony_corner_left_idle", 3000 );
            l_U3331 = 1;
            l_U3171[1] = 1;
            l_U809 = 2;
        }
        else if (l_U3332)
        {
            if (NOT l_U3171[1])
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    if (sub_8646( l_U3334, 10000 ))
                    {
                        if ((g_U15811[15]) AND (NOT l_U3343))
                        {
                            sub_19059( "E2T2_REP", ref l_U3159, 6, 1 );
                            l_U3343 = 1;
                        }
                        else
                        {
                            sub_19059( "E2T2_CLEAR", ref l_U3159, 6, 1 );
                            l_U3171[1] = 1;
                        }
                    }
                }
            }
        }
        break;
        case 2:
        uVar2[0] = {l_U810[1]};
        uVar2[1] = {l_U810[2]};
        uVar2[2] = {l_U810[15]};
        uVar2[3] = {l_U810[21]};
        if ((sub_60602( 2 )) || (sub_42291( ref uVar2, 4, 4, 1, 1 )))
        {
            if (sub_42291( ref uVar2, 4, 4, 1, 1 ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_CLEAR", ref l_U3159, 6, 1 );
                    l_U3168 = 1;
                }
            }
            else
            {
                sub_62352( 107.78900000, -423.07990000, 31.23280000, 0.00000000, 7, "tony_corner_left_idle", 3000 );
                if (sub_35342( 0, 0, 0 ))
                {
                    if (NOT l_U3168)
                    {
                        sub_19059( "E2T2_CLEAR", ref l_U3159, 6, 1 );
                    }
                }
            }
            GET_GAME_TIMER( ref l_U3335 );
            l_U809 = 3;
        }
        else
        {
            sub_63084( 112.36120000, -423.59070000, 31.24780000, 270.00000000, 7, "tony_corner_left_idle", 3000 );
        }
        break;
        case 3:
        uVar2[0] = {l_U810[1]};
        uVar2[1] = {l_U810[2]};
        uVar2[2] = {l_U810[15]};
        uVar2[3] = {l_U810[21]};
        if (sub_63469())
        {
            if (sub_42291( ref uVar2, 4, 4, 1, 1 ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_OKAY", ref l_U3159, 6, 1 );
                    l_U3168 = 0;
                }
                sub_62352( 104.92020000, -429.77610000, 30.74280000, 270.00000000, 7, "tony_wall_idle", 3000 );
                l_U3341 = 0;
                l_U809 = 4;
                GET_GAME_TIMER( ref l_U3335 );
            }
            else if (sub_63740())
            {
                if (NOT l_U3341)
                {
                    sub_3591( 0 );
                    PRINT_NOW( "TonyHelp", 7500, 1 );
                    l_U3341 = 1;
                }
            }
            sub_63084( 107.78900000, -423.07990000, 31.23280000, 0.00000000, 7, "tony_corner_left_idle", 3000 );;
        }
        else if (l_U3197[0])
        {
            if (sub_35342( 0, 0, 0 ))
            {
                sub_19059( "TonyHelp", ref l_U3159, 6, 1 );
                l_U3197[0] = 0;
            }
        }
        sub_63084( 107.78900000, -423.07990000, 31.23280000, 0.00000000, 7, "tony_corner_left_idle", 3000 );;
        break;
        case 4:
        uVar2[0] = {l_U810[3]};
        uVar2[1] = {l_U810[20]};
        uVar2[2] = {l_U810[4]};
        if ((sub_63740()) || (sub_42291( ref uVar2, 3, 3, 1, 1 )))
        {
            sub_42470( ref l_U2411[0] );
            REMOVE_COVER_POINT( l_U3081[1] );
            sub_62352( 104.93910000, -435.81890000, 31.24780000, 270.00000000, 7, "tony_corner_right_idle", 3000 );
            l_U809 = 5;
            GET_GAME_TIMER( ref l_U3335 );
        }
        else
        {
            sub_63084( 104.92020000, -429.77610000, 30.74280000, 270.00000000, 7, "tony_wall_idle", 3000 );
        }
        break;
        case 5:
        uVar2[0] = {l_U810[3]};
        uVar2[1] = {l_U810[20]};
        uVar2[2] = {l_U810[22]};
        if (sub_60602( 5 ))
        {
            if (sub_42291( ref uVar2, 3, 3, 1, 1 ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_OKAY", ref l_U3159, 6, 1 );
                }
                sub_42470( ref l_U2411[0] );
                sub_62352( 97.84190000, -436.38530000, 31.24780000, 180.00000000, 7, "tony_wall_idle", 1000 );
                l_U3274 = {104.93910000, -435.81890000, 31.24780000};
                l_U3277 = 270.00000000;
                l_U3278 = "tony_corner_right_idle";
                l_U809 = 6;
                GET_GAME_TIMER( ref l_U3335 );
            }
            else
            {
                sub_63084( 104.93910000, -435.81890000, 31.24780000, 270.00000000, 7, "tony_corner_right_idle", 3000 );
            }
        }
        else
        {
            sub_63084( 104.93910000, -435.81890000, 31.24780000, 270.00000000, 7, "tony_corner_right_idle", 3000 );
        }
        break;
        case 6:
        uVar2[0] = {l_U810[5]};
        if (sub_60602( 6 ))
        {
            sub_62352( 90.97480000, -436.42410000, 31.24780000, 180.00000000, 7, "tony_corner_right_idle", 1000 );
            l_U809 = 7;
            GET_GAME_TIMER( ref l_U3335 );
        }
        else if (NOT l_U3171[6])
        {
            if (sub_35342( 0, 0, 0 ))
            {
                sub_19059( "E2T2_CLEAR", ref l_U3159, 6, 1 );
                l_U3168 = 1;
                l_U3171[6] = 1;
            }
        }
        sub_63084( 97.84190000, -436.38530000, 31.24780000, 180.00000000, 7, "tony_wall_idle", 1000 );;
        break;
        case 7:
        if (sub_60602( 7 ))
        {
            sub_62352( 90.48890000, -430.02260000, 31.24280000, 0.00000000, 7, "tony_cower", 4000 );
            l_U3274 = {90.95850000, -436.40580000, 31.24780000};
            l_U3277 = 180.00000000;
            l_U3278 = "tony_corner_right_idle";
            l_U809 = 8;
            GET_GAME_TIMER( ref l_U3335 );
        }
        else
        {
            sub_63084( 90.97480000, -436.42410000, 31.24780000, 180.00000000, 7, "tony_corner_right_idle", 1000 );
        }
        break;
        case 8:
        uVar2[0] = {l_U810[5]};
        if ((sub_60602( 7 )) || (sub_42291( ref uVar2, 1, 1, 1, 1 )))
        {
            l_U809 = 9;
            GET_GAME_TIMER( ref l_U3335 );
        }
        else
        {
            sub_63084( 90.48890000, -430.02260000, 31.24280000, 0.00000000, 7, "tony_cower", 4000 );
        }
        break;
        case 9:
        uVar2[0] = {l_U810[5]};
        uVar2[1] = {l_U810[24]};
        if (sub_60602( 9 ))
        {
            if (sub_42291( ref uVar2, 2, 2, 1, 1 ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_COMDN", ref l_U3159, 6, 1 );
                }
                sub_62352( 86.93820000, -428.09160000, 25.55200000, 270.00000000, 7, "tony_wall_idle", 4000 );
                l_U3341 = 0;
                l_U809 = 10;
                GET_GAME_TIMER( ref l_U3335 );
            }
            else if (sub_60602( 10 ))
            {
                if (NOT l_U3341)
                {
                    sub_3591( 0 );
                    PRINT_NOW( "TonyHelp", 7500, 1 );
                    l_U3341 = 1;
                }
                sub_63084( 90.48890000, -430.02260000, 31.24280000, 0.00000000, 7, "tony_cower", 4000 );
            }
        }
        else
        {
            sub_63084( 90.48890000, -430.02260000, 31.24280000, 0.00000000, 7, "tony_cower", 4000 );
        }
        break;
        case 10:
        uVar2[0] = {l_U810[12]};
        if ((sub_60602( 10 )) || (sub_42291( ref uVar2, 1, 1, 1, 1 )))
        {
            sub_42470( ref l_U2411[0] );
            sub_62352( 90.44260000, -435.90430000, 25.54950000, 90.00000000, 7, "tony_corner_left_idle", 4000 );
            if (NOT l_U3171[10])
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_CLEAR", ref l_U3159, 6, 1 );
                    l_U3171[10] = 1;
                }
            }
            l_U809 = 11;
            GET_GAME_TIMER( ref l_U3335 );
        }
        else if (NOT l_U3171[10])
        {
            uVar2[0] = {l_U810[6]};
            uVar2[1] = {l_U810[9]};
            uVar2[2] = {l_U810[8]};
            uVar2[3] = {l_U810[10]};
            if (sub_42291( ref uVar2, 4, 4, 1, 1 ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_CLEAR", ref l_U3159, 6, 1 );
                    l_U3171[10] = 1;
                }
            }
        }
        sub_63084( 86.93820000, -428.09160000, 25.55200000, 270.00000000, 7, "tony_wall_idle", 4000 );;
        break;
        case 11:
        uVar2[0] = {l_U810[8]};
        uVar2[1] = {l_U810[9]};
        uVar2[2] = {l_U810[10]};
        if (sub_60602( 11 ))
        {
            if (sub_42291( ref uVar2, 3, 3, 1, 1 ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_OKAY", ref l_U3159, 6, 1 );
                }
                sub_42470( ref l_U2411[0] );
                sub_62352( 100.97310000, -436.42960000, 25.54940000, 180.00000000, 10, "tony_wall_idle", 6000 );
                l_U3274 = {90.22760000, -435.87460000, 25.54940000};
                l_U3277 = 90.00000000;
                l_U3278 = "tony_corner_left_idle";
                l_U3341 = 0;
                l_U809 = 12;
                GET_GAME_TIMER( ref l_U3335 );
            }
            else if (sub_60602( 12 ))
            {
                if (NOT l_U3341)
                {
                    sub_3591( 0 );
                    PRINT_NOW( "TonyHelp", 7500, 1 );
                    l_U3341 = 1;
                }
            }
            sub_63084( 90.44260000, -435.90430000, 25.54950000, 90.00000000, 7, "tony_corner_left_idle", 4000 );;
        }
        else if (l_U3197[1])
        {
            if (sub_35342( 0, 0, 0 ))
            {
                sub_19059( "E2T2_CHAT2", ref l_U3159, 6, 1 );
                l_U3197[1] = 0;
            }
        }
        sub_63084( 90.44260000, -435.90430000, 25.54950000, 90.00000000, 7, "tony_corner_left_idle", 4000 );;
        break;
        case 12:
        uVar2[0] = {l_U810[13]};
        uVar2[1] = {l_U810[14]};
        uVar2[2] = {l_U810[16]};
        if ((sub_42291( ref uVar2, 3, 3, 1, 1 )) || (sub_60602( 12 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.77160000, -434.12990000, 26.04920000, 2.00000000, 1.00000000, 2.00000000, 0 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U810[12]._fU0 )))
                {
                    if (sub_35342( 0, 0, 0 ))
                    {
                        sub_19059( "E2T2_CLEAR", ref l_U3159, 6, 1 );
                        l_U3168 = 1;
                    }
                }
            }
            sub_42470( ref l_U2411[0] );
            sub_62352( 104.47500000, -436.38740000, 25.54950000, 180.00000000, 7, "tony_corner_left_idle", 6000 );
            GET_GAME_TIMER( ref l_U3335 );
            l_U809 = 13;
        }
        else
        {
            sub_63084( 100.97310000, -436.42960000, 25.54940000, 180.00000000, 10, "tony_wall_idle", 6000 );
        }
        break;
        case 13:
        uVar2[0] = {l_U810[12]};
        uVar2[1] = {l_U810[35]};
        if (sub_60602( 13 ))
        {
            if (sub_42291( ref uVar2, 2, 2, 1, 1 ))
            {
                sub_62352( 106.92290000, -423.85480000, 25.64450000, 270.00000000, 7, "tony_cower", 4000 );
                l_U3274 = {104.47500000, -436.38740000, 25.54950000};
                l_U3277 = 180.00000000;
                l_U3278 = "tony_corner_left_idle";
                l_U3341 = 0;
                l_U809 = 14;
                GET_GAME_TIMER( ref l_U3335 );
            }
            else if (sub_60602( 14 ))
            {
                if (NOT l_U3341)
                {
                    sub_3591( 0 );
                    PRINT_NOW( "TonyHelp", 7500, 1 );
                    l_U3341 = 1;
                }
            }
            sub_63084( 104.47500000, -436.38740000, 25.54950000, 180.00000000, 7, "tony_corner_left_idle", 6000 );;
        }
        else
        {
            sub_63084( 104.47500000, -436.38740000, 25.54950000, 180.00000000, 7, "tony_corner_left_idle", 6000 );
        }
        break;
        case 14:
        uVar2[0] = {l_U810[13]};
        uVar2[1] = {l_U810[16]};
        if ((sub_60602( 14 )) || ((sub_48077()) AND (sub_42291( ref uVar2, 2, 2, 1, 1 ))))
        {
            if (NOT (IS_CHAR_DEAD( l_U2411[0]._fU0 )))
            {
                REMOVE_CHAR_FROM_GROUP( l_U2411[0]._fU0 );
            }
            sub_42470( ref l_U2411[0] );
            sub_19059( "E2T2_COMDN", ref l_U3159, 6, 1 );
            sub_62352( 107.82510000, -423.08910000, 19.34780000, 0.00000000, 7, "tony_corner_left_idle", 4000 );
            GET_GAME_TIMER( ref l_U3335 );
            l_U809 = 15;
        }
        else
        {
            sub_63084( 106.92290000, -423.85480000, 25.64450000, 270.00000000, 7, "tony_cower", 4000 );
        }
        break;
        case 15:
        uVar2[0] = {l_U810[13]};
        uVar2[1] = {l_U810[16]};
        uVar2[2] = {l_U810[14]};
        if (((sub_60602( 15 )) || (sub_42291( ref uVar2, 3, 3, 1, 1 ))) || ((sub_48077()) AND (sub_42291( ref uVar2, 2, 2, 1, 1 ))))
        {
            sub_62352( 107.82510000, -423.08910000, 19.34780000, 0.00000000, 7, "tony_corner_left_idle", 4000 );
            GET_GAME_TIMER( ref l_U3335 );
            l_U809 = 16;
        }
        else
        {
            sub_63084( 107.82510000, -423.08910000, 19.34780000, 0.00000000, 7, "tony_corner_left_idle", 4000 );
        }
        break;
        case 16:
        uVar2[0] = {l_U810[13]};
        uVar2[1] = {l_U810[16]};
        uVar2[2] = {l_U810[14]};
        uVar2[3] = {l_U810[25]};
        if ((sub_60602( 16 )) || (sub_42291( ref uVar2, 4, 4, 1, 1 )))
        {
            if (sub_35342( 0, 0, 0 ))
            {
                sub_19059( "E2T2_CLEAR", ref l_U3159, 6, 1 );
            }
            sub_42470( ref l_U2411[0] );
            sub_62352( 108.50540000, -427.12990000, 19.90000000, 90.00000000, 11, "tony_wall_idle", 7000 );
            GET_GAME_TIMER( ref l_U3335 );
            l_U809 = 23;
        }
        else
        {
            sub_63084( 107.82510000, -423.08910000, 19.34780000, 0.00000000, 7, "tony_corner_left_idle", 4000 );
        }
        break;
        case 23:
        uVar2[0] = {l_U810[13]};
        uVar2[1] = {l_U810[16]};
        uVar2[2] = {l_U810[14]};
        uVar2[3] = {l_U810[29]};
        uVar2[4] = {l_U810[30]};
        uVar2[5] = {l_U810[25]};
        uVar2[6] = {l_U810[26]};
        if ((((sub_42291( ref uVar2, 5, 5, 1, 1 )) AND (sub_68231())) || (sub_42291( ref uVar2, 7, 7, 1, 1 ))) || (sub_60602( 18 )))
        {
            sub_62352( 103.41430000, -436.45030000, 19.85120000, 180.00000000, 12, "tony_wall_idle", 7000 );
            GET_GAME_TIMER( ref l_U3335 );
            l_U809 = 24;
            if (sub_35342( 0, 0, 0 ))
            {
                sub_19059( "E2T2_OKAY", ref l_U3159, 6, 1 );
                l_U3170 = 1;
            }
        }
        else if (l_U3197[5])
        {
            if (sub_35342( 0, 0, 0 ))
            {
                sub_19059( "E2T2_CHAT5", ref l_U3159, 6, 1 );
                l_U3197[5] = 0;
            }
        }
        sub_63084( 108.50540000, -427.12990000, 19.90000000, 90.00000000, 11, "tony_wall_idle", 7000 );;
        sub_68562();
        break;
        case 24:
        uVar2[0] = {l_U810[13]};
        uVar2[1] = {l_U810[16]};
        uVar2[2] = {l_U810[14]};
        uVar2[3] = {l_U810[29]};
        uVar2[4] = {l_U810[30]};
        uVar2[5] = {l_U810[25]};
        uVar2[6] = {l_U810[26]};
        if ((((sub_42291( ref uVar2, 5, 5, 1, 1 )) AND (sub_68562())) || (sub_42291( ref uVar2, 7, 7, 1, 1 ))) || (sub_60602( 18 )))
        {
            l_U809 = 17;
            if (NOT l_U3170)
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_OKAY", ref l_U3159, 6, 1 );
                    l_U3170 = 1;
                }
            }
            l_U3170 = 0;
        }
        else if (l_U3197[5])
        {
            if (sub_35342( 0, 0, 0 ))
            {
                sub_19059( "E2T2_CHAT5", ref l_U3159, 6, 1 );
                l_U3197[5] = 0;
            }
        }
        sub_63084( 103.41430000, -436.45030000, 19.85120000, 180.00000000, 12, "tony_wall_idle", 7000 );
        break;
        case 17:
        uVar2[0] = {l_U810[13]};
        uVar2[1] = {l_U810[14]};
        uVar2[2] = {l_U810[16]};
        uVar2[3] = {l_U810[25]};
        uVar2[4] = {l_U810[26]};
        if ((sub_49291()) || (sub_42291( ref uVar2, 5, 5, 1, 1 )))
        {
            sub_62352( 94.33730000, -436.43210000, 19.85120000, 180.00000000, 12, "tony_wall_idle", 4000 );
            uVar2[0] = {l_U810[25]};
            uVar2[1] = {l_U810[26]};
            if (NOT (sub_42291( ref uVar2, 2, 2, 1, 1 )))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_MORE", ref l_U3159, 6, 1 );
                }
            }
            GET_GAME_TIMER( ref l_U3335 );
            l_U809 = 18;
        }
        else
        {
            sub_63084( 103.41430000, -436.45030000, 19.85120000, 180.00000000, 12, "tony_wall_idle", 7000 );
        }
        break;
        case 18:
        uVar2[0] = {l_U810[17]};
        uVar2[1] = {l_U810[18]};
        uVar2[2] = {l_U810[19]};
        if ((sub_60602( 18 )) || (sub_42291( ref uVar2, 3, 3, 1, 1 )))
        {
            sub_42470( ref l_U2411[0] );
            sub_62352( 90.38220000, -431.62330000, 19.82610000, 0.00000000, 7, "tony_cower", 4000 );
            GET_GAME_TIMER( ref l_U3335 );
            l_U809 = 19;
        }
        else if (sub_69565())
        {
            ;
        }
        sub_63084( 94.33730000, -436.43210000, 19.85120000, 180.00000000, 12, "tony_wall_idle", 4000 );;
        break;
        case 19:
        uVar2[0] = {l_U810[17]};
        uVar2[1] = {l_U810[27]};
        if (((sub_60602( 19 )) || (sub_50650())) || (sub_42291( ref uVar2, 2, 2, 1, 1 )))
        {
            sub_19059( "E2T2_OKAY", ref l_U3159, 6, 1 );
            if (NOT (IS_CHAR_DEAD( l_U2411[0]._fU0 )))
            {
                REMOVE_CHAR_FROM_GROUP( l_U2411[0]._fU0 );
            }
            sub_62352( 90.41040000, -430.57240000, 14.41770000, 90.00000000, 11, "tony_wall_idle", 3000 );
            GET_GAME_TIMER( ref l_U3335 );
            l_U809 = 20;
        }
        else
        {
            sub_63084( 90.38220000, -431.62330000, 19.82610000, 0.00000000, 7, "tony_cower", 4000 );
        }
        break;
        case 20:
        uVar2[0] = {l_U810[17]};
        uVar2[1] = {l_U810[18]};
        uVar2[2] = {l_U810[19]};
        if (((sub_50805()) || (sub_60602( 20 ))) || (sub_42291( ref uVar2, 3, 3, 1, 1 )))
        {
            sub_62352( 90.44540000, -430.57810000, 13.91270000, 90.00000000, 7, "tony_wall_idle", 3000 );
            l_U809 = 21;
        }
        else
        {
            sub_63084( 90.41040000, -430.57240000, 14.41770000, 90.00000000, 11, "tony_wall_idle", 3000 );
            if (NOT l_U3171[20])
            {
                if (sub_50650())
                {
                    if (sub_35342( 0, 0, 0 ))
                    {
                        sub_19059( "E2T2_CLEAR", ref l_U3159, 6, 1 );
                        l_U3171[20] = 1;
                    }
                }
            }
            else if (l_U3197[4])
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_CHAT4", ref l_U3159, 6, 1 );
                    l_U3197[4] = 0;
                }
            }
        }
        break;
        case 21:
        uVar2[0] = {l_U810[17]};
        uVar2[1] = {l_U810[18]};
        uVar2[2] = {l_U810[19]};
        uVar2[3] = {l_U810[27]};
        uVar2[4] = {l_U810[34]};
        if (sub_50946())
        {
            if ((sub_42291( ref uVar2, 5, 5, 1, 1 )) || (sub_70436()))
            {
                sub_62352( 96.97420000, -435.93940000, 14.41770000, 90.00000000, 7, "tony_corner_right_idle", 7000 );
                l_U3274 = {90.44540000, -430.57810000, 13.91270000};
                l_U3277 = 90.00000000;
                l_U3278 = "tony_wall_idle";
                GET_GAME_TIMER( ref l_U3335 );
                l_U809 = 22;
            }
            else
            {
                sub_63084( 90.44540000, -430.57810000, 13.91270000, 90.00000000, 7, "tony_wall_idle", 3000 );
            }
        }
        else
        {
            sub_63084( 90.44540000, -430.57810000, 13.91270000, 90.00000000, 7, "tony_wall_idle", 3000 );
            if (l_U3197[4])
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_CHAT4", ref l_U3159, 6, 1 );
                    l_U3197[4] = 0;
                }
            }
        }
        break;
        case 22:
        uVar2[0] = {l_U810[32]};
        uVar2[1] = {l_U810[33]};
        GET_KEY_FOR_CHAR_IN_ROOM( sub_3731(), ref iVar1604 );
        if (sub_70436())
        {
            if ((sub_42291( ref uVar2, 2, 2, 1, 1 )) || (iVar1604 == 0))
            {
                sub_42470( ref l_U2411[0] );
                sub_42470( ref l_U2411[0] );
                l_U2411[0]._fU68 = {129.86800000, -441.41980000, 13.76440000};
                l_U2411[0]._fU24 = 0;
                l_U2411[0]._fU4 = 1;
                l_U2411[0]._fU20 = 1;
                if (sub_42291( ref uVar2, 2, 2, 1, 1 ))
                {
                    if (sub_35342( 0, 0, 0 ))
                    {
                        sub_19059( "E2T2_OKAY", ref l_U3159, 6, 1 );
                    }
                }
                GET_GAME_TIMER( ref l_U3335 );
                GET_GAME_TIMER( ref l_U3338 );
                l_U809 = 25;
            }
            else
            {
                sub_63084( 96.97420000, -435.93940000, 14.41770000, 90.00000000, 7, "tony_corner_right_idle", 7000 );
            }
        }
        else
        {
            sub_63084( 96.97420000, -435.93940000, 14.41770000, 90.00000000, 7, "tony_corner_right_idle", 7000 );
        }
        break;
        case 25:
        if (NOT (IS_CHAR_DEAD( l_U3057 )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( l_U3057, ref iVar1605 );
            if (iVar1605 == 0)
            {
                if (sub_43835( l_U3057, 1, 0 ))
                {
                    sub_42470( ref l_U2411[0] );
                    if (NOT (IS_GROUP_MEMBER( l_U3057, sub_4664() )))
                    {
                        ;
                    }
                    l_U809 = 26;
                }
                else if (sub_8646( l_U3338, 40000 ))
                {
                    l_U809 = 22;
                }
            }
            else if (sub_8646( l_U3338, 40000 ))
            {
                l_U809 = 22;
            }
        }
        break;
        case 26: break;
    }
    if (l_U3333)
    {
        if (l_U3335 != 0)
        {
            if (NOT (IS_CHAR_SHOOTING( sub_3731() )))
            {
                if (l_U3171[1])
                {
                    if (sub_8646( l_U3335, 15000 ))
                    {
                        if (sub_71476())
                        {
                            if (sub_35342( 0, 0, 0 ))
                            {
                                if ((l_U3336 mod 2) == 0)
                                {
                                    sub_19059( "E2T2_LWAIT", ref l_U3159, 6, 1 );
                                    GET_GAME_TIMER( ref l_U3335 );
                                    l_U3336++;
                                }
                                else if (NOT l_U3197[3])
                                {
                                    sub_19059( "E2T2_CHAT3", ref l_U3159, 6, 1 );
                                    l_U3197[3] = 1;
                                }
                                else if (NOT l_U3197[6])
                                {
                                    sub_19059( "E2T2_CHAT6", ref l_U3159, 6, 1 );
                                    l_U3197[6] = 1;
                                }
                                else if (NOT l_U3197[7])
                                {
                                    sub_19059( "E2T2_CHAT7", ref l_U3159, 6, 1 );
                                    l_U3197[7] = 1;
                                }
                                else if (NOT l_U3197[8])
                                {
                                    sub_19059( "E2T2_CHAT7", ref l_U3159, 6, 1 );
                                    l_U3197[8] = 1;
                                }
                                else
                                {
                                    sub_19059( "E2T2_LWAIT", ref l_U3159, 6, 1 );
                                };;;;
                                GET_GAME_TIMER( ref l_U3335 );
                                l_U3336++;;
                            }
                        }
                    }
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U3335 );
            }
        }
    }
    if (l_U3037)
    {
        if ((l_U3344 == 0) || (sub_8646( l_U3344, 10000 )))
        {
            if (IS_CHAR_SHOOTING( sub_3731() ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    if ((l_U3038 mod 2) == 0)
                    {
                        sub_19059( "E2T2_LATCK", ref l_U3159, 6, 1 );
                    }
                    else
                    {
                        SAY_AMBIENT_SPEECH( sub_3731(), "SHOOT", 1, 1, 2 );
                    }
                    l_U3038++;
                    GET_GAME_TIMER( ref l_U3344 );
                }
            }
        }
    }
    if (l_U3342)
    {
        if (NOT (IS_CHAR_INJURED( l_U3057 )))
        {
            if ((l_U3337 == 0) || (sub_8646( l_U3337, 12000 )))
            {
                if (sub_35342( 1, 1, 0 ))
                {
                    if (NOT sub_72153())
                    {
                        if (((IS_CHAR_PLAYING_ANIM( l_U3057, "misstony02", "tony_corner_left_idle" )) || (IS_CHAR_PLAYING_ANIM( l_U3057, "misstony02", "tony_corner_right_idle" ))) || (IS_CHAR_PLAYING_ANIM( l_U3057, "misstony02", "tony_Wall_idle" )))
                        {
                            sub_19059( "E2T2_WIMP", ref l_U3159, 6, 1 );
                            GET_GAME_TIMER( ref l_U3337 );
                        }
                    }
                }
            }
        }
    }
    if (l_U3331)
    {
        sub_72395( ref l_U2452 );
    }
    if (l_U3340)
    {
        sub_75404();
    }
    return;
}

void sub_60602(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        if (NOT l_U3243[1])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 108.44310000, -422.11750000, 31.74790000, 1.00000000, 2.00000000, 2.00000000, 0 ))
            {
                l_U3243[1] = 1;
            }
        }
        break;
        case 2:
        if (NOT l_U3243[2])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.77770000, -426.43250000, 31.74800000, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                l_U3243[2] = 1;
            }
        }
        break;
        case 5:
        if (NOT l_U3243[5])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 92.43140000, -438.36090000, 31.74800000, 1.00000000, 10.00000000, 2.00000000, 0 ))
            {
                l_U3243[5] = 1;
            }
        }
        break;
        case 6:
        if (NOT l_U3243[6])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.77920000, -432.94070000, 31.74800000, 2.00000000, 3.00000000, 2.00000000, 0 ))
            {
                l_U3243[6] = 1;
            }
        }
        break;
        case 7:
        if (NOT l_U3243[7])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.66160000, -427.88950000, 31.74930000, 2.00000000, 1.00000000, 2.00000000, 0 ))
            {
                l_U3243[7] = 1;
            }
        }
        break;
        case 8:
        if (NOT l_U3243[8])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 89.06380000, -426.84550000, 26.05230000, 3.00000000, 2.00000000, 2.00000000, 0 ))
            {
                l_U3243[8] = 1;
            }
        }
        break;
        case 9:
        if (NOT l_U3243[9])
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.69090000, -431.95850000, 26.04920000, 2.00000000, 1.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 87.70890000, -427.79890000, 26.05240000, 2.00000000, 1.00000000, 2.00000000, 0 )))
            {
                l_U3243[9] = 1;
            }
        }
        break;
        case 10:
        if (NOT l_U3243[10])
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 94.15210000, -438.15610000, 26.04920000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 89.76860000, -439.25850000, 26.04930000, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                l_U3243[10] = 1;
            }
        }
        break;
        case 11:
        if (NOT l_U3243[11])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 104.44430000, -438.24940000, 26.04920000, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                l_U3243[11] = 1;
            }
        }
        break;
        case 12:
        if (NOT l_U3243[12])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.77160000, -434.12990000, 26.04920000, 2.00000000, 1.00000000, 2.00000000, 0 ))
            {
                l_U3243[12] = 1;
            }
        }
        break;
        case 13:
        if (NOT l_U3243[13])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.86560000, -422.38220000, 26.05070000, 1.00000000, 1.00000000, 2.00000000, 0 ))
            {
                l_U3243[13] = 1;
            }
        }
        break;
        case 14:
        if (NOT l_U3243[14])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.78870000, -426.15380000, 20.35120000, 2.00000000, 1.00000000, 2.00000000, 0 ))
            {
                l_U3243[14] = 1;
            }
        }
        break;
        case 15:
        if (NOT l_U3243[15])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.78870000, -426.15380000, 20.35120000, 2.00000000, 1.00000000, 2.00000000, 0 ))
            {
                l_U3243[15] = 1;
            }
        }
        break;
        case 16:
        if (NOT l_U3243[16])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.75260000, -436.85890000, 20.35110000, 2.00000000, 1.00000000, 2.00000000, 0 ))
            {
                l_U3243[16] = 1;
            }
        }
        break;
        case 18:
        if (NOT l_U3243[18])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.66820000, -428.03770000, 20.35220000, 2.00000000, 1.00000000, 2.00000000, 0 ))
            {
                l_U3243[18] = 1;
            }
        }
        break;
        case 19:
        if (NOT l_U3243[18])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.72630000, -431.65700000, 14.91780000, 2.00000000, 1.00000000, 2.00000000, 0 ))
            {
                l_U3243[18] = 1;
            }
        }
        break;
        case 20:
        if (NOT l_U3243[20])
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 88.63160000, -435.56840000, 14.91780000, 1.00000000, 1.00000000, 2.00000000, 0 ))
            {
                l_U3243[20] = 1;
            }
        }
        break;
        default:
        SCRIPT_ASSERT( "LOCATED_PLAYER_FOR_TONY_STAGE...didn't find case match!" );
        break;
    }
    return l_U3243[uParam0];
}

void sub_62352(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_42470( ref l_U2411[0] );
    l_U2411[0]._fU68 = {uParam0};
    l_U2411[0]._fU144 = uParam3;
    l_U2411[0]._fU140 = uParam5;
    l_U2411[0]._fU24 = uParam4;
    l_U2411[0]._fU136 = l_U3033;
    l_U2411[0]._fU80 = 4;
    l_U2411[0]._fU4 = 1;
    l_U2411[0]._fU20 = 1;
    l_U2411[0]._fU148 = uParam6;
    l_U2411[0]._fU156 = 0;
    GET_GAME_TIMER( ref l_U2411[0]._fU152 );
    return;
}

void sub_63084(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    unknown uVar9;

    if (NOT (IS_CHAR_INJURED( l_U3057 )))
    {
        if (NOT l_U2411[0]._fU156)
        {
            if (sub_63145( l_U2411[0]._fU140 ))
            {
                l_U2411[0]._fU156 = 1;
            }
        }
        else if (NOT (sub_63145( l_U2411[0]._fU140 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U3057, 29, ref uVar9 );
            if (NOT (IS_PED_RAGDOLL( l_U3057 )))
            {
                if ((l_U3330 != 0) AND (sub_8646( l_U3330, 4000 )))
                {
                    sub_62352( uParam0, uParam3, uParam4, uParam5, uParam6 );
                    l_U3330 = 0;
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U3330 );
            }
        }
    }
    return;
}

int sub_63145(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( l_U3057 )))
    {
        if (IS_CHAR_PLAYING_ANIM( l_U3057, "MissTony02", uParam0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_63469()
{
    if (NOT l_U3226)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 106.65750000, -436.56630000, 31.74800000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 101.25170000, -437.50280000, 31.74780000, 4.00000000, 2.00000000, 2.00000000, 0 )))
        {
            l_U3226 = 1;
        }
    }
    return l_U3226;
}

void sub_63740()
{
    if (NOT l_U3227)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 97.48990000, -438.08150000, 31.74800000, 7.00000000, 2.00000000, 2.00000000, 0 ))
        {
            l_U3227 = 1;
        }
    }
    return l_U3227;
}

void sub_68231()
{
    if (NOT l_U3231)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 99.55470000, -437.67300000, 20.35110000, 1.00000000, 3.00000000, 2.00000000, 0 ))
        {
            l_U3231 = 1;
        }
    }
    return l_U3231;
}

void sub_68562()
{
    if (NOT l_U3232)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 94.32290000, -437.80520000, 20.35110000, 1.00000000, 14.00000000, 2.00000000, 0 ))
        {
            l_U3232 = 1;
        }
    }
    return l_U3232;
}

int sub_69565()
{
    int I;

    for ( I = 0; I < l_U2452; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U2452[I]._fU0 )))
        {
            return 0;
        }
    }
    return 1;
}

void sub_70436()
{
    if (NOT l_U3239)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 116.88620000, -441.55350000, 14.91780000, 2.00000000, 3.00000000, 2.00000000, 0 ))
        {
            l_U3239 = 1;
        }
    }
    return l_U3239;
}

int sub_71476()
{
    int I;

    for ( I = 0; I < l_U810; I++ )
    {
        if (l_U810[I]._fU4)
        {
            if (NOT (IS_CHAR_INJURED( l_U810[I]._fU0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_72153()
{
    if ((l_U3318) AND (NOT l_U3317))
    {
        return 1;
    }
    return 0;
}

void sub_72395(unknown uParam0)
{
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int iVar10;

    for ( I = 0; I <= 0; I++ )
    {
        if (l_U2411[I]._fU4)
        {
            if (NOT (IS_CHAR_INJURED( l_U2411[I]._fU0 )))
            {
                if (NOT l_U2411[I]._fU8)
                {
                    SET_CHAR_DECISION_MAKER( l_U2411[I]._fU0, l_U3034 );
                    switch (l_U2411[I]._fU24)
                    {
                        case 0:
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U2411[I]._fU68._fU0, l_U2411[I]._fU68._fU4, l_U2411[I]._fU68._fU8, 3, -1, 0.50000000 );
                        if (l_U2411[I]._fU20)
                        {
                            ;
                        }
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        break;
                        case 5:
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U2411[I]._fU68._fU0, l_U2411[I]._fU68._fU4, l_U2411[I]._fU68._fU8, 3, -1, 0.50000000 );
                        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, l_U2411[I]._fU68, -2 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        break;
                        case 7:
                        uVar4 = {l_U2411[I]._fU68};
                        uVar7 = l_U2411[I]._fU144;
                        uVar8 = l_U2411[I]._fU140;
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD_HDG_RATE( 0, uVar4._fU0, uVar4._fU4, uVar4._fU8, 3, -1, 0.50000000, uVar7, 1000.00000000 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, uVar8, "misstony02", 8.00000000, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        break;
                        case 8:
                        uVar4 = {l_U2411[I]._fU68};
                        uVar7 = l_U2411[I]._fU144;
                        uVar8 = l_U2411[I]._fU140;
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        if (NOT (sub_58430( uVar4, 0.00000000, 0.00000000, 0.00000000 )))
                        {
                            TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD_HDG_RATE( 0, uVar4._fU0, uVar4._fU4, uVar4._fU8, 3, -1, 0.50000000, uVar7, 1000.00000000 );
                        }
                        else if (NOT (IS_CHAR_PLAYING_ANIM( l_U2411[I]._fU0, "misstony02", "tony_corner_left_idle" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "tony_corner_left_idle", "misstony02", 8.00000000, 0, 0, 0, 0, 0 );
                        }
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "tony_corner_left_Turn", "misstony02", 8.00000000, 0, 11 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "wall_walk", "misstony02", 8.00000000, l_U2411[I]._fU148, 3 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "tony_Wall_idle", "misstony02", 8.00000000, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        break;
                        case 9:
                        uVar4 = {l_U2411[I]._fU68};
                        uVar7 = l_U2411[I]._fU144;
                        uVar8 = l_U2411[I]._fU140;
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        if (sub_73454( l_U3274, l_U3277, l_U3278 ))
                        {
                            if (NOT (IS_CHAR_PLAYING_ANIM( l_U2411[I]._fU0, "misstony02", "tony_corner_right_idle" )))
                            {
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "tony_corner_right_idle", "misstony02", 8.00000000, 0, 0, 0, 0, 0 );
                            }
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "tony_corner_right_Turn", "misstony02", 8.00000000, 0, 11 );
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "wall_walk_right", "misstony02", 8.00000000, l_U2411[I]._fU148, 3 );
                        }
                        TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD_HDG_RATE( 0, uVar4._fU0, uVar4._fU4, uVar4._fU8, 3, -1, 0.50000000, uVar7, 1000.00000000 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, uVar8, "misstony02", 8.00000000, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        break;
                        case 10:
                        uVar4 = {l_U2411[I]._fU68};
                        uVar7 = l_U2411[I]._fU144;
                        uVar8 = l_U2411[I]._fU140;
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        if (sub_73454( l_U3274, l_U3277, l_U3278 ))
                        {
                            if (NOT (IS_CHAR_PLAYING_ANIM( l_U2411[I]._fU0, "misstony02", "tony_corner_left_idle" )))
                            {
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "tony_corner_left_idle", "misstony02", 8.00000000, 0, 0, 0, 0, 0 );
                            }
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "tony_corner_left_Turn", "misstony02", 8.00000000, 0, 11 );
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "wall_walk", "misstony02", 8.00000000, l_U2411[I]._fU148, 3 );
                        }
                        TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD_HDG_RATE( 0, uVar4._fU0, uVar4._fU4, uVar4._fU8, 3, -1, 0.50000000, uVar7, 1000.00000000 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, uVar8, "misstony02", 8.00000000, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        break;
                        case 11:
                        uVar4 = {l_U2411[I]._fU68};
                        uVar7 = l_U2411[I]._fU144;
                        uVar8 = l_U2411[I]._fU140;
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD_HDG_RATE( 0, uVar4._fU0, uVar4._fU4, uVar4._fU8, 3, -1, 0.50000000, uVar7, 1000.00000000 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "wall_walk", "misstony02", 8.00000000, l_U2411[I]._fU148, 3 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, uVar8, "misstony02", 8.00000000, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        break;
                        case 12:
                        uVar4 = {l_U2411[I]._fU68};
                        uVar7 = l_U2411[I]._fU144;
                        uVar8 = l_U2411[I]._fU140;
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD_HDG_RATE( 0, uVar4._fU0, uVar4._fU4, uVar4._fU8, 3, -1, 0.50000000, uVar7, 1000.00000000 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "wall_walk_right", "misstony02", 8.00000000, l_U2411[I]._fU148, 3 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, uVar8, "misstony02", 8.00000000, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        break;
                    }
                    if (NOT (IS_CHAR_INJURED( l_U2411[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U2411[I]._fU0, uVar9 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar9 );
                    l_U2411[I]._fU8 = 1;
                }
                else if ((NOT l_U2411[I]._fU16) || (l_U2411[I]._fU12))
                {
                    if (NOT l_U2411[I]._fU20)
                    {
                        if (sub_43835( l_U2411[I]._fU0, 1, 0 ))
                        {
                            SET_CHAR_DECISION_MAKER( l_U2411[I]._fU0, l_U3035 );
                            SET_CHAR_RELATIONSHIP( l_U2411[I]._fU0, 5, 24 );
                            SET_CHAR_RELATIONSHIP( l_U2411[I]._fU0, 1, 0 );
                            sub_43940( I, "Setting combat..." );
                            SET_COMBAT_DECISION_MAKER( l_U2411[I]._fU0, l_U2411[I]._fU136 );
                            sub_57041( ref l_U2411[I], l_U2411[I]._fU80 );
                            iVar10 = sub_75084( uParam0 );
                            if (iVar10 != -1)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar9 );
                                if (NOT (IS_CHAR_DEAD( (uParam0^)[iVar10]._fU0 )))
                                {
                                    TASK_COMBAT( 0, (uParam0^)[iVar10]._fU0 );
                                }
                                CLOSE_SEQUENCE_TASK( uVar9 );
                            }
                            else
                            {
                                OPEN_SEQUENCE_TASK( ref uVar9 );
                                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 35.00000000 );
                                CLOSE_SEQUENCE_TASK( uVar9 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U2411[I]._fU0 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U2411[I]._fU0, uVar9 );
                            }
                            CLEAR_SEQUENCE_TASK( uVar9 );
                            l_U2411[I]._fU16 = 1;
                            l_U2411[I]._fU12 = 0;
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_73454(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    if (NOT (IS_CHAR_INJURED( l_U2411[0]._fU0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U2411[0]._fU0, uParam0._fU0, uParam0._fU4, uParam0._fU8, 1.50000000, 1.50000000, 1.50000000, 0 ))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U2411[0]._fU0, "misstony02", uParam4 ))
            {
                SET_CHAR_HEADING( l_U2411[0]._fU0, uParam3 );
                return 1;
            }
            else
            {
                sub_73611( uParam4 );
                l_U3208 = 0;
            }
        }
    }
    return 0;
}

void sub_73611(unknown uParam0)
{
    return;
}

int sub_75084(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result < (uParam0^); Result++ )
    {
        sub_43940( Result, "Index..." );
        if (NOT (IS_CHAR_INJURED( (uParam0^)[Result]._fU0 )))
        {
            return Result;
        }
    }
    return -1;
}

void sub_75404()
{
    if (NOT (IS_CHAR_DEAD( l_U3057 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U3057, sub_3731(), 15.00000000, 15.00000000, 15.00000000, 0 ))
        {
            if (l_U3329)
            {
                l_U3329 = 0;
            }
            if (NOT l_U3328)
            {
                SET_CHAR_HEALTH( l_U3057, l_U3326 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U3057, 1 );
                l_U3328 = 1;
            }
            GET_CHAR_HEALTH( l_U3057, ref l_U3326 );
        }
        else if (l_U3328)
        {
            l_U3328 = 0;
        }
        if (NOT l_U3329)
        {
            SET_CHAR_HEALTH( l_U3057, l_U3327 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U3057, 0 );
            l_U3329 = 1;
        }
        GET_CHAR_HEALTH( l_U3057, ref l_U3327 );;
    }
    return;
}

void sub_75666()
{
    unknown uVar2;
    float fVar3;

    switch (l_U3290)
    {
        case 0: break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U3057 )))
        {
            if (sub_18896( l_U3056 ))
            {
                if (sub_75749())
                {
                    if (DOES_BLIP_EXIST( l_U3058 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3058 );
                        CLEAR_THIS_PRINT( "TonyExit" );
                    }
                    if (NOT l_U3294)
                    {
                        if (sub_35342( 1, 0, 0 ))
                        {
                            sub_19059( "E2T2_UDRIV", ref l_U3159, 6, 1 );
                            l_U3294 = 1;
                        }
                    }
                    if (sub_20121( l_U3064._fU0, l_U3064._fU4, l_U3064._fU8, 2.50000000, 2.50000000, 2.50000000, 1, l_U3057, l_U3056, "TonyHome", "TonyBeh", "InTonyCar", 0, 1, "TonyWant", 0 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3067 );
                        CLEAR_PRINTS();
                        l_U3290 = 2;
                    }
                    else if (NOT l_U3293)
                    {
                        if (IS_SCREEN_FADED_IN())
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U3067 )))
                            {
                                CLEAR_AREA( l_U3064._fU0, l_U3064._fU4, l_U3064._fU8, 20.00000000, 1 );
                                SET_CAR_GENERATORS_ACTIVE_IN_AREA( -84.58950000, -233.01110000, 12.84580000, -67.96600000, -225.09730000, 16.73580000, 0 );
                                SWITCH_ROADS_OFF( -125.40440000, -237.37350000, 0.00000000, -62.42280000, -228.61800000, 100.00000000 );
                                l_U3293 = 1;
                            }
                        }
                    }
                    else if (NOT l_U3294)
                    {
                        ;
                    }
                    else if (NOT l_U3295)
                    {
                        l_U3295 = 1;
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_3731(), l_U3056 ))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( l_U3057, l_U3056 ))
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( l_U3057, 1 );
                            SET_ALL_RANDOM_PEDS_FLEE( sub_3780(), 0 );
                            if (NOT l_U3299)
                            {
                                l_U3299 = 1;
                            }
                            if (sub_35342( 0, 0, 0 ))
                            {
                                if (NOT l_U3296)
                                {
                                    if (sub_35342( 1, 1, 0 ))
                                    {
                                        sub_19059( "E2T2_THROT", ref l_U3159, 6, 1 );
                                        l_U3296 = 1;
                                    }
                                }
                                else if (NOT l_U3298)
                                {
                                    if (NOT l_U3297)
                                    {
                                        if ((g_U43008 == 0) || (g_U43008 == 100))
                                        {
                                            if (sub_19059( "E2T2_B2AV1", ref l_U3159, 6, 1 ))
                                            {
                                                l_U3304 = "E2T2_B2AV1";
                                                g_U43008++;
                                                l_U3297 = 1;
                                            }
                                        }
                                        else if ((g_U43008 == 1) || (g_U43008 == 101))
                                        {
                                            if (sub_19059( "E2T2_B2AV2", ref l_U3159, 6, 1 ))
                                            {
                                                g_U43008++;
                                                l_U3304 = "E2T2_B2AV2";
                                                l_U3297 = 1;
                                            }
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( l_U3057, "LISTEN_TO_RADIO", 1, 1, 0 );
                                            l_U3300 = 1;
                                            l_U3297 = 1;
                                        }
                                    }
                                    else if (sub_36167( l_U3159 ))
                                    {
                                        sub_36204( l_U3304, ref l_U3159, 6, 1 );
                                    }
                                    else if (NOT l_U3300)
                                    {
                                        if ((g_U43009 == 0) || (g_U43009 == 100))
                                        {
                                            if (sub_19059( "E2T2_B2BV1", ref l_U3159, 6, 1 ))
                                            {
                                                l_U3304 = "E2T2_B2BV1";
                                                g_U43009++;
                                                l_U3298 = 1;
                                            }
                                        }
                                        else
                                        {
                                            sub_19059( "E2T2_B2BV2", ref l_U3159, 6, 1 );
                                            l_U3304 = "E2T2_B2BV2";
                                            l_U3298 = 1;
                                        }
                                    };;;
                                }
                                else if (sub_36167( l_U3159 ))
                                {
                                    sub_36204( l_U3304, ref l_U3159, 6, 1 );
                                };;;
                            }
                        }
                        else if (l_U3297)
                        {
                            if (sub_35673( l_U3159 ))
                            {
                                sub_37297( ref l_U3159 );
                            }
                        }
                    }
                    else if (l_U3297)
                    {
                        if (sub_35673( l_U3159 ))
                        {
                            sub_37297( ref l_U3159 );
                        }
                    }
                    GET_CHAR_SPEED( l_U3057, ref fVar3 );
                    if (NOT l_U3299)
                    {
                        if (l_U3301 == 0)
                        {
                            if (sub_35342( 0, 0, 0 ))
                            {
                                GET_GAME_TIMER( ref l_U3301 );
                                l_U3302 = 0;
                                l_U3303 = 0;
                            }
                        }
                        else if (sub_8646( l_U3301, 10000 ))
                        {
                            if (sub_35342( 0, 0, 0 ))
                            {
                                if (NOT l_U3302)
                                {
                                    if (fVar3 >= 1.00000000)
                                    {
                                        sub_19059( "E2T2_GAYRN", ref l_U3305, 6, 1 );
                                        l_U3302 = 1;
                                    }
                                }
                                else if (NOT l_U3303)
                                {
                                    if (NOT (sub_35673( l_U3305 )))
                                    {
                                        sub_19059( "E2T2_WTFRN", ref l_U3305, 6, 1 );
                                        l_U3303 = 1;
                                    }
                                }
                                else if (NOT (sub_35673( l_U3305 )))
                                {
                                    l_U3301 = 0;
                                };;;
                            }
                        }
                    };;;;;;
                }
                else
                {
                    sub_59554();
                }
            }
        }
        break;
        case 2:
        sub_77532();
        break;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3731(), 128.00000000, -443.00000000, 15.00000000, 50.00000000, 50.00000000, 50.00000000, 0 ))
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 128, 65093, 15, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 128, 65096, 15, 0, 0.00000000 );
    }
    return;
}

int sub_75749()
{
    switch (l_U3220)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U3057 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U3057, 129.91780000, -442.38520000, 14.76680000, 2.00000000, 3.00000000, 2.00000000, 0 ))
            {
                l_U3220++;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U3057 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3731(), l_U3057, 30.00000000, 30.00000000, 30.00000000, 0 ))
            {
                if (sub_35342( 0, 0, 0 ))
                {
                    sub_19059( "E2T2_GAYRN", ref l_U3159, 6, 1 );
                    l_U3220++;
                }
            }
            else
            {
                l_U3220++;
            }
        }
        break;
        case 2:
        if (NOT (sub_35673( l_U3159 )))
        {
            l_U3220++;
        }
        break;
        case 3:
        return 1;
        break;
    }
    return 0;
}

void sub_77532()
{
    unknown uVar2;

    if (NOT l_U3281)
    {
        if (NOT sub_77552())
        {
            l_U3281 = 1;
        }
    }
    else if (((l_U3279 > 0) AND (NOT l_U3282)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_77552())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_3591( 0 );
            l_U3282 = 1;
            l_U3279 = 2;
        }
    }
    switch (l_U3279)
    {
        case 0:
        if (IS_PLAYER_CONTROL_ON( sub_3780() ))
        {
            if (sub_28200( 1, 1 ))
            {
                if (sub_8141())
                {
                    SET_PLAYER_CONTROL( sub_3780(), 0 );
                    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3731() )))
                    {
                        l_U3283 = 1;
                    }
                    else
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3731(), ref l_U3056 );
                        if (NOT (IS_CHAR_DEAD( l_U3057 )))
                        {
                            if (NOT (IS_CHAR_SITTING_IN_CAR( l_U3057, l_U3056 )))
                            {
                                l_U3283 = 1;
                            }
                        }
                    }
                    if (l_U3283)
                    {
                        if (IS_SCREEN_FADING_IN())
                        {
                            while (IS_SCREEN_FADING_IN())
                            {
                                WAIT( 0 );
                            }
                        }
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    g_U2792 = 1;
                    l_U3212 = 0;
                    l_U3213 = 0;
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    sub_78076( ref l_U3159, 0 );
                    WAIT( 500 );
                    SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                    DISPLAY_RADAR( 0 );
                    if (NOT (IS_CHAR_DEAD( l_U3057 )))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U3057 );
                    }
                    BEGIN_CAM_COMMANDS( ref l_U3044 );
                    SET_USE_HIGHDOF( 1 );
                    CREATE_CAM( 14, ref l_U3045[0] );
                    CREATE_CAM( 14, ref l_U3045[1] );
                    CREATE_CAM( 3, ref l_U3045[2] );
                    SET_CAM_POS( l_U3045[0], -85.17007000, -233.69330000, 16.68388000 );
                    SET_CAM_ROT( l_U3045[0], 1.80393100, 0.00000000, -53.97878000 );
                    SET_CAM_FOV( l_U3045[0], 35.70002000 );
                    SET_CAM_FAR_DOF( l_U3045[0], 30.00000000 );
                    SET_CAM_ACTIVE( l_U3045[0], 1 );
                    SET_CAM_PROPAGATE( l_U3045[0], 1 );
                    SET_CAM_POS( l_U3045[1], -85.13456000, -233.66750000, 15.29000000 );
                    SET_CAM_ROT( l_U3045[1], 1.80393100, 0.00000000, -53.97878000 );
                    SET_CAM_FOV( l_U3045[1], 35.70002000 );
                    SET_CAM_FAR_DOF( l_U3045[1], 30.00000000 );
                    SET_CAM_ACTIVE( l_U3045[1], 1 );
                    SET_CAM_PROPAGATE( l_U3045[1], 0 );
                    SWITCH_ROADS_OFF( -125.40440000, -237.37350000, 0.00000000, -62.42280000, -228.61800000, 100.00000000 );
                    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3731() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3731(), ref l_U3056 );
                        if (NOT (IS_CAR_DEAD( l_U3056 )))
                        {
                            SET_CAR_COORDINATES( l_U3056, -76.54820000, -229.18400000, 13.40330000 );
                            SET_CAR_HEADING( l_U3056, 88.87470000 );
                            SET_CAR_ON_GROUND_PROPERLY( l_U3056 );
                        }
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3731() );
                        SET_CHAR_COORDINATES( sub_3731(), -77.42080000, -226.91580000, 13.39260000 );
                        SET_CHAR_HEADING( sub_3731(), 94.28990000 );
                        SET_CURRENT_CHAR_WEAPON( sub_3731(), 0, 1 );
                        if (NOT (IS_CHAR_DEAD( l_U3057 )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U3057 ))
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( l_U3057, -78.60870000, -226.80930000, 13.35230000 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( l_U3057, -78.60870000, -226.80930000, 13.35230000 );
                            }
                            SET_CHAR_HEADING( l_U3057, 268.54430000 );
                            WAIT( 0 );
                            if (NOT (IS_CHAR_DEAD( l_U3057 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U3057 );
                                SET_CHAR_COORDINATES( l_U3057, -78.60870000, -226.80930000, 13.35230000 );
                                SET_CHAR_HEADING( l_U3057, 268.54430000 );
                            }
                        }
                    }
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    if (l_U3283)
                    {
                        DO_SCREEN_FADE_IN( 500 );
                    }
                    SET_CAM_ACTIVE( l_U3045[0], 0 );
                    SET_CAM_PROPAGATE( l_U3045[0], 0 );
                    SET_CAM_INTERP_STYLE_CORE( l_U3045[2], l_U3045[0], l_U3045[1], 18000, 0 );
                    SET_CAM_INTERP_STYLE_DETAILED( l_U3045[2], 0, 0, 1, 1 );
                    SET_CAM_ACTIVE( l_U3045[2], 1 );
                    SET_CAM_PROPAGATE( l_U3045[2], 1 );
                    if (NOT (IS_CHAR_DEAD( l_U3057 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U3057, sub_3731(), -1, 0 );
                        TASK_LOOK_AT_CHAR( sub_3731(), l_U3057, -1, 0 );
                    }
                    GET_GAME_TIMER( ref l_U3280 );
                    sub_19059( "E2T2_BACK", ref l_U3159, 6, 1 );
                    l_U3279 = 1;
                }
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U3057 )))
        {
            if ((sub_8646( l_U3280, 60000 )) || (NOT (sub_35673( l_U3159 ))))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_CLEAR_LOOK_AT( 0 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -74.95370000, -223.47960000, 13.60150000, 2, -2, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U3057, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                GET_GAME_TIMER( ref l_U3280 );
                l_U3279 = 2;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U3057 )))
        {
            if ((((LOCATE_CHAR_ANY_MEANS_3D( l_U3057, -74.63640000, -223.28790000, 14.62060000, 1.00000000, 1.00000000, 2.00000000, 0 )) || (sub_8646( l_U3280, 20000 ))) || (l_U3282)) || (IS_KEYBOARD_KEY_PRESSED( 10 )))
            {
                sub_78076( ref l_U3159, 0 );
                SET_CAM_ACTIVE( l_U3045[2], 0 );
                SET_CAM_PROPAGATE( l_U3045[2], 0 );
                SET_CAM_ACTIVE( l_U3045[1], 0 );
                SET_CAM_PROPAGATE( l_U3045[1], 0 );
                SET_CAM_ACTIVE( l_U3045[0], 0 );
                SET_CAM_PROPAGATE( l_U3045[0], 0 );
                DESTROY_CAM( l_U3045[2] );
                DESTROY_CAM( l_U3045[1] );
                DESTROY_CAM( l_U3045[0] );
                SET_USE_HIGHDOF( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                SET_INSTANT_WIDESCREEN_BORDERS( 0 );
                DISPLAY_RADAR( 1 );
                sub_18144();
                TASK_CLEAR_LOOK_AT( sub_3731() );
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_3731() )))
                {
                    SET_CHAR_COORDINATES( sub_3731(), -77.56220000, -226.51330000, 13.39940000 );
                    SET_CHAR_HEADING( sub_3731(), 84.36510000 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                if (DOES_CHAR_EXIST( l_U3057 ))
                {
                    DELETE_CHAR( ref l_U3057 );
                }
                if (l_U3282)
                {
                    DO_SCREEN_FADE_IN( 500 );
                }
                SET_PLAYER_CONTROL( sub_3780(), 1 );
                END_CAM_COMMANDS( ref l_U3044 );
                SWITCH_ROADS_BACK_TO_ORIGINAL( -125.40440000, -237.37350000, 0.00000000, -62.42280000, -228.61800000, 100.00000000 );
                sub_79914();
                l_U3279 = 3;
            }
        }
        break;
    }
    return;
}

int sub_77552()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_78076(int iParam0, unknown uParam1)
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

void sub_79914()
{
    g_U25 = 80;
    CLEAR_WANTED_LEVEL( sub_3780() );
    sub_79941();
    sub_3425();
    return;
}

void sub_79941()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_79959();
    sub_80018( iVar2, iVar3, iVar4 );
    return;
}

void sub_79959()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U204[I] = 4;
    }
    return;
}

void sub_80018(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_80048( iVar5, uParam0, uParam1, uParam2, "GayTony" );
    return;
}

void sub_80048(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_80076();
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
            sub_80250( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_80250( ref cVar9 );
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
            sub_80250( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_80250( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU160._fU76;
    }
    else if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_80250( ref cVar9 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_80250( ref cVar9 );
        return;
    }
    iVar7 = g_U14925[uParam0]._fU0._fU4;
    iVar8 = sub_80827( uParam0, iVar7 );;;
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
    if (NOT (sub_81275( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14925[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_3780() );
    sub_2417();
    bVar28 = true;
    uVar29 = sub_80827( uParam0, iVar7 );
    uVar30 = sub_2037( uParam0 );
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
                sub_85549( 9, ref g_U14925[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12379))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_80076();
                    g_U10953._fU8 = 1;
                    g_U10953._fU20 = sub_86000( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_86079( uParam0 );
                sub_86118( 0 );
                sub_2315( uVar30, 0 );
                g_U11076 = 0;
            }
            g_U12382[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_86293();
        }
    }
    if (bParam2)
    {
        sub_80076();
        sub_86392();
        sub_86118( 0 );
        g_U11062 = 1;
        g_U11076 = 0;
    }
    if (bParam3)
    {
        sub_80076();
        sub_86444();
        sub_86118( 0 );
        sub_2315( uVar30, 0 );
    }
    sub_1924();
    return;
}

void sub_80076()
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

void sub_80250(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_80827(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_2268( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_81275(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_81371( uParam1 );
        break;
        case 1:
        bVar8 = sub_82252( uParam1 );
        break;
        case 2:
        bVar8 = sub_82441( uParam1 );
        break;
        case 3:
        bVar8 = sub_82659( uParam1 );
        break;
        case 4:
        bVar8 = sub_83257( uParam1 );
        break;
        case 5:
        bVar8 = sub_83390( uParam1 );
        break;
        case 6:
        bVar8 = sub_83587( uParam1 );
        break;
        case 7:
        bVar8 = sub_83724( uParam1 );
        break;
        case 8:
        bVar8 = sub_83873( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_82870( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_80827( uParam0, uParam1 );
    if (bParam3)
    {
        sub_84091( uVar9, uParam0 );
    }
    return 1;
}

int sub_81371(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_81538( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        sub_81538( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_81538( iVar3, 1500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_81538( iVar3, 500, 0, 0, 0, 0 );
        break;
        case 5:
        sub_81538( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 6:
        sub_81538( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 7:
        sub_81538( iVar3, 3000, 5, 2, 0, 0 );
        break;
        case 8:
        sub_81538( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 9:
        sub_81538( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 10:
        sub_81538( iVar3, 4500, 5, 2, 0, 0 );
        break;
        case 11:
        sub_81538( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 12:
        sub_81538( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 0:
        case 13:
        case 14:
        case 15:
        case 16: break;
        default:
        sub_82160( "Gay Tony", 1 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82160( "Gay Tony", 0 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_81538(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_81549( uParam1 );
    sub_81723( uParam0, 0, uParam2 );
    sub_81723( uParam0, 1, uParam3 );
    sub_81723( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_79959();
    return;
}

void sub_81549(unknown uParam0)
{
    ADD_SCORE( sub_3780(), uParam0 );
    sub_81574( uParam0 );
    return;
}

void sub_81574(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2268( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_81723(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_82160(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_82252(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81538( iVar3, 500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_81538( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_81538( iVar3, 1500, 5, 2, 0, 0 );
        break;
        default:
        sub_82160( "Mori", 1 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82160( "Mori", 0 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_82441(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81538( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_81538( iVar3, 15000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_81538( iVar3, 20000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_81538( iVar3, 25000, 5, 2, 0, 0 );
        break;
        default:
        sub_82160( "Yusuf", 1 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82160( "Yusuf", 0 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_82659(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81538( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_81538( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 2:
        sub_81538( iVar3, 0, sub_82748(), sub_83014(), 0, 0 );
        break;
        default:
        sub_82160( "Dominicans", 1 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82160( "Dominicans", 0 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_82748()
{
    switch (l_U204[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_82870( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_82870(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_83014()
{
    switch (l_U204[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_82870( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_83257(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81538( iVar3, 1000, 5, 2, 0, 0 );
        break;
        default:
        sub_82160( "Mum", 1 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82160( "Mum", 0 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83390(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81538( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_81538( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_81538( iVar3, 6000, 5, 2, 0, 0 );
        break;
        default:
        sub_82160( "Bulgarin", 1 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82160( "Bulgarin", 0 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83587(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81538( iVar3, 5000, 5, 2, 0, 0 );
        break;
        default:
        sub_82160( "Rocco", 1 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82160( "Rocco", 0 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83724(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81538( iVar3, 0, sub_82748(), sub_83014(), 0, 0 );
        break;
        default:
        sub_82160( "Henrique", 1 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82160( "Henrique", 0 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83873(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    if (bVar4)
    {
        sub_82160( "Reserve 1", 0 );
        sub_81538( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_84091(int iParam0, int iParam1)
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
    if (sub_84152( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_84878( iParam1 );
    }
    return;
}

int sub_84152(int iParam0, int iParam1)
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
            sub_84292( 0, iVar6 );
            g_U14902[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U22960[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_84292(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_84462( 0 );
    return;
}

void sub_84462(boolean bParam0)
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
        sub_84707();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_84707()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_84878(int iParam0)
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
        sub_85117( 188 );
        SET_FLOAT_STAT( 188, fVar3 );
        break;
        case 1:
        sub_85117( 192 );
        SET_FLOAT_STAT( 192, fVar3 );
        break;
        case 2:
        sub_85117( 191 );
        SET_FLOAT_STAT( 191, fVar3 );
        break;
        case 3:
        sub_85117( 197 );
        SET_FLOAT_STAT( 197, fVar3 );
        break;
        case 4: break;
        case 5:
        sub_85117( 200 );
        SET_FLOAT_STAT( 200, fVar3 );
        break;
        case 6:
        sub_85117( 201 );
        SET_FLOAT_STAT( 201, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_85117(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_85549(unknown uParam0, unknown uParam1)
{
    sub_85568( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_85568(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_86000(int iParam0, int iParam1)
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

void sub_86079(unknown uParam0)
{
    sub_1785();
    g_U12382[uParam0]._fU120 = 0;
    return;
}

void sub_86118(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_86169( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_86169(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_86293()
{
    sub_86302();
    return;
}

void sub_86302()
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

void sub_86392()
{
    sub_86302();
    return;
}

void sub_86444()
{
    sub_86302();
    StrCopy( ref g_U10966, "FPASS", 16 );
    return;
}

int sub_86679()
{
    switch (l_U3284)
    {
        case 0:
        if (DOES_BLIP_EXIST( l_U757 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U757 );
        }
        PRINT_NOW( "TonyCar", 7000, 1 );
        l_U3215 = 2;
        l_U3284++;
        break;
        case 1:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            l_U3284++;
        }
        break;
        case 2:
        return 1;
        break;
    }
    return 0;
}

void sub_86849()
{
    unknown uVar2;

    if (NOT l_U3287)
    {
        if (NOT sub_77552())
        {
            l_U3287 = 1;
        }
    }
    else if (((l_U3285 > 0) AND (NOT l_U3288)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_77552())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_3591( 0 );
            l_U3288 = 1;
            l_U3285 = 2;
        }
    }
    switch (l_U3285)
    {
        case 0:
        if (IS_PLAYER_CONTROL_ON( sub_3780() ))
        {
            if (sub_28200( 1, 1 ))
            {
                if (sub_8141())
                {
                    SET_PLAYER_CONTROL( sub_3780(), 0 );
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    REQUEST_MODEL( 1348744438 );
                    while (NOT (HAS_MODEL_LOADED( 1348744438 )))
                    {
                        WAIT( 0 );
                    }
                    g_U2792 = 1;
                    LOAD_SCENE( -76.54820000, -229.18400000, 13.40330000 );
                    CREATE_CAR( 1348744438, -76.54820000, -229.18400000, 13.40330000, ref l_U3289, 1 );
                    SET_CAR_HEADING( l_U3289, 88.87470000 );
                    if (IS_CHAR_IN_ANY_CAR( sub_3731() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_CAR( sub_3731(), l_U3289, -1 );
                    }
                    else
                    {
                        WARP_CHAR_INTO_CAR( sub_3731(), l_U3289 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U3057 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U3057 ))
                        {
                            WARP_CHAR_FROM_CAR_TO_CAR( l_U3057, l_U3289, 0 );
                        }
                        else
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U3057, l_U3289, 0 );
                        }
                    }
                    else
                    {
                        sub_87398( 0, ref l_U3057, l_U3289, 0 );
                        sub_4366( 1, l_U3057, "TONY", 0 );
                        SET_CHAR_DECISION_MAKER( l_U3057, l_U3034 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3057, 1 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U3056 ))
                    {
                        DELETE_CAR( ref l_U3056 );
                    }
                    SET_CAR_ON_GROUND_PROPERLY( l_U3289 );
                    l_U3212 = 0;
                    l_U3213 = 0;
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    sub_78076( ref l_U3159, 0 );
                    WAIT( 500 );
                    SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                    DISPLAY_RADAR( 0 );
                    if (NOT (IS_CHAR_DEAD( l_U3057 )))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U3057 );
                    }
                    BEGIN_CAM_COMMANDS( ref l_U3044 );
                    SET_USE_HIGHDOF( 1 );
                    CREATE_CAM( 14, ref l_U3045[0] );
                    CREATE_CAM( 14, ref l_U3045[1] );
                    CREATE_CAM( 3, ref l_U3045[2] );
                    SET_CAM_POS( l_U3045[0], -85.17007000, -233.69330000, 16.68388000 );
                    SET_CAM_ROT( l_U3045[0], 1.80393100, 0.00000000, -53.97878000 );
                    SET_CAM_FOV( l_U3045[0], 35.70002000 );
                    SET_CAM_FAR_DOF( l_U3045[0], 30.00000000 );
                    SET_CAM_ACTIVE( l_U3045[0], 1 );
                    SET_CAM_PROPAGATE( l_U3045[0], 1 );
                    SET_CAM_POS( l_U3045[1], -85.13456000, -233.66750000, 15.29000000 );
                    SET_CAM_ROT( l_U3045[1], 1.80393100, 0.00000000, -53.97878000 );
                    SET_CAM_FOV( l_U3045[1], 35.70002000 );
                    SET_CAM_FAR_DOF( l_U3045[1], 30.00000000 );
                    SET_CAM_ACTIVE( l_U3045[1], 1 );
                    SET_CAM_PROPAGATE( l_U3045[1], 0 );
                    SWITCH_ROADS_OFF( -125.40440000, -237.37350000, 0.00000000, -62.42280000, -228.61800000, 100.00000000 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    DO_SCREEN_FADE_IN( 500 );
                    SET_CAM_ACTIVE( l_U3045[0], 0 );
                    SET_CAM_PROPAGATE( l_U3045[0], 0 );
                    SET_CAM_INTERP_STYLE_CORE( l_U3045[2], l_U3045[0], l_U3045[1], 18000, 0 );
                    SET_CAM_ACTIVE( l_U3045[2], 1 );
                    SET_CAM_PROPAGATE( l_U3045[2], 1 );
                    if (NOT (IS_CHAR_DEAD( l_U3057 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U3057, sub_3731(), -1, 0 );
                        TASK_LOOK_AT_CHAR( sub_3731(), l_U3057, -1, 0 );
                    }
                    GET_GAME_TIMER( ref l_U3286 );
                    sub_19080( "E2T2_WRECK", "E2T2BAU", ref l_U3159, 6, 1 );
                    l_U3285 = 1;
                }
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U3057 )))
        {
            if ((sub_8646( l_U3286, 60000 )) || (NOT (sub_35673( l_U3159 ))))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_CLEAR_LOOK_AT( 0 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -74.95370000, -223.47960000, 13.60150000, 2, -2, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U3057, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                GET_GAME_TIMER( ref l_U3286 );
                l_U3285 = 2;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U3057 )))
        {
            if ((((LOCATE_CHAR_ANY_MEANS_3D( l_U3057, -74.63640000, -223.28790000, 14.62060000, 1.00000000, 1.00000000, 2.00000000, 0 )) || (sub_8646( l_U3286, 20000 ))) || (l_U3288)) || (IS_KEYBOARD_KEY_PRESSED( 10 )))
            {
                sub_78076( ref l_U3159, 0 );
                SET_CAM_ACTIVE( l_U3045[2], 0 );
                SET_CAM_PROPAGATE( l_U3045[2], 0 );
                SET_CAM_ACTIVE( l_U3045[1], 0 );
                SET_CAM_PROPAGATE( l_U3045[1], 0 );
                SET_CAM_ACTIVE( l_U3045[0], 0 );
                SET_CAM_PROPAGATE( l_U3045[0], 0 );
                DESTROY_CAM( l_U3045[2] );
                DESTROY_CAM( l_U3045[1] );
                DESTROY_CAM( l_U3045[0] );
                SET_USE_HIGHDOF( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                SET_INSTANT_WIDESCREEN_BORDERS( 0 );
                DISPLAY_RADAR( 1 );
                sub_18144();
                TASK_CLEAR_LOOK_AT( sub_3731() );
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_3731() )))
                {
                    SET_CHAR_COORDINATES( sub_3731(), -77.56220000, -226.51330000, 13.39940000 );
                    SET_CHAR_HEADING( sub_3731(), 84.36510000 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                if (DOES_CHAR_EXIST( l_U3057 ))
                {
                    DELETE_CHAR( ref l_U3057 );
                }
                if (l_U3288)
                {
                    DO_SCREEN_FADE_IN( 500 );
                }
                SET_PLAYER_CONTROL( sub_3780(), 1 );
                END_CAM_COMMANDS( ref l_U3044 );
                SWITCH_ROADS_BACK_TO_ORIGINAL( -125.40440000, -237.37350000, 0.00000000, -62.42280000, -228.61800000, 100.00000000 );
                sub_88898();
                l_U3285 = 3;
            }
        }
        break;
    }
    return;
}

void sub_87398(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    CREATE_CHAR_AS_PASSENGER( uParam2, sub_11417( uParam0 ), sub_9180( uParam0 ), uParam3, uParam1 );
    sub_11463( uParam0, (uParam1^) );
    sub_11497( uParam0, (uParam1^) );
    return;
}

void sub_88898()
{
    switch (l_U3215)
    {
        case 0:
        PRINT_NOW( "TonyDead", 7000, 1 );
        break;
        case 1:
        PRINT_NOW( "TonyAban", 7000, 1 );
        sub_89017( 0, "E2T2_FCALL", "E2T2AUD", 0 );
        break;
        case 3: break;
    }
    sub_89715();
    sub_3425();
    return;
}

void sub_89017(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_89061( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_89061(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_89715()
{
    int iVar2;

    iVar2 = 0;
    sub_89729( iVar2 );
    sub_2408( iVar2 );
    return;
}

void sub_89729(unknown uParam0)
{
    if (g_U12382[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3780(), 150 );
    CLEAR_HELP();
    sub_1122( uParam0 );
    return;
}

void sub_89848()
{
    unknown uVar2;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    switch (l_U3412)
    {
        case 0:
        REQUEST_MODEL( 993473937 );
        while (NOT (HAS_MODEL_LOADED( 993473937 )))
        {
            WAIT( 0 );
        }
        l_U3413._fU0 = sub_12615( l_U3041, 24, 105.53700000, -435.96500000, 26.04500000, 0.00000000, 4, "GtaMloRoom09", 1, 1 );
        CREATE_OBJECT_NO_OFFSET( 993473937, 105.53700000, -435.96500000, 26.04500000, ref l_U3453, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3453, "GtaMloRoom09" );
        ATTACH_OBJECT_TO_PED( l_U3453, l_U3413._fU0, 1219, 0.09200000, 0.02900000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3413._fU0, 1 );
        l_U3412++;
        break;
        case 1:
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 2 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U3413._fU0 )))
            {
                SAY_AMBIENT_SPEECH( l_U3413._fU0, "COVER_ME", 1, 1, 2 );
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 3 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U3413._fU0 )))
            {
                SAY_AMBIENT_SPEECH( l_U3413._fU0, "MOVE_IN", 1, 1, 2 );
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 4 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U3413._fU0 )))
            {
                SAY_AMBIENT_SPEECH( l_U3413._fU0, "TAKE_COVER", 1, 1, 2 );
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 5 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U3413._fU0 )))
            {
                SAY_AMBIENT_SPEECH( l_U3413._fU0, "TARGET", 1, 1, 2 );
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U3413._fU0 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U3413._fU0, "misstony02", "Grenade_Throw" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U3413._fU0, "misstony02", "Grenade_Throw", ref fVar3 );
                if (fVar3 > 0.36000000)
                {
                    GET_OBJECT_COORDINATES( l_U3453, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    DETACH_OBJECT( l_U3453, 1 );
                    DELETE_OBJECT( ref l_U3453 );
                    CREATE_OBJECT_NO_OFFSET( 993473937, 104.50280000, uVar4._fU4, uVar4._fU8, ref l_U3453, 1 );
                    SET_OBJECT_ROTATION( l_U3453, 121.00000000, -27.00000000, 9.10800000 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3453, "GtaMloRoom10" );
                    l_U3412++;
                }
            }
        }
        break;
        case 3: break;
        case 4:
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 5 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U3413._fU0 )))
            {
                SET_CHAR_COORDINATES( l_U3413._fU0, 105.53700000, -435.96500000, 26.04500000 );
                SET_CHAR_HEADING( l_U3413._fU0, 0.00000000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U3413._fU0, "GtaMloRoom09" );
                if (DOES_OBJECT_EXIST( l_U3453 ))
                {
                    DELETE_OBJECT( ref l_U3453 );
                }
                CREATE_OBJECT_NO_OFFSET( 993473937, 105.53700000, -435.96500000, 26.04500000, ref l_U3453, 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3453, "GtaMloRoom09" );
                ATTACH_OBJECT_TO_PED( l_U3453, l_U3413._fU0, 1219, 0.09200000, 0.02900000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
                l_U3412 = 1;
            }
        }
        break;
    }
    return;
}

void sub_90995(unknown uParam0, int iParam1, unknown uParam2)
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

void sub_91240(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (sub_91249() == 0)
    {
        sub_91274();
    }
    if (HAS_SCRIPT_LOADED( "MissionResultsTimer" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) == 0)
        {
            START_NEW_SCRIPT( "MissionResultsTimer", 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionResultsTimer" );
        }
    }
    if (sub_94029() <= g_U43138[g_U43137]._fU8)
    {
        g_U43568 = 1;
    }
    else
    {
        g_U43568 = 0;
    }
    if (g_U43600 == 1)
    {
        g_U43612 = sub_94311();
        g_U43600 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (sub_94029() < g_U43612)
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
        if ((sub_95104( 0, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_95414();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_95104( 0, 0, 0 )) > g_U43617)
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
        if ((sub_95104( 1, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_95414();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_95104( 1, 0, 0 )) > g_U43617)
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
            g_U43617 = sub_95414();
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
        if ((sub_95104( 0, 0, 1 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_95414();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_95104( 0, 0, 1 )) > g_U43617)
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
            g_U43617 = sub_95414();
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
        g_U43619 = sub_96886();
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
        g_U43620 = sub_97582();
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
        g_U43621 = sub_98161();
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

int sub_91249()
{
    return 0;
}

void sub_91274()
{
    if (sub_91288( sub_3731() ))
    {
        if (IS_CONTROL_PRESSED( 2, 77 ))
        {
            if (l_U729 == 0)
            {
                GET_GAME_TIMER( ref l_U726 );
                l_U729 = 1;
            }
            GET_GAME_TIMER( ref l_U727 );
            l_U728 = l_U727 - l_U726;
            if (l_U728 < 1000)
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
    sub_91818();
    if (g_U12379 == 1)
    {
        if ((IS_BIT_SET( g_U10938._fU0, 7 )) == 0)
        {
            if (g_U43133 == 0)
            {
                if (l_U725 == 0)
                {
                    GET_GAME_TIMER( ref l_U722 );
                    l_U725 = 1;
                }
                GET_GAME_TIMER( ref l_U723 );
                l_U724 = l_U723 - l_U722;
                if (l_U724 < 1000)
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

int sub_91288(int iParam0)
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
                if (sub_91352( uVar3 ))
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

int sub_91352(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2687))
    {
        return 1;
    }
    return 0;
}

void sub_91818()
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

void sub_94029()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;

    if (g_U12379 == 1)
    {
        if (NOT (IS_CHAR_DEAD( sub_3731() )))
        {
            GET_CHAR_HEALTH( sub_3731(), ref g_U43521 );
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

int sub_94311()
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

void sub_95104(int iParam0, int iParam1, int iParam2)
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
        if (l_U721 < GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER())
        {
            g_U43519++;
        }
        l_U721 = GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER();
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

int sub_95414()
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

int sub_96886()
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

int sub_97582()
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

int sub_98161()
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
