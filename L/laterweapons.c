void main()
{
    sub_9();
    sub_26();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_9()
{
    return;
}

void sub_26()
{
    CREATE_PICKUP_ROTATE( sub_36( 17 ), 2, 7, 763.28300000, -198.46000000, 27.76800000, 0, -109.44000000, 0, ref l_U15[26] );
    CREATE_PICKUP_ROTATE( sub_36( 17 ), 2, 7, 1073.27900000, 1049.39900000, 25.82000000, 5.76000000, -117.36000000, 225.36000000, ref l_U15[27] );
    return;
}

void sub_36(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}
