void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    sub_30( g_U11225 );
    while (DOES_PICKUP_EXIST( g_U11199 ))
    {
        if (NOT g_U11232)
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT sub_1109())
                {
                    PRINT_HELP( "JWP_EXP" );
                    g_U11232 = 1;
                }
            }
        }
        WAIT( 0 );
    }
    if (DOES_BLIP_EXIST( l_U105 ))
    {
        REMOVE_BLIP( l_U105 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_30(int iParam0)
{
    int iVar3;
    float fVar4;
    unknown uVar5;

    if (IS_PLAYER_PLAYING( sub_39() ))
    {
        if (DOES_PICKUP_EXIST( g_U11199 ))
        {
            REMOVE_PICKUP( g_U11199 );
        }
        if (NOT (iParam0 == 28))
        {
            GET_MAX_AMMO( sub_121(), iParam0, ref iVar3 );
        }
        else
        {
            iVar3 = 1;
        }
        fVar4 = TO_FLOAT( iVar3 );
        fVar4 *= 1.00000000;
        iVar3 = CEIL( fVar4 );
        switch (g_U11225)
        {
            case 13:
            case 11:
            case 22:
            case 26:
            GET_WEAPONTYPE_MODEL( iParam0, ref uVar5 );
            CREATE_PICKUP_ROTATE( uVar5, 3, iVar3, -1724.81600000, 343.35800000, 31.45500000, 75.00000000, 0.00000000, 310.00000000, ref g_U11199 );
            ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( g_U11199, "E1_Lost_1stfloor" );
            break;
            default:
            GET_WEAPONTYPE_MODEL( iParam0, ref uVar5 );
            CREATE_PICKUP_ROTATE( uVar5, 3, iVar3, -1724.75000000, 343.23300000, 31.45500000, 75.00000000, 0.00000000, 310.00000000, ref g_U11199 );
            ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( g_U11199, "E1_Lost_1stfloor" );
            break;
        }
        ADD_BLIP_FOR_COORD( -1724.81600000, 343.35800000, 31.45500000, ref l_U105 );
        CHANGE_BLIP_SPRITE( l_U105, 127 );
        CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U105, "BLIP_127" );
        CHANGE_BLIP_PRIORITY( l_U105, 0 );
        switch (g_U11225)
        {
            case 7:
            PRINT_HELP_WITH_NUMBER( "JWP_01", iVar3 );
            break;
            case 10:
            PRINT_HELP_WITH_NUMBER( "JWP_02", iVar3 );
            break;
            case 12:
            PRINT_HELP_WITH_NUMBER( "JWP_03", iVar3 );
            break;
            case 16:
            PRINT_HELP_WITH_NUMBER( "JWP_04", iVar3 );
            break;
            case 14:
            PRINT_HELP_WITH_NUMBER( "JWP_05", iVar3 );
            break;
            case 13:
            PRINT_HELP_WITH_NUMBER( "JWP_06", iVar3 );
            break;
            case 15:
            PRINT_HELP_WITH_NUMBER( "JWP_07", iVar3 );
            break;
            case 11:
            PRINT_HELP_WITH_NUMBER( "JWP_08", iVar3 );
            break;
            case 18:
            PRINT_HELP_WITH_NUMBER( "JWP_09", iVar3 );
            break;
            case 21:
            PRINT_HELP_WITH_NUMBER( "JWP_10", iVar3 );
            break;
            case 22:
            PRINT_HELP_WITH_NUMBER( "JWP_11", iVar3 );
            break;
            case 27:
            PRINT_HELP_WITH_NUMBER( "JWP_12", iVar3 );
            break;
            case 26:
            PRINT_HELP_WITH_NUMBER( "JWP_13", iVar3 );
            break;
            case 4:
            PRINT_HELP_WITH_NUMBER( "JWP_14", iVar3 );
            break;
            case 28:
            PRINT_HELP_WITH_NUMBER( "JWP_15", iVar3 );
            break;
            case 5:
            PRINT_HELP_WITH_NUMBER( "JWP_16", iVar3 );
            break;
            case 17:
            PRINT_HELP_WITH_NUMBER( "JWP_17", iVar3 );
            break;
        }
    }
    return;
}

void sub_39()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_121()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1109()
{
    if (NOT (IS_PLAYER_CONTROL_ON( sub_39() )))
    {
        if ((ARE_WIDESCREEN_BORDERS_ACTIVE()) AND (sub_1143()))
        {
            return 1;
        }
        if (HAS_CUTSCENE_LOADED())
        {
            if (NOT HAS_CUTSCENE_FINISHED())
            {
                return 1;
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            return 1;
        }
    }
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        return 1;
    }
    return 0;
}

int sub_1143()
{
    if ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0)
    {
        return 1;
    }
    return 0;
}
