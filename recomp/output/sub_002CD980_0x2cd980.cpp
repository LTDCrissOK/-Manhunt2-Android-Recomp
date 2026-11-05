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

// Function: sub_002CD980
// Address: 0x2cd980 - 0x2cda28
void sub_002CD980_0x2cd980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD980_0x2cd980");
#endif

    switch (ctx->pc) {
        case 0x2cd9d8u: goto label_2cd9d8;
        case 0x2cda18u: goto label_2cda18;
        default: break;
    }

    ctx->pc = 0x2cd980u;

    // 0x2cd980: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2cd980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2cd984: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd988: 0x8c43b4a8  lw          $v1, -0x4B58($v0)
    ctx->pc = 0x2cd988u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cd98c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cd98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cd990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cd994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cd998: 0x8c65308c  lw          $a1, 0x308C($v1)
    ctx->pc = 0x2cd998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12428)));
    // 0x2cd99c: 0x18a00019  blez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CD99Cu;
    {
        const bool branch_taken_0x2cd99c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2CD9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD99Cu;
        // 0x2cd9a0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd99c) {
            ctx->pc = 0x2CDA04u;
            goto label_2cda04;
        }
    }
    ctx->pc = 0x2CD9A4u;
    // 0x2cd9a4: 0x8c643060  lw          $a0, 0x3060($v1)
    ctx->pc = 0x2cd9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12384)));
    // 0x2cd9a8: 0x18800017  blez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CD9A8u;
    {
        const bool branch_taken_0x2cd9a8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2CD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9A8u;
        // 0x2cd9ac: 0x8ce2b4a8  lw          $v0, -0x4B58($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9a8) {
            ctx->pc = 0x2CDA08u;
            goto label_2cda08;
        }
    }
    ctx->pc = 0x2CD9B0u;
    // 0x2cd9b0: 0x8c623070  lw          $v0, 0x3070($v1)
    ctx->pc = 0x2cd9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12400)));
    // 0x2cd9b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2cd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2cd9b8: 0x14440013  bne         $v0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CD9B8u;
    {
        const bool branch_taken_0x2cd9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9B8u;
        // 0x2cd9bc: 0x8ce2b4a8  lw          $v0, -0x4B58($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9b8) {
            ctx->pc = 0x2CDA08u;
            goto label_2cda08;
        }
    }
    ctx->pc = 0x2CD9C0u;
    // 0x2cd9c0: 0x8c623074  lw          $v0, 0x3074($v1)
    ctx->pc = 0x2cd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12404)));
    // 0x2cd9c4: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CD9C4u;
    {
        const bool branch_taken_0x2cd9c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CD9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9C4u;
        // 0x2cd9c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9c4) {
            ctx->pc = 0x2CDA04u;
            goto label_2cda04;
        }
    }
    ctx->pc = 0x2CD9CCu;
    // 0x2cd9cc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2cd9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9d0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2cd9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2cd9d4: 0x8cc2b4a8  lw          $v0, -0x4B58($a2)
    ctx->pc = 0x2cd9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948008)));
label_2cd9d8:
    // 0x2cd9d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cd9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cd9dc: 0x8c433068  lw          $v1, 0x3068($v0)
    ctx->pc = 0x2cd9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12392)));
    // 0x2cd9e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cd9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cd9e4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2cd9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd9e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2cd9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2cd9ec: 0x8cc2b4a8  lw          $v0, -0x4B58($a2)
    ctx->pc = 0x2cd9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948008)));
    // 0x2cd9f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cd9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cd9f4: 0x8c433074  lw          $v1, 0x3074($v0)
    ctx->pc = 0x2cd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12404)));
    // 0x2cd9f8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2cd9f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cd9fc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2CD9FCu;
    {
        const bool branch_taken_0x2cd9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9FCu;
        // 0x2cda00: 0x8cc2b4a8  lw          $v0, -0x4B58($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9fc) {
            ctx->pc = 0x2CD9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd9d8;
        }
    }
    ctx->pc = 0x2CDA04u;
label_2cda04:
    // 0x2cda04: 0x8ce2b4a8  lw          $v0, -0x4B58($a3)
    ctx->pc = 0x2cda04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948008)));
label_2cda08:
    // 0x2cda08: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cda08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cda0c: 0x34843038  ori         $a0, $a0, 0x3038
    ctx->pc = 0x2cda0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12344);
    // 0x2cda10: 0xc0b2c28  jal         func_2CB0A0
    ctx->pc = 0x2CDA10u;
    SET_GPR_U32(ctx, 31, 0x2CDA18u);
    ctx->pc = 0x2CDA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA10u;
    // 0x2cda14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB0A0u, 0x2CDA10u, 0x2CDA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA18u;
label_2cda18:
    // 0x2cda18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cda18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cda1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA1Cu;
        // 0x2cda20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDA24u;
    // 0x2cda24: 0x0  nop
    ctx->pc = 0x2cda24u;
    // NOP
    ctx->pc = 0x2cda28u;
}
