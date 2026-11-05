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

// Function: sub_002D6540
// Address: 0x2d6540 - 0x2d6570
void sub_002D6540_0x2d6540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6540_0x2d6540");
#endif

    switch (ctx->pc) {
        case 0x2d655cu: goto label_2d655c;
        default: break;
    }

    ctx->pc = 0x2d6540u;

    // 0x2d6540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d6540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d6544: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d6544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d6548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d654c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d654cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6550: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d6550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d6554: 0xc0b4dea  jal         func_2D37A8
    ctx->pc = 0x2D6554u;
    SET_GPR_U32(ctx, 31, 0x2D655Cu);
    ctx->pc = 0x2D6558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6554u;
    // 0x2d6558: 0x8c44bd2c  lw          $a0, -0x42D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D37A8u, 0x2D6554u, 0x2D655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D655Cu;
label_2d655c:
    // 0x2d655c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2d655cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2d6560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6564: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d6564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6568: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6568u;
        // 0x2d656c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6570u;
}
