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

// Function: sub_002D4378
// Address: 0x2d4378 - 0x2d43e8
void sub_002D4378_0x2d4378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4378_0x2d4378");
#endif

    switch (ctx->pc) {
        case 0x2d438cu: goto label_2d438c;
        case 0x2d4394u: goto label_2d4394;
        case 0x2d43b4u: goto label_2d43b4;
        case 0x2d43ccu: goto label_2d43cc;
        case 0x2d43d8u: goto label_2d43d8;
        default: break;
    }

    ctx->pc = 0x2d4378u;

    // 0x2d4378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d437c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4380: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d4380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d4384: 0xc0b50d6  jal         func_2D4358
    ctx->pc = 0x2D4384u;
    SET_GPR_U32(ctx, 31, 0x2D438Cu);
    ctx->pc = 0x2D4388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4384u;
    // 0x2d4388: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4358u, 0x2D4384u, 0x2D438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D438Cu;
label_2d438c:
    // 0x2d438c: 0xc0c9ac2  jal         func_326B08
    ctx->pc = 0x2D438Cu;
    SET_GPR_U32(ctx, 31, 0x2D4394u);
    ctx->pc = 0x2D4390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D438Cu;
    // 0x2d4390: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B08u, 0x2D438Cu, 0x2D4394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4394u;
label_2d4394:
    // 0x2d4394: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2d4394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2d4398: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4398u;
    {
        const bool branch_taken_0x2d4398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4398) {
            ctx->pc = 0x2D439Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4398u;
            // 0x2d439c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D43BCu;
            goto label_2d43bc;
        }
    }
    ctx->pc = 0x2D43A0u;
    // 0x2d43a0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2d43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d43a4: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D43A4u;
    {
        const bool branch_taken_0x2d43a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d43a4) {
            ctx->pc = 0x2D43A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D43A4u;
            // 0x2d43a8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D43B8u;
            goto label_2d43b8;
        }
    }
    ctx->pc = 0x2D43ACu;
    // 0x2d43ac: 0xc0c8762  jal         func_321D88
    ctx->pc = 0x2D43ACu;
    SET_GPR_U32(ctx, 31, 0x2D43B4u);
    ctx->pc = 0x321D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321D88u, 0x2D43ACu, 0x2D43B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D43B4u;
label_2d43b4:
    // 0x2d43b4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2d43b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2d43b8:
    // 0x2d43b8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2d43b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2d43bc:
    // 0x2d43bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D43BCu;
    {
        const bool branch_taken_0x2d43bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d43bc) {
            ctx->pc = 0x2D43D0u;
            goto label_2d43d0;
        }
    }
    ctx->pc = 0x2D43C4u;
    // 0x2d43c4: 0xc0c8762  jal         func_321D88
    ctx->pc = 0x2D43C4u;
    SET_GPR_U32(ctx, 31, 0x2D43CCu);
    ctx->pc = 0x321D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321D88u, 0x2D43C4u, 0x2D43CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D43CCu;
label_2d43cc:
    // 0x2d43cc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2d43ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2d43d0:
    // 0x2d43d0: 0xc0b50bc  jal         func_2D42F0
    ctx->pc = 0x2D43D0u;
    SET_GPR_U32(ctx, 31, 0x2D43D8u);
    ctx->pc = 0x2D43D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D43D0u;
    // 0x2d43d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D42F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D42F0u, 0x2D43D0u, 0x2D43D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D43D8u;
label_2d43d8:
    // 0x2d43d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d43d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d43dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d43dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d43e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D43E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43E0u;
        // 0x2d43e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D43E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D43E8u;
}
