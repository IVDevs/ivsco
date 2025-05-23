void main()
{
    l_U0 = 0;
    l_U4 = {-802.93730000, 780.15340000, -20.59750000};
    l_U7 = 138.86630000;
    l_U8 = {3.00000000, 0.00000000, 0.00000000};
    l_U11 = {5.58410000, -3.80710000, 2.00000000};
    l_U14 = 270.04640000;
    l_U17 = 0;
    l_U19 = 0.00000000;
    l_U20 = 0;
    l_U21 = 0;
    l_U22 = 0;
    l_U29 = -1;
    l_U30 = {-546.31050000, 333.39290000, -16.78290000};
    l_U33 = {-794.00230000, 779.67150000, -20.90000000};
    l_U4 = {l_U36._fU4[0]};
    l_U7 = l_U36._fU68[0];
    sub_191();
    sub_372();
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U0)
            {
                case 0:
                if (sub_449())
                {
                    if (sub_618())
                    {
                        if (sub_659())
                        {
                            l_U0 = 1;
                        }
                    }
                }
                break;
                case 1:
                switch (l_U18)
                {
                    case 0:
                    if (NOT (IS_CHAR_INJURED( l_U3 )))
                    {
                        if (NOT l_U22)
                        {
                            GET_SCRIPT_TASK_STATUS( l_U3, 29, ref l_U2 );
                            if (l_U2 == 1)
                            {
                                GET_SEQUENCE_PROGRESS( l_U3, ref l_U23 );
                                if (l_U23 == 2)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U16 )))
                                    {
                                        if (NOT (IS_CAR_DEAD( l_U15 )))
                                        {
                                            TASK_CAR_DRIVE_WANDER( l_U16, l_U15, 15.00000000, 2 );
                                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U15 );
                                            l_U22 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                    case 1:
                    if (NOT (IS_CHAR_INJURED( l_U3 )))
                    {
                        if (NOT l_U22)
                        {
                            if (NOT (IS_CAR_DEAD( l_U15 )))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U3, 29, ref l_U2 );
                                if (l_U2 == 1)
                                {
                                    GET_SEQUENCE_PROGRESS( l_U3, ref l_U23 );
                                    if (l_U23 == 0)
                                    {
                                        l_U20 = 1;
                                        sub_3021();
                                    }
                                    if (l_U23 == 2)
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U16 )))
                                        {
                                            l_U21 = 1;
                                            sub_3021();
                                            if (NOT (IS_CHAR_DEAD( l_U16 )))
                                            {
                                                TASK_CAR_DRIVE_WANDER( l_U16, l_U15, 15.00000000, 2 );
                                            }
                                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U15 );
                                            l_U22 = 1;
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
            sub_3354();
        }
    }
    return;
}

void sub_191()
{
    l_U28 = VDIST( l_U4, l_U30 );
    if (l_U28 < 5.00000000)
    {
        l_U11 = {-554.28990000, 334.75030000, -16.97600000};
        l_U24 = "GtaMloRoomTUN4";
        l_U14 = 90.00000000;
    }
    l_U28 = VDIST( l_U4, l_U33 );
    if (l_U28 < 5.00000000)
    {
        l_U11 = {-791.64280000, 777.19590000, -20.98980000};
        l_U24 = "GtaMloRoomTUN2";
        l_U14 = 270.00000000;
    }
    return;
}

void sub_372()
{
    return;
}

int sub_449()
{
    if (l_U29 == -1)
    {
        if (sub_468())
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U29 );
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U29 );
        }
        if (l_U29 == 0)
        {
            return 1;
        }
    }
    else if (l_U29 == 0)
    {
        return 1;
    }
    return 0;
}

int sub_468()
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

int sub_618()
{
    if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_659()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;

    REQUEST_MODEL( sub_668() );
    REQUEST_ANIMS( "AMB@BRIDGECOPS" );
    if ((HAS_MODEL_LOADED( sub_668() )) AND (HAVE_ANIMS_LOADED( "AMB@BRIDGECOPS" )))
    {
        if (IS_CHAR_DEAD( l_U3 ))
        {
            CREATE_CHAR( 6, sub_668(), l_U4._fU0, l_U4._fU4, l_U4._fU8, ref l_U3, 1 );
            SET_INFORM_RESPECTED_FRIENDS( l_U3, 999, 999 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U3, l_U24 );
            SET_CHAR_HEADING( l_U3, l_U7 );
            TASK_START_SCENARIO_IN_PLACE( l_U3, "Scenario_Bouncer", -1082130432 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar9 );
            l_U18 = uVar9;
        }
        if (NOT (IS_CHAR_DEAD( l_U3 )))
        {
            if (NOT (IS_CHAR_WAITING_FOR_WORLD_COLLISION( l_U3 )))
            {
                switch (l_U18)
                {
                    case 0:
                    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar6, ref iVar7 );
                    if (iVar7 > -1)
                    {
                        if (IS_THIS_MODEL_A_CAR( uVar6 ))
                        {
                            if (NOT (sub_1021( uVar6 )))
                            {
                                if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                {
                                    CREATE_CAR( uVar6, l_U11._fU0, l_U11._fU4, l_U11._fU8, ref l_U15, 1 );
                                    SET_ROOM_FOR_CAR_BY_NAME( l_U15, l_U24 );
                                    SET_CAR_HEADING( l_U15, l_U14 );
                                    SET_CAR_COORDINATES( l_U15, l_U11._fU0, l_U11._fU4, l_U11._fU8 );
                                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U15, ref l_U16 );
                                    SET_ROOM_FOR_CHAR_BY_NAME( l_U16, l_U24 );
                                    TASK_CAR_TEMP_ACTION( l_U16, l_U15, 1, 999999 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U15, -1.50000000, 0.25000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    SET_CHAR_COORDINATES( l_U3, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                                    SET_CHAR_HEADING( l_U3, l_U14 );
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U15, 0.00000000, 0.25000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    OPEN_SEQUENCE_TASK( ref l_U1 );
                                    TASK_PLAY_ANIM( 0, "car_chat_outside", "AMB@BRIDGECOPS", 4.00000000, 0, 0, 0, 1, -1 );
                                    TASK_PLAY_ANIM( 0, "car_chat_outside_2", "AMB@BRIDGECOPS", 4.00000000, 0, 0, 0, 0, -1 );
                                    TASK_GO_STRAIGHT_TO_COORD( 0, l_U4._fU0, l_U4._fU4, l_U4._fU8, 2, -2 );
                                    TASK_ACHIEVE_HEADING( 0, l_U7 );
                                    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                    CLOSE_SEQUENCE_TASK( l_U1 );
                                    TASK_PERFORM_SEQUENCE( l_U3, l_U1 );
                                    CLEAR_SEQUENCE_TASK( l_U1 );
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
                            if (NOT (sub_1021( uVar6 )))
                            {
                                if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                {
                                    CREATE_CAR( uVar6, l_U11._fU0, l_U11._fU4, l_U11._fU8, ref l_U15, 1 );
                                    SET_ROOM_FOR_CAR_BY_NAME( l_U15, l_U24 );
                                    SET_CAR_HEADING( l_U15, l_U14 );
                                    SET_CAR_COORDINATES( l_U15, l_U11._fU0, l_U11._fU4, l_U11._fU8 );
                                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U15, ref l_U16 );
                                    SET_ROOM_FOR_CHAR_BY_NAME( l_U16, l_U24 );
                                    TASK_CAR_TEMP_ACTION( l_U16, l_U15, 1, 999999 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U15, 0.00000000, -sub_2311( uVar6 ), 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    SET_CHAR_COORDINATES( l_U3, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                                    SET_CHAR_HEADING( l_U3, l_U14 );
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U15, 0.00000000, 0.25000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    OPEN_SEQUENCE_TASK( ref l_U1 );
                                    TASK_PLAY_ANIM( 0, "Open_Boot", "AMB@BRIDGECOPS", 4.00000000, 0, 0, 0, 1, -1 );
                                    TASK_STAND_STILL( 0, 7000 );
                                    TASK_PLAY_ANIM( 0, "Close_Boot", "AMB@BRIDGECOPS", 4.00000000, 0, 0, 0, 0, -1 );
                                    TASK_GO_STRAIGHT_TO_COORD( 0, l_U4._fU0, l_U4._fU4, l_U4._fU8, 2, -2 );
                                    TASK_ACHIEVE_HEADING( 0, l_U7 );
                                    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                    CLOSE_SEQUENCE_TASK( l_U1 );
                                    TASK_PERFORM_SEQUENCE( l_U3, l_U1 );
                                    CLEAR_SEQUENCE_TASK( l_U1 );
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
        REQUEST_MODEL( sub_668() );
        REQUEST_ANIMS( "AMB@BRIDGECOPS" );
    }
    return 0;
}

void sub_668()
{
    if (l_U17 == 0)
    {
        GET_CURRENT_BASIC_COP_MODEL( ref l_U17 );
    }
    return l_U17;
}

int sub_1021(int iParam0)
{
    int I;
    int[51] iVar4;

    array(ref iVar4, 51);
    iVar4[0] = 1171614426;
    iVar4[1] = 2053223216;
    iVar4[2] = 850991848;
    iVar4[3] = -1830458836;
    iVar4[4] = -1987130134;
    iVar4[5] = -713569950;
    iVar4[6] = -960289747;
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
    iVar4[22] = -907477130;
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
    for ( I = 0; I < 51; I++ )
    {
        if (iParam0 == iVar4[I])
        {
            return 1;
        }
    }
    return 0;
}

void sub_2311(unknown uParam0)
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

void sub_3021()
{
    if (l_U20)
    {
        while (l_U19 < 1.00000000)
        {
            WAIT( 0 );
            l_U19 += 0.02500000;
            if (NOT (IS_CAR_DEAD( l_U15 )))
            {
                CONTROL_CAR_DOOR( l_U15, 5, 1, l_U19 );
            }
        }
        if (l_U19 >= 1.00000000)
        {
            l_U19 = 1.00000000;
            l_U20 = 0;
        }
    }
    if (l_U21)
    {
        while (l_U19 > 0.00000000)
        {
            WAIT( 0 );
            l_U19 -= 0.02500000;
            if (NOT (IS_CAR_DEAD( l_U15 )))
            {
                CONTROL_CAR_DOOR( l_U15, 5, 1, l_U19 );
            }
        }
        if (l_U19 < 0.00000000)
        {
            l_U19 = 0.00000000;
            l_U21 = 0;
        }
    }
    return;
}

void sub_3354()
{
    float fVar2;
    unknown uVar3;

    fVar2 = 90.00000000;
    if (NOT (IS_CHAR_DEAD( sub_3370() )))
    {
        if (NOT (IS_CHAR_DEAD( l_U3 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3370(), l_U3, fVar2, fVar2, fVar2, 0 )))
            {
                DELETE_CHAR( ref l_U3 );
            }
        }
        if (NOT (IS_CAR_DEAD( l_U15 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3370(), l_U15, fVar2, fVar2, fVar2, 0 )))
            {
                DELETE_CAR( ref l_U15 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U16 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3370(), l_U16, fVar2, fVar2, fVar2, 0 )))
            {
                DELETE_CHAR( ref l_U16 );
            }
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3370()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}
