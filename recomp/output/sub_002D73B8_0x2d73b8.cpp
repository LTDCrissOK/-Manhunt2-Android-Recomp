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

// Function: sub_002D73B8
// Address: 0x2d73b8 - 0x2d73f8
void sub_002D73B8_0x2d73b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D73B8_0x2d73b8");
#endif

    switch (ctx->pc) {
        case 0x2d73e4u: goto label_2d73e4;
        default: break;
    }

    ctx->pc = 0x2d73b8u;

    // 0x2d73b8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d73b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2d73bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d73bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d73c0: 0x9062bd24  lbu         $v0, -0x42DC($v1)
    ctx->pc = 0x2d73c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x2d73c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D73C4u;
    {
        const bool branch_taken_0x2d73c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D73C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73C4u;
        // 0x2d73c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d73c4) {
            ctx->pc = 0x2D73D4u;
            goto label_2d73d4;
        }
    }
    ctx->pc = 0x2D73CCu;
    // 0x2d73cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D73CCu;
    {
        const bool branch_taken_0x2d73cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73CCu;
        // 0x2d73d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d73cc) {
            ctx->pc = 0x2D73E8u;
            goto label_2d73e8;
        }
    }
    ctx->pc = 0x2D73D4u;
label_2d73d4:
    // 0x2d73d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d73d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d73d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73dc: 0xc0b58de  jal         func_2D6378
    ctx->pc = 0x2D73DCu;
    SET_GPR_U32(ctx, 31, 0x2D73E4u);
    ctx->pc = 0x2D73E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D73DCu;
    // 0x2d73e0: 0x8c44bd20  lw          $a0, -0x42E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6378u, 0x2D73DCu, 0x2D73E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D73E4u;
label_2d73e4:
    // 0x2d73e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d73e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d73e8:
    // 0x2d73e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d73e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d73ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D73ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73ECu;
        // 0x2d73f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D73ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D73F4u;
    // 0x2d73f4: 0x0  nop
    ctx->pc = 0x2d73f4u;
    // NOP
    ctx->pc = 0x2d73f8u;
}
