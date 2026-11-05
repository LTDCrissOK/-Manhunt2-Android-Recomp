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

// Function: sub_0010AD90
// Address: 0x10ad90 - 0x10adf0
void sub_0010AD90_0x10ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AD90_0x10ad90");
#endif

    switch (ctx->pc) {
        case 0x10ada4u: goto label_10ada4;
        case 0x10adccu: goto label_10adcc;
        default: break;
    }

    ctx->pc = 0x10ad90u;

    // 0x10ad90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ad94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ad98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10ad98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10ad9c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10AD9Cu;
    SET_GPR_U32(ctx, 31, 0x10ADA4u);
    ctx->pc = 0x10ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD9Cu;
    // 0x10ada0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10AD9Cu, 0x10ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ADA4u;
label_10ada4:
    // 0x10ada4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ada8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10ada8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10adac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10adacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10adb0: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10adb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10adb4: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x10adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10adb8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10ADB8u;
    {
        const bool branch_taken_0x10adb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADB8u;
        // 0x10adbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10adb8) {
            ctx->pc = 0x10ADE0u;
            goto label_10ade0;
        }
    }
    ctx->pc = 0x10ADC0u;
    // 0x10adc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10adc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10adc4: 0xc043a20  jal         func_10E880
    ctx->pc = 0x10ADC4u;
    SET_GPR_U32(ctx, 31, 0x10ADCCu);
    ctx->pc = 0x10ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ADC4u;
    // 0x10adc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E880u, 0x10ADC4u, 0x10ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ADCCu;
label_10adcc:
    // 0x10adcc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10adccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10add0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10add4: 0x8c64a9d4  lw          $a0, -0x562C($v1)
    ctx->pc = 0x10add4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x10add8: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x10add8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x10addc: 0xae040260  sw          $a0, 0x260($s0)
    ctx->pc = 0x10addcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 4));
label_10ade0:
    // 0x10ade0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ade0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ade4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10ade4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ade8: 0x3e00008  jr          $ra
    ctx->pc = 0x10ADE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADE8u;
        // 0x10adec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ADE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ADF0u;
}
