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

// Function: sub_00102FB8
// Address: 0x102fb8 - 0x1030b0
void sub_00102FB8_0x102fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102FB8_0x102fb8");
#endif

    switch (ctx->pc) {
        case 0x102ff8u: goto label_102ff8;
        case 0x103000u: goto label_103000;
        case 0x103020u: goto label_103020;
        case 0x10305cu: goto label_10305c;
        case 0x103084u: goto label_103084;
        default: break;
    }

    ctx->pc = 0x102fb8u;

    // 0x102fb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x102fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x102fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102fc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x102fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x102fc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x102fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102fc8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x102fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x102fcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x102fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x102fd0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x102fd0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102fd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x102fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x102fd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x102fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x102fdc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x102fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x102fe0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x102fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x102fe4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x102fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x102fe8: 0x92f60022  lbu         $s6, 0x22($s7)
    ctx->pc = 0x102fe8u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 34)));
    // 0x102fec: 0x12c00023  beqz        $s6, . + 4 + (0x23 << 2)
    ctx->pc = 0x102FECu;
    {
        const bool branch_taken_0x102fec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x102FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FECu;
        // 0x102ff0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fec) {
            ctx->pc = 0x10307Cu;
            goto label_10307c;
        }
    }
    ctx->pc = 0x102FF4u;
    // 0x102ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_102ff8:
    // 0x102ff8: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x102FF8u;
    SET_GPR_U32(ctx, 31, 0x103000u);
    ctx->pc = 0x102FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102FF8u;
    // 0x102ffc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x102FF8u, 0x103000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103000u;
label_103000:
    // 0x103000: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x103000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x103004: 0x2452000c  addiu       $s2, $v0, 0xC
    ctx->pc = 0x103004u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x103008: 0x82510004  lb          $s1, 0x4($s2)
    ctx->pc = 0x103008u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10300c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x10300Cu;
    {
        const bool branch_taken_0x10300c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x103010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10300Cu;
        // 0x103010: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10300c) {
            ctx->pc = 0x10306Cu;
            goto label_10306c;
        }
    }
    ctx->pc = 0x103014u;
    // 0x103014: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x103014u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x103018: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x103018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10301c: 0x0  nop
    ctx->pc = 0x10301cu;
    // NOP
label_103020:
    // 0x103020: 0x8ea495a8  lw          $a0, -0x6A58($s5)
    ctx->pc = 0x103020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294940072)));
    // 0x103024: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x103024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x103028: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x103028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10302c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10302cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x103030: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x103030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x103034: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x103034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103038: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x103038u;
    {
        const bool branch_taken_0x103038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x103038) {
            ctx->pc = 0x10303Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103038u;
            // 0x10303c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103060u;
            goto label_103060;
        }
    }
    ctx->pc = 0x103040u;
    // 0x103040: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x103040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x103044: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x103044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x103048: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x103048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x10304c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10304Cu;
    {
        const bool branch_taken_0x10304c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10304c) {
            ctx->pc = 0x103050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10304Cu;
            // 0x103050: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103060u;
            goto label_103060;
        }
    }
    ctx->pc = 0x103054u;
    // 0x103054: 0xc0f675a  jal         func_3D9D68
    ctx->pc = 0x103054u;
    SET_GPR_U32(ctx, 31, 0x10305Cu);
    ctx->pc = 0x103058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103054u;
    // 0x103058: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9D68u, 0x103054u, 0x10305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10305Cu;
label_10305c:
    // 0x10305c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10305cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_103060:
    // 0x103060: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x103060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x103064: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x103064u;
    {
        const bool branch_taken_0x103064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103064) {
            ctx->pc = 0x103068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103064u;
            // 0x103068: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103020;
        }
    }
    ctx->pc = 0x10306Cu;
label_10306c:
    // 0x10306c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x10306cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103070: 0x216102b  sltu        $v0, $s0, $s6
    ctx->pc = 0x103070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x103074: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x103074u;
    {
        const bool branch_taken_0x103074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103074u;
        // 0x103078: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103074) {
            ctx->pc = 0x102FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102ff8;
        }
    }
    ctx->pc = 0x10307Cu;
label_10307c:
    // 0x10307c: 0xc0f6770  jal         func_3D9DC0
    ctx->pc = 0x10307Cu;
    SET_GPR_U32(ctx, 31, 0x103084u);
    ctx->pc = 0x103080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10307Cu;
    // 0x103080: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DC0u, 0x10307Cu, 0x103084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103084u;
label_103084:
    // 0x103084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10308c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10308cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103090: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103094: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x103094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103098: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x103098u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10309c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x10309cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1030a0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1030a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1030a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1030a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1030a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1030A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1030ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030A8u;
        // 0x1030ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1030A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1030B0u;
}
