void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U4 = 270.00000000;
    l_U5 = 0.00000000;
    l_U9 = {3.97000000, -0.10100000, 0.45800000};
    l_U12 = {-3.97000000, -0.17800000, 0.45800000};
    l_U15 = {-3.80000000, 1.72500000, -0.62500000};
    l_U18 = 0;
    PRINTSTRING( "AMBIENT BARRIER SCRIPT STARTED \n" );
    while (NOT (DOES_OBJECT_EXIST( l_U23 )))
    {
        WAIT( 0 );
    }
    if (DOES_OBJECT_EXIST( l_U23 ))
    {
        GET_OBJECT_COORDINATES( l_U23, ref l_U20._fU0, ref l_U20._fU4, ref l_U20._fU8 );
        l_U19 = VDIST( l_U20, 65, 1235, 18 );
        if (l_U19 < 10.00000000)
        {
            l_U18 = 1;
        }
        l_U19 = VDIST( l_U20, -935.48070000, 1329.52700000, 23.33290000 );
        if (l_U19 < 10.00000000)
        {
            l_U18 = 1;
        }
    }
    CREATE_WIDGET_GROUP( "Security Barrier" );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "LOAD_SHIT" );
    ADD_TO_WIDGET_COMBO( "CREATE_SHIT" );
    ADD_TO_WIDGET_COMBO( "IDLE" );
    ADD_TO_WIDGET_COMBO( "OPENING" );
    ADD_TO_WIDGET_COMBO( "WAITING_TO_PASS" );
    ADD_TO_WIDGET_COMBO( "CLOSING" );
    FINISH_WIDGET_COMBO( "iState", ref l_U2 );
    ADD_WIDGET_SLIDER( "iProgress", ref l_U3, 0, 99, 1 );
    ADD_WIDGET_FLOAT_SLIDER( "vRightArmOffset.x", ref l_U9._fU0, -90.00000000, 90.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vRightArmOffset.y", ref l_U9._fU4, -90.00000000, 90.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vRightArmOffset.z", ref l_U9._fU8, -90.00000000, 90.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vLeftArmOffset.x", ref l_U12._fU0, -90.00000000, 90.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vLeftArmOffset.y", ref l_U12._fU4, -90.00000000, 90.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vLeftArmOffset.z", ref l_U12._fU8, -90.00000000, 90.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vSecurityDudeOffset.x", ref l_U15._fU0, -999.90000000, 999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vSecurityDudeOffset.y", ref l_U15._fU4, -999.90000000, 999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vSecurityDudeOffset.z", ref l_U15._fU8, -999.90000000, 999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fSecurityDudeHeadingOffset", ref l_U4, 0.00000000, 360.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fCurrentAngle", ref l_U5, 0.00000000, 180.00000000, 0.01000000 );
    END_WIDGET_GROUP();
    sub_1042( 0 );
    while (true)
    {
        if (DOES_OBJECT_EXIST( l_U23 ))
        {
            if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U23 ))
            {
                if (l_U18)
                {
                    if (IS_PLAYER_PLAYING( sub_1124() ))
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1124(), 0 )))
                        {
                            sub_1213( "bIsPoliceBarrier = TRUE\n" );
                            GET_OBJECT_COORDINATES( l_U23, ref l_U20._fU0, ref l_U20._fU4, ref l_U20._fU8 );
                            if (LOCATE_CHAR_IN_CAR_3D( sub_1252(), l_U20._fU0, l_U20._fU4, l_U20._fU8, 4.00000000, 4.00000000, 3.00000000, 0 ))
                            {
                                if ((IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( l_U20._fU0, l_U20._fU4, l_U20._fU8, 5.00000000, -869586478, 1, 1 )) || (IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( l_U20._fU0, l_U20._fU4, l_U20._fU8, 5.00000000, -1046467484, 1, 1 )))
                                {
                                    if (NOT sub_1410())
                                    {
                                        ALTER_WANTED_LEVEL_NO_DROP( sub_1124(), 1 );
                                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_1124() );
                                    }
                                    l_U18 = 0;
                                }
                            }
                        }
                    }
                }
                switch (l_U2)
                {
                    case 0:
                    switch (l_U3)
                    {
                        case 0:
                        REQUEST_MODEL( -869586478 );
                        REQUEST_MODEL( -1046467484 );
                        l_U3++;
                        break;
                        case 1:
                        if ((HAS_MODEL_LOADED( -869586478 )) AND (HAS_MODEL_LOADED( -1046467484 )))
                        {
                            sub_1042( 1 );
                        }
                        break;
                    }
                    break;
                    case 1:
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U23, l_U9._fU0, l_U9._fU4, l_U9._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    CREATE_OBJECT_NO_OFFSET( -1046467484, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U6, 1 );
                    SET_OBJECT_DYNAMIC( l_U6, 1 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U23, l_U12._fU0, l_U12._fU4, l_U12._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    CREATE_OBJECT_NO_OFFSET( -869586478, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U7, 1 );
                    SET_OBJECT_DYNAMIC( l_U7, 1 );
                    GET_OBJECT_HEADING( l_U23, ref l_U19 );
                    SET_OBJECT_ROTATION( l_U7, 0.00000000, 0.00000000, l_U19 );
                    SET_OBJECT_ROTATION( l_U6, 0.00000000, 0.00000000, l_U19 );
                    if (g_U10454)
                    {
                        sub_1042( 3 );
                    }
                    else
                    {
                        sub_1042( 2 );
                    }
                    break;
                    case 2:
                    if (sub_1410())
                    {
                        if (NOT (sub_2287( l_U6 )))
                        {
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U23, l_U9._fU0, l_U9._fU4, l_U9._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            SET_OBJECT_COORDINATES( l_U6, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        }
                        if (NOT (sub_2287( l_U7 )))
                        {
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U23, l_U12._fU0, l_U12._fU4, l_U12._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            SET_OBJECT_COORDINATES( l_U7, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        }
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U23, 0.00000000, -4.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        if (IS_PLAYER_PLAYING( sub_1124() ))
                        {
                            if (LOCATE_CHAR_IN_CAR_3D( sub_1252(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 4.00000000, 4.00000000, 3.00000000, 0 ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1252(), ref uVar5 );
                                GET_CAR_SPEED( uVar5, ref l_U19 );
                                if (l_U19 < 5.00000000)
                                {
                                    sub_1042( 3 );
                                }
                            }
                        }
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U23, 0.00000000, 4.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        if (IS_PLAYER_PLAYING( sub_1124() ))
                        {
                            if (LOCATE_CHAR_IN_CAR_3D( sub_1252(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 4.00000000, 4.00000000, 3.00000000, 0 ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1252(), ref uVar5 );
                                GET_CAR_SPEED( uVar5, ref l_U19 );
                                if (l_U19 < 5.00000000)
                                {
                                    sub_1042( 3 );
                                }
                            }
                        }
                        if (g_U10454)
                        {
                            sub_1042( 3 );
                        }
                    }
                    break;
                    case 3:
                    GET_FRAME_TIME( ref l_U19 );
                    l_U5 += (84.00000000 / 5.00000000) * l_U19;
                    GET_OBJECT_HEADING( l_U23, ref l_U19 );
                    if (NOT (sub_2287( l_U7 )))
                    {
                        SET_OBJECT_ROTATION( l_U7, 0.00000000, l_U5 * -1.00000000, l_U19 );
                    }
                    if (NOT (sub_2287( l_U6 )))
                    {
                        SET_OBJECT_ROTATION( l_U6, 0.00000000, l_U5, l_U19 );
                    }
                    if (l_U5 > 84.00000000)
                    {
                        sub_1042( 4 );
                    }
                    break;
                    case 4:
                    if (IS_PLAYER_PLAYING( sub_1124() ))
                    {
                        if (NOT g_U10454)
                        {
                            GET_OBJECT_COORDINATES( l_U23, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_1252(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 8.00000000, 8.00000000, 3.00000000, 0 )))
                            {
                                sub_1042( 5 );
                            }
                        }
                    }
                    break;
                    case 5:
                    GET_FRAME_TIME( ref l_U19 );
                    l_U5 -= (84.00000000 / 5.00000000) * l_U19;
                    GET_OBJECT_HEADING( l_U23, ref l_U19 );
                    if (NOT (sub_2287( l_U7 )))
                    {
                        SET_OBJECT_ROTATION( l_U7, 0.00000000, l_U5 * -1.00000000, l_U19 );
                    }
                    if (NOT (sub_2287( l_U6 )))
                    {
                        SET_OBJECT_ROTATION( l_U6, 0.00000000, l_U5, l_U19 );
                    }
                    if (l_U5 <= 0.00000000)
                    {
                        sub_1042( 2 );
                    }
                    break;
                }
            }
            else
            {
                sub_3295();
            }
        }
        else
        {
            sub_3295();
        }
        WAIT( 0 );
    }
    return;
}

void sub_1042(int iParam0)
{
    if (NOT (l_U2 == iParam0))
    {
        l_U2 = iParam0;
        l_U3 = 0;
    }
    return;
}

void sub_1124()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1213(unknown uParam0)
{
    return;
}

void sub_1252()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1410()
{
    if (l_U18)
    {
        if (sub_1432( sub_1252() ))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    if (g_U10454)
    {
        return 1;
    }
    return 0;
}

int sub_1432(int iParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (((((((((IS_CAR_MODEL( uVar3, 1171614426 )) || (IS_CAR_MODEL( uVar3, 1127131465 ))) || (IS_CAR_MODEL( uVar3, 1938952078 ))) || (IS_CAR_MODEL( uVar3, 148777611 ))) || (IS_CAR_MODEL( uVar3, 1911513875 ))) || (IS_CAR_MODEL( uVar3, 2046537925 ))) || (IS_CAR_MODEL( uVar3, -350085182 ))) || (IS_CAR_MODEL( uVar3, -1900572838 ))) || (IS_CAR_MODEL( uVar3, -1627000575 )))
            {
                if (iParam0 == sub_1252())
                {
                    if (sub_1632())
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

int sub_1632()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( sub_1252() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1252() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1252(), ref uVar2 );
            if ((IS_VEH_DRIVEABLE( uVar2 )) AND (NOT (IS_CAR_ON_FIRE( uVar2 ))))
            {
                GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
                if (NOT (IS_CAR_MODEL( uVar2, 1491375716 )))
                {
                    if (iVar3 == sub_1252())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_2287(unknown uParam0)
{
    float fVar3;

    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_HEALTH( uParam0, ref fVar3 );
        if (fVar3 < 1000.00000000)
        {
            return 1;
        }
        GET_OBJECT_COORDINATES( uParam0, ref l_U20._fU0, ref l_U20._fU4, ref l_U20._fU8 );
        if (IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( l_U20._fU0, l_U20._fU4, l_U20._fU8, 5.00000000, -869586478, 1, 1 ))
        {
            return 1;
        }
        if (IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( l_U20._fU0, l_U20._fU4, l_U20._fU8, 5.00000000, -1046467484, 1, 1 ))
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

void sub_3295()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( -869586478 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1046467484 );
    DELETE_OBJECT( ref l_U6 );
    DELETE_OBJECT( ref l_U6 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U8 );
    PRINTSTRING( "AMBIENT BARRIER SCRIPT CLEANED UP \n" );
    TERMINATE_THIS_SCRIPT();
    return;
}
