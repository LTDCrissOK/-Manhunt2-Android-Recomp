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

// Function: sub_0017CC88
// Address: 0x17cc88 - 0x17ccd8
void sub_0017CC88_0x17cc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CC88_0x17cc88");
#endif

    switch (ctx->pc) {
        case 0x17ccbcu: goto label_17ccbc;
        case 0x17ccc4u: goto label_17ccc4;
        default: break;
    }

    ctx->pc = 0x17cc88u;

    // 0x17cc88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17cc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17cc8c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x17cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x17cc90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cc94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17cc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17cc98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17cc98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc9c: 0x8c44a9d4  lw          $a0, -0x562C($v0)
    ctx->pc = 0x17cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x17cca0: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x17cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x17cca4: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17CCA4u;
    {
        const bool branch_taken_0x17cca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17cca4) {
            ctx->pc = 0x17CCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CCA4u;
            // 0x17cca8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CCC8u;
            goto label_17ccc8;
        }
    }
    ctx->pc = 0x17CCACu;
    // 0x17ccac: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x17ccacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x17ccb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ccb4: 0xc05f1ec  jal         func_17C7B0
    ctx->pc = 0x17CCB4u;
    SET_GPR_U32(ctx, 31, 0x17CCBCu);
    ctx->pc = 0x17CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CCB4u;
    // 0x17ccb8: 0x8e060068  lw          $a2, 0x68($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C7B0u, 0x17CCB4u, 0x17CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CCBCu;
label_17ccbc:
    // 0x17ccbc: 0xc05f31e  jal         func_17CC78
    ctx->pc = 0x17CCBCu;
    SET_GPR_U32(ctx, 31, 0x17CCC4u);
    ctx->pc = 0x17CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CCBCu;
    // 0x17ccc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC78u, 0x17CCBCu, 0x17CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CCC4u;
label_17ccc4:
    // 0x17ccc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ccc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ccc8:
    // 0x17ccc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17ccc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17cccc: 0x3e00008  jr          $ra
    ctx->pc = 0x17CCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCCCu;
        // 0x17ccd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CCD4u;
    // 0x17ccd4: 0x0  nop
    ctx->pc = 0x17ccd4u;
    // NOP
    ctx->pc = 0x17ccd8u;
}
