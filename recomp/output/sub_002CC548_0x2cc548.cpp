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

// Function: sub_002CC548
// Address: 0x2cc548 - 0x2cc578
void sub_002CC548_0x2cc548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC548_0x2cc548");
#endif

    switch (ctx->pc) {
        case 0x2cc560u: goto label_2cc560;
        default: break;
    }

    ctx->pc = 0x2cc548u;

    // 0x2cc548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc54c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cc54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc550: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2cc550u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2cc554: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cc554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cc558: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x2CC558u;
    SET_GPR_U32(ctx, 31, 0x2CC560u);
    ctx->pc = 0x2CC55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC558u;
    // 0x2cc55c: 0x8e04b498  lw          $a0, -0x4B68($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x2CC558u, 0x2CC560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC560u;
label_2cc560:
    // 0x2cc560: 0xae00b498  sw          $zero, -0x4B68($s0)
    ctx->pc = 0x2cc560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947992), GPR_U32(ctx, 0));
    // 0x2cc564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cc564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc568: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cc568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cc56c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC56Cu;
        // 0x2cc570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC574u;
    // 0x2cc574: 0x0  nop
    ctx->pc = 0x2cc574u;
    // NOP
    ctx->pc = 0x2cc578u;
}
