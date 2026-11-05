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

// Function: sub_002AF848
// Address: 0x2af848 - 0x2af890
void sub_002AF848_0x2af848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF848_0x2af848");
#endif

    switch (ctx->pc) {
        case 0x2af878u: goto label_2af878;
        default: break;
    }

    ctx->pc = 0x2af848u;

    // 0x2af848: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2af848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2af84c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af84cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af850: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2af850u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2af854: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AF854u;
    {
        const bool branch_taken_0x2af854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF854u;
        // 0x2af858: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af854) {
            ctx->pc = 0x2AF880u;
            goto label_2af880;
        }
    }
    ctx->pc = 0x2AF85Cu;
    // 0x2af85c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2af85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2af860: 0x8c622464  lw          $v0, 0x2464($v1)
    ctx->pc = 0x2af860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2464u));
    // 0x2af864: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af868: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF868u;
    {
        const bool branch_taken_0x2af868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2AF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF868u;
        // 0x2af86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af868) {
            ctx->pc = 0x2AF884u;
            goto label_2af884;
        }
    }
    ctx->pc = 0x2AF870u;
    // 0x2af870: 0xc0abe06  jal         func_2AF818
    ctx->pc = 0x2AF870u;
    SET_GPR_U32(ctx, 31, 0x2AF878u);
    ctx->pc = 0x2AF818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF818u, 0x2AF870u, 0x2AF878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF878u;
label_2af878:
    // 0x2af878: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF878u;
    {
        const bool branch_taken_0x2af878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF878u;
        // 0x2af87c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af878) {
            ctx->pc = 0x2AF888u;
            goto label_2af888;
        }
    }
    ctx->pc = 0x2AF880u;
label_2af880:
    // 0x2af880: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2af880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af884:
    // 0x2af884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2af888:
    // 0x2af888: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF888u;
        // 0x2af88c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF890u;
}
