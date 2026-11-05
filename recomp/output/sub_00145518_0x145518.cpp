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

// Function: sub_00145518
// Address: 0x145518 - 0x145558
void sub_00145518_0x145518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145518_0x145518");
#endif

    switch (ctx->pc) {
        case 0x145530u: goto label_145530;
        case 0x145544u: goto label_145544;
        default: break;
    }

    ctx->pc = 0x145518u;

    // 0x145518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14551c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x145520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x145524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145528: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x145528u;
    SET_GPR_U32(ctx, 31, 0x145530u);
    ctx->pc = 0x14552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145528u;
    // 0x14552c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x145528u, 0x145530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145530u;
label_145530:
    // 0x145530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145534: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x145534u;
    {
        const bool branch_taken_0x145534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x145538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145534u;
        // 0x145538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145534) {
            ctx->pc = 0x145548u;
            goto label_145548;
        }
    }
    ctx->pc = 0x14553Cu;
    // 0x14553c: 0xc05159e  jal         func_145678
    ctx->pc = 0x14553Cu;
    SET_GPR_U32(ctx, 31, 0x145544u);
    ctx->pc = 0x145540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14553Cu;
    // 0x145540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145678u, 0x14553Cu, 0x145544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145544u;
label_145544:
    // 0x145544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145548:
    // 0x145548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14554c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14554cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145550: 0x3e00008  jr          $ra
    ctx->pc = 0x145550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145550u;
        // 0x145554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145558u;
}
