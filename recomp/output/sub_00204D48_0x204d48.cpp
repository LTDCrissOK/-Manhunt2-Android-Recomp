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

// Function: sub_00204D48
// Address: 0x204d48 - 0x204d78
void sub_00204D48_0x204d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204D48_0x204d48");
#endif

    switch (ctx->pc) {
        case 0x204d68u: goto label_204d68;
        default: break;
    }

    ctx->pc = 0x204d48u;

    // 0x204d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204d4c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x204d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d50: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x204d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x204d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204d58: 0x24849b28  addiu       $a0, $a0, -0x64D8
    ctx->pc = 0x204d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    // 0x204d5c: 0x24a5fffb  addiu       $a1, $a1, -0x5
    ctx->pc = 0x204d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x204d60: 0xc07fe1c  jal         func_1FF870
    ctx->pc = 0x204D60u;
    SET_GPR_U32(ctx, 31, 0x204D68u);
    ctx->pc = 0x204D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D60u;
    // 0x204d64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF870u, 0x204D60u, 0x204D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D68u;
label_204d68:
    // 0x204d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x204D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D6Cu;
        // 0x204d70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204D74u;
    // 0x204d74: 0x0  nop
    ctx->pc = 0x204d74u;
    // NOP
    ctx->pc = 0x204d78u;
}
