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

// Function: sub_003A1D80
// Address: 0x3a1d80 - 0x3a1e00
void sub_003A1D80_0x3a1d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1D80_0x3a1d80");
#endif

    switch (ctx->pc) {
        case 0x3a1db0u: goto label_3a1db0;
        case 0x3a1dc0u: goto label_3a1dc0;
        default: break;
    }

    ctx->pc = 0x3a1d80u;

    // 0x3a1d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a1d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a1d84: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3a1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3a1d88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a1d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a1d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a1d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a1d90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a1d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1d94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a1d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a1d98: 0x2451676c  addiu       $s1, $v0, 0x676C
    ctx->pc = 0x3a1d98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26476));
    // 0x3a1d9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a1d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a1da0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a1da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1da4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a1da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a1da8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a1da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1dac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a1dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1db0:
    // 0x3a1db0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3a1db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3a1db4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a1db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1db8: 0xc0efcee  jal         func_3BF3B8
    ctx->pc = 0x3A1DB8u;
    SET_GPR_U32(ctx, 31, 0x3A1DC0u);
    ctx->pc = 0x3A1DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1DB8u;
    // 0x3a1dbc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x3A1DB8u, 0x3A1DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1DC0u;
label_3a1dc0:
    // 0x3a1dc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1DC0u;
    {
        const bool branch_taken_0x3a1dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DC0u;
        // 0x3a1dc4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1dc0) {
            ctx->pc = 0x3A1DD0u;
            goto label_3a1dd0;
        }
    }
    ctx->pc = 0x3A1DC8u;
    // 0x3a1dc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1DC8u;
    {
        const bool branch_taken_0x3a1dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DC8u;
        // 0x3a1dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1dc8) {
            ctx->pc = 0x3A1DE0u;
            goto label_3a1de0;
        }
    }
    ctx->pc = 0x3A1DD0u;
label_3a1dd0:
    // 0x3a1dd0: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x3a1dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3a1dd4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A1DD4u;
    {
        const bool branch_taken_0x3a1dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DD4u;
        // 0x3a1dd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1dd4) {
            ctx->pc = 0x3A1DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1db0;
        }
    }
    ctx->pc = 0x3A1DDCu;
    // 0x3a1ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a1ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1de0:
    // 0x3a1de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a1de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1de4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a1de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a1de8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a1de8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1dec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a1decu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a1df0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a1df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a1df4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DF4u;
        // 0x3a1df8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1DFCu;
    // 0x3a1dfc: 0x0  nop
    ctx->pc = 0x3a1dfcu;
    // NOP
    ctx->pc = 0x3a1e00u;
}
