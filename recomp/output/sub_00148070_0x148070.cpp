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

// Function: sub_00148070
// Address: 0x148070 - 0x148130
void sub_00148070_0x148070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148070_0x148070");
#endif

    switch (ctx->pc) {
        case 0x148070u: goto label_148070;
        case 0x148074u: goto label_148074;
        case 0x148078u: goto label_148078;
        case 0x14807cu: goto label_14807c;
        case 0x148080u: goto label_148080;
        case 0x148084u: goto label_148084;
        case 0x148088u: goto label_148088;
        case 0x14808cu: goto label_14808c;
        case 0x148090u: goto label_148090;
        case 0x148094u: goto label_148094;
        case 0x148098u: goto label_148098;
        case 0x14809cu: goto label_14809c;
        case 0x1480a0u: goto label_1480a0;
        case 0x1480a4u: goto label_1480a4;
        case 0x1480a8u: goto label_1480a8;
        case 0x1480acu: goto label_1480ac;
        case 0x1480b0u: goto label_1480b0;
        case 0x1480b4u: goto label_1480b4;
        case 0x1480b8u: goto label_1480b8;
        case 0x1480bcu: goto label_1480bc;
        case 0x1480c0u: goto label_1480c0;
        case 0x1480c4u: goto label_1480c4;
        case 0x1480c8u: goto label_1480c8;
        case 0x1480ccu: goto label_1480cc;
        case 0x1480d0u: goto label_1480d0;
        case 0x1480d4u: goto label_1480d4;
        case 0x1480d8u: goto label_1480d8;
        case 0x1480dcu: goto label_1480dc;
        case 0x1480e0u: goto label_1480e0;
        case 0x1480e4u: goto label_1480e4;
        case 0x1480e8u: goto label_1480e8;
        case 0x1480ecu: goto label_1480ec;
        case 0x1480f0u: goto label_1480f0;
        case 0x1480f4u: goto label_1480f4;
        case 0x1480f8u: goto label_1480f8;
        case 0x1480fcu: goto label_1480fc;
        case 0x148100u: goto label_148100;
        case 0x148104u: goto label_148104;
        case 0x148108u: goto label_148108;
        case 0x14810cu: goto label_14810c;
        case 0x148110u: goto label_148110;
        case 0x148114u: goto label_148114;
        case 0x148118u: goto label_148118;
        case 0x14811cu: goto label_14811c;
        case 0x148120u: goto label_148120;
        case 0x148124u: goto label_148124;
        case 0x148128u: goto label_148128;
        case 0x14812cu: goto label_14812c;
        default: break;
    }

    ctx->pc = 0x148070u;

label_148070:
    // 0x148070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_148074:
    // 0x148074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x148074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_148078:
    // 0x148078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x148078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14807c:
    // 0x14807c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14807cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148080:
    // 0x148080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_148084:
    // 0x148084: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x148084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_148088:
    // 0x148088: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_14808c:
    if (ctx->pc == 0x14808Cu) {
        ctx->pc = 0x14808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148088u;
        // 0x14808c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148090u;
        goto label_148090;
    }
    ctx->pc = 0x148088u;
    {
        const bool branch_taken_0x148088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148088) {
            ctx->pc = 0x14808Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148088u;
            // 0x14808c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14811Cu;
            goto label_14811c;
        }
    }
    ctx->pc = 0x148090u;
label_148090:
    // 0x148090: 0xc04db02  jal         func_136C08
label_148094:
    if (ctx->pc == 0x148094u) {
        ctx->pc = 0x148094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148090u;
        // 0x148094: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148098u;
        goto label_148098;
    }
    ctx->pc = 0x148090u;
    SET_GPR_U32(ctx, 31, 0x148098u);
    ctx->pc = 0x148094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148090u;
    // 0x148094: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x148090u, 0x148098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148098u;
label_148098:
    // 0x148098: 0x10000003  b           . + 4 + (0x3 << 2)
label_14809c:
    if (ctx->pc == 0x14809Cu) {
        ctx->pc = 0x14809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148098u;
        // 0x14809c: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1480A0u;
        goto label_1480a0;
    }
    ctx->pc = 0x148098u;
    {
        const bool branch_taken_0x148098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148098u;
        // 0x14809c: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148098) {
            ctx->pc = 0x1480A8u;
            goto label_1480a8;
        }
    }
    ctx->pc = 0x1480A0u;
label_1480a0:
    // 0x1480a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1480a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1480a4:
    // 0x1480a4: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x1480a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_1480a8:
    // 0x1480a8: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1480a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1480ac:
    // 0x1480ac: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x1480acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1480b0:
    // 0x1480b0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_1480b4:
    if (ctx->pc == 0x1480B4u) {
        ctx->pc = 0x1480B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480B0u;
        // 0x1480b4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1480B8u;
        goto label_1480b8;
    }
    ctx->pc = 0x1480B0u;
    {
        const bool branch_taken_0x1480b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1480b0) {
            ctx->pc = 0x1480B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1480B0u;
            // 0x1480b4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14810Cu;
            goto label_14810c;
        }
    }
    ctx->pc = 0x1480B8u;
label_1480b8:
    // 0x1480b8: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1480b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1480bc:
    // 0x1480bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1480bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1480c0:
    // 0x1480c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1480c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1480c4:
    // 0x1480c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1480c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1480c8:
    // 0x1480c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1480c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1480cc:
    // 0x1480cc: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_1480d0:
    if (ctx->pc == 0x1480D0u) {
        ctx->pc = 0x1480D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480CCu;
        // 0x1480d0: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1480D4u;
        goto label_1480d4;
    }
    ctx->pc = 0x1480CCu;
    {
        const bool branch_taken_0x1480cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1480cc) {
            ctx->pc = 0x1480D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1480CCu;
            // 0x1480d0: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1480A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1480a0;
        }
    }
    ctx->pc = 0x1480D4u;
label_1480d4:
    // 0x1480d4: 0xc05216e  jal         func_1485B8
label_1480d8:
    if (ctx->pc == 0x1480D8u) {
        ctx->pc = 0x1480D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480D4u;
        // 0x1480d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1480DCu;
        goto label_1480dc;
    }
    ctx->pc = 0x1480D4u;
    SET_GPR_U32(ctx, 31, 0x1480DCu);
    ctx->pc = 0x1480D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1480D4u;
    // 0x1480d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1485B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1485B8u, 0x1480D4u, 0x1480DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1480DCu;
label_1480dc:
    // 0x1480dc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1480dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1480e0:
    // 0x1480e0: 0xc05243a  jal         func_1490E8
label_1480e4:
    if (ctx->pc == 0x1480E4u) {
        ctx->pc = 0x1480E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480E0u;
        // 0x1480e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1480E8u;
        goto label_1480e8;
    }
    ctx->pc = 0x1480E0u;
    SET_GPR_U32(ctx, 31, 0x1480E8u);
    ctx->pc = 0x1480E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1480E0u;
    // 0x1480e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490E8u, 0x1480E0u, 0x1480E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1480E8u;
label_1480e8:
    // 0x1480e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1480e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1480ec:
    // 0x1480ec: 0xc04d80c  jal         func_136030
label_1480f0:
    if (ctx->pc == 0x1480F0u) {
        ctx->pc = 0x1480F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480ECu;
        // 0x1480f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1480F4u;
        goto label_1480f4;
    }
    ctx->pc = 0x1480ECu;
    SET_GPR_U32(ctx, 31, 0x1480F4u);
    ctx->pc = 0x1480F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1480ECu;
    // 0x1480f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x1480ECu, 0x1480F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1480F4u;
label_1480f4:
    // 0x1480f4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1480f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1480f8:
    // 0x1480f8: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x1480f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1480fc:
    // 0x1480fc: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1480fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_148100:
    // 0x148100: 0x5623ffe7  bnel        $s1, $v1, . + 4 + (-0x19 << 2)
label_148104:
    if (ctx->pc == 0x148104u) {
        ctx->pc = 0x148104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148100u;
        // 0x148104: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148108u;
        goto label_148108;
    }
    ctx->pc = 0x148100u;
    {
        const bool branch_taken_0x148100 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x148100) {
            ctx->pc = 0x148104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148100u;
            // 0x148104: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1480A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1480a0;
        }
    }
    ctx->pc = 0x148108u;
label_148108:
    // 0x148108: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x148108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14810c:
    // 0x14810c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x14810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_148110:
    // 0x148110: 0x40f809  jalr        $v0
label_148114:
    if (ctx->pc == 0x148114u) {
        ctx->pc = 0x148114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148110u;
        // 0x148114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148118u;
        goto label_148118;
    }
    ctx->pc = 0x148110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x148118u);
        ctx->pc = 0x148114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148110u;
        // 0x148114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148110u, 0x148118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148118u;
label_148118:
    // 0x148118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x148118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14811c:
    // 0x14811c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14811cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_148120:
    // 0x148120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_148124:
    // 0x148124: 0x3e00008  jr          $ra
label_148128:
    if (ctx->pc == 0x148128u) {
        ctx->pc = 0x148128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148124u;
        // 0x148128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14812Cu;
        goto label_14812c;
    }
    ctx->pc = 0x148124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148124u;
        // 0x148128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14812Cu;
label_14812c:
    // 0x14812c: 0x0  nop
    ctx->pc = 0x14812cu;
    // NOP
    ctx->pc = 0x148130u;
}
