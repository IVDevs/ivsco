void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U60 = 0;
    l_U61 = 0;
    l_U64 = 0.00000000;
    l_U65 = 0;
    l_U66 = 0;
    l_U67 = 0;
    l_U68 = -1;
    l_U9 = {l_U69._fU4[0]};
    l_U9._fU8 -= 0.25000000;
    l_U12 = l_U69._fU68[0];
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if ((sub_155()) AND (sub_254()))
            {
                switch (l_U2)
                {
                    case 0:
                    if (sub_565())
                    {
                        sub_3598();
                        l_U2 = 1;
                    }
                    break;
                    case 1:
                    sub_3624();
                    sub_3641();
                    sub_3766();
                    sub_3969();
                    sub_4803();
                    switch (l_U63)
                    {
                        case 0:
                        if (NOT (IS_CHAR_INJURED( l_U5 )))
                        {
                            if (NOT l_U67)
                            {
                                GET_SCRIPT_TASK_STATUS( l_U5, 29, ref l_U4 );
                                if (l_U4 == 7)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U8 )))
                                    {
                                        if (NOT (IS_CAR_DEAD( l_U7 )))
                                        {
                                            if (NOT l_U67)
                                            {
                                                TASK_CAR_DRIVE_WANDER( l_U8, l_U7, 15.00000000, 2 );
                                                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U7 );
                                                l_U67 = 1;
                                            }
                                        }
                                    }
                                    if (NOT (IS_CAR_DEAD( l_U6 )))
                                    {
                                        if (NOT (IS_CHAR_IN_CAR( l_U5, l_U6 )))
                                        {
                                            if (NOT (IS_CHAR_INJURED( sub_164() )))
                                            {
                                                if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_164(), l_U5, 1.50000000, 1.50000000, 1.50000000, 0 ))
                                                {
                                                    if (IS_PLAYER_PLAYING( sub_3978() ))
                                                    {
                                                        ALTER_WANTED_LEVEL_NO_DROP( sub_3978(), 1 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        break;
                        case 1:
                        if (NOT (IS_CHAR_INJURED( l_U5 )))
                        {
                            if (NOT l_U67)
                            {
                                if (NOT (IS_CAR_DEAD( l_U7 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U5, 29, ref l_U4 );
                                    if (l_U4 == 1)
                                    {
                                        GET_SEQUENCE_PROGRESS( l_U5, ref l_U62 );
                                        if (l_U62 == 0)
                                        {
                                            l_U65 = 1;
                                            sub_5350();
                                        }
                                        if (l_U62 == 2)
                                        {
                                            if (NOT (IS_CHAR_INJURED( l_U8 )))
                                            {
                                                l_U66 = 1;
                                                sub_5350();
                                                if (NOT l_U67)
                                                {
                                                    if (NOT (IS_CHAR_DEAD( l_U8 )))
                                                    {
                                                        TASK_CAR_DRIVE_WANDER( l_U8, l_U7, 15.00000000, 2 );
                                                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U7 );
                                                    }
                                                    l_U67 = 1;
                                                }
                                            }
                                        }
                                    }
                                    else if (l_U4 == 7)
                                    {
                                        if (NOT (IS_CHAR_IN_CAR( l_U5, l_U6 )))
                                        {
                                            if (NOT (IS_CHAR_INJURED( sub_164() )))
                                            {
                                                if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_164(), l_U5, 1.50000000, 1.50000000, 1.50000000, 0 ))
                                                {
                                                    if (NOT (IS_PLAYER_PLAYING( sub_3978() )))
                                                    {
                                                        ALTER_WANTED_LEVEL_NO_DROP( sub_3978(), 1 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        break;
                        case 2:
                        if (NOT (IS_CAR_DEAD( l_U6 )))
                        {
                            if (NOT (IS_CHAR_INJURED( sub_164() )))
                            {
                                if (IS_CHAR_TOUCHING_VEHICLE( sub_164(), l_U6 ))
                                {
                                    if (NOT (IS_PLAYER_PLAYING( sub_3978() )))
                                    {
                                        ALTER_WANTED_LEVEL_NO_DROP( sub_3978(), 1 );
                                    }
                                }
                            }
                        }
                        break;
                    }
                    break;
                    case 2: break;
                }
            }
            else
            {
                sub_5926();
            }
        }
        else
        {
            sub_5926();
        }
    }
    return;
}

int sub_155()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_164() )))
    {
        GET_INTERIOR_FROM_CHAR( sub_164(), ref iVar2 );
    }
    if (iVar2 == nil)
    {
        return 1;
    }
    return 0;
}

void sub_164()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_254()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;

    if (NOT sub_263())
    {
        return 0;
    }
    GET_CLOSEST_MAJOR_CAR_NODE( l_U9._fU0, l_U9._fU4, l_U9._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    fVar5 = VDIST( l_U9, uVar2 );
    if (fVar5 > 5.00000000)
    {
        return 0;
    }
    if (l_U68 == -1)
    {
        if (sub_372())
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U68 );
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 1, ref l_U68 );
        }
        if (l_U68 == 0)
        {
            return 1;
        }
    }
    else if (l_U68 == 0)
    {
        return 1;
    }
    return 0;
}

void sub_263()
{
    int Result;

    Result = 1;
    return Result;
}

int sub_372()
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

int sub_565()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;

    l_U29[0] = {0.00000000, -4.00000000, -0.50000000};
    l_U29[1] = {-0.50000000, -3.50000000, -0.50000000};
    l_U29[2] = {-1.20000000, -3.25000000, -0.50000000};
    l_U29[3] = {-1.80000000, -2.50000000, -0.50000000};
    l_U29[4] = {-1.80000000, -1.50000000, -0.50000000};
    l_U29[5] = {-1.80000000, -0.50000000, -0.50000000};
    l_U29[6] = {-1.80000000, 0.50000000, -0.50000000};
    l_U29[7] = {-1.80000000, 1.50000000, -0.50000000};
    REQUEST_MODEL( sub_771() );
    REQUEST_MODEL( 529682743 );
    REQUEST_MODEL( sub_829() );
    REQUEST_ANIMS( "AMB@BRIDGECOPS" );
    if ((((HAS_MODEL_LOADED( sub_771() )) AND (HAS_MODEL_LOADED( 529682743 ))) AND (HAS_MODEL_LOADED( sub_829() ))) AND (HAVE_ANIMS_LOADED( "AMB@BRIDGECOPS" )))
    {
        if (IS_CAR_DEAD( l_U6 ))
        {
            CREATE_CAR( sub_771(), l_U9._fU0, l_U9._fU4, l_U9._fU8, ref l_U6, 1 );
            SET_HAS_BEEN_OWNED_BY_PLAYER( l_U6, 0 );
            SET_CAR_HEADING( l_U6, l_U12 );
            SET_CAR_COORDINATES( l_U6, l_U9._fU0, l_U9._fU4, l_U9._fU8 );
            CREATE_CHAR_INSIDE_CAR( l_U6, 6, sub_829(), ref l_U5 );
            SET_INFORM_RESPECTED_FRIENDS( l_U5, 999, 999 );
            TASK_CAR_TEMP_ACTION( l_U5, l_U6, 1, 999999 );
            for ( I = 0; I < 8; I++ )
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U6, l_U29[I]._fU0, l_U29[I]._fU4, l_U29[I]._fU8, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                GET_GROUND_Z_FOR_3D_COORD( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref uVar3._fU8 );
                CREATE_OBJECT( 529682743, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U18[I], 1 );
            }
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar8 );
            l_U63 = uVar8;
        }
        switch (l_U63)
        {
            case 0:
            if (NOT (IS_CAR_DEAD( l_U6 )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U6, 0.00000000, 10.00000000, -0.50000000, ref l_U13._fU0, ref l_U13._fU4, ref l_U13._fU8 );
                GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar6, ref iVar7 );
                if (iVar7 > -1)
                {
                    if (IS_THIS_MODEL_A_CAR( uVar6 ))
                    {
                        if (NOT (sub_1382( uVar6 )))
                        {
                            if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                            {
                                CREATE_CAR( uVar6, l_U13._fU0, l_U13._fU4, l_U13._fU8, ref l_U7, 1 );
                                SET_CAR_HEADING( l_U7, l_U12 );
                                SET_CAR_COORDINATES( l_U7, l_U13._fU0, l_U13._fU4, l_U13._fU8 );
                                CREATE_RANDOM_CHAR_AS_DRIVER( l_U7, ref l_U8 );
                                TASK_CAR_TEMP_ACTION( l_U8, l_U7, 1, 999999 );
                                if (NOT (IS_CAR_DEAD( l_U6 )))
                                {
                                    SWITCH_CAR_SIREN( l_U6, 1 );
                                }
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U7, -1.50000000, 0.25000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                if (NOT (IS_CHAR_INJURED( l_U5 )))
                                {
                                    if (IS_CHAR_IN_ANY_CAR( l_U5 ))
                                    {
                                        WARP_CHAR_FROM_CAR_TO_COORD( l_U5, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                                    }
                                    else
                                    {
                                        SET_CHAR_COORDINATES( l_U5, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                                    }
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U7, 0.00000000, 0.25000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    if (HAVE_ANIMS_LOADED( "AMB@BRIDGECOPS" ))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U3 );
                                        TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                                        TASK_PLAY_ANIM( 0, "car_chat_outside", "AMB@BRIDGECOPS", 4.00000000, 0, 0, 0, 1, -1 );
                                        TASK_PLAY_ANIM( 0, "car_chat_outside_2", "AMB@BRIDGECOPS", 4.00000000, 0, 0, 0, 0, -1 );
                                        TASK_ENTER_CAR_AS_DRIVER( 0, l_U6, -2 );
                                        CLOSE_SEQUENCE_TASK( l_U3 );
                                        TASK_PERFORM_SEQUENCE( l_U5, l_U3 );
                                        CLEAR_SEQUENCE_TASK( l_U3 );
                                        SAY_AMBIENT_SPEECH( l_U5, sub_2561(), 0, 0, 0 );
                                    }
                                    else
                                    {
                                        TASK_ENTER_CAR_AS_DRIVER( l_U5, l_U6, -2 );
                                    }
                                }
                                return 1;
                            }
                        }
                        else
                        {
                            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar6, ref iVar7 );
                        }
                    }
                    else
                    {
                        GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar6, ref iVar7 );
                    }
                }
                else
                {
                    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar6, ref iVar7 );
                }
            }
            break;
            case 1:
            if (NOT (IS_CAR_DEAD( l_U6 )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U6, 0.00000000, 10.00000000, -0.50000000, ref l_U13._fU0, ref l_U13._fU4, ref l_U13._fU8 );
                GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar6, ref iVar7 );
                if (iVar7 > -1)
                {
                    if (IS_THIS_MODEL_A_CAR( uVar6 ))
                    {
                        if (NOT (sub_1382( uVar6 )))
                        {
                            if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                            {
                                CREATE_CAR( uVar6, l_U13._fU0, l_U13._fU4, l_U13._fU8, ref l_U7, 1 );
                                SET_CAR_HEADING( l_U7, l_U12 );
                                SET_CAR_COORDINATES( l_U7, l_U13._fU0, l_U13._fU4, l_U13._fU8 );
                                CREATE_RANDOM_CHAR_AS_DRIVER( l_U7, ref l_U8 );
                                TASK_CAR_TEMP_ACTION( l_U8, l_U7, 1, 999999 );
                                if (NOT (IS_CAR_DEAD( l_U6 )))
                                {
                                    SWITCH_CAR_SIREN( l_U6, 1 );
                                }
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U7, 0.00000000, -sub_3080( uVar6 ), 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                if (NOT (IS_CHAR_INJURED( l_U5 )))
                                {
                                    if (IS_CHAR_IN_ANY_CAR( l_U5 ))
                                    {
                                        WARP_CHAR_FROM_CAR_TO_COORD( l_U5, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                                    }
                                    else
                                    {
                                        SET_CHAR_COORDINATES( l_U5, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                                    }
                                    SET_CHAR_HEADING( l_U5, l_U12 );
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U7, 0.00000000, 0.25000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    if (HAVE_ANIMS_LOADED( "AMB@BRIDGECOPS" ))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U3 );
                                        TASK_PLAY_ANIM( 0, "Open_Boot", "AMB@BRIDGECOPS", 4.00000000, 0, 0, 0, 1, -1 );
                                        TASK_STAND_STILL( 0, 10000 );
                                        TASK_PLAY_ANIM( 0, "Close_Boot", "AMB@BRIDGECOPS", 4.00000000, 0, 0, 0, 0, -1 );
                                        TASK_ENTER_CAR_AS_DRIVER( 0, l_U6, -2 );
                                        CLOSE_SEQUENCE_TASK( l_U3 );
                                        TASK_PERFORM_SEQUENCE( l_U5, l_U3 );
                                        CLEAR_SEQUENCE_TASK( l_U3 );
                                    }
                                    else
                                    {
                                        TASK_ENTER_CAR_AS_DRIVER( l_U5, l_U6, -2 );
                                    }
                                }
                                return 1;
                            }
                        }
                        else
                        {
                            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar6, ref iVar7 );
                        }
                    }
                }
                else
                {
                    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar6, ref iVar7 );
                }
            }
            break;
            case 2:
            return 1;
            break;
        }
    }
    else
    {
        REQUEST_MODEL( 529682743 );
        REQUEST_ANIMS( "AMB@BRIDGECOPS" );
    }
    return 0;
}

void sub_771()
{
    if (l_U16 == 0)
    {
        GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U16 );
    }
    return l_U16;
}

void sub_829()
{
    if (l_U17 == 0)
    {
        GET_CURRENT_BASIC_COP_MODEL( ref l_U17 );
    }
    return l_U17;
}

int sub_1382(int iParam0)
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

string sub_2561()
{
    int iVar2;

    iVar2 = sub_2572( 0, 2 );
    if (iVar2 == 0)
    {
        return "PULLED_OVER_SPEEDING";
    }
    else if (iVar2 == 1)
    {
        return "PULLED_OVER_RECKLESS";
    }
    else if (iVar2 == 2)
    {
        return "PULLED_OVER_DAMAGED";
    };;;
    return "PULLED_OVER_RECKLESS";
}

void sub_2572(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_3080(unknown uParam0)
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

void sub_3598()
{
    return;
}

void sub_3624()
{
    return;
}

void sub_3641()
{
    if (NOT (IS_CHAR_INJURED( sub_164() )))
    {
        if (NOT (IS_CAR_DEAD( l_U6 )))
        {
            if (IS_CHAR_IN_CAR( sub_164(), l_U6 ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U6 );
            }
        }
        if (NOT (IS_CAR_DEAD( l_U7 )))
        {
            if (IS_CHAR_IN_CAR( sub_164(), l_U7 ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U7 );
            }
        }
    }
    return;
}

void sub_3766()
{
    if (NOT (IS_CHAR_INJURED( sub_164() )))
    {
        if (NOT l_U60)
        {
            if (NOT (IS_CAR_DEAD( l_U6 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_164(), l_U6, 50.00000000, 50.00000000, 50.00000000, 0 ))
                {
                    if (SET_CAR_ON_GROUND_PROPERLY( l_U6 ))
                    {
                        l_U60 = 1;
                    }
                }
            }
        }
        if (NOT l_U61)
        {
            if (NOT (IS_CAR_DEAD( l_U7 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_164(), l_U7, 50.00000000, 50.00000000, 50.00000000, 0 ))
                {
                    if (SET_CAR_ON_GROUND_PROPERLY( l_U7 ))
                    {
                        l_U61 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_3969()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;

    if (IS_PLAYER_PLAYING( sub_3978() ))
    {
        if (NOT (IS_CAR_DEAD( l_U6 )))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U6, -3.50000000, 0.00000000, 1.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (NOT (IS_CHAR_INJURED( sub_164() )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_164() ))
                {
                    if (NOT (sub_4112( sub_164() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_164(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 6.00000000, 6.00000000, 6.00000000, 0 ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_164(), ref uVar5 );
                            GET_CAR_SPEED( uVar5, ref fVar6 );
                            if (fVar6 > 30.00000000)
                            {
                                ;
                            }
                            else if (fVar6 < 3.00000000)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U5 )))
                                {
                                    SAY_AMBIENT_SPEECH( l_U5, "NOTHING_TO_SEE", 0, 0, 0 );
                                }
                            }
                        }
                    }
                    else if (NOT (IS_CAR_DEAD( l_U6 )))
                    {
                        if (IS_CHAR_IN_CAR( sub_164(), l_U6 ))
                        {
                            ;
                        }
                    }
                }
            }
        }
        if (NOT (IS_CAR_DEAD( l_U6 )))
        {
            if (NOT (IS_CHAR_INJURED( sub_164() )))
            {
                if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U6, sub_164() ))
                {
                    ;
                }
            }
        }
        if (IS_WANTED_LEVEL_GREATER( sub_3978(), 0 ))
        {
            sub_4771();
        }
    }
    return;
}

void sub_3978()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_4112(int iParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (((((((((((IS_CAR_MODEL( uVar3, 1171614426 )) || (IS_CAR_MODEL( uVar3, 1127131465 ))) || (IS_CAR_MODEL( uVar3, 1938952078 ))) || (IS_CAR_MODEL( uVar3, 148777611 ))) || (IS_CAR_MODEL( uVar3, 1911513875 ))) || (IS_CAR_MODEL( uVar3, 2046537925 ))) || (IS_CAR_MODEL( uVar3, -350085182 ))) || (IS_CAR_MODEL( uVar3, -1900572838 ))) || (IS_CAR_MODEL( uVar3, -1627000575 ))) || (IS_CAR_MODEL( uVar3, -283209848 ))) || (IS_CAR_MODEL( uVar3, 562680400 )))
            {
                if (iParam0 == sub_164())
                {
                    if (sub_4342())
                    {
                        return 1;
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_4342()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( sub_164() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_164() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_164(), ref uVar2 );
            if ((IS_VEH_DRIVEABLE( uVar2 )) AND (NOT (IS_CAR_ON_FIRE( uVar2 ))))
            {
                GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
                if (NOT (IS_CAR_MODEL( uVar2, 1491375716 )))
                {
                    if (iVar3 == sub_164())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_4771()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_4803()
{
    if (NOT (IS_CAR_DEAD( l_U6 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U5 )))
        {
            if (IS_CHAR_IN_CAR( l_U5, l_U6 ))
            {
                if (IS_CAR_SIREN_ON( l_U6 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U7 )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U8 )))
                        {
                            TASK_CAR_DRIVE_WANDER( l_U8, l_U7, 20.00000000, 3 );
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U8 );
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U7 );
                        }
                    }
                    SWITCH_CAR_SIREN( l_U6, 0 );
                }
            }
        }
    }
    return;
}

void sub_5350()
{
    if (l_U65)
    {
        if (l_U64 < 1.00000000)
        {
            WAIT( 0 );
            l_U64 += 0.02500000;
            if (NOT (IS_CAR_DEAD( l_U7 )))
            {
                CONTROL_CAR_DOOR( l_U7, 5, 1, l_U64 );
            }
        }
        if (l_U64 >= 1.00000000)
        {
            l_U64 = 1.00000000;
            l_U65 = 0;
        }
    }
    if (l_U66)
    {
        if (l_U64 > 0.00000000)
        {
            WAIT( 0 );
            l_U64 -= 0.02500000;
            if (NOT (IS_CAR_DEAD( l_U7 )))
            {
                CONTROL_CAR_DOOR( l_U7, 5, 1, l_U64 );
            }
        }
        if (l_U64 < 0.00000000)
        {
            l_U64 = 0.00000000;
            l_U66 = 0;
        }
    }
    return;
}

void sub_5926()
{
    float fVar2;
    int I;

    fVar2 = 90.00000000;
    if (NOT (IS_CHAR_INJURED( sub_164() )))
    {
        if (NOT (IS_CHAR_DEAD( l_U5 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_164(), l_U5, fVar2, fVar2, fVar2, 0 )))
            {
                DELETE_CHAR( ref l_U5 );
            }
        }
        if (NOT (IS_CAR_DEAD( l_U6 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_164(), l_U6, fVar2, fVar2, fVar2, 0 )))
            {
                DELETE_CAR( ref l_U6 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U8 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_164(), l_U8, fVar2, fVar2, fVar2, 0 )))
            {
                DELETE_CHAR( ref l_U8 );
            }
        }
        if (NOT (IS_CAR_DEAD( l_U7 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_164(), l_U7, fVar2, fVar2, fVar2, 0 )))
            {
                DELETE_CAR( ref l_U7 );
            }
        }
    }
    for ( I = 0; I < 10; I++ )
    {
        DELETE_OBJECT( ref l_U18[I] );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}
