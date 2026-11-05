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

// Function: sub_0026FBE0
// Address: 0x26fbe0 - 0x26fca0
void sub_0026FBE0_0x26fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FBE0_0x26fbe0");
#endif

    switch (ctx->pc) {
        case 0x26fc04u: goto label_26fc04;
        case 0x26fc70u: goto label_26fc70;
        case 0x26fc80u: goto label_26fc80;
        case 0x26fc8cu: goto label_26fc8c;
        default: break;
    }

    ctx->pc = 0x26fbe0u;

    // 0x26fbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26fbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26fbe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26fbe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26fbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26fbec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26fbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fbf0: 0x92020245  lbu         $v0, 0x245($s0)
    ctx->pc = 0x26fbf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 581)));
    // 0x26fbf4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FBF4u;
    {
        const bool branch_taken_0x26fbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fbf4) {
            ctx->pc = 0x26FBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FBF4u;
            // 0x26fbf8: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FC0Cu;
            goto label_26fc0c;
        }
    }
    ctx->pc = 0x26FBFCu;
    // 0x26fbfc: 0xc0cda26  jal         func_336898
    ctx->pc = 0x26FBFCu;
    SET_GPR_U32(ctx, 31, 0x26FC04u);
    ctx->pc = 0x26FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FBFCu;
    // 0x26fc00: 0x24050063  addiu       $a1, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x26FBFCu, 0x26FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC04u;
label_26fc04:
    // 0x26fc04: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26FC04u;
    {
        const bool branch_taken_0x26fc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC04u;
        // 0x26fc08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc04) {
            ctx->pc = 0x26FC90u;
            goto label_26fc90;
        }
    }
    ctx->pc = 0x26FC0Cu;
label_26fc0c:
    // 0x26fc0c: 0x8c8201fc  lw          $v0, 0x1FC($a0)
    ctx->pc = 0x26fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
    // 0x26fc10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FC10u;
    {
        const bool branch_taken_0x26fc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC10u;
        // 0x26fc14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc10) {
            ctx->pc = 0x26FC28u;
            goto label_26fc28;
        }
    }
    ctx->pc = 0x26FC18u;
    // 0x26fc18: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x26fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x26fc1c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FC1Cu;
    {
        const bool branch_taken_0x26fc1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26fc1c) {
            ctx->pc = 0x26FC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FC1Cu;
            // 0x26fc20: 0xae020240  sw          $v0, 0x240($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FC2Cu;
            goto label_26fc2c;
        }
    }
    ctx->pc = 0x26FC24u;
    // 0x26fc24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26fc28:
    // 0x26fc28: 0xae020240  sw          $v0, 0x240($s0)
    ctx->pc = 0x26fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
label_26fc2c:
    // 0x26fc2c: 0x8c820204  lw          $v0, 0x204($a0)
    ctx->pc = 0x26fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x26fc30: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x26FC30u;
    {
        const bool branch_taken_0x26fc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc30) {
            ctx->pc = 0x26FC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FC30u;
            // 0x26fc34: 0x8c82020c  lw          $v0, 0x20C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FC54u;
            goto label_26fc54;
        }
    }
    ctx->pc = 0x26FC38u;
    // 0x26fc38: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x26fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x26fc3c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FC3Cu;
    {
        const bool branch_taken_0x26fc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc3c) {
            ctx->pc = 0x26FC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FC3Cu;
            // 0x26fc40: 0x8c82020c  lw          $v0, 0x20C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FC54u;
            goto label_26fc54;
        }
    }
    ctx->pc = 0x26FC44u;
    // 0x26fc44: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x26fc44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x26fc48: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26fc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26fc4c: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x26fc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x26fc50: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x26fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_26fc54:
    // 0x26fc54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26FC54u;
    {
        const bool branch_taken_0x26fc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC54u;
        // 0x26fc58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc54) {
            ctx->pc = 0x26FC80u;
            goto label_26fc80;
        }
    }
    ctx->pc = 0x26FC5Cu;
    // 0x26fc5c: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x26fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x26fc60: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FC60u;
    {
        const bool branch_taken_0x26fc60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC60u;
        // 0x26fc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc60) {
            ctx->pc = 0x26FC78u;
            goto label_26fc78;
        }
    }
    ctx->pc = 0x26FC68u;
    // 0x26fc68: 0xc0848ba  jal         func_2122E8
    ctx->pc = 0x26FC68u;
    SET_GPR_U32(ctx, 31, 0x26FC70u);
    ctx->pc = 0x26FC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC68u;
    // 0x26fc6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2122E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2122E8u, 0x26FC68u, 0x26FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC70u;
label_26fc70:
    // 0x26fc70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26FC70u;
    {
        const bool branch_taken_0x26fc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC70u;
        // 0x26fc74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc70) {
            ctx->pc = 0x26FC84u;
            goto label_26fc84;
        }
    }
    ctx->pc = 0x26FC78u;
label_26fc78:
    // 0x26fc78: 0xc0848ba  jal         func_2122E8
    ctx->pc = 0x26FC78u;
    SET_GPR_U32(ctx, 31, 0x26FC80u);
    ctx->pc = 0x26FC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC78u;
    // 0x26fc7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2122E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2122E8u, 0x26FC78u, 0x26FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC80u;
label_26fc80:
    // 0x26fc80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fc84:
    // 0x26fc84: 0xc0cda26  jal         func_336898
    ctx->pc = 0x26FC84u;
    SET_GPR_U32(ctx, 31, 0x26FC8Cu);
    ctx->pc = 0x26FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC84u;
    // 0x26fc88: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x26FC84u, 0x26FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC8Cu;
label_26fc8c:
    // 0x26fc8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26fc8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26fc90:
    // 0x26fc90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26fc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26fc94: 0x3e00008  jr          $ra
    ctx->pc = 0x26FC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC94u;
        // 0x26fc98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FC9Cu;
    // 0x26fc9c: 0x0  nop
    ctx->pc = 0x26fc9cu;
    // NOP
    ctx->pc = 0x26fca0u;
}
