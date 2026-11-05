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

// Function: sub_001338E8
// Address: 0x1338e8 - 0x133930
void sub_001338E8_0x1338e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001338E8_0x1338e8");
#endif

    switch (ctx->pc) {
        case 0x133900u: goto label_133900;
        default: break;
    }

    ctx->pc = 0x1338e8u;

    // 0x1338e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1338e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1338ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1338ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1338F0u;
    {
        const bool branch_taken_0x1338f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1338F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338F0u;
        // 0x1338f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338f0) {
            ctx->pc = 0x133908u;
            goto label_133908;
        }
    }
    ctx->pc = 0x1338F8u;
    // 0x1338f8: 0xc045efe  jal         func_117BF8
    ctx->pc = 0x1338F8u;
    SET_GPR_U32(ctx, 31, 0x133900u);
    ctx->pc = 0x117BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BF8u, 0x1338F8u, 0x133900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133900u;
label_133900:
    // 0x133900: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x133900u;
    {
        const bool branch_taken_0x133900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133900) {
            ctx->pc = 0x133904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133900u;
            // 0x133904: 0x8c4300c0  lw          $v1, 0xC0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133910u;
            goto label_133910;
        }
    }
    ctx->pc = 0x133908u;
label_133908:
    // 0x133908: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x133908u;
    {
        const bool branch_taken_0x133908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133908u;
        // 0x13390c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133908) {
            ctx->pc = 0x133924u;
            goto label_133924;
        }
    }
    ctx->pc = 0x133910u;
label_133910:
    // 0x133910: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x133910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x133914: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x133914u;
    {
        const bool branch_taken_0x133914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133914) {
            ctx->pc = 0x133918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133914u;
            // 0x133918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133924u;
            goto label_133924;
        }
    }
    ctx->pc = 0x13391Cu;
    // 0x13391c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x13391cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x133920: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x133920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_133924:
    // 0x133924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133928: 0x3e00008  jr          $ra
    ctx->pc = 0x133928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133928u;
        // 0x13392c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133930u;
}
