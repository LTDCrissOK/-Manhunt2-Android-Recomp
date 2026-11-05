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

// Function: sub_00134360
// Address: 0x134360 - 0x1343a8
void sub_00134360_0x134360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134360_0x134360");
#endif

    switch (ctx->pc) {
        case 0x134378u: goto label_134378;
        case 0x134390u: goto label_134390;
        default: break;
    }

    ctx->pc = 0x134360u;

    // 0x134360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134368: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x134368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13436c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13436cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134370: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x134370u;
    SET_GPR_U32(ctx, 31, 0x134378u);
    ctx->pc = 0x134374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134370u;
    // 0x134374: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134AE0u, 0x134370u, 0x134378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134378u;
label_134378:
    // 0x134378: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x134378u;
    {
        const bool branch_taken_0x134378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134378) {
            ctx->pc = 0x13437Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134378u;
            // 0x13437c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134388u;
            goto label_134388;
        }
    }
    ctx->pc = 0x134380u;
    // 0x134380: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134380u;
    {
        const bool branch_taken_0x134380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134380u;
        // 0x134384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134380) {
            ctx->pc = 0x134398u;
            goto label_134398;
        }
    }
    ctx->pc = 0x134388u;
label_134388:
    // 0x134388: 0xc04c740  jal         func_131D00
    ctx->pc = 0x134388u;
    SET_GPR_U32(ctx, 31, 0x134390u);
    ctx->pc = 0x13438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134388u;
    // 0x13438c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131D00u, 0x134388u, 0x134390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134390u;
label_134390:
    // 0x134390: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x134390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x134394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134398:
    // 0x134398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13439c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13439cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1343a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1343A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1343A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343A0u;
        // 0x1343a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1343A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1343A8u;
}
