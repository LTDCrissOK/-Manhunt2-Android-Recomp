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

// Function: sub_002ACFA8
// Address: 0x2acfa8 - 0x2acff8
void sub_002ACFA8_0x2acfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACFA8_0x2acfa8");
#endif

    switch (ctx->pc) {
        case 0x2acfc0u: goto label_2acfc0;
        default: break;
    }

    ctx->pc = 0x2acfa8u;

    // 0x2acfa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2acfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2acfac: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2acfacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2acfb0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACFB0u;
    {
        const bool branch_taken_0x2acfb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFB0u;
        // 0x2acfb4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfb0) {
            ctx->pc = 0x2ACFC0u;
            goto label_2acfc0;
        }
    }
    ctx->pc = 0x2ACFB8u;
    // 0x2acfb8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2ACFB8u;
    SET_GPR_U32(ctx, 31, 0x2ACFC0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2ACFB8u, 0x2ACFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFC0u;
label_2acfc0:
    // 0x2acfc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2acfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFC4u;
        // 0x2acfc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACFCCu;
    // 0x2acfcc: 0x0  nop
    ctx->pc = 0x2acfccu;
    // NOP
    // 0x2acfd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2acfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2acfd4: 0x0  nop
    ctx->pc = 0x2acfd4u;
    // NOP
    // 0x2acfd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2acfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2acfdc: 0x0  nop
    ctx->pc = 0x2acfdcu;
    // NOP
    // 0x2acfe0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2acfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2acfe4: 0x0  nop
    ctx->pc = 0x2acfe4u;
    // NOP
    // 0x2acfe8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2acfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2acfec: 0x0  nop
    ctx->pc = 0x2acfecu;
    // NOP
    // 0x2acff0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2acff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2acff4: 0x0  nop
    ctx->pc = 0x2acff4u;
    // NOP
    ctx->pc = 0x2acff8u;
}
