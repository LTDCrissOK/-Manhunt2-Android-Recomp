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

// Function: sub_00315090
// Address: 0x315090 - 0x315130
void sub_00315090_0x315090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315090_0x315090");
#endif

    switch (ctx->pc) {
        case 0x3150b0u: goto label_3150b0;
        case 0x3150e0u: goto label_3150e0;
        default: break;
    }

    ctx->pc = 0x315090u;

    // 0x315090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315094: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x315094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x315098: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x315098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x31509c: 0x3c10005b  lui         $s0, 0x5B
    ctx->pc = 0x31509cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
    // 0x3150a0: 0x26102190  addiu       $s0, $s0, 0x2190
    ctx->pc = 0x3150a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8592));
    // 0x3150a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3150a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3150a8: 0xc0c514c  jal         func_314530
    ctx->pc = 0x3150A8u;
    SET_GPR_U32(ctx, 31, 0x3150B0u);
    ctx->pc = 0x3150ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3150A8u;
    // 0x3150ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314530u, 0x3150A8u, 0x3150B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3150B0u;
label_3150b0:
    // 0x3150b0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3150B0u;
    {
        const bool branch_taken_0x3150b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3150b0) {
            ctx->pc = 0x3150B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3150B0u;
            // 0x3150b4: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3150B8u;
            goto label_3150b8;
        }
    }
    ctx->pc = 0x3150B8u;
label_3150b8:
    // 0x3150b8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3150b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3150bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3150bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3150c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3150c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3150c4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3150c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3150c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3150c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3150cc: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3150CCu;
    {
        const bool branch_taken_0x3150cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3150D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150CCu;
        // 0x3150d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150cc) {
            ctx->pc = 0x3150FCu;
            goto label_3150fc;
        }
    }
    ctx->pc = 0x3150D4u;
    // 0x3150d4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3150d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3150d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3150d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3150dc: 0x0  nop
    ctx->pc = 0x3150dcu;
    // NOP
label_3150e0:
    // 0x3150e0: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3150E0u;
    {
        const bool branch_taken_0x3150e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3150E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150E0u;
        // 0x3150e4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150e0) {
            ctx->pc = 0x3150FCu;
            goto label_3150fc;
        }
    }
    ctx->pc = 0x3150E8u;
    // 0x3150e8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x3150e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3150ec: 0x0  nop
    ctx->pc = 0x3150ecu;
    // NOP
    // 0x3150f0: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3150F0u;
    {
        const bool branch_taken_0x3150f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3150f0) {
            ctx->pc = 0x3150F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3150F0u;
            // 0x3150f4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3150E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3150e0;
        }
    }
    ctx->pc = 0x3150F8u;
    // 0x3150f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3150f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3150fc:
    // 0x3150fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3150FCu;
    {
        const bool branch_taken_0x3150fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150FCu;
        // 0x315100: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150fc) {
            ctx->pc = 0x31511Cu;
            goto label_31511c;
        }
    }
    ctx->pc = 0x315104u;
    // 0x315104: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x315104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x315108: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x315108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31510c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31510Cu;
    {
        const bool branch_taken_0x31510c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x315110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31510Cu;
        // 0x315110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31510c) {
            ctx->pc = 0x315120u;
            goto label_315120;
        }
    }
    ctx->pc = 0x315114u;
    // 0x315114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x315114u;
    {
        const bool branch_taken_0x315114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315114u;
        // 0x315118: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315114) {
            ctx->pc = 0x315120u;
            goto label_315120;
        }
    }
    ctx->pc = 0x31511Cu;
label_31511c:
    // 0x31511c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31511cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315120:
    // 0x315120: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x315120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315124: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x315124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x315128: 0x3e00008  jr          $ra
    ctx->pc = 0x315128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315128u;
        // 0x31512c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315130u;
}
