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

// Function: sub_00179838
// Address: 0x179838 - 0x1798e8
void sub_00179838_0x179838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179838_0x179838");
#endif

    switch (ctx->pc) {
        case 0x179878u: goto label_179878;
        case 0x1798a4u: goto label_1798a4;
        default: break;
    }

    ctx->pc = 0x179838u;

    // 0x179838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17983c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179840: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x179840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179848: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x179848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17984c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17984cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x179850: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x179850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x179854: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x179854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x179858: 0x92020530  lbu         $v0, 0x530($s0)
    ctx->pc = 0x179858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x17985c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17985Cu;
    {
        const bool branch_taken_0x17985c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17985Cu;
        // 0x179860: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17985c) {
            ctx->pc = 0x1798C4u;
            goto label_1798c4;
        }
    }
    ctx->pc = 0x179864u;
    // 0x179864: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x179864u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x179868: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x179868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17986c: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x17986cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x179870: 0x2341018  mult        $v0, $s1, $s4
    ctx->pc = 0x179870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x179874: 0x0  nop
    ctx->pc = 0x179874u;
    // NOP
label_179878:
    // 0x179878: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x179878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x17987c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x17987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x179880: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x179880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179884: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x179884u;
    {
        const bool branch_taken_0x179884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x179888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179884u;
        // 0x179888: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179884) {
            ctx->pc = 0x1798A4u;
            goto label_1798a4;
        }
    }
    ctx->pc = 0x17988Cu;
    // 0x17988c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x17988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x179890: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x179890u;
    {
        const bool branch_taken_0x179890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179890u;
        // 0x179894: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179890) {
            ctx->pc = 0x1798A4u;
            goto label_1798a4;
        }
    }
    ctx->pc = 0x179898u;
    // 0x179898: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x179898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17989c: 0xc05e388  jal         func_178E20
    ctx->pc = 0x17989Cu;
    SET_GPR_U32(ctx, 31, 0x1798A4u);
    ctx->pc = 0x1798A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17989Cu;
    // 0x1798a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E20u, 0x17989Cu, 0x1798A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798A4u;
label_1798a4:
    // 0x1798a4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1798a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1798a8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1798a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1798ac: 0x2e230014  sltiu       $v1, $s1, 0x14
    ctx->pc = 0x1798acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1798b0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1798B0u;
    {
        const bool branch_taken_0x1798b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1798b0) {
            ctx->pc = 0x1798B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1798B0u;
            // 0x1798b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1798C8u;
            goto label_1798c8;
        }
    }
    ctx->pc = 0x1798B8u;
    // 0x1798b8: 0x92020530  lbu         $v0, 0x530($s0)
    ctx->pc = 0x1798b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x1798bc: 0x1642ffee  bne         $s2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1798BCu;
    {
        const bool branch_taken_0x1798bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1798C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798BCu;
        // 0x1798c0: 0x2341018  mult        $v0, $s1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1798bc) {
            ctx->pc = 0x179878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179878;
        }
    }
    ctx->pc = 0x1798C4u;
label_1798c4:
    // 0x1798c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1798c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1798c8:
    // 0x1798c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1798c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1798cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1798ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1798d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1798d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1798d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1798d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1798d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1798d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1798dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1798DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1798E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798DCu;
        // 0x1798e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1798DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1798E4u;
    // 0x1798e4: 0x0  nop
    ctx->pc = 0x1798e4u;
    // NOP
    ctx->pc = 0x1798e8u;
}
