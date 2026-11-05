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

// Function: sub_002777B0
// Address: 0x2777b0 - 0x2777e8
void sub_002777B0_0x2777b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002777B0_0x2777b0");
#endif

    switch (ctx->pc) {
        case 0x2777d4u: goto label_2777d4;
        default: break;
    }

    ctx->pc = 0x2777b0u;

    // 0x2777b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2777b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2777b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2777b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2777b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2777b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2777bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2777bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2777c0: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x2777c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x2777c4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2777C4u;
    {
        const bool branch_taken_0x2777c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2777c4) {
            ctx->pc = 0x2777C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2777C4u;
            // 0x2777c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2777DCu;
            goto label_2777dc;
        }
    }
    ctx->pc = 0x2777CCu;
    // 0x2777cc: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x2777CCu;
    SET_GPR_U32(ctx, 31, 0x2777D4u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x2777CCu, 0x2777D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777D4u;
label_2777d4:
    // 0x2777d4: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x2777d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x2777d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2777d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2777dc:
    // 0x2777dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2777dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2777e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2777E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2777E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777E0u;
        // 0x2777e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2777E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2777E8u;
}
