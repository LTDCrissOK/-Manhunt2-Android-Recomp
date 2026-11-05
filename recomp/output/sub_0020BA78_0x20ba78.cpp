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

// Function: sub_0020BA78
// Address: 0x20ba78 - 0x20baa0
void sub_0020BA78_0x20ba78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BA78_0x20ba78");
#endif

    switch (ctx->pc) {
        case 0x20ba90u: goto label_20ba90;
        default: break;
    }

    ctx->pc = 0x20ba78u;

    // 0x20ba78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x20ba7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ba7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ba80: 0x8c4494b8  lw          $a0, -0x6B48($v0)
    ctx->pc = 0x20ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F94B8u));
    // 0x20ba84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ba88: 0xc0ef79a  jal         func_3BDE68
    ctx->pc = 0x20BA88u;
    SET_GPR_U32(ctx, 31, 0x20BA90u);
    ctx->pc = 0x3BDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDE68u, 0x20BA88u, 0x20BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA90u;
label_20ba90:
    // 0x20ba90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ba94: 0x3e00008  jr          $ra
    ctx->pc = 0x20BA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA94u;
        // 0x20ba98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BA9Cu;
    // 0x20ba9c: 0x0  nop
    ctx->pc = 0x20ba9cu;
    // NOP
    ctx->pc = 0x20baa0u;
}
