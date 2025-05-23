void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = -979912267;
    l_U4 = 1572580032;
    l_U49 = 0.50000000;
    l_U37[0] = -1;
    l_U37[1] = -1;
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U2)
            {
                case 0:
                if (sub_133())
                {
                    if (sub_241())
                    {
                        l_U2 = 1;
                    }
                }
                break;
                case 1:
                sub_732();
                break;
                case 2: break;
            }
        }
        else
        {
            sub_1679();
        }
    }
    return;
}

int sub_133()
{
    REQUEST_MODEL( l_U3 );
    REQUEST_MODEL( l_U4 );
    if (((HAS_MODEL_LOADED( l_U3 )) AND (HAS_MODEL_LOADED( l_U4 ))) AND (REQUEST_AMBIENT_AUDIO_BANK( "EP1_SFX\SECURITY_CAMERAS" )))
    {
        return 1;
    }
    return 0;
}

int sub_241()
{
    int I;

    l_U11[0] = {-1142.01500000, -371.40200000, 6.42900000};
    l_U25[0] = 300.00000000;
    l_U18[0] = {-1142.00500000, -371.40200000, 6.25900000};
    l_U28[0] = 270.00000000;
    l_U11[1] = {-1142.01500000, -378.15200000, 6.42900000};
    l_U25[1] = 240.00000000;
    l_U18[1] = {-1142.00500000, -378.15200000, 6.25900000};
    l_U28[1] = 270.00000000;
    l_U31 = {-1150.54200000, -374.73180000, 3.02460000};
    l_U34 = {8.50000000, 9.00000000, 3.00000000};
    l_U40[0] = "SECURITY_CAMERAS_MOVE";
    l_U40[1] = "SECURITY_CAMERAS_MOVE_B";
    for ( I = 0; I < 2; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U5[I] ))
        {
            return 1;
        }
        else
        {
            CREATE_OBJECT( l_U3, l_U11[I]._fU0, l_U11[I]._fU4, l_U11[I]._fU8, ref l_U5[I], 1 );
            SET_OBJECT_HEADING( l_U5[I], l_U25[I] );
            FREEZE_OBJECT_POSITION( l_U5[I], 1 );
            CREATE_OBJECT( l_U4, l_U18[I]._fU0, l_U18[I]._fU4, l_U18[I]._fU8, ref l_U8[I], 1 );
            SET_OBJECT_HEADING( l_U8[I], l_U28[I] );
            FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION( l_U8[I], 1 );
        }
    }
    return 0;
}

void sub_732()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;

    for ( I = 0; I < 2; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U5[I] ))
        {
            if (NOT (IS_CHAR_INJURED( sub_772() )))
            {
                if (NOT (HAS_OBJECT_BEEN_DAMAGED_BY_CHAR( l_U5[I], sub_772() )))
                {
                    GET_GAME_TIMER( ref l_U43[I] );
                    if (l_U43[I] > (l_U46[I] + 1000))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_772(), l_U31._fU0, l_U31._fU4, l_U31._fU8, l_U34._fU0, l_U34._fU4, l_U34._fU8, 0 ))
                        {
                            GET_CHAR_COORDINATES( sub_772(), ref vVar5.x, ref vVar5.y, ref vVar5.z );
                            uVar8 = {l_U11[I] - vVar5};
                            GET_HEADING_FROM_VECTOR_2D( uVar8._fU0, uVar8._fU4, ref fVar11 );
                            GET_OBJECT_HEADING( l_U5[I], ref l_U25[I] );
                            uVar3 = ROUND( fVar11 );
                            fVar11 = TO_FLOAT( uVar3 );
                            if (fVar11 > (l_U25[I] + 1.00000000))
                            {
                                l_U25[I] += l_U49;
                                SET_OBJECT_HEADING( l_U5[I], l_U25[I] );
                                sub_1113( I );
                            }
                            else if (fVar11 < (l_U25[I] - 1.00000000))
                            {
                                l_U25[I] -= l_U49;
                                SET_OBJECT_HEADING( l_U5[I], l_U25[I] );
                                sub_1113( I );
                            }
                            else
                            {
                                GET_GAME_TIMER( ref l_U46[I] );
                                sub_1310( I );
                            }
                        }
                        else
                        {
                            GET_OBJECT_HEADING( l_U5[I], ref l_U25[I] );
                            if (270.00000000 > (l_U25[I] + 1.00000000))
                            {
                                l_U25[I] += l_U49;
                                SET_OBJECT_HEADING( l_U5[I], l_U25[I] );
                                sub_1113( I );
                            }
                            else if (270.00000000 < (l_U25[I] - 1.00000000))
                            {
                                l_U25[I] -= l_U49;
                                SET_OBJECT_HEADING( l_U5[I], l_U25[I] );
                                sub_1113( I );
                            }
                            else
                            {
                                GET_GAME_TIMER( ref l_U46[I] );
                                sub_1310( I );
                            }
                        }
                    }
                }
                else
                {
                    sub_1310( I );
                    g_U10464 = 1;
                }
            }
        }
    }
    return;
}

void sub_772()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1113(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( l_U8[uParam0] ))
    {
        if (l_U37[uParam0] == -1)
        {
            l_U37[uParam0] = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( l_U37[uParam0], l_U40[uParam0], l_U8[uParam0] );
        }
    }
    return;
}

void sub_1310(unknown uParam0)
{
    if (l_U37[uParam0] != -1)
    {
        if (DOES_OBJECT_EXIST( l_U8[uParam0] ))
        {
            if (NOT (HAS_SOUND_FINISHED( l_U37[uParam0] )))
            {
                STOP_SOUND( l_U37[uParam0] );
            }
            RELEASE_SOUND_ID( l_U37[uParam0] );
        }
        l_U37[uParam0] = -1;
    }
    return;
}

void sub_1679()
{
    sub_1310( 0 );
    sub_1310( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}
