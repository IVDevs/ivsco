void main()
{
    l_U0 = 0;
    l_U2 = {-167.03430000, 594.08010000, 14.70960000};
    l_U5 = 17.83426000;
    l_U7 = {-176.04500000, 598.48230000, 14.37890000};
    l_U10 = 272.08170000;
    l_U12 = {-155.41960000, 600.28120000, 14.37890000};
    l_U15 = 33.96300000;
    l_U17 = {-155.51300000, 600.97350000, 14.37890000};
    l_U20 = 192.34490000;
    l_U21 = 0;
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U0)
            {
                case 0:
                if (sub_189())
                {
                    if (sub_240())
                    {
                        l_U0 = 1;
                    }
                }
                break;
                case 1: break;
                case 2: break;
            }
        }
        else
        {
            sub_1850();
        }
    }
    return;
}

void sub_189()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Ray6" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

int sub_240()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    REQUEST_MODEL( 1667998832 );
    REQUEST_MODEL( -16333017 );
    REQUEST_MODEL( -24996117 );
    REQUEST_MODEL( -121234208 );
    if ((((HAS_MODEL_LOADED( 1667998832 )) AND (HAS_MODEL_LOADED( -16333017 ))) AND (HAS_MODEL_LOADED( -24996117 ))) AND (HAS_MODEL_LOADED( -121234208 )))
    {
        CREATE_OBJECT_NO_OFFSET( -121234208, -182.18000000, 599.03400000, 15.82900000, ref l_U34, 1 );
        FREEZE_OBJECT_POSITION( l_U34, 1 );
        SET_OBJECT_HEADING( l_U34, 90.00000000 );
        CREATE_OBJECT_NO_OFFSET( -121234208, -150.42300000, 599.03400000, 15.82900000, ref l_U35, 1 );
        FREEZE_OBJECT_POSITION( l_U35, 1 );
        SET_OBJECT_HEADING( l_U35, 270.00000000 );
        CREATE_OBJECT_NO_OFFSET( -24996117, -182.61900000, 597.38900000, 15.92900000, ref l_U22, 1 );
        FREEZE_OBJECT_POSITION( l_U22, 1 );
        SET_OBJECT_HEADING( l_U22, 90.00000000 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U22, 0.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CREATE_OBJECT_NO_OFFSET( -16333017, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U23, 1 );
        FREEZE_OBJECT_POSITION( l_U23, 1 );
        CREATE_OBJECT_NO_OFFSET( 1667998832, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U24, 1 );
        FREEZE_OBJECT_POSITION( l_U24, 1 );
        CREATE_OBJECT_NO_OFFSET( -24996117, -182.61900000, 600.78800000, 15.92900000, ref l_U25, 1 );
        FREEZE_OBJECT_POSITION( l_U25, 1 );
        SET_OBJECT_HEADING( l_U25, 90.00000000 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U25, 0.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CREATE_OBJECT_NO_OFFSET( -16333017, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U26, 1 );
        FREEZE_OBJECT_POSITION( l_U26, 1 );
        CREATE_OBJECT_NO_OFFSET( 1667998832, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U27, 1 );
        FREEZE_OBJECT_POSITION( l_U27, 1 );
        CREATE_OBJECT_NO_OFFSET( -24996117, -149.86900000, 600.78000000, 15.90900000, ref l_U28, 1 );
        FREEZE_OBJECT_POSITION( l_U28, 1 );
        SET_OBJECT_HEADING( l_U28, 270.00000000 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U28, 0.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CREATE_OBJECT_NO_OFFSET( -16333017, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U29, 1 );
        FREEZE_OBJECT_POSITION( l_U29, 1 );
        CREATE_OBJECT_NO_OFFSET( 1667998832, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U30, 1 );
        FREEZE_OBJECT_POSITION( l_U30, 1 );
        CREATE_OBJECT_NO_OFFSET( -24996117, -149.86900000, 597.34000000, 15.90900000, ref l_U31, 1 );
        FREEZE_OBJECT_POSITION( l_U31, 1 );
        SET_OBJECT_HEADING( l_U31, 270.00000000 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U31, 0.00000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CREATE_OBJECT_NO_OFFSET( -16333017, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U32, 1 );
        FREEZE_OBJECT_POSITION( l_U32, 1 );
        CREATE_OBJECT_NO_OFFSET( 1667998832, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U33, 1 );
        FREEZE_OBJECT_POSITION( l_U33, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U34, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U35, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U22, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U23, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U24, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U25, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U26, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U27, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U28, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U29, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U30, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U31, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U32, "MloRoom_Ritz_main" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U33, "MloRoom_Ritz_main" );
        SET_OBJECT_HEADING( l_U22, 90.00000000 );
        SET_OBJECT_HEADING( l_U23, 90.00000000 );
        SET_OBJECT_HEADING( l_U24, 90.00000000 );
        SET_OBJECT_HEADING( l_U25, 90.00000000 );
        SET_OBJECT_HEADING( l_U26, 90.00000000 );
        SET_OBJECT_HEADING( l_U27, 90.00000000 );
        SET_OBJECT_HEADING( l_U28, 270.00000000 );
        SET_OBJECT_HEADING( l_U29, 270.00000000 );
        SET_OBJECT_HEADING( l_U30, 270.00000000 );
        SET_OBJECT_HEADING( l_U31, 270.00000000 );
        SET_OBJECT_HEADING( l_U32, 270.00000000 );
        SET_OBJECT_HEADING( l_U33, 270.00000000 );
        return 1;
    }
    else
    {
        REQUEST_MODEL( 1667998832 );
        REQUEST_MODEL( -16333017 );
        REQUEST_MODEL( -24996117 );
    }
    return 0;
}

void sub_1850()
{
    if (sub_189())
    {
        DELETE_OBJECT( ref l_U22 );
        DELETE_OBJECT( ref l_U23 );
        DELETE_OBJECT( ref l_U24 );
        DELETE_OBJECT( ref l_U25 );
        DELETE_OBJECT( ref l_U26 );
        DELETE_OBJECT( ref l_U27 );
        DELETE_OBJECT( ref l_U28 );
        DELETE_OBJECT( ref l_U29 );
        DELETE_OBJECT( ref l_U30 );
        DELETE_OBJECT( ref l_U31 );
        DELETE_OBJECT( ref l_U32 );
        DELETE_OBJECT( ref l_U33 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}
