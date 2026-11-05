#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_003BA040_0x3ba040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_003BA040_0x3ba040");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::scePadGetModVersion(rdram, ctx, runtime); 
}
