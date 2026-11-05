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

// Function: sub_00123840
// Address: 0x123840 - 0x123890
void sub_00123840_0x123840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123840_0x123840");
#endif

    switch (ctx->pc) {
        case 0x123860u: goto label_123860;
        case 0x123874u: goto label_123874;
        default: break;
    }

    ctx->pc = 0x123840u;

    // 0x123840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123848: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12384c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12384cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123858: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123858u;
    SET_GPR_U32(ctx, 31, 0x123860u);
    ctx->pc = 0x12385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123858u;
    // 0x12385c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123858u, 0x123860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123860u;
label_123860:
    // 0x123860: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123860u;
    {
        const bool branch_taken_0x123860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123860u;
        // 0x123864: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123860) {
            ctx->pc = 0x12387Cu;
            goto label_12387c;
        }
    }
    ctx->pc = 0x123868u;
    // 0x123868: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12386c: 0xc042b96  jal         func_10AE58
    ctx->pc = 0x12386Cu;
    SET_GPR_U32(ctx, 31, 0x123874u);
    ctx->pc = 0x123870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12386Cu;
    // 0x123870: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE58u, 0x12386Cu, 0x123874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123874u;
label_123874:
    // 0x123874: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123874u;
    {
        const bool branch_taken_0x123874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123874u;
        // 0x123878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123874) {
            ctx->pc = 0x123880u;
            goto label_123880;
        }
    }
    ctx->pc = 0x12387Cu;
label_12387c:
    // 0x12387c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12387cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123880:
    // 0x123880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123884: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123888: 0x3e00008  jr          $ra
    ctx->pc = 0x123888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123888u;
        // 0x12388c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123890u;
}
