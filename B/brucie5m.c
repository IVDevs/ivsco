void main()
{
    l_U0 = 225;
    l_U1 = 0.92800000;
    l_U2 = 0.01400000;
    l_U3 = 0.93000000;
    l_U4 = -0.02500000;
    l_U5 = -0.11600000;
    l_U6 = 0.90100000;
    l_U7 = 0.39500000;
    l_U8 = 0.55000000;
    l_U9 = 0.86700000;
    l_U10 = 0.39500000;
    l_U11 = 0.55000000;
    l_U12 = 0.88400000;
    l_U13 = 0.88500000;
    l_U14 = 0.86900000;
    l_U15 = 0.87100000;
    l_U16 = 0.31510000;
    l_U17 = 0.47800000;
    l_U18 = 0.00200000;
    l_U19 = 0.01000000;
    l_U20 = 0.83250000;
    l_U21 = 0.79800000;
    l_U22 = 0.80000000;
    l_U23 = 1.23000000;
    l_U24 = 0.83900000;
    l_U25 = 0.80400000;
    l_U26 = 0.31500000;
    l_U27 = 0.47800000;
    l_U28 = 0.86800000;
    l_U29 = 0.83300000;
    l_U30 = 0.39500000;
    l_U31 = 0.55000000;
    l_U156 = 0;
    l_U157 = 1;
    l_U158 = 3;
    l_U160 = 0;
    l_U177 = -1;
    l_U181 = 0;
    l_U182 = 1;
    l_U183 = 1;
    l_U191 = 150.00000000;
    l_U281 = 0;
    l_U282 = 150.00000000;
    l_U332 = 0;
    l_U633 = 0;
    l_U634 = 0;
    l_U635 = 0;
    l_U636 = 0;
    l_U637 = 0;
    l_U638 = 0;
    l_U639 = 0;
    l_U683 = -1;
    l_U684 = 0;
    l_U687 = 0;
    l_U689 = 0;
    l_U693 = 1;
    l_U729 = 0;
    l_U730 = 0;
    l_U731 = 0;
    l_U732 = 0;
    l_U733 = 0;
    l_U734 = 1;
    l_U736 = 8;
    l_U738 = 20.00000000;
    l_U739 = 20;
    l_U740 = 0;
    l_U746 = 2.50000000;
    l_U747 = 0.60000000;
    l_U808 = 0;
    l_U811 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_525();
        sub_3660();
    }
    sub_4408( 8 );
    SET_MISSION_FLAG( 1 );
    sub_4454( "BRACES", 0 );
    l_U701[0] = {1440.77600000, -10.04970000, 23.30740000};
    l_U701[1] = {-608.29710000, -249.37140000, 5.98360000};
    l_U701[2] = {-1087.05700000, 1382.75500000, 23.42370000};
    l_U701[3] = {-215.06470000, 298.83330000, 13.82180000};
    l_U701[4] = {-349.31100000, 1332.01200000, 15.26280000};
    l_U701[5] = {-1248.34000000, 845.88090000, 18.57230000};
    l_U701[6] = {1812.51900000, 715.77910000, 24.87410000};
    l_U701[7] = {1360.40600000, 899.41600000, 12.81980000};
    l_U701[8] = {-1593.36800000, 188.03340000, 12.03330000};
    l_U676[0] = 35.00000000;
    l_U676[1] = 35.00000000;
    l_U676[2] = 35.00000000;
    l_U676[3] = 35.00000000;
    l_U676[4] = 35.00000000;
    l_U670[0] = -1;
    l_U670[1] = -1;
    l_U670[2] = -1;
    l_U670[3] = -1;
    l_U670[4] = -1;
    l_U694[0] = 1;
    l_U694[1] = 1;
    l_U694[2] = 1;
    l_U694[3] = 1;
    l_U694[4] = 1;
    l_U748[0] = 0;
    l_U748[1] = 0;
    l_U748[2] = 0;
    l_U748[3] = 0;
    l_U748[4] = 0;
    l_U32[0] = 0;
    l_U32[1] = 0;
    l_U32[2] = 0;
    l_U32[3] = 0;
    l_U640 = l_U812;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Brucie5p" )) >= 1)
    {
        l_U638 = 1;
    }
    else
    {
        l_U732 = 1;
        l_U638 = 0;
    }
    while (true)
    {
        WAIT( 0 );
        if (sub_5130( 8 ))
        {
            sub_5951( ref l_U767, "BRp5_QUIT", ref l_U808 );
            sub_5951( ref l_U767, "BRP5_INSULT", ref l_U808 );
            sub_5951( ref l_U767, "BRp5_CHILL", ref l_U808 );
            sub_6125( ref l_U767, ref l_U808 );
            l_U811 = 1;
            if (sub_6189( ref l_U767, "BRP5AU", 1 ))
            {
                sub_10177();
                while (l_U811)
                {
                    WAIT( 0 );
                    switch (sub_10465())
                    {
                        case 2:
                        l_U811 = 0;
                        break;
                        default:
                        if (sub_10553( 0 ))
                        {
                            g_U64682 = 0;
                            if (NOT g_U64683)
                            {
                                l_U735 = sub_10845( l_U736 );
                                sub_10955( l_U736, l_U735 );
                            }
                            if (l_U732 == 0)
                            {
                                sub_525();
                            }
                            sub_3660();
                        }
                        break;
                    }
                }
            }
        }
        sub_11044();
        switch (l_U637)
        {
            case 0:
            switch (l_U638)
            {
                case 0:
                sub_30192();
                if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref l_U682 );
                    sub_32161( ref l_U701, ref l_U690 );
                    if (l_U690 == 0)
                    {
                        l_U640 = 4;
                    }
                    if (l_U690 == 1)
                    {
                        l_U640 = 5;
                    }
                    if (l_U690 == 2)
                    {
                        l_U640 = 6;
                    }
                    if (l_U690 == 3)
                    {
                        l_U640 = 7;
                    }
                    if (l_U690 == 4)
                    {
                        l_U640 = 8;
                    }
                    if (l_U690 == 5)
                    {
                        l_U640 = 9;
                    }
                    if (l_U690 == 6)
                    {
                        l_U640 = 10;
                    }
                    if (l_U690 == 7)
                    {
                        l_U640 = 11;
                    }
                    if (l_U690 == 8)
                    {
                        l_U640 = 12;
                    }
                    l_U638 = 3;
                }
                break;
                case 3:
                if (sub_32525())
                {
                    if (sub_33505())
                    {
                        if (sub_41710())
                        {
                            l_U641 = 0;
                            for ( l_U641 = 0; l_U641 < 5; l_U641++ )
                            {
                                if (NOT (IS_CAR_DEAD( l_U664[l_U641] )))
                                {
                                    ADD_BLIP_FOR_CAR( l_U664[l_U641], ref l_U658[l_U641] );
                                    CHANGE_BLIP_DISPLAY( l_U658[l_U641], 1 );
                                    SET_CAR_PROOFS( l_U664[l_U641], 0, 0, 0, 0, 0 );
                                    FREEZE_CAR_POSITION( l_U664[l_U641], 1 );
                                }
                            }
                            ADD_BLIP_FOR_COORD( l_U646._fU0, l_U646._fU4, l_U646._fU8, ref l_U649 );
                            SET_ROUTE( l_U649, l_U734 );
                            CHANGE_BLIP_DISPLAY( l_U649, 2 );
                            if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
                            {
                                PRINT_NOW( "RaceStart", 7500, 1 );
                            }
                            else
                            {
                                PRINT_NOW( "RaceCar", 7500, 1 );
                            }
                            l_U638 = 4;
                        }
                    }
                }
                break;
                case 4:
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_6473(), l_U646._fU0, l_U646._fU4, l_U646._fU8, 200.00000000, 200.00000000, 100.00000000, 0 ))
                {
                    if (NOT l_U733)
                    {
                        for ( l_U641 = 0; l_U641 < 5; l_U641++ )
                        {
                            if (NOT (IS_CAR_DEAD( l_U664[l_U641] )))
                            {
                                FREEZE_CAR_POSITION( l_U664[l_U641], 0 );
                                GET_CAR_COORDINATES( l_U664[l_U641], ref l_U643._fU0, ref l_U643._fU4, ref l_U643._fU8 );
                                SET_CAR_COORDINATES( l_U664[l_U641], l_U643._fU0, l_U643._fU4, l_U643._fU8 );
                            }
                        }
                        CLEAR_AREA( l_U646._fU0, l_U646._fU4, l_U646._fU8, 2.50000000, 0 );
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_6473(), l_U646._fU0, l_U646._fU4, l_U646._fU8, 100.00000000, 100.00000000, 100.00000000, 0 ))
                        {
                            l_U733 = 1;
                        }
                    }
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_6473(), l_U646._fU0, l_U646._fU4, l_U646._fU8, l_U746, l_U746, l_U746, 1 ))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref l_U682 );
                    }
                    if (sub_42474( l_U682 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_HELI( sub_6473() )))
                        {
                            if (sub_42746())
                            {
                                if (sub_44449( 1, 1 ))
                                {
                                    SET_WIDESCREEN_BORDERS( 1 );
                                    if (NOT (IS_CAR_DEAD( l_U682 )))
                                    {
                                        SET_BLIP_THROTTLE_RANDOMLY( l_U682, 1 );
                                    }
                                    GET_GAME_TIMER( ref l_U650 );
                                    l_U638 = 5;
                                    REGISTER_SCRIPT_WITH_AUDIO( 1 );
                                }
                            }
                            else
                            {
                                PRINT_NOW( "LINEUP", 100, 1 );
                            }
                        }
                    }
                    else
                    {
                        PRINT_NOW( "RNEECar", 100, 1 );
                    }
                }
                else
                {
                    sub_44859();
                }
                if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref l_U682 );
                }
                if (sub_42474( l_U682 ))
                {
                    for ( l_U641 = 0; l_U641 < 5; l_U641++ )
                    {
                        if (NOT (IS_CAR_DEAD( l_U664[l_U641] )))
                        {
                            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U664[l_U641], sub_6473() ))
                            {
                                l_U639 = 4;
                                l_U638 = 5;
                                REGISTER_SCRIPT_WITH_AUDIO( 1 );
                            }
                        }
                    }
                }
                else
                {
                    for ( l_U641 = 0; l_U641 < 5; l_U641++ )
                    {
                        if (NOT (IS_CAR_DEAD( l_U664[l_U641] )))
                        {
                            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U664[l_U641], sub_6473() ))
                            {
                                sub_11068();
                            }
                        }
                        if (NOT (IS_CAR_DEAD( l_U664[l_U641] )))
                        {
                            if (NOT (sub_45431( l_U664[l_U641], l_U151, 1.00000000 )))
                            {
                                l_U639 = 4;
                                l_U638 = 5;
                                REGISTER_SCRIPT_WITH_AUDIO( 1 );
                            }
                        }
                    }
                }
                break;
                case 1:
                if (sub_32525())
                {
                    if (sub_41710())
                    {
                        l_U641 = 0;
                        sub_33519( l_U640 );
                        l_U810 = sub_40304( l_U148, l_U151 );
                        l_U646 = {sub_40467( 5, l_U810, 0 )};
                        l_U646._fU8 = l_U701[l_U640 - 4]._fU8;
                        l_U646._fU8 += l_U746;
                        DELETE_OBJECT( ref l_U810 );
                        SWITCH_ROADS_OFF( l_U148._fU0 - 10.00000000, l_U148._fU4 - 10.00000000, l_U148._fU8 - 10.00000000, l_U148._fU0 + 10.00000000, l_U148._fU4 + 10.00000000, l_U148._fU8 + 10.00000000 );
                        if (IS_WANTED_LEVEL_GREATER( sub_646(), 0 ))
                        {
                            PRINT_NOW( "rawant", 7500, 1 );
                        }
                        else
                        {
                            sub_45917();
                        }
                        l_U638 = 2;
                    }
                }
                break;
                case 2:
                if (NOT l_U733)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_6473(), l_U646._fU0, l_U646._fU4, l_U646._fU8, 200.00000000, 200.00000000, 50.00000000, 0 ))
                    {
                        if (TIMERA() > 1000)
                        {
                            if (sub_33505())
                            {
                                for ( l_U641 = 0; l_U641 < 5; l_U641++ )
                                {
                                    if (NOT (IS_CAR_DEAD( l_U664[l_U641] )))
                                    {
                                        if (NOT (DOES_BLIP_EXIST( l_U658[l_U641] )))
                                        {
                                            ADD_BLIP_FOR_CAR( l_U664[l_U641], ref l_U658[l_U641] );
                                            CHANGE_BLIP_DISPLAY( l_U658[l_U641], 1 );
                                            SET_CAR_PROOFS( l_U664[l_U641], 0, 0, 0, 0, 0 );
                                        }
                                    }
                                }
                                for ( l_U641 = 0; l_U641 < 5; l_U641++ )
                                {
                                    if (NOT (IS_CAR_DEAD( l_U664[l_U641] )))
                                    {
                                        GET_CAR_COORDINATES( l_U664[l_U641], ref l_U643._fU0, ref l_U643._fU4, ref l_U643._fU8 );
                                        SET_CAR_HEADING( l_U664[l_U641], l_U151 );
                                        SET_CAR_COORDINATES( l_U664[l_U641], l_U643._fU0, l_U643._fU4, l_U643._fU8 );
                                    }
                                }
                                SETTIMERA( 0 );
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_6473(), l_U646._fU0, l_U646._fU4, l_U646._fU8, 100.00000000, 100.00000000, 50.00000000, 0 ))
                                {
                                    SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
                                    SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
                                    l_U733 = 1;
                                }
                            }
                        }
                    }
                }
                if (IS_WANTED_LEVEL_GREATER( sub_646(), 0 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_6473(), l_U646._fU0, l_U646._fU4, l_U646._fU8, 100.00000000, 100.00000000, 50.00000000, 1 ))
                    {
                        sub_11068();
                    }
                    else if (DOES_BLIP_EXIST( l_U649 ))
                    {
                        PRINT_NOW( "rawant", 7500, 1 );
                        REMOVE_BLIP( l_U649 );
                    }
                }
                else
                {
                    sub_45917();
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_6473(), l_U646._fU0, l_U646._fU4, l_U646._fU8, l_U746, l_U746, l_U746, 1 ))
                    {
                        if (l_U733)
                        {
                            if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref l_U682 );
                                if (NOT (IS_CHAR_IN_ANY_HELI( sub_6473() )))
                                {
                                    if (sub_42474( l_U682 ))
                                    {
                                        if (sub_47325())
                                        {
                                            if (sub_42746())
                                            {
                                                if (sub_44449( 1, 1 ))
                                                {
                                                    SET_WIDESCREEN_BORDERS( 1 );
                                                    if (NOT (IS_CAR_DEAD( l_U682 )))
                                                    {
                                                        SET_BLIP_THROTTLE_RANDOMLY( l_U682, 1 );
                                                    }
                                                    GET_GAME_TIMER( ref l_U650 );
                                                    l_U638 = 5;
                                                    REGISTER_SCRIPT_WITH_AUDIO( 1 );
                                                }
                                            }
                                            else
                                            {
                                                PRINT_NOW( "LINEUP", 100, 1 );
                                            }
                                        }
                                    }
                                    else
                                    {
                                        PRINT_NOW( "RNEECar", 100, 1 );
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_44859();
                    }
                }
                if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref l_U682 );
                    if (HAS_CAR_BEEN_RESPRAYED( l_U682 ))
                    {
                        ;
                    }
                }
                if ((sub_42474( l_U682 )) AND (NOT (IS_CHAR_IN_ANY_HELI( sub_6473() ))))
                {
                    for ( l_U641 = 0; l_U641 < 5; l_U641++ )
                    {
                        if (NOT (IS_CAR_DEAD( l_U664[l_U641] )))
                        {
                            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U664[l_U641], sub_6473() ))
                            {
                                if (IS_CHAR_SHOOTING( sub_6473() ))
                                {
                                    sub_11068();
                                }
                                else
                                {
                                    l_U639 = 4;
                                    l_U638 = 5;
                                    REGISTER_SCRIPT_WITH_AUDIO( 1 );
                                }
                            }
                        }
                    }
                }
                else
                {
                    for ( l_U641 = 0; l_U641 < 5; l_U641++ )
                    {
                        if (NOT (IS_CAR_DEAD( l_U664[l_U641] )))
                        {
                            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U664[l_U641], sub_6473() ))
                            {
                                sub_11068();
                            }
                            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_6473(), l_U664[l_U641], 20.00000000, 20.00000000, 20.00000000, 0 ))
                            {
                                if (NOT (sub_45431( l_U664[l_U641], l_U151, 10.00000000 )))
                                {
                                    l_U639 = 4;
                                    l_U638 = 5;
                                    REGISTER_SCRIPT_WITH_AUDIO( 1 );
                                }
                            }
                        }
                    }
                }
                break;
                case 5:
                if (sub_48032())
                {
                    l_U641 = 0;
                    for ( l_U641 = 0; l_U641 < 5; l_U641++ )
                    {
                        if (NOT (IS_CAR_DEAD( l_U664[l_U641] )))
                        {
                            if ((NOT (IS_CHAR_DEAD( l_U652[l_U641] ))) AND (NOT (IS_CHAR_INJURED( l_U652[l_U641] ))))
                            {
                                CLEAR_CHAR_TASKS( l_U652[l_U641] );
                                FREEZE_CAR_POSITION( l_U664[l_U641], 0 );
                                SET_CAR_PROOFS( l_U664[l_U641], 0, 0, 0, 0, 0 );
                                SET_BLIP_THROTTLE_RANDOMLY( l_U664[l_U641], 0 );
                                WAIT( 100 );
                            }
                        }
                    }
                    if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref l_U682 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U682 )))
                    {
                        SET_BLIP_THROTTLE_RANDOMLY( l_U682, 0 );
                    }
                    REMOVE_BLIP( l_U649 );
                    l_U683++;
                    l_U684++;
                    sub_42922();
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_6473(), 0 );
                    ENABLE_CHASE_AUDIO( 1 );
                    GET_GAME_TIMER( ref l_U692 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    l_U637 = 1;
                }
                break;
            }
            break;
            case 1:
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref l_U682 );
                    if (HAS_CAR_BEEN_RESPRAYED( l_U682 ))
                    {
                        sub_11068();
                    }
                }
            }
            sub_33519( l_U640 );
            sub_42755();
            sub_49774();
            sub_50853( ref l_U689 );
            sub_52030();
            if (TIMERA() > 500)
            {
                sub_52933();
                SETTIMERA( 0 );
            }
            GET_GAME_TIMER( ref l_U691 );
            l_U691 -= l_U692;
            sub_54002( l_U691, l_U689 + 1, 6, l_U693 - 1, ProtectedGet(l_U38), 0 );
            break;
            case 2: break;
        }
    }
    return;
}

void sub_525()
{
    sub_534();
    return;
}

void sub_534()
{
    int iVar2;

    iVar2 = 8;
    sub_548( iVar2 );
    sub_2075( iVar2 );
    return;
}

void sub_548(unknown uParam0)
{
    if (g_U813)
    {
        sub_567();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_646(), 150 );
    switch (uParam0)
    {
        case 0:
        case 3:
        case 8:
        case 19:
        case 22:
        sub_743( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1854( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1989();
    return;
}

void sub_567()
{
    sub_576();
    return;
}

void sub_576()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_646()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_743(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_754( uParam1 );
    sub_949( uParam0, 0, uParam2 );
    sub_949( uParam0, 1, uParam3 );
    sub_949( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_1721();
    return;
}

void sub_754(unknown uParam0)
{
    ADD_SCORE( sub_646(), uParam0 );
    sub_779( uParam0 );
    return;
}

void sub_779(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_890( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_890(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_949(unknown uParam0, int iParam1, int iParam2)
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
        sub_1106( uParam0 );
    }
    return;
}

void sub_1106(unknown uParam0)
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

void sub_1721()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U627[I] = 4;
    }
    return;
}

void sub_1854(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1989()
{
    sub_1998();
    return;
}

void sub_1998()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2075(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1854( "Flow_Quit_Proc_Subpart: Proc Mission not loaded" );
    }
    if (NOT g_U13391[uParam0]._fU160._fU96)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1854( "Flow_Quit_Proc_Subpart: Subpart not active" );
    }
    g_U13391[uParam0]._fU160._fU96 = 0;
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (g_U13391[uParam0]._fU160._fU100 < iVar3)
    {
        g_U13391[uParam0]._fU160._fU100 = iVar3 + 10000;
    }
    g_U10978 = 0;
    g_U10981[uParam0]._fU28 = 1;
    sub_2474();
    sub_3098();
    uVar4 = sub_3133( uParam0 );
    sub_3553( uVar4, 0 );
    return;
}

void sub_2474()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2512( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2512( 1, g_U569[I] )) != 0)
            {
                sub_2798( I );
            }
        }
    }
    if (NOT sub_2964())
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

int sub_2512(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2798(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2883( g_U569 - 1 );
    return;
}

void sub_2883(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2964()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2512( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3098()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

int sub_3133(unknown uParam0)
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
    sub_890( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_3553(int iParam0, boolean bParam1)
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

void sub_3660()
{
    if (l_U637 == 1)
    {
        ENABLE_CHASE_AUDIO( 0 );
    }
    for ( l_U641 = 0; l_U641 < 5; l_U641++ )
    {
        if (NOT (IS_CAR_DEAD( l_U664[l_U641] )))
        {
            LOCK_CAR_DOORS( l_U664[l_U641], 1 );
        }
    }
    sub_3769();
    INCREMENT_INT_STAT_NO_MESSAGE( 55, l_U691 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    sub_3943();
    sub_3981( 8 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    if (DOES_BLIP_EXIST( l_U685 ))
    {
        REMOVE_BLIP( l_U685 );
    }
    if (DOES_BLIP_EXIST( l_U686 ))
    {
        REMOVE_BLIP( l_U686 );
    }
    for ( l_U641 = 0; l_U641 < 5; l_U641++ )
    {
        if (DOES_BLIP_EXIST( l_U658[l_U641] ))
        {
            REMOVE_BLIP( l_U658[l_U641] );
        }
    }
    if (l_U640 == 4)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 334, 1 );
    }
    if (l_U640 == 10)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 336, 1 );
    }
    if (l_U640 == 11)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 338, 1 );
    }
    if (l_U640 == 5)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 340, 1 );
    }
    if (l_U640 == 7)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 342, 1 );
    }
    if (l_U640 == 8)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 344, 1 );
    }
    if (l_U640 == 6)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 346, 1 );
    }
    if (l_U640 == 9)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 348, 1 );
    }
    if (l_U640 == 12)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 350, 1 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3769()
{
    if (l_U636)
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
    l_U634 = 0;
    l_U633 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3943()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3981(int iParam0)
{
    if (g_U91._fU68 == iParam0)
    {
        g_U91._fU68 = -1;
    }
    return;
}

void sub_4408(unknown uParam0)
{
    g_U91._fU68 = uParam0;
    return;
}

void sub_4454(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4490())
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

int sub_4490()
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

int sub_5130(unknown uParam0)
{
    if (g_U15946[uParam0]._fU4 == 1)
    {
        if (g_U15946[uParam0]._fU8[1]._fU0[3] == 1)
        {
            g_U15946[uParam0]._fU4 = 0;
            g_U15946[uParam0]._fU8[1]._fU0[3] = 0;
            if (sub_5223())
            {
                return 0;
            }
            sub_5862();
            return 1;
        }
    }
    return 0;
}

int sub_5223()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BADMAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_3" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CHERISE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CLARENCE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "EDDIE1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "EDDIE2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "GRACIE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "HOSSAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ILYENA" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "IVAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_1_MISSION" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_3" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MARNIE1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MARNIE2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MEL" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PATHOS1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PATHOS1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "SARA_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "SARA2" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_5862()
{
    g_U811 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_5951(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((uParam2^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam2^)], uParam1, 16 );
        (uParam2^)++;
    }
    else
    {
        SCRIPT_ASSERT( "ADD_SPEECH_LABEL - increase the size of your array" );
    }
    return;
}

void sub_6125(unknown uParam0, unknown uParam1)
{
    if ((uParam1^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam1^)], "END", 16 );
    }
    return;
}

int sub_6189(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U91._fU60;
    if (bParam2)
    {
        return sub_6242( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U91._fU368)
    {
        StrCopy( ref g_U91._fU224[0], uParam1, 16 );
        g_U91._fU224[1] = {(uParam0^)[0]};
        sub_8177( uVar14, ref g_U91._fU176 );
        g_U91._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_6242(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_6312( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_6312( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_646() )))
    {
        sub_6312( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_6473() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_6473() ))))
    {
        sub_6312( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_6312( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_6805()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((g_U91._fU372) || (NOT bParam8))
            {
                sub_6312( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 5) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 4))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT sub_6805()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_8177( uParam0, ref g_U91._fU176 );
    sub_9558( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_9798( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

void sub_6312(unknown uParam0)
{
    return;
}

void sub_6473()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_6805()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_6862())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_6862()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_646() )))
    {
        sub_6312( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_6312( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_6312( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_6312( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_646() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_6473() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_6473(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_6312( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_6473() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_6312( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_6312( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_646() )))
    {
        sub_6312( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_8177(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_9558(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_9798(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_10177()
{
    for ( l_U641 = 0; l_U641 < 5; l_U641++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U652[l_U641] )))
        {
            if (IS_VEH_DRIVEABLE( l_U664[l_U641] ))
            {
                CLEAR_CHAR_TASKS( l_U652[l_U641] );
                TASK_CAR_DRIVE_WANDER( l_U652[l_U641], l_U664[l_U641], 30.00000000, 3 );
            }
        }
        if (DOES_BLIP_EXIST( l_U658[l_U641] ))
        {
            REMOVE_BLIP( l_U658[l_U641] );
        }
    }
    if (DOES_BLIP_EXIST( l_U685 ))
    {
        REMOVE_BLIP( l_U685 );
    }
    if (DOES_BLIP_EXIST( l_U686 ))
    {
        REMOVE_BLIP( l_U686 );
    }
    DELETE_CHECKPOINT( l_U741 );
    return;
}

int sub_10465()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_10553(boolean bParam0)
{
    unknown uVar3;

    if (g_U91._fU60 != -1)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U91._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_6473(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_6312( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

int sub_10845(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result <= 14; Result++ )
    {
        switch (g_U15946[uParam0]._fU168._fU12[Result])
        {
            case 2:
            case 0:
            return Result;
            break;
        }
    }
    return -1;
}

void sub_10955(unknown uParam0, unknown uParam1)
{
    g_U15946[uParam0]._fU168._fU12[uParam1] = 2;
    g_U15946[uParam0]._fU168._fU0 = 2;
    return;
}

void sub_11044()
{
    if (IS_KEYBOARD_KEY_PRESSED( 33 ))
    {
        sub_11068();
    }
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        ProtectedSet(g_U64679, 3);
        ProtectedSet(g_U64680, 3);
        ProtectedSet(g_U64681, 3);
        if (NOT g_U64683)
        {
            sub_11586();
            g_U64683 = 1;
        }
        sub_15240();
    }
    if (IS_KEYBOARD_KEY_PRESSED( 45 ))
    {
        sub_15240();
    }
    return;
}

void sub_11068()
{
    if (l_U637 == 1)
    {
        if (NOT l_U809)
        {
            PRINT_NOW( "LOSEBR", 7500, 1 );
        }
        else
        {
            PRINT_NOW( "raband", 7500, 1 );
        }
    }
    else if (IS_WANTED_LEVEL_GREATER( sub_646(), 0 ))
    {
        PRINT_NOW( "racops", 7500, 1 );
    }
    else
    {
        PRINT_NOW( "raband", 7500, 1 );
    }
    for ( l_U641 = 0; l_U641 < 5; l_U641++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U652[l_U641] )))
        {
            if (IS_VEH_DRIVEABLE( l_U664[l_U641] ))
            {
                CLEAR_CHAR_TASKS( l_U652[l_U641] );
                TASK_CAR_DRIVE_WANDER( l_U652[l_U641], l_U664[l_U641], 30.00000000, 3 );
            }
        }
    }
    g_U64682 = 0;
    if (NOT g_U64683)
    {
        l_U735 = sub_10845( l_U736 );
        sub_10955( l_U736, l_U735 );
    }
    if (l_U732 == 0)
    {
        sub_525();
    }
    g_U64685++;
    if (g_U64685 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_646(), 150 );
        SAY_AMBIENT_SPEECH( sub_6473(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 331, 1 );
    INCREMENT_INT_STAT_NO_MESSAGE( 99, 0 );
    sub_3660();
    return;
}

void sub_11586()
{
    sub_11595();
    return;
}

void sub_11595()
{
    int iVar2;
    int iVar3;

    iVar2 = 8;
    iVar3 = 8;
    sub_11625( iVar2, iVar3, "Friend_9" );
    return;
}

void sub_11625(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[64] cVar5;
    int iVar21;
    int iVar22;
    int iVar23;

    StrCopy( ref cVar5, "", 64 );
    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc not setup", 64);
        sub_11769( ref cVar5 );
        return;
    }
    if (g_U13391[uParam0]._fU160._fU76 == -1)
    {
        PRINTSTRING( "Flow_Proc_Complete error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        StrCopy( ref cVar5, uParam2, 64 );
        ConcatString(ref cVar5, " Proc_Complete: proc ID not setup", 64);
        sub_11769( ref cVar5 );
        return;
    }
    sub_12054( uParam0 );
    iVar21 = -1;
    iVar22 = -1;
    iVar23 = -1;
    if (sub_12789( uParam0, ref iVar21, ref iVar22, ref iVar23 ))
    {
        sub_12924( iVar21, uParam1, iVar22, iVar23 );
    }
    return;
}

void sub_11769(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_12054(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 5;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        iVar3 = 0;
        break;
        case 22:
        iVar3 = 1;
        break;
        case 19:
        iVar3 = 2;
        break;
        case 8:
        iVar3 = 3;
        break;
        case -1:
        iVar3 = 4;
        break;
        default: return;
    }
    iVar4 = 0;
    if (NOT g_U64792[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U64792[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_12229( 1, iVar4 );
            g_U64792[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_12229(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_12411( 0 );
    return;
}

void sub_12411(boolean bParam0)
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
        sub_12666();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_12666()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

int sub_12789(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 39;
        (uParam2^) = 55;
        (uParam3^) = 360000;
        return 1;
        case 3:
        (uParam1^) = 40;
        (uParam2^) = 15;
        (uParam3^) = 360000;
        return 1;
        case 8:
        (uParam1^) = 41;
        (uParam2^) = 21;
        (uParam3^) = 360000;
        return 1;
    }
    return 0;
}

void sub_12924(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    sub_12946( uParam0, uParam1, uParam2, uParam3, iVar6 );
    return;
}

void sub_12946(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_13058( uParam1, uParam2 );
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
    sub_14992( iParam0, iParam3 );
    return;
}

void sub_13058(unknown uParam0, unknown uParam1)
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
    uVar11 = sub_13081( uParam0 );
    sub_13572( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_13916( ref uVar4, 1 );
    sub_13944( ref uVar4, 0 );
    sub_13972( ref uVar4, 2 );
    sub_14002( ref uVar4 );
    return;
}

int sub_13081(unknown uParam0)
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
    sub_890( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_13572(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_13594( uParam0, 0, iParam4 + 0 );
    sub_13594( uParam1, 1, iParam4 + 0 );
    sub_13594( uParam2, 2, iParam4 + 0 );
    sub_13594( uParam3, 3, iParam4 + 0 );
    sub_13594( 0, 4, iParam4 + 0 );
    sub_13594( 1, 5, iParam4 + 0 );
    sub_13594( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_13594(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_13916(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_13944(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_13972(int iParam0, unknown uParam1)
{
    sub_13594( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_14002(int iParam0)
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
        if (NOT sub_14072())
        {
            sub_2798( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_14199( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2798( iVar9 );
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
                ConcatString(ref cVar5, sub_2512( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_2512( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_14072()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2512( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_2798( I );
            return 1;
        }
    }
    return 0;
}

int sub_14199(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_14264( uParam0, g_U569[Result] ))
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

int sub_14264(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_2512( 0, uParam0 );
        if (iVar14 == (sub_2512( 0, uParam6 )))
        {
            iVar15 = sub_2512( 3, uParam0 );
            if (iVar15 == (sub_2512( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_14992(unknown uParam0, int iParam1)
{
    g_U63988._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_15031( iParam1 ))
    {
        g_U63988._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_15031(int iParam0)
{
    int iVar3;

    iVar3 = sub_15040();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_15095();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_15040()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_15095()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_15240()
{
    int iVar2;

    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    if (NOT g_U64684)
    {
        sub_15273( 20 );
        UNLOCK_MISSION_NEWS_STORY( 20 );
        sub_18484( 1 );
        g_U64684 = 1;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 332, 1 );
    iVar2 = GET_INT_STAT( 332 );
    if (iVar2 > 19)
    {
        AWARD_ACHIEVEMENT( 6 );
    }
    g_U64685 = 0;
    PRINT_NOW( "WINBR", 7500, 1 );
    if (NOT g_U64683)
    {
        if (((l_U640 == 4) || (l_U640 == 10)) || (l_U640 == 11))
        {
            ProtectedSet(g_U64679, ProtectedGet(g_U64679) + 1);
        }
        if (((l_U640 == 5) || (l_U640 == 7)) || (l_U640 == 8))
        {
            ProtectedSet(g_U64680, ProtectedGet(g_U64680) + 1);
        }
        if (((l_U640 == 6) || (l_U640 == 9)) || (l_U640 == 12))
        {
            ProtectedSet(g_U64681, ProtectedGet(g_U64681) + 1);
        }
        l_U735 = sub_10845( l_U736 );
        sub_18790( l_U736, l_U735, 9 );
    }
    sub_16315( "\n iGlobalEastRaceCount = ", ProtectedGet(g_U64679) );
    sub_16315( "\n iGlobalMHRaceCount = ", ProtectedGet(g_U64680) );
    sub_16315( "\n iGlobalNJRaceCount = ", ProtectedGet(g_U64681) );
    if (l_U640 == 4)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 333, 1 );
        iVar2 = GET_INT_STAT( 56 );
        if (iVar2 > 0)
        {
            if (l_U691 < iVar2)
            {
                SET_INT_STAT( 56, l_U691 );
            }
        }
        else
        {
            REGISTER_INT_STAT( 56, l_U691 );
        }
    }
    if (l_U640 == 10)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 335, 1 );
        iVar2 = GET_INT_STAT( 57 );
        if (iVar2 > 0)
        {
            if (l_U691 < iVar2)
            {
                SET_INT_STAT( 57, l_U691 );
            }
        }
        else
        {
            REGISTER_INT_STAT( 57, l_U691 );
        }
    }
    if (l_U640 == 11)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 337, 1 );
        iVar2 = GET_INT_STAT( 58 );
        if (iVar2 > 0)
        {
            if (l_U691 < iVar2)
            {
                SET_INT_STAT( 58, l_U691 );
            }
        }
        else
        {
            REGISTER_INT_STAT( 58, l_U691 );
        }
    }
    if (l_U640 == 5)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 339, 1 );
        iVar2 = GET_INT_STAT( 59 );
        if (iVar2 > 0)
        {
            if (l_U691 < iVar2)
            {
                SET_INT_STAT( 59, l_U691 );
            }
        }
        else
        {
            REGISTER_INT_STAT( 59, l_U691 );
        }
    }
    if (l_U640 == 7)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 341, 1 );
        iVar2 = GET_INT_STAT( 60 );
        if (iVar2 > 0)
        {
            if (l_U691 < iVar2)
            {
                SET_INT_STAT( 60, l_U691 );
            }
        }
        else
        {
            REGISTER_INT_STAT( 60, l_U691 );
        }
    }
    if (l_U640 == 8)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 343, 1 );
        iVar2 = GET_INT_STAT( 61 );
        if (iVar2 > 0)
        {
            if (l_U691 < iVar2)
            {
                SET_INT_STAT( 61, l_U691 );
            }
        }
        else
        {
            REGISTER_INT_STAT( 61, l_U691 );
        }
    }
    if (l_U640 == 6)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 345, 1 );
        iVar2 = GET_INT_STAT( 62 );
        if (iVar2 > 0)
        {
            if (l_U691 < iVar2)
            {
                SET_INT_STAT( 62, l_U691 );
            }
        }
        else
        {
            REGISTER_INT_STAT( 62, l_U691 );
        }
    }
    if (l_U640 == 9)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 347, 1 );
        iVar2 = GET_INT_STAT( 63 );
        if (iVar2 > 0)
        {
            if (l_U691 < iVar2)
            {
                SET_INT_STAT( 63, l_U691 );
            }
        }
        else
        {
            REGISTER_INT_STAT( 63, l_U691 );
        }
    }
    if (l_U640 == 12)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 349, 1 );
        iVar2 = GET_INT_STAT( 64 );
        if (iVar2 > 0)
        {
            if (l_U691 < iVar2)
            {
                SET_INT_STAT( 64, l_U691 );
            }
        }
        else
        {
            REGISTER_INT_STAT( 64, l_U691 );
        }
    }
    if (l_U732 == 0)
    {
        sub_19969();
    }
    g_U64682 = 1;
    CLEAR_WANTED_LEVEL( sub_646() );
    sub_29962();
    WAIT( 0 );
    sub_3943();
    sub_3660();
    return;
}

void sub_15273(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_15360( iParam0 ))
    {
        sub_16422( iParam0 );
    }
    return;
}

int sub_15360(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 20 )) || (IS_BIT_SET( g_U1452[uParam0], 21 )))
    {
        return 0;
    }
    sub_15417( ref uVar3, 1, 0, 0 );
    sub_16029( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_6312( "\n ----------------------------------------------------------------" );
    sub_16315( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_6312( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_15417(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_15470( iParam0, uParam1, uParam2 );
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
        sub_15602( iParam0 + 0 );
    }
    return;
}

void sub_15470(int iParam0, int iParam1, int iParam2)
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
        sub_15602( iParam0 + 0 );
    }
    return;
}

void sub_15602(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_15633( iParam0->_fU4 )))
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

int sub_15633(unknown uParam0)
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

void sub_16029(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_16315(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16422(unknown uParam0)
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

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_16633( 20, 6, 16383, 16383, ref uVar4 );
        sub_17309( ref uVar4, 7 );
        sub_17340( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_16633( 20, 7, 9, 16383, ref uVar4 );
        sub_17309( ref uVar4, 7 );
        sub_17340( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_16633(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_16657( uParam0, 0, iParam4 + 0 );
    sub_16657( uParam1, 1, iParam4 + 0 );
    sub_16657( uParam2, 2, iParam4 + 0 );
    sub_16657( uParam3, 3, iParam4 + 0 );
    sub_16657( 0, 4, iParam4 + 0 );
    sub_16657( 1, 5, iParam4 + 0 );
    sub_16657( 65535, 6, iParam4 + 0 );
    sub_16657( 0, 12, iParam4 + 0 );
    sub_16657( 0, 11, iParam4 + 0 );
    sub_16657( 0, 14, iParam4 + 0 );
    sub_16657( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_16657( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_16657( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_16657(unknown uParam0, unknown uParam1, int iParam2)
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
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_17309(int iParam0, unknown uParam1)
{
    sub_16657( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_17340(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_17380())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_18067( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_17866( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_17380()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_17414( 5, g_U968[I] )) == 7)
        {
            sub_17866( I );
            return 1;
        }
    }
    return 0;
}

int sub_17414(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_17866(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_17939( 39 );
    return;
}

void sub_17939(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_18067(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_18128( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_18128(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_18484(unknown uParam0)
{
    if (g_U1816[uParam0] == 0)
    {
        sub_15417( ref g_U1821[uParam0], 4, 0, 0 );
        g_U1816[uParam0] = 1;
    }
    return;
}

void sub_18790(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U15946[uParam0]._fU168._fU12[uParam1] = 1;
    g_U15946[uParam0]._fU168._fU0 = 1;
    return sub_18843( uParam0, uParam2 );
}

int sub_18843(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (g_U15946[uParam0]._fU168._fU12[I] != 1)
        {
            sub_16315( "\n Player has NOT passed mission ", I );
            return 0;
        }
        else
        {
            sub_16315( "\n Player has passed mission ", I );
        }
    }
    return 1;
}

void sub_19969()
{
    sub_19978();
    return;
}

void sub_19978()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 8;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_20005( iVar3, iVar4, iVar5 );
    sub_2075( iVar2 );
    return;
}

void sub_20005(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 8;
    sub_20036( iVar5, uParam0, uParam1, uParam2, "Friend_9" );
    return;
}

void sub_20036(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_11769( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_11769( ref cVar9 );
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
            sub_11769( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_11769( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_11769( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_11769( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_20575( iParam0, iVar7 );;;
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
                sub_20972( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_20972( 0, 4 );
            }
        }
    }
    if (NOT (sub_21061( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_646(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_646() );
    }
    sub_2474();
    bVar27 = true;
    uVar28 = sub_20575( iParam0, iVar7 );
    uVar29 = sub_3133( iParam0 );
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
                sub_28832( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_29262();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_29347( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_29404( iParam0 );
                sub_29539( 0 );
                sub_3553( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_29647();
        }
    }
    if (bParam2)
    {
        sub_29262();
        sub_29735();
        sub_29539( 0 );
    }
    if (bParam3)
    {
        sub_29262();
        sub_29775();
        sub_29539( 0 );
        sub_3553( uVar29, 0 );
    }
    sub_29826();
    return;
}

int sub_20575(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_890( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_20972(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_21061(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_21269( uParam1 );
        break;
        case 1:
        bVar8 = sub_22252( uParam1 );
        break;
        case 2:
        bVar8 = sub_22478( uParam1 );
        break;
        case 3:
        bVar8 = sub_22628( uParam1 );
        break;
        case 4:
        bVar8 = sub_22906( uParam1 );
        break;
        case 5:
        bVar8 = sub_23209( uParam1 );
        break;
        case 6:
        bVar8 = sub_23408( uParam1 );
        break;
        case 7:
        bVar8 = sub_23634( uParam1 );
        break;
        case 8:
        bVar8 = sub_23869( uParam1 );
        break;
        case 9:
        bVar8 = sub_24244( uParam1 );
        break;
        case 10:
        bVar8 = sub_24491( uParam1 );
        break;
        case 11:
        bVar8 = sub_24630( uParam1 );
        break;
        case 12:
        bVar8 = sub_24929( uParam1 );
        break;
        case 13:
        bVar8 = sub_25157( uParam1 );
        break;
        case 14:
        bVar8 = sub_25444( uParam1 );
        break;
        case 15:
        bVar8 = sub_25726( uParam1 );
        break;
        case 16:
        bVar8 = sub_26008( uParam1 );
        break;
        case 17:
        bVar8 = sub_26209( uParam1 );
        break;
        case 18:
        bVar8 = sub_26282( uParam1 );
        break;
        case 19:
        bVar8 = sub_26496( uParam1 );
        break;
        case 20:
        bVar8 = sub_26749( uParam1 );
        break;
        case 21:
        bVar8 = sub_26996( uParam1 );
        break;
        case 22:
        bVar8 = sub_27197( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1854( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_20575( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_27520( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_21269(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_743( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_743( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_743( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_743( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_743( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_743( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_743( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_743( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_743( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_743( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_743( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_743( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_743( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_743( iVar3, 0, 3, 1, 0, 0 );
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
        sub_743( iVar3, 0, sub_21865(), sub_22001(), 0, 0 );
        break;
        default:
        sub_22160( "Friend 1", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Friend 1", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21865()
{
    switch (l_U627[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1854( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

int sub_22001()
{
    switch (l_U627[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1854( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_22160(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_22252(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_743( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_22160( "Contact 2", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 2", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22478(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_743( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_22160( "Girl 3", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Girl 3", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22628(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_743( iVar3, 0, sub_21865(), sub_22001(), 0, 0 );
        break;
        default:
        sub_22160( "Friend 4", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Friend 4", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22906(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_743( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_743( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_743( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_743( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_22160( "Contact 5", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 5", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23209(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_22160( "Contact 7", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 7", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23408(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_743( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_22160( "Contact 7b", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 7b", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23634(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_743( iVar3, 0, sub_21865(), sub_22001(), 0, 0 );
        break;
        default:
        sub_22160( "Friend 8", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Friend 8", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23869(unknown uParam0)
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
        sub_743( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_743( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_743( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_743( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_743( iVar3, 0, sub_21865(), sub_22001(), 0, 0 );
        break;
        default:
        sub_22160( "Friend 9", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Friend 9", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24244(unknown uParam0)
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
        sub_743( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_743( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_743( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_22160( "Contact 10", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_22160( "Contact 10", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24491(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_22160( "Girl 11", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Girl 11", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24630(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_743( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_743( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_743( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_743( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_743( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_22160( "Contact 12", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 12", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24929(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_743( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_22160( "Contact 13", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 13", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25157(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_743( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_743( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_743( iVar3, 0, sub_21865(), sub_22001(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_22160( "Friend 15", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Friend 15", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25444(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_743( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_743( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_743( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_22160( "Contact 16", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 16", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25726(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_743( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_743( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_743( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_22160( "Contact 18", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 18", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26008(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_22160( "Contact 19", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 19", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26209(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_22160( "Girl 20", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26282(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_22160( "Contact 21", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 21", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26496(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_743( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_743( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_22160( "Contact 22", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 22", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26749(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_743( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_743( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_743( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_22160( "Contact 24", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 24", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26996(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_743( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_743( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_743( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_22160( "Contact 25", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22160( "Contact 25", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27197(unknown uParam0)
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
        sub_743( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_22160( "Girl 26", 1 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_22160( "Girl 26", 0 );
        sub_743( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_27520(int iParam0, int iParam1)
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
    if (sub_27568( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_27789( iParam1 );
    }
    return;
}

int sub_27568(int iParam0, int iParam1)
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
            sub_12229( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_27789(int iParam0)
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
        sub_28122( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_28122( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_28122( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_28122( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_28122( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_28122( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_28122( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_28122( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_28122( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_28122( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_28122( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_28122( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_28122( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_28122( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_28122( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_28122( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_28122( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_28122( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_28122( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_28122(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_28832(unknown uParam0, unknown uParam1)
{
    sub_28851( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_28851(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_29262()
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

int sub_29347(int iParam0, int iParam1)
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

void sub_29404(unknown uParam0)
{
    sub_29413();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_29413()
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

void sub_29539(unknown uParam0)
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

void sub_29647()
{
    sub_29656();
    return;
}

void sub_29656()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_29735()
{
    sub_29656();
    return;
}

void sub_29775()
{
    sub_29656();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_29826()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_15040();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

void sub_29962()
{
    return sub_29973( 0, 1 );
}

int sub_29973(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((uParam1) AND (g_U555 != 9))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

void sub_30192()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT l_U730)
    {
        if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (IS_KEYBOARD_KEY_PRESSED( 2 )))
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar3, ref uVar4 );
            LOAD_SCENE( l_U701[0]._fU0, l_U701[0]._fU4, l_U701[0]._fU8 );
            CREATE_CAR( uVar3, l_U701[0]._fU0, l_U701[0]._fU4, l_U701[0]._fU8, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( sub_6473(), uVar2 );
            SET_CAR_HEADING( uVar2, 140.00000000 );
            SET_CAR_COORDINATES( uVar2, l_U701[0]._fU0, l_U701[0]._fU4, l_U701[0]._fU8 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U730 = 1;
        }
        if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (IS_KEYBOARD_KEY_PRESSED( 3 )))
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar3, ref uVar4 );
            LOAD_SCENE( l_U701[1]._fU0, l_U701[1]._fU4, l_U701[1]._fU8 );
            CREATE_CAR( uVar3, l_U701[1]._fU0, l_U701[1]._fU4, l_U701[1]._fU8, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( sub_6473(), uVar2 );
            SET_CAR_HEADING( uVar2, 200.00000000 );
            SET_CAR_COORDINATES( uVar2, l_U701[1]._fU0, l_U701[1]._fU4, l_U701[1]._fU8 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U730 = 1;
        }
        if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (IS_KEYBOARD_KEY_PRESSED( 4 )))
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar3, ref uVar4 );
            LOAD_SCENE( l_U701[2]._fU0, l_U701[2]._fU4, l_U701[2]._fU8 );
            CREATE_CAR( uVar3, l_U701[2]._fU0, l_U701[2]._fU4, l_U701[2]._fU8, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( sub_6473(), uVar2 );
            SET_CAR_HEADING( uVar2, 270.00000000 );
            SET_CAR_COORDINATES( uVar2, l_U701[2]._fU0, l_U701[2]._fU4, l_U701[2]._fU8 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U730 = 1;
        }
        if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (IS_KEYBOARD_KEY_PRESSED( 5 )))
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar3, ref uVar4 );
            LOAD_SCENE( l_U701[3]._fU0, l_U701[3]._fU4, l_U701[3]._fU8 );
            CREATE_CAR( uVar3, l_U701[3]._fU0, l_U701[3]._fU4, l_U701[3]._fU8, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( sub_6473(), uVar2 );
            SET_CAR_HEADING( uVar2, 190.00000000 );
            SET_CAR_COORDINATES( uVar2, l_U701[3]._fU0, l_U701[3]._fU4, l_U701[3]._fU8 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U730 = 1;
        }
        if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (IS_KEYBOARD_KEY_PRESSED( 6 )))
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar3, ref uVar4 );
            LOAD_SCENE( l_U701[4]._fU0, l_U701[4]._fU4, l_U701[4]._fU8 );
            CREATE_CAR( uVar3, l_U701[4]._fU0, l_U701[4]._fU4, l_U701[4]._fU8, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( sub_6473(), uVar2 );
            SET_CAR_HEADING( uVar2, 0.00000000 );
            SET_CAR_COORDINATES( uVar2, l_U701[4]._fU0, l_U701[4]._fU4, l_U701[4]._fU8 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U730 = 1;
        }
        if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (IS_KEYBOARD_KEY_PRESSED( 7 )))
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar3, ref uVar4 );
            LOAD_SCENE( l_U701[5]._fU0, l_U701[5]._fU4, l_U701[5]._fU8 );
            CREATE_CAR( uVar3, l_U701[5]._fU0, l_U701[5]._fU4, l_U701[5]._fU8, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( sub_6473(), uVar2 );
            SET_CAR_HEADING( uVar2, 180.00000000 );
            SET_CAR_COORDINATES( uVar2, l_U701[5]._fU0, l_U701[5]._fU4, l_U701[5]._fU8 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U730 = 1;
        }
        if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (IS_KEYBOARD_KEY_PRESSED( 8 )))
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar3, ref uVar4 );
            LOAD_SCENE( l_U701[6]._fU0, l_U701[6]._fU4, l_U701[6]._fU8 );
            CREATE_CAR( uVar3, l_U701[6]._fU0, l_U701[6]._fU4, l_U701[6]._fU8, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( sub_6473(), uVar2 );
            SET_CAR_HEADING( uVar2, 260.00000000 );
            SET_CAR_COORDINATES( uVar2, l_U701[6]._fU0, l_U701[6]._fU4, l_U701[6]._fU8 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U730 = 1;
        }
        if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (IS_KEYBOARD_KEY_PRESSED( 9 )))
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar3, ref uVar4 );
            LOAD_SCENE( l_U701[7]._fU0, l_U701[7]._fU4, l_U701[7]._fU8 );
            CREATE_CAR( uVar3, l_U701[7]._fU0, l_U701[7]._fU4, l_U701[7]._fU8, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( sub_6473(), uVar2 );
            SET_CAR_COORDINATES( uVar2, l_U701[7]._fU0, l_U701[7]._fU4, l_U701[7]._fU8 );
            SET_CAR_HEADING( uVar2, 150.00000000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U730 = 1;
        }
        if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (IS_KEYBOARD_KEY_PRESSED( 10 )))
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar3, ref uVar4 );
            LOAD_SCENE( l_U701[8]._fU0, l_U701[8]._fU4, l_U701[8]._fU8 );
            CREATE_CAR( uVar3, l_U701[8]._fU0, l_U701[8]._fU4, l_U701[8]._fU8, ref uVar2, 1 );
            WARP_CHAR_INTO_CAR( sub_6473(), uVar2 );
            SET_CAR_COORDINATES( uVar2, l_U701[8]._fU0, l_U701[8]._fU4, l_U701[8]._fU8 );
            SET_CAR_HEADING( uVar2, 180.00000000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U730 = 1;
        }
    }
    else if (((((((((((NOT (IS_KEYBOARD_KEY_PRESSED( 36 ))) AND (NOT (IS_KEYBOARD_KEY_PRESSED( 2 )))) AND (NOT (IS_KEYBOARD_KEY_PRESSED( 3 )))) AND (NOT (IS_KEYBOARD_KEY_PRESSED( 4 )))) AND (NOT (IS_KEYBOARD_KEY_PRESSED( 5 )))) AND (NOT (IS_KEYBOARD_KEY_PRESSED( 6 )))) AND (NOT (IS_KEYBOARD_KEY_PRESSED( 7 )))) AND (NOT (IS_KEYBOARD_KEY_PRESSED( 8 )))) AND (NOT (IS_KEYBOARD_KEY_PRESSED( 9 )))) AND (NOT (IS_KEYBOARD_KEY_PRESSED( 10 )))) AND (NOT (IS_KEYBOARD_KEY_PRESSED( 11 ))))
    {
        l_U730 = 0;
    }
    return;
}

void sub_32161(unknown uParam0, unknown uParam1)
{
    float fVar4;

    l_U641 = 0;
    fVar4 = 1E9;
    GET_CHAR_COORDINATES( sub_6473(), ref l_U643._fU0, ref l_U643._fU4, ref l_U643._fU8 );
    for ( l_U641 = 0; l_U641 < 9; l_U641++ )
    {
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U643._fU0, l_U643._fU4, l_U643._fU8, (uParam0^)[l_U641]._fU0, (uParam0^)[l_U641]._fU4, (uParam0^)[l_U641]._fU8, ref l_U642 );
        if (fVar4 > l_U642)
        {
            fVar4 = l_U642;
            (uParam1^) = l_U641;
        }
    }
    return;
}

int sub_32525()
{
    unknown uVar2;

    if (l_U32[0] == 0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref uVar2 );
        sub_32561( uVar2 );
    }
    for ( l_U641 = 0; l_U641 < 5; l_U641++ )
    {
        if (l_U748[l_U641] == 0)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar2 );
            l_U748[l_U641] = l_U32[uVar2];
        }
    }
    REQUEST_MODEL( l_U748[0] );
    REQUEST_MODEL( l_U748[1] );
    REQUEST_MODEL( l_U748[2] );
    REQUEST_MODEL( l_U748[3] );
    REQUEST_MODEL( l_U748[4] );
    if (((((HAS_MODEL_LOADED( l_U748[0] )) AND (HAS_MODEL_LOADED( l_U748[1] ))) AND (HAS_MODEL_LOADED( l_U748[2] ))) AND (HAS_MODEL_LOADED( l_U748[3] ))) AND (HAS_MODEL_LOADED( l_U748[4] )))
    {
        l_U729 = 1;
        return 1;
    }
    return 0;
}

void sub_32561(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        l_U32[0] = 1821991593;
        l_U32[1] = 418536135;
        l_U32[2] = -1896659641;
        l_U32[3] = 1063483177;
        break;
        case 1:
        l_U32[0] = 108773431;
        l_U32[1] = -1041692462;
        l_U32[2] = -1097828879;
        l_U32[3] = -295689028;
        break;
        case 2:
        l_U32[0] = -1685021548;
        l_U32[1] = 723973206;
        l_U32[2] = 1923400478;
        l_U32[3] = -825837129;
        break;
        case 3:
        l_U32[0] = 1830407356;
        l_U32[1] = 2006667053;
        l_U32[2] = -2124201592;
        l_U32[3] = -498054846;
        break;
        case 4:
        l_U32[0] = 2016857647;
        l_U32[1] = -344943009;
        l_U32[2] = -227741703;
        l_U32[3] = 627033353;
        break;
        case 5:
        l_U32[0] = 1349725314;
        l_U32[1] = 970598228;
        l_U32[2] = -322343873;
        l_U32[3] = 162883121;
        break;
        case 6:
        l_U32[0] = 884422927;
        l_U32[1] = 83136452;
        l_U32[2] = 1269098716;
        l_U32[3] = 486987393;
        break;
        case 7:
        l_U32[0] = -1289722222;
        l_U32[1] = 1344573448;
        l_U32[2] = 1723137093;
        l_U32[3] = 1063483177;
        break;
        case 8:
        l_U32[0] = 1390084576;
        l_U32[1] = 675415136;
        l_U32[2] = 1075851868;
        l_U32[3] = -1971955454;
        break;
        case 9:
        l_U32[0] = 1203311498;
        l_U32[1] = 788045382;
        l_U32[2] = -570033273;
        l_U32[3] = -1830458836;
        break;
    }
    return;
}

int sub_33505()
{
    sub_33519( l_U640 );
    if (NOT l_U729)
    {
        REQUEST_MODEL( l_U748[0] );
        REQUEST_MODEL( l_U748[1] );
        REQUEST_MODEL( l_U748[2] );
        REQUEST_MODEL( l_U748[3] );
        REQUEST_MODEL( l_U748[4] );
        if (((((HAS_MODEL_LOADED( l_U748[0] )) AND (HAS_MODEL_LOADED( l_U748[1] ))) AND (HAS_MODEL_LOADED( l_U748[2] ))) AND (HAS_MODEL_LOADED( l_U748[3] ))) AND (HAS_MODEL_LOADED( l_U748[4] )))
        {
            l_U729 = 1;
        }
    }
    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
    {
        if (IS_CAR_DEAD( l_U664[0] ))
        {
            l_U810 = sub_40304( l_U148, l_U151 );
            for ( l_U641 = 0; l_U641 < 5; l_U641++ )
            {
                l_U643 = {sub_40467( l_U641, l_U810, 0 )};
                CLEAR_AREA( l_U643._fU0, l_U643._fU4, l_U643._fU8, 1.00000000, 0 );
                CREATE_CAR( l_U748[l_U641], l_U643._fU0, l_U643._fU4, l_U643._fU8, ref l_U664[l_U641], 1 );
                LOCK_CAR_DOORS( l_U664[l_U641], 2 );
                SET_CAR_HEADING( l_U664[l_U641], l_U151 );
                SET_BLIP_THROTTLE_RANDOMLY( l_U664[l_U641], 1 );
                CREATE_RANDOM_CHAR_AS_DRIVER( l_U664[l_U641], ref l_U652[l_U641] );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U652[l_U641], 1 );
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U664[l_U641], 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U652[l_U641], 1 );
                TASK_CAR_TEMP_ACTION( l_U652[l_U641], l_U664[l_U641], 1, 999999 );
                SET_CAR_COORDINATES( l_U664[l_U641], l_U643._fU0, l_U643._fU4, l_U643._fU8 );
                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U652[l_U641], 0 );
                SET_CAR_CAN_BE_VISIBLY_DAMAGED( l_U664[l_U641], 0 );
                SET_CHAR_DROWNS_IN_WATER( l_U652[l_U641], 0 );
                SET_CHAR_DROWNS_IN_SINKING_VEHICLE( l_U652[l_U641], 0 );
                OVERRIDE_NUMBER_OF_PARKED_CARS( 1 );
            }
            l_U646 = {sub_40467( 5, l_U810, 0 )};
            l_U646._fU8 = l_U701[l_U640 - 4]._fU8;
            l_U646._fU8 += l_U746;
            SWITCH_ROADS_OFF( l_U148._fU0 - 25.00000000, l_U148._fU4 - 25.00000000, l_U148._fU8 - 10.00000000, l_U148._fU0 + 25.00000000, l_U148._fU4 + 25.00000000, l_U148._fU8 + 10.00000000 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U810, 0.00000000, 2.00000000, 0.50000000, ref l_U754._fU0, ref l_U754._fU4, ref l_U754._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U810, 0.00000000, -10.00000000, 2.00000000, ref l_U757._fU0, ref l_U757._fU4, ref l_U757._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U810, 0.00000000, -12.00000000, 1.75000000, ref l_U760._fU0, ref l_U760._fU4, ref l_U760._fU8 );
            DELETE_OBJECT( ref l_U810 );
        }
        if (((((NOT (IS_CAR_DEAD( l_U664[0] ))) AND (NOT (IS_CAR_DEAD( l_U664[1] )))) AND (NOT (IS_CAR_DEAD( l_U664[2] )))) AND (NOT (IS_CAR_DEAD( l_U664[3] )))) AND (NOT (IS_CAR_DEAD( l_U664[4] ))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_33519(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        l_U148 = {819.48600000, 1479.32800000, 13.39460000};
        l_U151 = 0.00000000;
        l_U39[0] = {769.82470000, 1557.60000000, 20.14630000};
        l_U39[1] = {706.01180000, 1661.45900000, 22.66080000};
        l_U39[2] = {804.78360000, 1750.77200000, 32.07240000};
        l_U39[3] = {840.74150000, 1848.28300000, 43.89900000};
        l_U39[4] = {685.09310000, 1971.84200000, 34.03350000};
        l_U39[5] = {502.67810000, 1972.51200000, 22.38580000};
        l_U39[6] = {349.73310000, 1941.03500000, 19.06760000};
        l_U39[7] = {338.00910000, 1755.63000000, 16.09750000};
        l_U39[8] = {384.75030000, 1584.24100000, 15.30070000};
        l_U39[9] = {471.66060000, 1418.31400000, 9.68810000};
        l_U39[10] = {657.66060000, 1359.75300000, 13.28940000};
        l_U39[11] = {807.82450000, 1374.82800000, 13.25580000};
        l_U39[12] = {819.48600000, 1479.32800000, 13.29460000};
        ProtectedSet(l_U37, 13);
        ProtectedSet(l_U38, 3);
        break;
        case 1:
        l_U148 = {446.76570000, 1459.62100000, 9.18706400};
        l_U151 = 29.72610000;
        l_U39[0] = {388.95110000, 1573.75400000, 15.47200000};
        l_U39[1] = {348.33200000, 1666.39500000, 15.16100000};
        l_U39[2] = {383.27840000, 1777.25200000, 19.40960000};
        l_U39[3] = {471.68590000, 1688.83200000, 16.43080000};
        l_U39[4] = {573.46940000, 1636.13900000, 28.47160000};
        l_U39[5] = {630.42720000, 1535.24400000, 19.54680000};
        l_U39[6] = {741.44070000, 1458.65300000, 13.39630000};
        l_U39[7] = {683.74060000, 1359.34300000, 13.42690000};
        l_U39[8] = {509.14200000, 1363.52000000, 11.12040000};
        l_U39[9] = {446.76560000, 1459.62100000, 9.28706000};
        ProtectedSet(l_U37, 10);
        ProtectedSet(l_U38, 2);
        break;
        case 2:
        l_U148 = {-44.69510000, -323.41980000, 13.82180000};
        l_U151 = 0.00000000;
        l_U39[0] = {-106.32710000, -124.08490000, 13.87190000};
        l_U39[1] = {-160.15020000, 81.36440000, 13.81570000};
        l_U39[2] = {-219.65490000, 320.47350000, 13.86680000};
        l_U39[3] = {-260.49720000, 489.86650000, 13.86570000};
        l_U39[4] = {-364.49110000, 634.13510000, 13.77180000};
        l_U39[5] = {-364.90720000, 847.38800000, 13.77090000};
        l_U39[6] = {-365.98020000, 1102.76200000, 13.77400000};
        l_U39[7] = {-511.01690000, 1167.66500000, 14.33440000};
        l_U39[8] = {-652.27900000, 1115.75600000, 14.71100000};
        l_U39[9] = {-658.26490000, 915.36740000, 5.71680000};
        l_U39[10] = {-584.44710000, 725.89300000, 5.71300000};
        l_U39[11] = {-559.80020000, 514.36840000, 5.61780000};
        l_U39[12] = {-547.57910000, 264.83880000, 5.71870000};
        l_U39[13] = {-520.46680000, 94.49330000, 6.80550000};
        l_U39[14] = {-520.99650000, -87.22980000, 6.93560000};
        l_U39[15] = {-493.69560000, -279.50840000, 6.99530000};
        l_U39[16] = {-334.82820000, -412.34960000, 3.96740000};
        l_U39[17] = {-236.00810000, -591.65910000, 3.98790000};
        l_U39[18] = {-237.31590000, -764.15630000, 3.81860000};
        l_U39[19] = {-50.46370000, -754.44310000, 5.20940000};
        l_U39[20] = {-50.83940000, -590.53800000, 13.82180000};
        l_U39[21] = {-50.74010000, -323.54160000, 13.82180000};
        ProtectedSet(l_U37, 22);
        ProtectedSet(l_U38, 3);
        break;
        case 3:
        l_U148 = {1042.79800000, 168.79220000, 31.10000000};
        l_U151 = 327.60940000;
        l_U39[0] = {1037.53400000, 364.98420000, 28.13020000};
        l_U39[1] = {844.30650000, 459.27910000, 12.64360000};
        l_U39[2] = {813.75400000, 224.67010000, 5.19830000};
        l_U39[3] = {802.10360000, -2.24190000, 5.04270000};
        l_U39[4] = {876.38030000, -222.27800000, 5.70380000};
        l_U39[5] = {772.19770000, -390.71460000, 5.45970000};
        l_U39[6] = {848.76920000, -569.55270000, 12.77700000};
        l_U39[7] = {1092.25900000, -561.32110000, 12.50360000};
        l_U39[8] = {1008.29200000, -342.39850000, 18.25250000};
        l_U39[9] = {966.67960000, -98.91030000, 23.14290000};
        l_U39[10] = {1034.82100000, 167.03170000, 31.05430000};
        ProtectedSet(l_U37, 11);
        ProtectedSet(l_U38, 2);
        break;
        case 4:
        l_U151 = 138.14790000;
        l_U148 = {1429.23200000, -25.44190000, 23.15300000};
        l_U39[0] = {1389.03400000, -121.81070000, 20.85890000};
        l_U39[1] = {1303.14400000, -142.11510000, 25.62870000};
        l_U39[2] = {1277.82100000, -276.47050000, 23.29610000};
        l_U39[3] = {1214.99000000, -303.98240000, 20.39000000};
        l_U39[4] = {1191.50900000, -440.22500000, 14.59240000};
        l_U39[5] = {1191.83700000, -536.52950000, 13.00090000};
        l_U39[6] = {1129.33800000, -568.33790000, 12.60900000};
        l_U39[7] = {1091.27500000, -445.96450000, 12.58690000};
        l_U39[8] = {1124.70400000, -337.56700000, 17.08060000};
        l_U39[9] = {1127.57400000, -194.99610000, 22.92120000};
        l_U39[10] = {1125.02900000, -86.12200000, 35.30460000};
        l_U39[11] = {1265.14200000, -54.20490000, 27.40560000};
        l_U39[12] = {1341.20100000, 67.01100000, 31.01500000};
        l_U39[13] = {1421.44000000, 93.50120000, 24.91400000};
        l_U39[14] = {1488.12200000, 62.69700000, 24.01050000};
        l_U39[15] = {1429.23200000, -25.44190000, 23.15300000};
        ProtectedSet(l_U37, 16);
        ProtectedSet(l_U38, 3);
        break;
        case 5:
        l_U151 = 210.00000000;
        l_U148 = {-597.19400000, -265.37170000, 5.92930000};
        l_U39[0] = {-486.64230000, -359.86350000, 4.69960000};
        l_U39[1] = {-394.26320000, -369.44460000, 3.97430000};
        l_U39[2] = {-310.60350000, -451.37570000, 3.99280000};
        l_U39[3] = {-238.80480000, -582.52450000, 3.97530000};
        l_U39[4] = {-228.06940000, -710.72090000, 3.79170000};
        l_U39[5] = {-199.54380000, -852.62080000, -3.82920000};
        l_U39[6] = {-55.62320000, -873.71160000, -7.32860000};
        l_U39[7] = {79.19600000, -813.10290000, -4.53060000};
        l_U39[8] = {206.21700000, -735.23550000, 3.89750000};
        l_U39[9] = {140.10240000, -694.83470000, 4.02050000};
        l_U39[10] = {9.41290000, -769.12960000, 4.11890000};
        l_U39[11] = {-139.14640000, -779.92330000, 4.26130000};
        l_U39[12] = {-211.92690000, -702.38290000, 3.81910000};
        l_U39[13] = {-230.84080000, -554.86110000, 3.99000000};
        l_U39[14] = {-304.27060000, -427.88330000, 3.99480000};
        l_U39[15] = {-402.47510000, -319.44300000, 4.06840000};
        l_U39[16] = {-499.12710000, -213.89300000, 6.96130000};
        l_U39[17] = {-566.97990000, -155.63940000, 5.56200000};
        l_U39[18] = {-597.19400000, -265.37170000, 5.92930000};
        ProtectedSet(l_U37, 19);
        ProtectedSet(l_U38, 3);
        break;
        case 6:
        l_U151 = 270.00000000;
        l_U148 = {-1068.42700000, 1384.52400000, 23.45440000};
        l_U39[0] = {-991.21450000, 1375.25600000, 23.85700000};
        l_U39[1] = {-926.55410000, 1477.84400000, 23.77340000};
        l_U39[2] = {-951.23140000, 1590.21500000, 22.88760000};
        l_U39[3] = {-974.29450000, 1728.56900000, 14.55020000};
        l_U39[4] = {-1077.88500000, 1808.43900000, 7.59710000};
        l_U39[5] = {-1226.26300000, 1806.80500000, 16.34260000};
        l_U39[6] = {-1369.67600000, 1784.97500000, 17.83070000};
        l_U39[7] = {-1394.46500000, 1641.76100000, 15.44180000};
        l_U39[8] = {-1458.15400000, 1508.12900000, 14.04420000};
        l_U39[9] = {-1405.06900000, 1405.64100000, 12.53340000};
        l_U39[10] = {-1312.55600000, 1385.20600000, 18.27630000};
        l_U39[11] = {-1190.47400000, 1384.87900000, 21.23920000};
        l_U39[12] = {-1068.42700000, 1384.52400000, 23.45440000};
        ProtectedSet(l_U37, 13);
        ProtectedSet(l_U38, 5);
        break;
        case 7:
        l_U148 = {-210.39040000, 281.86960000, 13.90780000};
        l_U151 = 190.00000000;
        l_U39[0] = {-172.96790000, 129.70700000, 13.81760000};
        l_U39[1] = {-151.89320000, 50.43810000, 13.83080000};
        l_U39[2] = {-174.20170000, 27.30920000, 13.79950000};
        l_U39[3] = {-203.27370000, -106.51850000, 13.64020000};
        l_U39[4] = {-323.31990000, -151.47990000, 13.62500000};
        l_U39[5] = {-425.34280000, -151.67590000, 10.01110000};
        l_U39[6] = {-455.55040000, -24.11710000, 8.91650000};
        l_U39[7] = {-454.49960000, 125.72830000, 8.88780000};
        l_U39[8] = {-453.23250000, 207.91370000, 8.86630000};
        l_U39[9] = {-402.51520000, 254.89110000, 12.61230000};
        l_U39[10] = {-357.96220000, 380.62010000, 13.81470000};
        l_U39[11] = {-357.93590000, 508.44180000, 13.83030000};
        l_U39[12] = {-313.62120000, 543.80150000, 13.81050000};
        l_U39[13] = {-210.39040000, 281.86960000, 13.90780000};
        ProtectedSet(l_U37, 14);
        ProtectedSet(l_U38, 5);
        break;
        case 8:
        l_U148 = {-351.61520000, 1349.39000000, 15.31000000};
        l_U151 = 0.00000000;
        l_U39[0] = {-351.45790000, 1498.90600000, 17.92020000};
        l_U39[1] = {-257.80260000, 1575.04000000, 19.46800000};
        l_U39[2] = {-109.68530000, 1587.51100000, 28.96480000};
        l_U39[3] = {23.91860000, 1653.77800000, 28.96280000};
        l_U39[4] = {155.60120000, 1725.92600000, 28.96270000};
        l_U39[5] = {293.19310000, 1775.40700000, 20.16720000};
        l_U39[6] = {349.67170000, 1660.14600000, 15.02980000};
        l_U39[7] = {409.13500000, 1522.77900000, 15.60900000};
        l_U39[8] = {484.50310000, 1393.75200000, 11.09240000};
        l_U39[9] = {543.55510000, 1260.34800000, 19.92850000};
        l_U39[10] = {543.29130000, 1110.54000000, 19.90870000};
        l_U39[11] = {447.06020000, 1024.27700000, 25.26520000};
        l_U39[12] = {296.99510000, 1017.78800000, 23.76610000};
        l_U39[13] = {206.11040000, 1017.45000000, 13.84370000};
        l_U39[14] = {159.93230000, 1141.99000000, 13.75530000};
        l_U39[15] = {29.65580000, 1173.12900000, 13.81780000};
        l_U39[16] = {-120.47430000, 1173.11400000, 13.82510000};
        l_U39[17] = {-270.65890000, 1173.07700000, 13.82590000};
        l_U39[18] = {-334.82640000, 1173.33700000, 13.82650000};
        l_U39[19] = {-351.54130000, 1266.42700000, 22.12670000};
        l_U39[20] = {-351.61520000, 1349.39000000, 15.30720000};
        ProtectedSet(l_U37, 21);
        ProtectedSet(l_U38, 3);
        break;
        case 9:
        l_U148 = {-1246.60200000, 828.64320000, 19.12080000};
        l_U151 = 180.00000000;
        l_U39[0] = {-1265.40700000, 680.51210000, 27.14220000};
        l_U39[1] = {-1288.50700000, 534.06770000, 48.61510000};
        l_U39[2] = {-1290.35300000, 384.20530000, 50.18640000};
        l_U39[3] = {-1352.43800000, 260.58880000, 50.18500000};
        l_U39[4] = {-1422.85200000, 109.40050000, 50.50630000};
        l_U39[5] = {-1425.48000000, -3.46050000, 26.20390000};
        l_U39[6] = {-1424.35200000, -71.86280000, 7.98720000};
        l_U39[7] = {-1485.10500000, -95.99470000, 6.19110000};
        l_U39[8] = {-1536.70100000, 23.85410000, 7.32450000};
        l_U39[9] = {-1502.97700000, 65.15740000, 7.63760000};
        l_U39[10] = {-1482.97600000, 209.73760000, 9.77240000};
        l_U39[11] = {-1478.63800000, 359.15240000, 18.32910000};
        l_U39[12] = {-1479.52600000, 509.19730000, 18.60940000};
        l_U39[13] = {-1437.91500000, 649.84100000, 18.61130000};
        l_U39[14] = {-1381.95600000, 757.04790000, 18.69140000};
        l_U39[15] = {-1404.59700000, 836.03550000, 18.61790000};
        l_U39[16] = {-1285.02100000, 862.73130000, 18.62450000};
        l_U39[17] = {-1246.60200000, 828.64320000, 18.61440000};
        ProtectedSet(l_U37, 18);
        ProtectedSet(l_U38, 3);
        break;
        case 10:
        l_U148 = {1830.22000000, 716.95620000, 24.84500000};
        l_U151 = 270.00000000;
        l_U39[0] = {1961.42700000, 718.17170000, 17.32540000};
        l_U39[1] = {2030.49300000, 613.45260000, 14.87670000};
        l_U39[2] = {2031.26900000, 537.63440000, 16.48400000};
        l_U39[3] = {2132.92600000, 508.90300000, 7.53450000};
        l_U39[4] = {2180.68200000, 394.91130000, 4.94140000};
        l_U39[5] = {2192.41800000, 246.50850000, 5.07120000};
        l_U39[6] = {2313.86100000, 229.92780000, 5.04520000};
        l_U39[7] = {2325.21300000, 378.07440000, 5.10970000};
        l_U39[8] = {2317.96200000, 527.51790000, 5.09940000};
        l_U39[9] = {2196.71600000, 603.20470000, 10.67020000};
        l_U39[10] = {2093.30400000, 709.93210000, 11.79190000};
        l_U39[11] = {1999.87400000, 826.58460000, 8.22650000};
        l_U39[12] = {1886.15000000, 921.77330000, 22.68650000};
        l_U39[13] = {1791.97900000, 956.30260000, 23.13930000};
        l_U39[14] = {1769.08700000, 1055.38900000, 12.97190000};
        l_U39[15] = {1749.07800000, 876.61440000, 15.63980000};
        l_U39[16] = {1727.19100000, 749.25330000, 24.54900000};
        l_U39[17] = {1830.22000000, 716.95620000, 24.84500000};
        ProtectedSet(l_U37, 18);
        ProtectedSet(l_U38, 3);
        break;
        case 11:
        l_U148 = {1352.64200000, 883.04790000, 13.41750000};
        l_U151 = 147.25570000;
        l_U39[0] = {1293.16700000, 767.47770000, 31.91150000};
        l_U39[1] = {1230.34800000, 632.05750000, 37.20380000};
        l_U39[2] = {1157.05000000, 502.36450000, 27.85620000};
        l_U39[3] = {1119.75300000, 421.75350000, 28.88540000};
        l_U39[4] = {1239.99900000, 385.09260000, 21.02020000};
        l_U39[5] = {1389.91700000, 385.12330000, 21.62810000};
        l_U39[6] = {1531.58300000, 379.69130000, 27.85640000};
        l_U39[7] = {1573.10000000, 444.82970000, 28.00450000};
        l_U39[8] = {1702.20000000, 491.07430000, 28.10500000};
        l_U39[9] = {1727.04000000, 520.54450000, 28.75360000};
        l_U39[10] = {1731.87100000, 780.70210000, 21.64520000};
        l_U39[11] = {1770.80300000, 923.99580000, 13.40710000};
        l_U39[12] = {1800.37500000, 1048.68600000, 13.04540000};
        l_U39[13] = {1668.17600000, 1017.51200000, 21.36740000};
        l_U39[14] = {1522.32600000, 1004.30000000, 22.44450000};
        l_U39[15] = {1419.30900000, 964.26820000, 13.76640000};
        l_U39[16] = {1352.64200000, 883.04790000, 13.41750000};
        ProtectedSet(l_U37, 17);
        ProtectedSet(l_U38, 3);
        break;
        case 12:
        l_U148 = {-1591.24000000, 168.88660000, 12.49100000};
        l_U151 = 180.00000000;
        l_U39[0] = {-1589.20900000, 79.14170000, 9.93570000};
        l_U39[1] = {-1708.83600000, 12.58150000, 9.03050000};
        l_U39[2] = {-1826.67100000, -51.71260000, 5.74650000};
        l_U39[3] = {-1885.94800000, 14.49860000, 6.44380000};
        l_U39[4] = {-1900.93000000, 131.27420000, 7.84240000};
        l_U39[5] = {-1862.39500000, 175.82930000, 13.27980000};
        l_U39[6] = {-1808.19500000, 292.30730000, 24.50680000};
        l_U39[7] = {-1733.46700000, 421.82910000, 24.46540000};
        l_U39[8] = {-1662.41300000, 553.75990000, 25.25700000};
        l_U39[9] = {-1671.89600000, 701.08120000, 28.88910000};
        l_U39[10] = {-1636.85700000, 765.45170000, 28.87910000};
        l_U39[11] = {-1594.30200000, 773.51790000, 24.81620000};
        l_U39[12] = {-1586.16500000, 645.29880000, 24.47540000};
        l_U39[13] = {-1587.33300000, 495.34910000, 24.44700000};
        l_U39[14] = {-1657.18800000, 363.40030000, 24.45900000};
        l_U39[15] = {-1713.19000000, 267.46570000, 20.61530000};
        l_U39[16] = {-1622.73000000, 227.02870000, 13.78940000};
        l_U39[17] = {-1591.24000000, 168.88660000, 12.49100000};
        ProtectedSet(l_U37, 18);
        ProtectedSet(l_U38, 3);
        break;
        case 13:
        l_U148 = {1290.52100000, 507.35510000, 26.52730000};
        l_U151 = 90.00000000;
        l_U39[0] = {1218.48700000, 507.02050000, 27.61600000};
        l_U39[1] = {1142.95200000, 540.59300000, 27.21190000};
        l_U39[2] = {1010.83200000, 551.96090000, 21.47090000};
        l_U39[3] = {916.69270000, 552.27620000, 21.32210000};
        l_U39[4] = {842.06090000, 731.03940000, 6.94190000};
        l_U39[5] = {855.24420000, 885.10420000, 13.38390000};
        l_U39[6] = {965.12590000, 940.56670000, 20.95770000};
        l_U39[7] = {1116.53100000, 982.19680000, 13.24610000};
        l_U39[8] = {1313.05500000, 979.60550000, 12.71200000};
        l_U39[9] = {1394.82000000, 893.38770000, 12.97560000};
        l_U39[10] = {1406.76100000, 754.81340000, 27.46460000};
        l_U39[11] = {1406.75900000, 579.01250000, 30.48190000};
        l_U39[12] = {1446.34200000, 478.00050000, 28.02680000};
        l_U39[13] = {1560.28700000, 396.87770000, 28.02430000};
        l_U39[14] = {1508.43600000, 387.10320000, 21.47400000};
        l_U39[15] = {1437.57200000, 387.34120000, 16.69910000};
        l_U39[16] = {1284.22300000, 387.24570000, 21.44680000};
        l_U39[17] = {1111.08400000, 381.12230000, 28.80140000};
        l_U39[18] = {1098.21400000, 206.31950000, 30.04130000};
        l_U39[19] = {1098.20500000, 9.73040000, 33.05710000};
        ProtectedSet(l_U37, 20);
        ProtectedSet(l_U38, 1);
        l_U32[0] = -1896659641;
        l_U32[1] = -1896659641;
        l_U32[2] = 1821991593;
        l_U32[3] = 1821991593;
        break;
    }
    return;
}

void sub_40304(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown Result;

    Result = sub_40324( 1420487033, uParam0, uParam3, 1 );
    SET_OBJECT_DYNAMIC( Result, 0 );
    SET_OBJECT_COLLISION( Result, 0 );
    FREEZE_OBJECT_POSITION( Result, 1 );
    SET_OBJECT_VISIBLE( Result, 0 );
    return Result;
}

void sub_40324(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown Result;

    CREATE_OBJECT( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, uParam5 );
    SET_OBJECT_HEADING( Result, uParam4 );
    return Result;
}

void sub_40467(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;

    Result = {sub_40482( uParam0, uParam1, uParam2 )};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam1, Result._fU0, Result._fU4, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    return Result;
}

void sub_40482(int iParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
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
    int iVar20;

    GET_MODEL_DIMENSIONS( sub_40493( uParam1 ), ref uVar8, ref uVar11 );
    GET_MODEL_DIMENSIONS( sub_40533(), ref uVar14, ref uVar17 );
    if (bParam2)
    {
        uVar14._fU0 -= 2.00000000;
        uVar17._fU0 += 2.00000000;
        uVar17._fU4 += 2.00000000;
    }
    else
    {
        uVar17._fU0 += 1.00000000;
        uVar17._fU4 += 1.00000000;
    }
    iVar20 = iParam0 / 2;
    if ((iVar20 * 2) == iParam0)
    {
        Result._fU0 = (uVar17._fU0 - uVar14._fU0) * -1;
    }
    else
    {
        Result._fU0 = uVar17._fU0 - uVar14._fU0;
    }
    Result._fU4 = uVar8._fU4 + (uVar17._fU4 * -1);
    Result._fU4 += (TO_FLOAT( iVar20 * -1 )) * ((uVar17._fU4 - uVar14._fU4) + uVar17._fU4);
    return Result;
}

void sub_40493(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_MODEL( uParam0, ref Result );
    return Result;
}

int sub_40533()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        if (HAS_MODEL_LOADED( l_U32[I] ))
        {
            return l_U32[I];
        }
    }
    return 0;
}

int sub_41710()
{
    if (l_U732)
    {
        return 1;
    }
    else if (sub_10553( 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_42474(unknown uParam0)
{
    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_6473(), uParam0 ))
        {
            if ((((((((((((IS_CAR_MODEL( uParam0, 1171614426 )) || (IS_CAR_MODEL( uParam0, 1127131465 ))) || (IS_CAR_MODEL( uParam0, 1938952078 ))) || (IS_CAR_MODEL( uParam0, 148777611 ))) || (IS_CAR_MODEL( uParam0, 1911513875 ))) || (IS_CAR_MODEL( uParam0, 2046537925 ))) || (IS_CAR_MODEL( uParam0, -1627000575 ))) || (IS_CAR_MODEL( uParam0, -350085182 ))) || (IS_CAR_MODEL( uParam0, -1900572838 ))) || (IS_CAR_MODEL( uParam0, -1660661558 ))) || (IS_CAR_MODEL( uParam0, 353883353 ))) || (IS_CAR_MODEL( uParam0, 837858166 )))
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_42746()
{
    float fVar2;
    float fVar3;
    float fVar4;

    sub_42755();
    if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref l_U682 );
    }
    if (NOT (IS_CAR_DEAD( l_U682 )))
    {
        GET_CAR_HEADING( l_U682, ref fVar2 );
        fVar4 = l_U151 - 15.00000000;
        if (fVar4 < 0.00000000)
        {
            fVar4 += 360.00000000;
        }
        fVar3 = l_U151 + 15.00000000;
        if (fVar3 >= 360.00000000)
        {
            fVar3 -= 360.00000000;
        }
        if (fVar3 > fVar4)
        {
            if ((fVar2 < fVar3) AND (fVar2 > fVar4))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((fVar2 < fVar3) || (fVar2 > fVar4))
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

void sub_42755()
{
    if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref l_U682 );
        SET_VEH_HAS_STRONG_AXLES( l_U682, 1 );
    }
    if (NOT (IS_CAR_DEAD( l_U682 )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_6473(), l_U682 )))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U682 );
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref l_U682 );
                if (sub_42474( l_U682 ))
                {
                    if (l_U637 == 1)
                    {
                        sub_42922();
                    }
                }
            }
        }
    }
    else if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref l_U682 );
    }
    else if (DOES_BLIP_EXIST( l_U685 ))
    {
        sub_3943();
        REMOVE_BLIP( l_U685 );
        DELETE_CHECKPOINT( l_U741 );
    }
    if (DOES_BLIP_EXIST( l_U686 ))
    {
        REMOVE_BLIP( l_U686 );
    };;;
    if (sub_43927( l_U682, 0, l_U691, ref l_U700, 60000 ))
    {
        sub_11068();
    }
    return;
}

void sub_42922()
{
    boolean bVar2;

    bVar2 = true;
    if (DOES_BLIP_EXIST( l_U685 ))
    {
        REMOVE_BLIP( l_U685 );
        DELETE_CHECKPOINT( l_U741 );
        if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
        {
            sub_3769();
        }
    }
    if (NOT (DOES_BLIP_EXIST( l_U685 )))
    {
        ADD_BLIP_FOR_COORD( l_U39[l_U683]._fU0, l_U39[l_U683]._fU4, l_U39[l_U683]._fU8, ref l_U685 );
        CHANGE_BLIP_DISPLAY( l_U685, 2 );
        GET_GROUND_Z_FOR_3D_COORD( l_U39[l_U683]._fU0, l_U39[l_U683]._fU4, l_U39[l_U683]._fU8, ref l_U742 );
        l_U743._fU0 = l_U39[l_U683]._fU0;
        l_U743._fU4 = l_U39[l_U683]._fU4;
        l_U743._fU8 = l_U39[l_U683]._fU8 + 3.00000000;
        if (l_U683 == (ProtectedGet(l_U37) - 1))
        {
            if (l_U693 == ProtectedGet(l_U38))
            {
                l_U741 = CREATE_CHECKPOINT( 3, l_U743, l_U39[l_U683], 1.00000000 );
                CHANGE_BLIP_SPRITE( l_U685, 65 );
                bVar2 = false;
            }
            else
            {
                l_U741 = CREATE_CHECKPOINT( 2, l_U743, l_U39[0], 1.00000000 );
            }
        }
        else
        {
            l_U741 = CREATE_CHECKPOINT( 2, l_U743, l_U39[l_U683 + 1], 1.00000000 );
        }
    }
    if (DOES_BLIP_EXIST( l_U686 ))
    {
        REMOVE_BLIP( l_U686 );
    }
    if (bVar2)
    {
        if (NOT (DOES_BLIP_EXIST( l_U686 )))
        {
            if (l_U684 < (ProtectedGet(l_U37) - 1))
            {
                ADD_BLIP_FOR_COORD( l_U39[l_U684]._fU0, l_U39[l_U684]._fU4, l_U39[l_U684]._fU8, ref l_U686 );
                CHANGE_BLIP_DISPLAY( l_U686, 2 );
                DIM_BLIP( l_U686, 1 );
                CHANGE_BLIP_SCALE( l_U686, l_U747 );
            }
            else if (l_U684 == (ProtectedGet(l_U37) - 1))
            {
                if (l_U693 == ProtectedGet(l_U38))
                {
                    ADD_BLIP_FOR_COORD( l_U39[l_U684]._fU0, l_U39[l_U684]._fU4, l_U39[l_U684]._fU8, ref l_U686 );
                    CHANGE_BLIP_SPRITE( l_U686, 65 );
                    CHANGE_BLIP_DISPLAY( l_U686, 2 );
                    CHANGE_BLIP_SCALE( l_U686, l_U747 );
                }
                else
                {
                    ADD_BLIP_FOR_COORD( l_U39[l_U684]._fU0, l_U39[l_U684]._fU4, l_U39[l_U684]._fU8, ref l_U686 );
                    DIM_BLIP( l_U686, 1 );
                    CHANGE_BLIP_DISPLAY( l_U686, 2 );
                    CHANGE_BLIP_SCALE( l_U686, l_U747 );
                }
            }
        }
    }
    return;
}

int sub_43927(unknown uParam0, int iParam1, int iParam2, unknown uParam3, int iParam4)
{
    int iVar7;
    int iVar8;
    int iVar9;

    if (sub_42474( uParam0 ))
    {
        (uParam3^) = iParam2;
    }
    else
    {
        iVar7 = iParam2 - (uParam3^);
        iVar8 = iParam4 - iVar7;
        iVar9 = iVar8 / 1000;
        if (iVar9 > 0)
        {
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
            iVar9 = iVar8 / 1000;
            if (iParam1 == nil)
            {
                if (iVar9 == 1)
                {
                    PRINT_WITH_NUMBER_NOW( "RACEOUTCAR", iVar9, 250, 1 );
                }
                else
                {
                    PRINT_WITH_NUMBER_NOW( "RACEOUTCARs", iVar9, 250, 1 );
                }
            }
            else if (iVar9 == 1)
            {
                PRINT_WITH_NUMBER_NOW( "RACEOUTCARBLIP", iVar8 / 1000, 250, 1 );
            }
            else
            {
                PRINT_WITH_NUMBER_NOW( "RACEOUTCARBLIPS", iVar8 / 1000, 250, 1 );
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_44449(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_6473()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_6473() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_646() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_646() )))
    {
        return 0;
    }
    return 1;
}

void sub_44859()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT l_U730)
    {
        if (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_6473() )))
            {
                GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar3, ref uVar4 );
                CREATE_CAR( uVar3, l_U646._fU0, l_U646._fU4, l_U646._fU8, ref uVar2, 1 );
                WARP_CHAR_INTO_CAR( sub_6473(), uVar2 );
                SET_CAR_HEADING( uVar2, l_U151 );
                SET_CAR_COORDINATES( uVar2, l_U646._fU0, l_U646._fU4, l_U646._fU8 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U730 = 1;
            }
            else
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref uVar2 );
                SET_CAR_HEADING( uVar2, l_U151 );
                SET_CAR_COORDINATES( uVar2, l_U646._fU0, l_U646._fU4, l_U646._fU8 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U730 = 1;
            }
        }
    }
    else if (NOT (IS_KEYBOARD_KEY_PRESSED( 36 )))
    {
        l_U730 = 0;
    }
    return;
}

int sub_45431(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    float fVar6;
    float fVar7;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_HEADING( uParam0, ref fVar5 );
        fVar7 = uParam1 - uParam2;
        if (fVar7 < 0.00000000)
        {
            fVar7 += 360.00000000;
        }
        fVar6 = uParam1 + uParam2;
        if (fVar6 >= 360.00000000)
        {
            fVar6 -= 360.00000000;
        }
        if (fVar6 > fVar7)
        {
            if ((fVar5 < fVar6) AND (fVar5 > fVar7))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((fVar5 < fVar6) || (fVar5 > fVar7))
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

void sub_45917()
{
    if (NOT (DOES_BLIP_EXIST( l_U649 )))
    {
        ADD_BLIP_FOR_COORD( l_U646._fU0, l_U646._fU4, l_U646._fU8, ref l_U649 );
        SET_ROUTE( l_U649, l_U734 );
        CHANGE_BLIP_DISPLAY( l_U649, 2 );
        sub_46006();
        if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
        {
            PRINT_NOW( "RaceStart", 7500, 1 );
        }
        else
        {
            PRINT_NOW( "RaceCar", 7500, 1 );
        }
    }
    return;
}

void sub_46006()
{
    vector vVar2;
    float fVar5;

    if (DOES_BLIP_EXIST( l_U649 ))
    {
        switch (l_U640)
        {
            case 4:
            vVar2 = {1458.85900000, 12.76640000, 23.74220000};
            fVar5 = 129.83530000;
            break;
            case 5:
            vVar2 = {-625.30210000, -209.11870000, 6.37610000};
            fVar5 = 193.70990000;
            break;
            case 6:
            vVar2 = {-1110.12800000, 1379.30800000, 23.79660000};
            fVar5 = 266.87890000;
            break;
            case 7:
            vVar2 = {-226.18190000, 323.23100000, 14.15080000};
            fVar5 = 193.99580000;
            break;
            case 8:
            vVar2 = {-346.62030000, 1294.22200000, 20.40120000};
            fVar5 = 358.23570000;
            break;
            case 9:
            vVar2 = {-1250.31900000, 900.62810000, 19.03700000};
            fVar5 = 178.19160000;
            break;
            case 10:
            vVar2 = {1759.73200000, 711.96670000, 24.98260000};
            fVar5 = 270.77230000;
            break;
            case 11:
            vVar2 = {1383.40900000, 932.47390000, 13.36570000};
            fVar5 = 137.46130000;
            break;
            case 12:
            vVar2 = {-1605.75300000, 224.46200000, 13.10050000};
            fVar5 = 273.29600000;
            break;
        }
        sub_46402( ref l_U649, vVar2, fVar5 );
    }
    return;
}

void sub_46402(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

int sub_47325()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( sub_6473() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref uVar2 );
            if ((IS_VEH_DRIVEABLE( uVar2 )) AND (NOT (IS_CAR_ON_FIRE( uVar2 ))))
            {
                GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
                if (NOT (IS_CAR_MODEL( uVar2, 1491375716 )))
                {
                    if (iVar3 == sub_6473())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_48032()
{
    switch (l_U639)
    {
        case 0:
        if (l_U651 < (l_U650 + 3000))
        {
            GET_GAME_TIMER( ref l_U651 );
            sub_48124();
            CLEAR_PRINTS();
            if (DOES_BLIP_EXIST( l_U649 ))
            {
                REMOVE_BLIP( l_U649 );
            }
        }
        else
        {
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_321" );
            GET_GAME_TIMER( ref l_U650 );
            l_U639 = 1;
        }
        break;
        case 1:
        if (l_U651 < (l_U650 + 1000))
        {
            sub_48601();
            PRINT_WITH_NUMBER_BIG( "NUMBER", 3, 100, 1 );
            GET_GAME_TIMER( ref l_U651 );
        }
        else
        {
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_321" );
            GET_GAME_TIMER( ref l_U650 );
            l_U639 = 2;
        }
        break;
        case 2:
        if (l_U651 < (l_U650 + 1000))
        {
            PRINT_WITH_NUMBER_BIG( "NUMBER", 2, 100, 1 );
            GET_GAME_TIMER( ref l_U651 );
        }
        else
        {
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_321" );
            GET_GAME_TIMER( ref l_U650 );
            l_U639 = 3;
        }
        break;
        case 3:
        if (l_U651 < (l_U650 + 1000))
        {
            PRINT_WITH_NUMBER_BIG( "NUMBER", 1, 100, 1 );
            GET_GAME_TIMER( ref l_U651 );
        }
        else
        {
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_GO" );
            GET_GAME_TIMER( ref l_U650 );
            l_U639 = 4;
        }
        break;
        case 4:
        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U148._fU0 - 10.00000000, l_U148._fU4 - 10.00000000, l_U148._fU8 - 10.00000000, l_U148._fU0 + 10.00000000, l_U148._fU4 + 10.00000000, l_U148._fU8 + 10.00000000 );
        sub_49233();
        PRINT_WITH_NUMBER_BIG( "GO", 3, 1100, 1 );
        return 1;
        break;
    }
    return 0;
}

void sub_48124()
{
    if (NOT (DOES_CAM_EXIST( l_U765 )))
    {
        BEGIN_CAM_COMMANDS( ref l_U766 );
        sub_48162();
        CREATE_CAM( 14, ref l_U763 );
        CREATE_CAM( 14, ref l_U764 );
        SET_CAM_POS( l_U763, l_U754._fU0, l_U754._fU4, l_U754._fU8 );
        POINT_CAM_AT_COORD( l_U763, l_U148._fU0, l_U148._fU4, l_U148._fU8 + 0.50000000 );
        SET_CAM_POS( l_U764, l_U757._fU0, l_U757._fU4, l_U757._fU8 );
        POINT_CAM_AT_COORD( l_U764, l_U760._fU0, l_U760._fU4, l_U760._fU8 );
        CREATE_CAM( 3, ref l_U765 );
        SET_CAM_INTERP_STYLE_CORE( l_U765, l_U763, l_U764, 3000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U765, 1, 0, 1, 1 );
        SET_CAM_ACTIVE( l_U765, 1 );
        SET_CAM_PROPAGATE( l_U765, 1 );
        SET_CAM_FOV( l_U765, 35.00000000 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    return;
}

void sub_48162()
{
    if (IS_PLAYER_PLAYING( sub_646() ))
    {
        SET_PLAYER_CONTROL( sub_646(), 0 );
    }
    return;
}

void sub_48601()
{
    if (DOES_CAM_EXIST( l_U765 ))
    {
        SET_CAM_ACTIVE( l_U765, 0 );
        SET_CAM_PROPAGATE( l_U765, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U765 );
    }
    if (DOES_CAM_EXIST( l_U763 ))
    {
        SET_CAM_ACTIVE( l_U763, 0 );
        SET_CAM_PROPAGATE( l_U763, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U763 );
    }
    if (DOES_CAM_EXIST( l_U764 ))
    {
        SET_CAM_ACTIVE( l_U764, 0 );
        SET_CAM_PROPAGATE( l_U764, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U764 );
        END_CAM_COMMANDS( ref l_U766 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    return;
}

void sub_49233()
{
    if (IS_PLAYER_PLAYING( sub_646() ))
    {
        SET_PLAYER_CONTROL( sub_646(), 1 );
    }
    sub_3943();
    return;
}

void sub_49774()
{
    unknown uVar2;

    l_U641 = 0;
    for ( l_U641 = 0; l_U641 < 5; l_U641++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U652[l_U641] )))
        {
            if (IS_VEH_DRIVEABLE( l_U664[l_U641] ))
            {
                if (IS_CHAR_IN_CAR( l_U652[l_U641], l_U664[l_U641] ))
                {
                    GET_CAR_HEALTH( l_U664[l_U641], ref uVar2 );
                    sub_16315( "GET_CAR_HEALTH(carRacer[", l_U641 );
                    sub_16315( "], ", uVar2 );
                    sub_6312( ")\n" );
                    if (sub_49995( l_U652[l_U641], ref l_U670[l_U641] ))
                    {
                        if (l_U670[l_U641] < (ProtectedGet(l_U37) - 1))
                        {
                            l_U670[l_U641]++;
                            l_U688 = l_U676[l_U641];
                        }
                        else if (l_U694[l_U641] < ProtectedGet(l_U38))
                        {
                            l_U694[l_U641]++;
                            l_U670[l_U641] = 0;
                        }
                        else if (l_U694[l_U641] == ProtectedGet(l_U38))
                        {
                            sub_11068();
                        };;;
                        l_U687 = l_U670[l_U641];
                        TASK_CAR_DRIVE_TO_COORD( l_U652[l_U641], l_U664[l_U641], l_U39[l_U687]._fU0, l_U39[l_U687]._fU4, l_U39[l_U687]._fU8, l_U688, 1, 0, 3, l_U738, l_U739 );
                    }
                }
                else
                {
                    WARP_CHAR_INTO_CAR( l_U652[l_U641], l_U664[l_U641] );
                }
            }
            else
            {
                REMOVE_BLIP( l_U658[l_U641] );
                GET_SCRIPT_TASK_STATUS( l_U652[l_U641], 15, ref l_U737 );
                if (l_U737 == 7)
                {
                    l_U687 = l_U670[l_U641];
                    TASK_CAR_DRIVE_TO_COORD( l_U652[l_U641], 0, l_U39[l_U687]._fU0, l_U39[l_U687]._fU4, l_U39[l_U687]._fU8, l_U688, 1, 0, 3, l_U738, l_U739 );
                }
                else if (IS_CHAR_IN_ANY_CAR( l_U652[l_U641] ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U652[l_U641], ref l_U664[l_U641] );
                    if (IS_VEH_DRIVEABLE( l_U664[l_U641] ))
                    {
                        SET_CAR_AS_MISSION_CAR( l_U664[l_U641] );
                        ADD_BLIP_FOR_CAR( l_U664[l_U641], ref l_U658[l_U641] );
                        CHANGE_BLIP_DISPLAY( l_U658[l_U641], 1 );
                        if (NOT (DOES_CAR_HAVE_STUCK_CAR_CHECK( l_U664[l_U641] )))
                        {
                            ADD_STUCK_CAR_CHECK_WITH_WARP( l_U664[l_U641], 2.00000000, 2000, 1, 1, 1, 1 );
                        }
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS( l_U652[l_U641] );
                    }
                }
            }
        }
        else
        {
            l_U809 = 1;
            sub_11068();
        }
    }
    return;
}

int sub_49995(unknown uParam0, unknown uParam1)
{
    if ((uParam1^) > -1)
    {
        if (LOCATE_CHAR_IN_CAR_3D( uParam0, l_U39[(uParam1^)]._fU0, l_U39[(uParam1^)]._fU4, l_U39[(uParam1^)]._fU8, l_U738, l_U738, l_U738, 0 ))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_50853(unknown uParam0)
{
    float fVar3;
    float fVar4;

    l_U641 = 0;
    (uParam0^) = 5;
    for ( l_U641 = 0; l_U641 < 5; l_U641++ )
    {
        if (l_U693 == l_U694[l_U641])
        {
            if (l_U683 == l_U670[l_U641])
            {
                if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6473(), ref l_U682 );
                }
                if (NOT (IS_CHAR_INJURED( l_U652[l_U641] )))
                {
                    GET_CHAR_COORDINATES( l_U652[l_U641], ref l_U643._fU0, ref l_U643._fU4, ref l_U643._fU8 );
                    fVar3 = VDIST( l_U643, l_U39[l_U683] );
                }
                if (NOT (IS_CAR_DEAD( l_U682 )))
                {
                    GET_CHAR_COORDINATES( sub_6473(), ref l_U643._fU0, ref l_U643._fU4, ref l_U643._fU8 );
                    fVar4 = VDIST( l_U643, l_U39[l_U683] );
                }
                if (fVar4 < fVar3)
                {
                    if ((uParam0^) > 0)
                    {
                        (uParam0^)--;
                        sub_51198( l_U652[l_U641], l_U664[l_U641], ref l_U676[l_U641] );
                    }
                }
                else if ((uParam0^) > 0)
                {
                    sub_51371( l_U652[l_U641], l_U664[l_U641], ref l_U676[l_U641] );
                }
            }
            else if (l_U683 > l_U670[l_U641])
            {
                if ((uParam0^) > 0)
                {
                    (uParam0^)--;
                    sub_51198( l_U652[l_U641], l_U664[l_U641], ref l_U676[l_U641] );
                }
            }
            else if ((uParam0^) > 0)
            {
                sub_51371( l_U652[l_U641], l_U664[l_U641], ref l_U676[l_U641] );
            };;;
        }
        else if (l_U693 > l_U694[l_U641])
        {
            if ((uParam0^) > 0)
            {
                (uParam0^)--;
                sub_51198( l_U652[l_U641], l_U664[l_U641], ref l_U676[l_U641] );
            }
        }
        else if ((uParam0^) > 0)
        {
            sub_51371( l_U652[l_U641], l_U664[l_U641], ref l_U676[l_U641] );
        };;;
        sub_6312( "iRacerCheck[" );
        sub_51801( l_U641 );
        sub_6312( "] = " );
        sub_51801( l_U670[l_U641] );
        sub_6312( "\n" );
        sub_6312( "iRacerLap[" );
        sub_51801( l_U641 );
        sub_6312( "] = " );
        sub_51801( l_U694[l_U641] );
        sub_6312( "\n" );
    }
    sub_6312( "iPlayerCheck = " );
    sub_51801( l_U683 );
    sub_6312( "\n" );
    sub_6312( "iCurrentLap = " );
    sub_51801( l_U693 );
    sub_6312( "\n" );
    return;
}

void sub_51198(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((NOT (IS_CHAR_DEAD( uParam0 ))) AND (NOT (IS_CAR_DEAD( uParam1 ))))
    {
        if ((uParam2^) < 50.00000000)
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                GET_SCRIPT_TASK_STATUS( uParam0, 15, ref l_U737 );
                if (l_U737 == 1)
                {
                    (uParam2^) += 0.20000000;
                    SET_DRIVE_TASK_CRUISE_SPEED( uParam0, (uParam2^) );
                }
            }
        }
    }
    return;
}

void sub_51371(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((NOT (IS_CHAR_DEAD( uParam0 ))) AND (NOT (IS_CAR_DEAD( uParam1 ))))
    {
        if ((uParam2^) > 25.00000000)
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                GET_SCRIPT_TASK_STATUS( uParam0, 15, ref l_U737 );
                if (l_U737 == 1)
                {
                    (uParam2^) -= 0.00500000;
                    SET_DRIVE_TASK_CRUISE_SPEED( uParam0, (uParam2^) );
                }
            }
        }
    }
    return;
}

void sub_51801(unknown uParam0)
{
    return;
}

void sub_52030()
{
    if (IS_CHAR_IN_ANY_CAR( sub_6473() ))
    {
        if (LOCATE_CHAR_IN_CAR_3D( sub_6473(), l_U39[l_U683]._fU0, l_U39[l_U683]._fU4, l_U39[l_U683]._fU8, l_U738, l_U738, l_U738, 0 ))
        {
            if (l_U683 < (ProtectedGet(l_U37) - 1))
            {
                l_U683++;
                if (l_U684 == (ProtectedGet(l_U37) - 1))
                {
                    if (l_U693 < ProtectedGet(l_U38))
                    {
                        l_U684 = 0;
                    }
                }
                else
                {
                    l_U684++;
                }
                sub_42922();
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
            }
            else if (l_U693 < ProtectedGet(l_U38))
            {
                l_U683 = 0;
                l_U684 = 1;
                l_U693++;
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT_LAP" );
                sub_42922();
            }
            else if (DOES_BLIP_EXIST( l_U685 ))
            {
                REMOVE_BLIP( l_U685 );
            }
            sub_15240();;;
        }
        else if (NOT (DOES_BLIP_EXIST( l_U685 )))
        {
            sub_42922();
        }
    }
    else if (DOES_BLIP_EXIST( l_U685 ))
    {
        REMOVE_BLIP( l_U685 );
        DELETE_CHECKPOINT( l_U741 );
    }
    if (DOES_BLIP_EXIST( l_U686 ))
    {
        REMOVE_BLIP( l_U686 );
    }
    sub_52514( l_U39[l_U683] );
    return;
}

void sub_52514(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    if ((l_U634) AND (IS_HINT_RUNNING()))
    {
        iVar5 = 0;
        GET_GAME_TIMER( ref iVar5 );
        if (iVar5 > (l_U635 + 500))
        {
            l_U634 = 0;
        }
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar6 );
    if ((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_6473() ))) AND (NOT sub_52607())) AND (iVar6 != 4))
    {
        if (NOT IS_HINT_RUNNING())
        {
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( uParam0._fU0, uParam0._fU4, uParam0._fU8, 0, 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U635 );
            l_U634 = 1;
            l_U633 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U633) AND (NOT l_U634))
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( uParam0._fU0, uParam0._fU4, uParam0._fU8, 0, 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U633 = 1;
        }
    }
    else if (l_U633)
    {
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U633 = 0;
    };;;
    return;
}

int sub_52607()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_52933()
{
    int iVar2;
    unknown uVar3;

    if (NOT l_U731)
    {
        l_U731 = 1;
    }
    else if (5 > l_U740)
    {
        if (NOT (IS_CHAR_INJURED( l_U652[l_U740] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U652[l_U740], 15, ref l_U737 );
            if (l_U737 == 7)
            {
                l_U687 = l_U670[l_U740];
                if (IS_VEH_DRIVEABLE( l_U664[l_U740] ))
                {
                    TASK_CAR_DRIVE_TO_COORD( l_U652[l_U740], l_U664[l_U740], l_U39[l_U687]._fU0, l_U39[l_U687]._fU4, l_U39[l_U687]._fU8, l_U688, 1, 0, 3, l_U738, l_U739 );
                }
                else
                {
                    TASK_CAR_DRIVE_TO_COORD( l_U652[l_U740], 0, l_U39[l_U687]._fU0, l_U39[l_U687]._fU4, l_U39[l_U687]._fU8, l_U688, 1, 0, 3, l_U738, l_U739 );
                }
            }
            if (l_U683 > l_U670[l_U740])
            {
                iVar2 = l_U683 - l_U670[l_U740];
                if (iVar2 > 1)
                {
                    l_U687 = l_U670[l_U740];
                    GET_GAME_VIEWPORT_ID( ref uVar3 );
                    if (NOT (IS_CHAR_ON_SCREEN( l_U652[l_U740] )))
                    {
                        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar3, l_U39[l_U687]._fU0, l_U39[l_U687]._fU4, l_U39[l_U687]._fU8, 15.00000000 )))
                        {
                            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( l_U39[l_U687]._fU0, l_U39[l_U687]._fU4, l_U39[l_U687]._fU8, 5.00000000, 5.00000000, 5.00000000 )))
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_6473(), l_U39[l_U687]._fU0, l_U39[l_U687]._fU4, l_U39[l_U687]._fU8, 15.00000000, 15.00000000, 10.00000000, 0 )))
                                {
                                    GET_GROUND_Z_FOR_3D_COORD( l_U39[l_U687]._fU0, l_U39[l_U687]._fU4, l_U39[l_U687]._fU8 + 1.00000000, ref l_U742 );
                                    SET_CHAR_COORDINATES( l_U652[l_U740], l_U39[l_U687]._fU0, l_U39[l_U687]._fU4, l_U742 );
                                    l_U643 = {(l_U39[l_U687 + 1]) - l_U39[l_U687]};
                                    GET_HEADING_FROM_VECTOR_2D( l_U643._fU0, l_U643._fU4, ref l_U642 );
                                    SET_CHAR_HEADING( l_U652[l_U740], l_U642 );
                                    SET_CHAR_COORDINATES( l_U652[l_U740], l_U39[l_U687]._fU0, l_U39[l_U687]._fU4, l_U742 );
                                    l_U687++;
                                    l_U688 = l_U676[l_U740];
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U652[l_U740] );
                                    sub_6312( "warpRacers() carRacer[" );
                                    sub_51801( l_U740 );
                                    sub_6312( "]\n" );
                                }
                            }
                        }
                    }
                }
            }
        }
        l_U740++;
    }
    else
    {
        l_U740 = 0;
    }
    return;
}

void sub_54002(unknown uParam0, int iParam1, unknown uParam2, int iParam3, int iParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    float fVar18;
    float fVar19;

    if (NOT sub_52607())
    {
        if (IS_HUD_PREFERENCE_SWITCHED_ON())
        {
            if (GET_IS_HIDEF())
            {
                uVar14 = l_U1;
                uVar15 = l_U2;
                uVar16 = l_U18;
                uVar17 = l_U12;
                fVar18 = 0.00000000;
            }
            else
            {
                uVar14 = l_U3;
                uVar15 = l_U4;
                uVar16 = l_U18;
                uVar17 = l_U13;
                fVar18 = 0.00000000;
            }
            fVar19 = sub_54115();
            if ((fVar19 > 1.24000000) AND (fVar19 < 1.26000000))
            {
                uVar16 = l_U19;
                uVar17 = l_U14;
                fVar18 = l_U5;
            }
            SET_WIDESCREEN_FORMAT( 3 );
            DISPLAY_AREA_NAME( 0 );
            if (iParam1 == 1)
            {
                GET_HUD_COLOUR( 10, ref uVar8, ref uVar9, ref uVar10, ref uVar11 );
            }
            else
            {
                GET_HUD_COLOUR( 7, ref uVar8, ref uVar9, ref uVar10, ref uVar11 );
            }
            if (IS_NETWORK_SESSION())
            {
                GET_HUD_COLOUR( sub_54260( uParam5 ), ref uVar8, ref uVar9, ref uVar10, ref uVar11 );
            }
            if (iParam4 > 1)
            {
                sub_54576( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                fVar12 = sub_54792( "OUTOF_NUM", uVar14, l_U29 + uVar15, l_U30, l_U31, uVar8, uVar9, uVar10, uVar11, 3, uParam2 );
                sub_54576( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                fVar13 = sub_55129( iParam1, uVar14, l_U25 + uVar15, l_U26, l_U27, uVar8, uVar9, uVar10, uVar11, 3 );
                if (fVar12 < fVar13)
                {
                    fVar12 = fVar13;
                }
                sub_54576( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                sub_55726( (uVar14 - fVar12) - uVar16, l_U21 + uVar15, l_U22, l_U23, uVar8, uVar9, uVar10, uVar11, 3, iParam1 );
                sub_54576( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                sub_55902( "NUM_OUTOF_NUM", uVar14, l_U9 + uVar15, l_U10, l_U11, 255, 255, 255, 255, 3, iParam3 + 1, iParam4 );
                sub_54576( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                sub_55902( "LAP", uVar17, l_U15 + uVar15, l_U16, l_U17, 255, 255, 255, 255, 3, iParam3 + 1, iParam4 );
            }
            else
            {
                sub_54576( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                fVar12 = sub_54792( "OUTOF_NUM", uVar14, l_U28 + uVar15, l_U30, l_U31, uVar8, uVar9, uVar10, uVar11, 3, uParam2 );
                sub_54576( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                fVar13 = sub_55129( iParam1, uVar14, l_U24 + uVar15, l_U26, l_U27, uVar8, uVar9, uVar10, uVar11, 3 );
                if (fVar12 < fVar13)
                {
                    fVar12 = fVar13;
                }
                sub_54576( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                sub_55726( (uVar14 - fVar12) - uVar16, l_U20 + uVar15, l_U22, l_U23, uVar8, uVar9, uVar10, uVar11, 3, iParam1 );
            }
            sub_54576( 0, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
            sub_56408( uVar14 + fVar18, l_U6 + uVar15, l_U7, l_U8, 255, 255, 255, 255, 3, uParam0, 1065353216 );
            SET_WIDESCREEN_FORMAT( 0 );
        }
    }
    return;
}

void sub_54115()
{
    return GET_ASPECT_RATIO();
}

void sub_54260(unknown uParam0)
{
    int[32] iVar3;

    array(ref iVar3, 32);
    iVar3[0] = 26;
    iVar3[1] = 27;
    iVar3[2] = 28;
    iVar3[3] = 29;
    iVar3[4] = 30;
    iVar3[5] = 31;
    iVar3[6] = 32;
    iVar3[7] = 33;
    iVar3[8] = 34;
    iVar3[9] = 35;
    iVar3[10] = 36;
    iVar3[11] = 37;
    iVar3[12] = 38;
    iVar3[13] = 39;
    iVar3[14] = 40;
    iVar3[15] = 41;
    iVar3[16] = 42;
    iVar3[17] = 43;
    iVar3[18] = 44;
    iVar3[19] = 45;
    iVar3[20] = 46;
    iVar3[21] = 47;
    iVar3[22] = 48;
    iVar3[23] = 49;
    iVar3[24] = 50;
    iVar3[25] = 51;
    iVar3[26] = 52;
    iVar3[27] = 53;
    iVar3[28] = 54;
    iVar3[29] = 55;
    iVar3[30] = 56;
    iVar3[31] = 57;
    return iVar3[uParam0];
}

void sub_54576(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    SET_TEXT_FONT( uParam0 );
    SET_TEXT_BACKGROUND( 0 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 255 );
    SET_TEXT_EDGE( 0, 0, 0, 0, 255 );
    switch (uParam3)
    {
        case 1:
        SET_TEXT_BACKGROUND( 1 );
        break;
        case 2:
        SET_TEXT_DROPSHADOW( uParam4, uParam5, uParam6, uParam7, uParam8 );
        break;
        case 3:
        SET_TEXT_EDGE( uParam4, uParam5, uParam6, uParam7, uParam8 );
        break;
    }
    SET_TEXT_PROPORTIONAL( 1 );
    SET_TEXT_WRAP( uParam1, uParam2 );
    return;
}

void sub_54792(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_54832( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_NUMBER( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_54832(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        SET_TEXT_JUSTIFY( 0 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        break;
        case 1:
        SET_TEXT_JUSTIFY( 0 );
        SET_TEXT_CENTRE( 1 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        break;
        case 2:
        SET_TEXT_JUSTIFY( 1 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        break;
        case 3:
        SET_TEXT_JUSTIFY( 0 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 1 );
        SET_TEXT_WRAP( 0.00000000, (uParam1^) );
        (uParam1^) = 0.00000000;
        break;
    }
    return;
}

void sub_55129(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if ((((((iParam0 == 1) || (iParam0 == 21)) || (iParam0 == 31)) || (iParam0 == 41)) || (iParam0 == 51)) || (iParam0 == 61))
    {
        return sub_55204( "ST", uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, 0 );
    }
    if ((((((iParam0 == 2) || (iParam0 == 22)) || (iParam0 == 32)) || (iParam0 == 42)) || (iParam0 == 52)) || (iParam0 == 62))
    {
        return sub_55204( "ND", uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, 0 );
    }
    if ((((((iParam0 == 3) || (iParam0 == 23)) || (iParam0 == 33)) || (iParam0 == 43)) || (iParam0 == 53)) || (iParam0 == 63))
    {
        return sub_55204( "RD", uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, 0 );
    }
    return sub_55204( "TH", uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, 0 );
}

void sub_55204(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    float Result;

    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_54832( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH( uParam0 );
    if (((uParam10) AND (Result >= 0.25000000)) AND ((NOT GET_IS_WIDESCREEN()) AND (NOT GET_IS_HIDEF())))
    {
        while (NOT (sub_55295( uParam0, uParam1, uParam3, uParam4, uParam9, ref Result, 0 )))
        {
            ;
        }
    }
    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    DISPLAY_TEXT( uParam1, uParam2, uParam0 );
    return Result;
}

boolean sub_55295(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6)
{
    SET_TEXT_SCALE( uParam2 * 0.80000000, uParam3 * 0.80000000 );
    sub_54832( uParam4, ref uParam1 );
    if (bParam6)
    {
        (uParam5^) = GET_STRING_WIDTH_WITH_STRING( "STRING", uParam0 );
    }
    else
    {
        (uParam5^) = GET_STRING_WIDTH( uParam0 );
    }
    return (uParam5^) < 0.25000000;
}

void sub_55726(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_54832( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam9 );
    DISPLAY_TEXT_WITH_NUMBER( uParam0, uParam1, "NUMBER", uParam9 );
    return Result;
}

void sub_55902(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    float Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_54832( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    Result += GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam11 );
    Result -= GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", 11 );
    DISPLAY_TEXT_WITH_2_NUMBERS( uParam1, uParam2, uParam0, uParam10, uParam11 );
    return Result;
}

float sub_56408(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, int iParam9, unknown uParam10)
{
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;

    if (iParam9 < 0)
    {
        iParam9 = 0;
    }
    else if (iParam9 > 5999990)
    {
        iParam9 = 5999990;
    }
    iVar13 = iParam9 / 10;
    iVar14 = iParam9 / 1000;
    iVar15 = iVar14 / 60;
    iVar13 -= iVar14 * 100;
    iVar14 -= iVar15 * 60;
    iVar16 = iVar13 / 10;
    iVar17 = iVar13 mod 10;
    iVar18 = iVar14 / 10;
    iVar19 = iVar14 mod 10;
    iVar20 = iVar15 / 10;
    iVar21 = iVar15 mod 10;
    SET_TEXT_SCALE( uParam2, uParam3 );
    fVar22 = (GET_STRING_WIDTH_WITH_STRING( "STRING", "0" )) * uParam10;
    fVar23 = (GET_STRING_WIDTH( "COLON" )) * uParam10;
    fVar24 = fVar22 * 0.50000000;
    fVar25 = fVar23 * 0.50000000;
    if (iParam8 == 2)
    {
        fVar26 = uParam0 + (fVar22 / 2);
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55204( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55204( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
    }
    else if (iParam8 == 3)
    {
        fVar26 = uParam0 - (fVar22 / 2);
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55204( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55204( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    else
    {
        fVar26 = uParam0 + fVar24;
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55204( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 = uParam0 - fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55204( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55726( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    return (6 * fVar22) + (2 * fVar23);
}
