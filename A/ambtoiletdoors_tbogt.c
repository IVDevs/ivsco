void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U14 = {-259.94930000, 703.54550000, 2.69900000};
    l_U17 = {-263.01930000, 702.34550000, 2.69900000};
    l_U20 = 407481427;
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (sub_103())
            {
                switch (l_U2)
                {
                    case 0:
                    if (sub_164())
                    {
                        l_U2 = 1;
                    }
                    break;
                    case 1: break;
                    case 2: break;
                }
            }
            else
            {
                sub_1091();
            }
        }
        else
        {
            sub_1091();
        }
    }
    return;
}

void sub_103()
{
    int Result;

    Result = 1;
    return Result;
}

int sub_164()
{
    REQUEST_MODEL( l_U20 );
    if (HAS_MODEL_LOADED( l_U20 ))
    {
        CREATE_OBJECT( l_U20, l_U14._fU0, l_U14._fU4, l_U14._fU8, ref l_U3[0], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3[0], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U3[0], 270.00000000 );
        CREATE_OBJECT( l_U20, l_U14._fU0, l_U14._fU4 + 1.47000000, l_U14._fU8, ref l_U3[1], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3[1], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U3[1], 270.00000000 );
        CREATE_OBJECT( l_U20, l_U14._fU0, l_U14._fU4 + (1.47000000 * 2), l_U14._fU8, ref l_U3[2], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3[2], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U3[2], 270.00000000 );
        CREATE_OBJECT( l_U20, l_U14._fU0, l_U14._fU4 + (1.47000000 * 3), l_U14._fU8, ref l_U3[3], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3[3], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U3[3], 270.00000000 );
        CREATE_OBJECT( l_U20, l_U14._fU0, l_U14._fU4 + (1.47000000 * 4), l_U14._fU8, ref l_U3[4], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3[4], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U3[4], 270.00000000 );
        CREATE_OBJECT( l_U20, l_U17._fU0, l_U17._fU4, l_U17._fU8, ref l_U3[5], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3[5], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U3[5], 90.00000000 );
        CREATE_OBJECT( l_U20, l_U17._fU0, l_U17._fU4 + 1.47000000, l_U17._fU8, ref l_U3[6], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3[6], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U3[6], 90.00000000 );
        CREATE_OBJECT( l_U20, l_U17._fU0, l_U17._fU4 + (1.47000000 * 2), l_U17._fU8, ref l_U3[7], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3[7], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U3[7], 90.00000000 );
        CREATE_OBJECT( l_U20, l_U17._fU0, l_U17._fU4 + (1.47000000 * 3), l_U17._fU8, ref l_U3[8], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3[8], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U3[8], 90.00000000 );
        CREATE_OBJECT( l_U20, l_U17._fU0, l_U17._fU4 + (1.47000000 * 4), l_U17._fU8, ref l_U3[9], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U3[9], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U3[9], 90.00000000 );
        return 1;
    }
    else
    {
        REQUEST_MODEL( l_U20 );
    }
    return 0;
}

void sub_1091()
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U3[I] ))
        {
            DELETE_OBJECT( ref l_U3[I] );
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}
