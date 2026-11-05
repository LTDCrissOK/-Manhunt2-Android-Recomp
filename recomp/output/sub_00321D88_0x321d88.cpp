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

// Function: sub_00321D88
// Address: 0x321d88 - 0x321dd0
void sub_00321D88_0x321d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321D88_0x321d88");
#endif

    switch (ctx->pc) {
        case 0x321da0u: goto label_321da0;
        case 0x321db8u: goto label_321db8;
        default: break;
    }

    ctx->pc = 0x321d88u;

    // 0x321d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x321d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321d90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321D90u;
    {
        const bool branch_taken_0x321d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D90u;
        // 0x321d94: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d90) {
            ctx->pc = 0x321DA0u;
            goto label_321da0;
        }
    }
    ctx->pc = 0x321D98u;
    // 0x321d98: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x321D98u;
    SET_GPR_U32(ctx, 31, 0x321DA0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x321D98u, 0x321DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321DA0u;
label_321da0:
    // 0x321da0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x321da0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x321da4: 0x8e04be1c  lw          $a0, -0x41E4($s0)
    ctx->pc = 0x321da4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBE1Cu));
    // 0x321da8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x321DA8u;
    {
        const bool branch_taken_0x321da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x321da8) {
            ctx->pc = 0x321DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321DA8u;
            // 0x321dac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321DC0u;
            goto label_321dc0;
        }
    }
    ctx->pc = 0x321DB0u;
    // 0x321db0: 0xc0c7a32  jal         func_31E8C8
    ctx->pc = 0x321DB0u;
    SET_GPR_U32(ctx, 31, 0x321DB8u);
    ctx->pc = 0x321DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321DB0u;
    // 0x321db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C8u, 0x321DB0u, 0x321DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321DB8u;
label_321db8:
    // 0x321db8: 0xae00be1c  sw          $zero, -0x41E4($s0)
    ctx->pc = 0x321db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950428), GPR_U32(ctx, 0));
    // 0x321dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_321dc0:
    // 0x321dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321dc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x321dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x321dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x321DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DC8u;
        // 0x321dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321DD0u;
}
