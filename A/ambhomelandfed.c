void main()
{
    l_U0 = 0;
    l_U6 = -999506922;
    l_U7 = 1127131465;
    l_U9 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        ;
    }
    l_U2 = {l_U10._fU4[0]};
    l_U5 = l_U10._fU68[0];
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (sub_97())
            {
                if (g_U10978 == 0)
                {
                    switch (l_U0)
                    {
                        case 0:
                        if (IS_CAR_DEAD( l_U1 ))
                        {
                            if (sub_262())
                            {
                                CREATE_CAR( l_U7, l_U2._fU0, l_U2._fU4, l_U2._fU8, ref l_U1, 1 );
                                SET_HAS_BEEN_OWNED_BY_PLAYER( l_U1, 0 );
                                SET_CAR_HEADING( l_U1, l_U5 );
                                SET_CAR_COORDINATES( l_U1, l_U2._fU0, l_U2._fU4, l_U2._fU8 );
                                CREATE_CHAR_INSIDE_CAR( l_U1, 6, l_U6, ref l_U8 );
                                l_U0 = 1;
                            }
                        }
                        break;
                        case 1:
                        sub_447();
                        sub_1186();
                        break;
                        case 2: break;
                    }
                }
            }
            else
            {
                sub_1316();
            }
        }
        else
        {
            sub_1316();
        }
    }
    return;
}

int sub_97()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_106() )))
    {
        GET_INTERIOR_FROM_CHAR( sub_106(), ref iVar2 );
    }
    if (iVar2 == nil)
    {
        return 1;
    }
    return 0;
}

void sub_106()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_262()
{
    REQUEST_MODEL( l_U6 );
    REQUEST_MODEL( l_U7 );
    SUPPRESS_CAR_MODEL( l_U7 );
    if ((HAS_MODEL_LOADED( l_U6 )) AND (HAS_MODEL_LOADED( l_U7 )))
    {
        return 1;
    }
    return 0;
}

void sub_447()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;

    if (NOT (IS_CAR_DEAD( l_U1 )))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1, -3.50000000, 0.00000000, 1.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (NOT (IS_CHAR_INJURED( sub_106() )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_106() ))
            {
                if (NOT (sub_547( sub_106() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_106(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 6.00000000, 6.00000000, 6.00000000, 0 ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_106(), ref uVar5 );
                        GET_CAR_SPEED( uVar5, ref fVar6 );
                        if (fVar6 > 25.00000000)
                        {
                            ALTER_WANTED_LEVEL_NO_DROP( sub_999(), 2 );
                            sub_1038();
                        }
                        else if (fVar6 < 3.00000000)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U8 )))
                            {
                                ;
                            }
                        }
                    }
                }
                else if (NOT (IS_CAR_DEAD( l_U1 )))
                {
                    if (IS_CHAR_IN_CAR( sub_106(), l_U1 ))
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_999(), 2 );
                        sub_1038();
                    }
                }
            }
        }
    }
    if (IS_WANTED_LEVEL_GREATER( sub_999(), 0 ))
    {
        sub_1038();
    }
    return;
}

int sub_547(int iParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (((((((((IS_CAR_MODEL( uVar3, 1171614426 )) || (IS_CAR_MODEL( uVar3, 1127131465 ))) || (IS_CAR_MODEL( uVar3, 1938952078 ))) || (IS_CAR_MODEL( uVar3, 148777611 ))) || (IS_CAR_MODEL( uVar3, 1911513875 ))) || (IS_CAR_MODEL( uVar3, 2046537925 ))) || (IS_CAR_MODEL( uVar3, -350085182 ))) || (IS_CAR_MODEL( uVar3, -1900572838 ))) || (IS_CAR_MODEL( uVar3, -1627000575 )))
            {
                if (iParam0 == sub_106())
                {
                    if (sub_747())
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

int sub_747()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( sub_106() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_106() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_106(), ref uVar2 );
            if ((IS_VEH_DRIVEABLE( uVar2 )) AND (NOT (IS_CAR_ON_FIRE( uVar2 ))))
            {
                GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
                if (NOT (IS_CAR_MODEL( uVar2, 1491375716 )))
                {
                    if (iVar3 == sub_106())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_999()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1038()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1186()
{
    if (NOT (IS_CHAR_INJURED( sub_106() )))
    {
        if (NOT l_U9)
        {
            if (NOT (IS_CAR_DEAD( l_U1 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_106(), l_U1, 50.00000000, 50.00000000, 50.00000000, 0 ))
                {
                    if (SET_CAR_ON_GROUND_PROPERLY( l_U1 ))
                    {
                        l_U9 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_1316()
{
    TERMINATE_THIS_SCRIPT();
    return;
}
