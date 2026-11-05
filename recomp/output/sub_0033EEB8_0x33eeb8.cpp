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

// Function: sub_0033EEB8
// Address: 0x33eeb8 - 0x33eef8
void sub_0033EEB8_0x33eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EEB8_0x33eeb8");
#endif

    switch (ctx->pc) {
        case 0x33eedcu: goto label_33eedc;
        case 0x33eee8u: goto label_33eee8;
        default: break;
    }

    ctx->pc = 0x33eeb8u;

    // 0x33eeb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33eebc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33eebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33eec0: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33EEC0u;
    {
        const bool branch_taken_0x33eec0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x33EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEC0u;
        // 0x33eec4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eec0) {
            ctx->pc = 0x33EEE8u;
            goto label_33eee8;
        }
    }
    ctx->pc = 0x33EEC8u;
    // 0x33eec8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33EEC8u;
    {
        const bool branch_taken_0x33eec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEC8u;
        // 0x33eecc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eec8) {
            ctx->pc = 0x33EEECu;
            goto label_33eeec;
        }
    }
    ctx->pc = 0x33EED0u;
    // 0x33eed0: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x33eed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x33eed4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33EED4u;
    SET_GPR_U32(ctx, 31, 0x33EEDCu);
    ctx->pc = 0x33EED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EED4u;
    // 0x33eed8: 0x24846fd0  addiu       $a0, $a0, 0x6FD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33EED4u, 0x33EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EEDCu;
label_33eedc:
    // 0x33eedc: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x33eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x33eee0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33EEE0u;
    SET_GPR_U32(ctx, 31, 0x33EEE8u);
    ctx->pc = 0x33EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EEE0u;
    // 0x33eee4: 0x24846fe0  addiu       $a0, $a0, 0x6FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33EEE0u, 0x33EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EEE8u;
label_33eee8:
    // 0x33eee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33eee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33eeec:
    // 0x33eeec: 0x3e00008  jr          $ra
    ctx->pc = 0x33EEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEECu;
        // 0x33eef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EEF4u;
    // 0x33eef4: 0x0  nop
    ctx->pc = 0x33eef4u;
    // NOP
    ctx->pc = 0x33eef8u;
}
