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

// Function: sub_002CEC90
// Address: 0x2cec90 - 0x2ced08
void sub_002CEC90_0x2cec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEC90_0x2cec90");
#endif

    switch (ctx->pc) {
        case 0x2cece4u: goto label_2cece4;
        case 0x2cecf0u: goto label_2cecf0;
        default: break;
    }

    ctx->pc = 0x2cec90u;

    // 0x2cec90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cec94: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2cec94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2cec98: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2cec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2cec9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ceca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ceca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceca4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ceca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ceca8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2ceca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2cecac: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2cecacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2cecb0: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x2cecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x2cecb4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2cecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2cecb8: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x2cecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x2cecbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cecc0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2cecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2cecc4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2cecc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2cecc8: 0x752c0  sll         $t2, $a3, 11
    ctx->pc = 0x2cecc8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x2ceccc: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x2cecccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x2cecd0: 0xae0a0018  sw          $t2, 0x18($s0)
    ctx->pc = 0x2cecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
    // 0x2cecd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cecd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cecd8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2cecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2cecdc: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x2CECDCu;
    SET_GPR_U32(ctx, 31, 0x2CECE4u);
    ctx->pc = 0x2CECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CECDCu;
    // 0x2cece0: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x2CECDCu, 0x2CECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CECE4u;
label_2cece4:
    // 0x2cece4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cece8: 0xc0b3b42  jal         func_2CED08
    ctx->pc = 0x2CECE8u;
    SET_GPR_U32(ctx, 31, 0x2CECF0u);
    ctx->pc = 0x2CECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CECE8u;
    // 0x2cecec: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CED08u, 0x2CECE8u, 0x2CECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CECF0u;
label_2cecf0:
    // 0x2cecf0: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x2cecf0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x2cecf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cecf8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2cecf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cecfc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cecfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ced00: 0x3e00008  jr          $ra
    ctx->pc = 0x2CED00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED00u;
        // 0x2ced04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CED00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CED08u;
}
