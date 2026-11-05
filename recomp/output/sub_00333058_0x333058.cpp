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

// Function: sub_00333058
// Address: 0x333058 - 0x3330b0
void sub_00333058_0x333058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333058_0x333058");
#endif

    switch (ctx->pc) {
        case 0x333078u: goto label_333078;
        case 0x333088u: goto label_333088;
        case 0x333094u: goto label_333094;
        default: break;
    }

    ctx->pc = 0x333058u;

    // 0x333058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x333058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33305c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x333060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x333064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x333068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x333068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33306c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33306cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333070: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x333070u;
    SET_GPR_U32(ctx, 31, 0x333078u);
    ctx->pc = 0x333074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333070u;
    // 0x333074: 0xae05003c  sw          $a1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x333070u, 0x333078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333078u;
label_333078:
    // 0x333078: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x333078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x33307c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33307cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333080: 0xc0cdea8  jal         func_337AA0
    ctx->pc = 0x333080u;
    SET_GPR_U32(ctx, 31, 0x333088u);
    ctx->pc = 0x333084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333080u;
    // 0x333084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x333080u, 0x333088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333088u;
label_333088:
    // 0x333088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33308c: 0xc0cdea8  jal         func_337AA0
    ctx->pc = 0x33308Cu;
    SET_GPR_U32(ctx, 31, 0x333094u);
    ctx->pc = 0x333090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33308Cu;
    // 0x333090: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x33308Cu, 0x333094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333094u;
label_333094:
    // 0x333094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x333098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33309c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33309cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3330a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3330A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3330A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3330A0u;
        // 0x3330a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3330A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3330A8u;
    // 0x3330a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3330a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3330ac: 0x0  nop
    ctx->pc = 0x3330acu;
    // NOP
    ctx->pc = 0x3330b0u;
}
