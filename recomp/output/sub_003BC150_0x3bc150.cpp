#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_003BC150_0x3bc150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_003BC150_0x3bc150");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceMcWrite(rdram, ctx, runtime); 
}
