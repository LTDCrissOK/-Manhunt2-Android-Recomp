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

// Function: sub_003746B0
// Address: 0x3746b0 - 0x374720
void sub_003746B0_0x3746b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003746B0_0x3746b0");
#endif

    ctx->pc = 0x3746b0u;

    // 0x3746b0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3746B0u;
    {
        const bool branch_taken_0x3746b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3746B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3746B0u;
        // 0x3746b4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3746b0) {
            ctx->pc = 0x3746E8u;
            goto label_3746e8;
        }
    }
    ctx->pc = 0x3746B8u;
    // 0x3746b8: 0x24456050  addiu       $a1, $v0, 0x6050
    ctx->pc = 0x3746b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24656));
    // 0x3746bc: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x3746bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x3746c0: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x3746c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3746c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3746c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3746c8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3746C8u;
    {
        const bool branch_taken_0x3746c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3746CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3746C8u;
        // 0x3746cc: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3746c8) {
            ctx->pc = 0x374718u;
            goto label_374718;
        }
    }
    ctx->pc = 0x3746D0u;
    // 0x3746d0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3746d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3746d4: 0x8c82cd00  lw          $v0, -0x3300($a0)
    ctx->pc = 0x3746d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954240)));
    // 0x3746d8: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x3746d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x3746dc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3746dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3746e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3746E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3746E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3746E0u;
        // 0x3746e4: 0xac82cd00  sw          $v0, -0x3300($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294954240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3746E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3746E8u;
label_3746e8:
    // 0x3746e8: 0x24466050  addiu       $a2, $v0, 0x6050
    ctx->pc = 0x3746e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24656));
    // 0x3746ec: 0x8cc50034  lw          $a1, 0x34($a2)
    ctx->pc = 0x3746ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x3746f0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3746f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3746f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3746F4u;
    {
        const bool branch_taken_0x3746f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3746F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3746F4u;
        // 0x3746f8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3746f4) {
            ctx->pc = 0x374718u;
            goto label_374718;
        }
    }
    ctx->pc = 0x3746FCu;
    // 0x3746fc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3746fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x374700: 0x8c44cd00  lw          $a0, -0x3300($v0)
    ctx->pc = 0x374700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954240)));
    // 0x374704: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x374704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x374708: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x374708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x37470c: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x37470cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x374710: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x374710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x374714: 0xac44cd00  sw          $a0, -0x3300($v0)
    ctx->pc = 0x374714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954240), GPR_U32(ctx, 4));
label_374718:
    // 0x374718: 0x3e00008  jr          $ra
    ctx->pc = 0x374718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374720u;
}
