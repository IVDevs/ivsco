void main()
{
    sub_9();
    while (true)
    {
        WAIT( 0 );
        sub_677();
    }
    return;
}

void sub_9()
{
    unknown uVar2;
    unknown uVar3;

    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar2, ref uVar3 );
    l_U0._fU8 = uVar2;
    l_U0._fU64 = 1;
    l_U0._fU68 = 0;
    CREATE_WIDGET_GROUP( "Camera Offset to Vehicle Positioning" );
    ADD_WIDGET_TOGGLE( "Activate Offset Cam", ref l_U0._fU72 );
    ADD_WIDGET_FLOAT_SLIDER( "Vehicle X", ref l_U0._fU20._fU0, -2000.00000000, 2000.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Vehicle Y", ref l_U0._fU20._fU4, -2000.00000000, 2000.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Vehicle Z", ref l_U0._fU20._fU8, -2000.00000000, 2000.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Cam Offset to Car X", ref l_U0._fU32._fU0, -2000.00000000, 2000.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Cam Offset to Car Y", ref l_U0._fU32._fU4, -2000.00000000, 2000.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Cam Offset to Car Z", ref l_U0._fU32._fU8, -2000.00000000, 2000.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Cam Pointing at Car Offset X", ref l_U0._fU48._fU0, -2000.00000000, 2000.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Cam Pointing at Car Offset Y", ref l_U0._fU48._fU4, -2000.00000000, 2000.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Cam Pointing at Car Offset Z", ref l_U0._fU48._fU8, -2000.00000000, 2000.00000000, 0.20000000 );
    ADD_WIDGET_TOGGLE( "Output to TEMP_DEBUG", ref l_U0._fU60 );
    END_WIDGET_GROUP();
    return;
}

void sub_677()
{
    if (l_U0._fU72)
    {
        if (l_U0._fU64)
        {
            DISPLAY_RADAR( 0 );
            DISPLAY_HUD( 0 );
            REQUEST_MODEL( l_U0._fU8 );
            while (NOT (HAS_MODEL_LOADED( l_U0._fU8 )))
            {
                WAIT( 0 );
            }
            l_U0._fU60 = 0;
            GET_CHAR_COORDINATES( sub_777(), ref l_U0._fU20._fU0, ref l_U0._fU20._fU4, ref l_U0._fU20._fU8 );
            l_U0._fU20._fU0 += 2.00000000;
            l_U0._fU32 = {0.00000000, 0.00000000, 0.00000000};
            l_U0._fU48 = {0.00000000, 0.00000000, 0.00000000};
            CREATE_CAR( l_U0._fU8, l_U0._fU20._fU0, l_U0._fU20._fU4, l_U0._fU20._fU8, ref l_U0._fU4, 1 );
            BEGIN_CAM_COMMANDS( ref l_U0._fU16 );
            CREATE_CAM( 14, ref l_U0._fU12 );
            ATTACH_CAM_TO_VEHICLE( l_U0._fU12, l_U0._fU4 );
            SET_CAM_ATTACH_OFFSET( l_U0._fU12, l_U0._fU32._fU0, l_U0._fU32._fU4, l_U0._fU32._fU8 );
            POINT_CAM_AT_VEHICLE( l_U0._fU12, l_U0._fU4 );
            SET_CAM_POINT_OFFSET( l_U0._fU12, l_U0._fU48._fU0, l_U0._fU48._fU4, l_U0._fU48._fU8 );
            SET_CAM_PROPAGATE( l_U0._fU12, 1 );
            SET_CAM_ACTIVE( l_U0._fU12, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U0._fU64 = 0;
            l_U0._fU68 = 1;
        }
        else if (NOT (IS_CAR_DEAD( l_U0._fU4 )))
        {
            SET_CAR_COORDINATES( l_U0._fU4, l_U0._fU20._fU0, l_U0._fU20._fU4, l_U0._fU20._fU8 );
        }
        SET_CAM_ATTACH_OFFSET( l_U0._fU12, l_U0._fU32._fU0, l_U0._fU32._fU4, l_U0._fU32._fU8 );
        SET_CAM_POINT_OFFSET( l_U0._fU12, l_U0._fU48._fU0, l_U0._fU48._fU4, l_U0._fU48._fU8 );
        if (l_U0._fU60)
        {
            sub_1295( l_U0._fU32, l_U0._fU48 );
            l_U0._fU60 = 0;
        }
    }
    else if (l_U0._fU68)
    {
        SET_CAM_ACTIVE( l_U0._fU12, 0 );
        SET_CAM_PROPAGATE( l_U0._fU12, 0 );
        DESTROY_CAM( l_U0._fU12 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U0._fU16 );
        DISPLAY_RADAR( 1 );
        DISPLAY_HUD( 1 );
        DELETE_CAR( ref l_U0._fU4 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U0._fU8 );
        l_U0._fU68 = 0;
        l_U0._fU64 = 1;
    }
    return;
}

void sub_777()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1295(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "ATTACH_CAM_TO_VEHICLE(<cam?>, <vehicle?>)" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "POINT_CAM_AT_VEHICLE(<cam?>, <vehicle?>)" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ATTACH_OFFSET(<cam?>, " );
    SAVE_FLOAT_TO_DEBUG_FILE( uParam0._fU0 );
    SAVE_STRING_TO_DEBUG_FILE( ", " );
    SAVE_FLOAT_TO_DEBUG_FILE( uParam0._fU4 );
    SAVE_STRING_TO_DEBUG_FILE( ", " );
    SAVE_FLOAT_TO_DEBUG_FILE( uParam0._fU8 );
    SAVE_STRING_TO_DEBUG_FILE( ")" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_POINT_OFFSET(<cam?>, " );
    SAVE_FLOAT_TO_DEBUG_FILE( uParam3._fU0 );
    SAVE_STRING_TO_DEBUG_FILE( ", " );
    SAVE_FLOAT_TO_DEBUG_FILE( uParam3._fU4 );
    SAVE_STRING_TO_DEBUG_FILE( ", " );
    SAVE_FLOAT_TO_DEBUG_FILE( uParam3._fU8 );
    SAVE_STRING_TO_DEBUG_FILE( ")" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    sub_1672( "TEXXYZ3" );
    return;
}

void sub_1672(unknown uParam0)
{
    CLEAR_SMALL_PRINTS();
    PRINT( uParam0, 8000, 1 );
    return;
}
