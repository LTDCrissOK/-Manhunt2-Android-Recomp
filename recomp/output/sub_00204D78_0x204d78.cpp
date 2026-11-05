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

// Function: sub_00204D78
// Address: 0x204d78 - 0x204da0
void sub_00204D78_0x204d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204D78_0x204d78");
#endif

    switch (ctx->pc) {
        case 0x204d90u: goto label_204d90;
        default: break;
    }

    ctx->pc = 0x204d78u;

    // 0x204d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204d7c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x204d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x204d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204d84: 0x24a5fffb  addiu       $a1, $a1, -0x5
    ctx->pc = 0x204d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x204d88: 0xc07fe04  jal         func_1FF810
    ctx->pc = 0x204D88u;
    SET_GPR_U32(ctx, 31, 0x204D90u);
    ctx->pc = 0x204D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D88u;
    // 0x204d8c: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF810u, 0x204D88u, 0x204D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D90u;
label_204d90:
    // 0x204d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204d94: 0x3e00008  jr          $ra
    ctx->pc = 0x204D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D94u;
        // 0x204d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204D9Cu;
    // 0x204d9c: 0x0  nop
    ctx->pc = 0x204d9cu;
    // NOP
    ctx->pc = 0x204da0u;
}
