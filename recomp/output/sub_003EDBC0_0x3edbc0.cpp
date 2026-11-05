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

// Function: sub_003EDBC0
// Address: 0x3edbc0 - 0x3edcd8
void sub_003EDBC0_0x3edbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDBC0_0x3edbc0");
#endif

    switch (ctx->pc) {
        case 0x3edc00u: goto label_3edc00;
        case 0x3edc50u: goto label_3edc50;
        case 0x3edc60u: goto label_3edc60;
        case 0x3edc94u: goto label_3edc94;
        default: break;
    }

    ctx->pc = 0x3edbc0u;

    // 0x3edbc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3edbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3edbc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3edbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3edbc8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3edbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3edbcc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3edbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x3edbd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3edbd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edbd4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3edbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3edbd8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3edbd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edbdc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3edbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3edbe0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3edbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x3edbe4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3edbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3edbe8: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x3edbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3edbec: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x3edbecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3edbf0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x3EDBF0u;
    {
        const bool branch_taken_0x3edbf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBF0u;
        // 0x3edbf4: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edbf0) {
            ctx->pc = 0x3EDC1Cu;
            goto label_3edc1c;
        }
    }
    ctx->pc = 0x3EDBF8u;
    // 0x3edbf8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3edbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3edbfc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3edbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3edc00:
    // 0x3edc00: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3edc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3edc04: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3edc04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3edc08: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EDC08u;
    {
        const bool branch_taken_0x3edc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edc08) {
            ctx->pc = 0x3EDC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDC08u;
            // 0x3edc0c: 0x8e11000c  lw          $s1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDC14u;
            goto label_3edc14;
        }
    }
    ctx->pc = 0x3EDC10u;
    // 0x3edc10: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x3edc10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3edc14:
    // 0x3edc14: 0x5620fffa  bnel        $s1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3EDC14u;
    {
        const bool branch_taken_0x3edc14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3edc14) {
            ctx->pc = 0x3EDC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDC14u;
            // 0x3edc18: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3edc00;
        }
    }
    ctx->pc = 0x3EDC1Cu;
label_3edc1c:
    // 0x3edc1c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3EDC1Cu;
    {
        const bool branch_taken_0x3edc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC1Cu;
        // 0x3edc20: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edc1c) {
            ctx->pc = 0x3EDC64u;
            goto label_3edc64;
        }
    }
    ctx->pc = 0x3EDC24u;
    // 0x3edc24: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3edc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3edc28: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3edc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3edc2c: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3EDC2Cu;
    {
        const bool branch_taken_0x3edc2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EDC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC2Cu;
        // 0x3edc30: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edc2c) {
            ctx->pc = 0x3EDC58u;
            goto label_3edc58;
        }
    }
    ctx->pc = 0x3EDC34u;
    // 0x3edc34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3edc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edc38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3edc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edc3c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3edc3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edc40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3edc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3edc44: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3edc44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edc48: 0xc0fb69c  jal         func_3EDA70
    ctx->pc = 0x3EDC48u;
    SET_GPR_U32(ctx, 31, 0x3EDC50u);
    ctx->pc = 0x3EDC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC48u;
    // 0x3edc4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDA70u, 0x3EDC48u, 0x3EDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC50u;
label_3edc50:
    // 0x3edc50: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3EDC50u;
    {
        const bool branch_taken_0x3edc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC50u;
        // 0x3edc54: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edc50) {
            ctx->pc = 0x3EDC98u;
            goto label_3edc98;
        }
    }
    ctx->pc = 0x3EDC58u;
label_3edc58:
    // 0x3edc58: 0xc0f9006  jal         func_3E4018
    ctx->pc = 0x3EDC58u;
    SET_GPR_U32(ctx, 31, 0x3EDC60u);
    ctx->pc = 0x3EDC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC58u;
    // 0x3edc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4018u, 0x3EDC58u, 0x3EDC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC60u;
label_3edc60:
    // 0x3edc60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3edc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3edc64:
    // 0x3edc64: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3edc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3edc68: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3edc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3edc6c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3edc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3edc70: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3edc70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3edc74: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3EDC74u;
    {
        const bool branch_taken_0x3edc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC74u;
        // 0x3edc78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edc74) {
            ctx->pc = 0x3EDCA8u;
            goto label_3edca8;
        }
    }
    ctx->pc = 0x3EDC7Cu;
    // 0x3edc7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3edc7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edc80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3edc80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edc84: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3edc84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edc88: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3edc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3edc8c: 0xc0fb69c  jal         func_3EDA70
    ctx->pc = 0x3EDC8Cu;
    SET_GPR_U32(ctx, 31, 0x3EDC94u);
    ctx->pc = 0x3EDC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC8Cu;
    // 0x3edc90: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDA70u, 0x3EDC8Cu, 0x3EDC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC94u;
label_3edc94:
    // 0x3edc94: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3edc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3edc98:
    // 0x3edc98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3edc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3edc9c: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x3edc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3edca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDCA0u;
    {
        const bool branch_taken_0x3edca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDCA0u;
        // 0x3edca4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edca0) {
            ctx->pc = 0x3EDCB0u;
            goto label_3edcb0;
        }
    }
    ctx->pc = 0x3EDCA8u;
label_3edca8:
    // 0x3edca8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x3edca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x3edcac: 0xa2400004  sb          $zero, 0x4($s2)
    ctx->pc = 0x3edcacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 0));
label_3edcb0:
    // 0x3edcb0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3edcb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edcb4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3edcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3edcb8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3edcb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3edcbc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3edcbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3edcc0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3edcc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3edcc4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3edcc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3edcc8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3edcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3edccc: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDCCCu;
        // 0x3edcd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDCD4u;
    // 0x3edcd4: 0x0  nop
    ctx->pc = 0x3edcd4u;
    // NOP
    ctx->pc = 0x3edcd8u;
}
