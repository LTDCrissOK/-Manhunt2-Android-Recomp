#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00118AAC
// Address: 0x118aac - 0x118ab4
void sub_00118AAC_0x118aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118AAC_0x118aac");
#endif

    ctx->pc = 0x118aacu;

    // 0x118aac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x118aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x118ab0: 0xe44c0024  swc1        $f12, 0x24($v0)
    ctx->pc = 0x118ab0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x118ab4u;
}
