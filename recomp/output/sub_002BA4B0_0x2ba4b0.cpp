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

// Function: sub_002BA4B0
// Address: 0x2ba4b0 - 0x2ba508
void sub_002BA4B0_0x2ba4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA4B0_0x2ba4b0");
#endif

    switch (ctx->pc) {
        case 0x2ba4e8u: goto label_2ba4e8;
        default: break;
    }

    ctx->pc = 0x2ba4b0u;

    // 0x2ba4b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ba4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ba4b4: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BA4B4u;
    {
        const bool branch_taken_0x2ba4b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ba4b4) {
            ctx->pc = 0x2BA500u;
            goto label_2ba500;
        }
    }
    ctx->pc = 0x2BA4BCu;
    // 0x2ba4bc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BA4BCu;
    {
        const bool branch_taken_0x2ba4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4BCu;
        // 0x2ba4c0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4bc) {
            ctx->pc = 0x2BA500u;
            goto label_2ba500;
        }
    }
    ctx->pc = 0x2BA4C4u;
    // 0x2ba4c4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2ba4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2ba4c8: 0x24633910  addiu       $v1, $v1, 0x3910
    ctx->pc = 0x2ba4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14608));
    // 0x2ba4cc: 0x24424d40  addiu       $v0, $v0, 0x4D40
    ctx->pc = 0x2ba4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19776));
    // 0x2ba4d0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2ba4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2ba4d4: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x2ba4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x2ba4d8: 0x24843920  addiu       $a0, $a0, 0x3920
    ctx->pc = 0x2ba4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14624));
    // 0x2ba4dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ba4dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba4e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ba4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ba4e4: 0x0  nop
    ctx->pc = 0x2ba4e4u;
    // NOP
label_2ba4e8:
    // 0x2ba4e8: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x2ba4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x2ba4ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ba4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ba4f0: 0x0  nop
    ctx->pc = 0x2ba4f0u;
    // NOP
    // 0x2ba4f4: 0x0  nop
    ctx->pc = 0x2ba4f4u;
    // NOP
    // 0x2ba4f8: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BA4F8u;
    {
        const bool branch_taken_0x2ba4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4F8u;
        // 0x2ba4fc: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4f8) {
            ctx->pc = 0x2BA4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba4e8;
        }
    }
    ctx->pc = 0x2BA500u;
label_2ba500:
    // 0x2ba500: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA508u;
}
