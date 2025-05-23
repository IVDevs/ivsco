void main()
{
    l_U0 = 0;
    l_U1 = {718.02100000, -254.87400000, 10.55200000};
    l_U4 = 155.00000000;
    l_U5 = {709.17100000, -250.72400000, 10.55200000};
    l_U8 = {677.75500000, -314.24600000, 10.44500000};
    l_U11 = 335.27300000;
    l_U12 = {697.57260000, -305.50410000, 10.05000000};
    l_U15 = 154.00000000;
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (sub_143())
            {
                switch (l_U0)
                {
                    case 0:
                    if (sub_232())
                    {
                        l_U0 = 1;
                    }
                    break;
                    case 1: break;
                    case 2: break;
                }
            }
            else
            {
                sub_681();
            }
        }
        else
        {
            sub_681();
        }
    }
    return;
}

void sub_143()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "finale1b" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

int sub_232()
{
    REQUEST_MODEL( 1185749008 );
    REQUEST_MODEL( 1983427299 );
    if ((HAS_MODEL_LOADED( 1185749008 )) AND (HAS_MODEL_LOADED( 1983427299 )))
    {
        CREATE_OBJECT( 1185749008, l_U1._fU0, l_U1._fU4, l_U1._fU8, ref l_U16[0], 1 );
        SET_OBJECT_HEADING( l_U16[0], l_U4 );
        FREEZE_OBJECT_POSITION( l_U16[0], 1 );
        CREATE_OBJECT( 1185749008, l_U5._fU0, l_U5._fU4, l_U5._fU8, ref l_U16[1], 1 );
        SET_OBJECT_HEADING( l_U16[1], l_U4 );
        FREEZE_OBJECT_POSITION( l_U16[1], 1 );
        CLEAR_AREA( l_U8._fU0, l_U8._fU4, l_U8._fU8, 2.00000000, 0 );
        CREATE_OBJECT_NO_OFFSET( 1983427299, l_U8._fU0, l_U8._fU4, l_U8._fU8, ref l_U19, 1 );
        SET_OBJECT_HEADING( l_U19, l_U11 );
        FREEZE_OBJECT_POSITION( l_U19, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U19, "GtaMloRoom02" );
        CLEAR_AREA( l_U12._fU0, l_U12._fU4, l_U12._fU8, 2.00000000, 0 );
        CREATE_OBJECT_NO_OFFSET( 1983427299, l_U12._fU0, l_U12._fU4, l_U12._fU8, ref l_U20, 1 );
        SET_OBJECT_HEADING( l_U20, l_U15 );
        FREEZE_OBJECT_POSITION( l_U20, 1 );
        return 1;
    }
    else
    {
        REQUEST_MODEL( 1185749008 );
        REQUEST_MODEL( 1983427299 );
    }
    return 0;
}

void sub_681()
{
    if (DOES_OBJECT_EXIST( l_U16[0] ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U16[0] );
    }
    if (DOES_OBJECT_EXIST( l_U16[1] ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U16[1] );
    }
    if (DOES_OBJECT_EXIST( l_U19 ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U19 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}
