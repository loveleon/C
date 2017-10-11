#define comac_arg_n( _0,_1,_2,_3,_4,_5,_6,_7,N,... ) N
#define comac_get_args_cnt( ...  ) comac_arg_n( __VA_ARGS__  )
#define comac_args_seqs() 7,6,5,4,3,2,1,0
#define comac_argc( ...  ) comac_get_args_cnt( 0,##__VA_ARGS__,comac_args_seqs()  )
#define test(...) 0,__VA_ARGS__,comac_args_seqs()
#define test2(...) 0,##__VA_ARGS__,comac_args_seqs()

int main()
{
    return 0;
}
