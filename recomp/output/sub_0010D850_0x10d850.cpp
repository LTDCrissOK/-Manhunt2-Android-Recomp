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

// Function: sub_0010D850
// Address: 0x10d850 - 0x10d8a0
void sub_0010D850_0x10d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D850_0x10d850");
#endif

    switch (ctx->pc) {
        case 0x10d870u: goto label_10d870;
        case 0x10d878u: goto label_10d878;
        default: break;
    }

    ctx->pc = 0x10d850u;

    // 0x10d850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10d85c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10d85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d860: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10d868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d86c: 0x0  nop
    ctx->pc = 0x10d86cu;
    // NOP
label_10d870:
    // 0x10d870: 0xc043628  jal         func_10D8A0
    ctx->pc = 0x10D870u;
    SET_GPR_U32(ctx, 31, 0x10D878u);
    ctx->pc = 0x10D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D870u;
    // 0x10d874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D8A0u, 0x10D870u, 0x10D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D878u;
label_10d878:
    // 0x10d878: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10d878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10d87c: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x10d87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x10d880: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10D880u;
    {
        const bool branch_taken_0x10d880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D880u;
        // 0x10d884: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d880) {
            ctx->pc = 0x10D870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d870;
        }
    }
    ctx->pc = 0x10D888u;
    // 0x10d888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d88c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d88cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d894: 0x3e00008  jr          $ra
    ctx->pc = 0x10D894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D894u;
        // 0x10d898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D89Cu;
    // 0x10d89c: 0x0  nop
    ctx->pc = 0x10d89cu;
    // NOP
    ctx->pc = 0x10d8a0u;
}
