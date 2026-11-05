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

// Function: sub_0026EC18
// Address: 0x26ec18 - 0x26ece0
void sub_0026EC18_0x26ec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EC18_0x26ec18");
#endif

    switch (ctx->pc) {
        case 0x26ec4cu: goto label_26ec4c;
        case 0x26ec60u: goto label_26ec60;
        case 0x26ec74u: goto label_26ec74;
        case 0x26ec90u: goto label_26ec90;
        case 0x26ecbcu: goto label_26ecbc;
        case 0x26ecc8u: goto label_26ecc8;
        default: break;
    }

    ctx->pc = 0x26ec18u;

    // 0x26ec18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ec18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ec1c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x26ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x26ec20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26ec20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26ec24: 0x24422960  addiu       $v0, $v0, 0x2960
    ctx->pc = 0x26ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10592));
    // 0x26ec28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26ec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26ec2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ec2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ec30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ec34: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x26ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    // 0x26ec38: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x26ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x26ec3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EC3Cu;
    {
        const bool branch_taken_0x26ec3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC3Cu;
        // 0x26ec40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec3c) {
            ctx->pc = 0x26EC4Cu;
            goto label_26ec4c;
        }
    }
    ctx->pc = 0x26EC44u;
    // 0x26ec44: 0xc09c07c  jal         func_2701F0
    ctx->pc = 0x26EC44u;
    SET_GPR_U32(ctx, 31, 0x26EC4Cu);
    ctx->pc = 0x26EC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC44u;
    // 0x26ec48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701F0u, 0x26EC44u, 0x26EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC4Cu;
label_26ec4c:
    // 0x26ec4c: 0x8e040250  lw          $a0, 0x250($s0)
    ctx->pc = 0x26ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x26ec50: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EC50u;
    {
        const bool branch_taken_0x26ec50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ec50) {
            ctx->pc = 0x26EC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EC50u;
            // 0x26ec54: 0x8e05024c  lw          $a1, 0x24C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EC64u;
            goto label_26ec64;
        }
    }
    ctx->pc = 0x26EC58u;
    // 0x26ec58: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x26EC58u;
    SET_GPR_U32(ctx, 31, 0x26EC60u);
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x26EC58u, 0x26EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC60u;
label_26ec60:
    // 0x26ec60: 0x8e05024c  lw          $a1, 0x24C($s0)
    ctx->pc = 0x26ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
label_26ec64:
    // 0x26ec64: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EC64u;
    {
        const bool branch_taken_0x26ec64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC64u;
        // 0x26ec68: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec64) {
            ctx->pc = 0x26EC74u;
            goto label_26ec74;
        }
    }
    ctx->pc = 0x26EC6Cu;
    // 0x26ec6c: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x26EC6Cu;
    SET_GPR_U32(ctx, 31, 0x26EC74u);
    ctx->pc = 0x26EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC6Cu;
    // 0x26ec70: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x26EC6Cu, 0x26EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC74u;
label_26ec74:
    // 0x26ec74: 0x26040258  addiu       $a0, $s0, 0x258
    ctx->pc = 0x26ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 600));
    // 0x26ec78: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x26ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x26ec7c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26ec80: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26EC80u;
    {
        const bool branch_taken_0x26ec80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26ec80) {
            ctx->pc = 0x26EC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EC80u;
            // 0x26ec84: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26ECACu;
            goto label_26ecac;
        }
    }
    ctx->pc = 0x26EC88u;
    // 0x26ec88: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x26ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x26ec8c: 0x0  nop
    ctx->pc = 0x26ec8cu;
    // NOP
label_26ec90:
    // 0x26ec90: 0x0  nop
    ctx->pc = 0x26ec90u;
    // NOP
    // 0x26ec94: 0x0  nop
    ctx->pc = 0x26ec94u;
    // NOP
    // 0x26ec98: 0x0  nop
    ctx->pc = 0x26ec98u;
    // NOP
    // 0x26ec9c: 0x0  nop
    ctx->pc = 0x26ec9cu;
    // NOP
    // 0x26eca0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x26ECA0u;
    {
        const bool branch_taken_0x26eca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECA0u;
        // 0x26eca4: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eca0) {
            ctx->pc = 0x26EC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ec90;
        }
    }
    ctx->pc = 0x26ECA8u;
    // 0x26eca8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x26eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26ecac:
    // 0x26ecac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26ECACu;
    {
        const bool branch_taken_0x26ecac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ecac) {
            ctx->pc = 0x26ECB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ECACu;
            // 0x26ecb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26ECC0u;
            goto label_26ecc0;
        }
    }
    ctx->pc = 0x26ECB4u;
    // 0x26ecb4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x26ECB4u;
    SET_GPR_U32(ctx, 31, 0x26ECBCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x26ECB4u, 0x26ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ECBCu;
label_26ecbc:
    // 0x26ecbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ecbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26ecc0:
    // 0x26ecc0: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x26ECC0u;
    SET_GPR_U32(ctx, 31, 0x26ECC8u);
    ctx->pc = 0x26ECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ECC0u;
    // 0x26ecc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x26ECC0u, 0x26ECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ECC8u;
label_26ecc8:
    // 0x26ecc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26ecc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26eccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26ecccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26ecd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ecd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ecd4: 0x3e00008  jr          $ra
    ctx->pc = 0x26ECD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECD4u;
        // 0x26ecd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ECD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26ECDCu;
    // 0x26ecdc: 0x0  nop
    ctx->pc = 0x26ecdcu;
    // NOP
    ctx->pc = 0x26ece0u;
}
