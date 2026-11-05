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

// Function: sub_00118068
// Address: 0x118068 - 0x1180c0
void sub_00118068_0x118068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118068_0x118068");
#endif

    switch (ctx->pc) {
        case 0x11807cu: goto label_11807c;
        default: break;
    }

    ctx->pc = 0x118068u;

    // 0x118068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11806c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118070: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x118070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x118074: 0xc0460e4  jal         func_118390
    ctx->pc = 0x118074u;
    SET_GPR_U32(ctx, 31, 0x11807Cu);
    ctx->pc = 0x118078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118074u;
    // 0x118078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x118074u, 0x11807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11807Cu;
label_11807c:
    // 0x11807c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11807Cu;
    {
        const bool branch_taken_0x11807c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11807Cu;
        // 0x118080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11807c) {
            ctx->pc = 0x118094u;
            goto label_118094;
        }
    }
    ctx->pc = 0x118084u;
    // 0x118084: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x118084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x118088: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11808c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11808Cu;
    {
        const bool branch_taken_0x11808c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11808Cu;
        // 0x118090: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11808c) {
            ctx->pc = 0x1180A0u;
            goto label_1180a0;
        }
    }
    ctx->pc = 0x118094u;
label_118094:
    // 0x118094: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x118094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x118098: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11809c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x11809cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1180a0:
    // 0x1180a0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1180A0u;
    {
        const bool branch_taken_0x1180a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1180a0) {
            ctx->pc = 0x1180A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1180A0u;
            // 0x1180a4: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1180A8u;
            goto label_1180a8;
        }
    }
    ctx->pc = 0x1180A8u;
label_1180a8:
    // 0x1180a8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1180a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1180acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1180b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1180b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1180b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1180B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1180B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180B4u;
        // 0x1180b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1180B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1180BCu;
    // 0x1180bc: 0x0  nop
    ctx->pc = 0x1180bcu;
    // NOP
    ctx->pc = 0x1180c0u;
}
