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

// Function: sub_0014BB38
// Address: 0x14bb38 - 0x14bbf0
void sub_0014BB38_0x14bb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BB38_0x14bb38");
#endif

    switch (ctx->pc) {
        case 0x14bb38u: goto label_14bb38;
        case 0x14bb3cu: goto label_14bb3c;
        case 0x14bb40u: goto label_14bb40;
        case 0x14bb44u: goto label_14bb44;
        case 0x14bb48u: goto label_14bb48;
        case 0x14bb4cu: goto label_14bb4c;
        case 0x14bb50u: goto label_14bb50;
        case 0x14bb54u: goto label_14bb54;
        case 0x14bb58u: goto label_14bb58;
        case 0x14bb5cu: goto label_14bb5c;
        case 0x14bb60u: goto label_14bb60;
        case 0x14bb64u: goto label_14bb64;
        case 0x14bb68u: goto label_14bb68;
        case 0x14bb6cu: goto label_14bb6c;
        case 0x14bb70u: goto label_14bb70;
        case 0x14bb74u: goto label_14bb74;
        case 0x14bb78u: goto label_14bb78;
        case 0x14bb7cu: goto label_14bb7c;
        case 0x14bb80u: goto label_14bb80;
        case 0x14bb84u: goto label_14bb84;
        case 0x14bb88u: goto label_14bb88;
        case 0x14bb8cu: goto label_14bb8c;
        case 0x14bb90u: goto label_14bb90;
        case 0x14bb94u: goto label_14bb94;
        case 0x14bb98u: goto label_14bb98;
        case 0x14bb9cu: goto label_14bb9c;
        case 0x14bba0u: goto label_14bba0;
        case 0x14bba4u: goto label_14bba4;
        case 0x14bba8u: goto label_14bba8;
        case 0x14bbacu: goto label_14bbac;
        case 0x14bbb0u: goto label_14bbb0;
        case 0x14bbb4u: goto label_14bbb4;
        case 0x14bbb8u: goto label_14bbb8;
        case 0x14bbbcu: goto label_14bbbc;
        case 0x14bbc0u: goto label_14bbc0;
        case 0x14bbc4u: goto label_14bbc4;
        case 0x14bbc8u: goto label_14bbc8;
        case 0x14bbccu: goto label_14bbcc;
        case 0x14bbd0u: goto label_14bbd0;
        case 0x14bbd4u: goto label_14bbd4;
        case 0x14bbd8u: goto label_14bbd8;
        case 0x14bbdcu: goto label_14bbdc;
        case 0x14bbe0u: goto label_14bbe0;
        case 0x14bbe4u: goto label_14bbe4;
        case 0x14bbe8u: goto label_14bbe8;
        case 0x14bbecu: goto label_14bbec;
        default: break;
    }

    ctx->pc = 0x14bb38u;

label_14bb38:
    // 0x14bb38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14bb3c:
    // 0x14bb3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14bb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14bb40:
    // 0x14bb40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14bb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14bb44:
    // 0x14bb44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14bb44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14bb48:
    // 0x14bb48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14bb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14bb4c:
    // 0x14bb4c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x14bb4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_14bb50:
    // 0x14bb50: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_14bb54:
    if (ctx->pc == 0x14BB54u) {
        ctx->pc = 0x14BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB50u;
        // 0x14bb54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BB58u;
        goto label_14bb58;
    }
    ctx->pc = 0x14BB50u;
    {
        const bool branch_taken_0x14bb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bb50) {
            ctx->pc = 0x14BB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BB50u;
            // 0x14bb54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBE0u;
            goto label_14bbe0;
        }
    }
    ctx->pc = 0x14BB58u;
label_14bb58:
    // 0x14bb58: 0xc04db02  jal         func_136C08
label_14bb5c:
    if (ctx->pc == 0x14BB5Cu) {
        ctx->pc = 0x14BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB58u;
        // 0x14bb5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BB60u;
        goto label_14bb60;
    }
    ctx->pc = 0x14BB58u;
    SET_GPR_U32(ctx, 31, 0x14BB60u);
    ctx->pc = 0x14BB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB58u;
    // 0x14bb5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x14BB58u, 0x14BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB60u;
label_14bb60:
    // 0x14bb60: 0x10000003  b           . + 4 + (0x3 << 2)
label_14bb64:
    if (ctx->pc == 0x14BB64u) {
        ctx->pc = 0x14BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB60u;
        // 0x14bb64: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BB68u;
        goto label_14bb68;
    }
    ctx->pc = 0x14BB60u;
    {
        const bool branch_taken_0x14bb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB60u;
        // 0x14bb64: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb60) {
            ctx->pc = 0x14BB70u;
            goto label_14bb70;
        }
    }
    ctx->pc = 0x14BB68u;
label_14bb68:
    // 0x14bb68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14bb6c:
    // 0x14bb6c: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x14bb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_14bb70:
    // 0x14bb70: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14bb70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14bb74:
    // 0x14bb74: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x14bb74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_14bb78:
    // 0x14bb78: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_14bb7c:
    if (ctx->pc == 0x14BB7Cu) {
        ctx->pc = 0x14BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB78u;
        // 0x14bb7c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BB80u;
        goto label_14bb80;
    }
    ctx->pc = 0x14BB78u;
    {
        const bool branch_taken_0x14bb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bb78) {
            ctx->pc = 0x14BB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BB78u;
            // 0x14bb7c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBD0u;
            goto label_14bbd0;
        }
    }
    ctx->pc = 0x14BB80u;
label_14bb80:
    // 0x14bb80: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14bb80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14bb84:
    // 0x14bb84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14bb88:
    // 0x14bb88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14bb8c:
    // 0x14bb8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14bb90:
    // 0x14bb90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14bb94:
    // 0x14bb94: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_14bb98:
    if (ctx->pc == 0x14BB98u) {
        ctx->pc = 0x14BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB94u;
        // 0x14bb98: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BB9Cu;
        goto label_14bb9c;
    }
    ctx->pc = 0x14BB94u;
    {
        const bool branch_taken_0x14bb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bb94) {
            ctx->pc = 0x14BB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BB94u;
            // 0x14bb98: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bb68;
        }
    }
    ctx->pc = 0x14BB9Cu;
label_14bb9c:
    // 0x14bb9c: 0xc052fa0  jal         func_14BE80
label_14bba0:
    if (ctx->pc == 0x14BBA0u) {
        ctx->pc = 0x14BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB9Cu;
        // 0x14bba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BBA4u;
        goto label_14bba4;
    }
    ctx->pc = 0x14BB9Cu;
    SET_GPR_U32(ctx, 31, 0x14BBA4u);
    ctx->pc = 0x14BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB9Cu;
    // 0x14bba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE80u, 0x14BB9Cu, 0x14BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBA4u;
label_14bba4:
    // 0x14bba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bba8:
    // 0x14bba8: 0xc04d80c  jal         func_136030
label_14bbac:
    if (ctx->pc == 0x14BBACu) {
        ctx->pc = 0x14BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBA8u;
        // 0x14bbac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BBB0u;
        goto label_14bbb0;
    }
    ctx->pc = 0x14BBA8u;
    SET_GPR_U32(ctx, 31, 0x14BBB0u);
    ctx->pc = 0x14BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBA8u;
    // 0x14bbac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x14BBA8u, 0x14BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBB0u;
label_14bbb0:
    // 0x14bbb0: 0xc04d832  jal         func_1360C8
label_14bbb4:
    if (ctx->pc == 0x14BBB4u) {
        ctx->pc = 0x14BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBB0u;
        // 0x14bbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BBB8u;
        goto label_14bbb8;
    }
    ctx->pc = 0x14BBB0u;
    SET_GPR_U32(ctx, 31, 0x14BBB8u);
    ctx->pc = 0x14BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBB0u;
    // 0x14bbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360C8u, 0x14BBB0u, 0x14BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBB8u;
label_14bbb8:
    // 0x14bbb8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x14bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14bbbc:
    // 0x14bbbc: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x14bbbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_14bbc0:
    // 0x14bbc0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14bbc0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14bbc4:
    // 0x14bbc4: 0x5623ffe8  bnel        $s1, $v1, . + 4 + (-0x18 << 2)
label_14bbc8:
    if (ctx->pc == 0x14BBC8u) {
        ctx->pc = 0x14BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBC4u;
        // 0x14bbc8: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BBCCu;
        goto label_14bbcc;
    }
    ctx->pc = 0x14BBC4u;
    {
        const bool branch_taken_0x14bbc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x14bbc4) {
            ctx->pc = 0x14BBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BBC4u;
            // 0x14bbc8: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bb68;
        }
    }
    ctx->pc = 0x14BBCCu;
label_14bbcc:
    // 0x14bbcc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14bbd0:
    // 0x14bbd0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x14bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_14bbd4:
    // 0x14bbd4: 0x40f809  jalr        $v0
label_14bbd8:
    if (ctx->pc == 0x14BBD8u) {
        ctx->pc = 0x14BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBD4u;
        // 0x14bbd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BBDCu;
        goto label_14bbdc;
    }
    ctx->pc = 0x14BBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14BBDCu);
        ctx->pc = 0x14BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBD4u;
        // 0x14bbd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BBD4u, 0x14BBDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14BBDCu;
label_14bbdc:
    // 0x14bbdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14bbdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14bbe0:
    // 0x14bbe0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14bbe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14bbe4:
    // 0x14bbe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14bbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14bbe8:
    // 0x14bbe8: 0x3e00008  jr          $ra
label_14bbec:
    if (ctx->pc == 0x14BBECu) {
        ctx->pc = 0x14BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBE8u;
        // 0x14bbec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BBF0u;
        goto label_fallthrough_0x14bbe8;
    }
    ctx->pc = 0x14BBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBE8u;
        // 0x14bbec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14bbe8:
    ctx->pc = 0x14BBF0u;
}
