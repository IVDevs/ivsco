void main()
{
    unknown uVar2;
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    l_U0 = -1;
    l_U8 = 225;
    l_U9 = 86.00000000;
    l_U10 = 274.00000000;
    l_U11 = 0;
    l_U12 = 1;
    l_U13 = 3;
    l_U53 = 100.00000000;
    l_U98 = 1;
    l_U105 = 0;
    l_U107 = 0.92500000;
    l_U108 = 0.30000000;
    l_U109 = 0.25000000;
    l_U110 = 0.48000000;
    l_U111 = 0.44000000;
    l_U112 = 0.93000000;
    l_U113 = 0.20000000;
    l_U114 = 0.20000000;
    l_U115 = 0.43000000;
    l_U116 = 0.49000000;
    l_U126 = 0;
    SET_MISSION_FLAG( 1 );
    sub_184();
    sub_235();
    sub_378();
    SET_MAX_WANTED_LEVEL( 6 );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    sub_1085();
    l_U105 = 0;
    g_U8741 = {l_U133._fU16};
    l_U55[0] = {-0.62380000, -2.71480000, 0.00000000};
    l_U55[1] = {2.53400000, -1.89770000, 0.00000000};
    l_U55[2] = {1.34760000, -1.66360000, 0.00000000};
    l_U90[0] = 1.30000000;
    l_U90[1] = 1.50000000;
    l_U90[2] = 1.70000000;
    l_U90[3] = 1.98000000;
    l_U90[4] = 2.02000000;
    l_U121 = l_U133._fU0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1857();
        sub_1917();
        sub_1934();
        g_U8762 = 0;
        TERMINATE_THIS_SCRIPT();
    }
    if (NOT (IS_CHAR_DEAD( sub_244() )))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_244(), 0 );
    }
    while (true)
    {
        GET_GAME_TIMER( ref l_U127 );
        if ((sub_2023( sub_244() )) AND (IS_SCREEN_FADED_OUT()))
        {
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
            PRINT_NOW( "VIG_FAIL", 3000, 1 );
            sub_1857();
            sub_1917();
            sub_1934();
            DO_SCREEN_FADE_IN( 0 );
            g_U8762 = 0;
            TERMINATE_THIS_SCRIPT();
        }
        switch (l_U133._fU0)
        {
            case 0:
            sub_2414( l_U133._fU16, l_U133._fU12 );
            break;
            case 1:
            if (l_U133._fU4 < 30)
            {
                sub_10638( l_U133._fU16, l_U133._fU12 );
            }
            else if (l_U133._fU4 >= 110)
            {
                sub_10638( l_U133._fU16, l_U133._fU12 );
            }
            else
            {
                sub_14032( l_U133._fU16, l_U133._fU12 );
            }
            break;
            case 2:
            if (l_U133._fU4 < 50)
            {
                sub_16607( l_U133._fU16, l_U133._fU12 );
            }
            else if ((l_U133._fU4 > 50) AND (l_U133._fU4 < 100))
            {
                sub_16607( l_U133._fU16, l_U133._fU12 );
            }
            else
            {
                sub_16607( l_U133._fU16, l_U133._fU12 );
            }
            break;
        }
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            if (DOES_CHAR_EXIST( l_U15 ))
            {
                DELETE_CHAR( ref l_U15 );
            }
            for ( I = 0; I <= 7; I++ )
            {
                if (DOES_CHAR_EXIST( l_U16[I] ))
                {
                    DELETE_CHAR( ref l_U16[I] );
                }
            }
        }
        if (NOT (IS_BUTTON_PRESSED( 0, 19 )))
        {
            l_U38 = 0;
        }
        if (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            if (NOT (IS_CHAR_FATALLY_INJURED( l_U15 )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U15, 0.00000000, -15.00000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                SET_CHAR_COORDINATES( sub_244(), uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
        }
        WAIT( 0 );
    }
    return;
}

void sub_184()
{
    g_U814 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_235()
{
    if (NOT (IS_CHAR_INJURED( sub_244() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_244() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_244(), ref l_U46 );
            SWITCH_CAR_SIREN( l_U46, 1 );
            SET_VEH_HAS_STRONG_AXLES( l_U46, 1 );
            FORCE_CAR_LIGHTS( l_U46, 2 );
        }
    }
    return;
}

void sub_244()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_378()
{
    OPEN_SEQUENCE_TASK( ref l_U68[0] );
    TASK_START_SCENARIO_IN_PLACE( 0, "HangOut_OutsideLiquorStore", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U68[0] );
    OPEN_SEQUENCE_TASK( ref l_U68[1] );
    TASK_START_SCENARIO_IN_PLACE( 0, "HangOut_OutsideLiquorStore", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U68[1] );
    OPEN_SEQUENCE_TASK( ref l_U68[2] );
    TASK_START_SCENARIO_IN_PLACE( 0, "HangOut_OutsideLiquorStore", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U68[2] );
    OPEN_SEQUENCE_TASK( ref l_U68[3] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_SellingDrugs", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U68[3] );
    OPEN_SEQUENCE_TASK( ref l_U68[4] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Homeless", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U68[4] );
    OPEN_SEQUENCE_TASK( ref l_U68[5] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Prostitute", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U68[5] );
    OPEN_SEQUENCE_TASK( ref l_U68[6] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Standing", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U68[6] );
    OPEN_SEQUENCE_TASK( ref l_U68[7] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Homeless", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U68[7] );
    OPEN_SEQUENCE_TASK( ref l_U68[8] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_SmokingOutsideOffice", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U68[8] );
    OPEN_SEQUENCE_TASK( ref l_U68[9] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_LayingDruggie", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U68[9] );
    return;
}

void sub_1085()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_1123( 1, g_U572[I] )) == 0)
        {
            sub_1374( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_1552())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_1123(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1374(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_1459( g_U572 - 1 );
    return;
}

void sub_1459(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_1552()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_1123( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1857()
{
    if (IS_VEH_DRIVEABLE( l_U46 ))
    {
        SWITCH_CAR_SIREN( l_U46, 0 );
        FORCE_CAR_LIGHTS( l_U46, 1 );
    }
    return;
}

void sub_1917()
{
    return;
}

void sub_1934()
{
    g_U12303 = 0;
    return;
}

int sub_2023(int iParam0)
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
                if (sub_2087( uVar3 ))
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

int sub_2087(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2784))
    {
        return 1;
    }
    return 0;
}

void sub_2414(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    if (NOT (IS_CHAR_FATALLY_INJURED( sub_244() )))
    {
        switch (l_U122)
        {
            case 0:
            if (sub_2490( uParam0, uParam3 ))
            {
                l_U122 = 1;
                l_U120 = 4;
            }
            break;
            case 1:
            sub_5252();
            sub_5898();
            if (sub_5284())
            {
                if (NOT l_U99)
                {
                    PRINT_NOW( "VIG_CCL", 7500, 1 );
                    l_U99 = 1;
                }
            }
            if (IS_CHAR_FATALLY_INJURED( l_U15 ))
            {
                l_U122 = 2;
            }
            if (sub_7012( l_U15 ))
            {
                l_U122 = 3;
            }
            switch (l_U120)
            {
                case 4:
                switch (l_U97)
                {
                    case 0:
                    if (NOT (IS_CHAR_INJURED( l_U15 )))
                    {
                        TASK_WANDER_STANDARD( l_U15 );
                        l_U120 = 1;
                    }
                    break;
                    case 1:
                    if (NOT (IS_CHAR_INJURED( l_U15 )))
                    {
                        TASK_WANDER_STANDARD( l_U15 );
                        l_U120 = 0;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U15 )))
                    {
                        if (NOT l_U117)
                        {
                            uVar8 = sub_8126();
                            if (LOAD_ALL_PATH_NODES( 1 ))
                            {
                                GET_CLOSEST_CAR_NODE( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                                REQUEST_MODEL( uVar8 );
                                if (HAS_MODEL_LOADED( uVar8 ))
                                {
                                    CREATE_CAR( uVar8, uVar9._fU0, uVar9._fU4, uVar9._fU8, ref l_U25, 1 );
                                    SET_CAR_CAN_BE_DAMAGED( l_U25, 1 );
                                    LOCK_CAR_DOORS( l_U25, 7 );
                                    l_U117 = 1;
                                    TASK_PERFORM_SEQUENCE( l_U15, l_U68[8] );
                                    l_U120 = 1;
                                }
                            }
                        }
                        if (l_U117)
                        {
                            if ((((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_244(), l_U15, 30.00000000, 30.00000000, 12.50000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U15, sub_244(), 0 ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4301(), l_U15 ))) || (IS_PLAYER_TARGETTING_CHAR( sub_4301(), l_U15 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U15 );
                                if (NOT (IS_CAR_DEAD( l_U25 )))
                                {
                                    if (NOT l_U100)
                                    {
                                        TASK_ENTER_CAR_AS_DRIVER( l_U15, l_U25, -1 );
                                        l_U100 = 1;
                                    }
                                    if (l_U100)
                                    {
                                        if (IS_CHAR_IN_CAR( l_U15, l_U25 ))
                                        {
                                            TASK_CAR_DRIVE_WANDER( l_U15, l_U25, 25.00000000, 2 );
                                            l_U120 = 3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U15 )))
                    {
                        if (NOT l_U117)
                        {
                            TASK_PERFORM_SEQUENCE( l_U15, l_U68[8] );
                            l_U117 = 1;
                        }
                        if (l_U117)
                        {
                            if ((HAS_CHAR_SPOTTED_CHAR( l_U15, sub_244() )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U15, sub_244(), 0 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U15 );
                                l_U120 = 2;
                            }
                        }
                    }
                    break;
                }
                break;
                case 2:
                if (NOT (IS_CHAR_INJURED( l_U15 )))
                {
                    if (NOT (IS_PED_IN_COMBAT( l_U15 )))
                    {
                        TASK_COMBAT( l_U15, sub_244() );
                        l_U120 = 3;
                    }
                }
                break;
                case 1:
                switch (l_U97)
                {
                    case 0:
                    if (NOT (IS_CHAR_FATALLY_INJURED( l_U15 )))
                    {
                        if ((((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_244(), l_U15, 30.00000000, 30.00000000, 12.50000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U15, sub_244(), 0 ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4301(), l_U15 ))) || (IS_PLAYER_TARGETTING_CHAR( sub_4301(), l_U15 )))
                        {
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U15 );
                            l_U120 = 2;
                        }
                    }
                    break;
                    default:
                }
                break;
                case 0:
                if (NOT (IS_CHAR_INJURED( l_U15 )))
                {
                    if ((((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_244(), l_U15, 30.00000000, 30.00000000, 12.50000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U15, sub_244(), 0 ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4301(), l_U15 ))) || (IS_PLAYER_TARGETTING_CHAR( sub_4301(), l_U15 )))
                    {
                        TASK_SMART_FLEE_CHAR( l_U15, sub_244(), 800.00000000, 600000 );
                        l_U120 = 3;
                    }
                }
                break;
                case 3: break;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( sub_244() )))
            {
                CLEAR_HELP();
                CLEAR_PRINTS();
                sub_1857();
                sub_1917();
                sub_1934();
                l_U106 = 1;
                sub_9409( 0 );
                TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
                g_U8762 = 0;
                g_U8762 = 0;
                TERMINATE_THIS_SCRIPT();
            }
            break;
            case 3:
            while (NOT (IS_PLAYER_CONTROL_ON( sub_4301() )))
            {
                WAIT( 0 );
            }
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
            CLEAR_PRINTS();
            PRINT_NOW( "VIG_FAIL", 3000, 1 );
            sub_1857();
            sub_1917();
            sub_1934();
            g_U8762 = 0;
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

int sub_2490(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    # -sub_C1FFC0-0xc214c8( sub_2499(), ref l_U47 );
    LOAD_COMBAT_DECISION_MAKER( sub_2594(), ref l_U48 );
    l_U79[0] = sub_2689();
    REQUEST_MODEL( l_U79[0] );
    while (NOT (HAS_MODEL_LOADED( l_U79[0] )))
    {
        WAIT( 0 );
    }
    CREATE_CHAR( 26, l_U79[0], uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U15, 1 );
    if (NOT (IS_CHAR_FATALLY_INJURED( l_U15 )))
    {
        SET_CHAR_AS_MISSION_CHAR( l_U15 );
        SET_CHAR_HEALTH( l_U15, sub_3441() );
        GIVE_DELAYED_WEAPON_TO_CHAR( l_U15, sub_3541(), 100, 1 );
        SET_CHAR_DECISION_MAKER( l_U15, l_U47 );
        SET_COMBAT_DECISION_MAKER( l_U15, l_U48 );
        g_U8762 = 1;
        SET_CHAR_DROWNS_IN_WATER( l_U15, 0 );
        SET_CHAR_CAN_SMASH_GLASS( l_U15, 1 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U15, 1 );
        SET_CHAR_ACCURACY( l_U15, sub_3848() );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U15, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U15, 4 );
        SET_CHAR_RELATIONSHIP( l_U15, 5, 0 );
        SET_CHAR_SHOOT_RATE( l_U15, sub_3982() );
        SET_CHAR_WILL_USE_COVER( l_U15, 1 );
        SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U15, 1 );
        SET_SENSE_RANGE( l_U15, 15.00000000 );
        SET_CHAR_ALLOWED_TO_DUCK( l_U15, 1 );
        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U15, 1 );
        SET_PED_DIES_WHEN_INJURED( l_U15, 1 );
        SET_CHAR_WEAPON_SKILL( l_U15, sub_4152() );
        l_U105 = sub_4241();
        l_U45 = sub_4952();
        SET_CHAR_MONEY( l_U15, l_U45 );
        PRINT_STRING_WITH_SUBSTRING_GIVEN_HASH_KEY_NOW( "PVBST_S", uParam3, 5000, 1 );
        TRIGGER_VIGILANTE_CRIME( 0, uParam0 );
    }
    return 1;
}

int sub_2499()
{
    if (ProtectedGet(g_U8740) < 10)
    {
        return 2;
    }
    else if ((ProtectedGet(g_U8740) >= 10) AND (ProtectedGet(g_U8740) < 20))
    {
        return 2;
    }
    else if (ProtectedGet(g_U8740) >= 20)
    {
        return 2;
    };;;
    return 1;
}

int sub_2594()
{
    if (ProtectedGet(g_U8740) < 10)
    {
        return 7;
    }
    else if ((ProtectedGet(g_U8740) >= 10) AND (ProtectedGet(g_U8740) < 20))
    {
        return 8;
    }
    else if (ProtectedGet(g_U8740) >= 20)
    {
        return 10;
    };;;
    return 2;
}

int sub_2689()
{
    unknown uVar2;
    unknown uVar3;

    uVar2 = sub_2698();
    switch (uVar2)
    {
        case 0:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar3 );
        switch (uVar3)
        {
            case 0: return 869501081;
            case 1: return -301223260;
            case 2: return -503930010;
            case 3: return 207714363;
            case 4: return 1724587620;
            case 5: return -330497431;
            case 6: return -881358690;
            case 7: return 1574850459;
        }
        break;
        case 1:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref uVar3 );
        switch (uVar3)
        {
            case 0: return 492147228;
            case 1: return 1168388225;
            case 2: return -2088164056;
            case 3: return -1836006237;
            case 4: return 1724587620;
            case 5: return -330497431;
            case 6: return -881358690;
        }
        break;
        case 2:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref uVar3 );
        switch (uVar3)
        {
            case 0: return -19263344;
            case 1: return 1844702918;
            case 2: return 280474699;
            case 3: return 280474699;
            case 4: return 510389335;
            case 5: return -164935626;
        }
        break;
        case 3:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar3 );
        switch (uVar3)
        {
            case 0: return -302362397;
            case 1: return 510389335;
            case 2: return -1836006237;
            case 3: return 1543404628;
        }
    }
    return 1543404628;
}

int sub_2698()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_DEAD( sub_244() )))
    {
        GET_CHAR_COORDINATES( sub_244(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        return GET_MAP_AREA_FROM_COORDS( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    }
    return 5;
}

int sub_3441()
{
    if (ProtectedGet(g_U8740) < 5)
    {
        return 200;
    }
    if ((ProtectedGet(g_U8740) >= 5) AND (ProtectedGet(g_U8740) < 10))
    {
        return 300;
    }
    if ((ProtectedGet(g_U8740) >= 10) AND (ProtectedGet(g_U8740) < 20))
    {
        return 350;
    }
    return 450;
}

int sub_3541()
{
    unknown uVar2;

    if (ProtectedGet(g_U8740) < 15)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar2 );
        switch (uVar2)
        {
            case 0: return 7;
            case 1: return 7;
            case 2: return 7;
        }
    }
    if (ProtectedGet(g_U8740) >= 15)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref uVar2 );
        switch (uVar2)
        {
            case 0: return 4;
            case 1: return 13;
            case 2: return 9;
            case 3: return 10;
            case 4: return 15;
            case 5: return 14;
            case 6: return 11;
            case 7: return 17;
            case 8: return 19;
        }
    }
    return 7;
}

int sub_3848()
{
    if (ProtectedGet(g_U8740) < 5)
    {
        return 55;
    }
    if ((ProtectedGet(g_U8740) >= 5) AND (ProtectedGet(g_U8740) < 10))
    {
        return 65;
    }
    if ((ProtectedGet(g_U8740) >= 10) AND (ProtectedGet(g_U8740) < 20))
    {
        return 75;
    }
    return 75;
}

int sub_3982()
{
    if (ProtectedGet(g_U8740) < 5)
    {
        return 35;
    }
    if ((ProtectedGet(g_U8740) >= 5) AND (ProtectedGet(g_U8740) < 10))
    {
        return 45;
    }
    if ((ProtectedGet(g_U8740) >= 10) AND (ProtectedGet(g_U8740) < 20))
    {
        return 65;
    }
    return 35;
}

int sub_4152()
{
    if (ProtectedGet(g_U8740) < 5)
    {
        return 1;
    }
    if ((ProtectedGet(g_U8740) >= 5) AND (ProtectedGet(g_U8740) < 10))
    {
        return 2;
    }
    if ((ProtectedGet(g_U8740) >= 10) AND (ProtectedGet(g_U8740) < 20))
    {
        return 2;
    }
    return 2;
}

void sub_4241()
{
    unknown uVar2;
    unknown uVar3;
    float fVar4;

    GET_GAME_TIMER( ref uVar2 );
    ADD_WIDGET_FLOAT_READ_ONLY( "Distance", ref fVar4 );
    if (l_U121 != 2)
    {
        if ((NOT (IS_CHAR_INJURED( l_U15 ))) AND (IS_PLAYER_PLAYING( sub_4301() )))
        {
            GET_CHAR_COORDINATES( l_U15, ref l_U39._fU0, ref l_U39._fU4, ref l_U39._fU8 );
            GET_CHAR_COORDINATES( sub_244(), ref l_U42._fU0, ref l_U42._fU4, ref l_U42._fU8 );
            l_U39._fU8 = 0.00000000;
            l_U42._fU8 = 0.00000000;
            fVar4 = VDIST( l_U39, l_U42 );
            uVar3 = ABSF( fVar4 );
            fVar4 = uVar3;
        }
    }
    else if ((NOT (IS_CHAR_INJURED( l_U16[0] ))) AND (IS_PLAYER_PLAYING( sub_4301() )))
    {
        GET_CHAR_COORDINATES( l_U16[0], ref l_U39._fU0, ref l_U39._fU4, ref l_U39._fU8 );
        GET_CHAR_COORDINATES( sub_244(), ref l_U42._fU0, ref l_U42._fU4, ref l_U42._fU8 );
        l_U39._fU8 = 0.00000000;
        l_U42._fU8 = 0.00000000;
        fVar4 = VDIST( l_U39, l_U42 );
        uVar3 = ABSF( fVar4 );
        fVar4 = uVar3;
    }
    switch (l_U121)
    {
        case 0:
        fVar4 *= 145.00000000 * sub_4664();
        break;
        case 1:
        fVar4 *= 130.00000000 * sub_4664();
        break;
        case 2:
        fVar4 *= 145.00000000 * sub_4664();
        break;
    }
    return ROUND( fVar4 );
}

void sub_4301()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

float sub_4664()
{
    switch (sub_4673())
    {
        case 0: return 1.20000000;
        case 1: return 1.00000000;
        case 2: return 0.90000000;
        case 3: return 0.75000000;
        case 4: return 0.60000000;
    }
    return 1.00000000;
}

int sub_4673()
{
    if (ProtectedGet(g_U8740) < 5)
    {
        return 0;
    }
    if ((ProtectedGet(g_U8740) >= 5) AND (ProtectedGet(g_U8740) < 10))
    {
        return 1;
    }
    if ((ProtectedGet(g_U8740) >= 10) AND (ProtectedGet(g_U8740) < 15))
    {
        return 2;
    }
    if ((ProtectedGet(g_U8740) >= 15) AND (ProtectedGet(g_U8740) < 20))
    {
        return 3;
    }
    return 4;
}

void sub_4952()
{
    float fVar2;

    if ((NOT (IS_CHAR_INJURED( l_U15 ))) AND (IS_PLAYER_PLAYING( sub_4301() )))
    {
        GET_CHAR_COORDINATES( l_U15, ref l_U39._fU0, ref l_U39._fU4, ref l_U39._fU8 );
        GET_CHAR_COORDINATES( sub_244(), ref l_U42._fU0, ref l_U42._fU4, ref l_U42._fU8 );
        fVar2 = VDIST( l_U39, l_U42 );
    }
    switch (l_U121)
    {
        case 0:
        fVar2 /= 3.50000000;
        break;
        case 1:
        fVar2 /= 0.40000000;
        break;
        case 2:
        fVar2 /= 8.50000000;
        break;
    }
    return CEIL( fVar2 );
}

void sub_5252()
{
    if (l_U122 != 0)
    {
        if ((l_U50 > l_U49) AND (NOT sub_5284()))
        {
            if (l_U98)
            {
                sub_5423( l_U105 );
            }
        }
    }
    return;
}

int sub_5284()
{
    if ((NOT (IS_CHAR_DEAD( sub_244() ))) AND (NOT (IS_CHAR_FATALLY_INJURED( l_U15 ))))
    {
        if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_244() ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_244(), l_U15, 50.00000000, 50.00000000, 8.00000000, 0 ))
            {
                l_U98 = 0;
                l_U104 = 1;
                return 1;
            }
        }
    }
    return 0;
}

void sub_5423(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    char[16] cVar12;
    int iVar16;

    if (NOT l_U123)
    {
        l_U124 = l_U127 + iParam0;
        l_U123 = 1;
    }
    else
    {
        iVar16 = l_U124 - l_U127;
        if (l_U124 > 0)
        {
            if (l_U124 <= l_U125)
            {
                PLAY_AUDIO_EVENT( "FRONTEND_OTHER_COUNTDOWN" );
                l_U125 -= 1000;
                l_U126 = 1;
            }
        }
        if (l_U126)
        {
            if (l_U124 < (l_U125 + 200))
            {
                SET_MULTIPLAYER_HUD_TIME( " " );
                return;
            }
            else if ((l_U124 < (l_U125 + 700)) AND (l_U124 > (l_U125 + 500)))
            {
                SET_MULTIPLAYER_HUD_TIME( " " );
                return;
            }
        }
        if (l_U124 < 0)
        {
            SET_MULTIPLAYER_HUD_TIME( "00:00:00" );
        }
        else
        {
            iVar3 = iVar16 / 10;
            iVar4 = iVar16 / 1000;
            iVar5 = iVar4 / 60;
            iVar3 -= iVar4 * 100;
            iVar4 -= iVar5 * 60;
            iVar6 = iVar3 / 10;
            iVar7 = iVar3 mod 10;
            iVar8 = iVar4 / 10;
            iVar9 = iVar4 mod 10;
            iVar10 = iVar5 / 10;
            iVar11 = iVar5 mod 10;
            sub_5785( ref iVar10 );
            sub_5785( ref iVar11 );
            sub_5785( ref iVar8 );
            sub_5785( ref iVar9 );
            string(ref cVar12, iVar10, 16);
            ConcatString(ref cVar12, iVar11, 16);
            ConcatString(ref cVar12, ":", 16);
            ConcatString(ref cVar12, iVar8, 16);
            ConcatString(ref cVar12, iVar9, 16);
            SET_MULTIPLAYER_HUD_TIME( ref cVar12 );
        }
    }
    return;
}

void sub_5785(unknown uParam0)
{
    if ((uParam0^) < 0)
    {
        (uParam0^) = 0;
    }
    return;
}

void sub_5898()
{
    int I;

    switch (l_U121)
    {
        case 0:
        if (NOT l_U104)
        {
            if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_244() )))
            {
                if (DOES_BLIP_EXIST( l_U29[0] ))
                {
                    REMOVE_BLIP( l_U29[0] );
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U29[0] )))
            {
                if (NOT (IS_CHAR_FATALLY_INJURED( l_U15 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U15, ref l_U29[0] );
                    SET_ROUTE( l_U29[0], 1 );
                }
            }
        }
        else if (NOT (DOES_BLIP_EXIST( l_U29[0] )))
        {
            if (NOT (IS_CHAR_FATALLY_INJURED( l_U15 )))
            {
                ADD_BLIP_FOR_CHAR( l_U15, ref l_U29[0] );
            }
        }
        else
        {
            SET_ROUTE( l_U29[0], 0 );
        }
        break;
        case 1:
        if (NOT l_U104)
        {
            if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_244() )))
            {
                for ( I = 0; I <= 7; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U29[I] ))
                    {
                        REMOVE_BLIP( l_U29[I] );
                    }
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U29[0] )))
            {
                if (NOT (IS_CHAR_FATALLY_INJURED( l_U15 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U15, ref l_U29[0] );
                    SET_ROUTE( l_U29[0], 1 );
                }
            }
            for ( I = 1; I <= 7; I++ )
            {
                if (NOT (DOES_BLIP_EXIST( l_U29[I] )))
                {
                    if (DOES_CHAR_EXIST( l_U16[I - 1] ))
                    {
                        if (NOT (IS_CHAR_FATALLY_INJURED( l_U16[I - 1] )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U16[I - 1], ref l_U29[I] );
                        }
                    }
                }
            }
        }
        else if (DOES_BLIP_EXIST( l_U29[0] ))
        {
            SET_ROUTE( l_U29[0], 0 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U29[0] )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U29[0] )))
            {
                if (NOT (IS_CHAR_FATALLY_INJURED( l_U15 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U15, ref l_U29[0] );
                }
            }
        }
        for ( I = 1; I <= 7; I++ )
        {
            if (NOT (DOES_BLIP_EXIST( l_U29[I] )))
            {
                if (NOT (IS_CHAR_FATALLY_INJURED( l_U16[I - 1] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U16[I - 1], ref l_U29[I] );
                }
            }
        }
        break;
        case 2:
        if (NOT l_U104)
        {
            if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_244() )))
            {
                for ( I = 0; I <= 7; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U29[I] ))
                    {
                        REMOVE_BLIP( l_U29[I] );
                    }
                }
            }
            else
            {
                for ( I = 0; I <= 7; I++ )
                {
                    if (NOT (DOES_BLIP_EXIST( l_U29[I] )))
                    {
                        if (NOT (IS_CHAR_FATALLY_INJURED( l_U16[I] )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U16[I], ref l_U29[I] );
                            if (I == 0)
                            {
                                SET_ROUTE( l_U29[0], 1 );
                            }
                        }
                    }
                }
            }
        }
        else if (DOES_BLIP_EXIST( l_U29[0] ))
        {
            SET_ROUTE( l_U29[0], 0 );
        }
        for ( I = 0; I <= 7; I++ )
        {
            if (NOT (DOES_BLIP_EXIST( l_U29[I] )))
            {
                if (NOT (IS_CHAR_FATALLY_INJURED( l_U16[I] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U16[I], ref l_U29[I] );
                }
            }
        }
        break;
    }
    return;
}

int sub_7012(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;

    if (NOT (IS_CHAR_FATALLY_INJURED( sub_244() )))
    {
        if (NOT (IS_CHAR_FATALLY_INJURED( uParam0 )))
        {
            GET_CHAR_COORDINATES( sub_244(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        }
    }
    GET_GAME_TIMER( ref l_U49 );
    if (NOT l_U129)
    {
        l_U50 = l_U49 + l_U105;
        l_U129 = 1;
    }
    else if (l_U50 < l_U49)
    {
        l_U98 = 0;
    }
    if (NOT l_U98)
    {
        if (l_U104)
        {
            if (l_U121 != 1)
            {
                if ((VDIST( uVar6, uVar3 )) > 150.00000000)
                {
                    return 1;
                }
            }
            else if ((VDIST( uVar6, uVar3 )) > 350.00000000)
            {
                return 1;
            }
        }
        else if ((VDIST( uVar6, uVar3 )) > 50.00000000)
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_FATALLY_INJURED( sub_244() )))
    {
        if (NOT (IS_CHAR_FATALLY_INJURED( uParam0 )))
        {
            GET_CHAR_COORDINATES( sub_244(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
            if ((VDIST( uVar6, uVar3 )) > 100.00000000)
            {
                if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_244() )))
                {
                    if (NOT l_U65)
                    {
                        SETTIMERA( 0 );
                        l_U130 = l_U124 - l_U127;
                        l_U131 = 1;
                        l_U65 = 1;
                    }
                    else if ((l_U124 - l_U127) > 25000)
                    {
                        l_U131 = 0;
                        iVar9 = 26000 - TIMERA();
                        iVar9 = iVar9 / 1000;
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        if (iVar9 == 1)
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER1", iVar9, 1, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER", iVar9, 1, 1 );
                        }
                        if (TIMERA() > 26000)
                        {
                            return 1;
                        }
                    }
                    else if (l_U131)
                    {
                        iVar9 = l_U124 - l_U127;
                        iVar9 = iVar9 / 1000;
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        if (iVar9 == 1)
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER1", iVar9, 1, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER", iVar9, 1, 1 );
                        }
                        if (TIMERA() > l_U130)
                        {
                            return 1;
                        }
                    }
                    else
                    {
                        iVar9 = 26000 - TIMERA();
                        iVar9 = iVar9 / 1000;
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        if (iVar9 == 1)
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER1", iVar9, 1, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER", iVar9, 1, 1 );
                        }
                        if (TIMERA() > 26000)
                        {
                            return 1;
                        }
                    };;;
                }
                else
                {
                    l_U65 = 0;
                    l_U131 = 1;
                }
            }
            else
            {
                l_U65 = 0;
                l_U131 = 0;
            }
            if ((VDIST( uVar6, uVar3 )) > 1500.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_8126()
{
    unknown uVar2;
    int Result;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref uVar2 );
    switch (uVar2)
    {
        case 0:
        Result = -2030171296;
        break;
        case 1:
        Result = 886934177;
        break;
        case 2:
        Result = 1264341792;
        break;
        case 3:
        Result = 970598228;
        break;
        case 4:
        Result = 1348744438;
        break;
        case 5:
        Result = -1883869285;
        break;
        case 6:
        Result = -1260881538;
        break;
        case 7:
        Result = 525509695;
        break;
        case 8:
        Result = 1723137093;
        break;
        case 9:
        Result = -1896659641;
        break;
        case 10:
        Result = 2016857647;
        break;
        case 11:
        Result = 1075851868;
        break;
        case 12:
        Result = -341892653;
        break;
        case 13:
        Result = 1376298265;
        break;
        case 14:
        Result = 2006918058;
        break;
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        Result = 1203311498;
        break;
    }
    return Result;
}

void sub_9409(unknown uParam0)
{
    unknown uVar3;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref uVar3 );
    ProtectedSet(g_U8740, ProtectedGet(g_U8740) + 1);
    if (ProtectedGet(g_U8740) == 20)
    {
        AWARD_ACHIEVEMENT( 19 );
        sub_9462( 0 );
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
        if (NOT (# -NULL-0xc27c84()))
        {
            PRINT_NOW( "VIG_ME11", 7500, 1 );
        }
    }
    else
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
        PRINT_NOW( "VIG_ME10", 7500, 1 );
    }
    TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_VIGILANTE_TARGET_KILLED" );
    INCREMENT_INT_STAT_NO_MESSAGE( 273, l_U106 );
    INCREMENT_INT_STAT_NO_MESSAGE( 359, 1 );
    if (IS_PLAYER_PLAYING( sub_4301() ))
    {
        CLEAR_WANTED_LEVEL( sub_4301() );
    }
    sub_10242( 1 );
    sub_10380();
    return;
}

void sub_9462(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U38828[uParam0]._fU0)
    {
        iVar3 = ProtectedGet(g_U38828[uParam0]._fU8);
        if (iVar3 > 0)
        {
            sub_9531( 6, iVar3 );
            g_U38828[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_9531(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_9701( 0 );
    return;
}

void sub_9701(boolean bParam0)
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
        sub_9946();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_9946()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_10242(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_10293( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_10293(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_10380()
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

void sub_10638(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_FATALLY_INJURED( sub_244() )))
    {
        switch (l_U122)
        {
            case 0:
            GET_CHAR_COORDINATES( sub_244(), ref l_U42._fU0, ref l_U42._fU4, ref l_U42._fU8 );
            # -sub_C1FFC0-0xc214c8( sub_2499(), ref l_U47 );
            LOAD_COMBAT_DECISION_MAKER( sub_2594(), ref l_U48 );
            GENERATE_RANDOM_INT_IN_RANGE( 5, 20, ref iVar11 );
            GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uParam0._fU0, uParam0._fU4, uParam0._fU8, iVar11, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8, ref uVar12 );
            CLEAR_AREA_OF_CARS( uVar6._fU0, uVar6._fU4, uVar6._fU8, 50.00000000 );
            uVar9 = sub_10840();
            uVar10 = sub_2689();
            REQUEST_MODEL( uVar10 );
            REQUEST_MODEL( uVar9 );
            while ((NOT (HAS_MODEL_LOADED( uVar9 ))) || (NOT (HAS_MODEL_LOADED( uVar10 ))))
            {
                WAIT( 0 );
            }
            CREATE_CAR( uVar9, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U25, 1 );
            SET_CAR_HEALTH( l_U25, sub_11145() );
            SET_CAR_HEADING( l_U25, uVar12 );
            GENERATE_RANDOM_FLOAT_IN_RANGE( 3.00000000, 15.89900000, ref uVar13 );
            SET_VEHICLE_DIRT_LEVEL( l_U25, uVar13 );
            SET_PETROL_TANK_HEALTH( l_U25, TO_FLOAT( sub_11145() ) );
            SET_ENGINE_HEALTH( l_U25, TO_FLOAT( sub_11145() ) );
            if (IS_VEH_DRIVEABLE( l_U25 ))
            {
                CREATE_CHAR_INSIDE_CAR( l_U25, 26, uVar10, ref l_U15 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( uVar9 );
            uVar9 = sub_2689();
            if (IS_VEH_DRIVEABLE( l_U25 ))
            {
                CREATE_CHAR( 26, uVar10, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U16[0], 1 );
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U16[0], l_U25, 1 );
            }
            SET_CHAR_DECISION_MAKER( l_U16[0], l_U47 );
            SET_COMBAT_DECISION_MAKER( l_U16[0], l_U48 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U16[0], 23 );
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U16[0], 12, 1000, 1 );
            if (IS_VEH_DRIVEABLE( l_U25 ))
            {
                CREATE_CHAR( 26, uVar10, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U16[1], 1 );
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U16[1], l_U25, 2 );
            }
            SET_CHAR_DECISION_MAKER( l_U16[1], l_U47 );
            SET_COMBAT_DECISION_MAKER( l_U16[1], l_U48 );
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U16[1], 12, 1000, 1 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U16[1], 23 );
            if ((NOT (IS_CHAR_FATALLY_INJURED( l_U15 ))) AND (IS_VEH_DRIVEABLE( l_U25 )))
            {
                SET_CHAR_AS_MISSION_CHAR( l_U15 );
                SET_CHAR_HEALTH( l_U15, sub_3441() );
                GIVE_DELAYED_WEAPON_TO_CHAR( l_U15, sub_3541(), 100, 1 );
                SET_CHAR_DECISION_MAKER( l_U15, l_U47 );
                SET_COMBAT_DECISION_MAKER( l_U15, l_U48 );
                g_U8762 = 1;
                SET_CHAR_ACCURACY( l_U15, sub_3848() );
                SET_CHAR_SHOOT_RATE( l_U15, sub_3982() );
                SET_CHAR_WEAPON_SKILL( l_U15, sub_4152() );
                l_U45 = sub_4952();
                TRIGGER_VIGILANTE_CRIME( 4, uParam0 );
                PRINT_STRING_WITH_SUBSTRING_GIVEN_HASH_KEY_NOW( "PVBST", uParam3, 5000, 1 );
                l_U122 = 1;
                l_U119 = 1;
            }
            l_U106 = 3;
            l_U105 = sub_4241();
            break;
            case 1:
            sub_5252();
            sub_5898();
            if (sub_5284())
            {
                if (NOT l_U99)
                {
                    PRINT_NOW( "VIG_CCL", 7500, 1 );
                    l_U99 = 1;
                }
            }
            if (((IS_CHAR_FATALLY_INJURED( l_U15 )) AND (IS_CHAR_FATALLY_INJURED( l_U16[0] ))) AND (IS_CHAR_FATALLY_INJURED( l_U16[1] )))
            {
                if (NOT (sub_7012( l_U15 )))
                {
                    sub_11980();
                    l_U122 = 2;
                }
                else
                {
                    l_U122 = 3;
                }
            }
            else if (NOT (IS_CHAR_FATALLY_INJURED( l_U15 )))
            {
                switch (l_U119)
                {
                    case 1:
                    GET_CHAR_COORDINATES( l_U15, ref l_U42._fU0, ref l_U42._fU4, ref l_U42._fU8 );
                    GET_CHAR_COORDINATES( sub_244(), ref l_U39._fU0, ref l_U39._fU4, ref l_U39._fU8 );
                    if ((VDIST( l_U42, l_U39 )) < 200.00000000)
                    {
                        l_U119 = 2;
                    }
                    break;
                    case 2:
                    if (IS_VEH_DRIVEABLE( l_U25 ))
                    {
                        GET_CAR_HEALTH( l_U25, ref l_U51 );
                        if (((l_U51 > 350) AND (NOT (CHECK_STUCK_TIMER( l_U25, 3, 10000 )))) AND (NOT (CHECK_STUCK_TIMER( l_U25, 0, 10000 ))))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U15, 16, ref l_U52 );
                            if (l_U52 == 7)
                            {
                                TASK_CAR_DRIVE_WANDER( l_U15, l_U25, 17.00000000, 3 );
                                if (NOT (IS_CHAR_FATALLY_INJURED( l_U16[0] )))
                                {
                                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U16[0] ))
                                    {
                                        GIVE_DELAYED_WEAPON_TO_CHAR( l_U16[0], 13, 1000, 1 );
                                        TASK_DRIVE_BY( l_U16[0], sub_244(), 0, 0.00000000, 0.00000000, 0.00000000, 1000.00000000, 8, 1, sub_12421() );
                                    }
                                }
                                if (NOT (IS_CHAR_FATALLY_INJURED( l_U16[1] )))
                                {
                                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U16[1] ))
                                    {
                                        GIVE_DELAYED_WEAPON_TO_CHAR( l_U16[1], 13, 1000, 1 );
                                        TASK_DRIVE_BY( l_U16[1], sub_244(), 0, 0.00000000, 0.00000000, 0.00000000, 1000.00000000, 8, 1, sub_12421() );
                                    }
                                }
                            }
                            else
                            {
                                GET_CHAR_COORDINATES( l_U15, ref l_U42._fU0, ref l_U42._fU4, ref l_U42._fU8 );
                                GET_CHAR_COORDINATES( sub_244(), ref l_U39._fU0, ref l_U39._fU4, ref l_U39._fU8 );
                                if ((VDIST( l_U42, l_U39 )) < 20.00000000)
                                {
                                    if (l_U53 > 20.00000000)
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U15, 24.00000000 * l_U90[sub_4673()] );
                                            l_U53 = 20.00000000;
                                        }
                                    }
                                }
                                if (((VDIST( l_U42, l_U39 )) > 20.00000000) AND ((VDIST( l_U42, l_U39 )) < 40.00000000))
                                {
                                    if ((l_U53 < 20.00000000) || (l_U53 > 40.00000000))
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U15, 22.00000000 * l_U90[sub_4673()] );
                                            l_U53 = 30.00000000;
                                        }
                                    }
                                }
                                if ((VDIST( l_U42, l_U39 )) > 40.00000000)
                                {
                                    if (l_U53 < 40.00000000)
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U15, 18.00000000 * l_U90[sub_4673()] );
                                            l_U53 = 41.00000000;
                                        }
                                    }
                                }
                            }
                        }
                        else if (l_U104)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar11 );
                            if (iVar11 < 50)
                            {
                                REMOVE_BLIP( l_U29[0] );
                                ADD_BLIP_FOR_CHAR( l_U15, ref l_U29[0] );
                                l_U119 = 4;
                            }
                            else
                            {
                                REMOVE_BLIP( l_U29[0] );
                                ADD_BLIP_FOR_CHAR( l_U15, ref l_U29[0] );
                                l_U119 = 3;
                            }
                        }
                    }
                    else if (l_U104)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar11 );
                        if (iVar11 < 50)
                        {
                            REMOVE_BLIP( l_U29[0] );
                            ADD_BLIP_FOR_CHAR( l_U15, ref l_U29[0] );
                            l_U119 = 4;
                        }
                        else
                        {
                            REMOVE_BLIP( l_U29[0] );
                            ADD_BLIP_FOR_CHAR( l_U15, ref l_U29[0] );
                            l_U119 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U15 )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U15 );
                            TASK_FLEE_CHAR_ANY_MEANS( l_U15, sub_244(), 1000.00000000, -1, 1, 1500, 3000, 50.00000000 );
                            SET_CHAR_USES_DEAFULT_ANIM_GROUP_WHEN_FLEEING( l_U15, 1 );
                            l_U119 = 0;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U16[0] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U16[0] );
                            TASK_COMBAT( l_U16[0], sub_244() );
                            l_U119 = 0;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U16[1] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U16[1] );
                            TASK_COMBAT( l_U16[1], sub_244() );
                            l_U119 = 0;
                        }
                    }
                    break;
                    case 4:
                    if ((NOT (IS_CHAR_INJURED( l_U15 ))) AND (NOT (IS_CHAR_FATALLY_INJURED( sub_244() ))))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U15 );
                            TASK_COMBAT( l_U15, sub_244() );
                            l_U119 = 0;
                        }
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U16[0] ))) AND (NOT (IS_CHAR_FATALLY_INJURED( sub_244() ))))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U16[0] );
                            TASK_COMBAT( l_U16[0], sub_244() );
                            l_U119 = 0;
                        }
                    }
                    break;
                    case 0: break;
                }
                if (IS_CHAR_FATALLY_INJURED( l_U15 ))
                {
                    REMOVE_BLIP( l_U29[0] );
                }
                if (IS_CHAR_FATALLY_INJURED( l_U16[0] ))
                {
                    REMOVE_BLIP( l_U29[1] );
                }
                if (IS_CHAR_FATALLY_INJURED( l_U16[1] ))
                {
                    REMOVE_BLIP( l_U29[2] );
                }
                if (sub_7012( l_U15 ))
                {
                    l_U122 = 3;
                }
            }
            break;
            case 2:
            REMOVE_BLIP( l_U29[0] );
            REMOVE_BLIP( l_U29[1] );
            if (NOT (IS_CHAR_INJURED( sub_244() )))
            {
                CLEAR_HELP();
                sub_1857();
                sub_1917();
                sub_1934();
                sub_9409( 0 );
                TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
                g_U8762 = 0;
                TERMINATE_THIS_SCRIPT();
            }
            break;
            case 3:
            while (NOT (IS_PLAYER_CONTROL_ON( sub_4301() )))
            {
                WAIT( 0 );
            }
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
            PRINT_NOW( "VIG_FAIL", 3000, 1 );
            sub_1857();
            sub_1917();
            sub_1934();
            g_U8762 = 0;
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

void sub_10840()
{
    unknown uVar2;
    int Result;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar2 );
    switch (uVar2)
    {
        case 0:
        Result = -2030171296;
        break;
        case 1:
        Result = 886934177;
        break;
        case 2:
        Result = 1264341792;
        break;
        case 3:
        Result = 970598228;
        break;
        case 4:
        Result = 1348744438;
        break;
        case 5:
        Result = -1883869285;
        break;
        case 6:
        Result = -1260881538;
        break;
        case 7:
        Result = 525509695;
        break;
        default: Result = 1723137093;
    }
    return Result;
}

int sub_11145()
{
    if (ProtectedGet(g_U8740) < 5)
    {
        return 600;
    }
    if ((ProtectedGet(g_U8740) >= 5) AND (ProtectedGet(g_U8740) < 10))
    {
        return 800;
    }
    if ((ProtectedGet(g_U8740) >= 10) AND (ProtectedGet(g_U8740) < 20))
    {
        return 1000;
    }
    return 1200;
}

void sub_11980()
{
    GET_GAME_TIMER( ref l_U49 );
    l_U50 = l_U49 + 3000;
    return;
}

int sub_12421()
{
    if (ProtectedGet(g_U8740) < 5)
    {
        return 25;
    }
    if ((ProtectedGet(g_U8740) >= 5) AND (ProtectedGet(g_U8740) < 10))
    {
        return 50;
    }
    if ((ProtectedGet(g_U8740) >= 10) AND (ProtectedGet(g_U8740) < 20))
    {
        return 75;
    }
    return 75;
}

void sub_14032(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_FATALLY_INJURED( sub_244() )))
    {
        switch (l_U122)
        {
            case 0:
            GET_CHAR_COORDINATES( sub_244(), ref l_U42._fU0, ref l_U42._fU4, ref l_U42._fU8 );
            # -sub_C1FFC0-0xc214c8( sub_2499(), ref l_U47 );
            LOAD_COMBAT_DECISION_MAKER( sub_2594(), ref l_U48 );
            GENERATE_RANDOM_INT_IN_RANGE( 5, 20, ref iVar11 );
            GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uParam0._fU0, uParam0._fU4, uParam0._fU8, iVar11, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8, ref uVar12 );
            CLEAR_AREA_OF_CARS( uVar6._fU0, uVar6._fU4, uVar6._fU8, 50.00000000 );
            uVar9 = sub_10840();
            uVar10 = sub_2689();
            REQUEST_MODEL( uVar9 );
            REQUEST_MODEL( uVar10 );
            while ((NOT (HAS_MODEL_LOADED( uVar9 ))) || (NOT (HAS_MODEL_LOADED( uVar10 ))))
            {
                WAIT( 0 );
            }
            CREATE_CAR( uVar9, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U25, 1 );
            SET_CAR_HEALTH( l_U25, sub_11145() );
            SET_CAR_HEADING( l_U25, uVar12 );
            GENERATE_RANDOM_FLOAT_IN_RANGE( 3.00000000, 15.89900000, ref uVar13 );
            SET_VEHICLE_DIRT_LEVEL( l_U25, uVar13 );
            SET_PETROL_TANK_HEALTH( l_U25, TO_FLOAT( sub_11145() ) );
            SET_ENGINE_HEALTH( l_U25, TO_FLOAT( sub_11145() ) );
            if (IS_VEH_DRIVEABLE( l_U25 ))
            {
                CREATE_CHAR_INSIDE_CAR( l_U25, 26, uVar10, ref l_U15 );
            }
            if (IS_VEH_DRIVEABLE( l_U25 ))
            {
                CREATE_CHAR( 26, uVar10, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U16[0], 1 );
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U16[0], l_U25, 1 );
            }
            SET_CHAR_DECISION_MAKER( l_U16[0], l_U47 );
            SET_COMBAT_DECISION_MAKER( l_U16[0], l_U48 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U16[0], 23 );
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U16[0], 12, 1000, 1 );
            if ((NOT (IS_CHAR_FATALLY_INJURED( l_U15 ))) AND (IS_VEH_DRIVEABLE( l_U25 )))
            {
                SET_CHAR_AS_MISSION_CHAR( l_U15 );
                SET_CHAR_HEALTH( l_U15, sub_3441() );
                GIVE_DELAYED_WEAPON_TO_CHAR( l_U15, sub_3541(), 100, 1 );
                SET_CHAR_DECISION_MAKER( l_U15, l_U47 );
                SET_COMBAT_DECISION_MAKER( l_U15, l_U48 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U15, 23 );
                g_U8762 = 1;
                SET_CHAR_ACCURACY( l_U15, sub_3848() );
                SET_CHAR_SHOOT_RATE( l_U15, sub_3982() );
                SET_CHAR_WEAPON_SKILL( l_U15, sub_4152() );
                l_U45 = sub_4952();
                TRIGGER_VIGILANTE_CRIME( 4, uParam0 );
                PRINT_STRING_WITH_SUBSTRING_GIVEN_HASH_KEY_NOW( "PVBST", uParam3, 5000, 1 );
                l_U119 = 1;
            }
            l_U105 = sub_4241();
            l_U122 = 1;
            break;
            case 1:
            sub_5252();
            sub_5898();
            if (sub_5284())
            {
                if (NOT l_U99)
                {
                    PRINT_NOW( "VIG_CCL", 7500, 1 );
                    l_U99 = 1;
                }
            }
            if ((IS_CHAR_FATALLY_INJURED( l_U15 )) AND (IS_CHAR_FATALLY_INJURED( l_U16[0] )))
            {
                if (NOT (sub_7012( l_U15 )))
                {
                    sub_11980();
                    l_U122 = 2;
                }
                else
                {
                    l_U122 = 3;
                }
            }
            else if (NOT (IS_CHAR_FATALLY_INJURED( l_U15 )))
            {
                switch (l_U119)
                {
                    case 1:
                    GET_CHAR_COORDINATES( l_U15, ref l_U42._fU0, ref l_U42._fU4, ref l_U42._fU8 );
                    GET_CHAR_COORDINATES( sub_244(), ref l_U39._fU0, ref l_U39._fU4, ref l_U39._fU8 );
                    if ((VDIST( l_U42, l_U39 )) < 200.00000000)
                    {
                        l_U119 = 2;
                    }
                    break;
                    case 2:
                    if (IS_VEH_DRIVEABLE( l_U25 ))
                    {
                        GET_CAR_HEALTH( l_U25, ref l_U51 );
                        if (((l_U51 > 350) AND (NOT (CHECK_STUCK_TIMER( l_U25, 3, 10000 )))) AND (NOT (CHECK_STUCK_TIMER( l_U25, 0, 10000 ))))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U15, 16, ref l_U52 );
                            if (l_U52 == 7)
                            {
                                TASK_CAR_DRIVE_WANDER( l_U15, l_U25, 17.00000000, 3 );
                                if (NOT (IS_CHAR_FATALLY_INJURED( l_U16[0] )))
                                {
                                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                                    {
                                        GIVE_DELAYED_WEAPON_TO_CHAR( l_U16[0], 13, 1000, 1 );
                                        TASK_DRIVE_BY( l_U16[0], sub_244(), 0, 0.00000000, 0.00000000, 0.00000000, 1000.00000000, 8, 1, sub_12421() );
                                    }
                                }
                            }
                            else
                            {
                                GET_CHAR_COORDINATES( l_U15, ref l_U42._fU0, ref l_U42._fU4, ref l_U42._fU8 );
                                GET_CHAR_COORDINATES( sub_244(), ref l_U39._fU0, ref l_U39._fU4, ref l_U39._fU8 );
                                if ((VDIST( l_U42, l_U39 )) < 20.00000000)
                                {
                                    if (l_U53 > 20.00000000)
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U15, 24.00000000 * l_U90[sub_4673()] );
                                            l_U53 = 20.00000000;
                                        }
                                    }
                                }
                                if (((VDIST( l_U42, l_U39 )) > 20.00000000) AND ((VDIST( l_U42, l_U39 )) < 40.00000000))
                                {
                                    if ((l_U53 < 20.00000000) || (l_U53 > 40.00000000))
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U15, 22.00000000 * l_U90[sub_4673()] );
                                            l_U53 = 30.00000000;
                                        }
                                    }
                                }
                                if ((VDIST( l_U42, l_U39 )) > 40.00000000)
                                {
                                    if (l_U53 < 40.00000000)
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U15, 18.00000000 * l_U90[sub_4673()] );
                                            l_U53 = 41.00000000;
                                        }
                                    }
                                }
                            }
                        }
                        else if (l_U104)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar11 );
                            if (iVar11 < 50)
                            {
                                REMOVE_BLIP( l_U29[0] );
                                ADD_BLIP_FOR_CHAR( l_U15, ref l_U29[0] );
                                l_U119 = 4;
                            }
                            else
                            {
                                REMOVE_BLIP( l_U29[0] );
                                ADD_BLIP_FOR_CHAR( l_U15, ref l_U29[0] );
                                l_U119 = 3;
                            }
                        }
                    }
                    else if (l_U104)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar11 );
                        if (iVar11 < 50)
                        {
                            REMOVE_BLIP( l_U29[0] );
                            ADD_BLIP_FOR_CHAR( l_U15, ref l_U29[0] );
                            l_U119 = 4;
                        }
                        else
                        {
                            REMOVE_BLIP( l_U29[0] );
                            ADD_BLIP_FOR_CHAR( l_U15, ref l_U29[0] );
                            l_U119 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U15 )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U15 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U15 );
                            TASK_FLEE_CHAR_ANY_MEANS( l_U15, sub_244(), 1000.00000000, -1, 1, 1500, 3000, 50.00000000 );
                            SET_CHAR_USES_DEAFULT_ANIM_GROUP_WHEN_FLEEING( l_U15, 1 );
                            l_U119 = 0;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U16[0] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U16[0] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U16[0] );
                            TASK_COMBAT( l_U16[0], sub_244() );
                            l_U119 = 0;
                        }
                    }
                    break;
                    case 4:
                    if ((NOT (IS_CHAR_INJURED( l_U15 ))) AND (NOT (IS_CHAR_FATALLY_INJURED( sub_244() ))))
                    {
                        TASK_LEAVE_ANY_CAR( l_U15 );
                        TASK_COMBAT( l_U15, sub_244() );
                        l_U119 = 0;
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U16[0] ))) AND (NOT (IS_CHAR_FATALLY_INJURED( sub_244() ))))
                    {
                        TASK_LEAVE_ANY_CAR( l_U16[0] );
                        TASK_COMBAT( l_U16[0], sub_244() );
                        l_U119 = 0;
                    }
                    break;
                    case 0: break;
                }
                if (IS_CHAR_FATALLY_INJURED( l_U15 ))
                {
                    REMOVE_BLIP( l_U29[0] );
                }
                if (IS_CHAR_FATALLY_INJURED( l_U16[0] ))
                {
                    REMOVE_BLIP( l_U29[1] );
                }
                if (sub_7012( l_U15 ))
                {
                    l_U122 = 3;
                }
            }
            break;
            case 2:
            REMOVE_BLIP( l_U29[0] );
            REMOVE_BLIP( l_U29[1] );
            if (NOT (IS_CHAR_INJURED( sub_244() )))
            {
                CLEAR_HELP();
                sub_1857();
                sub_1917();
                sub_1934();
                TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
                sub_9409( 0 );
                g_U8762 = 0;
                TERMINATE_THIS_SCRIPT();
            }
            break;
            case 3:
            while (NOT (IS_PLAYER_CONTROL_ON( sub_4301() )))
            {
                WAIT( 0 );
            }
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
            PRINT_NOW( "VIG_FAIL", 3000, 1 );
            sub_1857();
            sub_1917();
            sub_1934();
            g_U8762 = 0;
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

void sub_16607(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_FATALLY_INJURED( sub_244() )))
    {
        switch (l_U122)
        {
            case 0:
            if (sub_16683( uParam0, uParam3 ))
            {
                l_U122 = 1;
                l_U50 = l_U49 + l_U105;
            }
            break;
            case 1:
            sub_17622();
            sub_5898();
            if (sub_17659( 1112014848 ))
            {
                if (NOT l_U99)
                {
                    PRINT_NOW( "VIG_CCL", 7500, 1 );
                    l_U99 = 1;
                }
            }
            sub_18001();
            sub_18237();
            if (sub_18329())
            {
                l_U122 = 2;
            }
            if (NOT sub_18329())
            {
                if (sub_18416())
                {
                    l_U122 = 3;
                }
            }
            if (l_U50 < l_U49)
            {
                l_U98 = 0;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( sub_244() )))
            {
                CLEAR_HELP();
                sub_1857();
                sub_1917();
                sub_1934();
                TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
                sub_9409( 1 );
                g_U8762 = 0;
                TERMINATE_THIS_SCRIPT();
            }
            break;
            case 3:
            while (NOT (IS_PLAYER_CONTROL_ON( sub_4301() )))
            {
                WAIT( 0 );
            }
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
            PRINT_NOW( "VIG_FAIL", 3000, 1 );
            sub_1857();
            sub_1917();
            sub_1934();
            g_U8762 = 0;
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

int sub_16683(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int I;

    GENERATE_RANDOM_INT_IN_RANGE( 4, sub_16693() + 1, ref iVar6 );
    l_U106 = iVar6;
    uVar11 = sub_2689();
    REQUEST_MODEL( uVar11 );
    while (NOT (HAS_MODEL_LOADED( uVar11 )))
    {
        PRINTSTRING( "LOAD GAME" );
        WAIT( 0 );
    }
    GET_CHAR_COORDINATES( sub_244(), ref l_U42._fU0, ref l_U42._fU4, ref l_U42._fU8 );
    # -sub_C1FFC0-0xc214c8( sub_2499(), ref l_U47 );
    LOAD_COMBAT_DECISION_MAKER( sub_2594(), ref l_U48 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U48, 2 );
    SET_RELATIONSHIP( 5, 23, 0 );
    SET_RELATIONSHIP( 1, 23, 23 );
    g_U8762 = 1;
    CREATE_GROUP( 0, ref uVar10, 1 );
    SET_GROUP_FORMATION( uVar10, sub_16949() );
    SET_GROUP_FORMATION_SPACING( uVar10, 10.00000000 );
    SET_GROUP_SEPARATION_RANGE( uVar10, 200.00000000 );
    for ( I = 0; I <= (iVar6 - 1); I++ )
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -3.00000000, 5.00000000, ref uVar7._fU0 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -3.00000000, 5.00000000, ref uVar7._fU4 );
        CREATE_CHAR( 26, uVar11, uParam0._fU0 + uVar7._fU0, uParam0._fU4 + uVar7._fU4, uParam0._fU8, ref l_U16[I], 1 );
        if (I != 0)
        {
            if (DOES_GROUP_EXIST( uVar10 ))
            {
                SET_GROUP_MEMBER( uVar10, l_U16[I] );
            }
        }
        else if (DOES_GROUP_EXIST( uVar10 ))
        {
            SET_GROUP_LEADER( uVar10, l_U16[I] );
        }
        SET_CHAR_AS_MISSION_CHAR( l_U16[I] );
        SET_CHAR_IS_TARGET_PRIORITY( l_U16[I], 1 );
        SET_CHAR_HEALTH( l_U16[I], sub_3441() );
        GIVE_DELAYED_WEAPON_TO_CHAR( l_U16[I], sub_3541(), 100, 0 );
        SET_CHAR_DECISION_MAKER( l_U16[I], l_U47 );
        SET_COMBAT_DECISION_MAKER( l_U16[I], l_U48 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U16[I], 23 );
        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U16[I], 0 );
        SET_CHAR_WILL_USE_COVER( l_U16[I], 1 );
        SET_PED_DIES_WHEN_INJURED( l_U16[I], 1 );
        SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U16[I], 1 );
        SET_PED_DONT_DO_EVASIVE_DIVES( l_U16[I], 1 );
        SET_CHAR_ACCURACY( l_U16[I], sub_3848() );
        SET_CHAR_SHOOT_RATE( l_U16[I], sub_3982() );
        SET_CHAR_MONEY( l_U16[I], l_U45 / iVar6 );
        SET_CHAR_NEVER_LEAVES_GROUP( l_U16[I], 1 );
        SET_SENSE_RANGE( l_U16[I], 60.00000000 );
    }
    l_U105 = sub_4241();
    l_U45 = sub_4952();
    sub_5423( l_U105 );
    TRIGGER_VIGILANTE_CRIME( 5, uParam0 );
    PRINT_STRING_WITH_SUBSTRING_GIVEN_HASH_KEY_NOW( "PVBST", uParam3, 5000, 1 );
    return 1;
}

int sub_16693()
{
    if (ProtectedGet(g_U8740) < 5)
    {
        return 5;
    }
    if ((ProtectedGet(g_U8740) >= 5) AND (ProtectedGet(g_U8740) < 10))
    {
        return 7;
    }
    return 8;
}

void sub_16949()
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref Result );
    return Result;
}

void sub_17622()
{
    if (l_U122 != 0)
    {
        if ((l_U50 > l_U49) AND (NOT (sub_17659( 1112014848 ))))
        {
            if (l_U98)
            {
                sub_5423( l_U105 );
            }
        }
    }
    return;
}

int sub_17659(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = {sub_17668()};
    if (NOT (IS_CHAR_DEAD( sub_244() )))
    {
        if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_244() ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_244(), uVar3._fU0, uVar3._fU4, uVar3._fU8, uParam0, uParam0, 8.00000000, 0 ))
            {
                l_U98 = 0;
                l_U104 = 1;
                return 1;
            }
        }
    }
    return 0;
}

void sub_17668()
{
    int I;
    int iVar3;
    vector Result;
    vector vVar7;

    for ( I = 0; I <= 7; I++ )
    {
        if (NOT (IS_CHAR_FATALLY_INJURED( l_U16[I] )))
        {
            GET_CHAR_COORDINATES( l_U16[I], ref vVar7.x, ref vVar7.y, ref vVar7.z );
            Result = {Result + vVar7};
            iVar3++;
        }
    }
    Result.x /= iVar3;
    Result.y /= iVar3;
    Result.z /= iVar3;
    return Result;
}

void sub_18001()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        if (DOES_CHAR_EXIST( l_U16[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U16[I] )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U16[I], sub_244(), 0 ))
                {
                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U16[I] );
                    sub_18100();
                }
            }
        }
    }
    return;
}

void sub_18100()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        if (DOES_CHAR_EXIST( l_U16[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U16[I] )))
            {
                if (NOT (IS_PED_IN_COMBAT( l_U16[I] )))
                {
                    TASK_COMBAT( l_U16[I], sub_244() );
                }
            }
        }
    }
    return;
}

void sub_18237()
{
    int I;

    for ( I = 0; I <= 7; I++ )
    {
        if (IS_CHAR_FATALLY_INJURED( l_U16[I] ))
        {
            if (DOES_BLIP_EXIST( l_U29[I] ))
            {
                REMOVE_BLIP( l_U29[I] );
            }
        }
    }
    return;
}

int sub_18329()
{
    int I;

    for ( I = 0; I <= 7; I++ )
    {
        if (NOT (IS_CHAR_FATALLY_INJURED( l_U16[I] )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_18416()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;

    GET_GAME_TIMER( ref l_U49 );
    if (NOT (IS_CHAR_FATALLY_INJURED( sub_244() )))
    {
        GET_CHAR_COORDINATES( sub_244(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    }
    if (NOT l_U129)
    {
        l_U50 = l_U49 + l_U105;
        l_U129 = 1;
    }
    else if (l_U50 < l_U49)
    {
        l_U98 = 0;
    }
    if (NOT l_U98)
    {
        if (l_U121 != 1)
        {
            if (l_U104)
            {
                if ((VDIST( sub_17668(), uVar2 )) > 100.00000000)
                {
                    return 1;
                }
            }
            else if ((VDIST( sub_17668(), uVar2 )) > 50.00000000)
            {
                return 1;
            }
        }
    }
    if (NOT (IS_CHAR_FATALLY_INJURED( sub_244() )))
    {
        if (NOT sub_18329())
        {
            GET_CHAR_COORDINATES( sub_244(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            uVar5 = {sub_17668()};
            if ((VDIST( uVar5, uVar2 )) > 100.00000000)
            {
                if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_244() )))
                {
                    if (NOT l_U65)
                    {
                        SETTIMERA( 0 );
                        l_U130 = l_U124 - l_U127;
                        l_U131 = 1;
                        l_U65 = 1;
                    }
                    else if ((l_U124 - l_U127) > 25000)
                    {
                        l_U131 = 0;
                        iVar8 = 26000 - TIMERA();
                        iVar8 = iVar8 / 1000;
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        if (iVar8 == 1)
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER1", iVar8, 1, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER", iVar8, 1, 1 );
                        }
                        if (TIMERA() > 26000)
                        {
                            return 1;
                        }
                    }
                    else if (l_U131)
                    {
                        iVar8 = l_U124 - l_U127;
                        iVar8 = iVar8 / 1000;
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        if (iVar8 == 1)
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER1", iVar8, 1, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER", iVar8, 1, 1 );
                        }
                        if (TIMERA() > l_U130)
                        {
                            return 1;
                        }
                    }
                    else
                    {
                        iVar8 = 26000 - TIMERA();
                        iVar8 = iVar8 / 1000;
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        if (iVar8 == 1)
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER1", iVar8, 1, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER", iVar8, 1, 1 );
                        }
                        if (TIMERA() > 26000)
                        {
                            return 1;
                        }
                    };;;
                }
                else
                {
                    l_U65 = 0;
                    l_U131 = 1;
                }
            }
            else
            {
                l_U65 = 0;
                l_U131 = 0;
            }
            if ((VDIST( uVar5, uVar2 )) > 1500.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}
