void main()
{
    l_U6 = -195381842;
    l_U7 = 1772563309;
    sub_25();
    return;
}

void sub_25()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;

    CREATE_WIDGET_GROUP( "OFFSET FROM VEHICLE" );
    l_U3 = ADD_TEXT_WIDGET( "Car Model" );
    SET_CONTENTS_OF_TEXT_WIDGET( l_U3, "BANSHEE" );
    ADD_WIDGET_FLOAT_SLIDER( "vFrontSeatOffset X", ref l_U8._fU0, -10.00000000, 10.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vFrontSeatOffset Y", ref l_U8._fU4, -10.00000000, 10.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vFrontSeatOffset Z", ref l_U8._fU8, -10.00000000, 10.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vBackSeatOffset X", ref l_U14._fU0, -10.00000000, 10.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vBackSeatOffset Y", ref l_U14._fU4, -10.00000000, 10.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vBackSeatOffset Z", ref l_U14._fU8, -10.00000000, 10.00000000, 0.01000000 );
    ADD_WIDGET_TOGGLE( "Create / Update", ref l_U1 );
    ADD_WIDGET_TOGGLE( "Output to temp_debug.txt", ref l_U2 );
    END_WIDGET_GROUP();
    while (true)
    {
        if (l_U1)
        {
            if (IS_PLAYER_PLAYING( sub_483() ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_526() );
            }
            if (DOES_VEHICLE_EXIST( l_U20 ))
            {
                if (NOT (IS_CAR_DEAD( l_U20 )))
                {
                    GET_CAR_COORDINATES( l_U20, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    GET_CAR_HEADING( l_U20, ref fVar6 );
                }
                else if (IS_PLAYER_PLAYING( sub_483() ))
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_526(), 0.00000000, 5.00000000, 2.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    GET_CHAR_HEADING( sub_526(), ref fVar6 );
                    fVar6 += 90.00000000;
                }
                DELETE_CAR( ref l_U20 );
            }
            else if (IS_PLAYER_PLAYING( sub_483() ))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_526(), 0.00000000, 5.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                GET_CHAR_HEADING( sub_526(), ref fVar6 );
                fVar6 += 90.00000000;
            }
            l_U5 = GET_HASH_KEY( GET_CONTENTS_OF_TEXT_WIDGET( l_U3 ) );
            bVar2 = true;
            if (NOT (IS_MODEL_IN_CDIMAGE( l_U5 )))
            {
                SCRIPT_ASSERT( "Car model doesn't exist!" );
                bVar2 = false;
            }
            if (bVar2)
            {
                REQUEST_MODEL( l_U5 );
                while (NOT (HAS_MODEL_LOADED( l_U5 )))
                {
                    WAIT( 0 );
                }
                CREATE_CAR( l_U5, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U20, 1 );
                SET_CAR_HEADING( l_U20, fVar6 );
                SET_CAR_COORDINATES( l_U20, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U5 );
            }
            l_U1 = 0;
        }
        if (DOES_VEHICLE_EXIST( l_U20 ))
        {
            if (NOT (IS_CAR_DEAD( l_U20 )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U20, l_U8._fU0, l_U8._fU4, l_U8._fU8, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                sub_1069( uVar3 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U20, l_U14._fU0, l_U14._fU4, l_U14._fU8, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                sub_1069( uVar3 );
            }
        }
        if (l_U2)
        {
            SAVE_STRING_TO_DEBUG_FILE( "\nCASE " );
            SAVE_STRING_TO_DEBUG_FILE( GET_CONTENTS_OF_TEXT_WIDGET( l_U3 ) );
            SAVE_STRING_TO_DEBUG_FILE( "\n" );
            SAVE_STRING_TO_DEBUG_FILE( "    " );
            SAVE_STRING_TO_DEBUG_FILE( "vFrontSeatOffset = << " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U8._fU0 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U8._fU4 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U8._fU8 );
            SAVE_STRING_TO_DEBUG_FILE( " >>\n" );
            SAVE_STRING_TO_DEBUG_FILE( "    " );
            SAVE_STRING_TO_DEBUG_FILE( "vBackSeatOffset = << " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U14._fU0 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U14._fU4 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U14._fU8 );
            SAVE_STRING_TO_DEBUG_FILE( " >>\n" );
            SAVE_STRING_TO_DEBUG_FILE( "BREAK\n" );
            l_U2 = 0;
        }
        WAIT( 0 );
    }
    return;
}

void sub_483()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_526()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1069(unknown uParam0, unknown uParam1, unknown uParam2)
{
    LINE( uParam0._fU0 - 0.10000000, uParam0._fU4, uParam0._fU8, uParam0._fU0 + 0.10000000, uParam0._fU4, uParam0._fU8 );
    LINE( uParam0._fU0, uParam0._fU4 - 0.10000000, uParam0._fU8, uParam0._fU0, uParam0._fU4 + 0.10000000, uParam0._fU8 );
    LINE( uParam0._fU0, uParam0._fU4, uParam0._fU8 - 0.10000000, uParam0._fU0, uParam0._fU4, uParam0._fU8 + 0.10000000 );
    return;
}
