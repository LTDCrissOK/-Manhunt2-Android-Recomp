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

// Function: sub_0029EA08
// Address: 0x29ea08 - 0x29eac0
void sub_0029EA08_0x29ea08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EA08_0x29ea08");
#endif

    switch (ctx->pc) {
        case 0x29ea08u: goto label_29ea08;
        case 0x29ea0cu: goto label_29ea0c;
        case 0x29ea10u: goto label_29ea10;
        case 0x29ea14u: goto label_29ea14;
        case 0x29ea18u: goto label_29ea18;
        case 0x29ea1cu: goto label_29ea1c;
        case 0x29ea20u: goto label_29ea20;
        case 0x29ea24u: goto label_29ea24;
        case 0x29ea28u: goto label_29ea28;
        case 0x29ea2cu: goto label_29ea2c;
        case 0x29ea30u: goto label_29ea30;
        case 0x29ea34u: goto label_29ea34;
        case 0x29ea38u: goto label_29ea38;
        case 0x29ea3cu: goto label_29ea3c;
        case 0x29ea40u: goto label_29ea40;
        case 0x29ea44u: goto label_29ea44;
        case 0x29ea48u: goto label_29ea48;
        case 0x29ea4cu: goto label_29ea4c;
        case 0x29ea50u: goto label_29ea50;
        case 0x29ea54u: goto label_29ea54;
        case 0x29ea58u: goto label_29ea58;
        case 0x29ea5cu: goto label_29ea5c;
        case 0x29ea60u: goto label_29ea60;
        case 0x29ea64u: goto label_29ea64;
        case 0x29ea68u: goto label_29ea68;
        case 0x29ea6cu: goto label_29ea6c;
        case 0x29ea70u: goto label_29ea70;
        case 0x29ea74u: goto label_29ea74;
        case 0x29ea78u: goto label_29ea78;
        case 0x29ea7cu: goto label_29ea7c;
        case 0x29ea80u: goto label_29ea80;
        case 0x29ea84u: goto label_29ea84;
        case 0x29ea88u: goto label_29ea88;
        case 0x29ea8cu: goto label_29ea8c;
        case 0x29ea90u: goto label_29ea90;
        case 0x29ea94u: goto label_29ea94;
        case 0x29ea98u: goto label_29ea98;
        case 0x29ea9cu: goto label_29ea9c;
        case 0x29eaa0u: goto label_29eaa0;
        case 0x29eaa4u: goto label_29eaa4;
        case 0x29eaa8u: goto label_29eaa8;
        case 0x29eaacu: goto label_29eaac;
        case 0x29eab0u: goto label_29eab0;
        case 0x29eab4u: goto label_29eab4;
        case 0x29eab8u: goto label_29eab8;
        case 0x29eabcu: goto label_29eabc;
        default: break;
    }

    ctx->pc = 0x29ea08u;

label_29ea08:
    // 0x29ea08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ea08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29ea0c:
    // 0x29ea0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29ea10:
    // 0x29ea10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29ea10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29ea14:
    // 0x29ea14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29ea14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ea18:
    // 0x29ea18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29ea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29ea1c:
    // 0x29ea1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29ea1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ea20:
    // 0x29ea20: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29ea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29ea24:
    // 0x29ea24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29ea24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ea28:
    // 0x29ea28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29ea2c:
    // 0x29ea2c: 0x26550014  addiu       $s5, $s2, 0x14
    ctx->pc = 0x29ea2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_29ea30:
    // 0x29ea30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29ea34:
    // 0x29ea34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29ea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29ea38:
    // 0x29ea38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29ea38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ea3c:
    // 0x29ea3c: 0x2958021  addu        $s0, $s4, $s5
    ctx->pc = 0x29ea3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_29ea40:
    // 0x29ea40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29ea44:
    // 0x29ea44: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_29ea48:
    if (ctx->pc == 0x29EA48u) {
        ctx->pc = 0x29EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA44u;
        // 0x29ea48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA4Cu;
        goto label_29ea4c;
    }
    ctx->pc = 0x29EA44u;
    {
        const bool branch_taken_0x29ea44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ea44) {
            ctx->pc = 0x29EA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EA44u;
            // 0x29ea48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EA80u;
            goto label_29ea80;
        }
    }
    ctx->pc = 0x29EA4Cu;
label_29ea4c:
    // 0x29ea4c: 0xc0a5b3c  jal         func_296CF0
label_29ea50:
    if (ctx->pc == 0x29EA50u) {
        ctx->pc = 0x29EA54u;
        goto label_29ea54;
    }
    ctx->pc = 0x29EA4Cu;
    SET_GPR_U32(ctx, 31, 0x29EA54u);
    ctx->pc = 0x296CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CF0u, 0x29EA4Cu, 0x29EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA54u;
label_29ea54:
    // 0x29ea54: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_29ea58:
    if (ctx->pc == 0x29EA58u) {
        ctx->pc = 0x29EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA54u;
        // 0x29ea58: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA5Cu;
        goto label_29ea5c;
    }
    ctx->pc = 0x29EA54u;
    {
        const bool branch_taken_0x29ea54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ea54) {
            ctx->pc = 0x29EA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EA54u;
            // 0x29ea58: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EA80u;
            goto label_29ea80;
        }
    }
    ctx->pc = 0x29EA5Cu;
label_29ea5c:
    // 0x29ea5c: 0xae51020c  sw          $s1, 0x20C($s2)
    ctx->pc = 0x29ea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 17));
label_29ea60:
    // 0x29ea60: 0xae530208  sw          $s3, 0x208($s2)
    ctx->pc = 0x29ea60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 19));
label_29ea64:
    // 0x29ea64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29ea68:
    // 0x29ea68: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x29ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_29ea6c:
    // 0x29ea6c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_29ea70:
    // 0x29ea70: 0x40f809  jalr        $v0
label_29ea74:
    if (ctx->pc == 0x29EA74u) {
        ctx->pc = 0x29EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA70u;
        // 0x29ea74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA78u;
        goto label_29ea78;
    }
    ctx->pc = 0x29EA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29EA78u);
        ctx->pc = 0x29EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA70u;
        // 0x29ea74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EA70u, 0x29EA78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EA78u;
label_29ea78:
    // 0x29ea78: 0x10000009  b           . + 4 + (0x9 << 2)
label_29ea7c:
    if (ctx->pc == 0x29EA7Cu) {
        ctx->pc = 0x29EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA78u;
        // 0x29ea7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA80u;
        goto label_29ea80;
    }
    ctx->pc = 0x29EA78u;
    {
        const bool branch_taken_0x29ea78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA78u;
        // 0x29ea7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea78) {
            ctx->pc = 0x29EAA0u;
            goto label_29eaa0;
        }
    }
    ctx->pc = 0x29EA80u;
label_29ea80:
    // 0x29ea80: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29ea80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_29ea84:
    // 0x29ea84: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_29ea88:
    if (ctx->pc == 0x29EA88u) {
        ctx->pc = 0x29EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA84u;
        // 0x29ea88: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA8Cu;
        goto label_29ea8c;
    }
    ctx->pc = 0x29EA84u;
    {
        const bool branch_taken_0x29ea84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA84u;
        // 0x29ea88: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea84) {
            ctx->pc = 0x29EA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ea40;
        }
    }
    ctx->pc = 0x29EA8Cu;
label_29ea8c:
    // 0x29ea8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29ea8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_29ea90:
    // 0x29ea90: 0x2e620019  sltiu       $v0, $s3, 0x19
    ctx->pc = 0x29ea90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_29ea94:
    // 0x29ea94: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_29ea98:
    if (ctx->pc == 0x29EA98u) {
        ctx->pc = 0x29EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA94u;
        // 0x29ea98: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA9Cu;
        goto label_29ea9c;
    }
    ctx->pc = 0x29EA94u;
    {
        const bool branch_taken_0x29ea94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA94u;
        // 0x29ea98: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea94) {
            ctx->pc = 0x29EA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ea38;
        }
    }
    ctx->pc = 0x29EA9Cu;
label_29ea9c:
    // 0x29ea9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ea9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29eaa0:
    // 0x29eaa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29eaa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29eaa4:
    // 0x29eaa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29eaa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29eaa8:
    // 0x29eaa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29eaa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29eaac:
    // 0x29eaac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29eaacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29eab0:
    // 0x29eab0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29eab0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29eab4:
    // 0x29eab4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29eab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29eab8:
    // 0x29eab8: 0x3e00008  jr          $ra
label_29eabc:
    if (ctx->pc == 0x29EABCu) {
        ctx->pc = 0x29EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAB8u;
        // 0x29eabc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EAC0u;
        goto label_fallthrough_0x29eab8;
    }
    ctx->pc = 0x29EAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAB8u;
        // 0x29eabc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29eab8:
    ctx->pc = 0x29EAC0u;
}
