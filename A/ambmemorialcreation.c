void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U103 = 0;
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_53() ))
        {
            switch (l_U103)
            {
                case 0:
                sub_140();
                l_U103 = 1;
                break;
                case 1:
                l_U103 = 2;
                break;
                case 2:
                sub_362();
                l_U103 = 3;
                break;
                case 3:
                GET_INTERIOR_FROM_CHAR( sub_5829(), ref l_U104 );
                if (l_U104 == nil)
                {
                    sub_5894();
                    TERMINATE_THIS_SCRIPT();
                }
                break;
            }
        }
    }
    return;
}

void sub_53()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_140()
{
    int I;

    for ( I = 0; I <= 23; I++ )
    {
        if (g_U9592[I]._fU12 == 1)
        {
            REQUEST_MODEL( g_U9908[I]._fU24 );
            REQUEST_MODEL( g_U9908[I]._fU28 );
            REQUEST_MODEL( g_U9908[I]._fU32 );
            REQUEST_MODEL( g_U9857 );
            if ((sub_258( g_U9592[I]._fU8 )) > 1)
            {
                REQUEST_MODEL( g_U9908[I]._fU36 );
            }
        }
    }
    return;
}

int sub_258(int iParam0)
{
    if (iParam0 < 10)
    {
        return 1;
        break;
    }
    return 2;
}

void sub_362()
{
    int I;
    float fVar3;

    for ( I = 0; I <= 23; I++ )
    {
        if (g_U9592[I]._fU12 == 1)
        {
            if (g_U9908[I]._fU64 == 1)
            {
                PRINTNL();
                PRINTSTRING( "------Creating memorial for Guy number " );
                PRINTINT( I );
                PRINTSTRING( " --------------------" );
                PRINTNL();
                sub_526( I );
                CREATE_OBJECT( g_U9908[I]._fU24, g_U9690[g_U9908[I]._fU60]._fU0, g_U9690[g_U9908[I]._fU60]._fU4, g_U9690[g_U9908[I]._fU60]._fU8, ref g_U9908[I]._fU40, 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U9908[I]._fU40, "E1_lost_1stfloor" );
                SET_OBJECT_ROTATION( g_U9908[I]._fU40, g_U9763._fU0, g_U9763._fU4, g_U9763._fU8 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( g_U9908[I]._fU24 );
                SET_OBJECT_COORDINATES( g_U9908[I]._fU40, g_U9690[g_U9908[I]._fU60]._fU0, g_U9690[g_U9908[I]._fU60]._fU4, g_U9690[g_U9908[I]._fU60]._fU8 );
                CREATE_OBJECT( g_U9857, g_U9766[g_U9908[I]._fU60]._fU0, g_U9766[g_U9908[I]._fU60]._fU4, g_U9766[g_U9908[I]._fU60]._fU8, ref g_U9908[I]._fU44, 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U9908[I]._fU44, "E1_lost_1stfloor" );
                SET_OBJECT_ROTATION( g_U9908[I]._fU44, g_U9839._fU0, g_U9839._fU4, g_U9839._fU8 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( g_U9857 );
                SET_OBJECT_COORDINATES( g_U9908[I]._fU44, g_U9766[g_U9908[I]._fU60]._fU0, g_U9766[g_U9908[I]._fU60]._fU4, g_U9766[g_U9908[I]._fU60]._fU8 );
                if (DOES_OBJECT_EXIST( g_U9908[I]._fU44 ))
                {
                    if (NOT (DOES_OBJECT_EXIST( g_U9908[I]._fU48 )))
                    {
                        CREATE_OBJECT( g_U9908[I]._fU28, g_U9908[I]._fU12._fU0, g_U9908[I]._fU12._fU4, g_U9908[I]._fU12._fU8, ref g_U9908[I]._fU48, 1 );
                        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U9908[I]._fU48, "E1_lost_1stfloor" );
                        ATTACH_OBJECT_TO_OBJECT( g_U9908[I]._fU48, g_U9908[I]._fU44, 0, g_U9845, g_U10388 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( g_U9908[I]._fU28 );
                    }
                }
                if (DOES_OBJECT_EXIST( g_U9908[I]._fU44 ))
                {
                    if (NOT (DOES_OBJECT_EXIST( g_U9908[I]._fU52 )))
                    {
                        if ((sub_258( g_U9592[I]._fU8 )) == 1)
                        {
                            CREATE_OBJECT( g_U9908[I]._fU32, g_U9908[I]._fU12._fU0, g_U9908[I]._fU12._fU4, g_U9908[I]._fU12._fU8, ref g_U9908[I]._fU52, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U9908[I]._fU52, "E1_lost_1stfloor" );
                            ATTACH_OBJECT_TO_OBJECT( g_U9908[I]._fU52, g_U9908[I]._fU44, 0, g_U9848, g_U10395 );
                            MARK_MODEL_AS_NO_LONGER_NEEDED( g_U9908[I]._fU32 );
                        }
                        else
                        {
                            GENERATE_RANDOM_FLOAT_IN_RANGE( 10, 6000, ref fVar3 );
                            fVar3 /= 10000;
                            CREATE_OBJECT( g_U9908[I]._fU32, g_U9908[I]._fU12._fU0, g_U9908[I]._fU12._fU4, g_U9908[I]._fU12._fU8, ref g_U9908[I]._fU52, 1 );
                            ATTACH_OBJECT_TO_OBJECT( g_U9908[I]._fU52, g_U9908[I]._fU44, 0, g_U9851, g_U10395 );
                            MARK_MODEL_AS_NO_LONGER_NEEDED( g_U9908[I]._fU32 );
                            if (NOT (DOES_OBJECT_EXIST( g_U9908[I]._fU56 )))
                            {
                                CREATE_OBJECT( g_U9908[I]._fU36, g_U9908[I]._fU12._fU0 + fVar3, g_U9908[I]._fU12._fU4 + fVar3, g_U9908[I]._fU12._fU8, ref g_U9908[I]._fU56, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U9908[I]._fU56, "E1_lost_1stfloor" );
                                ATTACH_OBJECT_TO_OBJECT( g_U9908[I]._fU56, g_U9908[I]._fU44, 0, g_U9854, g_U10395 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( g_U9908[I]._fU36 );
                            }
                        }
                    }
                }
            }
        }
    }
    if (g_U15728[9] == 1)
    {
        sub_2280();
    }
    if (g_U15728[10] == 1)
    {
        sub_3465();
    }
    if (g_U15728[8] == 1)
    {
        sub_4646();
    }
    return;
}

int sub_526(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result <= 23; Result++ )
    {
        if (g_U10408[Result] == 0)
        {
            PRINTNL();
            PRINTNL();
            PRINTSTRING( "-------------------------------------------------------------" );
            PRINTNL();
            PRINTSTRING( "Memorial - Next free wall position = " );
            PRINTINT( Result );
            PRINTNL();
            PRINTSTRING( "-------------------------------------------------------------" );
            PRINTNL();
            PRINTNL();
            g_U9908[uParam0]._fU60 = Result;
            g_U10408[Result] = 1;
            return Result;
        }
    }
    return -1;
}

void sub_2280()
{
    PRINTNL();
    PRINTSTRING( "------Creating memorial for JASON_MEMORIAL" );
    PRINTSTRING( " --------------------" );
    PRINTNL();
    REQUEST_MODEL( g_U10317[0]._fU24 );
    while (NOT (HAS_MODEL_LOADED( g_U10317[0]._fU24 )))
    {
        WAIT( 0 );
    }
    CREATE_OBJECT( g_U10317[0]._fU24, g_U10317[0]._fU0._fU0, g_U10317[0]._fU0._fU4, g_U10317[0]._fU0._fU8, ref g_U10317[0]._fU40, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U10317[0]._fU40, "E1_lost_1stfloor" );
    SET_OBJECT_ROTATION( g_U10317[0]._fU40, g_U9763._fU0, g_U9763._fU4, g_U9763._fU8 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[0]._fU24 );
    SET_OBJECT_COORDINATES( g_U10317[0]._fU40, g_U10317[0]._fU0._fU0, g_U10317[0]._fU0._fU4, g_U10317[0]._fU0._fU8 );
    REQUEST_MODEL( 20211047 );
    while (NOT (HAS_MODEL_LOADED( 20211047 )))
    {
        WAIT( 0 );
    }
    CREATE_OBJECT( 20211047, g_U10317[0]._fU12._fU0, g_U10317[0]._fU12._fU4, g_U10317[0]._fU12._fU8, ref g_U10317[0]._fU44, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U10317[0]._fU44, "E1_lost_1stfloor" );
    SET_OBJECT_ROTATION( g_U10317[0]._fU44, g_U9839._fU0, g_U9839._fU4, g_U9839._fU8 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 20211047 );
    SET_OBJECT_COORDINATES( g_U10317[0]._fU44, g_U10317[0]._fU12._fU0, g_U10317[0]._fU12._fU4, g_U10317[0]._fU12._fU8 );
    REQUEST_MODEL( g_U10317[0]._fU28 );
    while (NOT (HAS_MODEL_LOADED( g_U10317[0]._fU28 )))
    {
        WAIT( 0 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[0]._fU44 ))
    {
        if (NOT (DOES_OBJECT_EXIST( g_U10317[0]._fU48 )))
        {
            CREATE_OBJECT( g_U10317[0]._fU28, g_U10317[0]._fU12._fU0, g_U10317[0]._fU12._fU4, g_U10317[0]._fU12._fU8, ref g_U10317[0]._fU48, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U10317[0]._fU48, "E1_lost_1stfloor" );
            ATTACH_OBJECT_TO_OBJECT( g_U10317[0]._fU48, g_U10317[0]._fU44, 0, g_U9845, g_U10388 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[0]._fU28 );
        }
    }
    REQUEST_MODEL( g_U10317[0]._fU32 );
    while (NOT (HAS_MODEL_LOADED( g_U10317[0]._fU32 )))
    {
        WAIT( 0 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[0]._fU44 ))
    {
        if (NOT (DOES_OBJECT_EXIST( g_U10317[0]._fU52 )))
        {
            CREATE_OBJECT( g_U10317[0]._fU32, g_U10317[0]._fU12._fU0, g_U10317[0]._fU12._fU4, g_U10317[0]._fU12._fU8, ref g_U10317[0]._fU52, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U10317[0]._fU52, "E1_lost_1stfloor" );
            ATTACH_OBJECT_TO_OBJECT( g_U10317[0]._fU52, g_U10317[0]._fU44, 0, g_U9848, g_U10395 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[0]._fU32 );
        }
    }
    return;
}

void sub_3465()
{
    PRINTNL();
    PRINTSTRING( "------Creating memorial for BRIAN_MEMORIAL" );
    PRINTSTRING( " --------------------" );
    PRINTNL();
    REQUEST_MODEL( g_U10317[2]._fU24 );
    while (NOT (HAS_MODEL_LOADED( g_U10317[2]._fU24 )))
    {
        WAIT( 0 );
    }
    CREATE_OBJECT( g_U10317[2]._fU24, g_U10317[2]._fU0._fU0, g_U10317[2]._fU0._fU4, g_U10317[2]._fU0._fU8, ref g_U10317[2]._fU40, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U10317[2]._fU40, "E1_lost_1stfloor" );
    SET_OBJECT_ROTATION( g_U10317[2]._fU40, g_U9763._fU0, g_U9763._fU4, g_U9763._fU8 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[2]._fU24 );
    SET_OBJECT_COORDINATES( g_U10317[2]._fU40, g_U10317[2]._fU0._fU0, g_U10317[2]._fU0._fU4, g_U10317[2]._fU0._fU8 );
    REQUEST_MODEL( 20211047 );
    while (NOT (HAS_MODEL_LOADED( 20211047 )))
    {
        WAIT( 0 );
    }
    CREATE_OBJECT( 20211047, g_U10317[2]._fU12._fU0, g_U10317[2]._fU12._fU4, g_U10317[2]._fU12._fU8, ref g_U10317[2]._fU44, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U10317[2]._fU44, "E1_lost_1stfloor" );
    SET_OBJECT_ROTATION( g_U10317[2]._fU44, g_U9839._fU0, g_U9839._fU4, g_U9839._fU8 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 20211047 );
    SET_OBJECT_COORDINATES( g_U10317[2]._fU44, g_U10317[2]._fU12._fU0, g_U10317[2]._fU12._fU4, g_U10317[2]._fU12._fU8 );
    REQUEST_MODEL( g_U10317[2]._fU28 );
    while (NOT (HAS_MODEL_LOADED( g_U10317[2]._fU28 )))
    {
        WAIT( 0 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[2]._fU44 ))
    {
        if (NOT (DOES_OBJECT_EXIST( g_U10317[2]._fU48 )))
        {
            CREATE_OBJECT( g_U10317[2]._fU28, g_U10317[2]._fU12._fU0, g_U10317[2]._fU12._fU4, g_U10317[2]._fU12._fU8, ref g_U10317[2]._fU48, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U10317[2]._fU48, "E1_lost_1stfloor" );
            ATTACH_OBJECT_TO_OBJECT( g_U10317[2]._fU48, g_U10317[2]._fU44, 0, g_U9845, g_U10388 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[2]._fU28 );
        }
    }
    REQUEST_MODEL( g_U10317[2]._fU28 );
    while (NOT (HAS_MODEL_LOADED( g_U10317[2]._fU28 )))
    {
        WAIT( 0 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[2]._fU44 ))
    {
        if (NOT (DOES_OBJECT_EXIST( g_U10317[2]._fU52 )))
        {
            CREATE_OBJECT( g_U10317[2]._fU32, g_U10317[2]._fU12._fU0, g_U10317[2]._fU12._fU4, g_U10317[2]._fU12._fU8, ref g_U10317[2]._fU52, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U10317[2]._fU52, "E1_lost_1stfloor" );
            ATTACH_OBJECT_TO_OBJECT( g_U10317[2]._fU52, g_U10317[2]._fU44, 0, g_U9848, g_U10395 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[2]._fU32 );
        }
    }
    return;
}

void sub_4646()
{
    PRINTNL();
    PRINTSTRING( "------Creating memorial for JIM_MEMORIAL" );
    PRINTSTRING( " --------------------" );
    PRINTNL();
    REQUEST_MODEL( g_U10317[1]._fU24 );
    while (NOT (HAS_MODEL_LOADED( g_U10317[1]._fU24 )))
    {
        WAIT( 0 );
    }
    CREATE_OBJECT( g_U10317[1]._fU24, g_U10317[1]._fU0._fU0, g_U10317[1]._fU0._fU4, g_U10317[1]._fU0._fU8, ref g_U10317[1]._fU40, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U10317[1]._fU40, "E1_lost_1stfloor" );
    SET_OBJECT_ROTATION( g_U10317[1]._fU40, g_U9763._fU0, g_U9763._fU4, g_U9763._fU8 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[1]._fU24 );
    SET_OBJECT_COORDINATES( g_U10317[1]._fU40, g_U10317[1]._fU0._fU0, g_U10317[1]._fU0._fU4, g_U10317[1]._fU0._fU8 );
    REQUEST_MODEL( 20211047 );
    while (NOT (HAS_MODEL_LOADED( 20211047 )))
    {
        WAIT( 0 );
    }
    CREATE_OBJECT( 20211047, g_U10317[1]._fU12._fU0, g_U10317[1]._fU12._fU4, g_U10317[1]._fU12._fU8, ref g_U10317[1]._fU44, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U10317[1]._fU44, "E1_lost_1stfloor" );
    SET_OBJECT_ROTATION( g_U10317[1]._fU44, g_U9839._fU0, g_U9839._fU4, g_U9839._fU8 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 20211047 );
    SET_OBJECT_COORDINATES( g_U10317[1]._fU44, g_U10317[1]._fU12._fU0, g_U10317[1]._fU12._fU4, g_U10317[1]._fU12._fU8 );
    REQUEST_MODEL( g_U10317[1]._fU28 );
    while (NOT (HAS_MODEL_LOADED( g_U10317[1]._fU28 )))
    {
        WAIT( 0 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[1]._fU44 ))
    {
        if (NOT (DOES_OBJECT_EXIST( g_U10317[1]._fU48 )))
        {
            CREATE_OBJECT( g_U10317[1]._fU28, g_U10317[1]._fU12._fU0, g_U10317[1]._fU12._fU4, g_U10317[1]._fU12._fU8, ref g_U10317[1]._fU48, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U10317[1]._fU48, "E1_lost_1stfloor" );
            ATTACH_OBJECT_TO_OBJECT( g_U10317[1]._fU48, g_U10317[1]._fU44, 0, g_U9845, g_U10388 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[1]._fU28 );
        }
    }
    REQUEST_MODEL( g_U10317[1]._fU28 );
    while (NOT (HAS_MODEL_LOADED( g_U10317[1]._fU28 )))
    {
        WAIT( 0 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[1]._fU44 ))
    {
        if (NOT (DOES_OBJECT_EXIST( g_U10317[1]._fU52 )))
        {
            CREATE_OBJECT( g_U10317[1]._fU32, g_U10317[1]._fU12._fU0, g_U10317[1]._fU12._fU4, g_U10317[1]._fU12._fU8, ref g_U10317[1]._fU52, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( g_U10317[1]._fU52, "E1_lost_1stfloor" );
            ATTACH_OBJECT_TO_OBJECT( g_U10317[1]._fU52, g_U10317[1]._fU44, 0, g_U9848, g_U10395 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[1]._fU32 );
        }
    }
    return;
}

void sub_5829()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5894()
{
    int I;

    for ( I = 0; I <= 23; I++ )
    {
        if (g_U9908[I]._fU64 == 1)
        {
            PRINTNL();
            PRINTSTRING( "------removing recurring memorial" );
            PRINTINT( I );
            PRINTSTRING( " --------------------" );
            PRINTNL();
            MARK_MODEL_AS_NO_LONGER_NEEDED( g_U9908[I]._fU24 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( g_U9857 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( g_U9908[I]._fU28 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( g_U9908[I]._fU32 );
            if (g_U9908[I]._fU36 != 0)
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( g_U9908[I]._fU36 );
            }
            if (DOES_OBJECT_EXIST( g_U9908[I]._fU40 ))
            {
                DELETE_OBJECT( ref g_U9908[I]._fU40 );
            }
            if (DOES_OBJECT_EXIST( g_U9908[I]._fU44 ))
            {
                DELETE_OBJECT( ref g_U9908[I]._fU44 );
            }
            if (DOES_OBJECT_EXIST( g_U9908[I]._fU48 ))
            {
                DELETE_OBJECT( ref g_U9908[I]._fU48 );
            }
            if (DOES_OBJECT_EXIST( g_U9908[I]._fU52 ))
            {
                DELETE_OBJECT( ref g_U9908[I]._fU52 );
            }
            if (DOES_OBJECT_EXIST( g_U9908[I]._fU56 ))
            {
                DELETE_OBJECT( ref g_U9908[I]._fU56 );
            }
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[0]._fU24 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[0]._fU28 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[0]._fU32 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[1]._fU24 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[1]._fU28 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[1]._fU32 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[2]._fU24 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[2]._fU28 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U10317[2]._fU32 );
    if (DOES_OBJECT_EXIST( g_U10317[0]._fU40 ))
    {
        DELETE_OBJECT( ref g_U10317[0]._fU40 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[0]._fU44 ))
    {
        DELETE_OBJECT( ref g_U10317[0]._fU44 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[0]._fU48 ))
    {
        DELETE_OBJECT( ref g_U10317[0]._fU48 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[0]._fU52 ))
    {
        DELETE_OBJECT( ref g_U10317[0]._fU52 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[0]._fU56 ))
    {
        DELETE_OBJECT( ref g_U10317[0]._fU56 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[1]._fU40 ))
    {
        DELETE_OBJECT( ref g_U10317[1]._fU40 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[1]._fU44 ))
    {
        DELETE_OBJECT( ref g_U10317[1]._fU44 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[1]._fU48 ))
    {
        DELETE_OBJECT( ref g_U10317[1]._fU48 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[1]._fU52 ))
    {
        DELETE_OBJECT( ref g_U10317[1]._fU52 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[1]._fU56 ))
    {
        DELETE_OBJECT( ref g_U10317[1]._fU56 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[2]._fU40 ))
    {
        DELETE_OBJECT( ref g_U10317[2]._fU40 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[2]._fU44 ))
    {
        DELETE_OBJECT( ref g_U10317[2]._fU44 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[2]._fU48 ))
    {
        DELETE_OBJECT( ref g_U10317[2]._fU48 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[2]._fU52 ))
    {
        DELETE_OBJECT( ref g_U10317[2]._fU52 );
    }
    if (DOES_OBJECT_EXIST( g_U10317[2]._fU56 ))
    {
        DELETE_OBJECT( ref g_U10317[2]._fU56 );
    }
    for ( I = 0; I <= 23; I++ )
    {
        g_U10408[I] = 0;
        g_U9908[I]._fU60 = -1;
    }
    return;
}
