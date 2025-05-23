void main()
{
    sub_9();
    while (true)
    {
        WAIT( 0 );
        sub_474();
    }
    return;
}

void sub_9()
{
    l_U2 = 1951172506;
    l_U10 = 1;
    l_U11 = 1;
    CREATE_WIDGET_GROUP( "Object Positioning" );
    l_U0 = ADD_TEXT_WIDGET( "Object Model" );
    SET_CONTENTS_OF_TEXT_WIDGET( l_U0, "AMB_BRICK" );
    ADD_WIDGET_TOGGLE( "Update Model", ref l_U13 );
    ADD_WIDGET_TOGGLE( "Activate Object Positioning", ref l_U12 );
    ADD_WIDGET_FLOAT_SLIDER( "X Coords", ref l_U3._fU0, -2000.00000000, 2000.00000000, 0.05000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Y Coords", ref l_U3._fU4, -2000.00000000, 2000.00000000, 0.05000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Z Coords", ref l_U3._fU8, -2000.00000000, 2000.00000000, 0.05000000 );
    ADD_WIDGET_FLOAT_SLIDER( "X Rotation", ref l_U6._fU0, 0.00000000, 360.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Y Rotation", ref l_U6._fU4, 0.00000000, 360.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Z Rotation", ref l_U6._fU8, 0.00000000, 360.00000000, 1.00000000 );
    ADD_WIDGET_TOGGLE( "Output to TEMP_DEBUG", ref l_U9 );
    END_WIDGET_GROUP();
    return;
}

void sub_474()
{
    unknown uVar2;
    unknown uVar3;

    if (l_U12)
    {
        if (l_U10)
        {
            l_U2 = GET_HASH_KEY( GET_CONTENTS_OF_TEXT_WIDGET( l_U0 ) );
            if (NOT (IS_MODEL_IN_CDIMAGE( l_U2 )))
            {
                SCRIPT_ASSERT( "Object model doesn't exist!" );
            }
            else
            {
                l_U9 = 0;
                if (NOT (IS_CHAR_DEAD( sub_581() )))
                {
                    GET_CHAR_COORDINATES( sub_581(), ref l_U3._fU0, ref l_U3._fU4, ref l_U3._fU8 );
                    l_U3._fU0 += 1.00000000;
                    CREATE_OBJECT( l_U2, l_U3._fU0, l_U3._fU4, l_U3._fU8, ref l_U1, 1 );
                    GET_GAME_VIEWPORT_ID( ref uVar2 );
                    GET_KEY_FOR_VIEWPORT_IN_ROOM( uVar2, ref uVar3 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U1, uVar3 );
                    SET_OBJECT_ROTATION( l_U1, l_U6._fU0, l_U6._fU4, l_U6._fU8 );
                    SET_OBJECT_DYNAMIC( l_U1, 1 );
                    l_U10 = 0;
                    l_U11 = 1;
                }
            }
        }
        else if (l_U13)
        {
            l_U2 = GET_HASH_KEY( GET_CONTENTS_OF_TEXT_WIDGET( l_U0 ) );
            if (NOT (IS_MODEL_IN_CDIMAGE( l_U2 )))
            {
                SCRIPT_ASSERT( "Object model doesn't exist!" );
            }
            else if (DOES_OBJECT_EXIST( l_U1 ))
            {
                DELETE_OBJECT( ref l_U1 );
            }
            CREATE_OBJECT( l_U2, l_U3._fU0, l_U3._fU4, l_U3._fU8, ref l_U1, 1 );;
            l_U13 = 0;
        }
        if (DOES_OBJECT_EXIST( l_U1 ))
        {
            SET_OBJECT_COORDINATES( l_U1, l_U3._fU0, l_U3._fU4, l_U3._fU8 );
            SET_OBJECT_ROTATION( l_U1, l_U6._fU0, l_U6._fU4, l_U6._fU8 );
        }
        if (l_U9)
        {
            sub_1006( l_U3, l_U6, 0 );
            l_U9 = 0;
        }
    }
    else if (l_U11)
    {
        DELETE_OBJECT( ref l_U1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2 );
        l_U11 = 0;
        l_U10 = 1;
    }
    return;
}

void sub_581()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1006(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6)
{
    SAVE_NEWLINE_TO_DEBUG_FILE();
    if (NOT bParam6)
    {
        SAVE_STRING_TO_DEBUG_FILE( "Object coordinates =  " );
    }
    SAVE_FLOAT_TO_DEBUG_FILE( uParam0._fU0 );
    SAVE_STRING_TO_DEBUG_FILE( ", " );
    SAVE_FLOAT_TO_DEBUG_FILE( uParam0._fU4 );
    SAVE_STRING_TO_DEBUG_FILE( ", " );
    SAVE_FLOAT_TO_DEBUG_FILE( uParam0._fU8 );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "Object rotation = " );
    SAVE_FLOAT_TO_DEBUG_FILE( uParam3._fU0 );
    SAVE_STRING_TO_DEBUG_FILE( ", " );
    SAVE_FLOAT_TO_DEBUG_FILE( uParam3._fU4 );
    SAVE_STRING_TO_DEBUG_FILE( ", " );
    SAVE_FLOAT_TO_DEBUG_FILE( uParam3._fU8 );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    sub_1228( "TEXXYZ3" );
    return;
}

void sub_1228(unknown uParam0)
{
    CLEAR_SMALL_PRINTS();
    PRINT( uParam0, 8000, 1 );
    return;
}
