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

// Function: sub_0011CF10
// Address: 0x11cf10 - 0x11cf88
void sub_0011CF10_0x11cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CF10_0x11cf10");
#endif

    switch (ctx->pc) {
        case 0x11cf48u: goto label_11cf48;
        case 0x11cf54u: goto label_11cf54;
        case 0x11cf64u: goto label_11cf64;
        default: break;
    }

    ctx->pc = 0x11cf10u;

    // 0x11cf10: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x11cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x11cf14: 0xffb00220  sd          $s0, 0x220($sp)
    ctx->pc = 0x11cf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 16));
    // 0x11cf18: 0xffb10228  sd          $s1, 0x228($sp)
    ctx->pc = 0x11cf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 17));
    // 0x11cf1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11cf1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf20: 0xffb20230  sd          $s2, 0x230($sp)
    ctx->pc = 0x11cf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 18));
    // 0x11cf24: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x11cf24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x11cf28: 0xffb30238  sd          $s3, 0x238($sp)
    ctx->pc = 0x11cf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 19));
    // 0x11cf2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11cf2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf30: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x11cf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
    // 0x11cf34: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11cf34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11cf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11cf3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf40: 0xc09e06e  jal         func_2781B8
    ctx->pc = 0x11CF40u;
    SET_GPR_U32(ctx, 31, 0x11CF48u);
    ctx->pc = 0x11CF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF40u;
    // 0x11cf44: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2781B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2781B8u, 0x11CF40u, 0x11CF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF48u;
label_11cf48:
    // 0x11cf48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11cf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf4c: 0xc04751e  jal         func_11D478
    ctx->pc = 0x11CF4Cu;
    SET_GPR_U32(ctx, 31, 0x11CF54u);
    ctx->pc = 0x11CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF4Cu;
    // 0x11cf50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D478u, 0x11CF4Cu, 0x11CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF54u;
label_11cf54:
    // 0x11cf54: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x11cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x11cf58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf5c: 0xc04767c  jal         func_11D9F0
    ctx->pc = 0x11CF5Cu;
    SET_GPR_U32(ctx, 31, 0x11CF64u);
    ctx->pc = 0x11CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF5Cu;
    // 0x11cf60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D9F0u, 0x11CF5Cu, 0x11CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF64u;
label_11cf64:
    // 0x11cf64: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x11cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x11cf68: 0xdfb00220  ld          $s0, 0x220($sp)
    ctx->pc = 0x11cf68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x11cf6c: 0xdfb10228  ld          $s1, 0x228($sp)
    ctx->pc = 0x11cf6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x11cf70: 0xdfb20230  ld          $s2, 0x230($sp)
    ctx->pc = 0x11cf70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x11cf74: 0xdfb30238  ld          $s3, 0x238($sp)
    ctx->pc = 0x11cf74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x11cf78: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x11cf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11cf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF7Cu;
        // 0x11cf80: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CF84u;
    // 0x11cf84: 0x0  nop
    ctx->pc = 0x11cf84u;
    // NOP
    ctx->pc = 0x11cf88u;
}
