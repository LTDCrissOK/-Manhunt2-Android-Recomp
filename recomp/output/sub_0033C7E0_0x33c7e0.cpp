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

// Function: sub_0033C7E0
// Address: 0x33c7e0 - 0x33c858
void sub_0033C7E0_0x33c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C7E0_0x33c7e0");
#endif

    switch (ctx->pc) {
        case 0x33c808u: goto label_33c808;
        case 0x33c828u: goto label_33c828;
        default: break;
    }

    ctx->pc = 0x33c7e0u;

    // 0x33c7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33c7e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33c7e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c7ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33c7f0: 0x2450c210  addiu       $s0, $v0, -0x3DF0
    ctx->pc = 0x33c7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951440));
    // 0x33c7f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33c7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33c7f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33c7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c7fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33c7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33c800: 0x3c12004c  lui         $s2, 0x4C
    ctx->pc = 0x33c800u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)76 << 16));
    // 0x33c804: 0x0  nop
    ctx->pc = 0x33c804u;
    // NOP
label_33c808:
    // 0x33c808: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33c80c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33c80cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33c810: 0x2644f250  addiu       $a0, $s2, -0xDB0
    ctx->pc = 0x33c810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963792));
    // 0x33c814: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33c814u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c818: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33C818u;
    {
        const bool branch_taken_0x33c818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C818u;
        // 0x33c81c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c818) {
            ctx->pc = 0x33C82Cu;
            goto label_33c82c;
        }
    }
    ctx->pc = 0x33C820u;
    // 0x33c820: 0xc0a8e12  jal         func_2A3848
    ctx->pc = 0x33C820u;
    SET_GPR_U32(ctx, 31, 0x33C828u);
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x33C820u, 0x33C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C828u;
label_33c828:
    // 0x33c828: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33c828u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c82c:
    // 0x33c82c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x33c830: 0x2e220024  sltiu       $v0, $s1, 0x24
    ctx->pc = 0x33c830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x33c834: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x33C834u;
    {
        const bool branch_taken_0x33c834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C834u;
        // 0x33c838: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c834) {
            ctx->pc = 0x33C808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c808;
        }
    }
    ctx->pc = 0x33C83Cu;
    // 0x33c83c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c840: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c844: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33c844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c848: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33c848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33c84c: 0x3e00008  jr          $ra
    ctx->pc = 0x33C84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C84Cu;
        // 0x33c850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C854u;
    // 0x33c854: 0x0  nop
    ctx->pc = 0x33c854u;
    // NOP
    ctx->pc = 0x33c858u;
}
