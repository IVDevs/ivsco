void main()
{
    boolean bVar2;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int iVar10;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U114 = -1;
    l_U128 = 15.00000000;
    l_U129 = 35.00000000;
    l_U130 = 16.00000000;
    l_U131 = 0.00000000;
    l_U137 = 1000.00000000;
    l_U138 = 7500.00000000;
    l_U147 = 1;
    l_U148 = 30.00000000;
    l_U149 = 30.00000000;
    l_U150 = 2.00000000;
    l_U160 = 0.00000000;
    l_U161 = 0.00000000;
    l_U173 = 1;
    l_U174 = 0;
    l_U175 = -1;
    l_U176 = 1;
    l_U177 = -1;
    l_U178 = -1;
    l_U179 = 15.00000000;
    l_U206 = 0;
    l_U207 = -1949702649;
    l_U208 = 2075870698;
    l_U213 = 0.12000000;
    l_U373 = 0;
    l_U377 = 0.00000000;
    l_U379 = 0;
    l_U380 = 0;
    l_U381 = 0;
    l_U382 = 0;
    l_U383 = 0;
    l_U384 = 1;
    l_U385 = 0;
    l_U386 = 0;
    l_U387 = 0;
    l_U389 = 0;
    l_U390 = 0;
    l_U391 = 0;
    l_U392 = 0;
    l_U393 = 1;
    l_U394 = 0;
    l_U421 = 0;
    l_U425 = 0;
    l_U426 = -1;
    l_U427 = 1;
    l_U428 = "NONE";
    l_U455 = 0;
    l_U456 = 0;
    l_U457 = {0.00000000, 0.00000000, 0.00000000};
    l_U460 = 0.00000000;
    l_U461 = nil;
    l_U462 = 0;
    l_U463 = nil;
    l_U464 = nil;
    l_U465 = 0;
    l_U466 = 0;
    l_U467 = 0;
    l_U468 = 0;
    l_U475 = 0;
    l_U476 = 0;
    l_U477 = 0;
    l_U478 = 0;
    l_U479 = 0;
    l_U480 = 0;
    l_U506 = {0.22300000, 1.04500000, 0.95300000};
    l_U509 = {84.50000000, 0.00000000, 198.50000000};
    l_U521 = sub_585();
    l_U513 = l_U522;
    if (sub_627( l_U513 ))
    {
        g_U10486 = 0;
    }
    while (DOES_OBJECT_EXIST( l_U522 ))
    {
        if (NOT l_U480)
        {
            l_U521 = sub_754( l_U522 );
            l_U518 = sub_1514( l_U522 );
            l_U480 = 1;
        }
        if (g_U2764)
        {
            sub_2024();
            PRINTSTRING( "CLEANUP_POOL_TABLE_SCRIPT() 1 \n" );
            sub_2158();
        }
        if (IS_PLAYER_PLAYING( sub_2512() ))
        {
            GET_OBJECT_COORDINATES( l_U522, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2680(), uVar4._fU0, uVar4._fU4, uVar4._fU8, 50.00000000, 50.00000000, 20.00000000, 0 )))
            {
                PRINTSTRING( "CLEANUP_POOL_TABLE_SCRIPT() 2 \n" );
                sub_2158();
            }
        }
        if ((NOT (l_U485 == 4)) AND (NOT (l_U485 == 3)))
        {
            if (g_U12303)
            {
                if (NOT IS_MINIGAME_IN_PROGRESS())
                {
                    if (NOT (sub_2854( 6 )))
                    {
                        if (NOT g_U26739._fU24)
                        {
                            PRINTSTRING( "CLEANUP_POOL_TABLE_SCRIPT() 3 \n" );
                            sub_2158();
                        }
                    }
                }
            }
        }
        if (IS_OBJECT_IN_AREA_3D( l_U522, 931.43210000, -497.12180000, 13.96470000, 936.43210000, -493.79680000, 17.48970000, 0 ))
        {
            PRINTSTRING( "CLEANUP_POOL_TABLE_SCRIPT() 4 \n" );
            sub_2158();
        }
        GET_FRAME_TIME( ref fVar3 );
        fVar3 *= 1000.00000000;
        if (IS_PLAYER_PLAYING( sub_2512() ))
        {
            if (NOT (IS_CHAR_INJURED( l_U502 )))
            {
                if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2512(), l_U502 )) || (IS_PLAYER_TARGETTING_CHAR( sub_2512(), l_U502 )))
                {
                    l_U512 += fVar3;
                }
                else
                {
                    l_U512 -= fVar3;
                    if (l_U512 < 0.00000000)
                    {
                        l_U512 = 0.00000000;
                    }
                }
            }
        }
        switch (l_U485)
        {
            case 0:
            switch (l_U486)
            {
                case 0:
                l_U484 = 0;
                l_U486++;
                break;
                case 1:
                GET_ROOM_KEY_FROM_OBJECT( l_U522, ref l_U484 );
                GET_OBJECT_COORDINATES( l_U522, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                GET_INTERIOR_AT_COORDS( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U483 );
                if (NOT (l_U484 == 0))
                {
                    l_U486++;
                }
                break;
                case 2:
                if (IS_OBJECT_IN_AREA_3D( l_U522, -421.52720000, 1457.43900000, 36.69650000, -415.52720000, 1463.83900000, 40.97150000, 0 ))
                {
                    l_U490._fU28 = 0;
                }
                else
                {
                    l_U490._fU28 = 1;
                }
                PRINTSTRING( "GOTO_POOL_TABLE_STATE(POOL_TABLE_STATE_CREATE)\n" );
                sub_3809( 1 );
                break;
            }
            break;
            case 1:
            switch (l_U490._fU28)
            {
                case 0:
                sub_3809( 2 );
                break;
                case 1:
                if (l_U480)
                {
                    if (HAS_MODEL_LOADED( l_U521 ))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U522, -1.70000000, -1.00000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                        CREATE_CHAR( 4, l_U521, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U502, 1 );
                        if (sub_627( l_U513 ))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U502, 1 );
                            SET_CHAR_RELATIONSHIP_GROUP( l_U502, 6 );
                        }
                        if (NOT (COMPARE_STRING( l_U518, "NULL" )))
                        {
                            SET_AMBIENT_VOICE_NAME( l_U502, l_U518 );
                        }
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U522, 0.00000000, 0.00000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                        TASK_TURN_CHAR_TO_FACE_COORD( l_U502, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
                        if (IS_PLAYER_PLAYING( sub_2512() ))
                        {
                            TASK_LOOK_AT_CHAR( l_U502, sub_2680(), -2, 0 );
                        }
                        SET_ROOM_FOR_CHAR_BY_KEY( l_U502, l_U484 );
                        l_U481 = 0;
                        if (NOT (sub_627( l_U522 )))
                        {
                            l_U482 = 1;
                        }
                        PRINTSTRING( "GOTO_POOL_TABLE_STATE(POOL_TABLE_STATE_TRIGGER)\n" );
                        sub_3809( 2 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U521 );
                    }
                    else
                    {
                        REQUEST_MODEL( l_U521 );
                    }
                }
                break;
            }
            break;
            case 2:
            if (l_U482)
            {
                if (DOES_PICKUP_EXIST( l_U515 ))
                {
                    REMOVE_PICKUP( l_U515 );
                }
                GET_WEAPONTYPE_MODEL( 24, ref l_U514 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U522, l_U506._fU0, l_U506._fU4, l_U506._fU8, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                GET_OBJECT_HEADING( l_U522, ref fVar3 );
                uVar7 = {l_U509};
                uVar7._fU8 += fVar3;
                CREATE_PICKUP_ROTATE( l_U514, 3, 1, uVar4, uVar7, ref l_U515 );
                ADD_PICKUP_TO_INTERIOR_ROOM_BY_KEY( l_U515, l_U484 );
                l_U482 = 0;
            }
            GET_OBJECT_COORDINATES( l_U522, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            switch (l_U486)
            {
                case 0:
                if (l_U479)
                {
                    if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
                    {
                        l_U479 = 0;
                    }
                }
                if (IS_PLAYER_PLAYING( sub_2512() ))
                {
                    if (sub_627( l_U513 ))
                    {
                        if (g_U10486)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U502 )))
                            {
                                GIVE_WEAPON_TO_CHAR( l_U502, 7, 99, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U502 )))
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U502, 0 );
                                    SET_CHAR_RELATIONSHIP( l_U502, 5, 0 );
                                }
                            }
                        }
                    }
                }
                if (NOT l_U481)
                {
                    if ((sub_4690()) AND (sub_6488( 2, 0 )))
                    {
                        l_U478 = 0;
                        iVar10 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U503 )))
                        {
                            iVar10++;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U504 )))
                        {
                            iVar10++;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U505 )))
                        {
                            iVar10++;
                        }
                        if (iVar10 == 0)
                        {
                            l_U516 = "PLH_01";
                        }
                        else if (iVar10 == 1)
                        {
                            if (((NOT (IS_CHAR_INJURED( l_U503 ))) AND (IS_CHAR_INJURED( l_U504 ))) AND (IS_CHAR_INJURED( l_U505 )))
                            {
                                l_U516 = "PLH_01O";
                                l_U501 = l_U503;
                                l_U478 = 1;
                            }
                            if (((IS_CHAR_INJURED( l_U503 )) AND (NOT (IS_CHAR_INJURED( l_U504 )))) AND (IS_CHAR_INJURED( l_U505 )))
                            {
                                l_U516 = "PLH_01P";
                                l_U501 = l_U504;
                                l_U478 = 1;
                            }
                            if (((IS_CHAR_INJURED( l_U503 )) AND (IS_CHAR_INJURED( l_U504 ))) AND (NOT (IS_CHAR_INJURED( l_U505 ))))
                            {
                                l_U516 = "PLH_01Q";
                                l_U501 = l_U505;
                                l_U478 = 1;
                            }
                        }
                        else
                        {
                            l_U516 = "PLH_01";
                        }
                        if (NOT (IS_STRING_NULL( l_U517 )))
                        {
                            if (NOT (COMPARE_STRING( l_U517, l_U516 )))
                            {
                                sub_2242( 2, l_U517 );
                                l_U517 = l_U516;
                            }
                        }
                        else
                        {
                            l_U517 = l_U516;
                        }
                        if (NOT l_U479)
                        {
                            if (sub_7238( 2, l_U517, 0 ))
                            {
                                bVar2 = true;
                                if (g_U12303)
                                {
                                    if (NOT (sub_2854( 6 )))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U503 )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U503, "GENERIC_NO_THANKS", 1, 1, 0 );
                                        }
                                        else if (NOT (IS_CHAR_INJURED( l_U504 )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U504, "GENERIC_NO_THANKS", 1, 1, 0 );
                                        }
                                        else if (NOT (IS_CHAR_INJURED( l_U505 )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U505, "GENERIC_NO_THANKS", 1, 1, 0 );
                                        };;;
                                        PRINTSTRING( "Pool not playable 10 \n" );
                                        bVar2 = false;
                                    }
                                }
                                if (bVar2)
                                {
                                    l_U479 = 1;
                                    if (iVar10 >= 2)
                                    {
                                        SET_PLAYER_CONTROL( sub_2512(), 0 );
                                        l_U481 = 1;
                                    }
                                    else if (NOT sub_8123())
                                    {
                                        sub_2242( 2, l_U517 );
                                    }
                                    else
                                    {
                                        PRINTSTRING( "GOTO_POOL_TABLE_STATE(POOL_TABLE_STATE_LOADING_SCRIPT)\n" );
                                        sub_3809( 3 );
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_2242( 2, l_U517 );
                    }
                }
                else if (NOT sub_4690())
                {
                    l_U481 = 0;
                    PRINTSTRING( "pool - menu - false 1 \n" );
                }
                l_U501 = nil;
                bVar2 = false;
                l_U478 = 1;
                if ((((NOT (IS_CHAR_INJURED( l_U503 ))) AND (NOT (IS_CHAR_INJURED( l_U504 )))) AND (NOT (IS_CHAR_INJURED( l_U505 )))) AND (l_U481))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PLH_01K" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_01K", "NULL" );
                    }
                    if (NOT bVar2)
                    {
                        if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            l_U501 = l_U503;
                            bVar2 = true;
                        }
                        if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            l_U501 = l_U504;
                            bVar2 = true;
                        }
                        if (((IS_BUTTON_PRESSED( 0, 14 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 117 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            l_U501 = l_U505;
                            bVar2 = true;
                        }
                    }
                }
                if ((((NOT (IS_CHAR_INJURED( l_U503 ))) AND (NOT (IS_CHAR_INJURED( l_U504 )))) AND (IS_CHAR_INJURED( l_U505 ))) AND (l_U481))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PLH_01L" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_01L", "NULL" );
                    }
                    if (NOT bVar2)
                    {
                        if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            l_U501 = l_U503;
                            bVar2 = true;
                        }
                        if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            l_U501 = l_U504;
                            bVar2 = true;
                        }
                    }
                }
                if ((((NOT (IS_CHAR_INJURED( l_U503 ))) AND (IS_CHAR_INJURED( l_U504 ))) AND (NOT (IS_CHAR_INJURED( l_U505 )))) AND (l_U481))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PLH_01M" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_01M", "NULL" );
                    }
                    if (NOT bVar2)
                    {
                        if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            l_U501 = l_U503;
                            bVar2 = true;
                        }
                        if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())) AND (NOT bVar2)))
                        {
                            l_U501 = l_U505;
                            bVar2 = true;
                        }
                    }
                }
                if ((((IS_CHAR_INJURED( l_U503 )) AND (NOT (IS_CHAR_INJURED( l_U504 )))) AND (NOT (IS_CHAR_INJURED( l_U505 )))) AND (l_U481))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PLH_01N" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "PLH_01N", "NULL" );
                    }
                    if (NOT bVar2)
                    {
                        if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            l_U501 = l_U504;
                            bVar2 = true;
                        }
                        if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())))
                        {
                            l_U501 = l_U505;
                            bVar2 = true;
                        }
                    }
                }
                if (((NOT (IS_CHAR_INJURED( l_U503 ))) AND (IS_CHAR_INJURED( l_U504 ))) AND (IS_CHAR_INJURED( l_U505 )))
                {
                    l_U481 = 0;
                    bVar2 = false;
                }
                if (((IS_CHAR_INJURED( l_U503 )) AND (NOT (IS_CHAR_INJURED( l_U504 )))) AND (IS_CHAR_INJURED( l_U505 )))
                {
                    l_U481 = 0;
                    bVar2 = false;
                }
                if (((IS_CHAR_INJURED( l_U503 )) AND (IS_CHAR_INJURED( l_U504 ))) AND (NOT (IS_CHAR_INJURED( l_U505 ))))
                {
                    l_U481 = 0;
                    bVar2 = false;
                }
                if (((IS_CHAR_INJURED( l_U503 )) AND (IS_CHAR_INJURED( l_U504 ))) AND (IS_CHAR_INJURED( l_U505 )))
                {
                    l_U481 = 0;
                    bVar2 = false;
                }
                if (bVar2)
                {
                    if (NOT sub_8123())
                    {
                        bVar2 = false;
                    }
                    else
                    {
                        sub_3809( 3 );
                    }
                }
                if (NOT bVar2)
                {
                    if ((NOT l_U479) || (NOT l_U481))
                    {
                        if ((IS_CONTROL_PRESSED( 2, 23 )) || (NOT l_U481))
                        {
                            CLEAR_HELP();
                            l_U481 = 0;
                            l_U479 = 1;
                            sub_2242( 2, l_U517 );
                            SET_PLAYER_CONTROL( sub_2512(), 1 );
                        }
                    }
                }
                break;
                default:
            }
            break;
            case 3:
            if (HAS_SCRIPT_LOADED( "pool_game" ))
            {
                bVar2 = false;
                if ((NOT (IS_CHAR_INJURED( l_U502 ))) AND (NOT l_U478))
                {
                    switch (l_U489)
                    {
                        case 0:
                        if (IS_PLAYER_PLAYING( sub_2512() ))
                        {
                            if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_2680() )))
                            {
                                SAY_AMBIENT_SPEECH( l_U502, "GENERIC_YES", 1, 1, 2 );
                                l_U489++;
                            }
                        }
                        break;
                        case 1:
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U502 )))
                        {
                            bVar2 = true;
                        }
                        break;
                    }
                }
                else
                {
                    bVar2 = true;
                }
                if (bVar2)
                {
                    if (l_U478)
                    {
                        l_U490._fU0[0] = l_U501;
                        l_U490._fU12[0] = nil;
                    }
                    else
                    {
                        l_U490._fU0[0] = l_U502;
                        l_U490._fU12[0] = nil;
                    }
                    l_U490._fU0[1] = sub_2680();
                    l_U490._fU12[1] = sub_2512();
                    l_U490._fU32[1] = 0;
                    l_U490._fU24 = l_U522;
                    l_U520 = START_NEW_SCRIPT_WITH_ARGS( "pool_game", ref l_U490, 11, 1024 );
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "pool_game" );
                    PRINTSTRING( "GOTO_POOL_TABLE_STATE(POOL_TABLE_STATE_GAME_RUNNING)\n" );
                    sub_3809( 4 );
                }
            }
            break;
            case 4:
            if (IS_SCREEN_FADED_OUT())
            {
                if (DOES_PICKUP_EXIST( l_U515 ))
                {
                    REMOVE_PICKUP( l_U515 );
                }
            }
            if (NOT (IS_THREAD_ACTIVE( l_U520 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U490._fU0[0] )))
                {
                    BLOCK_CHAR_GESTURE_ANIMS( l_U490._fU0[0], 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U490._fU0[1] )))
                {
                    BLOCK_CHAR_GESTURE_ANIMS( l_U490._fU0[1], 0 );
                }
                if (IS_PLAYER_PLAYING( sub_2512() ))
                {
                    SET_PLAYER_CONTROL( sub_2512(), 1 );
                }
                l_U482 = 1;
                l_U479 = 1;
                sub_2242( 2, l_U517 );
                SETTIMERA( 0 );
                l_U481 = 0;
                PRINTSTRING( "GOTO_POOL_TABLE_STATE(POOL_TABLE_STATE_TRIGGER)2\n" );
                sub_3809( 2 );
            }
            break;
        }
        WAIT( 0 );
    }
    PRINTSTRING( "CLEANUP_POOL_TABLE_SCRIPT() 5 \n" );
    sub_2158();
    return;
}

int sub_585()
{
    return 221246143;
}

int sub_627(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (IS_OBJECT_IN_AREA_3D( uParam0, -1725.71000000, 343.84000000, 28.30000000, -1718.71000000, 350.84000000, 34.30000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_754(unknown uParam0)
{
    unknown uVar3;

    if (sub_765( uParam0 ))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            return -1500397869;
            break;
            case 1:
            return -881358690;
            break;
            case 2:
            return 1609755055;
            break;
            case 3:
            return -330497431;
            break;
        }
    }
    else if (sub_627( uParam0 ))
    {
        return 1439613707;
    }
    return sub_980( -1 );
}

int sub_765(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (IS_OBJECT_IN_AREA_3D( uParam0, 1470.84700000, 55.46900000, 21.56560000, 1474.14700000, 62.29400000, 27.19060000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_980(int iParam0)
{
    int iVar3;
    int Result;

    if (iParam0 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 23, ref iVar3 );
    }
    else
    {
        iVar3 = iParam0;
    }
    switch (iVar3)
    {
        case 0:
        Result = 286007875;
        break;
        case 1:
        Result = 221246143;
        break;
        case 2:
        Result = 43005364;
        break;
        case 3:
        Result = 1609755055;
        break;
        case 4:
        Result = -330497431;
        break;
        case 5:
        Result = -1836006237;
        break;
        case 6:
        Result = 869501081;
        break;
        case 7:
        Result = 632613980;
        break;
        case 8:
        Result = -301223260;
        break;
        case 9:
        Result = 1346668127;
        break;
        case 10:
        Result = 1574850459;
        break;
        case 11:
        Result = -1953289472;
        break;
        case 12:
        Result = 280474699;
        break;
        case 13:
        Result = -19263344;
        break;
        case 14:
        Result = 1844702918;
        break;
        case 15:
        Result = -881358690;
        break;
        case 16:
        Result = 492147228;
        break;
        case 17:
        Result = -302362397;
        break;
        case 18:
        Result = -1616890832;
        break;
        case 19:
        Result = 64730935;
        break;
        case 20:
        Result = 510389335;
        break;
        case 21:
        Result = 1543404628;
        break;
        case 22:
        Result = 1976502708;
        break;
    }
    return Result;
}

string sub_1514(unknown uParam0)
{
    unknown uVar3;

    if (sub_765( uParam0 ))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            return "M_Y_GJAM_LO_01_FULL_01";
            break;
            case 1:
            return "M_Y_GJAM_LO_02_FULL_01";
            break;
            case 2:
            return "M_M_GJAM_HI_01_FULL_01";
            break;
            case 3:
            return "M_M_GJAM_HI_02_FULL_01";
            break;
        }
    }
    else if (sub_627( uParam0 ))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            return "M_Y_GLOST_01_FULL_01";
            break;
            case 1:
            return "M_Y_GLOST_02_FULL_01";
            break;
            case 2:
            return "M_Y_GLOST_03_FULL_01";
            break;
            case 3:
            return "M_Y_GLOST_04_FULL_01";
            break;
            case 4:
            return "M_Y_GLOST_05_FULL_01";
            break;
            case 5:
            return "M_Y_GLOST_06_FULL_01";
            break;
        }
    }
    return "NULL";
}

void sub_2024()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U490._fU0[I] ))
        {
            DELETE_CHAR( ref l_U490._fU0[I] );
        }
        l_U490._fU12[I] = nil;
    }
    return;
}

void sub_2158()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U521 );
    if (IS_THREAD_ACTIVE( l_U520 ))
    {
        DESTROY_THREAD( l_U520 );
    }
    if (DOES_CHAR_EXIST( l_U502 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U502 );
    }
    sub_2242( 2, l_U517 );
    if (DOES_PICKUP_EXIST( l_U515 ))
    {
        REMOVE_PICKUP( l_U515 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2242(int iParam0, string sParam1)
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
                    sub_2463();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_2512(), 1 );
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

void sub_2463()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_2512()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2680()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2854(int iParam0)
{
    unknown uVar3;

    if (NOT g_U12303)
    {
        return 1;
    }
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_2898( iParam0 ))
    {
        return 0;
    }
    if (sub_2957( g_U26739._fU0 ))
    {
        if (NOT (sub_2989( g_U26739._fU0, iParam0 )))
        {
            return 0;
        }
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U26739._fU4)
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
    }
    if (g_U26739._fU32 <= 0)
    {
        return 0;
    }
    if (g_U26739._fU36[uVar3] > 0)
    {
        return 1;
    }
    return 0;
}

int sub_2898(int iParam0)
{
    if (iParam0 == 8)
    {
        if (g_U10999 == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2957(unknown uParam0)
{
    return 0;
}

int sub_2989(unknown uParam0, unknown uParam1)
{
    return 1;
}

void sub_3809(unknown uParam0)
{
    l_U485 = uParam0;
    l_U486 = 0;
    return;
}

int sub_4690()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    l_U503 = sub_4700( 1 );
    l_U504 = sub_4700( 6 );
    l_U505 = sub_4700( 7 );
    if (l_U503 == nil)
    {
        l_U503 = sub_5275( 0 );
    }
    if (l_U504 == nil)
    {
        l_U504 = sub_5275( 1 );
    }
    if (l_U505 == nil)
    {
        l_U505 = sub_5275( 2 );
    }
    if (DOES_CHAR_EXIST( l_U503 ))
    {
        if (NOT (sub_5481( sub_2680(), l_U503 )))
        {
            l_U503 = nil;
        }
    }
    if (DOES_CHAR_EXIST( l_U504 ))
    {
        if (NOT (sub_5481( sub_2680(), l_U504 )))
        {
            l_U504 = nil;
        }
    }
    if (DOES_CHAR_EXIST( l_U505 ))
    {
        if (NOT (sub_5481( sub_2680(), l_U505 )))
        {
            l_U505 = nil;
        }
    }
    if (NOT (DOES_CHAR_EXIST( l_U502 )))
    {
        if (((IS_CHAR_INJURED( l_U503 )) AND (IS_CHAR_INJURED( l_U504 ))) AND (IS_CHAR_INJURED( l_U505 )))
        {
            return 0;
        }
    }
    else if (IS_CHAR_INJURED( l_U502 ))
    {
        if (sub_627( l_U513 ))
        {
            g_U10486 = 1;
        }
        return 0;
    }
    else if (sub_627( l_U513 ))
    {
        if (IS_PLAYER_PLAYING( sub_2512() ))
        {
            if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U502, sub_2680(), 0 )) || (l_U512 > 3000.00000000))
            {
                g_U10486 = 1;
                return 0;
            }
        }
    };;;
    if (DOES_OBJECT_EXIST( l_U513 ))
    {
        GET_OBJECT_COORDINATES( l_U513, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (IS_PLAYER_PLAYING( sub_2512() ))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_2680(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    if (IS_PLAYER_PLAYING( sub_2512() ))
    {
        if ((IS_WANTED_LEVEL_GREATER( sub_2512(), 0 )) AND (NOT sub_6035()))
        {
            return 0;
        }
    }
    if (NOT sub_6118())
    {
        return 0;
    }
    if (TIMERA() < 1000)
    {
        return 0;
    }
    if (sub_2854( 6 ))
    {
        if (sub_6206( ref iVar5 ))
        {
            if (((iVar5 == 1) || (iVar5 == 6)) || (iVar5 == 7))
            {
                if (((NOT (DOES_CHAR_EXIST( l_U503 ))) AND (NOT (DOES_CHAR_EXIST( l_U504 )))) AND (NOT (DOES_CHAR_EXIST( l_U505 ))))
                {
                    return 0;
                }
            }
        }
    }
    else if (NOT g_U12303)
    {
        if (sub_6206( ref iVar5 ))
        {
            if (((NOT (iVar5 == 1)) AND (NOT (iVar5 == 6))) AND (NOT (iVar5 == 7)))
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( l_U502 )))
    {
        if (IS_PED_IN_COMBAT( l_U502 ))
        {
            if (sub_627( l_U513 ))
            {
                g_U10486 = 1;
            }
            return 0;
        }
    }
    if (sub_627( l_U513 ))
    {
        if (g_U10486)
        {
            return 0;
        }
    }
    return 1;
}

void sub_4700(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    int iVar5;
    int I;

    Result = nil;
    if (IS_PLAYER_PLAYING( sub_2512() ))
    {
        if (DOES_GROUP_EXIST( sub_4730() ))
        {
            GET_GROUP_SIZE( sub_4730(), ref uVar4, ref iVar5 );
            if (iVar5 > 0)
            {
                for ( I = 0; I < iVar5; I++ )
                {
                    GET_GROUP_MEMBER( sub_4730(), I, ref Result );
                    if (NOT (IS_CHAR_INJURED( Result )))
                    {
                        if (IS_CHAR_MODEL( Result, sub_4853( uParam0 ) ))
                        {
                            return Result;
                        }
                    }
                }
            }
        }
    }
    Result = nil;
    return Result;
}

void sub_4730()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_4853(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_5152( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5152(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_5275(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Get_Biker_Friend_Index: Minigame Biker Index out of range" );
        return nil;
    }
    return g_U38857[iParam0]._fU0;
}

int sub_5481(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( uParam1 ))))
    {
        if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_6035()
{
    if (DOES_SCRIPT_EXIST( "michelle1" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "michelle1" )) > 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_6118()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U20912)
    {
        return 0;
    }
    return 1;
}

int sub_6206(unknown uParam0)
{
    (uParam0^) = g_U26739._fU0;
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    return 1;
}

int sub_6488(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_2512() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_2512() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2512() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_6584())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_2680() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_6669())
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

int sub_6584()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_6669()
{
    return sub_6680( 0, 0 );
}

int sub_6680(boolean bParam0, unknown uParam1)
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

int sub_7238(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_6488( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_2512(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_7513();
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

void sub_7513()
{
    return sub_6680( 1, 1 );
}

int sub_8123()
{
    boolean bVar2;

    if (g_U12303)
    {
        if (NOT (sub_8143( 6 )))
        {
            return 0;
        }
    }
    if (NOT l_U478)
    {
        if (DOES_CHAR_EXIST( l_U502 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U502 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U502 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U502, sub_2680() );
                TASK_LOOK_AT_CHAR( l_U502, sub_2680(), 3000, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( sub_2680(), l_U502 );
            }
        }
    }
    else if (DOES_CHAR_EXIST( l_U502 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U502 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U502 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U502 );
    }
    if ((NOT (IS_CHAR_INJURED( sub_2680() ))) AND (NOT l_U478))
    {
        bVar2 = IS_AMBIENT_SPEECH_DISABLED( sub_2680() );
        if (bVar2)
        {
            STOP_PED_SPEAKING( sub_2680(), 1 );
        }
        SAY_AMBIENT_SPEECH( sub_2680(), "LETS_PLAY_POOL", 1, 1, 2 );
        if (bVar2)
        {
            STOP_PED_SPEAKING( sub_2680(), 1 );
        }
        l_U489 = 0;
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_2512(), 0 );
    REQUEST_SCRIPT( "pool_game" );
    return 1;
}

int sub_8143(int iParam0)
{
    unknown uVar3;

    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_2898( iParam0 ))
    {
        return 0;
    }
    if (sub_2957( g_U26739._fU0 ))
    {
        if (NOT (sub_2989( g_U26739._fU0, iParam0 )))
        {
            return 0;
        }
        g_U26739._fU8 = iParam0;
        g_U26739._fU84 = 0;
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U26739._fU4)
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
            if (g_U26739._fU36[uVar3] > 0)
            {
                g_U26739._fU36[uVar3]--;
            }
            g_U26739._fU84 = 0;
            return 1;
        }
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
        }
    }
    if (g_U26739._fU32 <= 0)
    {
        g_U26739._fU12 = iParam0;
        return 0;
    }
    if (g_U26739._fU36[uVar3] > 0)
    {
        g_U26739._fU8 = iParam0;
        g_U26739._fU36[uVar3]--;
        if (iParam0 == 8)
        {
            g_U26739._fU84 = 1;
        }
        return 1;
    }
    g_U26739._fU12 = iParam0;
    return 0;
}
