void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U7 = 0;
    l_U8 = 0;
    l_U9 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U118 = 0;
    l_U119 = 0;
    l_U184 = 1;
    l_U185 = 0;
    l_U186 = 0;
    l_U187 = 0;
    l_U188 = 0;
    l_U189 = 0;
    l_U190 = 0;
    l_U194 = "GtaMloRoom01";
    l_U195 = 0;
    l_U201 = 0;
    l_U358 = 0;
    l_U359 = 0;
    l_U420 = 0;
    l_U421 = 0;
    l_U422 = 0;
    l_U423 = 0;
    l_U424 = 0;
    l_U425 = 0;
    l_U426 = 55;
    l_U427 = 0;
    l_U428 = 0;
    l_U431 = 7;
    l_U432 = 1;
    StrCopy( ref l_U433, "GL_ARMOUR", 16 );
    l_U438 = 0;
    ProtectedSet(l_U452, 500);
    l_U453 = 0;
    l_U454 = 0;
    l_U458 = 0;
    l_U191 = {l_U459._fU4[0]};
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
    GET_INTERIOR_AT_COORDS( l_U191._fU0, l_U191._fU4, l_U191._fU8, ref l_U343 );
    while (l_U343 == nil)
    {
        WAIT( 0 );
        GET_INTERIOR_AT_COORDS( l_U191._fU0, l_U191._fU4, l_U191._fU8, ref l_U343 );
    }
    ACTIVATE_INTERIOR( l_U343, 1 );
    GET_INTERIOR_HEADING( l_U343, ref l_U121 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_447();
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
    sub_1863();
    if (g_U0)
    {
        g_U38713 = 1;
        l_U163[0] = 1;
        l_U163[1] = 1;
        l_U163[2] = 1;
        l_U163[3] = 1;
        l_U163[4] = 1;
        l_U163[5] = 1;
        l_U163[6] = 1;
        l_U163[7] = 1;
        l_U163[8] = 1;
        l_U163[9] = 1;
        l_U163[10] = 1;
        l_U163[11] = 1;
        l_U163[12] = 1;
        l_U163[13] = 1;
    }
    while (l_U184)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U358)
            {
                case 0:
                if (NOT l_U116)
                {
                    if (NOT (IS_CHAR_INJURED( sub_980() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_980(), 81.12530000, -338.25000000, 11.15940000, 150.00000000, 150.00000000, 150.00000000, 0 ))
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
                            l_U191._fU0 += 1.00000000;
                            l_U191._fU4 += -3.35000000;
                            l_U191._fU8 += -0.11900000;
                            l_U194 = "Room_GunChina";
                            l_U126 = -1084007777;
                            l_U116 = 1;
                        }
                    }
                }
                else if (g_U38713)
                {
                    sub_2670();
                }
                else
                {
                    l_U358 = 6;
                }
                break;
                case 1:
                if (NOT (IS_CHAR_INJURED( sub_980() )))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_980(), 67.55050000, -342.48320000, 12.96240000, 5.00000000, 5.00000000, 10.00000000, 0 )) || (sub_6702()))
                    {
                        if ((IS_WANTED_LEVEL_GREATER( sub_738(), 0 )) || (g_U39234))
                        {
                            if (NOT sub_6702())
                            {
                                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
                            }
                            if (NOT g_U10638)
                            {
                                PRINT_HELP( "GLOCK_WL" );
                                sub_6969( "GS1_AWAY1", ref l_U346, 1, 0 );
                                PRINTSTRING( "  b_blockedbypackie3c = FALSE  " );
                            }
                            l_U358 = 6;
                        }
                        else if (g_U10638)
                        {
                            PRINTSTRING( "  b_blockedbypackie3c = TRUE  " );
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
                            l_U358 = 6;
                        }
                        else if (l_U118 == 1)
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 0, 0.00000000 );
                            l_U118 = 0;
                        }
                        if (NOT (IS_CHAR_DEAD( l_U122 )))
                        {
                            FREEZE_CHAR_POSITION( l_U122, 0 );
                        }
                        l_U358 = 2;;
                    }
                }
                break;
                case 2:
                if (((IS_WANTED_LEVEL_GREATER( sub_738(), 0 )) || (g_U39234)) AND (NOT sub_6702()))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_980(), 67.55050000, -342.48320000, 12.96240000, 4.00000000, 4.00000000, 10.00000000, 0 ))
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
                        PRINT_HELP( "GLOCK_WL" );
                        sub_6969( "GS1_AWAY1", ref l_U346, 1, 0 );
                        l_U358 = 6;
                    }
                }
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U122, sub_980(), 0 ))
                {
                    GET_GAME_TIMER( ref g_U10633 );
                    g_U10636 = 1;
                    l_U358 = 5;
                }
                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_980(), l_U373[12]._fU0 - 0.80000000, l_U373[12]._fU4 - 0.50000000, l_U373[12]._fU8 + (1.60000000 / 2), 1.60000000 + 0.10000000, 1.60000000 + 0.10000000, 1.60000000 + 0.20000000, 0 )) || (sub_6702()))
                {
                    sub_8489();
                    if (NOT g_U10639)
                    {
                        GET_GAME_TIMER( ref l_U456 );
                        g_U10639 = 1;
                    }
                    if ((NOT l_U454) AND (NOT g_U10636))
                    {
                        if ((DOES_CHAR_EXIST( l_U122 )) AND (NOT (IS_CHAR_INJURED( l_U122 ))))
                        {
                            sub_6969( "GS1_GREET1", ref l_U346, 1, 0 );
                        }
                        l_U454 = 1;
                    }
                    l_U358 = 4;
                }
                else if (l_U454)
                {
                    if (NOT l_U117)
                    {
                        if ((DOES_CHAR_EXIST( l_U122 )) AND (NOT (IS_CHAR_INJURED( l_U122 ))))
                        {
                            sub_6969( "GS1_BYE1", ref l_U346, 1, 0 );
                        }
                        l_U117 = 1;
                    }
                }
                break;
                case 4:
                sub_8825();
                if (NOT sub_6702())
                {
                    if (NOT (IS_CHAR_DEAD( l_U122 )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U122, 1 );
                        FREEZE_CHAR_POSITION( l_U122, 1 );
                    }
                    if (NOT g_U10636)
                    {
                        if (NOT (sub_21359( l_U352 )))
                        {
                            if (l_U189 == 1)
                            {
                                sub_6969( "E1JA_RESP", ref l_U352, 1, 0 );
                            }
                            else
                            {
                                sub_6969( "E1JA_NOBUY", ref l_U352, 1, 0 );
                            }
                        }
                    }
                    if (g_U10639)
                    {
                        GET_GAME_TIMER( ref l_U455 );
                        l_U457 = l_U455 - l_U456;
                        INCREMENT_INT_STAT_NO_MESSAGE( 50, l_U457 );
                        g_U10639 = 0;
                    }
                    l_U358 = 2;
                }
                if (NOT (IS_CHAR_INJURED( l_U122 )))
                {
                    if ((((IS_PLAYER_TARGETTING_CHAR( sub_738(), l_U122 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_738(), l_U122 ))) || (IS_CHAR_SHOOTING_IN_AREA( sub_980(), l_U191._fU0 - 9.39310000, l_U191._fU4 - 1.66650000, l_U191._fU0 + 3.09560000, l_U191._fU4 + 6.77950000, 0 ))) || (IS_PED_RAGDOLL( l_U122 )))
                    {
                        if (NOT l_U458)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U345 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_980() );
                            TASK_LOOK_AT_CHAR( 0, sub_980(), -2, 1 );
                            TASK_STAND_GUARD( 0, l_U360[0]._fU0, l_U360[0]._fU4, l_U360[0]._fU8, l_U121 + 100.48830000, 0.50000000, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U345 );
                            TASK_PERFORM_SEQUENCE( l_U122, l_U345 );
                            CLEAR_SEQUENCE_TASK( l_U345 );
                            if ((IS_CHAR_ARMED( sub_980(), 6 )) || (IS_PED_RAGDOLL( l_U122 )))
                            {
                                if (NOT (sub_21359( l_U346 )))
                                {
                                    sub_6969( "GS1_MONKEY1", ref l_U346, 1, 0 );
                                }
                            }
                            l_U458 = 1;
                        }
                    }
                    if ((NOT (IS_PLAYER_TARGETTING_CHAR( sub_738(), l_U122 ))) AND (NOT (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_738(), l_U122 ))))
                    {
                        if (l_U458)
                        {
                            CLEAR_CHAR_TASKS( l_U122 );
                            TASK_STAND_GUARD( l_U122, l_U360[0]._fU0, l_U360[0]._fU4, l_U360[0]._fU8, l_U121 + 100.48830000, 0.50000000, 0, -1 );
                            l_U458 = 0;
                        }
                    }
                }
                if (g_U10636 == 1)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_980(), l_U373[12]._fU0, l_U373[12]._fU4, l_U373[12]._fU8, 3.50000000, 3.50000000, 3.50000000, 0 ))
                    {
                        GET_GAME_TIMER( ref l_U197 );
                        if ((l_U197 - g_U10633) > 300000)
                        {
                            if ((DOES_CHAR_EXIST( l_U122 )) AND (NOT (IS_CHAR_INJURED( l_U122 ))))
                            {
                                sub_6969( "GS1_GREET1", ref l_U346, 1, 0 );
                            }
                            g_U10636 = 0;
                        }
                        else
                        {
                            sub_6969( "GS1_AWAY1", ref l_U346, 1, 0 );
                            if (NOT (IS_CHAR_INJURED( l_U122 )))
                            {
                                CLEAR_CHAR_TASKS( l_U122 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U122, 0 );
                                FREEZE_CHAR_POSITION( l_U122, 0 );
                                SET_CHAR_RELATIONSHIP( l_U122, 5, 0 );
                            }
                            l_U358 = 6;
                        }
                    }
                }
                else if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U122, sub_980(), 0 )) || (IS_WANTED_LEVEL_GREATER( sub_738(), 0 ))) || (g_U39234))
                {
                    CLEAR_CHAR_TASKS( sub_980() );
                    SET_RELATIONSHIP( 5, 28, 0 );
                    if (NOT (IS_CHAR_INJURED( l_U122 )))
                    {
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        CLEAR_CHAR_TASKS( l_U122 );
                        SET_CHAR_RELATIONSHIP( l_U122, 5, 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U122, 0 );
                        FREEZE_CHAR_POSITION( l_U122, 0 );
                    }
                    GET_GAME_TIMER( ref g_U10633 );
                    g_U10636 = 1;
                    l_U358 = 5;
                }
                break;
                case 5:
                if (NOT l_U188)
                {
                    if (NOT (IS_CHAR_INJURED( l_U122 )))
                    {
                        CLEAR_HELP();
                        sub_829( ref l_U346, 0 );
                        g_U10631 = 1;
                        sub_6969( "GS1_ASST1", ref l_U346, 1, 0 );
                        sub_22686();
                        l_U188 = 1;
                    }
                    else
                    {
                        CLEAR_HELP();
                        g_U10631 = 1;
                        sub_22686();
                        l_U188 = 1;
                    }
                }
                break;
                case 6:
                if (g_U10639)
                {
                    GET_GAME_TIMER( ref l_U455 );
                    l_U457 = l_U455 - l_U456;
                    INCREMENT_INT_STAT_NO_MESSAGE( 50, l_U457 );
                    g_U10639 = 0;
                }
                if (DOES_CHAR_EXIST( l_U122 ))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U122, sub_980(), 0 ))
                    {
                        PRINTSTRING( "  b_blockedbypackie3c = FALSE(2)  " );
                        GET_GAME_TIMER( ref g_U10633 );
                    }
                }
                STORE_WANTED_LEVEL( sub_738(), ref l_U430 );
                if (g_U38713)
                {
                    if ((l_U430 == 0) AND (NOT g_U39234))
                    {
                        if (NOT g_U10636)
                        {
                            if (NOT g_U10638)
                            {
                                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 0, 0.00000000 );
                            }
                            else
                            {
                                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
                                l_U118 = 1;
                            }
                            l_U358 = 1;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U197 );
                            if ((l_U197 - g_U10633) > 300000)
                            {
                                g_U10636 = 0;
                            }
                        }
                    }
                }
                break;
            }
        }
        else
        {
            l_U184 = 0;
        }
    }
    sub_447();
    return;
}

void sub_447()
{
    sub_468( 4, "GLOCK_H1" );
    sub_829( ref l_U346, 0 );
    sub_829( ref l_U352, 0 );
    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        SET_CHAR_WILL_USE_COVER( sub_980(), 1 );
    }
    for ( l_U196 = 0; l_U196 <= (l_U119 - 1); l_U196++ )
    {
        if (DOES_OBJECT_EXIST( l_U202[l_U196]._fU20 ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U202[l_U196]._fU20 );
        }
    }
    SET_RELATIONSHIP( 2, 28, 0 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( l_U191._fU0 - 9.39310000, l_U191._fU4 - 1.66650000, l_U191._fU8 - 4.14000000, l_U191._fU0 + 3.09560000, l_U191._fU4 + 5.77950000, l_U191._fU8 + 5.86000000 );
    REMOVE_ANIMS( "missgunlockup" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1516578222 );
    if (l_U7 == 1)
    {
        sub_1256();
    }
    if ((((((((((((((((((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H11" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H1" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_WH1" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_BUY" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FAIL" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_BUY" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_FAUST" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FULL" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FULL" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_BUY" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FAIL" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_A1" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_B1" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U433 ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U439 ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U443 ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )))
    {
        CLEAR_HELP();
    }
    SWITCH_PED_PATHS_ON( l_U191._fU0 - 9.39310000, l_U191._fU4 - 1.66650000, l_U191._fU8 - 3.00000000, l_U191._fU0 + 3.09560000, l_U191._fU4 + 6.77950000, l_U191._fU8 + 3.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_468(int iParam0, string sParam1)
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
                    sub_689();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_738(), 1 );
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

void sub_689()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_738()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_829(int iParam0, unknown uParam1)
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

void sub_980()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1256()
{
    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        for ( l_U196 = 0; l_U196 <= 13; l_U196++ )
        {
            if ((HAS_CHAR_GOT_WEAPON( sub_980(), l_U202[l_U196]._fU0 )) AND (NOT l_U142[l_U196]))
            {
                REMOVE_WEAPON_FROM_CHAR( sub_980(), l_U202[l_U196]._fU0 );
            }
        }
    }
    return;
}

void sub_1863()
{
    l_U163[0] = 1;
    if (g_U15728[40] == 1)
    {
        l_U163[1] = 1;
    }
    if (g_U15728[42] == 1)
    {
        l_U163[2] = 1;
    }
    if (g_U15728[45] == 1)
    {
        l_U163[3] = 1;
    }
    if (g_U15728[46] == 1)
    {
        l_U163[4] = 1;
    }
    if (g_U15728[43] == 1)
    {
        l_U163[5] = 1;
    }
    if (g_U15728[44] == 1)
    {
        l_U163[6] = 1;
    }
    if (g_U15728[47] == 1)
    {
        l_U163[7] = 1;
    }
    if (g_U15728[48] == 1)
    {
        l_U163[8] = 1;
    }
    if (g_U15728[49] == 1)
    {
        l_U163[9] = 1;
        l_U163[10] = 1;
    }
    if (g_U15728[50] == 1)
    {
        l_U163[11] = 1;
    }
    if (g_U15728[51] == 1)
    {
        l_U163[12] = 1;
    }
    if (g_U15728[52] == 1)
    {
        l_U163[13] = 1;
    }
    return;
}

void sub_2670()
{
    sub_2682( "" );
    REQUEST_MODEL( l_U126 );
    while (NOT (HAS_MODEL_LOADED( l_U126 )))
    {
        WAIT( 0 );
        REQUEST_MODEL( l_U126 );
    }
    CREATE_OBJECT_NO_OFFSET( 501936518, l_U191._fU0, l_U191._fU4, l_U191._fU8, ref l_U127[0], 1 );
    SET_OBJECT_HEADING( l_U127[0], l_U121 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], 0.80000000, 4.00000000, 0.96000000, ref l_U360[0]._fU0, ref l_U360[0]._fU4, ref l_U360[0]._fU8 );
    SET_RELATIONSHIP( 2, 28, 0 );
    CREATE_CHAR( 26, l_U126, 82.52380000, -337.32920000, 10.17450000, ref l_U122, 1 );
    SET_AMBIENT_VOICE_NAME( l_U125, " M_Y_GTRI_LO_01_FULL_01" );
    SET_CHAR_HEADING( l_U122, l_U121 + 100.48830000 );
    SET_CHAR_RELATIONSHIP( l_U122, 1, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U122, 28 );
    GIVE_WEAPON_TO_CHAR( l_U122, 9, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U122, 0, 0 );
    TASK_STAND_GUARD( l_U122, l_U360[0]._fU0, l_U360[0]._fU4, l_U360[0]._fU8, l_U121 + 100.48830000, 0.50000000, 0, -1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U122, l_U194 );
    TASK_START_SCENARIO_AT_POSITION( l_U122, "SCENARIO_STANDING", l_U360[0]._fU0, l_U360[0]._fU4, l_U360[0]._fU8, l_U121 + 100.48830000 );
    sub_3296( 1, l_U122, "GUNSHOP_TRIAD", 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U126 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -7.39380000, 3.80900000, 0.10710000, ref l_U360[1]._fU0, ref l_U360[1]._fU4, ref l_U360[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -7.51180000, 5.74700000, 0.10730000, ref l_U360[2]._fU0, ref l_U360[2]._fU4, ref l_U360[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -7.53000000, 3.81300000, 0.10720000, ref l_U360[3]._fU0, ref l_U360[3]._fU4, ref l_U360[3]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -3.40000000, -1.40000000, 0.92700000, ref l_U373[0]._fU0, ref l_U373[0]._fU4, ref l_U373[0]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -1.90000000, -1.40000000, 0.93000000, ref l_U373[1]._fU0, ref l_U373[1]._fU4, ref l_U373[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -0.35000000, -1.40000000, 0.87000000, ref l_U373[2]._fU0, ref l_U373[2]._fU4, ref l_U373[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], 0.90000000, -1.30000000, 0.84000000, ref l_U373[3]._fU0, ref l_U373[3]._fU4, ref l_U373[3]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -4.00000000, 6.20000000, 0.84000000, ref l_U373[4]._fU0, ref l_U373[4]._fU4, ref l_U373[4]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -2.60000000, 6.20000000, 0.94000000, ref l_U373[5]._fU0, ref l_U373[5]._fU4, ref l_U373[5]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -5.00000000, 3.70000000, 0.84000000, ref l_U373[6]._fU0, ref l_U373[6]._fU4, ref l_U373[6]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -1.40000000, 1.50000000, 0.94000000, ref l_U373[7]._fU0, ref l_U373[7]._fU4, ref l_U373[7]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -1.10000000, 6.20000000, 0.99000000, ref l_U373[8]._fU0, ref l_U373[8]._fU4, ref l_U373[8]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], 0.60000000, 6.20000000, 0.97200000, ref l_U373[9]._fU0, ref l_U373[9]._fU4, ref l_U373[9]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -2.50000000, 2.95000000, 0.97000000, ref l_U373[10]._fU0, ref l_U373[10]._fU4, ref l_U373[10]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], 0.60000000, 2.60000000, 1.07000000, ref l_U373[11]._fU0, ref l_U373[11]._fU4, ref l_U373[11]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -3.40000000, 2.45000000, 0.50000000, ref l_U373[12]._fU0, ref l_U373[12]._fU4, ref l_U373[12]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -4.90000000, -1.31000000, 1.04000000, ref l_U373[13]._fU0, ref l_U373[13]._fU4, ref l_U373[13]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U127[0], -1.20000000, 3.00000000, 0.00000000, ref l_U373[14]._fU0, ref l_U373[14]._fU4, ref l_U373[14]._fU8 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 501936518 );
    DELETE_OBJECT( ref l_U127[0] );
    sub_4576( ref l_U202[l_U119], 1, l_U373[13]._fU0, l_U373[13]._fU4, l_U373[13]._fU8, 192.78730000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 7, l_U373[0]._fU0, l_U373[0]._fU4, l_U373[0]._fU8, 90.00000000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 9, l_U373[1]._fU0, l_U373[1]._fU4, l_U373[1]._fU8, 180.00000000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 12, l_U373[2]._fU0, l_U373[2]._fU4, l_U373[2]._fU8, 90.00000000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 13, l_U373[3]._fU0, l_U373[3]._fU4, l_U373[3]._fU8, 90.00000000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 10, l_U373[4]._fU0, l_U373[4]._fU4, l_U373[4]._fU8, 90.00000000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 11, l_U373[5]._fU0, l_U373[5]._fU4, l_U373[5]._fU8, 45.00000000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 14, l_U373[6]._fU0, l_U373[6]._fU4, l_U373[6]._fU8, 90.00000000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 15, l_U373[7]._fU0, l_U373[7]._fU4, l_U373[7]._fU8, 90.00000000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 16, l_U373[8]._fU0, l_U373[8]._fU4, l_U373[8]._fU8, 298.46520000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 17, l_U373[9]._fU0, l_U373[9]._fU4, l_U373[9]._fU8, 298.46520000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 4, l_U373[10]._fU0, l_U373[10]._fU4, l_U373[10]._fU8, 181.15430000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 5, l_U373[11]._fU0, l_U373[11]._fU4, l_U373[11]._fU8, 181.15430000, ref l_U119 );
    sub_4576( ref l_U202[l_U119], 18, l_U373[12]._fU0, l_U373[12]._fU4, l_U373[12]._fU8, 181.15430000, ref l_U119 );
    for ( l_U196 = 0; l_U196 <= (l_U119 - 1); l_U196++ )
    {
        sub_5397( ref l_U202[l_U196] );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U202[l_U196]._fU20, l_U194 );
    }
    if (NOT l_U428)
    {
        CREATE_OBJECT_NO_OFFSET( -1758615024, l_U373[14]._fU0, l_U373[14]._fU4, l_U373[14]._fU8, ref l_U429, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U429, l_U194 );
        SET_OBJECT_ROTATION( l_U429, 90.00000000, 180.00000000, l_U121 + 25.00000000 );
        FREEZE_OBJECT_POSITION( l_U429, 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1758615024 );
        l_U428 = 1;
    }
    SET_OBJECT_HEADING( l_U202[0]._fU20, l_U121 );
    SET_OBJECT_ROTATION( l_U202[0]._fU20, 90.00000000, 85.00000000, l_U121 + 90.00000000 );
    SET_OBJECT_HEADING( l_U202[1]._fU20, l_U121 );
    SET_OBJECT_ROTATION( l_U202[1]._fU20, 90.00000000, 0.00000000, l_U121 + 45.00000000 );
    SET_OBJECT_HEADING( l_U202[2]._fU20, l_U121 );
    SET_OBJECT_ROTATION( l_U202[2]._fU20, 90.00000000, 0.00000000, l_U121 + 60.00000000 );
    SET_OBJECT_HEADING( l_U202[3]._fU20, l_U121 );
    SET_OBJECT_ROTATION( l_U202[3]._fU20, 90.00000000, 0.00000000, l_U121 );
    SET_OBJECT_HEADING( l_U202[4]._fU20, l_U121 );
    SET_OBJECT_ROTATION( l_U202[4]._fU20, 90.00000000, 0.00000000, l_U121 + 315.00000000 );
    SET_OBJECT_HEADING( l_U202[5]._fU20, l_U121 );
    SET_OBJECT_ROTATION( l_U202[5]._fU20, 90.00000000, 0.00000000, l_U121 + 160.00000000 );
    SET_OBJECT_HEADING( l_U202[6]._fU20, l_U121 );
    SET_OBJECT_ROTATION( l_U202[6]._fU20, 90.00000000, 0.00000000, l_U121 + 200.00000000 );
    SET_OBJECT_HEADING( l_U202[7]._fU20, l_U121 );
    SET_OBJECT_ROTATION( l_U202[7]._fU20, 90.00000000, 180.00000000, l_U121 + 270.00000000 );
    SET_OBJECT_HEADING( l_U202[8]._fU20, l_U121 );
    SET_OBJECT_ROTATION( l_U202[8]._fU20, 90.00000000, 180.00000000, l_U121 + 130.00000000 );
    SET_OBJECT_HEADING( l_U202[9]._fU20, l_U121 );
    SET_OBJECT_ROTATION( l_U202[9]._fU20, 90.00000000, 180.00000000, l_U121 + 200.00000000 );
    SET_OBJECT_HEADING( l_U202[10]._fU20, l_U121 );
    SET_OBJECT_ROTATION( l_U202[10]._fU20, 90.00000000, 180.00000000, l_U121 + 180.00000000 );
    SET_OBJECT_HEADING( l_U202[13]._fU20, l_U121 );
    SET_OBJECT_ROTATION( l_U202[13]._fU20, 90.00000000, 0.00000000, l_U121 + 90.00000000 );
    REQUEST_ANIMS( "missgunlockup" );
    while (NOT (HAVE_ANIMS_LOADED( "missgunlockup" )))
    {
        WAIT( 0 );
        REQUEST_ANIMS( "missgunlockup" );
    }
    if (NOT (IS_CHAR_INJURED( l_U122 )))
    {
        UNLOCK_RAGDOLL( l_U122, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U122, 1 );
        FREEZE_CHAR_POSITION( l_U122, 1 );
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 0, 0.00000000 );
    sub_3296( 0, sub_980(), "JOHNNY", 0 );
    l_U358 = 1;
    return;
}

void sub_2682(unknown uParam0)
{
    StrCopy( ref l_U18._fU0, uParam0, 16 );
    sub_2699();
    return;
}

void sub_2699()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U18._fU16[I]._fU0 = nil;
        StrCopy( ref l_U18._fU16[I]._fU4, "", 32 );
        l_U18._fU344[I] = 0;
    }
    return;
}

void sub_3296(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U18._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U18._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3376( "\n PED NUMBER ", uParam0 );
    sub_3416( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3376(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3416(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4576(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if ((uParam6^) < 20)
    {
        iParam0->_fU0 = uParam1;
        iParam0->_fU4 = {uParam2};
        iParam0->_fU16 = uParam5;
        (uParam6^)++;
    }
    return;
}

void sub_5397(int iParam0)
{
    int iVar3;

    if (iParam0->_fU0 == 5)
    {
        iVar3 = -2049396802;
    }
    else
    {
        GET_WEAPONTYPE_MODEL( iParam0->_fU0, ref iVar3 );
    }
    CREATE_OBJECT_NO_OFFSET( iVar3, ref iParam0->_fU4->_fU0, ref iParam0->_fU4->_fU4, (ref iParam0->_fU4->_fU8) - 1.00000000, iParam0 + 20, 1 );
    FREEZE_OBJECT_POSITION( iParam0->_fU20, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( iVar3 );
    return;
}

int sub_6702()
{
    int iVar2;

    if ((NOT (IS_CHAR_INJURED( sub_980() ))) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_980(), l_U191._fU0, l_U191._fU4, l_U191._fU8, 15.00000000, 15.00000000, 15.00000000, 0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_980(), ref iVar2 );
        if (iVar2 == (GET_HASH_KEY( "Room_GunChina" )))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

void sub_6969(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_6990( uParam0, ref l_U18._fU0, uParam1, uParam2, uParam3 );
}

void sub_6990(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7044( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7044(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7066( iParam1 )))
    {
        return 0;
    }
    l_U18._fU384 = 0;
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
    sub_7754( ref g_U8947, ref l_U18 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_7066(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_7143( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_7143( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_7143( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_7143(unknown uParam0)
{
    return;
}

void sub_7754(int iParam0, int iParam1)
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

void sub_8489()
{
    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        for ( l_U196 = 0; l_U196 <= 13; l_U196++ )
        {
            if (HAS_CHAR_GOT_WEAPON( sub_980(), l_U202[l_U196]._fU0 ))
            {
                l_U142[l_U196] = 1;
            }
            else
            {
                l_U142[l_U196] = 0;
            }
        }
    }
    return;
}

void sub_8825()
{
    switch (l_U201)
    {
        case 0:
        DISPLAY_CASH( 1 );
        sub_8862();
        break;
        default:
    }
    return;
}

void sub_8862()
{
    switch (l_U359)
    {
        case 0:
        for ( l_U196 = 0; l_U196 <= (l_U119 - 1); l_U196++ )
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_980(), l_U202[l_U196]._fU4._fU0, l_U202[l_U196]._fU4._fU4, l_U202[l_U196]._fU4._fU8 - 0.40000000, 0.80000000, 0.90000000, 1.20000000, 0 ))
            {
                l_U195 = l_U196;
            }
        }
        if (((((((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U447 )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FAIL" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_BUY" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FULL" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FULL" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FAIL" )))
        {
            if (TIMERB() > 1500)
            {
                CLEAR_HELP();
            }
        }
        if (LOCATE_CHAR_ON_FOOT_3D( sub_980(), l_U202[l_U195]._fU4._fU0, l_U202[l_U195]._fU4._fU4, l_U202[l_U195]._fU4._fU8, 0.80000000, 0.90000000, 1.20000000, 0 ))
        {
            if ((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_738() )) AND (NOT sub_9356()))
            {
                if (l_U163[l_U195])
                {
                    if (NOT l_U142[l_U195])
                    {
                        if (((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U443 )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U433 ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )))
                        {
                            CLEAR_HELP();
                        }
                        if (sub_9490( sub_980() ))
                        {
                            if (sub_9552( 4, 0 ))
                            {
                                if (sub_9819( 4, "GLOCK_H1", 0 ))
                                {
                                    l_U359 = 1;
                                }
                            }
                            else
                            {
                                sub_468( 4, "GLOCK_H1" );
                            }
                        }
                    }
                    else if ((NOT (l_U195 == 11)) AND (NOT (l_U195 == 12)))
                    {
                        if (((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U439 ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U433 )))
                        {
                            CLEAR_HELP();
                        }
                    }
                    if (sub_9490( sub_980() ))
                    {
                        if ((((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U447 ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_BUY" )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FULL" )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FAIL" ))))
                        {
                            if (NOT (l_U195 == 0))
                            {
                                if (NOT l_U438)
                                {
                                    SET_CURRENT_CHAR_WEAPON( sub_980(), l_U202[l_U195]._fU0, 1 );
                                    GET_AMMO_IN_CHAR_WEAPON( sub_980(), l_U202[l_U195]._fU0, ref l_U437 );
                                    l_U453 = 1;
                                    l_U438 = 1;
                                }
                                else
                                {
                                    DISPLAY_AMMO( 1 );
                                    l_U443 = {sub_10750( l_U202[l_U195]._fU0 )};
                                    PRINT_HELP_FOREVER( ref l_U443 );
                                    if (sub_11178())
                                    {
                                        l_U359 = 6;
                                    }
                                }
                            }
                            else
                            {
                                PRINT_HELP_FOREVER( "GLOCK_B1" );
                            }
                        }
                    }
                }
                else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )))
                {
                    CLEAR_HELP();
                    PRINT_HELP_FOREVER( "GL_SOON" );
                }
            }
            else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H1" ))
            {
                CLEAR_HELP();
            }
        }
        else if (LOCATE_CHAR_ON_FOOT_3D( sub_980(), l_U373[14]._fU0 + 0.20000000, l_U373[14]._fU4, l_U373[14]._fU8, 0.60000000, 0.80000000, 1.20000000, 0 ))
        {
            if (((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U439 )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U443 ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )))
            {
                CLEAR_HELP();
            }
            if (sub_9490( sub_980() ))
            {
                if (((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_BUY" ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FULL" )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FAIL" ))))
                {
                    if ((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_738() )) AND (NOT sub_9356()))
                    {
                        PRINT_HELP_FOREVER( ref l_U433 );
                        if (sub_11178())
                        {
                            if (NOT sub_11604())
                            {
                                PRINT_HELP( "ARM_FULL" );
                                SETTIMERB( 0 );
                                l_U359 = 0;
                            }
                            else
                            {
                                l_U359 = 8;
                            }
                        }
                    }
                    else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_A1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U433 )))
                    {
                        CLEAR_HELP();
                    }
                }
            }
        }
        else
        {
            l_U438 = 0;
            DISPLAY_AMMO( 0 );
            sub_468( 4, "GLOCK_H1" );
            if (l_U453)
            {
                if (IS_CHAR_ARMED( sub_980(), l_U431 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_980(), 0, 0 );
                }
                l_U453 = 0;
            }
            if ((((((((((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H11" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H1" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_WH1" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_FAUST" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_A1" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_B1" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U439 ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U443 ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U433 ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )))
            {
                CLEAR_HELP();
            }
        }
        break;
        case 1:
        sub_468( 4, "GLOCK_H1" );
        if (IS_CHAR_ARMED( sub_980(), l_U431 ))
        {
            SET_CURRENT_CHAR_WEAPON( sub_980(), 0, 0 );
        }
        if (NOT l_U185)
        {
            SET_PLAYER_CONTROL( sub_738(), 0 );
            if (NOT (IS_CHAR_INJURED( sub_980() )))
            {
                TASK_TURN_CHAR_TO_FACE_COORD( sub_980(), l_U202[l_U195]._fU4._fU0, l_U202[l_U195]._fU4._fU4, l_U202[l_U195]._fU4._fU8 );
            }
            while (NOT (sub_12218( sub_980(), 45 )))
            {
                WAIT( 0 );
            }
            l_U185 = 1;
        }
        else if (sub_12309( l_U202[l_U195]._fU0, ref l_U419 ))
        {
            l_U432 = 0;
            sub_468( 4, "GLOCK_H1" );
            l_U359 = 2;
        }
        else if (sub_12464( l_U202[l_U195]._fU0 ))
        {
            l_U432 = 1;
            sub_468( 4, "GLOCK_H1" );
            l_U359 = 2;
        };;;
        break;
        case 2:
        sub_12586( ref l_U202[l_U195] );
        l_U185 = 0;
        if (l_U7)
        {
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" )) AND (TIMERB() > 3000))
            {
                CLEAR_HELP();
            }
            if (l_U195 == 0)
            {
                sub_14509( l_U120 );
            }
            else if (l_U195 == 10)
            {
                sub_14775( l_U120 );
            }
            else
            {
                sub_14972( l_U120 );
            }
        }
        if (((((((IS_CHAR_PLAYING_ANIM( sub_980(), "missgunlockup", "pistol_loop" )) || (IS_CHAR_PLAYING_ANIM( sub_980(), "missgunlockup", "rifle_loop" ))) || (IS_CHAR_PLAYING_ANIM( sub_980(), "missgunlockup", "shotgun_loop" ))) || (IS_CHAR_PLAYING_ANIM( sub_980(), "missgunlockup", "over_shoulder" ))) || (IS_CHAR_PLAYING_ANIM( sub_980(), "missgunlockup", "grenade_loop" ))) || (IS_CHAR_PLAYING_ANIM( sub_980(), "missgunlockup", "uzi_loop" ))) || (IS_CHAR_PLAYING_ANIM( sub_980(), "missgunlockup", "rpg_loop" )))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" )))
            {
                l_U359 = 3;
            }
        }
        break;
        case 3:
        l_U439 = {sub_15509( l_U202[l_U195]._fU0 )};
        PRINT_HELP_FOREVER( ref l_U439 );
        if (sub_11178())
        {
            if (l_U432)
            {
                if (IS_SCORE_GREATER( sub_738(), ProtectedGet(l_U451) ))
                {
                    CLEAR_HELP();
                    l_U359 = 4;
                }
                else
                {
                    PRINT_HELP( "GUN_FAIL" );
                    SETTIMERB( 0 );
                    l_U359 = 2;
                }
            }
            else
            {
                CLEAR_HELP();
                CLEAR_PRINTS();
                l_U6 = 1;
                l_U359 = 5;
            }
        }
        else if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
        {
            CLEAR_HELP();
            l_U359 = 9;
        }
        break;
        case 4:
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_WH2" )))
        {
            PRINT_HELP_FOREVER( "GLOCK_WH2" );
        }
        if (sub_11178())
        {
            if (sub_16163( l_U202[l_U195]._fU0 ))
            {
                CLEAR_HELP();
                l_U6 = 1;
                l_U432 = 0;
                l_U359 = 5;
            }
        }
        else if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
        {
            CLEAR_HELP();
            l_U359 = 9;
        }
        break;
        case 5:
        sub_468( 4, "GLOCK_WH1" );
        if (l_U6)
        {
            if (sub_16871( sub_16650( l_U202[l_U195]._fU0 ) ))
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_16650( l_U202[l_U195]._fU0 ) );
                PLAY_AUDIO_EVENT_FROM_PED( sub_16997( l_U202[l_U195]._fU0 ), sub_980() );
                l_U142[l_U195] = 1;
                l_U447 = {sub_17615( l_U202[l_U195]._fU0 )};
                PRINT_HELP_FOREVER( ref l_U447 );
                SETTIMERB( 0 );
                if ((NOT (IS_CHAR_INJURED( l_U122 ))) AND (NOT (IS_CHAR_INJURED( sub_980() ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U345 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_980() );
                    TASK_LOOK_AT_CHAR( 0, sub_980(), -2, 1 );
                    TASK_STAND_GUARD( 0, l_U360[0]._fU0, l_U360[0]._fU4, l_U360[0]._fU8, l_U121 + 100.48830000, 0.50000000, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U345 );
                    TASK_PERFORM_SEQUENCE( l_U122, l_U345 );
                    CLEAR_SEQUENCE_TASK( l_U345 );
                }
                sub_6969( "GS1_PURCH1", ref l_U346, 1, 0 );
                l_U189 = 1;
                l_U359 = 9;
            }
            else
            {
                sub_18275( l_U202[l_U195]._fU0 );
                PRINT_HELP( "GUN_FAIL" );
                SETTIMERB( 0 );
                l_U6 = 0;
                l_U359 = 2;
            }
        }
        break;
        case 6:
        if (l_U437 < (sub_18422( l_U202[l_U195]._fU0 )))
        {
            l_U6 = 1;
            l_U359 = 7;
        }
        else
        {
            PRINT_HELP( "AMMO_FULL" );
            SETTIMERB( 0 );
            l_U438 = 0;
            l_U359 = 0;
        }
        break;
        case 7:
        if (l_U6)
        {
            if (sub_16871( sub_18928( l_U202[l_U195]._fU0 ) ))
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_18928( l_U202[l_U195]._fU0 ) );
                PLAY_AUDIO_EVENT_FROM_PED( sub_16997( l_U202[l_U195]._fU0 ), sub_980() );
                GIVE_WEAPON_TO_CHAR( sub_980(), l_U202[l_U195]._fU0, sub_14116( l_U202[l_U195]._fU0 ), 1 );
                GET_AMMO_IN_CHAR_WEAPON( sub_980(), l_U202[l_U195]._fU0, ref l_U437 );
                if (l_U437 >= (sub_18422( l_U202[l_U195]._fU0 )))
                {
                    SET_CHAR_AMMO( sub_980(), l_U202[l_U195]._fU0, sub_18422( l_U202[l_U195]._fU0 ) );
                }
                l_U6 = 0;
                l_U438 = 0;
                l_U189 = 1;
                l_U359 = 0;
            }
            else
            {
                PRINT_HELP( "AMMO_FAIL" );
                SETTIMERB( 0 );
                l_U6 = 0;
                l_U438 = 0;
                l_U359 = 0;
            }
        }
        break;
        case 8:
        if (sub_16871( ProtectedGet(l_U452) ))
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 106, ProtectedGet(l_U452) );
            ADD_ARMOUR_TO_CHAR( sub_980(), l_U15 );
            PLAY_AUDIO_EVENT_FROM_PED( "BODY_ARMOUR_BUY", sub_980() );
            PRINT_HELP( "ARM_BUY" );
            SETTIMERB( 0 );
            l_U189 = 1;
            l_U359 = 0;
        }
        else
        {
            PRINT_HELP( "ARM_FAIL" );
            SETTIMERB( 0 );
            l_U359 = 0;
        }
        break;
        case 9:
        sub_468( 4, "GLOCK_H1" );
        sub_19627( ref l_U202[l_U195] );
        if (l_U432)
        {
            if (l_U7 == 0)
            {
                if (l_U6 == 1)
                {
                    GIVE_WEAPON_TO_CHAR( sub_980(), l_U202[l_U195]._fU0, sub_14116( l_U202[l_U195]._fU0 ), 0 );
                    l_U6 = 0;
                }
                if (sub_18275( l_U202[l_U195]._fU0 ))
                {
                    sub_20848( l_U120 );
                    l_U359 = 10;
                }
            }
        }
        else if (l_U7 == 0)
        {
            if (l_U6 == 1)
            {
                if (l_U190)
                {
                    GIVE_WEAPON_TO_CHAR( sub_980(), l_U202[l_U195]._fU0, (sub_14116( l_U202[l_U195]._fU0 )) + l_U419, 0 );
                }
                else
                {
                    GIVE_WEAPON_TO_CHAR( sub_980(), l_U202[l_U195]._fU0, sub_14116( l_U202[l_U195]._fU0 ), 0 );
                }
                l_U6 = 0;
            }
            sub_20848( l_U120 );
            l_U359 = 10;
        }
        break;
        case 10:
        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U447 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" )) AND (TIMERB() > 3000)))
        {
            CLEAR_HELP();
        }
        if (sub_21201( sub_980(), 29 ))
        {
            l_U190 = 0;
            l_U359 = 0;
        }
        break;
    }
    return;
}

int sub_9356()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_9490(unknown uParam0)
{
    float fVar3;

    GET_CHAR_SPEED( uParam0, ref fVar3 );
    if ((fVar3 < 0.80000000) || (IS_CHAR_STOPPED( uParam0 )))
    {
        return 1;
    }
    return 0;
}

int sub_9552(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_738() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_738() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_9356())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_980() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_9704())
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

void sub_9704()
{
    return sub_9715( 0, 0 );
}

int sub_9715(boolean bParam0, unknown uParam1)
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

int sub_9819(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_9552( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_738(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_10094();
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

void sub_10094()
{
    return sub_9715( 1, 1 );
}

void sub_10750(unknown uParam0)
{
    char[16] Result;

    switch (uParam0)
    {
        case 1:
        StrCopy( ref Result, "GL_BBAT3", 16 );
        break;
        case 7:
        StrCopy( ref Result, "GL_PIST3", 16 );
        break;
        case 9:
        StrCopy( ref Result, "GL_DEAGLE3", 16 );
        break;
        case 12:
        StrCopy( ref Result, "GL_UZI3", 16 );
        break;
        case 13:
        StrCopy( ref Result, "GL_MP53", 16 );
        break;
        case 10:
        StrCopy( ref Result, "GL_SHOT3", 16 );
        break;
        case 11:
        StrCopy( ref Result, "GL_BARET3", 16 );
        break;
        case 14:
        StrCopy( ref Result, "GL_AK473", 16 );
        break;
        case 15:
        StrCopy( ref Result, "GL_M43", 16 );
        break;
        case 16:
        StrCopy( ref Result, "GL_SNIPER3", 16 );
        break;
        case 17:
        StrCopy( ref Result, "GL_M40A13", 16 );
        break;
        case 4:
        StrCopy( ref Result, "GL_GREN3", 16 );
        break;
        case 5:
        StrCopy( ref Result, "GL_MOLOTOV3", 16 );
        break;
        case 18:
        StrCopy( ref Result, "GL_RKL3", 16 );
        break;
    }
    return Result;
}

int sub_11178()
{
    if ((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_11604()
{
    if (NOT (IS_CHAR_INJURED( sub_980() )))
    {
        GET_CHAR_ARMOUR( sub_980(), ref l_U14 );
    }
    if (l_U14 < 100)
    {
        l_U15 = 100 - l_U14;
        return 1;
        break;
    }
    return 0;
}

int sub_12218(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_12309(int iParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (NOT (iParam0 == 55))
    {
        GET_WEAPONTYPE_SLOT( iParam0, ref uVar4 );
    }
    GET_CHAR_WEAPON_IN_SLOT( sub_980(), uVar4, ref iVar5, uParam1, ref uVar6 );
    if ((iVar5 == 0) || (iVar5 == 55))
    {
        return 1;
        break;
    }
    if (iVar5 == iParam0)
    {
        return 1;
        break;
    }
    return 0;
}

int sub_12464(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    GET_WEAPONTYPE_SLOT( uParam0, ref uVar3 );
    GET_CHAR_WEAPON_IN_SLOT( sub_980(), uVar3, ref l_U426, ref l_U427, ref uVar4 );
    REMOVE_WEAPON_FROM_CHAR( sub_980(), l_U426 );
    return 1;
    return 0;
}

void sub_12586(int iParam0)
{
    unknown uVar3;

    REQUEST_MODEL( -2001451511 );
    DISPLAY_CASH( 1 );
    DISPLAY_HUD( 0 );
    DISPLAY_RADAR( 0 );
    if (NOT l_U8)
    {
        OPEN_SEQUENCE_TASK( ref uVar3 );
        TASK_PLAY_ANIM( 0, sub_12654( iParam0->_fU0 ), "missgunlockup", 8.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM( 0, sub_13136( iParam0->_fU0 ), "missgunlockup", 8.00000000, 1, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( uVar3 );
        TASK_PERFORM_SEQUENCE( sub_980(), uVar3 );
        CLEAR_SEQUENCE_TASK( uVar3 );
        l_U8 = 1;
    }
    if (NOT l_U7)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_980(), "missgunlockup", sub_12654( iParam0->_fU0 ) ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_980(), "missgunlockup", sub_12654( iParam0->_fU0 ), ref l_U16 );
            if (l_U16 > (sub_13732( iParam0->_fU0 )))
            {
                if (DOES_OBJECT_EXIST( iParam0->_fU20 ))
                {
                    if (IS_PLAYER_PLAYING( sub_738() ))
                    {
                        SET_OBJECT_VISIBLE( iParam0->_fU20, 0 );
                        if (iParam0->_fU0 == 5)
                        {
                            GIVE_WEAPON_TO_CHAR( sub_980(), 5, sub_14116( iParam0->_fU0 ), 0 );
                            SET_CURRENT_CHAR_WEAPON( sub_980(), 5, 0 );
                            SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_980(), 1 );
                            l_U7 = 1;
                        }
                        else
                        {
                            GIVE_WEAPON_TO_CHAR( sub_980(), iParam0->_fU0, sub_14116( iParam0->_fU0 ), 0 );
                            SET_CURRENT_CHAR_WEAPON( sub_980(), iParam0->_fU0, 0 );
                            SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_980(), 1 );
                            l_U7 = 1;
                        }
                    }
                }
            }
        }
    }
    l_U17 = 0.00000000;
    return;
}

void sub_12654(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 1:
        Result = "GRENADE_INTRO";
        break;
        case 7:
        Result = "pistol_intro";
        break;
        case 9:
        Result = "pistol_intro";
        break;
        case 12:
        Result = "uzi_intro";
        break;
        case 13:
        Result = "pistol_intro";
        break;
        case 10:
        Result = "shotgun_intro";
        break;
        case 11:
        Result = "shotgun_intro";
        break;
        case 14:
        Result = "rifle_intro";
        break;
        case 15:
        Result = "rifle_intro";
        break;
        case 16:
        Result = "rifle_intro";
        break;
        case 17:
        Result = "rifle_intro";
        break;
        case 4:
        Result = "GRENADE_INTRO";
        break;
        case 5:
        Result = "GRENADE_INTRO";
        break;
        case 18:
        Result = "rpg_intro";
        break;
    }
    return Result;
}

void sub_13136(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 1:
        Result = "over_shoulder";
        break;
        case 7:
        Result = "pistol_loop";
        break;
        case 9:
        Result = "pistol_loop";
        break;
        case 12:
        Result = "uzi_loop";
        break;
        case 13:
        Result = "rifle_loop";
        break;
        case 10:
        Result = "shotgun_loop";
        break;
        case 11:
        Result = "rifle_loop";
        break;
        case 14:
        Result = "rifle_loop";
        break;
        case 15:
        Result = "rifle_loop";
        break;
        case 16:
        Result = "rifle_loop";
        break;
        case 17:
        Result = "rifle_loop";
        break;
        case 4:
        Result = "GRENADE_LOOP";
        break;
        case 5:
        Result = "GRENADE_LOOP";
        break;
        case 18:
        Result = "rpg_loop";
        break;
    }
    return Result;
}

void sub_13732(unknown uParam0)
{
    float Result;

    switch (uParam0)
    {
        case 1:
        Result = 0.64000000;
        break;
        case 7:
        Result = 0.41000000;
        break;
        case 9:
        Result = 0.41000000;
        break;
        case 12:
        Result = 0.41000000;
        break;
        case 13:
        Result = 0.41000000;
        break;
        case 10:
        Result = 0.44000000;
        break;
        case 11:
        Result = 0.44000000;
        break;
        case 14:
        Result = 0.46000000;
        break;
        case 15:
        Result = 0.46000000;
        break;
        case 16:
        Result = 0.46000000;
        break;
        case 17:
        Result = 0.46000000;
        break;
        case 4:
        Result = 0.64000000;
        break;
        case 5:
        Result = 0.64000000;
        break;
        case 18:
        Result = 0.46000000;
        break;
    }
    return Result;
}

int sub_14116(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 1;
        case 7: return 17;
        case 9: return 9;
        case 12: return 50;
        case 13: return 30;
        case 10: return 8;
        case 11: return 10;
        case 14: return 30;
        case 15: return 30;
        case 16: return 10;
        case 17: return 5;
        case 4: return 1;
        case 5: return 1;
        case 18: return 1;
    }
    return -1;
}

void sub_14509(unknown uParam0)
{
    if (sub_10094())
    {
        if (NOT l_U9)
        {
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref uParam0 );
            CREATE_CAM( 14, ref l_U10 );
            ATTACH_CAM_TO_PED( l_U10, sub_980() );
            SET_CAM_FOV( l_U10, 68.50000000 );
            if (NOT (IS_CHAR_INJURED( sub_980() )))
            {
                GET_CHAR_COORDINATES( sub_980(), ref l_U11._fU0, ref l_U11._fU4, ref l_U11._fU8 );
            }
            SET_CAM_ATTACH_OFFSET( l_U10, 0.00000000, 0.77000000, 0.66000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U10, 1 );
            POINT_CAM_AT_COORD( l_U10, l_U11._fU0, l_U11._fU4, l_U11._fU8 + 0.40000000 );
            SET_CAM_ACTIVE( l_U10, 1 );
            SET_CAM_PROPAGATE( l_U10, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_MINIGAME_IN_PROGRESS( 1 );
            l_U9 = 1;
        }
    }
    return;
}

void sub_14775(unknown uParam0)
{
    if (sub_10094())
    {
        if (NOT l_U9)
        {
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref uParam0 );
            CREATE_CAM( 14, ref l_U10 );
            ATTACH_CAM_TO_PED( l_U10, sub_980() );
            SET_CAM_FOV( l_U10, 58.50000000 );
            SET_CAM_ATTACH_OFFSET( l_U10, -1.30000000, 0.87000000, 0.86000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U10, 1 );
            POINT_CAM_AT_PED( l_U10, sub_980() );
            SET_CAM_ACTIVE( l_U10, 1 );
            SET_CAM_PROPAGATE( l_U10, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_MINIGAME_IN_PROGRESS( 1 );
            l_U9 = 1;
        }
    }
    return;
}

void sub_14972(unknown uParam0)
{
    if (sub_10094())
    {
        if (NOT l_U9)
        {
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref uParam0 );
            CREATE_CAM( 14, ref l_U10 );
            ATTACH_CAM_TO_PED( l_U10, sub_980() );
            SET_CAM_FOV( l_U10, 68.50000000 );
            SET_CAM_ATTACH_OFFSET( l_U10, 1.00000000, 0.07000000, 0.86000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U10, 1 );
            POINT_CAM_AT_PED( l_U10, sub_980() );
            SET_CAM_ACTIVE( l_U10, 1 );
            SET_CAM_PROPAGATE( l_U10, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_MINIGAME_IN_PROGRESS( 1 );
            l_U9 = 1;
        }
    }
    return;
}

void sub_15509(unknown uParam0)
{
    char[16] Result;

    switch (uParam0)
    {
        case 1:
        StrCopy( ref Result, "GL_BBAT2", 16 );
        break;
        case 7:
        StrCopy( ref Result, "GL_PIST2", 16 );
        break;
        case 9:
        StrCopy( ref Result, "GL_DEAGLE2", 16 );
        break;
        case 12:
        StrCopy( ref Result, "GL_UZI2", 16 );
        break;
        case 13:
        StrCopy( ref Result, "GL_MP52", 16 );
        break;
        case 10:
        StrCopy( ref Result, "GL_SHOT2", 16 );
        break;
        case 11:
        StrCopy( ref Result, "GL_BARET2", 16 );
        break;
        case 14:
        StrCopy( ref Result, "GL_AK472", 16 );
        break;
        case 15:
        StrCopy( ref Result, "GL_M42", 16 );
        break;
        case 16:
        StrCopy( ref Result, "GL_SNIPER2", 16 );
        break;
        case 17:
        StrCopy( ref Result, "GL_M40A12", 16 );
        break;
        case 4:
        StrCopy( ref Result, "GL_GREN2", 16 );
        break;
        case 5:
        StrCopy( ref Result, "GL_MOLOTOV2", 16 );
        break;
        case 18:
        StrCopy( ref Result, "GL_RKL2", 16 );
        break;
    }
    return Result;
}

int sub_16163(int iParam0)
{
    if (iParam0 == 7)
    {
        l_U142[2] = 0;
        return 1;
    }
    else if (iParam0 == 9)
    {
        l_U142[1] = 0;
        return 1;
    }
    else if (iParam0 == 12)
    {
        l_U142[4] = 0;
        return 1;
    }
    else if (iParam0 == 13)
    {
        l_U142[3] = 0;
        return 1;
    }
    else if (iParam0 == 10)
    {
        l_U142[6] = 0;
        return 1;
    }
    else if (iParam0 == 11)
    {
        l_U142[5] = 0;
        return 1;
    }
    else if (iParam0 == 14)
    {
        l_U142[8] = 0;
        return 1;
    }
    else if (iParam0 == 15)
    {
        l_U142[7] = 0;
        return 1;
    }
    else if (iParam0 == 16)
    {
        l_U142[10] = 0;
        return 1;
    }
    else if (iParam0 == 17)
    {
        l_U142[9] = 0;
        return 1;
    }
    else if (iParam0 == 4)
    {
        l_U142[12] = 0;
        return 1;
    }
    else if (iParam0 == 5)
    {
        l_U142[11] = 0;
        return 1;
    }
    else if (iParam0 == 18)
    {
        l_U142[13] = 0;
        return 1;
    }
    else if (iParam0 == 1)
    {
        return 1;
    };;;;;;;;;;;;;;
    return 0;
}

int sub_16650(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 5;
        case 7: return 600;
        case 9: return 1500;
        case 12: return 1200;
        case 13: return 2500;
        case 10: return 1200;
        case 11: return 2500;
        case 14: return 3500;
        case 15: return 5000;
        case 16: return 8500;
        case 17: return 6000;
        case 4: return 1000;
        case 5: return 500;
        case 18: return 15000;
    }
    return -1;
}

int sub_16871(int iParam0)
{
    int iVar3;

    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        STORE_SCORE( sub_738(), ref iVar3 );
        if (iVar3 >= iParam0)
        {
            ADD_SCORE( sub_738(), -1 * iParam0 );
            return 1;
        }
    }
    return 0;
}

void sub_16997(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 1:
        Result = "WEAPON_PICKUP_BASEBALL_BAT";
        break;
        case 7:
        Result = "WEAPON_PICKUP_HANDGUN";
        break;
        case 9:
        Result = "WEAPON_PICKUP_DESERT_EAGLE";
        break;
        case 12:
        Result = "WEAPON_PICKUP_UZI";
        break;
        case 13:
        Result = "WEAPON_PICKUP_MP5K";
        break;
        case 10:
        Result = "WEAPON_PICKUP_SHOTGUN";
        break;
        case 11:
        Result = "WEAPON_PICKUP_BARETTA";
        break;
        case 14:
        Result = "WEAPON_PICKUP_AK47";
        break;
        case 15:
        Result = "WEAPON_PICKUP_M4";
        break;
        case 16:
        Result = "WEAPON_PICKUP_SNIPER_RIFLE";
        break;
        case 17:
        Result = "WEAPON_PICKUP_SNIPER_RIFLE";
        break;
        case 4:
        Result = "WEAPON_PICKUP_GRENADE";
        break;
        case 5:
        Result = "WEAPON_PICKUP_MOLOTOV";
        break;
        case 18:
        Result = "WEAPON_PICKUP_BARETTA";
        break;
    }
    return Result;
}

void sub_17615(unknown uParam0)
{
    char[16] Result;

    switch (uParam0)
    {
        case 1:
        StrCopy( ref Result, "GL_BBAT4", 16 );
        break;
        case 7:
        StrCopy( ref Result, "GL_PIST4", 16 );
        break;
        case 9:
        StrCopy( ref Result, "GL_DEAGLE4", 16 );
        break;
        case 12:
        StrCopy( ref Result, "GL_UZI4", 16 );
        break;
        case 13:
        StrCopy( ref Result, "GL_MP54", 16 );
        break;
        case 10:
        StrCopy( ref Result, "GL_SHOT4", 16 );
        break;
        case 11:
        StrCopy( ref Result, "GL_BARET4", 16 );
        break;
        case 14:
        StrCopy( ref Result, "GL_AK474", 16 );
        break;
        case 15:
        StrCopy( ref Result, "GL_M44", 16 );
        break;
        case 16:
        StrCopy( ref Result, "GL_SNIPER4", 16 );
        break;
        case 17:
        StrCopy( ref Result, "GL_M40A14", 16 );
        break;
        case 4:
        StrCopy( ref Result, "GL_GREN4", 16 );
        break;
        case 5:
        StrCopy( ref Result, "GL_MOLOTOV4", 16 );
        break;
        case 18:
        StrCopy( ref Result, "GL_RKL4", 16 );
        break;
    }
    return Result;
}

int sub_18275(unknown uParam0)
{
    if ((l_U426 == 55) || (l_U427 < 1))
    {
        ;
    }
    else
    {
        GIVE_WEAPON_TO_CHAR( sub_980(), l_U426, l_U427, 0 );
        l_U426 = 55;
        l_U427 = 0;
        return 1;
    }
    return 0;
}

int sub_18422(unknown uParam0)
{
    unknown Result;

    switch (uParam0)
    {
        case 1:
        GET_MAX_AMMO( sub_980(), 1, ref Result );
        return Result;
        case 7:
        GET_MAX_AMMO( sub_980(), 7, ref Result );
        return Result;
        case 9:
        GET_MAX_AMMO( sub_980(), 9, ref Result );
        return Result;
        case 12:
        GET_MAX_AMMO( sub_980(), 12, ref Result );
        return Result;
        case 13:
        GET_MAX_AMMO( sub_980(), 13, ref Result );
        return Result;
        case 10:
        GET_MAX_AMMO( sub_980(), 10, ref Result );
        return Result;
        case 11:
        GET_MAX_AMMO( sub_980(), 11, ref Result );
        return Result;
        case 14:
        GET_MAX_AMMO( sub_980(), 14, ref Result );
        return Result;
        case 15:
        GET_MAX_AMMO( sub_980(), 15, ref Result );
        return Result;
        case 16:
        GET_MAX_AMMO( sub_980(), 16, ref Result );
        return Result;
        case 17:
        GET_MAX_AMMO( sub_980(), 17, ref Result );
        return Result;
        case 4:
        GET_MAX_AMMO( sub_980(), 4, ref Result );
        return Result;
        case 5:
        GET_MAX_AMMO( sub_980(), 5, ref Result );
        return Result;
        case 18:
        GET_MAX_AMMO( sub_980(), 18, ref Result );
        return Result;
    }
    return -1;
}

int sub_18928(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 5;
        case 7: return 35;
        case 9: return 100;
        case 12: return 100;
        case 13: return 150;
        case 10: return 100;
        case 11: return 200;
        case 14: return 80;
        case 15: return 100;
        case 16: return 500;
        case 17: return 800;
        case 4: return 1000;
        case 5: return 500;
        case 18: return 5000;
    }
    return -1;
}

void sub_19627(int iParam0)
{
    unknown uVar3;

    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    DISPLAY_CASH( 1 );
    if (l_U8)
    {
        OPEN_SEQUENCE_TASK( ref uVar3 );
        TASK_PLAY_ANIM( 0, sub_19682( iParam0->_fU0 ), "missgunlockup", 8.00000000, 0, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( uVar3 );
        TASK_PERFORM_SEQUENCE( sub_980(), uVar3 );
        CLEAR_SEQUENCE_TASK( uVar3 );
        l_U8 = 0;
    }
    if (l_U7)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_980(), "missgunlockup", sub_19682( iParam0->_fU0 ) ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_980(), "missgunlockup", sub_19682( iParam0->_fU0 ), ref l_U17 );
            if (l_U17 > (sub_20293( iParam0->_fU0 )))
            {
                if (DOES_OBJECT_EXIST( iParam0->_fU20 ))
                {
                    if (IS_PLAYER_PLAYING( sub_738() ))
                    {
                        SET_OBJECT_VISIBLE( iParam0->_fU20, 1 );
                        if (HAS_CHAR_GOT_WEAPON( sub_980(), iParam0->_fU0 ))
                        {
                            REMOVE_WEAPON_FROM_CHAR( sub_980(), iParam0->_fU0 );
                        }
                        SET_CURRENT_CHAR_WEAPON( sub_980(), 0, 0 );
                        l_U7 = 0;
                    }
                }
            }
        }
    }
    l_U16 = 0.00000000;
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2001451511 );
    return;
}

void sub_19682(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 1:
        Result = "grenade_outro";
        break;
        case 7:
        Result = "pistol_outro";
        break;
        case 9:
        Result = "pistol_outro";
        break;
        case 12:
        Result = "uzi_outro";
        break;
        case 13:
        Result = "pistol_outro";
        break;
        case 10:
        Result = "shotgun_outro";
        break;
        case 11:
        Result = "shotgun_outro";
        break;
        case 14:
        Result = "rifle_outro";
        break;
        case 15:
        Result = "rifle_outro";
        break;
        case 16:
        Result = "rifle_outro";
        break;
        case 17:
        Result = "rifle_outro";
        break;
        case 4:
        Result = "grenade_outro";
        break;
        case 5:
        Result = "grenade_outro";
        break;
        case 18:
        Result = "rpg_outro";
        break;
    }
    return Result;
}

void sub_20293(unknown uParam0)
{
    float Result;

    switch (uParam0)
    {
        case 1:
        Result = 0.44000000;
        break;
        case 7:
        Result = 0.51000000;
        break;
        case 9:
        Result = 0.51000000;
        break;
        case 12:
        Result = 0.51000000;
        break;
        case 13:
        Result = 0.51000000;
        break;
        case 10:
        Result = 0.36000000;
        break;
        case 11:
        Result = 0.36000000;
        break;
        case 14:
        Result = 0.40000000;
        break;
        case 15:
        Result = 0.40000000;
        break;
        case 16:
        Result = 0.40000000;
        break;
        case 17:
        Result = 0.40000000;
        break;
        case 4:
        Result = 0.44000000;
        break;
        case 5:
        Result = 0.44000000;
        break;
        case 18:
        Result = 0.37000000;
        break;
    }
    return Result;
}

void sub_20848(unknown uParam0)
{
    if (l_U9)
    {
        SET_CAM_ACTIVE( l_U10, 0 );
        SET_CAM_PROPAGATE( l_U10, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        END_CAM_COMMANDS( ref uParam0 );
        DESTROY_CAM( l_U10 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_PLAYER_CONTROL( sub_738(), 1 );
        sub_689();
        SET_MINIGAME_IN_PROGRESS( 0 );
        l_U9 = 0;
    }
    return;
}

int sub_21201(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_21359(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_7143( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_7143( "\n speech is not playing" );
    }
    return 0;
}

void sub_22686()
{
    while (((NOT (sub_22730( l_U360[1]._fU0, l_U360[1]._fU4, l_U360[1]._fU8, 2.00000000 ))) || (sub_22730( l_U360[2]._fU0, l_U360[2]._fU4, l_U360[2]._fU8, 2.00000000 ))) || (sub_22730( l_U360[3]._fU0, l_U360[3]._fU4, l_U360[3]._fU8, 2.00000000 )))
    {
        WAIT( 0 );
    }
    if (NOT l_U186)
    {
        SET_RELATIONSHIP( 5, 28, 0 );
        CREATE_CHAR( 7, l_U126, l_U360[1]._fU0, l_U360[1]._fU4, l_U360[1]._fU8, ref l_U123, 1 );
        SET_AMBIENT_VOICE_NAME( l_U123, " M_Y_GTRI_LO_01_GANG_01" );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U198 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U123, l_U194 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U123 );
        CREATE_CHAR( 7, l_U126, l_U360[2]._fU0, l_U360[2]._fU4, l_U360[2]._fU8, ref l_U124, 1 );
        SET_AMBIENT_VOICE_NAME( l_U124, "M_Y_GTRI_LO_02_GANG_01" );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U199 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U124, l_U194 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U124 );
        CREATE_CHAR( 7, l_U126, l_U360[3]._fU0, l_U360[3]._fU4, l_U360[3]._fU8, ref l_U125, 1 );
        SET_AMBIENT_VOICE_NAME( l_U125, " M_Y_GTRI_LO_01_GANG_01" );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U200 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U125, l_U194 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U125 );
        if (NOT (IS_CHAR_INJURED( l_U123 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U123, 28 );
            GIVE_WEAPON_TO_CHAR( l_U123, 11, 150, 0 );
            SET_CHAR_HEADING( l_U123, 180.00000000 );
            SET_COMBAT_DECISION_MAKER( l_U123, l_U198 );
            TASK_COMBAT( l_U123, sub_980() );
        }
        if (NOT (IS_CHAR_INJURED( l_U124 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U124, 28 );
            GIVE_WEAPON_TO_CHAR( l_U124, 13, 150, 0 );
            SET_CHAR_HEADING( l_U124, 180.00000000 );
            SET_COMBAT_DECISION_MAKER( l_U124, l_U199 );
            TASK_COMBAT( l_U124, sub_980() );
        }
        if (NOT (IS_CHAR_INJURED( l_U125 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U125, 28 );
            GIVE_WEAPON_TO_CHAR( l_U125, 11, 150, 0 );
            SET_CHAR_HEADING( l_U125, 180.00000000 );
            SET_COMBAT_DECISION_MAKER( l_U125, l_U200 );
            TASK_COMBAT( l_U125, sub_980() );
        }
        if (NOT (IS_CHAR_INJURED( l_U122 )))
        {
            ;
        }
        l_U186 = 1;
    }
    else
    {
        sub_23610();
    }
    return;
}

int sub_22730(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_23610()
{
    if (NOT l_U187)
    {
        if (NOT (IS_CHAR_INJURED( l_U123 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U123 );
            SET_COMBAT_DECISION_MAKER( l_U123, l_U198 );
            SET_CHAR_RELATIONSHIP( l_U123, 5, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U124 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U124 );
            SET_COMBAT_DECISION_MAKER( l_U124, l_U199 );
            SET_CHAR_RELATIONSHIP( l_U124, 5, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U125 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U124 );
            SET_COMBAT_DECISION_MAKER( l_U124, l_U200 );
            SET_CHAR_RELATIONSHIP( l_U124, 5, 0 );
            CLEAR_SEQUENCE_TASK( l_U344 );
        }
        l_U187 = 1;
    }
    return;
}
