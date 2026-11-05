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

// Function: sub_003B1AB8
// Address: 0x3b1ab8 - 0x3b1af8
void sub_003B1AB8_0x3b1ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1AB8_0x3b1ab8");
#endif

    switch (ctx->pc) {
        case 0x3b1adcu: goto label_3b1adc;
        default: break;
    }

    ctx->pc = 0x3b1ab8u;

    // 0x3b1ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b1ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b1abc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b1ac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b1ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b1ac4: 0x24504e20  addiu       $s0, $v0, 0x4E20
    ctx->pc = 0x3b1ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20000));
    // 0x3b1ac8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b1ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x424E20u));
    // 0x3b1acc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1ACCu;
    {
        const bool branch_taken_0x3b1acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1ACCu;
        // 0x3b1ad0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1acc) {
            ctx->pc = 0x3B1AE0u;
            goto label_3b1ae0;
        }
    }
    ctx->pc = 0x3B1AD4u;
    // 0x3b1ad4: 0xc0ecb4a  jal         func_3B2D28
    ctx->pc = 0x3B1AD4u;
    SET_GPR_U32(ctx, 31, 0x3B1ADCu);
    ctx->pc = 0x3B2D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2D28u, 0x3B1AD4u, 0x3B1ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1ADCu;
label_3b1adc:
    // 0x3b1adc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b1ae0:
    // 0x3b1ae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b1ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b1ae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b1ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b1ae8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b1ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b1aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b1aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1af0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AF0u;
        // 0x3b1af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1AF8u;
}
