void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U3 = 0;
    l_U7 = {-802.93730000, 780.15340000, -20.59750000};
    l_U10 = 138.86630000;
    l_U11 = {3.00000000, 0.00000000, 0.00000000};
    l_U14 = {5.58410000, -3.80710000, 2.00000000};
    l_U17 = 270.04640000;
    l_U20 = 0;
    l_U22 = 0.00000000;
    l_U23 = 0;
    l_U24 = 0;
    l_U25 = 0;
    l_U32 = -1;
    l_U33 = {-546.31050000, 333.39290000, -16.78290000};
    l_U36 = {-794.00230000, 779.67150000, -20.90000000};
    l_U7 = {l_U39._fU4[0]};
    l_U10 = l_U39._fU68[0];
    sub_211();
    sub_394();
    while (true)
    {
        WAIT( 0 );
        if ((IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()) AND (NOT sub_432()))
        {
            switch (l_U3)
            {
                case 0:
                if (sub_1343())
                {
                    if (sub_1693())
                    {
                        if (sub_1734())
                        {
                            l_U3 = 1;
                        }
                    }
                }
                break;
                case 1:
                switch (l_U21)
                {
                    case 0:
                    if (NOT (IS_CHAR_INJURED( l_U6 )))
                    {
                        if (NOT l_U25)
                        {
                            GET_SCRIPT_TASK_STATUS( l_U6, 29, ref l_U5 );
                            if (l_U5 == 1)
                            {
                                GET_SEQUENCE_PROGRESS( l_U6, ref l_U26 );
                                if (l_U26 == 2)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U19 )))
                                    {
                                        if (NOT (IS_CAR_DEAD( l_U18 )))
                                        {
                                            TASK_CAR_DRIVE_WANDER( l_U19, l_U18, 15.00000000, 2 );
                                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U18 );
                                            l_U25 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                    case 1:
                    if (NOT (IS_CHAR_INJURED( l_U6 )))
                    {
                        if (NOT l_U25)
                        {
                            if (NOT (IS_CAR_DEAD( l_U18 )))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U6, 29, ref l_U5 );
                                if (l_U5 == 1)
                                {
                                    GET_SEQUENCE_PROGRESS( l_U6, ref l_U26 );
                                    if (l_U26 == 0)
                                    {
                                        l_U23 = 1;
                                        sub_4144();
                                    }
                                    if (l_U26 == 2)
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U19 )))
                                        {
                                            l_U24 = 1;
                                            sub_4144();
                                            if (NOT (IS_CHAR_DEAD( l_U19 )))
                                            {
                                                TASK_CAR_DRIVE_WANDER( l_U19, l_U18, 15.00000000, 2 );
                                            }
                                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U18 );
                                            l_U25 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                    case 2: break;
                }
                break;
                case 2: break;
            }
        }
        else
        {
            sub_4477();
        }
    }
    return;
}

void sub_211()
{
    l_U31 = VDIST( l_U7, l_U33 );
    if (l_U31 < 5.00000000)
    {
        l_U14 = {-554.28990000, 334.75030000, -16.97600000};
        l_U27 = "GtaMloRoomTUN4";
        l_U17 = 90.00000000;
    }
    l_U31 = VDIST( l_U7, l_U36 );
    if (l_U31 < 5.00000000)
    {
        l_U14 = {-791.64280000, 777.19590000, -20.98980000};
        l_U27 = "GtaMloRoomTUN2";
        l_U17 = 270.00000000;
    }
    return;
}

void sub_394()
{
    return;
}

int sub_432()
{
    if (NOT (IS_CHAR_INJURED( sub_441() )))
    {
        if (sub_500( sub_441() ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_441()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_500(unknown uParam0)
{
    if (((sub_513( uParam0, 1, 0 )) || (sub_513( uParam0, 2, 0 ))) || (sub_513( uParam0, 0, 0 )))
    {
        return 1;
    }
    return 0;
}

int sub_513(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_541( uParam0, uParam1 ))
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

int sub_541(unknown uParam0, unknown uParam1)
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
            if (IS_CHAR_IN_AREA_3D( sub_441(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_1343()
{
    if (NOT sub_1352())
    {
        if (l_U32 == -1)
        {
            if (sub_1535())
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U32 );
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U32 );
            }
            if (l_U32 == 0)
            {
                return 1;
            }
        }
        else if (l_U32 == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1352()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

int sub_1535()
{
    int iVar2;
    unknown uVar3;

    GET_TIME_OF_DAY( ref iVar2, ref uVar3 );
    if (iVar2 < 6)
    {
        return 1;
    }
    if (iVar2 > 19)
    {
        return 1;
    }
    if ((iVar2 > 9) AND (iVar2 < 16))
    {
        return 1;
    }
    return 0;
}

int sub_1693()
{
    if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_1734()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;

    REQUEST_MODEL( sub_1743() );
    REQUEST_ANIMS( "AMB@BRIDGECOPS" );
    if ((HAS_MODEL_LOADED( sub_1743() )) AND (HAVE_ANIMS_LOADED( "AMB@BRIDGECOPS" )))
    {
        if (IS_CHAR_DEAD( l_U6 ))
        {
            CREATE_CHAR( 6, sub_1743(), l_U7._fU0, l_U7._fU4, l_U7._fU8, ref l_U6, 1 );
            SET_INFORM_RESPECTED_FRIENDS( l_U6, 999, 999 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U6, l_U27 );
            SET_CHAR_HEADING( l_U6, l_U10 );
            TASK_START_SCENARIO_IN_PLACE( l_U6, "Scenario_Bouncer", -1082130432 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar9 );
            l_U21 = uVar9;
        }
        if (NOT (IS_CHAR_DEAD( l_U6 )))
        {
            if (NOT (IS_CHAR_WAITING_FOR_WORLD_COLLISION( l_U6 )))
            {
                switch (l_U21)
                {
                    case 0:
                    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar6, ref iVar7 );
                    if (iVar7 > -1)
                    {
                        if (IS_THIS_MODEL_A_CAR( uVar6 ))
                        {
                            if (NOT (sub_2096( uVar6 )))
                            {
                                if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                {
                                    CREATE_CAR( uVar6, l_U14._fU0, l_U14._fU4, l_U14._fU8, ref l_U18, 1 );
                                    SET_ROOM_FOR_CAR_BY_NAME( l_U18, l_U27 );
                                    SET_CAR_HEADING( l_U18, l_U17 );
                                    SET_CAR_COORDINATES( l_U18, l_U14._fU0, l_U14._fU4, l_U14._fU8 );
                                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U18, ref l_U19 );
                                    SET_ROOM_FOR_CHAR_BY_NAME( l_U19, l_U27 );
                                    TASK_CAR_TEMP_ACTION( l_U19, l_U18, 1, 999999 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U18, -1.50000000, 0.25000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    SET_CHAR_COORDINATES( l_U6, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                                    SET_CHAR_HEADING( l_U6, l_U17 );
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U18, 0.00000000, 0.25000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    OPEN_SEQUENCE_TASK( ref l_U4 );
                                    TASK_PLAY_ANIM( 0, "car_chat_outside", "AMB@BRIDGECOPS", 4.00000000, 0, 0, 0, 1, -1 );
                                    TASK_PLAY_ANIM( 0, "car_chat_outside_2", "AMB@BRIDGECOPS", 4.00000000, 0, 0, 0, 0, -1 );
                                    TASK_GO_STRAIGHT_TO_COORD( 0, l_U7._fU0, l_U7._fU4, l_U7._fU8, 2, -2 );
                                    TASK_ACHIEVE_HEADING( 0, l_U10 );
                                    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                    CLOSE_SEQUENCE_TASK( l_U4 );
                                    TASK_PERFORM_SEQUENCE( l_U6, l_U4 );
                                    CLEAR_SEQUENCE_TASK( l_U4 );
                                    return 1;
                                }
                            }
                        }
                    }
                    break;
                    case 1:
                    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar6, ref iVar7 );
                    if (iVar7 > -1)
                    {
                        if (IS_THIS_MODEL_A_CAR( uVar6 ))
                        {
                            if (NOT (sub_2096( uVar6 )))
                            {
                                if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                {
                                    CREATE_CAR( uVar6, l_U14._fU0, l_U14._fU4, l_U14._fU8, ref l_U18, 1 );
                                    SET_ROOM_FOR_CAR_BY_NAME( l_U18, l_U27 );
                                    SET_CAR_HEADING( l_U18, l_U17 );
                                    SET_CAR_COORDINATES( l_U18, l_U14._fU0, l_U14._fU4, l_U14._fU8 );
                                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U18, ref l_U19 );
                                    SET_ROOM_FOR_CHAR_BY_NAME( l_U19, l_U27 );
                                    TASK_CAR_TEMP_ACTION( l_U19, l_U18, 1, 999999 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U18, 0.00000000, -sub_3434( uVar6 ), 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    SET_CHAR_COORDINATES( l_U6, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                                    SET_CHAR_HEADING( l_U6, l_U17 );
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U18, 0.00000000, 0.25000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    OPEN_SEQUENCE_TASK( ref l_U4 );
                                    TASK_PLAY_ANIM( 0, "Open_Boot", "AMB@BRIDGECOPS", 4.00000000, 0, 0, 0, 1, -1 );
                                    TASK_STAND_STILL( 0, 7000 );
                                    TASK_PLAY_ANIM( 0, "Close_Boot", "AMB@BRIDGECOPS", 4.00000000, 0, 0, 0, 0, -1 );
                                    TASK_GO_STRAIGHT_TO_COORD( 0, l_U7._fU0, l_U7._fU4, l_U7._fU8, 2, -2 );
                                    TASK_ACHIEVE_HEADING( 0, l_U10 );
                                    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                    CLOSE_SEQUENCE_TASK( l_U4 );
                                    TASK_PERFORM_SEQUENCE( l_U6, l_U4 );
                                    CLEAR_SEQUENCE_TASK( l_U4 );
                                    return 1;
                                }
                            }
                        }
                    }
                    break;
                    case 2:
                    return 1;
                    break;
                }
            }
        }
    }
    else
    {
        REQUEST_MODEL( sub_1743() );
        REQUEST_ANIMS( "AMB@BRIDGECOPS" );
    }
    return 0;
}

void sub_1743()
{
    if (l_U20 == 0)
    {
        GET_CURRENT_BASIC_COP_MODEL( ref l_U20 );
    }
    return l_U20;
}

int sub_2096(int iParam0)
{
    int I;
    int[55] iVar4;

    array(ref iVar4, 55);
    iVar4[0] = 1171614426;
    iVar4[1] = 2053223216;
    iVar4[2] = 850991848;
    iVar4[3] = -1830458836;
    iVar4[4] = -1987130134;
    iVar4[5] = -713569950;
    iVar4[6] = 562680400;
    iVar4[7] = -960289747;
    iVar4[8] = 1938952078;
    iVar4[9] = 1938952078;
    iVar4[10] = 1353720154;
    iVar4[11] = 1491375716;
    iVar4[12] = 904750859;
    iVar4[13] = 1203311498;
    iVar4[14] = 569305213;
    iVar4[15] = -2137348917;
    iVar4[16] = -1627000575;
    iVar4[17] = 1759673526;
    iVar4[18] = 1677715180;
    iVar4[19] = 1747439474;
    iVar4[20] = 800869680;
    iVar4[21] = 400514754;
    iVar4[22] = 400514754;
    iVar4[23] = -907477130;
    iVar4[24] = -1099960214;
    iVar4[25] = -1660661558;
    iVar4[26] = 353883353;
    iVar4[27] = -1961627517;
    iVar4[28] = 1560980623;
    iVar4[29] = 1127131465;
    iVar4[30] = 837858166;
    iVar4[31] = 1033245328;
    iVar4[32] = 1127131465;
    iVar4[33] = 2046537925;
    iVar4[34] = 861409633;
    iVar4[35] = 583100975;
    iVar4[36] = 148777611;
    iVar4[37] = 1911513875;
    iVar4[38] = -350085182;
    iVar4[39] = -488123221;
    iVar4[40] = -1900572838;
    iVar4[41] = -845979911;
    iVar4[42] = 1677715180;
    iVar4[43] = 1917016601;
    iVar4[44] = 1064455782;
    iVar4[45] = -1346687836;
    iVar4[46] = -119658072;
    iVar4[47] = -810318068;
    iVar4[48] = -1043459709;
    iVar4[49] = 788045382;
    iVar4[50] = -1842748181;
    iVar4[51] = -1842748181;
    iVar4[52] = 1147287684;
    iVar4[53] = -283209848;
    iVar4[54] = 1638119866;
    for ( I = 0; I < 55; I++ )
    {
        if (iParam0 == iVar4[I])
        {
            return 1;
        }
    }
    return 0;
}

void sub_3434(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float Result;

    GET_MODEL_DIMENSIONS( uParam0, ref uVar3, ref uVar6 );
    Result = uVar6._fU4;
    Result += 0.70000000;
    return Result;
}

void sub_4144()
{
    if (l_U23)
    {
        while (l_U22 < 1.00000000)
        {
            WAIT( 0 );
            l_U22 += 0.02500000;
            if (NOT (IS_CAR_DEAD( l_U18 )))
            {
                CONTROL_CAR_DOOR( l_U18, 5, 1, l_U22 );
            }
        }
        if (l_U22 >= 1.00000000)
        {
            l_U22 = 1.00000000;
            l_U23 = 0;
        }
    }
    if (l_U24)
    {
        while (l_U22 > 0.00000000)
        {
            WAIT( 0 );
            l_U22 -= 0.02500000;
            if (NOT (IS_CAR_DEAD( l_U18 )))
            {
                CONTROL_CAR_DOOR( l_U18, 5, 1, l_U22 );
            }
        }
        if (l_U22 < 0.00000000)
        {
            l_U22 = 0.00000000;
            l_U24 = 0;
        }
    }
    return;
}

void sub_4477()
{
    float fVar2;
    unknown uVar3;

    fVar2 = 90.00000000;
    if (NOT (IS_CHAR_DEAD( sub_441() )))
    {
        if (NOT (IS_CHAR_DEAD( l_U6 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_441(), l_U6, fVar2, fVar2, fVar2, 0 )))
            {
                DELETE_CHAR( ref l_U6 );
            }
        }
        if (NOT (IS_CAR_DEAD( l_U18 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_441(), l_U18, fVar2, fVar2, fVar2, 0 )))
            {
                DELETE_CAR( ref l_U18 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U19 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_441(), l_U19, fVar2, fVar2, fVar2, 0 )))
            {
                DELETE_CHAR( ref l_U19 );
            }
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}
