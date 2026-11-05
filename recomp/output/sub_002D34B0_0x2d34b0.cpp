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

// Function: sub_002D34B0
// Address: 0x2d34b0 - 0x2d34f8
void sub_002D34B0_0x2d34b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D34B0_0x2d34b0");
#endif

    switch (ctx->pc) {
        case 0x2d34e0u: goto label_2d34e0;
        default: break;
    }

    ctx->pc = 0x2d34b0u;

    // 0x2d34b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d34b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d34b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d34b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d34b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d34b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d34bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d34bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d34c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d34c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d34c4: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D34C4u;
    {
        const bool branch_taken_0x2d34c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d34c4) {
            ctx->pc = 0x2D34C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D34C4u;
            // 0x2d34c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D34E8u;
            goto label_2d34e8;
        }
    }
    ctx->pc = 0x2D34CCu;
    // 0x2d34cc: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2d34ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d34d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D34D0u;
    {
        const bool branch_taken_0x2d34d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d34d0) {
            ctx->pc = 0x2D34D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D34D0u;
            // 0x2d34d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D34E8u;
            goto label_2d34e8;
        }
    }
    ctx->pc = 0x2D34D8u;
    // 0x2d34d8: 0xc0e5556  jal         func_395558
    ctx->pc = 0x2D34D8u;
    SET_GPR_U32(ctx, 31, 0x2D34E0u);
    ctx->pc = 0x395558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395558u, 0x2D34D8u, 0x2D34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D34E0u;
label_2d34e0:
    // 0x2d34e0: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x2d34e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d34e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d34e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d34e8:
    // 0x2d34e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d34e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d34ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D34ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34ECu;
        // 0x2d34f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D34ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D34F4u;
    // 0x2d34f4: 0x0  nop
    ctx->pc = 0x2d34f4u;
    // NOP
    ctx->pc = 0x2d34f8u;
}
