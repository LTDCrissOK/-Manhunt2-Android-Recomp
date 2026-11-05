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

// Function: sub_0017BB20
// Address: 0x17bb20 - 0x17bbd0
void sub_0017BB20_0x17bb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BB20_0x17bb20");
#endif

    switch (ctx->pc) {
        case 0x17bb20u: goto label_17bb20;
        case 0x17bb24u: goto label_17bb24;
        case 0x17bb28u: goto label_17bb28;
        case 0x17bb2cu: goto label_17bb2c;
        case 0x17bb30u: goto label_17bb30;
        case 0x17bb34u: goto label_17bb34;
        case 0x17bb38u: goto label_17bb38;
        case 0x17bb3cu: goto label_17bb3c;
        case 0x17bb40u: goto label_17bb40;
        case 0x17bb44u: goto label_17bb44;
        case 0x17bb48u: goto label_17bb48;
        case 0x17bb4cu: goto label_17bb4c;
        case 0x17bb50u: goto label_17bb50;
        case 0x17bb54u: goto label_17bb54;
        case 0x17bb58u: goto label_17bb58;
        case 0x17bb5cu: goto label_17bb5c;
        case 0x17bb60u: goto label_17bb60;
        case 0x17bb64u: goto label_17bb64;
        case 0x17bb68u: goto label_17bb68;
        case 0x17bb6cu: goto label_17bb6c;
        case 0x17bb70u: goto label_17bb70;
        case 0x17bb74u: goto label_17bb74;
        case 0x17bb78u: goto label_17bb78;
        case 0x17bb7cu: goto label_17bb7c;
        case 0x17bb80u: goto label_17bb80;
        case 0x17bb84u: goto label_17bb84;
        case 0x17bb88u: goto label_17bb88;
        case 0x17bb8cu: goto label_17bb8c;
        case 0x17bb90u: goto label_17bb90;
        case 0x17bb94u: goto label_17bb94;
        case 0x17bb98u: goto label_17bb98;
        case 0x17bb9cu: goto label_17bb9c;
        case 0x17bba0u: goto label_17bba0;
        case 0x17bba4u: goto label_17bba4;
        case 0x17bba8u: goto label_17bba8;
        case 0x17bbacu: goto label_17bbac;
        case 0x17bbb0u: goto label_17bbb0;
        case 0x17bbb4u: goto label_17bbb4;
        case 0x17bbb8u: goto label_17bbb8;
        case 0x17bbbcu: goto label_17bbbc;
        case 0x17bbc0u: goto label_17bbc0;
        case 0x17bbc4u: goto label_17bbc4;
        case 0x17bbc8u: goto label_17bbc8;
        case 0x17bbccu: goto label_17bbcc;
        default: break;
    }

    ctx->pc = 0x17bb20u;

label_17bb20:
    // 0x17bb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17bb24:
    // 0x17bb24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17bb28:
    // 0x17bb28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17bb2c:
    // 0x17bb2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17bb30:
    // 0x17bb30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17bb34:
    // 0x17bb34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17bb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_17bb38:
    // 0x17bb38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_17bb3c:
    // 0x17bb3c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17bb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_17bb40:
    // 0x17bb40: 0x92020530  lbu         $v0, 0x530($s0)
    ctx->pc = 0x17bb40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1328)));
label_17bb44:
    // 0x17bb44: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_17bb48:
    if (ctx->pc == 0x17BB48u) {
        ctx->pc = 0x17BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB44u;
        // 0x17bb48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB4Cu;
        goto label_17bb4c;
    }
    ctx->pc = 0x17BB44u;
    {
        const bool branch_taken_0x17bb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB44u;
        // 0x17bb48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb44) {
            ctx->pc = 0x17BBACu;
            goto label_17bbac;
        }
    }
    ctx->pc = 0x17BB4Cu;
label_17bb4c:
    // 0x17bb4c: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x17bb4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_17bb50:
    // 0x17bb50: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x17bb50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17bb54:
    // 0x17bb54: 0x10000003  b           . + 4 + (0x3 << 2)
label_17bb58:
    if (ctx->pc == 0x17BB58u) {
        ctx->pc = 0x17BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB54u;
        // 0x17bb58: 0x24130012  addiu       $s3, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB5Cu;
        goto label_17bb5c;
    }
    ctx->pc = 0x17BB54u;
    {
        const bool branch_taken_0x17bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB54u;
        // 0x17bb58: 0x24130012  addiu       $s3, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb54) {
            ctx->pc = 0x17BB64u;
            goto label_17bb64;
        }
    }
    ctx->pc = 0x17BB5Cu;
label_17bb5c:
    // 0x17bb5c: 0x0  nop
    ctx->pc = 0x17bb5cu;
    // NOP
label_17bb60:
    // 0x17bb60: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17bb60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17bb64:
    // 0x17bb64: 0x2e220014  sltiu       $v0, $s1, 0x14
    ctx->pc = 0x17bb64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_17bb68:
    // 0x17bb68: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_17bb6c:
    if (ctx->pc == 0x17BB6Cu) {
        ctx->pc = 0x17BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB68u;
        // 0x17bb6c: 0x2341018  mult        $v0, $s1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB70u;
        goto label_17bb70;
    }
    ctx->pc = 0x17BB68u;
    {
        const bool branch_taken_0x17bb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB68u;
        // 0x17bb6c: 0x2341018  mult        $v0, $s1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb68) {
            ctx->pc = 0x17BBACu;
            goto label_17bbac;
        }
    }
    ctx->pc = 0x17BB70u;
label_17bb70:
    // 0x17bb70: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x17bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
label_17bb74:
    // 0x17bb74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17bb78:
    // 0x17bb78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17bb7c:
    // 0x17bb7c: 0x5073fff8  beql        $v1, $s3, . + 4 + (-0x8 << 2)
label_17bb80:
    if (ctx->pc == 0x17BB80u) {
        ctx->pc = 0x17BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB7Cu;
        // 0x17bb80: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB84u;
        goto label_17bb84;
    }
    ctx->pc = 0x17BB7Cu;
    {
        const bool branch_taken_0x17bb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x17bb7c) {
            ctx->pc = 0x17BB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BB7Cu;
            // 0x17bb80: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bb60;
        }
    }
    ctx->pc = 0x17BB84u;
label_17bb84:
    // 0x17bb84: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17bb88:
    // 0x17bb88: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x17bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17bb8c:
    // 0x17bb8c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x17bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_17bb90:
    // 0x17bb90: 0x40f809  jalr        $v0
label_17bb94:
    if (ctx->pc == 0x17BB94u) {
        ctx->pc = 0x17BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB90u;
        // 0x17bb94: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BB98u;
        goto label_17bb98;
    }
    ctx->pc = 0x17BB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BB98u);
        ctx->pc = 0x17BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB90u;
        // 0x17bb94: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB90u, 0x17BB98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BB98u;
label_17bb98:
    // 0x17bb98: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x17bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17bb9c:
    // 0x17bb9c: 0x92020530  lbu         $v0, 0x530($s0)
    ctx->pc = 0x17bb9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1328)));
label_17bba0:
    // 0x17bba0: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x17bba0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_17bba4:
    // 0x17bba4: 0x1642ffee  bne         $s2, $v0, . + 4 + (-0x12 << 2)
label_17bba8:
    if (ctx->pc == 0x17BBA8u) {
        ctx->pc = 0x17BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBA4u;
        // 0x17bba8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BBACu;
        goto label_17bbac;
    }
    ctx->pc = 0x17BBA4u;
    {
        const bool branch_taken_0x17bba4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x17BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBA4u;
        // 0x17bba8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bba4) {
            ctx->pc = 0x17BB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bb60;
        }
    }
    ctx->pc = 0x17BBACu;
label_17bbac:
    // 0x17bbac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17bbacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17bbb0:
    // 0x17bbb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17bbb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17bbb4:
    // 0x17bbb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17bbb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17bbb8:
    // 0x17bbb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17bbb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17bbbc:
    // 0x17bbbc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17bbbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17bbc0:
    // 0x17bbc0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17bbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_17bbc4:
    // 0x17bbc4: 0x3e00008  jr          $ra
label_17bbc8:
    if (ctx->pc == 0x17BBC8u) {
        ctx->pc = 0x17BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBC4u;
        // 0x17bbc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BBCCu;
        goto label_17bbcc;
    }
    ctx->pc = 0x17BBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBC4u;
        // 0x17bbc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BBCCu;
label_17bbcc:
    // 0x17bbcc: 0x0  nop
    ctx->pc = 0x17bbccu;
    // NOP
    ctx->pc = 0x17bbd0u;
}
