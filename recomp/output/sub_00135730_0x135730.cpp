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

// Function: sub_00135730
// Address: 0x135730 - 0x135744
void sub_00135730_0x135730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135730_0x135730");
#endif

    switch (ctx->pc) {
        case 0x135734u: goto label_135734;
        default: break;
    }

    ctx->pc = 0x135730u;

    // 0x135730: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x135730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135734:
    // 0x135734: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x135734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x135738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x135738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13573c: 0xac44024c  sw          $a0, 0x24C($v0)
    ctx->pc = 0x13573cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 588), GPR_U32(ctx, 4));
    // 0x135740: 0xac430248  sw          $v1, 0x248($v0)
    ctx->pc = 0x135740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 3));
    ctx->pc = 0x135744u;
}
