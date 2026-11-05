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

// Function: sub_00353768
// Address: 0x353768 - 0x3537a8
void sub_00353768_0x353768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353768_0x353768");
#endif

    switch (ctx->pc) {
        case 0x353790u: goto label_353790;
        default: break;
    }

    ctx->pc = 0x353768u;

    // 0x353768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x353768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35376c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x353770: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x353770u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x353774: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x353774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x353778: 0x8e05c8d0  lw          $a1, -0x3730($s0)
    ctx->pc = 0x353778u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FC8D0u));
    // 0x35377c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x35377Cu;
    {
        const bool branch_taken_0x35377c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x35377c) {
            ctx->pc = 0x353780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35377Cu;
            // 0x353780: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353798u;
            goto label_353798;
        }
    }
    ctx->pc = 0x353784u;
    // 0x353784: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x353784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x353788: 0xc0b0ab2  jal         func_2C2AC8
    ctx->pc = 0x353788u;
    SET_GPR_U32(ctx, 31, 0x353790u);
    ctx->pc = 0x35378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353788u;
    // 0x35378c: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AC8u, 0x353788u, 0x353790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353790u;
label_353790:
    // 0x353790: 0xae00c8d0  sw          $zero, -0x3730($s0)
    ctx->pc = 0x353790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953168), GPR_U32(ctx, 0));
    // 0x353794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x353794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_353798:
    // 0x353798: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x353798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35379c: 0x3e00008  jr          $ra
    ctx->pc = 0x35379Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3537A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35379Cu;
        // 0x3537a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35379Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3537A4u;
    // 0x3537a4: 0x0  nop
    ctx->pc = 0x3537a4u;
    // NOP
    ctx->pc = 0x3537a8u;
}
