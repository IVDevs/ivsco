void main()
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
    int iVar12;
    boolean bVar13;
    int iVar14;
    unknown uVar15;
    int iVar16;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U7 = 0;
    l_U8 = 0;
    l_U9 = 0;
    l_U10 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U13 = 0;
    l_U19 = 0;
    l_U20 = -1;
    l_U21 = 0;
    l_U22 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    REQUEST_ANIMS( "TAXI_HAIL" );
    while (NOT (HAVE_ANIMS_LOADED( "TAXI_HAIL" )))
    {
        WAIT( 0 );
    }
    while (true)
    {
        if (NOT sub_139())
        {
            if (DOES_VEHICLE_EXIST( g_U2784 ))
            {
                l_U11 = 1;
            }
            else
            {
                l_U11 = 0;
            }
            if (g_U2777)
            {
                if (g_U2771)
                {
                    if ((NOT g_U12303) AND (NOT IS_MINIGAME_IN_PROGRESS()))
                    {
                        g_U2771 = 0;
                    }
                }
            }
            if (NOT g_U12303)
            {
                if (NOT (g_U2767 == 6))
                {
                    g_U2767 = 6;
                }
                if (NOT (g_U2769 == nil))
                {
                    g_U2769 = nil;
                }
            }
            if ((NOT g_U2771) AND (NOT IS_NETWORK_GAME_RUNNING()))
            {
                if (NOT (g_U2765 == nil))
                {
                    if (NOT (DOES_BLIP_EXIST( g_U2765 )))
                    {
                        g_U2765 = nil;
                    }
                }
                sub_422();
                switch (l_U19)
                {
                    case 0:
                    if (IS_PLAYER_PLAYING( sub_148() ))
                    {
                        if (NOT sub_615())
                        {
                            sub_921();
                        }
                        else if (NOT (IS_WANTED_LEVEL_GREATER( sub_148(), 0 )))
                        {
                            if (TIMERA() > 30000)
                            {
                                sub_921();
                            }
                        }
                        else
                        {
                            sub_921();
                        }
                    }
                    else
                    {
                        sub_921();
                    }
                    if (l_U22 == 0)
                    {
                        l_U28 = nil;
                        l_U23 = nil;
                        l_U20 = -1;
                        l_U7 = 1;
                        SETTIMERB( 0 );
                        sub_1452( 1, "BLANK" );
                        sub_1673();
                        if (HAS_SCRIPT_LOADED( "taxi" ))
                        {
                            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "taxi" );
                        }
                        if (IS_PLAYER_PLAYING( sub_148() ))
                        {
                            SET_PLAYER_CAN_DO_DRIVE_BY( sub_148(), 1 );
                        }
                        g_U10500 = 0;
                        l_U22++;
                    }
                    if (l_U22 == 1)
                    {
                        iVar16 = 0;
                        if (IS_PLAYER_PLAYING( sub_148() ))
                        {
                            if ((NOT l_U7) AND (IS_CONTROL_PRESSED( 2, 23 )))
                            {
                                if (NOT (IS_CHAR_PLAYING_ANIM( sub_748(), "TAXI_HAIL", "HAIL_TAXI" )))
                                {
                                    if ((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_148() )) || (g_U10499))
                                    {
                                        if (((sub_1979()) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_748() )))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_748() ))))
                                        {
                                            l_U28 = sub_2113();
                                            if (DOES_VEHICLE_EXIST( l_U28 ))
                                            {
                                                if (NOT (l_U28 == g_U2783))
                                                {
                                                    if (sub_2630( ref l_U28 ))
                                                    {
                                                        if (sub_4108( 1, 1 ))
                                                        {
                                                            iVar16 = 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (l_U13)
                        {
                            if (TIMERA() > 1000)
                            {
                                GET_SCRIPT_TASK_STATUS( sub_748(), 102, ref l_U25 );
                                if (l_U25 == 7)
                                {
                                    GET_SCRIPT_TASK_STATUS( sub_748(), 29, ref l_U25 );
                                    if (l_U25 == 7)
                                    {
                                        if (((NOT (IS_CHAR_PLAYING_ANIM( sub_748(), "TAXI_HAIL", "HAIL_TAXI" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_748(), "TAXI_HAIL", "FUCK_U" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_748(), "TAXI_HAIL", "FORGET_IT" ))))
                                        {
                                            if (NOT g_U10499)
                                            {
                                                bVar13 = IS_AMBIENT_SPEECH_DISABLED( sub_748() );
                                                if (bVar13)
                                                {
                                                    STOP_PED_SPEAKING( sub_748(), 0 );
                                                }
                                                SAY_AMBIENT_SPEECH( sub_748(), "TAXI_DRIVES_PAST", 0, 0, 0 );
                                                if (bVar13)
                                                {
                                                    STOP_PED_SPEAKING( sub_748(), 1 );
                                                }
                                            }
                                            l_U13 = 0;
                                        }
                                    }
                                }
                            }
                        }
                        if ((iVar16) AND (sub_4108( 1, 1 )))
                        {
                            if (sub_4718( 1, "BLANK", 1 ))
                            {
                                bVar13 = true;
                                if (NOT (l_U28 == g_U2784))
                                {
                                    if (IS_WANTED_LEVEL_GREATER( sub_148(), 0 ))
                                    {
                                        bVar13 = false;
                                    }
                                }
                                if (NOT (sub_5371( ref l_U28, 1 )))
                                {
                                    bVar13 = false;
                                }
                                if (NOT (sub_5426( l_U28 )))
                                {
                                    bVar13 = false;
                                }
                                if (IS_WANTED_LEVEL_GREATER( sub_148(), 0 ))
                                {
                                    bVar13 = false;
                                }
                                if (bVar13)
                                {
                                    CLEAR_CHAR_TASKS( sub_748() );
                                    if (NOT g_U10499)
                                    {
                                        if (IS_CHAR_ARMED( sub_748(), 7 ))
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U26 );
                                            TASK_SWAP_WEAPON( 0, 0 );
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "HAIL_TAXI", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                                            CLOSE_SEQUENCE_TASK( l_U26 );
                                            TASK_PERFORM_SEQUENCE( sub_748(), l_U26 );
                                            CLEAR_SEQUENCE_TASK( l_U26 );
                                        }
                                        else
                                        {
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_748(), "HAIL_TAXI", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                                        }
                                    }
                                    else
                                    {
                                        bVar13 = IS_AMBIENT_SPEECH_DISABLED( sub_748() );
                                        if (bVar13)
                                        {
                                            STOP_PED_SPEAKING( sub_748(), 0 );
                                        }
                                        SAY_AMBIENT_SPEECH( sub_748(), "TAXI_HAIL_DRUNK", 1, 1, 0 );
                                        if (bVar13)
                                        {
                                            STOP_PED_SPEAKING( sub_748(), 1 );
                                        }
                                    }
                                    sub_5973( ref l_U28, ref l_U23 );
                                    SETTIMERA( 0 );
                                    HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, l_U28, 4000 );
                                    l_U12 = 1;
                                    l_U8 = 0;
                                    l_U7 = 1;
                                    sub_6203( 1 );
                                }
                                else
                                {
                                    CLEAR_CHAR_TASKS( sub_748() );
                                    if (NOT g_U10499)
                                    {
                                        if (IS_CHAR_ARMED( sub_748(), 7 ))
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U26 );
                                            TASK_SWAP_WEAPON( 0, 0 );
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "HAIL_TAXI", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                                            CLOSE_SEQUENCE_TASK( l_U26 );
                                            TASK_PERFORM_SEQUENCE( sub_748(), l_U26 );
                                            CLEAR_SEQUENCE_TASK( l_U26 );
                                        }
                                        else
                                        {
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_748(), "HAIL_TAXI", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                                        }
                                    }
                                    else
                                    {
                                        bVar13 = IS_AMBIENT_SPEECH_DISABLED( sub_748() );
                                        if (bVar13)
                                        {
                                            STOP_PED_SPEAKING( sub_748(), 0 );
                                        }
                                        SAY_AMBIENT_SPEECH( sub_748(), "TAXI_HAIL_DRUNK", 1, 1, 0 );
                                        if (bVar13)
                                        {
                                            STOP_PED_SPEAKING( sub_748(), 1 );
                                        }
                                    }
                                    SET_TAXI_LIGHTS( l_U28, 0 );
                                    l_U7 = 1;
                                    SETTIMERA( 0 );
                                    l_U8 = 1;
                                    sub_921();
                                    sub_6203( 1 );
                                }
                                sub_6574();
                                TASK_LOOK_AT_VEHICLE( sub_748(), l_U28, 4000, 0 );
                                break;
                            }
                        }
                        else
                        {
                            sub_1452( 1, "BLANK" );
                        }
                        l_U9 = 0;
                        if (sub_615())
                        {
                            if (IS_PLAYER_PLAYING( sub_148() ))
                            {
                                if (IS_VEH_DRIVEABLE( g_U2783 ))
                                {
                                    if (sub_7251( g_U2783 ))
                                    {
                                        if (sub_7329( g_U2783 ))
                                        {
                                            if (NOT g_U10499)
                                            {
                                                if (LOCATE_CHAR_ON_FOOT_CAR_3D( sub_748(), g_U2783, 7.00000000, 7.00000000, 2.00000000, 0 ))
                                                {
                                                    if (NOT sub_7452())
                                                    {
                                                        l_U9 = 1;
                                                    }
                                                }
                                            }
                                            else if (LOCATE_CHAR_ON_FOOT_CAR_3D( sub_748(), g_U2783, 4.00000000, 4.00000000, 2.00000000, 0 ))
                                            {
                                                if (NOT sub_7452())
                                                {
                                                    l_U9 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (l_U9)
                        {
                            if (g_U2784 == g_U2783)
                            {
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )))
                                {
                                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                                    PRINT_HELP_FOREVER( "TX_H07" );
                                    l_U10 = 1;
                                }
                            }
                            else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )))
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                                PRINT_HELP_FOREVER( "TX_H02" );
                                l_U10 = 1;
                            }
                        }
                        else if (l_U10)
                        {
                            if (g_U2784 == g_U2783)
                            {
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" ))
                                {
                                    CLEAR_HELP();
                                    l_U10 = 0;
                                }
                            }
                            else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" ))
                            {
                                CLEAR_HELP();
                                l_U10 = 0;
                            }
                        }
                        if (IS_PLAYER_PLAYING( sub_148() ))
                        {
                            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) == 0)
                            {
                                if (((sub_7803()) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )))
                                {
                                    bVar13 = false;
                                    if (((IS_CONTROL_PRESSED( 2, 3 )) AND (TIMERB() > 275)) AND (NOT (sub_7865( sub_748() ))))
                                    {
                                        bVar13 = true;
                                    }
                                    if (NOT (IS_CONTROL_PRESSED( 2, 3 )))
                                    {
                                        SETTIMERB( 0 );
                                    }
                                    if (bVar13)
                                    {
                                        sub_1236();
                                        if ((l_U28 == g_U9557) || (l_U28 == g_U2784))
                                        {
                                            if (IS_VEH_DRIVEABLE( l_U28 ))
                                            {
                                                LOCK_CAR_DOORS( l_U28, 1 );
                                            }
                                        }
                                        bVar13 = false;
                                        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )))
                                        {
                                            bVar13 = true;
                                        }
                                        if ((sub_615()) AND (bVar13))
                                        {
                                            l_U28 = g_U2783;
                                        }
                                        l_U20 = sub_8667( ref l_U28 );
                                        if (NOT (l_U20 == -1))
                                        {
                                            g_U10500 = 1;
                                            sub_8910();
                                            SET_PLAYER_CONTROL( sub_148(), 0 );
                                            CLEAR_CHAR_TASKS( sub_748() );
                                            if (g_U10499)
                                            {
                                                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                            }
                                            if (IS_VEH_DRIVEABLE( l_U28 ))
                                            {
                                                LOCK_CAR_DOORS( l_U28, 1 );
                                                OPEN_SEQUENCE_TASK( ref l_U26 );
                                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U28, 10000, l_U20 );
                                                CLOSE_SEQUENCE_TASK( l_U26 );
                                                TASK_PERFORM_SEQUENCE( sub_748(), l_U26 );
                                                CLEAR_SEQUENCE_TASK( l_U26 );
                                            }
                                            sub_5973( ref l_U28, ref l_U23 );
                                            if (NOT (IS_CHAR_INJURED( g_U2779 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( g_U2779, 48, ref l_U25 );
                                                if (l_U25 == 7)
                                                {
                                                    if (IS_VEH_DRIVEABLE( g_U2783 ))
                                                    {
                                                        TASK_CAR_TEMP_ACTION( g_U2779, g_U2783, 6, 15000 );
                                                    }
                                                }
                                            }
                                            if (IS_VEH_DRIVEABLE( l_U28 ))
                                            {
                                                SET_HAS_BEEN_OWNED_BY_PLAYER( l_U28, 1 );
                                            }
                                            if (DOES_GROUP_EXIST( sub_3736() ))
                                            {
                                                GET_GROUP_SIZE( sub_3736(), ref uVar15, ref iVar14 );
                                                if (iVar14 > 0)
                                                {
                                                    GET_GROUP_MEMBER( sub_3736(), 0, ref l_U24 );
                                                    if (NOT (IS_CHAR_INJURED( l_U24 )))
                                                    {
                                                        CLEAR_CHAR_TASKS( l_U24 );
                                                        OPEN_SEQUENCE_TASK( ref l_U26 );
                                                        if (l_U20 == 1)
                                                        {
                                                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U28, 10000, 2 );
                                                        }
                                                        else
                                                        {
                                                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U28, 10000, 1 );
                                                        }
                                                        CLOSE_SEQUENCE_TASK( l_U26 );
                                                        TASK_PERFORM_SEQUENCE( l_U24, l_U26 );
                                                        CLEAR_SEQUENCE_TASK( l_U26 );
                                                    }
                                                    if (iVar14 > 1)
                                                    {
                                                        GET_GROUP_MEMBER( sub_3736(), 1, ref l_U24 );
                                                        if (NOT (IS_CHAR_INJURED( l_U24 )))
                                                        {
                                                            OPEN_SEQUENCE_TASK( ref l_U26 );
                                                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U28, 10000, 0 );
                                                            CLOSE_SEQUENCE_TASK( l_U26 );
                                                            TASK_PERFORM_SEQUENCE( l_U24, l_U26 );
                                                            CLEAR_SEQUENCE_TASK( l_U26 );
                                                        }
                                                    }
                                                }
                                            }
                                            SETTIMERA( 0 );
                                            l_U7 = 1;
                                            sub_4993();
                                            sub_6203( 2 );
                                        }
                                    }
                                }
                                else if (NOT (IS_CONTROL_PRESSED( 2, 3 )))
                                {
                                    SETTIMERB( 0 );
                                }
                            }
                            else
                            {
                                SETTIMERB( 0 );
                            }
                        }
                    }
                    break;
                    case 1:
                    if (IS_PLAYER_PLAYING( sub_148() ))
                    {
                        if (DOES_VEHICLE_EXIST( g_U2783 ))
                        {
                            if (IS_VEH_DRIVEABLE( g_U2783 ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( sub_748(), g_U2783 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( g_U2779 )))
                                    {
                                        if (IS_CHAR_IN_CAR( g_U2779, g_U2783 ))
                                        {
                                            bVar13 = false;
                                            if (TIMERA() > 1000)
                                            {
                                                GET_SCRIPT_TASK_STATUS( sub_748(), 102, ref l_U25 );
                                                if (l_U25 == 7)
                                                {
                                                    if (((NOT (IS_CHAR_PLAYING_ANIM( sub_748(), "TAXI_HAIL", "HAIL_TAXI" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_748(), "TAXI_HAIL", "FUCK_U" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_748(), "TAXI_HAIL", "FORGET_IT" ))))
                                                    {
                                                        GET_SCRIPT_TASK_STATUS( sub_748(), 29, ref l_U25 );
                                                        if (l_U25 == 7)
                                                        {
                                                            bVar13 = true;
                                                        }
                                                    }
                                                }
                                            }
                                            if (bVar13)
                                            {
                                                if (NOT l_U8)
                                                {
                                                    OPEN_SEQUENCE_TASK( ref l_U26 );
                                                    if (sub_9914( g_U2783 ))
                                                    {
                                                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Aknowledge_R", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                                                    }
                                                    else
                                                    {
                                                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Aknowledge_L", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                                                    }
                                                    TASK_CAR_MISSION( 0, g_U2783, 0, 21, 12.00000000, 1, 3, 3 );
                                                    TASK_CAR_MISSION( 0, g_U2783, 0, 5, 12.00000000, 1, 3, 3 );
                                                    CLOSE_SEQUENCE_TASK( l_U26 );
                                                    TASK_PERFORM_SEQUENCE( g_U2779, l_U26 );
                                                    CLEAR_SEQUENCE_TASK( l_U26 );
                                                    INCREMENT_INT_STAT_NO_MESSAGE( 268, 1 );
                                                }
                                                SETTIMERA( 0 );
                                                l_U13 = 0;
                                                sub_6203( 0 );
                                            }
                                        }
                                        else
                                        {
                                            l_U13 = 0;
                                            sub_6203( 0 );
                                        }
                                    }
                                    else
                                    {
                                        l_U13 = 0;
                                        sub_6203( 0 );
                                    }
                                }
                                else
                                {
                                    l_U13 = 0;
                                    sub_6203( 2 );
                                }
                            }
                            else
                            {
                                l_U13 = 0;
                                sub_6203( 0 );
                            }
                        }
                        else if ((NOT (IS_CHAR_PLAYING_ANIM( sub_748(), "TAXI_HAIL", "HAIL_TAXI" ))) AND (TIMERA() > 3000))
                        {
                            CLEAR_CHAR_TASKS( sub_748() );
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar14 );
                            if (iVar14 < 2)
                            {
                                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_748(), "FORGET_IT", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                            }
                            else
                            {
                                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_748(), "FUCK_U", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                            }
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref iVar14 );
                            if (iVar14 == 1)
                            {
                                if (NOT g_U10499)
                                {
                                    l_U13 = 1;
                                }
                            }
                            SETTIMERA( 0 );
                            sub_6203( 0 );
                        }
                    }
                    if (IS_CONTROL_PRESSED( 2, 3 ))
                    {
                        sub_6203( 0 );
                    }
                    break;
                    case 2:
                    if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )))
                    {
                        CLEAR_HELP();
                    }
                    if (l_U22 == 0)
                    {
                        SETTIMERA( 0 );
                        REQUEST_SCRIPT( "taxi" );
                        if (IS_PLAYER_PLAYING( sub_148() ))
                        {
                            SET_PLAYER_CAN_DO_DRIVE_BY( sub_148(), 0 );
                        }
                        l_U22++;
                    }
                    if (l_U22 == 1)
                    {
                        bVar13 = false;
                        if (TIMERA() > 12000)
                        {
                            if (IS_PLAYER_PLAYING( sub_148() ))
                            {
                                if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_748() )))
                                {
                                    bVar13 = true;
                                }
                            }
                        }
                        if (((sub_10824()) AND (NOT bVar13)) AND (NOT sub_10945()))
                        {
                            if (NOT (IS_CHAR_INJURED( g_U2779 )))
                            {
                                GET_SCRIPT_TASK_STATUS( g_U2779, 48, ref l_U25 );
                                if (l_U25 == 7)
                                {
                                    if (IS_VEH_DRIVEABLE( g_U2783 ))
                                    {
                                        TASK_CAR_TEMP_ACTION( g_U2779, g_U2783, 6, 15000 );
                                    }
                                }
                            }
                            if (IS_PLAYER_PLAYING( sub_148() ))
                            {
                                if (IS_VEH_DRIVEABLE( g_U2783 ))
                                {
                                    if (IS_CHAR_IN_CAR( sub_748(), g_U2783 ))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( sub_748(), g_U2783 ))
                                        {
                                            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2783, l_U20 )))
                                            {
                                                GET_CHAR_IN_CAR_PASSENGER_SEAT( g_U2783, l_U20, ref iVar12 );
                                                if (iVar12 == sub_748())
                                                {
                                                    sub_6203( 3 );
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (IS_PLAYER_PLAYING( sub_148() ))
                        {
                            SET_PLAYER_CONTROL( sub_148(), 1 );
                            CLEAR_CHAR_TASKS( sub_748() );
                            if (NOT (IS_CHAR_IN_ANY_CAR( sub_748() )))
                            {
                                CLEAR_CHAR_TASKS( sub_748() );
                            }
                            if (IS_CHAR_GETTING_IN_TO_A_CAR( sub_748() ))
                            {
                                CLEAR_CHAR_TASKS( sub_748() );
                                TASK_LEAVE_ANY_CAR( sub_748() );
                            }
                        }
                        if (DOES_GROUP_EXIST( sub_3736() ))
                        {
                            GET_GROUP_SIZE( sub_3736(), ref uVar15, ref iVar14 );
                            if (iVar14 > 0)
                            {
                                GET_GROUP_MEMBER( sub_3736(), 0, ref l_U24 );
                                if (NOT (IS_CHAR_INJURED( l_U24 )))
                                {
                                    CLEAR_CHAR_TASKS( l_U24 );
                                    if (NOT (IS_CAR_DEAD( g_U2783 )))
                                    {
                                        if (IS_CHAR_IN_CAR( l_U24, g_U2783 ))
                                        {
                                            TASK_LEAVE_CAR_IMMEDIATELY( l_U24, g_U2783 );
                                        }
                                    }
                                }
                                if (iVar14 > 1)
                                {
                                    GET_GROUP_MEMBER( sub_3736(), 1, ref l_U24 );
                                    if (NOT (IS_CHAR_INJURED( l_U24 )))
                                    {
                                        CLEAR_CHAR_TASKS( l_U24 );
                                        if (NOT (IS_CAR_DEAD( g_U2783 )))
                                        {
                                            if (IS_CHAR_IN_CAR( l_U24, g_U2783 ))
                                            {
                                                TASK_LEAVE_CAR_IMMEDIATELY( l_U24, g_U2783 );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        sub_921();
                        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "taxi" );
                        l_U13 = 0;
                        sub_6203( 0 );;
                    }
                    break;
                    case 3:
                    if (l_U22 == 0)
                    {
                        if (((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H01" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )))
                        {
                            CLEAR_HELP();
                        }
                        REQUEST_SCRIPT( "taxi" );
                        l_U22++;
                    }
                    if (l_U22 == 1)
                    {
                        if (NOT (IS_CHAR_INJURED( g_U2779 )))
                        {
                            GET_SCRIPT_TASK_STATUS( g_U2779, 48, ref l_U25 );
                            if (l_U25 == 7)
                            {
                                if (IS_VEH_DRIVEABLE( g_U2783 ))
                                {
                                    TASK_CAR_TEMP_ACTION( g_U2779, g_U2783, 6, 15000 );
                                }
                            }
                        }
                        REQUEST_SCRIPT( "taxi" );
                        if (HAS_SCRIPT_LOADED( "taxi" ))
                        {
                            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) == 0)
                            {
                                l_U27 = START_NEW_SCRIPT( "taxi", 2024 );
                                MARK_SCRIPT_AS_NO_LONGER_NEEDED( "taxi" );
                                sub_6203( 4 );
                            }
                            else
                            {
                                TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "taxi" );
                                MARK_SCRIPT_AS_NO_LONGER_NEEDED( "taxi" );
                                SCRIPT_ASSERT( "Taxi Script Terminated - Please tell Neil F." );
                            }
                        }
                    }
                    break;
                    case 4:
                    if (IS_PLAYER_PLAYING( sub_148() ))
                    {
                        if (NOT (IS_THREAD_ACTIVE( l_U27 )))
                        {
                            if (NOT (sub_12683( sub_748() )))
                            {
                                sub_921();
                                if (HAS_SCRIPT_LOADED( "taxi" ))
                                {
                                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "taxi" );
                                }
                                l_U13 = 0;
                                sub_6203( 0 );
                            }
                        }
                    }
                    break;
                }
                sub_12926();
            }
        }
        else if (((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H01" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )))
        {
            CLEAR_HELP();
        }
        if (NOT l_U29)
        {
            WAIT( 0 );
        }
        else
        {
            l_U29 = 0;
        }
    }
    return;
}

int sub_139()
{
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        if ((NOT (IS_PLAYER_CONTROL_ON( sub_148() ))) AND (ARE_WIDESCREEN_BORDERS_ACTIVE()))
        {
            return 1;
        }
    }
    return 0;
}

void sub_148()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_422()
{
    if (l_U12)
    {
        if (sub_439())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            l_U12 = 0;
        }
    }
    return;
}

int sub_439()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((((iVar2 > 64) || (iVar2 < 65472)) || (iVar3 > 64)) || (iVar3 < 65472))
    {
        return 1;
    }
    return 0;
}

int sub_615()
{
    int iVar2;

    if (DOES_VEHICLE_EXIST( g_U2783 ))
    {
        if (IS_VEH_DRIVEABLE( g_U2783 ))
        {
            GET_DRIVER_OF_CAR( g_U2783, ref iVar2 );
            if (DOES_CHAR_EXIST( iVar2 ))
            {
                if (NOT (IS_CHAR_INJURED( iVar2 )))
                {
                    if (iVar2 == g_U2779)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2783, 0 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( g_U2783, 0, ref iVar2 );
                            if (NOT (iVar2 == sub_748()))
                            {
                                return 0;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2783, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( g_U2783, 1, ref iVar2 );
                            if (NOT (iVar2 == sub_748()))
                            {
                                return 0;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2783, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( g_U2783, 2, ref iVar2 );
                            if (NOT (iVar2 == sub_748()))
                            {
                                return 0;
                            }
                        }
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_748()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_921()
{
    unknown uVar2;

    if (g_U2773)
    {
        if (NOT sub_940())
        {
            if ((DOES_CHAR_EXIST( g_U2779 )) AND (DOES_VEHICLE_EXIST( g_U2783 )))
            {
                if (NOT (IS_CHAR_INJURED( g_U2779 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U2779, 0 );
                    if (IS_VEH_DRIVEABLE( g_U2783 ))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( g_U2779, g_U2783 ))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar2 );
                            if (((NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2783, 0 ))) || (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2783, 1 )))) || (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2783, 2 ))))
                            {
                                TASK_PAUSE( 0, 2000 );
                            }
                            TASK_CAR_MISSION( 0, g_U2783, 0, 1, 15.00000000, 0, 5, 5 );
                            CLOSE_SEQUENCE_TASK( uVar2 );
                            TASK_PERFORM_SEQUENCE( g_U2779, uVar2 );
                            CLEAR_SEQUENCE_TASK( uVar2 );
                        }
                    }
                }
                sub_1236();
            }
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H01" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )))
            {
                CLEAR_HELP();
            }
            g_U2773 = 0;
            l_U6 = 0;
            g_U2779 = nil;
            g_U2783 = nil;
        }
    }
    return;
}

int sub_940()
{
    if (sub_954( g_U2783 ))
    {
        return 1;
    }
    return 0;
}

int sub_954(int iParam0)
{
    if (iParam0 == g_U2784)
    {
        return 1;
    }
    return 0;
}

void sub_1236()
{
    if (l_U6)
    {
        l_U6 = 0;
    }
    return;
}

void sub_1452(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((g_U10468 == iParam0) AND (l_U5))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_1673();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_148(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_1673()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

int sub_1979()
{
    int iVar2;

    if (IS_CHAR_IN_AREA_3D( sub_748(), -900.27590000, 296.00000000, -32.25060000, -400.00000000, 796.98660000, -4.32560000, 0 ))
    {
        return 1;
    }
    GET_INTERIOR_FROM_CHAR( sub_748(), ref iVar2 );
    if (iVar2 == nil)
    {
        return 1;
    }
    return 0;
}

void sub_2113()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown[9] uVar17;
    int I;
    float[9] fVar28;
    float fVar38;
    float fVar39;
    float fVar40;
    int iVar41;

    array(ref uVar17, 9);
    array(ref fVar28, 9);
    GET_CHAR_COORDINATES( sub_748(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 0.33000000, -956048545, 2310, ref uVar17[0] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 0.66000000, -956048545, 2310, ref uVar17[1] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 1.00000000, -956048545, 2310, ref uVar17[2] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 0.33000000, 1884962369, 2310, ref uVar17[3] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 0.66000000, 1884962369, 2310, ref uVar17[4] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 1.00000000, 1884962369, 2310, ref uVar17[5] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 0.33000000, 1208856469, 2310, ref uVar17[6] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 0.66000000, 1208856469, 2310, ref uVar17[7] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 1.00000000, 1208856469, 2310, ref uVar17[8] );
    fVar38 = 0.00000000;
    iVar41 = -1;
    for ( I = 0; I < 9; I++ )
    {
        fVar28[I] = 0.00000000;
        if (DOES_VEHICLE_EXIST( uVar17[I] ))
        {
            if (IS_VEH_DRIVEABLE( uVar17[I] ))
            {
                if (sub_2630( ref uVar17[I] ))
                {
                    if (NOT (uVar17[I] == g_U2783))
                    {
                        fVar28[I] = 0.00000000;
                        GET_CAR_COORDINATES( uVar17[I], ref vVar5.x, ref vVar5.y, ref vVar5.z );
                        fVar40 = vVar2.z - vVar5.z;
                        if (fVar40 < 0.00000000)
                        {
                            fVar40 *= -1.00000000;
                        }
                        if (fVar40 < 3.00000000)
                        {
                            fVar28[I] = 1.00000000;
                            uVar11 = {vVar5 - vVar2};
                            fVar39 = VMAG( uVar11 );
                            if (fVar39 > 30.00000000)
                            {
                                fVar39 = 30.00000000;
                            }
                            fVar39 -= 30.00000000;
                            fVar39 *= -1.00000000;
                            fVar39 /= 30.00000000;
                            fVar39 *= 0.50000000;
                            fVar39 += 0.50000000;
                            fVar28[I] *= fVar39;
                            if (NOT (IS_CAR_ON_SCREEN( uVar17[I] )))
                            {
                                fVar28[I] *= 0.50000000;
                            }
                            if (sub_3656( uVar17[I] ))
                            {
                                fVar28[I] *= 0.20000000;
                            }
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_748(), 0.00000000, 1.00000000, 0.00000000, ref vVar8.x, ref vVar8.y, ref vVar8.z );
                            uVar11 = {vVar8 - vVar2};
                            uVar14 = {vVar5 - vVar2};
                            GET_ANGLE_BETWEEN_2D_VECTORS( uVar11._fU0, uVar11._fU4, uVar14._fU0, uVar14._fU4, ref fVar40 );
                            if (fVar40 > 60.00000000)
                            {
                                fVar28[I] *= 0.00000000;
                            }
                            if (fVar28[I] > fVar38)
                            {
                                fVar38 = fVar28[I];
                                iVar41 = I;
                            }
                        }
                    }
                }
            }
        }
    }
    if (NOT (iVar41 == -1))
    {
        return uVar17[iVar41];
    }
    return nil;
}

int sub_2630(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (sub_2672( (uParam0^) ))
            {
                if (IS_VEH_DRIVEABLE( (uParam0^) ))
                {
                    GET_DRIVER_OF_CAR( (uParam0^), ref l_U23 );
                    if ((NOT (IS_CHAR_DEAD( l_U23 ))) AND (sub_2798( l_U23 )))
                    {
                        if (NOT sub_3153())
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

int sub_2672(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2784))
    {
        return 1;
    }
    return 0;
}

int sub_2798(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_PED_A_MISSION_PED( uParam0 ))
        {
            if (((((((((((((((((((IS_CHAR_MODEL( uParam0, 1552970117 )) || (IS_CHAR_MODEL( uParam0, 8772846 ))) || (IS_CHAR_MODEL( uParam0, 734334931 ))) || (IS_CHAR_MODEL( uParam0, -344136289 ))) || (IS_CHAR_MODEL( uParam0, -1420592428 ))) || (IS_CHAR_MODEL( uParam0, -1628417063 ))) || (IS_CHAR_MODEL( uParam0, -1806886352 ))) || (IS_CHAR_MODEL( uParam0, 1158569407 ))) || (IS_CHAR_MODEL( uParam0, -1562020391 ))) || (IS_CHAR_MODEL( uParam0, 52357603 ))) || (IS_CHAR_MODEL( uParam0, 697247370 ))) || (IS_CHAR_MODEL( uParam0, 677687516 ))) || (IS_CHAR_MODEL( uParam0, -432593815 ))) || (IS_CHAR_MODEL( uParam0, 208763854 ))) || (IS_CHAR_MODEL( uParam0, 2034185905 ))) || (IS_CHAR_MODEL( uParam0, -1516474414 ))) || (IS_CHAR_MODEL( uParam0, 1207402441 ))) || (IS_CHAR_MODEL( uParam0, 594261682 ))) || (IS_CHAR_MODEL( uParam0, 1180218190 )))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_3153()
{
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        if (IS_CHAR_IN_AREA_3D( sub_748(), 95.26050000, 836.10100000, 13.45290000, 110.53550000, 856.45100000, 42.22790000, 0 ))
        {
            return 1;
        }
        if (IS_CHAR_IN_AREA_3D( sub_748(), 598.60000000, 1466.25000000, 9.84960000, 654.35000000, 1487.70000000, 14.24960000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_3656(unknown uParam0)
{
    int I;
    int iVar4;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
            {
                GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref iVar4 );
                if (NOT (iVar4 == sub_748()))
                {
                    if (NOT (IS_GROUP_MEMBER( iVar4, sub_3736() )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_3736()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_4108(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_148() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_148() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_4204())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_748() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_4289())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_4204()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_4289()
{
    return sub_4300( 0, 0 );
}

int sub_4300(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((uParam1) AND (g_U558 != 9))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

int sub_4718(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_4108( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_148(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_4993();
                l_U3 = 1;
                g_U10469 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U10469 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U2 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U2)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U2 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_4993()
{
    return sub_4300( 1, 1 );
}

int sub_5371(unknown uParam0, boolean bParam1)
{
    int iVar4;

    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (sub_2672( (uParam0^) ))
            {
                if ((sub_5426( (uParam0^) )) || (NOT bParam1))
                {
                    GET_DRIVER_OF_CAR( (uParam0^), ref l_U23 );
                    if ((NOT (IS_CHAR_DEAD( l_U23 ))) AND (sub_2798( l_U23 )))
                    {
                        if ((NOT (sub_3656( (uParam0^) ))) || (NOT bParam1))
                        {
                            GET_CAR_DOOR_LOCK_STATUS( (uParam0^), ref iVar4 );
                            if ((iVar4 == 3) || (iVar4 == 2))
                            {
                                if ((NOT ((uParam0^) == g_U9557)) AND (NOT ((uParam0^) == g_U2784)))
                                {
                                    return 0;
                                }
                            }
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_5426(int iParam0)
{
    if (NOT (iParam0 == g_U2784))
    {
        if (sub_2672( iParam0 ))
        {
            if (ARE_TAXI_LIGHTS_ON( iParam0 ))
            {
                return 1;
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_5973(unknown uParam0, unknown uParam1)
{
    if ((NOT ((uParam0^) == g_U2783)) AND (NOT (g_U2783 == nil)))
    {
        sub_921();
    }
    if ((DOES_VEHICLE_EXIST( (uParam0^) )) AND (DOES_CHAR_EXIST( (uParam1^) )))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_CHAR_DEAD( (uParam1^) )))
            {
                if (IS_CHAR_IN_CAR( (uParam1^), (uParam0^) ))
                {
                    g_U2783 = (uParam0^);
                    g_U2779 = (uParam1^);
                    g_U2773 = 1;
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U2779, 1 );
                    if (NOT (IS_CAR_A_MISSION_CAR( g_U2783 )))
                    {
                        l_U6 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_6203(int iParam0)
{
    l_U29 = 0;
    if (NOT (iParam0 == l_U19))
    {
        l_U22 = 0;
        l_U19 = iParam0;
        l_U29 = 1;
    }
    return;
}

void sub_6574()
{
    unknown uVar2;
    unknown[9] uVar3;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    int I;

    array(ref uVar3, 9);
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        GET_CHAR_COORDINATES( sub_748(), ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 0.33000000, -956048545, 2310, ref uVar3[0] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 0.66000000, -956048545, 2310, ref uVar3[1] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 1.00000000, -956048545, 2310, ref uVar3[2] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 0.33000000, 1884962369, 2310, ref uVar3[3] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 0.66000000, 1884962369, 2310, ref uVar3[4] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 1.00000000, 1884962369, 2310, ref uVar3[5] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 0.33000000, 1208856469, 2310, ref uVar3[6] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 0.66000000, 1208856469, 2310, ref uVar3[7] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 1.00000000, 1208856469, 2310, ref uVar3[8] );
        for ( I = 0; I < 9; I++ )
        {
            if (DOES_VEHICLE_EXIST( uVar3[I] ))
            {
                if (NOT (IS_CAR_DEAD( uVar3[I] )))
                {
                    GET_DRIVER_OF_CAR( uVar3[I], ref uVar2 );
                    if (NOT (IS_CHAR_DEAD( uVar2 )))
                    {
                        TASK_LOOK_AT_CHAR( uVar2, sub_748(), 3000, 0 );
                    }
                }
            }
        }
    }
    return;
}

int sub_7251(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 < 0.50000000)
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

int sub_7329(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_ROLL( uParam0, ref fVar3 );
        if ((fVar3 < 45.00000000) AND (fVar3 > -45.00000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_7452()
{
    return 0;
}

int sub_7803()
{
    float fVar2;

    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) == 0)
        {
            if (sub_4289())
            {
                if (NOT (sub_7865( sub_748() )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_748() )))
                    {
                        GET_CAR_CHAR_IS_USING( sub_748(), ref l_U28 );
                        if (DOES_VEHICLE_EXIST( l_U28 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U28 ))
                            {
                                if (sub_2672( l_U28 ))
                                {
                                    if (sub_8215( l_U28 ))
                                    {
                                        if (sub_7329( l_U28 ))
                                        {
                                            GET_CAR_SPEED( l_U28, ref fVar2 );
                                            if (fVar2 <= 0.50000000)
                                            {
                                                if (sub_5371( ref l_U28, 0 ))
                                                {
                                                    return 1;
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
    return 0;
}

int sub_7865(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))
        {
            if (HAVE_ANIMS_LOADED( "VEH@STD" ))
            {
                if (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_open_out_ds" ))
                {
                    return 1;
                }
                if (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_open_out_ps" ))
                {
                    return 1;
                }
                if (((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_in_ds" )) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_in_jack_ps" ))) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_in_ps" )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_8215(unknown uParam0)
{
    int iVar3;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_DRIVER_OF_CAR( uParam0, ref iVar3 );
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if ((NOT (IS_CHAR_INJURED( iVar3 ))) AND (sub_2798( iVar3 )))
                {
                    if (NOT (IS_PED_IN_COMBAT( iVar3 )))
                    {
                        if (NOT (iVar3 == sub_748()))
                        {
                            if (IS_CHAR_SITTING_IN_CAR( iVar3, uParam0 ))
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

int sub_8667(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        if (IS_PLAYER_PLAYING( sub_148() ))
        {
            GET_CHAR_COORDINATES( sub_748(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        }
        else
        {
            return -1;
        }
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( (uParam0^), 1.00000000, -0.50000000, 0.00000000, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        uVar12 = {vVar6 - vVar3};
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( (uParam0^), -1.00000000, -0.50000000, 0.00000000, ref vVar9.x, ref vVar9.y, ref vVar9.z );
        uVar15 = {vVar9 - vVar3};
        if ((VMAG( uVar12 )) < (VMAG( uVar15 )))
        {
            return 2;
        }
        else
        {
            return 1;
        }
        break;
    }
    return -1;
}

void sub_8910()
{
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        if (NOT (IS_PED_RAGDOLL( sub_748() )))
        {
            return;
        }
        UNLOCK_RAGDOLL( sub_748(), 1 );
        SWITCH_PED_TO_ANIMATED( sub_748(), 0 );
    }
    return;
}

int sub_9914(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    float fVar18;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 1.00000000, 0.00000000, 0.00000000, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        if (IS_PLAYER_PLAYING( sub_148() ))
        {
            GET_CHAR_COORDINATES( sub_748(), ref vVar9.x, ref vVar9.y, ref vVar9.z );
        }
        uVar12 = {vVar6 - vVar3};
        uVar15 = {vVar9 - vVar3};
        GET_ANGLE_BETWEEN_2D_VECTORS( uVar12._fU0, uVar12._fU4, uVar15._fU0, uVar15._fU4, ref fVar18 );
        if (fVar18 < 90.00000000)
        {
            return 1;
        }
    }
    return 0;
}

int sub_10824()
{
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        if (IS_VEH_DRIVEABLE( g_U2783 ))
        {
            if (sub_2672( g_U2783 ))
            {
                GET_DRIVER_OF_CAR( g_U2783, ref l_U23 );
                if (NOT (IS_CHAR_DEAD( l_U23 )))
                {
                    if (NOT (l_U23 == sub_748()))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_10945()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    vector vVar14;
    unknown uVar17;
    vector vVar18;
    unknown uVar21;
    float fVar22;

    if (IS_CONTROL_PRESSED( 2, 3 ))
    {
        return 0;
    }
    GET_GAME_CAM( ref uVar5 );
    GET_CAM_ROT( uVar5, ref uVar2._fU0, ref uVar2._fU4, ref uVar6 );
    vVar7 = {0.00000000, 1.00000000, 0.00000000};
    vVar7 = {sub_11029( vVar7, 0.00000000, 0.00000000, uVar6 )};
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar10, ref uVar11, ref uVar12, ref uVar13 );
    uVar2._fU0 = uVar10 / 128.00000000;
    uVar2._fU4 = uVar11 / -128.00000000;
    uVar2._fU8 = 0.00000000;
    if ((VMAG( uVar2 )) < 0.50000000)
    {
        return 0;
    }
    GET_HEADING_FROM_VECTOR_2D( uVar2._fU0, uVar2._fU4, ref uVar17 );
    vVar14 = {0.00000000, 1.00000000, 0.00000000};
    vVar14 = {sub_11029( vVar14, 0.00000000, 0.00000000, uVar6 )};
    vVar14 = {sub_11029( vVar14, 0.00000000, 0.00000000, uVar17 )};
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        GET_CHAR_HEADING( sub_748(), ref uVar21 );
        vVar18 = {0.00000000, 1.00000000, 0.00000000};
        vVar18 = {sub_11029( vVar18, 0.00000000, 0.00000000, uVar21 )};
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( vVar18.x, vVar18.y, vVar14.x, vVar14.y, ref fVar22 );
    if (fVar22 > 60.00000000)
    {
        if (NOT (sub_7865( sub_748() )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_11029(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown Result;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = {uParam0};
    uVar8 = COS( uParam3._fU0 );
    uVar9 = SIN( uParam3._fU0 );
    uVar13._fU0 = uParam0._fU0;
    uVar13._fU4 = (uVar8 * Result._fU4) - (uVar9 * Result._fU8);
    uVar13._fU8 = (uVar9 * Result._fU4) + (uVar8 * Result._fU8);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU4 );
    uVar9 = SIN( uParam3._fU4 );
    uVar13._fU0 = (uVar8 * Result._fU0) + (uVar9 * Result._fU8);
    uVar13._fU4 = uParam0._fU4;
    uVar13._fU8 = (uVar8 * Result._fU8) - (uVar9 * Result._fU0);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU8 );
    uVar9 = SIN( uParam3._fU8 );
    uVar13._fU0 = (uVar8 * Result._fU0) - (uVar9 * Result._fU4);
    uVar13._fU4 = (uVar9 * Result._fU0) + (uVar8 * Result._fU4);
    uVar13._fU8 = uParam0._fU8;
    Result = {uVar13};
    return Result;
}

int sub_12683(int iParam0)
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
                if (sub_2672( uVar3 ))
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

void sub_12926()
{
    if (l_U7)
    {
        if ((((((((((((NOT (IS_BUTTON_PRESSED( 0, 16 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 17 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 14 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 15 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 4 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 5 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 6 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 7 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 ))))
        {
            l_U7 = 0;
        }
    }
    return;
}
