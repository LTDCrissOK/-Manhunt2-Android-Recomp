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

// Function: sub_00131520
// Address: 0x131520 - 0x131560
void sub_00131520_0x131520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131520_0x131520");
#endif

    switch (ctx->pc) {
        case 0x131530u: goto label_131530;
        case 0x131540u: goto label_131540;
        default: break;
    }

    ctx->pc = 0x131520u;

    // 0x131520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131528: 0xc043920  jal         func_10E480
    ctx->pc = 0x131528u;
    SET_GPR_U32(ctx, 31, 0x131530u);
    ctx->pc = 0x13152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131528u;
    // 0x13152c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x131528u, 0x131530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131530u;
label_131530:
    // 0x131530: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x131530u;
    {
        const bool branch_taken_0x131530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131530) {
            ctx->pc = 0x131534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131530u;
            // 0x131534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131550u;
            goto label_131550;
        }
    }
    ctx->pc = 0x131538u;
    // 0x131538: 0xc095254  jal         func_254950
    ctx->pc = 0x131538u;
    SET_GPR_U32(ctx, 31, 0x131540u);
    ctx->pc = 0x13153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131538u;
    // 0x13153c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254950u, 0x131538u, 0x131540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131540u;
label_131540:
    // 0x131540: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x131540u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131544: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131544u;
    {
        const bool branch_taken_0x131544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x131548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131544u;
        // 0x131548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131544) {
            ctx->pc = 0x131550u;
            goto label_131550;
        }
    }
    ctx->pc = 0x13154Cu;
    // 0x13154c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13154cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131550:
    // 0x131550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131554: 0x3e00008  jr          $ra
    ctx->pc = 0x131554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131554u;
        // 0x131558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13155Cu;
    // 0x13155c: 0x0  nop
    ctx->pc = 0x13155cu;
    // NOP
    ctx->pc = 0x131560u;
}
