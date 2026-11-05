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

// Function: sub_001E8FB8
// Address: 0x1e8fb8 - 0x1e9098
void sub_001E8FB8_0x1e8fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8FB8_0x1e8fb8");
#endif

    switch (ctx->pc) {
        case 0x1e9008u: goto label_1e9008;
        case 0x1e9010u: goto label_1e9010;
        case 0x1e9024u: goto label_1e9024;
        case 0x1e903cu: goto label_1e903c;
        default: break;
    }

    ctx->pc = 0x1e8fb8u;

    // 0x1e8fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e8fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e8fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e8fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e8fc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e8fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e8fc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e8fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e8fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e8fcc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e8fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e8fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e8fd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e8fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e8fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e8fdc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e8fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fe0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e8fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e8fe4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1e8fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1e8fe8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1e8fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1e8fec: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e8ff0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E8FF0u;
    {
        const bool branch_taken_0x1e8ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FF0u;
        // 0x1e8ff4: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ff0) {
            ctx->pc = 0x1E9068u;
            goto label_1e9068;
        }
    }
    ctx->pc = 0x1E8FF8u;
    // 0x1e8ff8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1e8ff8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8ffc: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x1e8ffcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e9000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e9000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9004: 0x0  nop
    ctx->pc = 0x1e9004u;
    // NOP
label_1e9008:
    // 0x1e9008: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E9008u;
    SET_GPR_U32(ctx, 31, 0x1E9010u);
    ctx->pc = 0x1E900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9008u;
    // 0x1e900c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1E9008u, 0x1E9010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9010u;
label_1e9010:
    // 0x1e9010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e9010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9014: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e9014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9018: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e9018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e901c: 0xc0789d6  jal         func_1E2758
    ctx->pc = 0x1E901Cu;
    SET_GPR_U32(ctx, 31, 0x1E9024u);
    ctx->pc = 0x1E9020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E901Cu;
    // 0x1e9020: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2758u, 0x1E901Cu, 0x1E9024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9024u;
label_1e9024:
    // 0x1e9024: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9024u;
    {
        const bool branch_taken_0x1e9024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9024u;
        // 0x1e9028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9024) {
            ctx->pc = 0x1E9054u;
            goto label_1e9054;
        }
    }
    ctx->pc = 0x1E902Cu;
    // 0x1e902c: 0xae330024  sw          $s3, 0x24($s1)
    ctx->pc = 0x1e902cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
    // 0x1e9030: 0xae350028  sw          $s5, 0x28($s1)
    ctx->pc = 0x1e9030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 21));
    // 0x1e9034: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E9034u;
    SET_GPR_U32(ctx, 31, 0x1E903Cu);
    ctx->pc = 0x1E9038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9034u;
    // 0x1e9038: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1E9034u, 0x1E903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E903Cu;
label_1e903c:
    // 0x1e903c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1e903cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1e9040: 0xae360030  sw          $s6, 0x30($s1)
    ctx->pc = 0x1e9040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 22));
    // 0x1e9044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9048: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1e9048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e904c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E904Cu;
    {
        const bool branch_taken_0x1e904c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E904Cu;
        // 0x1e9050: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e904c) {
            ctx->pc = 0x1E906Cu;
            goto label_1e906c;
        }
    }
    ctx->pc = 0x1E9054u;
label_1e9054:
    // 0x1e9054: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e9054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e9058: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e9058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e905c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e905cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e9060: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1E9060u;
    {
        const bool branch_taken_0x1e9060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9060) {
            ctx->pc = 0x1E9008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9008;
        }
    }
    ctx->pc = 0x1E9068u;
label_1e9068:
    // 0x1e9068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e906c:
    // 0x1e906c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e906cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9074: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e9074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9078: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e9078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e907c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e907cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9080: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e9080u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e9084: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1e9084u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9088: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e9088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e908c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E908Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E908Cu;
        // 0x1e9090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E908Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9094u;
    // 0x1e9094: 0x0  nop
    ctx->pc = 0x1e9094u;
    // NOP
    ctx->pc = 0x1e9098u;
}
