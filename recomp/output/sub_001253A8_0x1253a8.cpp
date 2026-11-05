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

// Function: sub_001253A8
// Address: 0x1253a8 - 0x1253e8
void sub_001253A8_0x1253a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001253A8_0x1253a8");
#endif

    switch (ctx->pc) {
        case 0x1253c8u: goto label_1253c8;
        default: break;
    }

    ctx->pc = 0x1253a8u;

    // 0x1253a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1253a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1253ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1253acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1253b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1253b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1253b4: 0x8c820428  lw          $v0, 0x428($a0)
    ctx->pc = 0x1253b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1064)));
    // 0x1253b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1253B8u;
    {
        const bool branch_taken_0x1253b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1253BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253B8u;
        // 0x1253bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253b8) {
            ctx->pc = 0x1253D0u;
            goto label_1253d0;
        }
    }
    ctx->pc = 0x1253C0u;
    // 0x1253c0: 0xc09d150  jal         func_274540
    ctx->pc = 0x1253C0u;
    SET_GPR_U32(ctx, 31, 0x1253C8u);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x1253C0u, 0x1253C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253C8u;
label_1253c8:
    // 0x1253c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1253C8u;
    {
        const bool branch_taken_0x1253c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253C8u;
        // 0x1253cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253c8) {
            ctx->pc = 0x1253D8u;
            goto label_1253d8;
        }
    }
    ctx->pc = 0x1253D0u;
label_1253d0:
    // 0x1253d0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1253d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1253d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1253d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1253d8:
    // 0x1253d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1253d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1253dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1253dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1253e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1253E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1253E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253E0u;
        // 0x1253e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1253E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1253E8u;
}
