void main()
{
    l_U0 = 0;
    l_U1 = {-281.06440000, -283.70000000, 15.87640000};
    l_U4 = 90.00000000;
    l_U5 = {-281.06440000, -280.70640000, 15.87640000};
    l_U8 = 90.00000000;
    l_U9 = {-281.06440000, -283.70000000, 15.87640000};
    l_U12 = 180.00000000;
    l_U13 = {-281.06440000, -280.70640000, 15.87640000};
    l_U16 = 0.00000000;
    l_U19 = 1845915705;
    l_U20 = -631715616;
    l_U21 = 1;
    if (g_U9156)
    {
        l_U21 = 1;
    }
    else
    {
        l_U21 = 0;
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U0)
            {
                case 0:
                if (sub_232())
                {
                    sub_452( "assetsLoaded()\n" );
                    l_U0 = 1;
                }
                break;
                case 1:
                sub_452( "churchDoorControl()\n" );
                sub_506();
                break;
                case 2: break;
            }
        }
        else
        {
            sub_1051();
        }
    }
    return;
}

int sub_232()
{
    REQUEST_MODEL( l_U19 );
    REQUEST_MODEL( l_U20 );
    if ((HAS_MODEL_LOADED( l_U19 )) AND (HAS_MODEL_LOADED( l_U20 )))
    {
        CREATE_OBJECT_NO_OFFSET( l_U19, l_U1._fU0, l_U1._fU4, l_U1._fU8, ref l_U17, 1 );
        SET_OBJECT_HEADING( l_U17, l_U4 );
        FREEZE_OBJECT_POSITION( l_U17, 1 );
        CREATE_OBJECT_NO_OFFSET( l_U20, l_U5._fU0, l_U5._fU4, l_U5._fU8, ref l_U18, 1 );
        SET_OBJECT_HEADING( l_U18, l_U8 );
        FREEZE_OBJECT_POSITION( l_U18, 1 );
        return 1;
    }
    else
    {
        REQUEST_MODEL( l_U19 );
        REQUEST_MODEL( l_U20 );
    }
    return 0;
}

void sub_452(unknown uParam0)
{
    return;
}

void sub_506()
{
    if (g_U9156)
    {
        if (l_U21)
        {
            FREEZE_OBJECT_POSITION( l_U17, 0 );
            FREEZE_OBJECT_POSITION( l_U18, 0 );
            SET_OBJECT_COORDINATES( l_U17, l_U9._fU0, l_U9._fU4, l_U9._fU8 );
            SET_OBJECT_HEADING( l_U17, l_U12 );
            FREEZE_OBJECT_POSITION( l_U17, 1 );
            SET_OBJECT_COORDINATES( l_U18, l_U13._fU0, l_U13._fU4, l_U13._fU8 );
            SET_OBJECT_HEADING( l_U18, l_U16 );
            FREEZE_OBJECT_POSITION( l_U18, 1 );
            sub_452( "bOpenChurchDoors\n" );
            l_U21 = 0;
        }
    }
    else if (l_U21)
    {
        ;
    }
    else if (sub_700())
    {
        if (NOT (IS_CHAR_DEAD( sub_709() )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_709(), l_U1._fU0, l_U1._fU4, l_U1._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
            {
                FREEZE_OBJECT_POSITION( l_U17, 0 );
                FREEZE_OBJECT_POSITION( l_U18, 0 );
                SET_OBJECT_COORDINATES( l_U17, l_U1._fU0, l_U1._fU4, l_U1._fU8 );
                SET_OBJECT_HEADING( l_U17, l_U4 );
                FREEZE_OBJECT_POSITION( l_U17, 1 );
                SET_OBJECT_COORDINATES( l_U18, l_U5._fU0, l_U5._fU4, l_U5._fU8 );
                SET_OBJECT_HEADING( l_U18, l_U8 );
                FREEZE_OBJECT_POSITION( l_U18, 1 );
                l_U21 = 1;
                sub_452( "bOpenChurchDoors = FALSE\n" );
            }
        }
    };;;
    return;
}

int sub_700()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_709() )))
    {
        GET_INTERIOR_FROM_CHAR( sub_709(), ref iVar2 );
    }
    if (iVar2 == nil)
    {
        return 1;
    }
    return 0;
}

void sub_709()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1051()
{
    TERMINATE_THIS_SCRIPT();
    return;
}
