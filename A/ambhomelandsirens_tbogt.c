void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U15 = -1;
    l_U11 = {l_U16._fU4[0]};
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (IS_PLAYER_PLAYING( sub_80() ))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_80(), 0 )))
                {
                    if (NOT g_U12303)
                    {
                        if (sub_153())
                        {
                            switch (l_U2)
                            {
                                case 0:
                                sub_269( l_U11, 1 );
                                l_U2 = 1;
                                break;
                                case 1: break;
                                case 2: break;
                            }
                        }
                    }
                }
                else
                {
                    TERMINATE_THIS_SCRIPT();
                }
            }
        }
        else
        {
            sub_413();
        }
    }
    return;
}

void sub_80()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_153()
{
    if (l_U15 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U15 );
        if (l_U15 == 0)
        {
            return 1;
        }
    }
    else if (l_U15 == 0)
    {
        return 1;
    }
    return 0;
}

int sub_269(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    unknown uVar6;

    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref uVar6 );
    REQUEST_MODEL( uVar6 );
    if (bParam3)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
        {
            return 1;
        }
    }
    else if (CREATE_EMERGENCY_SERVICES_CAR( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
    {
        return 1;
    }
    return 0;
}

void sub_413()
{
    TERMINATE_THIS_SCRIPT();
    return;
}
