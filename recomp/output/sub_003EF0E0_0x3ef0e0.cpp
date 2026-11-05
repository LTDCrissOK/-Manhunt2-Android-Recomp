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

// Function: sub_003EF0E0
// Address: 0x3ef0e0 - 0x3ef140
void sub_003EF0E0_0x3ef0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF0E0_0x3ef0e0");
#endif

    switch (ctx->pc) {
        case 0x3ef0f0u: goto label_3ef0f0;
        case 0x3ef100u: goto label_3ef100;
        default: break;
    }

    ctx->pc = 0x3ef0e0u;

    // 0x3ef0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ef0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ef0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ef0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ef0e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3EF0E8u;
    {
        const bool branch_taken_0x3ef0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0E8u;
        // 0x3ef0ec: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef0e8) {
            ctx->pc = 0x3EF114u;
            goto label_3ef114;
        }
    }
    ctx->pc = 0x3EF0F0u;
label_3ef0f0:
    // 0x3ef0f0: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EF0F0u;
    {
        const bool branch_taken_0x3ef0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3ef0f0) {
            ctx->pc = 0x3EF108u;
            goto label_3ef108;
        }
    }
    ctx->pc = 0x3EF0F8u;
    // 0x3ef0f8: 0xc0fbc98  jal         func_3EF260
    ctx->pc = 0x3EF0F8u;
    SET_GPR_U32(ctx, 31, 0x3EF100u);
    ctx->pc = 0x3EF0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF0F8u;
    // 0x3ef0fc: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF260u, 0x3EF0F8u, 0x3EF100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF100u;
label_3ef100:
    // 0x3ef100: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3EF100u;
    {
        const bool branch_taken_0x3ef100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF100u;
        // 0x3ef104: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef100) {
            ctx->pc = 0x3EF138u;
            goto label_3ef138;
        }
    }
    ctx->pc = 0x3EF108u;
label_3ef108:
    // 0x3ef108: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3EF108u;
    {
        const bool branch_taken_0x3ef108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF108u;
        // 0x3ef10c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef108) {
            ctx->pc = 0x3EF130u;
            goto label_3ef130;
        }
    }
    ctx->pc = 0x3EF110u;
    // 0x3ef110: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ef110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ef114:
    // 0x3ef114: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ef114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3ef118: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3ef118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ef11c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF11Cu;
    {
        const bool branch_taken_0x3ef11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF11Cu;
        // 0x3ef120: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef11c) {
            ctx->pc = 0x3EF12Cu;
            goto label_3ef12c;
        }
    }
    ctx->pc = 0x3EF124u;
    // 0x3ef124: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF124u;
    {
        const bool branch_taken_0x3ef124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF124u;
        // 0x3ef128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef124) {
            ctx->pc = 0x3EF130u;
            goto label_3ef130;
        }
    }
    ctx->pc = 0x3EF12Cu;
label_3ef12c:
    // 0x3ef12c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3ef12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ef130:
    // 0x3ef130: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3EF130u;
    {
        const bool branch_taken_0x3ef130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF130u;
        // 0x3ef134: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef130) {
            ctx->pc = 0x3EF0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ef0f0;
        }
    }
    ctx->pc = 0x3EF138u;
label_3ef138:
    // 0x3ef138: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF138u;
        // 0x3ef13c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF140u;
}
