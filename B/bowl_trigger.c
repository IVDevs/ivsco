void main()
{
    l_U3 = {1.00000000, 1.00000000, 1.00000000};
    l_U12 = 1.00000000;
    l_U21 = 0;
    l_U22 = 0;
    l_U23 = 0;
    l_U24 = 0;
    l_U34 = 99;
    l_U35 = 0;
    l_U36 = 0;
    l_U48 = 0;
    l_U49 = 0;
    l_U50 = {0.00000000, 0.00000000, 0.00000000};
    l_U53 = {0.00000000, 0.00000000, 0.00000000};
    l_U56 = 0;
    l_U57 = 0;
    l_U64 = 0;
    l_U187 = 99;
    l_U189 = 99;
    l_U197 = 0;
    l_U204 = 0;
    l_U207 = 0;
    l_U208 = -1;
    l_U209 = {0.00000000, 0.00000000, 0.00000000};
    l_U212 = {0.00000000, 0.00000000, 0.00000000};
    l_U215 = 0;
    l_U216 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U219 = 1.00000000;
    l_U221 = 0;
    l_U222 = 0;
    l_U223 = 0;
    l_U224 = 0;
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    l_U229 = 0;
    l_U230 = {1.00000000, 0.00000000, 1.00000000};
    l_U233 = {-1.00000000, 0.00000000, -1.50000000};
    l_U236 = 0.50000000;
    l_U237 = 0.50000000;
    l_U238 = 0.50000000;
    l_U243 = 0;
    l_U244 = 0;
    l_U245 = 1;
    l_U246 = 3;
    l_U248 = 0;
    l_U249 = 1;
    l_U265 = 99;
    l_U266 = 0;
    ProtectedSet(l_U268, 10);
    l_U420 = {-0.50000000, 3.00000000, -1.00000000};
    l_U423 = {-0.50000000, 0.00000000, 0.00000000};
    l_U447 = {0.00000000, 0.00000000, 0.00000000};
    l_U459 = {0.00000000, 0.00000000, -0.13617400};
    l_U474 = {0.00000000, 0.00000000, 0.00000000};
    l_U477 = 0.00000000;
    l_U480 = 90.00000000;
    l_U481 = 1.00000000;
    l_U483 = 0.00000000;
    l_U484 = 0.50000000;
    l_U486 = 0;
    l_U487 = 0;
    l_U488 = 0;
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    l_U508 = 0;
    l_U509 = 1;
    l_U510 = 0;
    l_U511 = 0;
    l_U512 = 0;
    l_U513 = 0;
    l_U514 = 0;
    l_U515 = 0;
    l_U516 = 0;
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 0;
    l_U523 = 0;
    l_U524 = 0;
    l_U525 = 0;
    l_U526 = 0;
    l_U527 = 0;
    l_U528 = 0;
    l_U529 = 0;
    l_U530 = 0;
    l_U531 = 0;
    l_U532 = 0;
    l_U567 = 10;
    l_U569 = 1;
    l_U570 = 7;
    l_U571 = 3;
    l_U572 = 0;
    l_U573 = 0;
    l_U552[0] = l_U574;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_862();
    }
    while (true)
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U552[0] ))
        {
            if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U552[0] ))
            {
                GET_INTERIOR_AT_COORDS( 1188.08600000, -665.16560000, 15.53800000, ref l_U561 );
                GET_INTERIOR_AT_COORDS( -587.44020000, 66.77700000, 4.91530000, ref l_U562 );
                GET_INTERIOR_FROM_CHAR( sub_1413(), ref l_U563 );
                if (NOT (l_U563 == nil))
                {
                    if ((l_U563 == l_U562) || (l_U563 == l_U561))
                    {
                        if ((IS_CHAR_SHOOTING( sub_1413() )) || (IS_CHAR_IN_ANY_CAR( sub_1413() )))
                        {
                            if (DOES_CHAR_EXIST( l_U534[l_U248] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
                                {
                                    TASK_SMART_FLEE_CHAR( l_U534[l_U248], sub_1413(), 100.00000000, -1 );
                                }
                            }
                            if (sub_1616())
                            {
                                g_U9371 = 0;
                            }
                            l_U567 = 8;
                        }
                    }
                    if (sub_1616())
                    {
                        if (g_U9377 == 1)
                        {
                            g_U9371 = 0;
                            l_U567 = 8;
                        }
                    }
                }
                switch (l_U567)
                {
                    case 10:
                    if (DOES_OBJECT_EXIST( l_U552[0] ))
                    {
                        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BOWL_TRIGGER" )) <= g_U9370)
                        {
                            if ((LOCATE_OBJECT_3D( l_U552[0], 1188.67500000, -674.34700000, 16.04562000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_OBJECT_3D( l_U552[0], -577.89590000, 67.75747000, 4.41782500, 2.00000000, 2.00000000, 2.00000000, 0 )))
                            {
                                l_U567 = 4;
                            }
                            else
                            {
                                l_U567 = 1;
                            }
                        }
                        else
                        {
                            sub_862();
                        }
                    }
                    else
                    {
                        l_U567 = 8;
                    }
                    break;
                    case 4:
                    if (sub_1998())
                    {
                        if (NOT sub_1616())
                        {
                            l_U532 = sub_2064( ref l_U538 );
                            if (NOT l_U532)
                            {
                                if (DOES_OBJECT_EXIST( l_U552[0] ))
                                {
                                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.50000000, -0.30000000, 0.00000000, ref l_U465._fU0, ref l_U465._fU4, ref l_U465._fU8 );
                                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.50000000, -0.30000000, 0.00000000, ref l_U468._fU0, ref l_U468._fU4, ref l_U468._fU8 );
                                }
                                if (g_U9371)
                                {
                                    if (NOT (IS_THREAD_ACTIVE( l_U533 )))
                                    {
                                        if ((LOCATE_CHAR_ON_FOOT_3D( sub_1413(), l_U465._fU0, l_U465._fU4, l_U465._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_1413(), l_U468._fU0, l_U468._fU4, l_U468._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 )))
                                        {
                                            if (LOCATE_CHAR_ON_FOOT_3D( sub_1413(), l_U465._fU0, l_U465._fU4, l_U465._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 ))
                                            {
                                                g_U9375 = 1;
                                            }
                                            else
                                            {
                                                g_U9375 = 0;
                                            }
                                            if (NOT l_U524)
                                            {
                                                l_U524 = 1;
                                                REQUEST_SCRIPT( "TENPINBOWL" );
                                                l_U567 = 5;
                                                SET_PLAYER_CONTROL( sub_2515(), 0 );
                                            }
                                        }
                                        else
                                        {
                                            l_U524 = 0;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                GET_GROUP_SIZE( sub_2570(), ref l_U271, ref l_U272 );
                                if (l_U272 > 0)
                                {
                                    if (DOES_OBJECT_EXIST( l_U552[0] ))
                                    {
                                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.50000000, -0.30000000, 0.00000000, ref l_U465._fU0, ref l_U465._fU4, ref l_U465._fU8 );
                                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.50000000, -0.30000000, 0.00000000, ref l_U468._fU0, ref l_U468._fU4, ref l_U468._fU8 );
                                    }
                                    if (g_U9371)
                                    {
                                        if (NOT (IS_THREAD_ACTIVE( l_U533 )))
                                        {
                                            if ((LOCATE_CHAR_ON_FOOT_3D( sub_1413(), l_U465._fU0, l_U465._fU4, l_U465._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_1413(), l_U468._fU0, l_U468._fU4, l_U468._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 )))
                                            {
                                                if (LOCATE_CHAR_ON_FOOT_3D( sub_1413(), l_U465._fU0, l_U465._fU4, l_U465._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 ))
                                                {
                                                    g_U9375 = 1;
                                                }
                                                else
                                                {
                                                    g_U9375 = 0;
                                                }
                                                if (NOT l_U524)
                                                {
                                                    l_U524 = 1;
                                                    REQUEST_SCRIPT( "TENPINBOWL" );
                                                    l_U567 = 5;
                                                    SET_PLAYER_CONTROL( sub_2515(), 0 );
                                                }
                                            }
                                            else
                                            {
                                                l_U524 = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (g_U64576 == 1)
                        {
                            if (DOES_OBJECT_EXIST( l_U552[0] ))
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.50000000, -0.30000000, 0.00000000, ref l_U465._fU0, ref l_U465._fU4, ref l_U465._fU8 );
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.50000000, -0.30000000, 0.00000000, ref l_U468._fU0, ref l_U468._fU4, ref l_U468._fU8 );
                            }
                            if (g_U9371)
                            {
                                if (NOT (IS_THREAD_ACTIVE( l_U533 )))
                                {
                                    if ((LOCATE_CHAR_ON_FOOT_3D( sub_1413(), l_U465._fU0, l_U465._fU4, l_U465._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_1413(), l_U468._fU0, l_U468._fU4, l_U468._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 )))
                                    {
                                        if (LOCATE_CHAR_ON_FOOT_3D( sub_1413(), l_U465._fU0, l_U465._fU4, l_U465._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 ))
                                        {
                                            g_U9375 = 1;
                                        }
                                        else
                                        {
                                            g_U9375 = 0;
                                        }
                                        if (NOT l_U524)
                                        {
                                            l_U524 = 1;
                                            REQUEST_SCRIPT( "TENPINBOWL" );
                                            l_U567 = 5;
                                            SET_PLAYER_CONTROL( sub_2515(), 0 );
                                        }
                                    }
                                    else
                                    {
                                        l_U524 = 0;
                                    }
                                }
                            }
                        }
                    }
                    break;
                    case 5:
                    if (HAS_SCRIPT_LOADED( "TENPINBOWL" ))
                    {
                        l_U567 = 6;
                    }
                    break;
                    case 6:
                    if (DOES_OBJECT_EXIST( l_U552[0] ))
                    {
                        l_U568._fU0 = l_U552[0];
                    }
                    l_U533 = START_NEW_SCRIPT_WITH_ARGS( "TENPINBOWL", ref l_U568, 1, 8192 );
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "TENPINBOWL" );
                    l_U567 = 11;
                    g_U9371 = 0;
                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U539 );
                    if (NOT (IS_CAR_DEAD( l_U539 )))
                    {
                        if ((IS_CAR_IN_AREA_3D( l_U539, 1168.07700000, -651.59450000, 15.00000000, 1196.95000000, -677.57710000, 18.00000000, 0 )) || (IS_CAR_IN_AREA_3D( l_U539, -574.80860000, 75.52550000, 3.00000000, -600.64850000, 47.15890000, 7.00000000, 0 )))
                        {
                            if (IS_CHAR_IN_AREA_3D( sub_1413(), 1207.53200000, -682.76390000, 0.00000000, 1155.52700000, -648.43470000, 50.00000000, 0 ))
                            {
                                SET_CAR_COORDINATES( l_U539, 1100.00000000, -683.20610000, 15.44040000 );
                                CLEAR_ANGLED_AREA_OF_CARS( 1196.32500000, -677.57700000, 15.00000000, 1196.25200000, -652.03240000, 19.00000000, 30.00000000 );
                                SET_CAR_COORDINATES( l_U539, 1199.22400000, -684.70870000, 15.44000000 );
                                SET_CAR_HEADING( l_U539, 272.34540000 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U539 );
                                APPLY_FORCE_TO_CAR( l_U539, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                            }
                            if (IS_CHAR_IN_AREA_3D( sub_1413(), -565.69760000, 57.63290000, 0.00000000, -604.69950000, 84.37870000, 50.00000000, 0 ))
                            {
                                SET_CAR_COORDINATES( l_U539, -499.24330000, 89.53830000, 6.86600000 );
                                CLEAR_ANGLED_AREA_OF_CARS( -574.66690000, 75.47580000, 7.00000000, -600.32470000, 75.47580000, 3.00000000, 30.00000000 );
                                GET_CLOSEST_CAR_NODE_WITH_HEADING( l_U465._fU0, l_U465._fU4, l_U465._fU8, ref l_U273._fU0, ref l_U273._fU4, ref l_U273._fU8, ref l_U478 );
                                SET_CAR_COORDINATES( l_U539, l_U273._fU0, l_U273._fU4, l_U273._fU8 );
                                SET_CAR_HEADING( l_U539, l_U478 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U539 );
                                APPLY_FORCE_TO_CAR( l_U539, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                            }
                        }
                        else if (IS_CHAR_IN_AREA_3D( sub_1413(), 1207.53200000, -682.76390000, 0.00000000, 1155.52700000, -648.43470000, 50.00000000, 0 ))
                        {
                            CLEAR_ANGLED_AREA_OF_CARS( 1196.32500000, -677.57700000, 15.00000000, 1196.25200000, -652.03240000, 19.00000000, 30.00000000 );
                        }
                        if (IS_CHAR_IN_AREA_3D( sub_1413(), -565.69760000, 57.63290000, 0.00000000, -604.69950000, 84.37870000, 50.00000000, 0 ))
                        {
                            CLEAR_ANGLED_AREA_OF_CARS( -574.66690000, 75.47580000, 7.00000000, -600.32470000, 75.47580000, 3.00000000, 30.00000000 );
                        }
                    }
                    else if (IS_CHAR_IN_AREA_3D( sub_1413(), 1207.53200000, -682.76390000, 0.00000000, 1155.52700000, -648.43470000, 50.00000000, 0 ))
                    {
                        CLEAR_ANGLED_AREA_OF_CARS( 1196.32500000, -677.57700000, 15.00000000, 1196.25200000, -652.03240000, 19.00000000, 30.00000000 );
                    }
                    if (IS_CHAR_IN_AREA_3D( sub_1413(), -565.69760000, 57.63290000, 0.00000000, -604.69950000, 84.37870000, 50.00000000, 0 ))
                    {
                        CLEAR_ANGLED_AREA_OF_CARS( -574.66690000, 75.47580000, 7.00000000, -600.32470000, 75.47580000, 3.00000000, 30.00000000 );
                    }
                    if (IS_CHAR_IN_AREA_3D( sub_1413(), 1207.53200000, -682.76390000, 0.00000000, 1155.52700000, -648.43470000, 50.00000000, 0 ))
                    {
                        CLEAR_AREA_OF_CHARS( 1175.73000000, -664.71000000, 15.59000000, 15.00000000 );
                    }
                    if (IS_CHAR_IN_AREA_3D( sub_1413(), -565.69760000, 57.63290000, 0.00000000, -604.69950000, 84.37870000, 50.00000000, 0 ))
                    {
                        CLEAR_AREA_OF_CHARS( -587.50000000, 54.80000000, 3.90000000, 15.00000000 );
                    }
                    break;
                    case 11:
                    if (NOT (IS_THREAD_ACTIVE( l_U533 )))
                    {
                        l_U567 = 4;
                    }
                    break;
                    case 1:
                    sub_4825();
                    sub_5040();
                    sub_5093();
                    sub_6877();
                    sub_8712();
                    sub_8987();
                    sub_9288();
                    REGISTER_SCRIPT_WITH_AUDIO( 0 );
                    l_U567 = 2;
                    break;
                    case 2:
                    if (sub_9495())
                    {
                        if (NOT (DOES_CHAR_EXIST( l_U534[l_U248] )))
                        {
                            if (l_U560 == 1586287288)
                            {
                                CREATE_CHAR( 5, l_U560, l_U309._fU0, l_U309._fU4, l_U309._fU8, ref l_U534[l_U248], 1 );
                            }
                            else
                            {
                                CREATE_CHAR( 4, l_U560, l_U309._fU0, l_U309._fU4, l_U309._fU8, ref l_U534[l_U248], 1 );
                            }
                            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U534[l_U248] );
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U534[l_U248], "Bowl_GtaMloRoom" );
                            SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U534[l_U248], 1 );
                        }
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -890350484 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -1776787973 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U560 );
                        l_U567 = 3;
                    }
                    break;
                    case 3:
                    if (l_U520)
                    {
                        sub_10150();
                    }
                    sub_12385();
                    sub_15420();
                    if (DOES_CHAR_EXIST( l_U534[l_U248] ))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U534[l_U248], sub_1413(), 0 ))
                        {
                            l_U567 = 8;
                        }
                    }
                    break;
                    case 8:
                    if (l_U520)
                    {
                        sub_10150();
                    }
                    sub_12385();
                    if (DOES_CHAR_EXIST( l_U534[l_U248] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
                        {
                            FREEZE_CHAR_POSITION( l_U534[l_U248], 0 );
                            DETACH_PED( l_U534[l_U248], 1 );
                            if (DOES_OBJECT_EXIST( l_U540[0] ))
                            {
                                DETACH_OBJECT( l_U540[0], 1 );
                            }
                            CLEAR_CHAR_TASKS( l_U534[l_U248] );
                        }
                        else if (DOES_OBJECT_EXIST( l_U540[0] ))
                        {
                            DETACH_OBJECT( l_U540[0], 1 );
                        }
                    }
                    if (l_U508)
                    {
                        if (NOT l_U521)
                        {
                            sub_862();
                        }
                    }
                    break;
                }
            }
            else
            {
                sub_862();
            }
        }
        else
        {
            sub_862();
        }
    }
    return;
}

void sub_862()
{
    int I;

    if (DOES_CHAR_EXIST( l_U534[l_U248] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
        {
            CLEAR_CHAR_TASKS( l_U534[l_U248] );
            DETACH_PED( l_U534[l_U248], 1 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U540[0] ))
    {
        DETACH_OBJECT( l_U540[0], 1 );
        DELETE_OBJECT( ref l_U540[0] );
    }
    for ( I = 0; I <= 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U540[I] ))
        {
            if (IS_OBJECT_ATTACHED( l_U540[I] ))
            {
                DETACH_OBJECT( l_U540[I], 1 );
                DELETE_OBJECT( ref l_U540[I] );
            }
            else
            {
                DELETE_OBJECT( ref l_U540[I] );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U559 ))
    {
        DELETE_OBJECT( ref l_U559 );
    }
    if (DOES_OBJECT_EXIST( l_U552[1] ))
    {
        DELETE_OBJECT( ref l_U552[1] );
    }
    if (DOES_OBJECT_EXIST( l_U552[2] ))
    {
        DELETE_OBJECT( ref l_U552[2] );
    }
    if (DOES_OBJECT_EXIST( l_U552[3] ))
    {
        DELETE_OBJECT( ref l_U552[3] );
    }
    if (DOES_OBJECT_EXIST( l_U552[5] ))
    {
        DELETE_OBJECT( ref l_U552[5] );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1413()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1616()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Michelle1" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

int sub_1998()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

int sub_2064(unknown uParam0)
{
    (uParam0^) = g_U32898._fU0;
    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    return 1;
}

void sub_2515()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2570()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4825()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar2 );
    if (iVar2 < 15)
    {
        l_U560 = -1746153269;
    }
    else if ((iVar2 >= 15) AND (iVar2 < 30))
    {
        l_U560 = -1420592428;
    }
    else if ((iVar2 >= 30) AND (iVar2 < 45))
    {
        l_U560 = -1927496394;
    }
    else if ((iVar2 >= 45) AND (iVar2 < 60))
    {
        l_U560 = 1586287288;
    }
    else if ((iVar2 >= 60) AND (iVar2 < 75))
    {
        l_U560 = -799229885;
    }
    else if (iVar2 >= 75)
    {
        l_U560 = -434183225;
    }
    else
    {
        l_U560 = -434183225;
    };;;;;;
    return;
}

void sub_5040()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref iVar2 );
    if (iVar2 > 5)
    {
        l_U510 = 1;
    }
    else
    {
        l_U510 = 0;
    }
    return;
}

void sub_5093()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    fVar5 = 11.77329000;
    fVar6 = 0.01501500;
    fVar7 = 0.39075600;
    if (DOES_OBJECT_EXIST( l_U552[0] ))
    {
        GET_OBJECT_COORDINATES( l_U552[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U479 );
        GET_OBJECT_HEADING( l_U552[0], ref l_U480 );
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.10000000 - fVar6, -3.00000000, 0.00000000, ref l_U309._fU0, ref l_U309._fU4, ref l_U309._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 2.80000000, 0.00000000, 0.00000000, ref l_U309._fU0, ref l_U309._fU4, ref l_U309._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.10000000 - fVar6), -3.00000000, 0.00000000, ref l_U309._fU0, ref l_U309._fU4, ref l_U309._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -2.80000000, 0.00000000, 0.00000000, ref l_U309._fU0, ref l_U309._fU4, ref l_U309._fU8 );
        }
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.10000000 - fVar6, -12.28800000 + fVar5, 0.30000000 - fVar7, ref l_U276._fU0, ref l_U276._fU4, ref l_U276._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.20000000 - fVar6), -12.28800000 + fVar5, 0.30000000 - fVar7, ref l_U276._fU0, ref l_U276._fU4, ref l_U276._fU8 );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 0.00000000, 0.40000000, -0.35000000, ref l_U279._fU0, ref l_U279._fU4, ref l_U279._fU8 );
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.56700000, -15.08800000 + fVar5, 2.00000000 - fVar7, ref l_U282._fU0, ref l_U282._fU4, ref l_U282._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.56700000, -15.08800000 + fVar5, 2.00000000 - fVar7, ref l_U282._fU0, ref l_U282._fU4, ref l_U282._fU8 );
        }
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 0.40000000 + fVar6, -12.28800000 + fVar5, 0.00000000 - fVar7, ref l_U285._fU0, ref l_U285._fU4, ref l_U285._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (2.00000000 + fVar6), -12.28800000 + fVar5, 0.00000000 - fVar7, ref l_U285._fU0, ref l_U285._fU4, ref l_U285._fU8 );
        }
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 2.00000000 + fVar6, -12.28800000 + fVar5, 0.00000000 - fVar7, ref l_U288._fU0, ref l_U288._fU4, ref l_U288._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (0.40000000 + fVar6), -12.28800000 + fVar5, 0.00000000 - fVar7, ref l_U288._fU0, ref l_U288._fU4, ref l_U288._fU8 );
        }
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.56700000, 0.00000000, 0.00000000, ref l_U291._fU0, ref l_U291._fU4, ref l_U291._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.56700000, 0.00000000, 0.00000000, ref l_U291._fU0, ref l_U291._fU4, ref l_U291._fU8 );
        }
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.56700000, 9.50200000 + fVar5, 0.79700000 - fVar7, ref l_U294._fU0, ref l_U294._fU4, ref l_U294._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.56700000, 9.50200000 + fVar5, 0.79700000 - fVar7, ref l_U294._fU0, ref l_U294._fU4, ref l_U294._fU8 );
        }
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.56700000, 9.64200000 + fVar5, 0.79700000 - fVar7, ref l_U297._fU0, ref l_U297._fU4, ref l_U297._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.56700000, 9.64200000 + fVar5, 0.79700000 - fVar7, ref l_U297._fU0, ref l_U297._fU4, ref l_U297._fU8 );
        }
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.56700000, 11.34200000 + fVar5, 0.79700000 - fVar7, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.56700000, 11.34200000 + fVar5, 0.79700000 - fVar7, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
        }
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.56700000, -12.08800000 + fVar5, 1.50000000 - fVar7, ref l_U303._fU0, ref l_U303._fU4, ref l_U303._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.75000000 + fVar6), -12.08800000 + fVar5, 1.50000000 - fVar7, ref l_U303._fU0, ref l_U303._fU4, ref l_U303._fU8 );
        }
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.56700000, 21.40000000, -0.10000000, ref l_U306._fU0, ref l_U306._fU4, ref l_U306._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.56700000, 21.40000000, -0.10000000, ref l_U306._fU0, ref l_U306._fU4, ref l_U306._fU8 );
        }
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.56700000, -1.00000000, 2.00000000, ref l_U471._fU0, ref l_U471._fU4, ref l_U471._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.56700000, -1.00000000, 2.00000000, ref l_U471._fU0, ref l_U471._fU4, ref l_U471._fU8 );
        }
    }
    return;
}

void sub_6877()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    fVar5 = 0.18288000;
    fVar6 = 0.31670000;
    fVar7 = 11.77329000;
    fVar8 = 0.01501500;
    fVar9 = 0.39075600;
    if (DOES_OBJECT_EXIST( l_U552[0] ))
    {
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.58200000 + fVar8, 9.09800000 + fVar7, 0.00000000 - fVar9, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.58200000 + fVar8), 9.09800000 + fVar7, 0.00000000 - fVar9, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U346 = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.58200000 + fVar8, -12.28800000 + fVar7, 0.00000000 - fVar9, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.58200000 + fVar8), -12.28800000 + fVar7, 0.00000000 - fVar9, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U349[1] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.58200000 - fVar5, -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.58200000 + fVar5), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U349[2] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.58200000 + fVar5, -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.58200000 - fVar5), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U349[3] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.58200000 - (fVar5 * 2.00000000), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.58200000 + (fVar5 * 2.00000000)), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U349[4] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.58200000, -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * 1.58200000, -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U349[5] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.58200000 + (fVar5 * 2.00000000), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.58200000 - (fVar5 * 2.00000000)), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U349[6] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.58200000 - (fVar5 * 3.00000000), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.58200000 + (fVar5 * 3.00000000)), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U349[7] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.58200000 - fVar5, -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.58200000 + fVar5), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U349[8] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.58200000 + fVar5, -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.58200000 - fVar5), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U349[9] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U510)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 1.58200000 + (fVar5 * 3.00000000), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -1.00000000 * (1.58200000 - (fVar5 * 3.00000000)), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U349[10] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
    }
    l_U312[1] = {0.00000000, -fVar6, 0.00000000};
    l_U312[2] = {-fVar5, 0.00000000, 0.00000000};
    l_U312[3] = {fVar5, 0.00000000, 0.00000000};
    l_U312[4] = {-2 * fVar5, fVar6, 0.00000000};
    l_U312[5] = {0.00000000, fVar6, 0.00000000};
    l_U312[6] = {2 * fVar5, fVar6, 0.00000000};
    l_U312[7] = {-3 * fVar5, 2 * fVar6, 0.00000000};
    l_U312[8] = {-fVar5, 2 * fVar6, 0.00000000};
    l_U312[9] = {fVar5, 2 * fVar6, 0.00000000};
    l_U312[10] = {3 * fVar5, 2 * fVar6, 0.00000000};
    return;
}

void sub_8712()
{
    CREATE_OBJECT( -890350484, l_U294._fU0, l_U294._fU4, l_U294._fU8, ref l_U552[1], 1 );
    CREATE_OBJECT( -1776787973, l_U297._fU0, l_U297._fU4, l_U297._fU8 - 0.30000000, ref l_U552[2], 1 );
    SET_OBJECT_HEADING( l_U552[1], l_U480 );
    SET_OBJECT_HEADING( l_U552[2], l_U480 );
    SET_OBJECT_COLLISION( l_U552[1], 0 );
    SET_OBJECT_COLLISION( l_U552[2], 1 );
    FREEZE_OBJECT_POSITION( l_U552[1], 1 );
    FREEZE_OBJECT_POSITION( l_U552[2], 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U552[1], "Bowl_GtaMloRoom" );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U552[2], "Bowl_GtaMloRoom" );
    return;
}

void sub_8987()
{
    CREATE_OBJECT( -190707996, l_U303._fU0, l_U303._fU4, l_U303._fU8, ref l_U552[3], 1 );
    SET_OBJECT_HEADING( l_U552[3], l_U480 );
    SET_OBJECT_COLLISION( l_U552[3], 0 );
    SET_OBJECT_VISIBLE( l_U552[3], 0 );
    FREEZE_OBJECT_POSITION( l_U552[3], 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U552[3], "Bowl_GtaMloRoom" );
    CREATE_OBJECT( -190707996, l_U303._fU0, l_U303._fU4, l_U303._fU8, ref l_U552[5], 1 );
    SET_OBJECT_HEADING( l_U552[5], l_U480 );
    SET_OBJECT_COLLISION( l_U552[5], 0 );
    SET_OBJECT_VISIBLE( l_U552[5], 0 );
    FREEZE_OBJECT_POSITION( l_U552[5], 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U552[5], "Bowl_GtaMloRoom" );
    return;
}

void sub_9288()
{
    CLEAR_AREA( l_U471._fU0, l_U471._fU4, l_U471._fU8, 0.50000000, 0 );
    CREATE_OBJECT( -190707996, l_U471._fU0, l_U471._fU4, l_U471._fU8, ref l_U559, 1 );
    SET_OBJECT_HEADING( l_U559, l_U480 );
    SET_OBJECT_COLLISION( l_U559, 0 );
    SET_OBJECT_DYNAMIC( l_U559, 0 );
    SET_OBJECT_VISIBLE( l_U559, 0 );
    FREEZE_OBJECT_POSITION( l_U559, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U559, "Bowl_GtaMloRoom" );
    return;
}

int sub_9495()
{
    REQUEST_MODEL( -190707996 );
    REQUEST_MODEL( -1862626618 );
    REQUEST_MODEL( -890350484 );
    REQUEST_MODEL( -1776787973 );
    REQUEST_MODEL( l_U560 );
    REQUEST_ANIMS( "MINI_BOWLING" );
    if (((((((HAS_MODEL_LOADED( l_U560 )) AND (HAS_MODEL_LOADED( -1862626618 ))) AND (HAS_MODEL_LOADED( -190707996 ))) AND (HAS_MODEL_LOADED( -890350484 ))) AND (HAS_MODEL_LOADED( -1776787973 ))) AND (HAVE_ANIMS_LOADED( "MINI_BOWLING" ))) AND (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT/BOWLING_ALLEY" )))
    {
        l_U251 = GET_SOUND_ID();
        l_U252 = GET_SOUND_ID();
        l_U253 = GET_SOUND_ID();
        l_U254 = GET_SOUND_ID();
        l_U255 = GET_SOUND_ID();
        l_U256 = GET_SOUND_ID();
        l_U257 = GET_SOUND_ID();
        l_U258 = GET_SOUND_ID();
        l_U259 = GET_SOUND_ID();
        l_U260 = GET_SOUND_ID();
        l_U261 = GET_SOUND_ID();
        l_U262 = GET_SOUND_ID();
        return 1;
    }
    return 0;
}

void sub_10150()
{
    vector vVar2;
    vector vVar5;

    vVar2 = {0.00000000, 0.40000000, -0.03500000};
    vVar5 = {0.00000000, -0.23000000, 0.11000000};
    switch (l_U572)
    {
        case 0:
        sub_10273();
        l_U518 = 0;
        l_U447 = {0.00000000, 0.00000000, -90.00000000};
        if (DOES_OBJECT_EXIST( l_U552[0] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], vVar2.x, vVar2.y, vVar2.z, ref l_U444._fU0, ref l_U444._fU4, ref l_U444._fU8 );
        }
        l_U572 = 2;
        break;
        case 2:
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            l_U521 = 1;
            if (SLIDE_OBJECT( l_U540[0], l_U444._fU0, l_U444._fU4, l_U444._fU8, 0.04000000, 0.04000000, 0.03500000, 0 ))
            {
                if (sub_10682())
                {
                    PLAY_SOUND_FROM_OBJECT( l_U251, "BOWLING_ALLEY_BALL_RETURN", l_U540[0] );
                }
                FREEZE_OBJECT_POSITION( l_U540[0], 1 );
                l_U572 = 3;
            }
        }
        break;
        case 3:
        if (DOES_OBJECT_EXIST( l_U552[0] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], vVar5.x, vVar5.y, vVar5.z, ref l_U444._fU0, ref l_U444._fU4, ref l_U444._fU8 );
        }
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            GET_OBJECT_COORDINATES( l_U540[0], ref l_U453._fU0, ref l_U453._fU4, ref l_U453._fU8 );
        }
        l_U519 = 0;
        l_U572 = 1;
        break;
        case 1:
        sub_11137();
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            if (SLIDE_OBJECT( l_U540[0], l_U444._fU0, l_U444._fU4, l_U444._fU8, 0.03200000, 0.03200000, 0.02300000, 0 ))
            {
                if (DOES_OBJECT_EXIST( l_U552[0] ))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 0.00000000, -0.27000000, 0.10000000, ref l_U444._fU0, ref l_U444._fU4, ref l_U444._fU8 );
                }
                l_U572 = 4;
            }
        }
        break;
        case 4:
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            if (SLIDE_OBJECT( l_U540[0], l_U444._fU0, l_U444._fU4, l_U444._fU8, 0.03200000, 0.03200000, 0.04600000, 0 ))
            {
                if (DOES_OBJECT_EXIST( l_U552[0] ))
                {
                    if (l_U510)
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 0.20000000, -0.27000000, 0.10000000, ref l_U444._fU0, ref l_U444._fU4, ref l_U444._fU8 );
                    }
                    else
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -0.20000000, -0.27000000, 0.10000000, ref l_U444._fU0, ref l_U444._fU4, ref l_U444._fU8 );
                    }
                }
                l_U572 = 5;
                l_U483 = 0.00000000;
                GET_OBJECT_COORDINATES( l_U540[0], ref l_U453._fU0, ref l_U453._fU4, ref l_U453._fU8 );
                l_U519 = 0;
            }
        }
        break;
        case 5:
        sub_11137();
        if (l_U483 < 0.03200000)
        {
            l_U483 += 0.00100000;
        }
        else
        {
            l_U483 = 0.03200000;
        }
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            if (SLIDE_OBJECT( l_U540[0], l_U444._fU0, l_U444._fU4, l_U444._fU8, l_U483, l_U483, 0.00000000, 0 ))
            {
                if (DOES_OBJECT_EXIST( l_U552[0] ))
                {
                    if (l_U510)
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], 0.20000000, -0.55000000, 0.10000000, ref l_U444._fU0, ref l_U444._fU4, ref l_U444._fU8 );
                    }
                    else
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[0], -0.20000000, -0.55000000, 0.10000000, ref l_U444._fU0, ref l_U444._fU4, ref l_U444._fU8 );
                    }
                }
                GET_OBJECT_COORDINATES( l_U540[0], ref l_U453._fU0, ref l_U453._fU4, ref l_U453._fU8 );
                l_U519 = 0;
                l_U572 = 6;
            }
        }
        break;
        case 6:
        sub_11137();
        if (l_U483 > 0.01000000)
        {
            l_U483 -= 0.00100000;
        }
        else
        {
            l_U483 = 0.01000000;
        }
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            if (SLIDE_OBJECT( l_U540[0], l_U444._fU0, l_U444._fU4, l_U444._fU8, l_U483, l_U483, 0.00000000, 0 ))
            {
                l_U572 = 7;
                l_U518 = 1;
                l_U521 = 0;
            }
        }
        break;
        case 7:
        l_U520 = 0;
        l_U572 = 0;
        break;
    }
    return;
}

void sub_10273()
{
    vector vVar2;
    vector vVar5;

    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    vVar5 = {0.00000000, 0.00000000, 0.00000000};
    if (NOT (DOES_OBJECT_EXIST( l_U540[0] )))
    {
        CREATE_OBJECT_NO_OFFSET( -1862626618, l_U279._fU0, l_U279._fU4, l_U279._fU8, ref l_U540[0], 1 );
        SET_OBJECT_PHYSICS_PARAMS( l_U540[0], 7.27000000, -1.00000000, vVar2, vVar5, -1082130432, -1082130432 );
        SET_OBJECT_COLLISION( l_U540[0], 0 );
        FREEZE_OBJECT_POSITION( l_U540[0], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U540[0], "Bowl_GtaMloRoom" );
    }
    return;
}

int sub_10682()
{
    GET_INTERIOR_AT_COORDS( 1188.08600000, -665.16560000, 15.53800000, ref l_U561 );
    GET_INTERIOR_AT_COORDS( -587.44020000, 66.77700000, 4.91530000, ref l_U562 );
    GET_INTERIOR_FROM_CHAR( sub_1413(), ref l_U563 );
    if (NOT (l_U563 == nil))
    {
        if ((l_U563 == l_U562) || (l_U563 == l_U561))
        {
            return 1;
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1413(), 1198.75000000, -678.62000000, 16.45000000, 7.00000000, 7.00000000, 7.00000000, 0 ))
    {
        return 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1413(), -573.66000000, 77.74000000, 4.82000000, 7.00000000, 7.00000000, 7.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_11137()
{
    float fVar2;
    float fVar3;
    unknown uVar4;

    if (NOT l_U519)
    {
        l_U450._fU0 = l_U453._fU0 - l_U444._fU0;
        l_U450._fU4 = l_U453._fU4 - l_U444._fU4;
        fVar2 = l_U450._fU0 * l_U450._fU0;
        fVar3 = fVar2 + fVar2;
        uVar4 = SQRT( fVar3 );
        if (l_U450._fU0 != 0.00000000)
        {
            l_U450._fU0 /= uVar4;
        }
        else
        {
            l_U450._fU0 = 0.00000000;
        }
        if (l_U450._fU4 != 0)
        {
            l_U450._fU4 /= uVar4;
        }
        else
        {
            l_U450._fU4 = 0.00000000;
        }
        l_U519 = 1;
    }
    else
    {
        l_U447._fU0 += l_U450._fU0 * 15.60000000;
        l_U447._fU4 += l_U450._fU4 * 15.60000000;
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            SET_OBJECT_ROTATION( l_U540[0], l_U447._fU0, l_U447._fU4, -90.00000000 );
        }
    }
    return;
}

void sub_12385()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    vector vVar13;
    float fVar16;
    float fVar17;
    float fVar18;

    I = 0;
    vVar13 = {0.00000000, 0.00000000, 0.00000000};
    fVar16 = 0.03000000;
    fVar17 = 0.05000000;
    fVar18 = 0.79700000;
    switch (l_U570)
    {
        case 7:
        if (NOT l_U508)
        {
            if (l_U509)
            {
                l_U570 = 8;
                l_U250 = 1;
            }
            else
            {
                l_U250 = 2;
                l_U570 = 0;
            }
        }
        break;
        case 8:
        if (uVar9._fU8 != (l_U297._fU8 - fVar18))
        {
            if (DOES_OBJECT_EXIST( l_U552[2] ))
            {
                GET_OBJECT_COORDINATES( l_U552[2], ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                SET_OBJECT_COORDINATES( l_U552[2], uVar9._fU0, uVar9._fU4, uVar9._fU8 - fVar16 );
                if (uVar9._fU8 < (l_U297._fU8 - fVar18))
                {
                    SET_OBJECT_COORDINATES( l_U552[2], uVar9._fU0, uVar9._fU4, l_U297._fU8 - fVar18 );
                    l_U570 = 2;
                }
                uVar9._fU8 = l_U297._fU8 - fVar18;
            }
        }
        break;
        case 0:
        if (uVar9._fU8 != (l_U297._fU8 - fVar18))
        {
            if (DOES_OBJECT_EXIST( l_U552[2] ))
            {
                GET_OBJECT_COORDINATES( l_U552[2], ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                SET_OBJECT_COORDINATES( l_U552[2], uVar9._fU0, uVar9._fU4, uVar9._fU8 - fVar16 );
                if (uVar9._fU8 < (l_U297._fU8 - fVar18))
                {
                    SET_OBJECT_COORDINATES( l_U552[2], uVar9._fU0, uVar9._fU4, l_U297._fU8 - fVar18 );
                }
                uVar9._fU8 = l_U297._fU8 - fVar18;
                if (sub_10682())
                {
                    PLAY_SOUND_FROM_OBJECT( l_U254, "BOWLING_ALLEY_MACHINE_DESCEND", l_U552[2] );
                }
            }
        }
        if (uVar9._fU8 == (l_U297._fU8 - fVar18))
        {
            if (DOES_OBJECT_EXIST( l_U552[1] ))
            {
                GET_OBJECT_COORDINATES( l_U552[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                SET_OBJECT_COORDINATES( l_U552[1], uVar3._fU0, uVar3._fU4, uVar3._fU8 - fVar16 );
                if (uVar3._fU8 < (l_U294._fU8 - 0.79700000))
                {
                    SET_OBJECT_COORDINATES( l_U552[1], uVar3._fU0, uVar3._fU4, l_U294._fU8 - 0.79700000 );
                    for ( I = 1; I <= 10; I++ )
                    {
                        if (l_U496[I])
                        {
                            if (DOES_OBJECT_EXIST( l_U540[I] ))
                            {
                                ATTACH_OBJECT_TO_OBJECT( l_U540[I], l_U552[1], 0, l_U312[I], vVar13 );
                            }
                        }
                    }
                    l_U570 = 1;
                }
            }
        }
        break;
        case 1:
        if (DOES_OBJECT_EXIST( l_U552[1] ))
        {
            GET_OBJECT_COORDINATES( l_U552[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            SET_OBJECT_COORDINATES( l_U552[1], uVar3._fU0, uVar3._fU4, uVar3._fU8 + fVar16 );
            if (uVar3._fU8 > l_U294._fU8)
            {
                SET_OBJECT_COORDINATES( l_U552[1], uVar3._fU0, uVar3._fU4, l_U294._fU8 );
                l_U570 = 2;
            }
        }
        if (DOES_OBJECT_EXIST( l_U552[2] ))
        {
            if (sub_10682())
            {
                PLAY_SOUND_FROM_OBJECT( l_U255, "BOWLING_ALLEY_MACHINE_RAISE_PINS", l_U552[2] );
            }
        }
        break;
        case 2:
        if (DOES_OBJECT_EXIST( l_U552[2] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[2], 0.00000000, fVar17, 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
            SET_OBJECT_COORDINATES( l_U552[2], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            if (sub_10682())
            {
                PLAY_SOUND_FROM_OBJECT( l_U256, "BOWLING_ALLEY_MACHINE_SWEEP_PINS", l_U552[2] );
            }
        }
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar9._fU0, uVar9._fU4, l_U300._fU0, l_U300._fU4, ref fVar12 );
        for ( I = 1; I <= 10; I++ )
        {
            if (DOES_OBJECT_EXIST( l_U540[I] ))
            {
                SET_OBJECT_DYNAMIC( l_U540[I], 1 );
            }
        }
        if (fVar12 < 0.04000000)
        {
            for ( I = 1; I <= 10; I++ )
            {
                if (DOES_OBJECT_EXIST( l_U540[I] ))
                {
                    SET_OBJECT_DYNAMIC( l_U540[I], 0 );
                }
            }
            l_U570 = 5;
        }
        break;
        case 5:
        if (DOES_OBJECT_EXIST( l_U552[2] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[2], 0.00000000, fVar17 * -1.00000000, 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
            SET_OBJECT_COORDINATES( l_U552[2], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            if (sub_10682())
            {
                PLAY_SOUND_FROM_OBJECT( l_U257, "BOWLING_ALLEY_MACHINE_SWEEP_PINS_RETURN", l_U552[2] );
            }
        }
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar9._fU0, uVar9._fU4, l_U297._fU0, l_U297._fU4, ref fVar12 );
        if (fVar12 < 0.04000000)
        {
            if (DOES_OBJECT_EXIST( l_U552[2] ))
            {
                SET_OBJECT_COORDINATES( l_U552[2], l_U297._fU0, l_U297._fU4, l_U297._fU8 - fVar18 );
            }
            l_U570 = 3;
            for ( I = 1; I <= 10; I++ )
            {
                if (NOT l_U509)
                {
                    if (NOT l_U496[I])
                    {
                        if (DOES_OBJECT_EXIST( l_U540[I] ))
                        {
                            DELETE_OBJECT( ref l_U540[I] );
                        }
                    }
                }
                else if (DOES_OBJECT_EXIST( l_U540[I] ))
                {
                    DELETE_OBJECT( ref l_U540[I] );
                }
            }
        }
        break;
        case 3:
        if (l_U509)
        {
            sub_14246();
            sub_14296();
            l_U250 = 1;
            l_U509 = 0;
        }
        if (DOES_OBJECT_EXIST( l_U552[1] ))
        {
            FREEZE_OBJECT_POSITION( l_U552[1], 0 );
            GET_OBJECT_COORDINATES( l_U552[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            SET_OBJECT_COORDINATES( l_U552[1], uVar3._fU0, uVar3._fU4, uVar3._fU8 - fVar16 );
            if (sub_10682())
            {
                PLAY_SOUND_FROM_OBJECT( l_U254, "BOWLING_ALLEY_MACHINE_DESCEND", l_U552[2] );
            }
            if (uVar3._fU8 < (l_U294._fU8 - 0.79700000))
            {
                SET_OBJECT_COORDINATES( l_U552[1], uVar3._fU0, uVar3._fU4, l_U294._fU8 - 0.79700000 );
                for ( I = 1; I <= 10; I++ )
                {
                    if (l_U496[I])
                    {
                        if (DOES_OBJECT_EXIST( l_U540[I] ))
                        {
                            DETACH_OBJECT( l_U540[I], 1 );
                            GET_OBJECT_COORDINATES( l_U540[I], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                            SET_OBJECT_COORDINATES( l_U540[I], uVar6._fU0, uVar6._fU4, l_U479 + 0.08500000 );
                            l_U383[I] = {uVar6};
                            SET_OBJECT_DYNAMIC( l_U540[I], 0 );
                        }
                    }
                }
                l_U570 = 6;
            }
        }
        break;
        case 6:
        if (DOES_OBJECT_EXIST( l_U552[1] ))
        {
            GET_OBJECT_COORDINATES( l_U552[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            SET_OBJECT_COORDINATES( l_U552[1], uVar3._fU0, uVar3._fU4, uVar3._fU8 + fVar16 );
            if (uVar3._fU8 > l_U294._fU8)
            {
                SET_OBJECT_COORDINATES( l_U552[1], uVar3._fU0, uVar3._fU4, l_U294._fU8 );
                l_U570 = 7;
            }
        }
        if (uVar3._fU8 > (l_U294._fU8 - 0.49700000))
        {
            if (DOES_OBJECT_EXIST( l_U552[2] ))
            {
                GET_OBJECT_COORDINATES( l_U552[2], ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                SET_OBJECT_COORDINATES( l_U552[2], uVar9._fU0, uVar9._fU4, uVar9._fU8 + fVar17 );
                if (uVar9._fU8 > l_U297._fU8)
                {
                    SET_OBJECT_COORDINATES( l_U552[2], l_U297._fU0, l_U297._fU4, l_U297._fU8 );
                }
            }
            l_U508 = 1;
        }
        break;
        case 9: break;
    }
    return;
}

void sub_14246()
{
    int I;

    for ( I = 1; I <= 10; I++ )
    {
        l_U496[I] = 1;
    }
    return;
}

void sub_14296()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    vector vVar12;
    float fVar15;

    vVar6 = {-1.00000000, -1.00000000, -1.00000000};
    vVar9 = {-1.00000000, -1.00000000, -1.00000000};
    vVar12 = {0.00000000, 0.00000000, 0.00000000};
    fVar15 = 0.00000000;
    for ( I = 1; I <= 10; I++ )
    {
        if (l_U496[I])
        {
            CREATE_OBJECT_NO_OFFSET( -190707996, l_U294._fU0 + fVar15, l_U294._fU4, l_U294._fU8, ref l_U540[I], 1 );
            fVar15 += 0.05000000;
            SET_OBJECT_PHYSICS_PARAMS( l_U540[I], 0.30000000, -1.00000000, vVar6, vVar9, -1082130432, -1082130432 );
            if (I == 1)
            {
                if (DOES_OBJECT_EXIST( l_U540[1] ))
                {
                    GET_OBJECT_COORDINATES( l_U540[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    GET_GROUND_Z_FOR_3D_COORD( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U479 );
                }
            }
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U540[I], "Bowl_GtaMloRoom" );
            ATTACH_OBJECT_TO_OBJECT( l_U540[I], l_U552[1], 0, l_U312[I], vVar12 );
            SET_OBJECT_HEADING( l_U540[I], l_U480 );
            SET_OBJECT_COLLISION( l_U540[I], 1 );
        }
    }
    return;
}

void sub_15420()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;

    vVar2 = {0.00000000, 0.00000000, -1.50000000};
    vVar5 = {0.15000000, 0.12000000, -0.02000000};
    vVar8 = {0.00000000, 0.00000000, 0.00000000};
    switch (l_U569)
    {
        case 1:
        if (DOES_CHAR_EXIST( l_U534[l_U248] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
            {
                sub_15651();
                TASK_PERFORM_SEQUENCE( l_U534[l_U248], l_U564 );
                CLEAR_SEQUENCE_TASK( l_U564 );
                l_U520 = 1;
                l_U569 = 0;
            }
        }
        break;
        case 0:
        if (DOES_CHAR_EXIST( l_U534[l_U248] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U534[l_U248], 29, ref l_U566 );
                if (l_U566 == 1)
                {
                    l_U525 = 1;
                }
                if (l_U525)
                {
                    if (l_U566 == 7)
                    {
                        l_U569 = 2;
                        l_U525 = 0;
                    }
                }
            }
        }
        break;
        case 2:
        if (DOES_CHAR_EXIST( l_U534[l_U248] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
        if (NOT l_U486)
        {
            if (DOES_CHAR_EXIST( l_U534[l_U248] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
                {
                    if (l_U518)
                    {
                        if (l_U510)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U565 );
                            TASK_PLAY_ANIM( 0, "PICK_UP_L", "MINI_BOWLING", 8.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM( 0, "IDLE_RELAXED", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U565 );
                            TASK_PERFORM_SEQUENCE( l_U534[l_U248], l_U565 );
                            CLEAR_SEQUENCE_TASK( l_U565 );
                        }
                        else
                        {
                            OPEN_SEQUENCE_TASK( ref l_U565 );
                            TASK_PLAY_ANIM( 0, "PICK_UP_R", "MINI_BOWLING", 8.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM( 0, "IDLE_RELAXED", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U565 );
                            TASK_PERFORM_SEQUENCE( l_U534[l_U248], l_U565 );
                            CLEAR_SEQUENCE_TASK( l_U565 );
                        }
                        l_U486 = 1;
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U534[l_U248] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
            {
                if ((IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "PICK_UP_L" )) || (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "PICK_UP_R" )))
                {
                    if (l_U510)
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "PICK_UP_L", ref l_U477 );
                        if (l_U477 > 0.46000000)
                        {
                            if (DOES_OBJECT_EXIST( l_U540[0] ))
                            {
                                SET_OBJECT_COLLISION( l_U540[0], 1 );
                                ATTACH_OBJECT_TO_PED( l_U540[0], l_U534[l_U248], 1232, vVar5, vVar8, 0 );
                                FREEZE_OBJECT_POSITION( l_U540[0], 0 );
                                l_U486 = 0;
                                l_U569 = 3;
                            }
                        }
                    }
                    else
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "PICK_UP_R", ref l_U477 );
                        if (l_U477 > 0.65000000)
                        {
                            if (DOES_OBJECT_EXIST( l_U540[0] ))
                            {
                                SET_OBJECT_COLLISION( l_U540[0], 1 );
                                ATTACH_OBJECT_TO_PED( l_U540[0], l_U534[l_U248], 1232, vVar5, vVar8, 0 );
                                FREEZE_OBJECT_POSITION( l_U540[0], 0 );
                                l_U486 = 0;
                                l_U569 = 3;
                            }
                        }
                    }
                }
            }
        }
        break;
        case 3:
        if (DOES_CHAR_EXIST( l_U534[l_U248] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "PICK_UP_L" )))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "PICK_UP_R" )))
                {
                    FREEZE_CHAR_POSITION( l_U534[l_U248], 0 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U534[l_U248], 0.00000000, 0.00000000, 1.50000000, ref l_U462._fU0, ref l_U462._fU4, ref l_U462._fU8 );
                    if (DOES_OBJECT_EXIST( l_U552[3] ))
                    {
                        SET_OBJECT_COORDINATES( l_U552[3], l_U462._fU0, l_U462._fU4, l_U462._fU8 );
                        ATTACH_PED_TO_OBJECT( l_U534[l_U248], l_U552[3], 0, vVar2, 0.00000000, 0.00000000, 1, 0 );
                    }
                    l_U569 = 4;
                }
            }
        }
        break;
        case 4:
        if (l_U250 == 1)
        {
            l_U266 = 1;
            sub_17319();
            l_U569 = 6;
        }
        if (l_U250 == 2)
        {
            sub_17424();
            sub_17601();
            l_U569 = 6;
        }
        if ((l_U250 != 1) AND (l_U250 != 2))
        {
            SCRIPT_ASSERT( "iCURRENT_BALL_NUMBER IS INCORRECT: S0_AI_BOWLING " );
            l_U250 = 2;
            l_U569 = 6;
        }
        break;
        case 6:
        sub_18525();
        if (l_U494)
        {
            sub_20420();
            l_U569 = 5;
            SETTIMERA( 0 );
        }
        break;
        case 5:
        if (TIMERA() > 1000)
        {
            if (DOES_CHAR_EXIST( l_U534[l_U248] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref l_U269 );
                    if (l_U269 == 0)
                    {
                        l_U270 = 1;
                    }
                    else
                    {
                        TASK_PLAY_ANIM( l_U534[l_U248], "IDLE_action", "MINI_BOWLING", 6.00000000, 1, 0, 0, 0, -1 );
                    }
                    SETTIMERA( 0 );
                }
            }
            l_U569 = 8;
        }
        break;
        case 8:
        if (TIMERA() > 1000)
        {
            if (l_U270 > 0)
            {
                if (DOES_CHAR_EXIST( l_U534[l_U248] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
                    {
                        sub_20911();
                    }
                }
            }
            else if (l_U508)
            {
                l_U569 = 7;
            }
        }
        break;
        case 7:
        sub_22524();
        break;
        case 11:
        sub_23171();
        l_U515 = 0;
        sub_23423();
        if (sub_24836() < 13.00000000)
        {
            sub_25001();
            sub_25178();
            if (l_U513)
            {
                l_U569 = 10;
            }
        }
        else
        {
            l_U264 = 0;
            l_U481 = 1.00000000;
            l_U420._fU0 = l_U481 * -0.50000000;
            l_U423._fU0 = l_U420._fU0;
            l_U569 = 10;
        }
        break;
        case 10:
        sub_25343();
        sub_25528();
        if (l_U513)
        {
            l_U573 = 1;
        }
        else
        {
            l_U573 = 0;
        }
        switch (l_U573)
        {
            case 0:
            if (NOT l_U515)
            {
                sub_23423();
                sub_25864();
                if ((l_U265 != 99) AND (l_U265 != 0))
                {
                    l_U485 = l_U264 / 10.00000000;
                    if (sub_10682())
                    {
                        PLAY_SOUND_FROM_POSITION( l_U258, "BOWLING_ALLEY_STRIKE", l_U306 );
                        SET_VARIABLE_ON_SOUND( l_U258, "NumberOfPins", l_U485 );
                    }
                }
            }
            if (l_U514)
            {
                if (NOT l_U530)
                {
                    SETTIMERA( 0 );
                    l_U530 = 1;
                }
                if ((sub_26568()) || (TIMERA() > 2000))
                {
                    sub_26983( sub_26802() );
                    sub_27418();
                    l_U530 = 0;
                    l_U508 = 0;
                    l_U569 = 12;
                }
            }
            break;
            case 1:
            if ((l_U514) || (TIMERA() > 5000))
            {
                sub_26983( sub_26802() );
                l_U528 = 1;
                sub_27418();
                l_U530 = 0;
                l_U569 = 12;
                l_U528 = 1;
                l_U508 = 0;
                if (sub_10682())
                {
                    SAY_AMBIENT_SPEECH( l_U534[l_U248], "bowling_gutter", 0, 1, 0 );
                }
                if (DOES_OBJECT_EXIST( l_U559 ))
                {
                    if (sub_10682())
                    {
                        PLAY_SOUND_FROM_OBJECT( l_U262, "BOWLING_ALLEY_JINGLES_GUTTER", l_U559 );
                    }
                }
            }
            break;
        }
        break;
        case 12:
        if (sub_28886())
        {
            l_U569 = 13;
        }
        break;
        case 13:
        if (DOES_CHAR_EXIST( l_U534[l_U248] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
            {
                if (l_U495)
                {
                    l_U495 = 0;
                }
            }
        }
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            DELETE_OBJECT( ref l_U540[0] );
        }
        l_U514 = 0;
        l_U513 = 0;
        l_U512 = 0;
        l_U531 = 0;
        l_U474 = {0.00000000, 0.00000000, 0.00000000};
        l_U265 = 99;
        l_U529 = 0;
        l_U526 = 0;
        l_U527 = 0;
        l_U528 = 0;
        l_U488 = 0;
        l_U489 = 0;
        l_U487 = 0;
        l_U491 = 0;
        l_U490 = 0;
        l_U492 = 0;
        l_U493 = 0;
        l_U494 = 0;
        l_U523 = 0;
        l_U525 = 0;
        l_U569 = 1;
        break;
    }
    return;
}

void sub_15651()
{
    OPEN_SEQUENCE_TASK( ref l_U564 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U276._fU0, l_U276._fU4, l_U276._fU8, 2, -1, 0.25000000 );
    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( 0, l_U276._fU0, l_U276._fU4, l_U276._fU8, l_U480, 2.00000000, 150.00000000 );
    CLOSE_SEQUENCE_TASK( l_U564 );
    return;
}

void sub_17319()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 1, 100, ref iVar2 );
    if (iVar2 <= 33)
    {
        l_U267 = 1;
    }
    if ((iVar2 > 33) AND (iVar2 <= 66))
    {
        l_U267 = 3;
    }
    if (iVar2 > 66)
    {
        l_U267 = 9;
    }
    return;
}

void sub_17424()
{
    int Result;
    int I;

    Result = 0;
    for ( I = 1; I <= 10; I++ )
    {
        if (l_U496[I])
        {
            if ((I != 1) AND (I != 5))
            {
                if ((((I == 2) || (I == 4)) || (I == 7)) || (I == 8))
                {
                    Result--;
                }
                else
                {
                    Result++;
                }
            }
        }
    }
    l_U516 = 0;
    l_U517 = 0;
    if (Result > 0)
    {
        l_U516 = 1;
    }
    else if (Result < 0)
    {
        l_U517 = 1;
    }
    if (Result == 0)
    {
        l_U516 = 1;
    }
    return Result;
}

void sub_17601()
{
    boolean bVar2;

    bVar2 = false;
    if (NOT bVar2)
    {
        if (l_U496[1])
        {
            bVar2 = true;
            l_U266 = 1;
        }
    }
    if (NOT bVar2)
    {
        if (l_U496[2])
        {
            if (l_U496[3])
            {
                l_U266 = 1;
                bVar2 = true;
            }
            else
            {
                bVar2 = true;
                l_U266 = 2;
            }
        }
        else if (l_U496[3])
        {
            bVar2 = true;
            l_U266 = 3;
        }
    }
    if (NOT bVar2)
    {
        if (l_U496[4])
        {
            if (l_U496[5])
            {
                if (l_U496[6])
                {
                    bVar2 = true;
                    l_U266 = 5;
                }
            }
            else if (l_U496[6])
            {
                if (l_U516)
                {
                    l_U266 = 6;
                    bVar2 = true;
                }
                if (l_U517)
                {
                    l_U266 = 4;
                    bVar2 = true;
                }
            }
            else
            {
                l_U266 = 4;
                bVar2 = true;
            }
        }
        else if (l_U496[5])
        {
            if (l_U496[6])
            {
                l_U266 = 5;
                bVar2 = true;
            }
            else
            {
                l_U266 = 5;
                bVar2 = true;
            }
        }
        else if (l_U496[6])
        {
            l_U266 = 6;
            bVar2 = true;
        };;;
    }
    if (NOT bVar2)
    {
        if (l_U496[7])
        {
            if (l_U496[8])
            {
                if (l_U496[9])
                {
                    if (l_U496[10])
                    {
                        l_U266 = 8;
                        bVar2 = true;
                    }
                    else
                    {
                        l_U266 = 8;
                        bVar2 = true;
                    }
                }
                else if (l_U496[10])
                {
                    l_U266 = 7;
                    bVar2 = true;
                }
                else
                {
                    l_U266 = 7;
                    bVar2 = true;
                }
            }
            else if (l_U496[9])
            {
                if (l_U496[10])
                {
                    l_U266 = 9;
                    bVar2 = true;
                }
            }
            else if (l_U496[10])
            {
                l_U266 = 10;
                bVar2 = true;
            }
            else
            {
                l_U266 = 7;
                bVar2 = true;
            };;;
        }
        else if (l_U496[8])
        {
            if (l_U496[9])
            {
                if (l_U496[10])
                {
                    l_U266 = 7;
                    bVar2 = true;
                }
                else
                {
                    l_U266 = 7;
                    bVar2 = true;
                }
            }
            else if (l_U496[10])
            {
                l_U266 = 8;
                bVar2 = true;
            }
            else
            {
                l_U266 = 8;
                bVar2 = true;
            }
        }
        else if (l_U496[9])
        {
            if (l_U496[10])
            {
                l_U266 = 9;
                bVar2 = true;
            }
            else
            {
                l_U266 = 9;
                bVar2 = true;
            }
        }
        else if (l_U496[10])
        {
            l_U266 = 10;
            bVar2 = true;
        };;;;
    }
    if (l_U266 != 0)
    {
        l_U267 = l_U266;
    }
    else
    {
        l_U267 = 0;
    }
    if (l_U266 == 7)
    {
        l_U267 = 4;
    }
    if (l_U266 == 10)
    {
        l_U267 = 6;
    }
    if (l_U266 == 0)
    {
        l_U266 = 1;
    }
    return;
}

void sub_18525()
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
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;

    if (DOES_OBJECT_EXIST( l_U540[0] ))
    {
        if (DOES_OBJECT_EXIST( l_U552[3] ))
        {
            GET_OBJECT_COORDINATES( l_U552[3], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_OBJECT_COORDINATES( l_U540[0], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        }
    }
    if (NOT l_U487)
    {
        if (DOES_OBJECT_EXIST( l_U552[3] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[3], 0.10000000, 0.00000000, 0.00000000, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[3], -0.10000000, 0.00000000, 0.00000000, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
        }
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar8._fU0, uVar8._fU4, l_U349[l_U267]._fU0, l_U349[l_U267]._fU4, ref fVar24 );
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar11._fU0, uVar11._fU4, l_U349[l_U267]._fU0, l_U349[l_U267]._fU4, ref fVar23 );
        if (fVar24 <= fVar23)
        {
            l_U488 = 1;
        }
        else
        {
            l_U489 = 1;
        }
        l_U487 = 1;
    }
    if (l_U488)
    {
        l_U490 = 0;
        if (NOT l_U491)
        {
            if (NOT l_U492)
            {
                if (DOES_CHAR_EXIST( l_U534[l_U248] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
                    {
                        if (IS_CHAR_MALE( l_U534[l_U248] ))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U534[l_U248], "PED_STRAFE_R", "MINI_BOWLING", 24.00000000, 1, 1, 1, 0, -1 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U534[l_U248], "F_PED_STRAFE_R", "MINI_BOWLING", 8.00000000, 1, 1, 1, 0, -1 );
                        }
                    }
                }
                l_U492 = 1;
            }
            if (l_U492)
            {
                if (DOES_CHAR_EXIST( l_U534[l_U248] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
                    {
                        if ((IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "PED_STRAFE_R" )) || (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "F_PED_STRAFE_R" )))
                        {
                            GET_CHAR_EXTRACTED_DISPLACEMENT( l_U534[l_U248], 1, ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_2D( uVar2._fU0, uVar2._fU4, l_U349[l_U267]._fU0, l_U349[l_U267]._fU4, ref fVar26 );
                            if (DOES_OBJECT_EXIST( l_U552[3] ))
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[3], 0.10000000, 0.00000000, 0.00000000, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
                            }
                            GET_DISTANCE_BETWEEN_COORDS_2D( uVar17._fU0, uVar17._fU4, l_U349[l_U267]._fU0, l_U349[l_U267]._fU4, ref fVar25 );
                            if (fVar26 >= fVar25)
                            {
                                if (DOES_OBJECT_EXIST( l_U552[3] ))
                                {
                                    SET_OBJECT_COORDINATES( l_U552[3], uVar2._fU0 + uVar14._fU0, uVar2._fU4 + uVar14._fU4, uVar2._fU8 );
                                }
                            }
                            else
                            {
                                TASK_PLAY_ANIM( l_U534[l_U248], "IDLE_RELAXED", "MINI_BOWLING", 1000.00000000, 0, 0, 0, 1, -1 );
                                l_U491 = 1;
                                l_U494 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        l_U492 = 0;
    }
    if (l_U489)
    {
        l_U491 = 0;
        if (NOT l_U490)
        {
            if (NOT l_U493)
            {
                if (DOES_CHAR_EXIST( l_U534[l_U248] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
                    {
                        if (IS_CHAR_MALE( l_U534[l_U248] ))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U534[l_U248], "PED_STRAFE_L", "MINI_BOWLING", 24.00000000, 1, 1, 1, 0, -1 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U534[l_U248], "F_PED_STRAFE_L", "MINI_BOWLING", 8.00000000, 1, 1, 1, 0, -1 );
                        }
                    }
                }
                l_U493 = 1;
            }
            if (l_U493)
            {
                if (DOES_CHAR_EXIST( l_U534[l_U248] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
                    {
                        if ((IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "PED_STRAFE_L" )) || (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "F_PED_STRAFE_L" )))
                        {
                            GET_CHAR_EXTRACTED_DISPLACEMENT( l_U534[l_U248], 1, ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
                            GET_CHAR_EXTRACTED_DISPLACEMENT( l_U534[l_U248], 0, ref uVar20._fU0, ref uVar20._fU4, ref uVar20._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_2D( uVar2._fU0, uVar2._fU4, l_U349[l_U267]._fU0, l_U349[l_U267]._fU4, ref fVar26 );
                            if (DOES_OBJECT_EXIST( l_U552[3] ))
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[3], -0.10000000, 0.00000000, 0.00000000, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
                            }
                            GET_DISTANCE_BETWEEN_COORDS_2D( uVar17._fU0, uVar17._fU4, l_U349[l_U267]._fU0, l_U349[l_U267]._fU4, ref fVar25 );
                            if (fVar26 >= fVar25)
                            {
                                if (DOES_OBJECT_EXIST( l_U552[3] ))
                                {
                                    SET_OBJECT_COORDINATES( l_U552[3], uVar2._fU0 + uVar14._fU0, uVar2._fU4 + uVar14._fU4, uVar2._fU8 );
                                }
                            }
                            else
                            {
                                TASK_PLAY_ANIM( l_U534[l_U248], "IDLE_RELAXED", "MINI_BOWLING", 1000.00000000, 0, 0, 0, 1, -1 );
                                l_U490 = 1;
                                l_U494 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        l_U493 = 0;
    }
    return;
}

void sub_20420()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (DOES_OBJECT_EXIST( l_U540[0] ))
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.20000000, 0.20000000, ref uVar8 );
        if (DOES_OBJECT_EXIST( l_U540[l_U266] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U540[l_U266], uVar8, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            uVar2._fU0 = l_U346._fU0;
            uVar2._fU4 = l_U346._fU4;
        }
        GET_OBJECT_COORDINATES( l_U540[0], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        l_U417._fU0 = (uVar2._fU0 - uVar5._fU0) * 0.60000000;
        l_U417._fU4 = (uVar2._fU4 - uVar5._fU4) * 0.60000000;
    }
    return;
}

void sub_20911()
{
    float fVar2;

    if (l_U270 == 1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U269 );
        if (l_U269 == 0)
        {
            TASK_PLAY_ANIM( l_U534[l_U248], "IDLE01", "MINI_BOWLING", 8.00000000, 0, 0, 0, 1, -1 );
        }
        if (l_U269 == 1)
        {
            TASK_PLAY_ANIM( l_U534[l_U248], "IDLE02", "MINI_BOWLING", 8.00000000, 0, 0, 0, 1, -1 );
        }
        if (l_U269 == 2)
        {
            TASK_PLAY_ANIM( l_U534[l_U248], "IDLE03", "MINI_BOWLING", 8.00000000, 0, 0, 0, 1, -1 );
        }
        if (l_U269 == 3)
        {
            TASK_PLAY_ANIM( l_U534[l_U248], "IDLE04", "MINI_BOWLING", 8.00000000, 0, 0, 0, 1, -1 );
        }
        if (l_U269 == 4)
        {
            TASK_PLAY_ANIM( l_U534[l_U248], "IDLE05", "MINI_BOWLING", 8.00000000, 0, 0, 0, 1, -1 );
        }
        l_U270 = 2;
    }
    if (l_U270 == 2)
    {
        if (l_U269 == 0)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "IDLE01" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "IDLE01", ref fVar2 );
                if (fVar2 > 0.10000000)
                {
                    if (fVar2 < 0.50000000)
                    {
                        l_U270 = 3;
                    }
                }
            }
        }
        if (l_U269 == 1)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "IDLE02" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "IDLE02", ref fVar2 );
                if (fVar2 > 0.10000000)
                {
                    if (fVar2 < 0.50000000)
                    {
                        l_U270 = 3;
                    }
                }
            }
        }
        if (l_U269 == 2)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "IDLE03" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "IDLE03", ref fVar2 );
                if (fVar2 > 0.10000000)
                {
                    if (fVar2 < 0.50000000)
                    {
                        l_U270 = 3;
                    }
                }
            }
        }
        if (l_U269 == 3)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "IDLE04" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "IDLE04", ref fVar2 );
                if (fVar2 > 0.10000000)
                {
                    if (fVar2 < 0.50000000)
                    {
                        l_U270 = 3;
                    }
                }
            }
        }
        if (l_U269 == 4)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "IDLE05" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "IDLE05", ref fVar2 );
                if (fVar2 > 0.10000000)
                {
                    if (fVar2 < 0.50000000)
                    {
                        l_U270 = 3;
                    }
                }
            }
        }
    }
    if (l_U270 == 3)
    {
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "IDLE01" ))
        {
            if (HAS_CHAR_ANIM_FINISHED( l_U534[l_U248], "MINI_BOWLING", "IDLE01" ))
            {
                l_U270 = 0;
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "IDLE02" ))
        {
            if (HAS_CHAR_ANIM_FINISHED( l_U534[l_U248], "MINI_BOWLING", "IDLE02" ))
            {
                l_U270 = 0;
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "IDLE03" ))
        {
            if (HAS_CHAR_ANIM_FINISHED( l_U534[l_U248], "MINI_BOWLING", "IDLE03" ))
            {
                l_U270 = 0;
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "IDLE04" ))
        {
            if (HAS_CHAR_ANIM_FINISHED( l_U534[l_U248], "MINI_BOWLING", "IDLE04" ))
            {
                l_U270 = 0;
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "IDLE05" ))
        {
            if (HAS_CHAR_ANIM_FINISHED( l_U534[l_U248], "MINI_BOWLING", "IDLE05" ))
            {
                l_U270 = 0;
            }
        }
    }
    return;
}

void sub_22524()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;

    fVar6 = 0.34500000;
    if (DOES_CHAR_EXIST( l_U534[l_U248] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
        {
            if (NOT l_U522)
            {
                DETACH_PED( l_U534[l_U248], 1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U534[l_U248], "shot", "MINI_BOWLING", 8.00000000, 0, 1, 1, 0, -1 );
                l_U522 = 1;
            }
            if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "shot" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "shot", ref fVar5 );
                if (fVar5 > fVar6)
                {
                    if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
                    {
                        if (DOES_OBJECT_EXIST( l_U540[0] ))
                        {
                            DETACH_OBJECT( l_U540[0], 0 );
                            if (NOT (IS_OBJECT_ON_SCREEN( l_U540[0] )))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
                                {
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U534[l_U248], 0.20000000, 1.00000000, -0.40000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                    SET_OBJECT_COORDINATES( l_U540[0], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                                }
                            }
                            SET_OBJECT_HEADING( l_U540[0], l_U480 );
                            SET_OBJECT_INITIAL_VELOCITY( l_U540[0], l_U417._fU0, l_U417._fU4, 0.00000000 );
                            if ((l_U480 == 90) || (l_U480 == 270))
                            {
                                APPLY_FORCE_TO_OBJECT( l_U540[0], 0, 0.05000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 1 );
                            }
                            else
                            {
                                APPLY_FORCE_TO_OBJECT( l_U540[0], 0, 0.00000000, 0.05000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 1 );
                            }
                        }
                        SETTIMERA( 0 );
                        l_U522 = 0;
                        l_U569 = 11;
                    }
                }
            }
        }
    }
    return;
}

void sub_23171()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    vector vVar5;
    vector vVar8;

    if (DOES_OBJECT_EXIST( l_U540[0] ))
    {
        GET_OBJECT_ROTATION_VELOCITY( l_U540[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        GET_OBJECT_VELOCITY( l_U540[0], ref vVar8.x, ref vVar8.y, ref vVar8.z );
        vVar5 = {sub_23260( uVar2, l_U459 )};
        l_U456 = {(vVar5 - vVar8) * l_U484};
        APPLY_FORCE_TO_OBJECT( l_U540[0], 4, l_U456, l_U459, 0, 0, 0, 1 );
    }
    return;
}

void sub_23260(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown Result;
    unknown uVar9;
    unknown uVar10;

    Result._fU0 = (uParam0._fU4 * uParam3._fU8) - (uParam0._fU8 * uParam3._fU4);
    Result._fU4 = (uParam0._fU8 * uParam3._fU0) - (uParam0._fU0 * uParam3._fU8);
    Result._fU8 = (uParam0._fU0 * uParam3._fU4) - (uParam0._fU4 * uParam3._fU0);
    return Result;
}

void sub_23423()
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

    if (NOT l_U515)
    {
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            if (DOES_OBJECT_EXIST( l_U552[5] ))
            {
                GET_OBJECT_COORDINATES( l_U540[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                SET_OBJECT_COORDINATES( l_U552[5], uVar2._fU0, uVar2._fU4, uVar2._fU8 + 0.50000000 );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U552[5] ))
    {
        if (DOES_OBJECT_EXIST( l_U552[0] ))
        {
            GET_OBJECT_COORDINATES( l_U552[0], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[5], l_U420._fU0, l_U420._fU4, l_U420._fU8, ref l_U426._fU0, ref l_U426._fU4, ref l_U426._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U552[5], l_U423._fU0, l_U423._fU4, l_U423._fU8, ref l_U429._fU0, ref l_U429._fU4, ref l_U429._fU8 );
            IS_OBJECT_IN_ANGLED_AREA_3D( l_U552[5], l_U426._fU0, l_U426._fU4, l_U426._fU8, l_U429._fU0, l_U429._fU4, l_U429._fU8, l_U481, 0 );
        }
    }
    switch (l_U571)
    {
        case 3:
        if (DOES_OBJECT_EXIST( l_U552[5] ))
        {
            SET_OBJECT_HEADING( l_U552[5], l_U480 );
            l_U432 = {uVar2};
            l_U571 = 1;
            l_U438._fU0 = ABSF( uVar5._fU0 - uVar2._fU0 );
            l_U438._fU4 = ABSF( uVar5._fU4 - uVar2._fU4 );
        }
        break;
        case 1:
        l_U435 = {uVar2};
        l_U441._fU0 = ABSF( uVar5._fU0 - uVar2._fU0 );
        l_U441._fU4 = ABSF( uVar5._fU4 - uVar2._fU4 );
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            GET_OBJECT_VELOCITY( l_U540[0], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            if ((ABSF( uVar8._fU4 )) > (ABSF( uVar8._fU0 )))
            {
                l_U482 = ATAN( ABSF( (l_U432._fU0 - l_U435._fU0) / (l_U432._fU4 - l_U435._fU4) ) );
            }
            else
            {
                l_U482 = ATAN( ABSF( (l_U432._fU4 - l_U435._fU4) / (l_U432._fU0 - l_U435._fU0) ) );
            }
        }
        if (DOES_OBJECT_EXIST( l_U552[5] ))
        {
            if ((l_U441._fU0 < l_U438._fU0) || (l_U441._fU4 < l_U438._fU4))
            {
                if (l_U510)
                {
                    SET_OBJECT_HEADING( l_U552[5], l_U480 + l_U482 );
                }
                else
                {
                    SET_OBJECT_HEADING( l_U552[5], l_U480 - l_U482 );
                }
            }
            else if (l_U510)
            {
                SET_OBJECT_HEADING( l_U552[5], l_U480 - l_U482 );
            }
            else
            {
                SET_OBJECT_HEADING( l_U552[5], l_U480 + l_U482 );
            }
        }
        l_U432 = {l_U435};
        l_U571 = 0;
        break;
        case 0:
        l_U435 = {uVar2};
        l_U441._fU0 = ABSF( uVar5._fU0 - uVar2._fU0 );
        l_U441._fU4 = ABSF( uVar5._fU4 - uVar2._fU4 );
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            GET_OBJECT_VELOCITY( l_U540[0], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            if ((ABSF( uVar8._fU4 )) > (ABSF( uVar8._fU0 )))
            {
                l_U482 = ATAN( ABSF( (l_U432._fU0 - l_U435._fU0) / (l_U432._fU4 - l_U435._fU4) ) );
            }
            else
            {
                l_U482 = ATAN( ABSF( (l_U432._fU4 - l_U435._fU4) / (l_U432._fU0 - l_U435._fU0) ) );
            }
        }
        if (DOES_OBJECT_EXIST( l_U552[5] ))
        {
            if ((l_U441._fU0 < l_U438._fU0) || (l_U441._fU4 < l_U438._fU4))
            {
                if (l_U510)
                {
                    SET_OBJECT_HEADING( l_U552[5], l_U480 + l_U482 );
                }
                else
                {
                    SET_OBJECT_HEADING( l_U552[5], l_U480 - l_U482 );
                }
            }
            else if (l_U510)
            {
                SET_OBJECT_HEADING( l_U552[5], l_U480 - l_U482 );
            }
            else
            {
                SET_OBJECT_HEADING( l_U552[5], l_U480 + l_U482 );
            }
        }
        l_U432 = {l_U435};
        l_U571 = 1;
        break;
    }
    return;
}

void sub_24836()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown Result;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (DOES_OBJECT_EXIST( l_U540[0] ))
    {
        GET_OBJECT_COORDINATES( l_U540[0], ref uVar2, ref uVar3, ref uVar4 );
    }
    if (DOES_CHAR_EXIST( l_U534[l_U248] ))
    {
        if (NOT (IS_CHAR_DEAD( l_U534[l_U248] )))
        {
            GET_CHAR_COORDINATES( l_U534[l_U248], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        }
    }
    GET_DISTANCE_BETWEEN_COORDS_2D( uVar2, uVar3, uVar6._fU0, uVar6._fU4, ref Result );
    return Result;
}

void sub_25001()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (l_U531 == 0)
    {
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            if (NOT l_U513)
            {
                GET_OBJECT_COORDINATES( l_U540[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if ((uVar2._fU8 < (l_U479 + 0.20000000)) AND (uVar2._fU8 > l_U479))
                {
                    if (sub_10682())
                    {
                        PLAY_SOUND_FROM_OBJECT( l_U259, "BOWLING_ALLEY_BALL_HIT", l_U540[0] );
                    }
                    l_U531 = 1;
                }
            }
        }
    }
    return;
}

void sub_25178()
{
    vector vVar2;

    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    if (DOES_OBJECT_EXIST( l_U540[0] ))
    {
        APPLY_FORCE_TO_OBJECT( l_U540[0], 0, l_U474, vVar2, 0, 0, 0, 1 );
    }
    return;
}

void sub_25343()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT l_U514)
    {
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            GET_OBJECT_COORDINATES( l_U540[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (uVar2._fU8 < (l_U479 - 0.25000000))
            {
                if (sub_10682())
                {
                    PLAY_SOUND_FROM_OBJECT( l_U253, "BOWLING_ALLEY_HIT_BACK_OF_ALLEY", l_U540[0] );
                }
                FREEZE_OBJECT_POSITION( l_U540[0], 1 );
                l_U512 = 0;
                l_U514 = 1;
            }
        }
    }
    return;
}

void sub_25528()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (DOES_OBJECT_EXIST( l_U540[0] ))
    {
        if (NOT l_U513)
        {
            GET_OBJECT_COORDINATES( l_U540[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (LOCATE_OBJECT_3D( l_U540[0], l_U306._fU0, l_U306._fU4, l_U306._fU8, 1.44500000, 1.14000000, 0.40000000, 0 ))
            {
                l_U512 = 1;
            }
            if ((uVar2._fU8 < l_U479) AND (uVar2._fU8 > (l_U479 - 0.20000000)))
            {
                if (NOT l_U511)
                {
                    if (sub_10682())
                    {
                        PLAY_SOUND_FROM_OBJECT( l_U252, "BOWLING_ALLEY_GUTTER", l_U540[0] );
                    }
                    l_U511 = 1;
                    GET_GAME_TIMER( ref l_U263 );
                }
                if (NOT l_U512)
                {
                    l_U513 = 1;
                }
            }
        }
    }
    return;
}

void sub_25864()
{
    int I;

    for ( I = 1; I <= 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U540[0] ))
        {
            if (DOES_OBJECT_EXIST( l_U540[I] ))
            {
                if (NOT l_U515)
                {
                    if (LOCATE_OBJECT_3D( l_U540[0], l_U306._fU0, l_U306._fU4, l_U306._fU8, 1.44500000, 1.14000000, 0.40000000, 0 ))
                    {
                        if (LOCATE_OBJECT_3D( l_U540[I], l_U306._fU0, l_U306._fU4, l_U306._fU8, 1.44500000, 1.14000000, 0.40000000, 0 ))
                        {
                            if (NOT (IS_OBJECT_STATIC( l_U540[I] )))
                            {
                                l_U265 = I;
                                l_U515 = 1;
                                sub_26087();
                                I = 10;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_26087()
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

    if (DOES_OBJECT_EXIST( l_U540[l_U265] ))
    {
        GET_OBJECT_COORDINATES( l_U540[l_U265], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    }
    if (DOES_OBJECT_EXIST( l_U540[0] ))
    {
        GET_OBJECT_COORDINATES( l_U540[0], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    }
    if (DOES_OBJECT_EXIST( l_U540[0] ))
    {
        GET_OBJECT_VELOCITY( l_U540[0], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    }
    sub_26239();
    return;
}

void sub_26239()
{
    int I;

    for ( I = 1; I <= 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U540[I] ))
        {
            if (IS_OBJECT_IN_ANGLED_AREA_3D( l_U540[I], l_U426._fU0, l_U426._fU4, l_U426._fU8, l_U429._fU0, l_U429._fU4, l_U429._fU8, l_U481, 0 ))
            {
                l_U264++;
            }
        }
    }
    return;
}

void sub_26568()
{
    int I;
    int iVar3;
    int iVar4;
    int Result;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    iVar3 = 0;
    iVar4 = 10;
    Result = 0;
    for ( I = 1; I <= 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U540[I] ))
        {
            if (LOCATE_OBJECT_3D( l_U540[I], l_U306._fU0, l_U306._fU4, l_U306._fU8, 1.44500000, 1.14000000, 0.40000000, 0 ))
            {
                GET_OBJECT_VELOCITY( l_U540[I], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                if (IS_OBJECT_STATIC( l_U540[I] ))
                {
                    iVar3++;
                }
            }
            else
            {
                iVar4--;
            }
        }
        else
        {
            iVar4--;
        }
    }
    if (iVar3 == iVar4)
    {
        Result = 1;
    }
    return Result;
}

void sub_26802()
{
    int Result;
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;

    Result = 0;
    for ( I = 1; I <= 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U540[I] ))
        {
            GET_OBJECT_COORDINATES( l_U540[I], ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_2D( uVar4._fU0, uVar4._fU4, l_U383[I]._fU0, l_U383[I]._fU4, ref fVar7 );
            if ((NOT (IS_OBJECT_UPRIGHT( l_U540[I], 15.00000000 ))) || (fVar7 > 0.20000000))
            {
                Result++;
                l_U496[I] = 0;
            }
        }
    }
    return Result;
}

void sub_26983(int iParam0)
{
    switch (l_U249)
    {
        case 1:
        if (iParam0 == 10)
        {
            l_U509 = 1;
            l_U527 = 1;
            l_U495 = 1;
            if (NOT l_U523)
            {
                if (sub_10682())
                {
                    SAY_AMBIENT_SPEECH( l_U534[l_U248], "bowling_Strike", 0, 1, 0 );
                }
                l_U523 = 1;
            }
            if (DOES_OBJECT_EXIST( l_U559 ))
            {
                if (sub_10682())
                {
                    PLAY_SOUND_FROM_OBJECT( l_U260, "BOWLING_ALLEY_JINGLES_STRIKE", l_U559 );
                }
            }
            ProtectedSet(l_U268, 10);
        }
        else
        {
            l_U249 = 2;
            if (iParam0 >= 8)
            {
                ;
            }
            ProtectedSet(l_U268, 10 - iParam0);
        }
        break;
        case 2:
        l_U509 = 1;
        l_U249 = 1;
        if (ProtectedGet(l_U268) == iParam0)
        {
            l_U526 = 1;
            if (sub_10682())
            {
                SAY_AMBIENT_SPEECH( l_U534[l_U248], "BOWLING_SPARE", 0, 1, 0 );
            }
            ProtectedSet(l_U268, 10);
            if (DOES_OBJECT_EXIST( l_U559 ))
            {
                if (sub_10682())
                {
                    PLAY_SOUND_FROM_OBJECT( l_U261, "BOWLING_ALLEY_JINGLES_DOUBLE", l_U559 );
                }
            }
        }
        else
        {
            l_U529 = 1;
        }
        l_U495 = 1;
        break;
    }
    return;
}

void sub_27418()
{
    if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
    {
        if (l_U527)
        {
            if (IS_CHAR_MALE( l_U534[l_U248] ))
            {
                TASK_PLAY_ANIM_WITH_FLAGS( l_U534[l_U248], "CELEB_C", "MINI_BOWLING", 8.00000000, -1, 11 );
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U269 );
                if (l_U269 == 0)
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "F_CELEB_A", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "F_CELEB_B", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
        }
        if (l_U526)
        {
            if (IS_CHAR_MALE( l_U534[l_U248] ))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U269 );
                if (l_U269 == 0)
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "CELEB_A", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "CELEB_B", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U269 );
                if (l_U269 == 0)
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "F_CELEB_A", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "F_CELEB_B", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
        }
        if (l_U528)
        {
            if (IS_CHAR_MALE( l_U534[l_U248] ))
            {
                TASK_PLAY_ANIM( l_U534[l_U248], "CURSE_B", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U269 );
                if (l_U269 == 0)
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "F_CURSE_A", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "F_CURSE_B", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
        }
        if (l_U529)
        {
            if (IS_CHAR_MALE( l_U534[l_U248] ))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U269 );
                if (l_U269 == 0)
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "CURSE_A", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                if (l_U269 == 1)
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "AVERAGE", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                if (l_U269 == 2)
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "CURSE_C", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U269 );
                if (l_U269 == 0)
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "F_CURSE_A", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM( l_U534[l_U248], "F_CURSE_B", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
        }
    }
    l_U529 = 0;
    l_U526 = 0;
    l_U527 = 0;
    l_U528 = 0;
    return;
}

void sub_28886()
{
    int Result;
    float fVar3;
    boolean bVar4;

    Result = 0;
    bVar4 = true;
    if (NOT (IS_CHAR_INJURED( l_U534[l_U248] )))
    {
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "CELEB_c" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "CELEB_c", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "CELEB_b" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "CELEB_b", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "CELEB_a" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "CELEB_a", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "CURSE_B" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "CURSE_B", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "CURSE_A" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "CURSE_A", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "average" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "average", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "CURSE_C" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "CURSE_C", ref fVar3 );
            if (fVar3 > 0.90000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "F_CURSE_A" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "F_CURSE_A", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "F_CURSE_B" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "F_CURSE_B", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "F_CELEB_A" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "F_CELEB_A", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U534[l_U248], "MINI_BOWLING", "F_CELEB_B" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U534[l_U248], "MINI_BOWLING", "F_CELEB_B", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U534[l_U248], 1 );
            }
        }
    }
    if (bVar4)
    {
        Result = 1;
    }
    return Result;
}
