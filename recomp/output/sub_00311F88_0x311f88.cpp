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

// Function: sub_00311F88
// Address: 0x311f88 - 0x311fb8
void sub_00311F88_0x311f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311F88_0x311f88");
#endif

    switch (ctx->pc) {
        case 0x311facu: goto label_311fac;
        default: break;
    }

    ctx->pc = 0x311f88u;

    // 0x311f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x311f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x311f8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x311f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x311f90: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x311F90u;
    {
        const bool branch_taken_0x311f90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x311F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F90u;
        // 0x311f94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f90) {
            ctx->pc = 0x311FACu;
            goto label_311fac;
        }
    }
    ctx->pc = 0x311F98u;
    // 0x311f98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x311F98u;
    {
        const bool branch_taken_0x311f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F98u;
        // 0x311f9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f98) {
            ctx->pc = 0x311FB0u;
            goto label_311fb0;
        }
    }
    ctx->pc = 0x311FA0u;
    // 0x311fa0: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x311fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x311fa4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x311FA4u;
    SET_GPR_U32(ctx, 31, 0x311FACu);
    ctx->pc = 0x311FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311FA4u;
    // 0x311fa8: 0x24842150  addiu       $a0, $a0, 0x2150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x311FA4u, 0x311FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FACu;
label_311fac:
    // 0x311fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_311fb0:
    // 0x311fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x311FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FB0u;
        // 0x311fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311FB8u;
}
