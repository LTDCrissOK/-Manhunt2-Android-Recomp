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

// Function: sub_00284FF8
// Address: 0x284ff8 - 0x285100
void sub_00284FF8_0x284ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284FF8_0x284ff8");
#endif

    switch (ctx->pc) {
        case 0x285024u: goto label_285024;
        case 0x285038u: goto label_285038;
        case 0x285040u: goto label_285040;
        case 0x285078u: goto label_285078;
        case 0x28508cu: goto label_28508c;
        case 0x2850c0u: goto label_2850c0;
        case 0x2850c8u: goto label_2850c8;
        default: break;
    }

    ctx->pc = 0x284ff8u;

    // 0x284ff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284ffc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x284ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x285000: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x285000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x285004: 0x24a5a988  addiu       $a1, $a1, -0x5678
    ctx->pc = 0x285004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945160));
    // 0x285008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28500c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x285010: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x285010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x285014: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x285014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x285018: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x285018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x28501c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x28501Cu;
    SET_GPR_U32(ctx, 31, 0x285024u);
    ctx->pc = 0x285020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28501Cu;
    // 0x285020: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x28501Cu, 0x285024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285024u;
label_285024:
    // 0x285024: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x285024u;
    {
        const bool branch_taken_0x285024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285024u;
        // 0x285028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285024) {
            ctx->pc = 0x285040u;
            goto label_285040;
        }
    }
    ctx->pc = 0x28502Cu;
    // 0x28502c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28502cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x285030: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x285030u;
    SET_GPR_U32(ctx, 31, 0x285038u);
    ctx->pc = 0x285034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285030u;
    // 0x285034: 0x24a5a990  addiu       $a1, $a1, -0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x285030u, 0x285038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285038u;
label_285038:
    // 0x285038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285038u;
    {
        const bool branch_taken_0x285038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285038u;
        // 0x28503c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285038) {
            ctx->pc = 0x285048u;
            goto label_285048;
        }
    }
    ctx->pc = 0x285040u;
label_285040:
    // 0x285040: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x285040u;
    {
        const bool branch_taken_0x285040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285040u;
        // 0x285044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285040) {
            ctx->pc = 0x2850E0u;
            goto label_2850e0;
        }
    }
    ctx->pc = 0x285048u;
label_285048:
    // 0x285048: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x285048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28504c: 0x2445fce0  addiu       $a1, $v0, -0x320
    ctx->pc = 0x28504cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
    // 0x285050: 0x8c44fce0  lw          $a0, -0x320($v0)
    ctx->pc = 0x285050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966496)));
    // 0x285054: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x285054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x285058: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x285058u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28505c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x28505cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x285060: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x285060u;
    {
        const bool branch_taken_0x285060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285060u;
        // 0x285064: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285060) {
            ctx->pc = 0x2850B0u;
            goto label_2850b0;
        }
    }
    ctx->pc = 0x285068u;
    // 0x285068: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x285068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28506c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x28506cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285070: 0x8e62fce0  lw          $v0, -0x320($s3)
    ctx->pc = 0x285070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966496)));
    // 0x285074: 0x0  nop
    ctx->pc = 0x285074u;
    // NOP
label_285078:
    // 0x285078: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x285078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28507c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28507cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x285080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285084: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x285084u;
    SET_GPR_U32(ctx, 31, 0x28508Cu);
    ctx->pc = 0x285088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285084u;
    // 0x285088: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x285084u, 0x28508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28508Cu;
label_28508c:
    // 0x28508c: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28508Cu;
    {
        const bool branch_taken_0x28508c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28508Cu;
        // 0x285090: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28508c) {
            ctx->pc = 0x285040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285040;
        }
    }
    ctx->pc = 0x285094u;
    // 0x285094: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x285094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x285098: 0x8e43fce0  lw          $v1, -0x320($s2)
    ctx->pc = 0x285098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966496)));
    // 0x28509c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28509cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2850a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2850a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2850a4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2850a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2850a8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2850A8u;
    {
        const bool branch_taken_0x2850a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2850ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850A8u;
        // 0x2850ac: 0x8e62fce0  lw          $v0, -0x320($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850a8) {
            ctx->pc = 0x285078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285078;
        }
    }
    ctx->pc = 0x2850B0u;
label_2850b0:
    // 0x2850b0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2850b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2850b4: 0x24508f20  addiu       $s0, $v0, -0x70E0
    ctx->pc = 0x2850b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
    // 0x2850b8: 0x26120a00  addiu       $s2, $s0, 0xA00
    ctx->pc = 0x2850b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2560));
    // 0x2850bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2850bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2850c0:
    // 0x2850c0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x2850C0u;
    SET_GPR_U32(ctx, 31, 0x2850C8u);
    ctx->pc = 0x2850C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2850C0u;
    // 0x2850c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x2850C0u, 0x2850C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2850C8u;
label_2850c8:
    // 0x2850c8: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2850C8u;
    {
        const bool branch_taken_0x2850c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850C8u;
        // 0x2850cc: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850c8) {
            ctx->pc = 0x285040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285040;
        }
    }
    ctx->pc = 0x2850D0u;
    // 0x2850d0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2850d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2850d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2850D4u;
    {
        const bool branch_taken_0x2850d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2850D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850D4u;
        // 0x2850d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850d4) {
            ctx->pc = 0x2850C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2850c0;
        }
    }
    ctx->pc = 0x2850DCu;
    // 0x2850dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2850dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2850e0:
    // 0x2850e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2850e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2850e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2850e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2850e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2850e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2850ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2850ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2850f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2850f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2850f4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2850f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2850f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2850F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2850FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850F8u;
        // 0x2850fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2850F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285100u;
}
