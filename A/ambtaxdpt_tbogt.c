void main()
{
    float fVar2;
    int iVar3;

    l_U0 = 0;
    l_U1 = 0;
    l_U2 = 0;
    l_U3 = 0;
    l_U4 = 1;
    l_U5 = 0;
    l_U6 = 0;
    l_U7 = 0;
    l_U8 = 0;
    l_U9 = 0;
    l_U10 = 0;
    l_U11 = 0;
    l_U28 = {-1.40000000, 1.70000000, 0.00000000};
    l_U31 = {0.00000000, 2.78500000, 0.00000000};
    l_U34 = {810.68000000, -277.28000000, 14.33780000};
    l_U37 = 125.00000000;
    l_U39 = -276900515;
    l_U41 = 0;
    l_U45 = "misstaxidepot";
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_177();
    }
    WAIT( 0 );
    for ( l_U40 = 0; l_U40 < l_U46._fU0; l_U40++ )
    {
        if (l_U40 == 0)
        {
            l_U25 = {l_U46._fU4[l_U40]};
        }
    }
    if (sub_504())
    {
        REQUEST_MODEL( -276900515 );
        REQUEST_MODEL( 8772846 );
        REQUEST_ANIMS( l_U45 );
        while (l_U4)
        {
            WAIT( 0 );
            if ((IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()) AND (sub_504()))
            {
                switch (l_U0)
                {
                    case 0:
                    sub_635();
                    break;
                    case 2:
                    l_U11 = 0;
                    if (IS_PLAYER_PLAYING( sub_1696() ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U23 )))
                        {
                            if (IS_CHAR_IN_CAR( sub_1755(), l_U23 ))
                            {
                                l_U11 = 1;
                            }
                            else
                            {
                                GET_DOOR_ANGLE_RATIO( l_U23, 0, ref fVar2 );
                                if (fVar2 > 0.00000000)
                                {
                                    l_U11 = 1;
                                }
                                else
                                {
                                    GET_DOOR_ANGLE_RATIO( l_U23, 1, ref fVar2 );
                                    if (fVar2 > 0.00000000)
                                    {
                                        l_U11 = 1;
                                    }
                                }
                            }
                            if (NOT l_U11)
                            {
                                GET_CAR_CHAR_IS_USING( sub_1755(), ref iVar3 );
                                if (iVar3 == l_U23)
                                {
                                    l_U11 = 1;
                                }
                            }
                        }
                        if (NOT (IS_CAR_DEAD( l_U24 )))
                        {
                            if (IS_CHAR_IN_CAR( sub_1755(), l_U24 ))
                            {
                                l_U11 = 1;
                            }
                        }
                    }
                    if (l_U11)
                    {
                        sub_1968();
                        l_U0 = 3;
                    }
                    else
                    {
                        sub_2268();
                        if (g_U12303)
                        {
                            sub_1968();
                            l_U0 = 3;
                        }
                    }
                    break;
                    case 3: break;
                    default: break;
                }
            }
            else
            {
                l_U4 = 0;
            }
            sub_5985();
        }
    }
    sub_177();
    return;
}

void sub_177()
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U23 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U24 );
    for ( l_U40 = 0; l_U40 < l_U41; l_U40++ )
    {
        if (DOES_CHAR_EXIST( l_U12[l_U40] ))
        {
            DELETE_CHAR( ref l_U12[l_U40] );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U12[l_U40] );
    }
    if (DOES_CHAR_EXIST( l_U18 ))
    {
        DELETE_CHAR( ref l_U18 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U18 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U19 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U39 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 8772846 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -276900515 );
    REMOVE_ANIMS( l_U45 );
    CLEAR_SEQUENCE_TASK( l_U21 );
    REMOVE_DECISION_MAKER( l_U38 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_504()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_635()
{
    int iVar2;
    vector vVar3;
    vector[5] vVar6;
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
    float[5] fVar22;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;

    if (((NOT (HAS_MODEL_LOADED( -276900515 ))) || (NOT (HAS_MODEL_LOADED( 8772846 )))) || (NOT (HAVE_ANIMS_LOADED( l_U45 ))))
    {
        REQUEST_MODEL( -276900515 );
        REQUEST_MODEL( 8772846 );
        REQUEST_ANIMS( l_U45 );
    }
    else
    {
        COPY_CHAR_DECISION_MAKER( 65539, ref l_U38 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 1000, ref iVar2 );
        if (iVar2 > 500)
        {
            l_U3 = 0;
        }
        else
        {
            l_U3 = 1;
        }
        sub_783();
        CREATE_CAR( l_U39, 804.80520000, -273.05940000, 14.94750000, ref l_U23, 1 );
        CHANGE_CAR_COLOUR( l_U23, 0, 0 );
        SET_EXTRA_CAR_COLOURS( l_U23, 1, 0 );
        SET_CAR_HEADING( l_U23, 180.52110000 );
        SET_CAR_COORDINATES( l_U23, 804.80520000, -273.05940000, 14.53780000 );
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U23, 1 );
        if (l_U3 == 1)
        {
            CREATE_CHAR( 26, 8772846, 805.96330000, -268.45330000, 14.33770000, ref l_U18, 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U18 );
            SET_CHAR_DECISION_MAKER( l_U18, l_U38 );
            WAIT( 0 );
            if (NOT (IS_CHAR_INJURED( l_U18 )))
            {
                if (NOT (IS_CAR_DEAD( l_U23 )))
                {
                    WARP_CHAR_INTO_CAR( l_U18, l_U23 );
                    REMOVE_CAR_WINDOW( l_U23, 0 );
                    if (HAVE_ANIMS_LOADED( l_U45 ))
                    {
                        TASK_PLAY_ANIM( l_U18, "Car_Chat", l_U45, 8.00000000, 1, 0, 0, 0, 0 );
                    }
                }
            }
        }
        array(ref vVar6, 5);
        array(ref fVar22, 5);
        vVar6[0] = {808.54970000, -272.86040000, 14.33780000};
        fVar22[0] = 159.00000000;
        l_U41 = 1;
        CREATE_CHAR( 26, 8772846, vVar6[0]._fU0, vVar6[0]._fU4, vVar6[0]._fU8, ref l_U12[0], 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U12[0] );
        SET_CHAR_HEADING( l_U12[0], fVar22[0] );
        SET_CHAR_DECISION_MAKER( l_U12[0], l_U38 );
        if (l_U3 == 1)
        {
            if (NOT (IS_CAR_DEAD( l_U23 )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U23, -1.30330000, -0.06040000, 0.00000000, ref vVar3.x, ref vVar3.y, ref vVar3.z );
            }
            if (NOT (IS_CHAR_INJURED( l_U12[0] )))
            {
                SET_CHAR_COORDINATES( l_U12[0], vVar3.x, vVar3.y, 14.33780000 );
                if (NOT (IS_CHAR_INJURED( l_U18 )))
                {
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U12[0], l_U18 );
                }
                if (HAVE_ANIMS_LOADED( l_U45 ))
                {
                    TASK_PLAY_ANIM( l_U12[0], "car_chat_outside", l_U45, 12.00000000, 1, 0, 0, 0, -1 );
                }
            }
        }
        else if (IS_VEH_DRIVEABLE( l_U23 ))
        {
            GET_MODEL_DIMENSIONS( -956048545, ref uVar28, ref vVar3 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U23, 0.00000000, uVar28._fU4 + -0.32000000, 0.00000000, ref vVar3.x, ref vVar3.y, ref vVar3.z );
            vVar3 = {807.67860000, -273.35610000, 14.33780000};
            if (NOT (IS_CHAR_DEAD( l_U12[0] )))
            {
                SET_CHAR_COORDINATES( l_U12[0], vVar3.x, vVar3.y, vVar3.z );
                SET_CHAR_HEADING( l_U12[0], 159.20530000 );
            }
            l_U8 = 1;
        }
        GET_GAME_TIMER( ref l_U42 );
        GENERATE_RANDOM_INT_IN_RANGE( 3000, 10000, ref l_U43 );
        l_U0 = 2;
    }
    return;
}

void sub_783()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 4000, ref l_U44 );
    if (l_U44 > 2000)
    {
        l_U39 = -276900515;
    }
    else
    {
        l_U39 = -276900515;
    }
    return;
}

void sub_1696()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1755()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1968()
{
    for ( l_U40 = 0; l_U40 < l_U41; l_U40++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U12[l_U40] )))
        {
            CLEAR_CHAR_TASKS( l_U12[l_U40] );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U12[l_U40] );
        l_U12[l_U40] = nil;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U23 );
    l_U23 = nil;
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U24 );
    l_U24 = nil;
    if (NOT (IS_CHAR_INJURED( l_U18 )))
    {
        CLEAR_CHAR_TASKS( l_U18 );
        if (IS_CHAR_IN_ANY_CAR( l_U18 ))
        {
            TASK_LEAVE_ANY_CAR( l_U18 );
        }
        SET_CHAR_KEEP_TASK( l_U18, 1 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U18 );
    l_U18 = nil;
    if (NOT (IS_CHAR_DEAD( l_U19 )))
    {
        CLEAR_CHAR_TASKS( l_U19 );
        SET_CHAR_KEEP_TASK( l_U19, 1 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U19 );
    l_U19 = nil;
    MARK_MODEL_AS_NO_LONGER_NEEDED( 8772846 );
    return;
}

void sub_2268()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    float fVar12;

    if ((NOT g_U12303) AND (sub_2283()))
    {
        switch (l_U1)
        {
            case 0:
            GET_GAME_TIMER( ref iVar9 );
            iVar10 = iVar9 - l_U42;
            if ((iVar10 >= l_U43) AND (sub_2283()))
            {
                if (NOT l_U7)
                {
                    l_U7 = 1;
                }
                else if (sub_2500( ref uVar2, ref uVar8 ))
                {
                    sub_783();
                    CREATE_CAR( l_U39, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U24, 1 );
                    CHANGE_CAR_COLOUR( l_U24, 0, 0 );
                    SET_EXTRA_CAR_COLOURS( l_U24, 1, 0 );
                    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U24, 1 );
                    TURN_CAR_TO_FACE_COORD( l_U24, uVar5._fU0, uVar5._fU4 );
                    CREATE_CHAR_INSIDE_CAR( l_U24, 4, 8772846, ref l_U19 );
                    SET_CHAR_DECISION_MAKER( l_U19, l_U38 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U19 );
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( 815.05560000, -275.55570000, 15.33780000 );
                    TASK_EXTEND_ROUTE( 810.26180000, -272.06170000, 15.33780000 );
                    TASK_EXTEND_ROUTE( 810.27630000, -261.89720000, 15.33780000 );
                    OPEN_SEQUENCE_TASK( ref l_U21 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U24, 830.72960000, -273.07050000, 15.64550000, 7.50000000, 0, 0, 0, 5.00000000, -1 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U24, l_U25._fU0, l_U25._fU4, l_U25._fU8, 5.00000000, 0, 0, 0, 4.00000000, -1 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U24, 815.05560000, -275.55570000, 15.33780000, 3.00000000, 0, 0, 0, 1.00000000, -1 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U24, 810.26180000, -272.06170000, 15.33780000, 3.00000000, 0, 0, 0, 1.00000000, -1 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U24, 810.27630000, -261.89720000, 15.33780000, 3.00000000, 0, 0, 0, 1.00000000, -1 );
                    CLOSE_SEQUENCE_TASK( l_U21 );
                    TASK_PERFORM_SEQUENCE( l_U19, l_U21 );
                    CLEAR_SEQUENCE_TASK( l_U21 );
                    l_U6 = 1;
                    l_U5 = 1;
                    l_U1 = 1;
                }
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U19 )))
            {
                if (IS_VEH_DRIVEABLE( l_U24 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U19, l_U24 )))
                    {
                        l_U6 = 0;
                        l_U1 = 4;
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U19, 29, ref l_U22 );
                        if (l_U22 == 7)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U21 );
                            TASK_LEAVE_CAR( 0, l_U24 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 817.28800000, -265.92040000, 14.33780000, 2, -2, 2.00000000 );
                            TASK_ACHIEVE_HEADING( 0, 0.00000000 );
                            TASK_STAND_STILL( 0, 3000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 811.25600000, -267.70270000, 15.33790000, 2, -2, 2.00000000 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            TASK_ENTER_CAR_AS_DRIVER( 0, l_U24, -1 );
                            CLOSE_SEQUENCE_TASK( l_U21 );
                            TASK_PERFORM_SEQUENCE( l_U19, l_U21 );
                            CLEAR_SEQUENCE_TASK( l_U21 );
                            l_U1 = 2;
                        }
                    }
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U19 )))
            {
                if (IS_VEH_DRIVEABLE( l_U24 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U19, 29, ref l_U22 );
                    if (l_U22 == 7)
                    {
                        if (IS_CHAR_IN_CAR( l_U19, l_U24 ))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1755(), 811.23960000, -257.15500000, 15.33780000, 5.00000000, 5.00000000, 5.00000000, 0 )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U21 );
                                TASK_CAR_TEMP_ACTION( 0, l_U24, 9, 100 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U24, 811.37770000, -257.05640000, 15.33780000, 5.00000000, 0, 0, 0, 4.00000000, -1 );
                                TASK_CAR_DRIVE_WANDER( 0, l_U24, 10.00000000, 0 );
                                CLOSE_SEQUENCE_TASK( l_U21 );
                                TASK_PERFORM_SEQUENCE( l_U19, l_U21 );
                                CLEAR_SEQUENCE_TASK( l_U21 );
                                l_U1 = 3;
                            }
                        }
                        else
                        {
                            OPEN_SEQUENCE_TASK( ref l_U21 );
                            TASK_ENTER_CAR_AS_DRIVER( 0, l_U24, -1 );
                            CLOSE_SEQUENCE_TASK( l_U21 );
                            TASK_PERFORM_SEQUENCE( l_U19, l_U21 );
                            CLEAR_SEQUENCE_TASK( l_U21 );
                        }
                    }
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( l_U19 )))
            {
                if (IS_VEH_DRIVEABLE( l_U24 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U19, l_U24 )))
                    {
                        l_U6 = 0;
                        l_U1 = 4;
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U19, 29, ref l_U22 );
                        if (l_U22 == 1)
                        {
                            GET_SEQUENCE_PROGRESS( l_U19, ref iVar11 );
                            if (iVar11 > 1)
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U19, 811.23960000, -257.15500000, 15.33780000, 20.00000000, 20.00000000, 10.00000000, 0 )))
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U19 );
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U20 );
                                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U24 );
                                    GET_GAME_TIMER( ref l_U42 );
                                    GENERATE_RANDOM_INT_IN_RANGE( 3000, 10000, ref l_U43 );
                                    l_U5 = 0;
                                    l_U1 = 0;
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 4: break;
        }
        if (l_U6)
        {
            if (IS_VEH_DRIVEABLE( l_U24 ))
            {
                if (IS_PLAYER_PLAYING( sub_1696() ))
                {
                    if (IS_CHAR_IN_CAR( sub_1755(), l_U24 ))
                    {
                        l_U6 = 0;
                        l_U1 = 4;
                    }
                }
            }
        }
    }
    else if (l_U5)
    {
        if (NOT (IS_CHAR_DEAD( l_U20 )))
        {
            DELETE_CHAR( ref l_U20 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U20 );
        if (IS_VEH_DRIVEABLE( l_U24 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_1755(), l_U24 )))
            {
                if ((NOT (IS_CAR_ON_SCREEN( l_U24 ))) || (IS_SCREEN_FADED_OUT()))
                {
                    if (NOT (IS_CHAR_DEAD( l_U19 )))
                    {
                        if ((NOT (IS_CHAR_ON_SCREEN( l_U19 ))) || (IS_SCREEN_FADED_OUT()))
                        {
                            DELETE_CHAR( ref l_U19 );
                            DELETE_CAR( ref l_U24 );
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U19 );
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U24 );
                            l_U5 = 0;
                            l_U1 = 0;
                        }
                    }
                }
            }
        }
    }
    if (NOT l_U9)
    {
        if (IS_VEH_DRIVEABLE( l_U23 ))
        {
            if (IS_CHAR_IN_CAR( sub_1755(), l_U23 ))
            {
                GET_DOOR_ANGLE_RATIO( l_U23, 4, ref fVar12 );
                while (fVar12 > 1.00000000)
                {
                    WAIT( 0 );
                    fVar12 -= 0.10000000;
                    if (NOT (IS_CAR_DEAD( l_U23 )))
                    {
                        CONTROL_CAR_DOOR( l_U23, 4, 0, fVar12 );
                    }
                }
                l_U9 = 1;
            }
        }
    }
    if (NOT l_U10)
    {
        if (NOT (IS_CHAR_INJURED( l_U12[0] )))
        {
            if (l_U9)
            {
                CLEAR_CHAR_TASKS( l_U12[0] );
                l_U10 = 1;
            }
            else if (NOT l_U8)
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U12[0], l_U45, "car_chat_outside" )))
                {
                    CLEAR_CHAR_TASKS( l_U12[0] );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U12[0] );
                    l_U10 = 1;
                }
            }
        }
        else
        {
            l_U10 = 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U12[0] )))
    {
        if (NOT (IS_CHAR_DEAD( sub_1755() )))
        {
            if (l_U8)
            {
                if ((NOT l_U10) AND (NOT l_U9))
                {
                    sub_4771( l_U12[0] );
                }
            }
        }
    }
    return;
}

int sub_2283()
{
    int iVar2;

    GET_INTERIOR_FROM_CHAR( sub_1755(), ref iVar2 );
    if (NOT (iVar2 == nil))
    {
        return 0;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1755(), 822.90000000, -273.71600000, 16.70000000, 6.30000000, 8.47500000, 2.50000000, 0 ))
    {
        return 0;
    }
    return 1;
}

int sub_2500(unknown uParam0, unknown uParam1)
{
    vector[3] vVar4;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float[3] fVar14;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    float fVar21;
    float fVar22;
    int I;
    int iVar24;
    int iVar25;
    unknown uVar26;

    array(ref vVar4, 3);
    array(ref fVar14, 3);
    fVar21 = 0.00000000;
    vVar4[0] = {772.66820000, -326.43940000, 9.80560000};
    fVar14[0] = 5.39500000;
    vVar4[1] = {894.95480000, -240.48910000, 17.73990000};
    fVar14[1] = 90.27490000;
    vVar4[2] = {837.46830000, -379.49950000, 12.94170000};
    fVar14[2] = 2.49080000;
    iVar24 = 3;
    if (NOT (IS_CHAR_DEAD( sub_1755() )))
    {
        GET_CHAR_COORDINATES( sub_1755(), ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
    }
    for ( I = 0; I < iVar24; I++ )
    {
        fVar22 = VDIST( uVar18, vVar4[I] );
        if (fVar22 > fVar21)
        {
            iVar25 = I;
            fVar21 = fVar22;
        }
    }
    if (fVar21 > 0.00000000)
    {
        GET_GAME_VIEWPORT_ID( ref uVar26 );
        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar26, vVar4[iVar25]._fU0, vVar4[iVar25]._fU4, vVar4[iVar25]._fU8, 10.00000000 )))
        {
            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( vVar4[iVar25]._fU0, vVar4[iVar25]._fU4, vVar4[iVar25]._fU8, 3.00000000, 3.00000000, 3.00000000 )))
            {
                (uParam0^) = {vVar4[iVar25]};
                (uParam1^) = fVar14[iVar25];
                return 1;
            }
        }
    }
    return 0;
}

void sub_4771(unknown uParam0)
{
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_VEH_DRIVEABLE( l_U23 ))
        {
            switch (l_U2)
            {
                case 0:
                GET_SCRIPT_TASK_STATUS( uParam0, 29, ref l_U22 );
                if (l_U22 == 7)
                {
                    OPEN_SEQUENCE_TASK( ref l_U21 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U34._fU0, l_U34._fU4, l_U34._fU8, 2, -2, 0.20000000 );
                    TASK_ACHIEVE_HEADING( 0, l_U37 );
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( 0, l_U34._fU0, l_U34._fU4, l_U34._fU8, l_U37, 999.00000000, l_U37 );
                    if (HAVE_ANIMS_LOADED( l_U45 ))
                    {
                        TASK_PLAY_ANIM( 0, "copm_searchboot", l_U45, 4.00000000, 0, 0, 0, 0, -1 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U21 );
                    TASK_PERFORM_SEQUENCE( uParam0, l_U21 );
                    CLEAR_SEQUENCE_TASK( l_U21 );
                    l_U2 = 1;
                }
                else
                {
                    GET_DOOR_ANGLE_RATIO( l_U23, 4, ref fVar3 );
                    if (fVar3 > 1.00000000)
                    {
                        fVar3 -= 0.10000000;
                        if (NOT (IS_CAR_DEAD( l_U23 )))
                        {
                            CONTROL_CAR_DOOR( l_U23, 4, 0, 0.00000000 );
                        }
                    }
                }
                break;
                case 1:
                GET_SCRIPT_TASK_STATUS( uParam0, 29, ref l_U22 );
                if (l_U22 == 7)
                {
                    l_U2 = 2;
                }
                else
                {
                    GET_DOOR_ANGLE_RATIO( l_U23, 4, ref fVar3 );
                    if (fVar3 > 1.00000000)
                    {
                        fVar3 -= 0.10000000;
                        if (NOT (IS_CAR_DEAD( l_U23 )))
                        {
                            CONTROL_CAR_DOOR( l_U23, 4, 0, 0.00000000 );
                        }
                    }
                }
                break;
                case 2:
                GET_SCRIPT_TASK_STATUS( uParam0, 29, ref l_U22 );
                if (l_U22 == 7)
                {
                    OPEN_SEQUENCE_TASK( ref l_U21 );
                    if (NOT (IS_CAR_DEAD( l_U23 )))
                    {
                        GET_CAR_HEADING( l_U23, ref fVar7 );
                        fVar7 -= 90.00000000;
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U23, l_U28._fU0, l_U28._fU4, l_U28._fU8, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2, -2, 0.20000000 );
                    TASK_ACHIEVE_HEADING( 0, fVar7 );
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( 0, uVar4._fU0, uVar4._fU4, uVar4._fU8, fVar7, 999.00000000, fVar7 );
                    CLOSE_SEQUENCE_TASK( l_U21 );
                    TASK_PERFORM_SEQUENCE( uParam0, l_U21 );
                    CLEAR_SEQUENCE_TASK( l_U21 );
                    l_U2 = 3;
                }
                break;
                case 3:
                GET_SCRIPT_TASK_STATUS( uParam0, 29, ref l_U22 );
                if (l_U22 == 7)
                {
                    CONTROL_CAR_DOOR( l_U23, 4, 0, 1.00000000 );
                    if (NOT (IS_CAR_DEAD( l_U23 )))
                    {
                        GET_CAR_HEADING( l_U23, ref fVar7 );
                        fVar7 -= 180.00000000;
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U23, l_U31._fU0, l_U31._fU4, l_U31._fU8, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    }
                    OPEN_SEQUENCE_TASK( ref l_U21 );
                    TASK_PAUSE( 0, 1500 );
                    if (HAVE_ANIMS_LOADED( l_U45 ))
                    {
                        TASK_PLAY_ANIM( 0, "Workunderbonnet", l_U45, 4.00000000, 0, 0, 0, 0, -1 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2, -2, 0.20000000 );
                    TASK_ACHIEVE_HEADING( 0, fVar7 );
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( 0, uVar4._fU0, uVar4._fU4, uVar4._fU8, fVar7, 999.00000000, fVar7 );
                    if (HAVE_ANIMS_LOADED( l_U45 ))
                    {
                        TASK_PLAY_ANIM( 0, "copm_searchboot", l_U45, 4.00000000, 0, 1, 0, 0, -1 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U21 );
                    TASK_PERFORM_SEQUENCE( uParam0, l_U21 );
                    CLEAR_SEQUENCE_TASK( l_U21 );
                    l_U2 = 4;
                }
                break;
                case 4:
                GET_SCRIPT_TASK_STATUS( uParam0, 29, ref l_U22 );
                if (l_U22 == 7)
                {
                    l_U2 = 0;
                }
                else
                {
                    GET_DOOR_ANGLE_RATIO( l_U23, 4, ref fVar3 );
                    if (fVar3 < 1.00000000)
                    {
                        fVar3 += 0.10000000;
                        if (NOT (IS_CAR_DEAD( l_U23 )))
                        {
                            CONTROL_CAR_DOOR( l_U23, 4, 0, 1.00000000 );
                        }
                    }
                }
                break;
            }
        }
    }
    return;
}

void sub_5985()
{
    return;
}
