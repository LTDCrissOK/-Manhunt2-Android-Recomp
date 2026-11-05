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

// Function: sub_002B4FE8
// Address: 0x2b4fe8 - 0x2b50a0
void sub_002B4FE8_0x2b4fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4FE8_0x2b4fe8");
#endif

    switch (ctx->pc) {
        case 0x2b502cu: goto label_2b502c;
        case 0x2b5030u: goto label_2b5030;
        case 0x2b505cu: goto label_2b505c;
        default: break;
    }

    ctx->pc = 0x2b4fe8u;

    // 0x2b4fe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b4fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b4fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b4fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ff0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2b4ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2b4ff4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2b4ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b4ff8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b4ff8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ffc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b4ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b5000: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2b5000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2b5004: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5008: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b5008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b500c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b500cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5010: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2b5010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2b5014: 0x26720118  addiu       $s2, $s3, 0x118
    ctx->pc = 0x2b5014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
    // 0x2b5018: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2b5018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2b501c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b501cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5020: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b5020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b5024: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2B5024u;
    SET_GPR_U32(ctx, 31, 0x2B502Cu);
    ctx->pc = 0x2B5028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5024u;
    // 0x2b5028: 0x24150110  addiu       $s5, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2B5024u, 0x2B502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B502Cu;
label_2b502c:
    // 0x2b502c: 0x2671001c  addiu       $s1, $s3, 0x1C
    ctx->pc = 0x2b502cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_2b5030:
    // 0x2b5030: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b5030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5034: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B5034u;
    {
        const bool branch_taken_0x2b5034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5034) {
            ctx->pc = 0x2B5038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5034u;
            // 0x2b5038: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5068u;
            goto label_2b5068;
        }
    }
    ctx->pc = 0x2B503Cu;
    // 0x2b503c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B503Cu;
    {
        const bool branch_taken_0x2b503c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B503Cu;
        // 0x2b5040: 0x2951018  mult        $v0, $s4, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b503c) {
            ctx->pc = 0x2B504Cu;
            goto label_2b504c;
        }
    }
    ctx->pc = 0x2B5044u;
    // 0x2b5044: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5044u;
    {
        const bool branch_taken_0x2b5044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5044u;
        // 0x2b5048: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5044) {
            ctx->pc = 0x2B5064u;
            goto label_2b5064;
        }
    }
    ctx->pc = 0x2B504Cu;
label_2b504c:
    // 0x2b504c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b504cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5050: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x2b5050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2b5054: 0xc0ad5a0  jal         func_2B5680
    ctx->pc = 0x2B5054u;
    SET_GPR_U32(ctx, 31, 0x2B505Cu);
    ctx->pc = 0x2B5058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5054u;
    // 0x2b5058: 0x24840118  addiu       $a0, $a0, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5680u, 0x2B5054u, 0x2B505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B505Cu;
label_2b505c:
    // 0x2b505c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b505cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b5060: 0x202a00a  movz        $s4, $s0, $v0
    ctx->pc = 0x2b5060u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 16));
label_2b5064:
    // 0x2b5064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b5064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b5068:
    // 0x2b5068: 0x26520110  addiu       $s2, $s2, 0x110
    ctx->pc = 0x2b5068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x2b506c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2b506cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b5070: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2B5070u;
    {
        const bool branch_taken_0x2b5070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5070u;
        // 0x2b5074: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5070) {
            ctx->pc = 0x2B5030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5030;
        }
    }
    ctx->pc = 0x2B5078u;
    // 0x2b5078: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2b5078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b507c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b507cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5080: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2b5080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5084: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b5084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5088: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2b5088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b508c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2b508cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5090: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2b5090u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b5094: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b5094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5098: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5098u;
        // 0x2b509c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B50A0u;
}
