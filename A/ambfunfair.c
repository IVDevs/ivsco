void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0.01000000;
    l_U4 = 1.00000000;
    l_U5 = 0.01000000;
    l_U6 = 1;
    l_U7 = {0, 0, -0.50000000};
    l_U10 = 0;
    l_U11 = 0;
    if (DOES_OBJECT_EXIST( l_U13 ))
    {
        SET_OBJECT_DYNAMIC( l_U13, 0 );
        FREEZE_OBJECT_POSITION( l_U13, 1 );
    }
    while (true)
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U13 ))
        {
            if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U13 ))
            {
                switch (l_U2)
                {
                    case 0:
                    if (g_U10532)
                    {
                        if (ROTATE_OBJECT( l_U13, sub_210( l_U13 ), sub_276( l_U13, 1 ), 1 ))
                        {
                            ;
                        }
                    }
                    else if (l_U6)
                    {
                        if (l_U3 > l_U5)
                        {
                            if (ROTATE_OBJECT( l_U13, sub_210( l_U13 ), sub_276( l_U13, 0 ), 1 ))
                            {
                                ;
                            }
                        }
                    }
                    else
                    {
                        l_U3 = l_U5;
                    }
                    break;
                    case 1: break;
                    case 2: break;
                }
            }
            else
            {
                sub_749();
            }
        }
        else
        {
            sub_749();
        }
    }
    return;
}

void sub_210(unknown uParam0)
{
    float Result;

    GET_OBJECT_HEADING( uParam0, ref Result );
    Result += 5.00000000;
    if (Result > 360.00000000)
    {
        Result -= 360.00000000;
    }
    return Result;
}

void sub_276(unknown uParam0, boolean bParam1)
{
    if (l_U6)
    {
        if (bParam1)
        {
            if (l_U3 < l_U4)
            {
                if (NOT l_U10)
                {
                    if (DOES_OBJECT_EXIST( uParam0 ))
                    {
                        TRIGGER_PTFX_ON_OBJ( "fairground_damage", uParam0, l_U7, l_U7, 1065353216 );
                        l_U10 = 1;
                    }
                }
                l_U3 += l_U5;
            }
            else if (NOT l_U11)
            {
                if (DOES_OBJECT_EXIST( uParam0 ))
                {
                    l_U12 = START_PTFX_ON_OBJ( "fairground_damage_loop", uParam0, l_U7, l_U7, 1065353216 );
                    l_U11 = 1;
                }
            }
            l_U3 = l_U4;;
        }
        else if (l_U3 > l_U5)
        {
            l_U3 -= l_U5;
        }
        else if (l_U12 > 0)
        {
            STOP_PTFX( l_U12 );
            l_U10 = 0;
            l_U11 = 0;
        }
        l_U3 = 0.00100000;;;
    }
    else if (NOT l_U11)
    {
        if (DOES_OBJECT_EXIST( uParam0 ))
        {
            l_U12 = START_PTFX_ON_OBJ( "fairground_damage_loop", uParam0, l_U7, l_U7, 1065353216 );
            l_U11 = 1;
        }
    }
    l_U3 = l_U4;;
    return l_U3;
}

void sub_749()
{
    TERMINATE_THIS_SCRIPT();
    return;
}
