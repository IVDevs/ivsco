void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = {-281.06440000, -283.70000000, 15.87640000};
    l_U6 = 90.00000000;
    l_U7 = {-281.06440000, -280.70640000, 15.87640000};
    l_U10 = 90.00000000;
    l_U11 = {-281.06440000, -283.70000000, 15.87640000};
    l_U14 = 180.00000000;
    l_U15 = {-281.06440000, -280.70640000, 15.87640000};
    l_U18 = 0.00000000;
    l_U21 = 1845915705;
    l_U22 = -631715616;
    l_U23 = 1;
    if (g_U10502)
    {
        l_U23 = 1;
    }
    else
    {
        l_U23 = 0;
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U2)
            {
                case 0:
                if (sub_248())
                {
                    sub_468( "assetsLoaded()\n" );
                    l_U2 = 1;
                }
                break;
                case 1:
                sub_468( "churchDoorControl()\n" );
                sub_522();
                break;
                case 2: break;
            }
        }
        else
        {
            sub_1067();
        }
    }
    return;
}

int sub_248()
{
    REQUEST_MODEL( l_U21 );
    REQUEST_MODEL( l_U22 );
    if ((HAS_MODEL_LOADED( l_U21 )) AND (HAS_MODEL_LOADED( l_U22 )))
    {
        CREATE_OBJECT_NO_OFFSET( l_U21, l_U3._fU0, l_U3._fU4, l_U3._fU8, ref l_U19, 1 );
        SET_OBJECT_HEADING( l_U19, l_U6 );
        FREEZE_OBJECT_POSITION( l_U19, 1 );
        CREATE_OBJECT_NO_OFFSET( l_U22, l_U7._fU0, l_U7._fU4, l_U7._fU8, ref l_U20, 1 );
        SET_OBJECT_HEADING( l_U20, l_U10 );
        FREEZE_OBJECT_POSITION( l_U20, 1 );
        return 1;
    }
    else
    {
        REQUEST_MODEL( l_U21 );
        REQUEST_MODEL( l_U22 );
    }
    return 0;
}

void sub_468(unknown uParam0)
{
    return;
}

void sub_522()
{
    if (g_U10502)
    {
        if (l_U23)
        {
            FREEZE_OBJECT_POSITION( l_U19, 0 );
            FREEZE_OBJECT_POSITION( l_U20, 0 );
            SET_OBJECT_COORDINATES( l_U19, l_U11._fU0, l_U11._fU4, l_U11._fU8 );
            SET_OBJECT_HEADING( l_U19, l_U14 );
            FREEZE_OBJECT_POSITION( l_U19, 1 );
            SET_OBJECT_COORDINATES( l_U20, l_U15._fU0, l_U15._fU4, l_U15._fU8 );
            SET_OBJECT_HEADING( l_U20, l_U18 );
            FREEZE_OBJECT_POSITION( l_U20, 1 );
            sub_468( "bOpenChurchDoors\n" );
            l_U23 = 0;
        }
    }
    else if (l_U23)
    {
        ;
    }
    else if (sub_716())
    {
        if (NOT (IS_CHAR_DEAD( sub_725() )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_725(), l_U3._fU0, l_U3._fU4, l_U3._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
            {
                FREEZE_OBJECT_POSITION( l_U19, 0 );
                FREEZE_OBJECT_POSITION( l_U20, 0 );
                SET_OBJECT_COORDINATES( l_U19, l_U3._fU0, l_U3._fU4, l_U3._fU8 );
                SET_OBJECT_HEADING( l_U19, l_U6 );
                FREEZE_OBJECT_POSITION( l_U19, 1 );
                SET_OBJECT_COORDINATES( l_U20, l_U7._fU0, l_U7._fU4, l_U7._fU8 );
                SET_OBJECT_HEADING( l_U20, l_U10 );
                FREEZE_OBJECT_POSITION( l_U20, 1 );
                l_U23 = 1;
                sub_468( "bOpenChurchDoors = FALSE\n" );
            }
        }
    };;;
    return;
}

int sub_716()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_725() )))
    {
        GET_INTERIOR_FROM_CHAR( sub_725(), ref iVar2 );
    }
    if (iVar2 == nil)
    {
        return 1;
    }
    return 0;
}

void sub_725()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1067()
{
    TERMINATE_THIS_SCRIPT();
    return;
}
