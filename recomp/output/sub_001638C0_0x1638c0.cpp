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

// Function: sub_001638C0
// Address: 0x1638c0 - 0x163930
void sub_001638C0_0x1638c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001638C0_0x1638c0");
#endif

    switch (ctx->pc) {
        case 0x163900u: goto label_163900;
        case 0x16391cu: goto label_16391c;
        default: break;
    }

    ctx->pc = 0x1638c0u;

    // 0x1638c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1638c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1638c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1638c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1638c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1638c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1638cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1638ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1638d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1638d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1638d4: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x1638d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x1638d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1638D8u;
    {
        const bool branch_taken_0x1638d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1638DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638D8u;
        // 0x1638dc: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638d8) {
            ctx->pc = 0x16391Cu;
            goto label_16391c;
        }
    }
    ctx->pc = 0x1638E0u;
    // 0x1638e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1638e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1638e4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1638e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1638e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1638e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1638ec: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1638ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1638f0: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1638F0u;
    {
        const bool branch_taken_0x1638f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1638f0) {
            ctx->pc = 0x1638F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1638F0u;
            // 0x1638f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163920u;
            goto label_163920;
        }
    }
    ctx->pc = 0x1638F8u;
    // 0x1638f8: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x1638F8u;
    SET_GPR_U32(ctx, 31, 0x163900u);
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x1638F8u, 0x163900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163900u;
label_163900:
    // 0x163900: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x163900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x163904: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x163904u;
    {
        const bool branch_taken_0x163904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x163908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163904u;
        // 0x163908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163904) {
            ctx->pc = 0x16391Cu;
            goto label_16391c;
        }
    }
    ctx->pc = 0x16390Cu;
    // 0x16390c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16390cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163910: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x163910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x163914: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x163914u;
    SET_GPR_U32(ctx, 31, 0x16391Cu);
    ctx->pc = 0x163918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163914u;
    // 0x163918: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x163914u, 0x16391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16391Cu;
label_16391c:
    // 0x16391c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16391cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163920:
    // 0x163920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x163920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x163924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163928: 0x3e00008  jr          $ra
    ctx->pc = 0x163928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163928u;
        // 0x16392c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163930u;
}
