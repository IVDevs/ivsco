void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    boolean bVar6;
    unknown uVar7;

    l_U1 = 0;
    l_U15 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_29();
    }
    while (true)
    {
        WAIT( 0 );
        sub_717();
        switch (l_U1)
        {
            case 0:
            if (g_U9943[2]._fU0)
            {
                l_U13 = 2006918058;
                g_U2231 = 1;
            }
            else
            {
                l_U13 = -1932515764;
                g_U2231 = 0;
            }
            REQUEST_MODEL( l_U13 );
            REQUEST_MODEL( 1552970117 );
            while ((NOT (HAS_MODEL_LOADED( l_U13 ))) || (NOT (HAS_MODEL_LOADED( 1552970117 ))))
            {
                WAIT( 0 );
            }
            l_U2 = 25;
            l_U1 = 1;
            break;
            case 1:
            if (NOT sub_1181())
            {
                bVar6 = false;
                if (sub_1228( ref uVar2, ref uVar5, ref l_U2 ))
                {
                    bVar6 = true;
                }
                else if (l_U2 > 500)
                {
                    if (l_U20 > 0.00000000)
                    {
                        uVar2 = {l_U16};
                        uVar5 = l_U19;
                        bVar6 = true;
                    }
                    else
                    {
                        PRINT( "RMTAXI2", 7500, 1 );
                        sub_29();
                    }
                }
                if (bVar6)
                {
                    CREATE_CAR( l_U13, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref g_U2239, 1 );
                    SET_CAR_HEADING( g_U2239, uVar5 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( g_U2239, 2.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    SET_CAR_HEADING( g_U2239, uVar5 );
                    SET_CAR_COORDINATES( g_U2239, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    LOCK_CAR_DOORS( g_U2239, 2 );
                    if (l_U13 == -1932515764)
                    {
                        CHANGE_CAR_COLOUR( g_U2239, 0, 1 );
                        SET_EXTRA_CAR_COLOURS( g_U2239, 1, 0 );
                        SET_VEHICLE_DIRT_LEVEL( g_U2239, 15.90000000 );
                    }
                    else
                    {
                        SET_CAR_COLOUR_COMBINATION( g_U2239, 2 );
                        SET_VEHICLE_DIRT_LEVEL( g_U2239, 0.00000000 );
                    }
                    CREATE_CHAR_INSIDE_CAR( g_U2239, 25, 1552970117, ref l_U3 );
                    sub_2350( g_U2239 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U13 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1552970117 );
                    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U3, 0 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U3, 0 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3, 1 );
                    SET_PED_DIES_WHEN_INJURED( l_U3, 1 );
                    ADD_BLIP_FOR_CHAR( l_U3, ref l_U12 );
                    CHANGE_BLIP_COLOUR( l_U12, 3 );
                    CHANGE_BLIP_PRIORITY( l_U12, 0 );
                    if (l_U15)
                    {
                        GET_CHAR_COORDINATES( sub_426(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U4._fU0, ref l_U4._fU4, ref l_U4._fU8, ref uVar5 );
                    }
                    l_U1 = 2;
                    SETTIMERA( 0 );
                }
            }
            break;
            case 2:
            if (NOT g_U2243)
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_HELP( "RMTAXH1" );
                    g_U2243 = 1;
                }
            }
            if (sub_2601())
            {
                if (NOT (IS_CHAR_DEAD( l_U3 )))
                {
                    if (IS_VEH_DRIVEABLE( g_U2239 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U10 );
                        TASK_CAR_MISSION( 0, g_U2239, 0, 21, 5.00000000, 0, 3, 3 );
                        TASK_CAR_MISSION( 0, g_U2239, 0, 5, 0.00000000, 0, 3, 3 );
                        CLOSE_SEQUENCE_TASK( l_U10 );
                        TASK_PERFORM_SEQUENCE( l_U3, l_U10 );
                        CLEAR_SEQUENCE_TASK( l_U10 );
                        if (NOT ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0))
                        {
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, g_U2239, 3000 );
                        }
                        SETTIMERA( 0 );
                        sub_3411( ref g_U2239, ref l_U3 );
                        l_U1 = 3;
                    }
                }
            }
            if (TIMERA() > 240000)
            {
                PRINT( "RMTAXI2", 7500, 1 );
                sub_29();
            }
            if (IS_PLAYER_PLAYING( sub_383() ))
            {
                if (sub_4076( sub_426() ))
                {
                    sub_29();
                }
            }
            break;
            case 3:
            if (IS_VEH_DRIVEABLE( g_U2239 ))
            {
                if (IS_PLAYER_PLAYING( sub_383() ))
                {
                    if (IS_CHAR_IN_CAR( sub_426(), g_U2239 ))
                    {
                        l_U1 = 4;
                        break;
                    }
                }
            }
            if (sub_78())
            {
                if ((TIMERA() > 30000) || (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) == 0)))
                {
                    sub_29();
                }
            }
            else
            {
                sub_29();
            }
            break;
            case 4:
            if (DOES_BLIP_EXIST( l_U12 ))
            {
                REMOVE_BLIP( l_U12 );
            }
            if (IS_VEH_DRIVEABLE( g_U2239 ))
            {
                if (IS_PLAYER_PLAYING( sub_383() ))
                {
                    if ((((NOT (IS_CHAR_IN_CAR( sub_426(), g_U2239 ))) AND (NOT (sub_4561( sub_426() )))) AND (NOT (sub_4806( g_U2239 )))) AND (NOT (sub_5009( g_U2239 ))))
                    {
                        LOCK_CAR_DOORS( g_U2239, 3 );
                        WAIT( 400 );
                        sub_29();
                    }
                }
            }
            break;
        }
        if (NOT (IS_CHAR_INJURED( l_U3 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U3 )))
            {
                sub_29();
            }
        }
        if (DOES_CHAR_EXIST( l_U3 ))
        {
            if (IS_CHAR_INJURED( l_U3 ))
            {
                sub_29();
            }
        }
        if (g_U64926)
        {
            sub_29();
        }
    }
    return;
}

void sub_29()
{
    PRINTSTRING( "CLEANING UP ROMAN TAXI SCRIPT\n" );
    if (sub_78())
    {
        g_U2234 = nil;
        g_U2238 = nil;
        PRINTSTRING( "ROMAN CAR NO LONGER THE GLOBAL WAITING TAXI\n" );
    }
    if (DOES_VEHICLE_EXIST( g_U2239 ))
    {
        if (NOT (IS_CAR_DEAD( g_U2239 )))
        {
            LOCK_CAR_DOORS( g_U2239, 1 );
            if (IS_PLAYER_PLAYING( sub_383() ))
            {
                if (IS_CHAR_IN_CAR( sub_426(), g_U2239 ))
                {
                    sub_484();
                }
            }
        }
    }
    if ((DOES_CHAR_EXIST( l_U3 )) AND (DOES_VEHICLE_EXIST( g_U2239 )))
    {
        if (NOT (IS_CHAR_DEAD( l_U3 )))
        {
            if (IS_VEH_DRIVEABLE( g_U2239 ))
            {
                if (IS_CHAR_IN_CAR( l_U3, g_U2239 ))
                {
                    TASK_CAR_DRIVE_WANDER( l_U3, g_U2239, 15.00000000, 2 );
                }
            }
        }
    }
    sub_633( l_U3 );
    l_U3 = nil;
    g_U2239 = nil;
    g_U64926 = 0;
    REMOVE_BLIP( l_U12 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_78()
{
    if ((g_U2239 == g_U2238) AND (l_U3 == g_U2234))
    {
        return 1;
        break;
    }
    if (NOT (g_U2239 == g_U2238))
    {
        PRINTSTRING( "IS_GLOBAL_TAXI_STILL_ROMAN_CAR - car \n" );
    }
    if (NOT (l_U3 == g_U2234))
    {
        PRINTSTRING( "IS_GLOBAL_TAXI_STILL_ROMAN_CAR - driver \n" );
    }
    return 0;
}

void sub_383()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_426()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_484()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) > 0)
    {
        g_U2229 = 1;
    }
    return;
}

void sub_633(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_717()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_383() ))
    {
        if ((NOT (IS_PLAYER_CONTROL_ON( sub_383() ))) AND (ARE_WIDESCREEN_BORDERS_ACTIVE()))
        {
            if (NOT l_U14)
            {
                if (IS_VEH_DRIVEABLE( g_U2239 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_426(), g_U2239 )))
                    {
                        FREEZE_CAR_POSITION( g_U2239, 1 );
                        GET_CAR_COORDINATES( g_U2239, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        SET_CAR_COORDINATES( g_U2239, uVar2._fU0, uVar2._fU4, uVar2._fU8 + 150.00000000 );
                        l_U14 = 1;
                    }
                }
            }
        }
        else if (l_U14)
        {
            if (IS_VEH_DRIVEABLE( g_U2239 ))
            {
                FREEZE_CAR_POSITION( g_U2239, 0 );
                GET_CAR_COORDINATES( g_U2239, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                SET_CAR_COORDINATES( g_U2239, uVar2._fU0, uVar2._fU4, uVar2._fU8 - 150.00000000 );
                SET_CAR_ON_GROUND_PROPERLY( g_U2239 );
            }
            l_U14 = 0;
        }
    }
    return;
}

int sub_1181()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_1228(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if ((uParam2^) == 25)
        {
            if (sub_1266( uParam0, uParam1, (uParam2^) ))
            {
                return 1;
            }
        }
        else if (sub_1266( uParam0, uParam1, -1 ))
        {
            return 1;
        }
        (uParam2^)++;
    }
    return 0;
}

int sub_1266(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    if (IS_PLAYER_PLAYING( sub_383() ))
    {
        GET_CHAR_COORDINATES( sub_426(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if (IS_CHAR_IN_WATER( sub_426() ))
        {
            uVar5._fU8 = 1.00000000;
        }
    }
    uVar17 = GET_MAP_AREA_FROM_COORDS( uVar5 );
    if (NOT (iParam2 == -1))
    {
        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, iParam2, uVar17, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11, ref uVar16 );
    }
    else
    {
        GET_NEXT_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar17, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11 );
    }
    GET_DISTANCE_BETWEEN_COORDS_2D( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar12 );
    fVar14 = 1.00000000;
    if (NOT (sub_1487( uVar5, uVar8 )))
    {
        fVar14 *= 0.00000000;
    }
    fVar13 = uVar5._fU8 - uVar8._fU8;
    if (fVar13 < 0.00000000)
    {
        fVar13 *= -1.00000000;
    }
    if (NOT (fVar13 < 4.00000000))
    {
        if (fVar13 > 20.00000000)
        {
            fVar13 = 20.00000000;
        }
        fVar14 *= (20.00000000 - fVar13) / 20.00000000;
    }
    if (fVar12 < 100.00000000)
    {
        fVar14 *= fVar12 / 100.00000000;
    }
    if (sub_1719( uVar8._fU0, uVar8._fU4, uVar8._fU8, 5.00000000, 1128792064 ))
    {
        fVar14 *= 0.00000000;
    }
    if (fVar14 >= 1.00000000)
    {
        (uParam0^) = {uVar8};
        (uParam1^) = uVar11;
        return 1;
    }
    if (fVar14 > 0.00000000)
    {
        if (fVar14 > l_U20)
        {
            l_U16 = {uVar8};
            l_U19 = uVar11;
            l_U20 = fVar14;
        }
    }
    return 0;
}

int sub_1487(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    iVar9 = GET_MAP_AREA_FROM_COORDS( uParam3 );
    if (iVar8 == iVar9)
    {
        return 1;
    }
    return 0;
}

int sub_1719(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    GET_GAME_VIEWPORT_ID( ref uVar7 );
    if (CAM_IS_SPHERE_VISIBLE( uVar7, uParam0, uParam1, uParam2, uParam3 ))
    {
        if (IS_PLAYER_PLAYING( sub_383() ))
        {
            GET_CHAR_COORDINATES( sub_426(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {(vector( uParam2, uParam1, uParam0)) - vVar8};
            if ((VMAG( uVar11 )) < fParam4)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_2350(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_2601()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_DEAD( l_U3 )))
    {
        if (IS_VEH_DRIVEABLE( g_U2239 ))
        {
            if (IS_PLAYER_PLAYING( sub_383() ))
            {
                if (NOT l_U15)
                {
                    GET_CHAR_COORDINATES( sub_426(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U4._fU0, ref l_U4._fU4, ref l_U4._fU8, ref uVar8 );
                    uVar5 = {l_U7 - l_U4};
                    if ((VMAG( uVar5 )) > 1.00000000)
                    {
                        l_U7 = {l_U4};
                        OPEN_SEQUENCE_TASK( ref l_U10 );
                        TASK_CAR_DRIVE_TO_COORD( 0, g_U2239, l_U7._fU0, l_U7._fU4, l_U7._fU8, 15.00000000, 0, 0, 2, 10.00000000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U10 );
                        CLEAR_CHAR_TASKS( l_U3 );
                        TASK_PERFORM_SEQUENCE( l_U3, l_U10 );
                        CLEAR_SEQUENCE_TASK( l_U10 );
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U3, 29, ref l_U11 );
                        if (l_U11 == 7)
                        {
                            return 1;
                        }
                        else if ((LOCATE_CAR_2D( g_U2239, l_U7._fU0, l_U7._fU4, 20.00000000, 20.00000000, 0 )) || (LOCATE_CAR_2D( g_U2239, uVar2._fU0, uVar2._fU4, 15.00000000, 15.00000000, 0 )))
                        {
                            CLEAR_CHAR_TASKS( l_U3 );
                            return 1;
                        }
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U3, 29, ref l_U11 );
                    if (l_U11 == 7)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U10 );
                        TASK_CAR_DRIVE_TO_COORD( 0, g_U2239, l_U4._fU0, l_U4._fU4, l_U4._fU8, 20.00000000, 0, 0, 2, 10.00000000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U10 );
                        CLEAR_CHAR_TASKS( l_U3 );
                        TASK_PERFORM_SEQUENCE( l_U3, l_U10 );
                        CLEAR_SEQUENCE_TASK( l_U10 );
                    }
                    else
                    {
                        GET_CHAR_COORDINATES( sub_426(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        if ((LOCATE_CAR_2D( g_U2239, l_U4._fU0, l_U4._fU4, 20.00000000, 20.00000000, 0 )) || (LOCATE_CAR_2D( g_U2239, uVar2._fU0, uVar2._fU4, 20.00000000, 20.00000000, 0 )))
                        {
                            CLEAR_CHAR_TASKS( l_U3 );
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_3411(unknown uParam0, unknown uParam1)
{
    if ((NOT ((uParam0^) == g_U2238)) AND (NOT (g_U2238 == nil)))
    {
        sub_3445();
    }
    if ((DOES_VEHICLE_EXIST( (uParam0^) )) AND (DOES_CHAR_EXIST( (uParam1^) )))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_CHAR_DEAD( (uParam1^) )))
            {
                if (IS_CHAR_IN_CAR( (uParam1^), (uParam0^) ))
                {
                    g_U2238 = (uParam0^);
                    g_U2234 = (uParam1^);
                    g_U2228 = 1;
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U2234, 1 );
                    if (NOT (IS_CAR_A_MISSION_CAR( g_U2238 )))
                    {
                        l_U0 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_3445()
{
    unknown uVar2;

    if (g_U2228)
    {
        if (NOT sub_3464())
        {
            if ((DOES_CHAR_EXIST( g_U2234 )) AND (DOES_VEHICLE_EXIST( g_U2238 )))
            {
                if (NOT (IS_CHAR_INJURED( g_U2234 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U2234, 0 );
                    if (IS_VEH_DRIVEABLE( g_U2238 ))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( g_U2234, g_U2238 ))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar2 );
                            if (((NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2238, 0 ))) || (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2238, 1 )))) || (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2238, 2 ))))
                            {
                                TASK_PAUSE( 0, 2000 );
                            }
                            TASK_CAR_MISSION( 0, g_U2238, 0, 1, 15.00000000, 0, 5, 5 );
                            CLOSE_SEQUENCE_TASK( uVar2 );
                            TASK_PERFORM_SEQUENCE( g_U2234, uVar2 );
                            CLEAR_SEQUENCE_TASK( uVar2 );
                        }
                    }
                }
                sub_3760();
            }
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H01" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )))
            {
                CLEAR_HELP();
            }
            g_U2228 = 0;
            l_U0 = 0;
            g_U2234 = nil;
            g_U2238 = nil;
        }
    }
    return;
}

int sub_3464()
{
    if (sub_3478( g_U2238 ))
    {
        return 1;
    }
    return 0;
}

int sub_3478(int iParam0)
{
    if (iParam0 == g_U2239)
    {
        return 1;
    }
    return 0;
}

void sub_3760()
{
    if (l_U0)
    {
        l_U0 = 0;
    }
    return;
}

int sub_4076(int iParam0)
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
                if (sub_4140( uVar3 ))
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

int sub_4140(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

int sub_4561(unknown uParam0)
{
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (((((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_close_out_ds" )) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_close_out_ds_angry" ))) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_close_out_ps" ))) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_out_ds" ))) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_out_ps" )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_4806(unknown uParam0)
{
    int iVar3;
    int I;
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_PLAYER_PLAYING( sub_383() ))
        {
            if (DOES_GROUP_EXIST( sub_4847() ))
            {
                GET_GROUP_SIZE( sub_4847(), ref I, ref iVar3 );
                if (iVar3 > 0)
                {
                    for ( I = 0; I < iVar3; I++ )
                    {
                        GET_GROUP_MEMBER( sub_4847(), I, ref uVar5 );
                        if (NOT (IS_CHAR_INJURED( uVar5 )))
                        {
                            if (sub_4561( uVar5 ))
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

void sub_4847()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_5009(unknown uParam0)
{
    int iVar3;
    int I;
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_PLAYER_PLAYING( sub_383() ))
        {
            if (DOES_GROUP_EXIST( sub_4847() ))
            {
                GET_GROUP_SIZE( sub_4847(), ref I, ref iVar3 );
                if (iVar3 > 0)
                {
                    for ( I = 0; I < iVar3; I++ )
                    {
                        GET_GROUP_MEMBER( sub_4847(), I, ref uVar5 );
                        if (NOT (IS_CHAR_INJURED( uVar5 )))
                        {
                            if (IS_CHAR_IN_CAR( uVar5, uParam0 ))
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
