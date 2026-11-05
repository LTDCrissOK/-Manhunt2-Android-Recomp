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

// Function: sub_00338080
// Address: 0x338080 - 0x3380b8
void sub_00338080_0x338080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338080_0x338080");
#endif

    switch (ctx->pc) {
        case 0x3380a8u: goto label_3380a8;
        default: break;
    }

    ctx->pc = 0x338080u;

    // 0x338080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338084: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x338084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x338088: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x338088u;
    {
        const bool branch_taken_0x338088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338088u;
        // 0x33808c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338088) {
            ctx->pc = 0x3380A8u;
            goto label_3380a8;
        }
    }
    ctx->pc = 0x338090u;
    // 0x338090: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x338090u;
    {
        const bool branch_taken_0x338090 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x338090) {
            ctx->pc = 0x338094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338090u;
            // 0x338094: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33809Cu;
            goto label_33809c;
        }
    }
    ctx->pc = 0x338098u;
    // 0x338098: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x338098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33809c:
    // 0x33809c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x33809cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3380a0: 0xc0fbb2c  jal         func_3EECB0
    ctx->pc = 0x3380A0u;
    SET_GPR_U32(ctx, 31, 0x3380A8u);
    ctx->pc = 0x3380A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3380A0u;
    // 0x3380a4: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EECB0u, 0x3380A0u, 0x3380A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3380A8u;
label_3380a8:
    // 0x3380a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3380a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3380ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3380ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3380B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380ACu;
        // 0x3380b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3380ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3380B4u;
    // 0x3380b4: 0x0  nop
    ctx->pc = 0x3380b4u;
    // NOP
    ctx->pc = 0x3380b8u;
}
