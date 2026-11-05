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

// Function: sub_0014DF28
// Address: 0x14df28 - 0x14dfe8
void sub_0014DF28_0x14df28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DF28_0x14df28");
#endif

    switch (ctx->pc) {
        case 0x14df28u: goto label_14df28;
        case 0x14df2cu: goto label_14df2c;
        case 0x14df30u: goto label_14df30;
        case 0x14df34u: goto label_14df34;
        case 0x14df38u: goto label_14df38;
        case 0x14df3cu: goto label_14df3c;
        case 0x14df40u: goto label_14df40;
        case 0x14df44u: goto label_14df44;
        case 0x14df48u: goto label_14df48;
        case 0x14df4cu: goto label_14df4c;
        case 0x14df50u: goto label_14df50;
        case 0x14df54u: goto label_14df54;
        case 0x14df58u: goto label_14df58;
        case 0x14df5cu: goto label_14df5c;
        case 0x14df60u: goto label_14df60;
        case 0x14df64u: goto label_14df64;
        case 0x14df68u: goto label_14df68;
        case 0x14df6cu: goto label_14df6c;
        case 0x14df70u: goto label_14df70;
        case 0x14df74u: goto label_14df74;
        case 0x14df78u: goto label_14df78;
        case 0x14df7cu: goto label_14df7c;
        case 0x14df80u: goto label_14df80;
        case 0x14df84u: goto label_14df84;
        case 0x14df88u: goto label_14df88;
        case 0x14df8cu: goto label_14df8c;
        case 0x14df90u: goto label_14df90;
        case 0x14df94u: goto label_14df94;
        case 0x14df98u: goto label_14df98;
        case 0x14df9cu: goto label_14df9c;
        case 0x14dfa0u: goto label_14dfa0;
        case 0x14dfa4u: goto label_14dfa4;
        case 0x14dfa8u: goto label_14dfa8;
        case 0x14dfacu: goto label_14dfac;
        case 0x14dfb0u: goto label_14dfb0;
        case 0x14dfb4u: goto label_14dfb4;
        case 0x14dfb8u: goto label_14dfb8;
        case 0x14dfbcu: goto label_14dfbc;
        case 0x14dfc0u: goto label_14dfc0;
        case 0x14dfc4u: goto label_14dfc4;
        case 0x14dfc8u: goto label_14dfc8;
        case 0x14dfccu: goto label_14dfcc;
        case 0x14dfd0u: goto label_14dfd0;
        case 0x14dfd4u: goto label_14dfd4;
        case 0x14dfd8u: goto label_14dfd8;
        case 0x14dfdcu: goto label_14dfdc;
        case 0x14dfe0u: goto label_14dfe0;
        case 0x14dfe4u: goto label_14dfe4;
        default: break;
    }

    ctx->pc = 0x14df28u;

label_14df28:
    // 0x14df28: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x14df28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_14df2c:
    // 0x14df2c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14df2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14df30:
    // 0x14df30: 0x8c62a9d4  lw          $v0, -0x562C($v1)
    ctx->pc = 0x14df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945236)));
label_14df34:
    // 0x14df34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14df34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14df38:
    // 0x14df38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14df3c:
    // 0x14df3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14df3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14df40:
    // 0x14df40: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x14df40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_14df44:
    // 0x14df44: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_14df48:
    if (ctx->pc == 0x14DF48u) {
        ctx->pc = 0x14DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF44u;
        // 0x14df48: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DF4Cu;
        goto label_14df4c;
    }
    ctx->pc = 0x14DF44u;
    {
        const bool branch_taken_0x14df44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF44u;
        // 0x14df48: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df44) {
            ctx->pc = 0x14DFD4u;
            goto label_14dfd4;
        }
    }
    ctx->pc = 0x14DF4Cu;
label_14df4c:
    // 0x14df4c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x14df4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_14df50:
    // 0x14df50: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_14df54:
    if (ctx->pc == 0x14DF54u) {
        ctx->pc = 0x14DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF50u;
        // 0x14df54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DF58u;
        goto label_14df58;
    }
    ctx->pc = 0x14DF50u;
    {
        const bool branch_taken_0x14df50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14df50) {
            ctx->pc = 0x14DF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DF50u;
            // 0x14df54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DFD8u;
            goto label_14dfd8;
        }
    }
    ctx->pc = 0x14DF58u;
label_14df58:
    // 0x14df58: 0xc04db02  jal         func_136C08
label_14df5c:
    if (ctx->pc == 0x14DF5Cu) {
        ctx->pc = 0x14DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF58u;
        // 0x14df5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DF60u;
        goto label_14df60;
    }
    ctx->pc = 0x14DF58u;
    SET_GPR_U32(ctx, 31, 0x14DF60u);
    ctx->pc = 0x14DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF58u;
    // 0x14df5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x14DF58u, 0x14DF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF60u;
label_14df60:
    // 0x14df60: 0x10000003  b           . + 4 + (0x3 << 2)
label_14df64:
    if (ctx->pc == 0x14DF64u) {
        ctx->pc = 0x14DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF60u;
        // 0x14df64: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DF68u;
        goto label_14df68;
    }
    ctx->pc = 0x14DF60u;
    {
        const bool branch_taken_0x14df60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF60u;
        // 0x14df64: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df60) {
            ctx->pc = 0x14DF70u;
            goto label_14df70;
        }
    }
    ctx->pc = 0x14DF68u;
label_14df68:
    // 0x14df68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14df6c:
    // 0x14df6c: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x14df6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_14df70:
    // 0x14df70: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14df70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14df74:
    // 0x14df74: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x14df74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_14df78:
    // 0x14df78: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_14df7c:
    if (ctx->pc == 0x14DF7Cu) {
        ctx->pc = 0x14DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF78u;
        // 0x14df7c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DF80u;
        goto label_14df80;
    }
    ctx->pc = 0x14DF78u;
    {
        const bool branch_taken_0x14df78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14df78) {
            ctx->pc = 0x14DF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DF78u;
            // 0x14df7c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DFC8u;
            goto label_14dfc8;
        }
    }
    ctx->pc = 0x14DF80u;
label_14df80:
    // 0x14df80: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14df80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14df84:
    // 0x14df84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14df84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14df88:
    // 0x14df88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14df88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14df8c:
    // 0x14df8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14df90:
    // 0x14df90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14df90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14df94:
    // 0x14df94: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_14df98:
    if (ctx->pc == 0x14DF98u) {
        ctx->pc = 0x14DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF94u;
        // 0x14df98: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DF9Cu;
        goto label_14df9c;
    }
    ctx->pc = 0x14DF94u;
    {
        const bool branch_taken_0x14df94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14df94) {
            ctx->pc = 0x14DF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DF94u;
            // 0x14df98: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14df68;
        }
    }
    ctx->pc = 0x14DF9Cu;
label_14df9c:
    // 0x14df9c: 0xc053888  jal         func_14E220
label_14dfa0:
    if (ctx->pc == 0x14DFA0u) {
        ctx->pc = 0x14DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF9Cu;
        // 0x14dfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DFA4u;
        goto label_14dfa4;
    }
    ctx->pc = 0x14DF9Cu;
    SET_GPR_U32(ctx, 31, 0x14DFA4u);
    ctx->pc = 0x14DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF9Cu;
    // 0x14dfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E220u, 0x14DF9Cu, 0x14DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DFA4u;
label_14dfa4:
    // 0x14dfa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14dfa8:
    // 0x14dfa8: 0xc04d80c  jal         func_136030
label_14dfac:
    if (ctx->pc == 0x14DFACu) {
        ctx->pc = 0x14DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DFA8u;
        // 0x14dfac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DFB0u;
        goto label_14dfb0;
    }
    ctx->pc = 0x14DFA8u;
    SET_GPR_U32(ctx, 31, 0x14DFB0u);
    ctx->pc = 0x14DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DFA8u;
    // 0x14dfac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x14DFA8u, 0x14DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DFB0u;
label_14dfb0:
    // 0x14dfb0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x14dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14dfb4:
    // 0x14dfb4: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x14dfb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_14dfb8:
    // 0x14dfb8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14dfb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14dfbc:
    // 0x14dfbc: 0x5623ffea  bnel        $s1, $v1, . + 4 + (-0x16 << 2)
label_14dfc0:
    if (ctx->pc == 0x14DFC0u) {
        ctx->pc = 0x14DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DFBCu;
        // 0x14dfc0: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DFC4u;
        goto label_14dfc4;
    }
    ctx->pc = 0x14DFBCu;
    {
        const bool branch_taken_0x14dfbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x14dfbc) {
            ctx->pc = 0x14DFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DFBCu;
            // 0x14dfc0: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14df68;
        }
    }
    ctx->pc = 0x14DFC4u;
label_14dfc4:
    // 0x14dfc4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14dfc8:
    // 0x14dfc8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x14dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_14dfcc:
    // 0x14dfcc: 0x40f809  jalr        $v0
label_14dfd0:
    if (ctx->pc == 0x14DFD0u) {
        ctx->pc = 0x14DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DFCCu;
        // 0x14dfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DFD4u;
        goto label_14dfd4;
    }
    ctx->pc = 0x14DFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14DFD4u);
        ctx->pc = 0x14DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DFCCu;
        // 0x14dfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DFCCu, 0x14DFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14DFD4u;
label_14dfd4:
    // 0x14dfd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14dfd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14dfd8:
    // 0x14dfd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14dfd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14dfdc:
    // 0x14dfdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14dfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14dfe0:
    // 0x14dfe0: 0x3e00008  jr          $ra
label_14dfe4:
    if (ctx->pc == 0x14DFE4u) {
        ctx->pc = 0x14DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DFE0u;
        // 0x14dfe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DFE8u;
        goto label_fallthrough_0x14dfe0;
    }
    ctx->pc = 0x14DFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DFE0u;
        // 0x14dfe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14dfe0:
    ctx->pc = 0x14DFE8u;
}
