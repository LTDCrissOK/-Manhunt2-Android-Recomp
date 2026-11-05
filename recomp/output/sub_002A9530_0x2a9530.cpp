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

// Function: sub_002A9530
// Address: 0x2a9530 - 0x2a9578
void sub_002A9530_0x2a9530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9530_0x2a9530");
#endif

    switch (ctx->pc) {
        case 0x2a9560u: goto label_2a9560;
        default: break;
    }

    ctx->pc = 0x2a9530u;

    // 0x2a9530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a9534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a9534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a9538: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a9538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a953c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a953cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9540: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2a9540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2a9544: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9544u;
    {
        const bool branch_taken_0x2a9544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9544) {
            ctx->pc = 0x2A9548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9544u;
            // 0x2a9548: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9568u;
            goto label_2a9568;
        }
    }
    ctx->pc = 0x2A954Cu;
    // 0x2a954c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2a954cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2a9550: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a9550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a9554: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x2a9554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x2a9558: 0xc0a8e12  jal         func_2A3848
    ctx->pc = 0x2A9558u;
    SET_GPR_U32(ctx, 31, 0x2A9560u);
    ctx->pc = 0x2A955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9558u;
    // 0x2a955c: 0x24a5d998  addiu       $a1, $a1, -0x2668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x2A9558u, 0x2A9560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9560u;
label_2a9560:
    // 0x2a9560: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2a9560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2a9564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a9564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9568:
    // 0x2a9568: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a9568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a956c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A956Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A956Cu;
        // 0x2a9570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A956Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9574u;
    // 0x2a9574: 0x0  nop
    ctx->pc = 0x2a9574u;
    // NOP
    ctx->pc = 0x2a9578u;
}
