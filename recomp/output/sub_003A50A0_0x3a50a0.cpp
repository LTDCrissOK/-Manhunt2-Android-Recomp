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

// Function: sub_003A50A0
// Address: 0x3a50a0 - 0x3a5230
void sub_003A50A0_0x3a50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A50A0_0x3a50a0");
#endif

    switch (ctx->pc) {
        case 0x3a50f0u: goto label_3a50f0;
        case 0x3a5124u: goto label_3a5124;
        case 0x3a512cu: goto label_3a512c;
        case 0x3a5130u: goto label_3a5130;
        case 0x3a5138u: goto label_3a5138;
        case 0x3a5148u: goto label_3a5148;
        case 0x3a5150u: goto label_3a5150;
        case 0x3a515cu: goto label_3a515c;
        case 0x3a5174u: goto label_3a5174;
        case 0x3a5194u: goto label_3a5194;
        case 0x3a51b0u: goto label_3a51b0;
        case 0x3a51c0u: goto label_3a51c0;
        case 0x3a51e0u: goto label_3a51e0;
        case 0x3a51fcu: goto label_3a51fc;
        default: break;
    }

    ctx->pc = 0x3a50a0u;

    // 0x3a50a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a50a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3a50a4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x3a50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x3a50a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3a50a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a50ac: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3a50acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x3a50b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3a50b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a50b4: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x3a50b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x3a50b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a50b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a50bc: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x3a50bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x3a50c0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3a50c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a50c4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3a50c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3a50c8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x3a50c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x3a50cc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3a50ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x3a50d0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x3a50d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x3a50d4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x3a50d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x3a50d8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x3a50d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x3a50dc: 0x1ac0003c  blez        $s6, . + 4 + (0x3C << 2)
    ctx->pc = 0x3A50DCu;
    {
        const bool branch_taken_0x3a50dc = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3A50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50DCu;
        // 0x3a50e0: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50dc) {
            ctx->pc = 0x3A51D0u;
            goto label_3a51d0;
        }
    }
    ctx->pc = 0x3A50E4u;
    // 0x3a50e4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a50e8: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3a50e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a50ec: 0x245e3780  addiu       $fp, $v0, 0x3780
    ctx->pc = 0x3a50ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 14208));
label_3a50f0:
    // 0x3a50f0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3a50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3a50f4: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3a50f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3a50f8: 0x542018  mult        $a0, $v0, $s4
    ctx->pc = 0x3a50f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3a50fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3a50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3a5100: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x3a5100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x3a5104: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a5104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a5108: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x3a5108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3a510c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3a510cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a5110: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A5110u;
    {
        const bool branch_taken_0x3a5110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5110u;
        // 0x3a5114: 0x3c130041  lui         $s3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5110) {
            ctx->pc = 0x3A51C0u;
            goto label_3a51c0;
        }
    }
    ctx->pc = 0x3A5118u;
    // 0x3a5118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a5118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a511c: 0xc0e92ec  jal         func_3A4BB0
    ctx->pc = 0x3A511Cu;
    SET_GPR_U32(ctx, 31, 0x3A5124u);
    ctx->pc = 0x3A5120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A511Cu;
    // 0x3a5120: 0x266538a8  addiu       $a1, $s3, 0x38A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 14504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BB0u, 0x3A511Cu, 0x3A5124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5124u;
label_3a5124:
    // 0x3a5124: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5124u;
    SET_GPR_U32(ctx, 31, 0x3A512Cu);
    ctx->pc = 0x3A5128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5124u;
    // 0x3a5128: 0x34049400  ori         $a0, $zero, 0x9400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5124u, 0x3A512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A512Cu;
label_3a512c:
    // 0x3a512c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3a512cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a5130:
    // 0x3a5130: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3A5130u;
    SET_GPR_U32(ctx, 31, 0x3A5138u);
    ctx->pc = 0x3A5134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5130u;
    // 0x3a5134: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3A5130u, 0x3A5138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5138u;
label_3a5138:
    // 0x3a5138: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3A5138u;
    {
        const bool branch_taken_0x3a5138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3a5138) {
            ctx->pc = 0x3A5130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5130;
        }
    }
    ctx->pc = 0x3A5140u;
    // 0x3a5140: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5140u;
    SET_GPR_U32(ctx, 31, 0x3A5148u);
    ctx->pc = 0x3A5144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5140u;
    // 0x3a5144: 0x34049401  ori         $a0, $zero, 0x9401 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37889);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5140u, 0x3A5148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5148u;
label_3a5148:
    // 0x3a5148: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5148u;
    SET_GPR_U32(ctx, 31, 0x3A5150u);
    ctx->pc = 0x3A514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5148u;
    // 0x3a514c: 0x34049500  ori         $a0, $zero, 0x9500 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5148u, 0x3A5150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5150u;
label_3a5150:
    // 0x3a5150: 0x266538a8  addiu       $a1, $s3, 0x38A8
    ctx->pc = 0x3a5150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 14504));
    // 0x3a5154: 0xc0e8ffc  jal         func_3A3FF0
    ctx->pc = 0x3A5154u;
    SET_GPR_U32(ctx, 31, 0x3A515Cu);
    ctx->pc = 0x3A5158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5154u;
    // 0x3a5158: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FF0u, 0x3A5154u, 0x3A515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A515Cu;
label_3a515c:
    // 0x3a515c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5160: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3A5160u;
    {
        const bool branch_taken_0x3a5160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a5160) {
            ctx->pc = 0x3A5164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5160u;
            // 0x3a5164: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A51A0u;
            goto label_3a51a0;
        }
    }
    ctx->pc = 0x3A5168u;
    // 0x3a5168: 0x34049501  ori         $a0, $zero, 0x9501
    ctx->pc = 0x3a5168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38145);
    // 0x3a516c: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A516Cu;
    SET_GPR_U32(ctx, 31, 0x3A5174u);
    ctx->pc = 0x3A5170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A516Cu;
    // 0x3a5170: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A516Cu, 0x3A5174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5174u;
label_3a5174:
    // 0x3a5174: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3a5174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3a5178: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3a5178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a517c: 0x2444d968  addiu       $a0, $v0, -0x2698
    ctx->pc = 0x3a517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957416));
    // 0x3a5180: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3a5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a5184: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a5184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5188: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3a5188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x3a518c: 0xc0e5ea0  jal         func_397A80
    ctx->pc = 0x3A518Cu;
    SET_GPR_U32(ctx, 31, 0x3A5194u);
    ctx->pc = 0x3A5190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A518Cu;
    // 0x3a5190: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A80u, 0x3A518Cu, 0x3A5194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5194u;
label_3a5194:
    // 0x3a5194: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A5194u;
    {
        const bool branch_taken_0x3a5194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5194u;
        // 0x3a5198: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5194) {
            ctx->pc = 0x3A51C4u;
            goto label_3a51c4;
        }
    }
    ctx->pc = 0x3A519Cu;
    // 0x3a519c: 0x0  nop
    ctx->pc = 0x3a519cu;
    // NOP
label_3a51a0:
    // 0x3a51a0: 0x34049502  ori         $a0, $zero, 0x9502
    ctx->pc = 0x3a51a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38146);
    // 0x3a51a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a51a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a51a8: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A51A8u;
    SET_GPR_U32(ctx, 31, 0x3A51B0u);
    ctx->pc = 0x3A51ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A51A8u;
    // 0x3a51ac: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A51A8u, 0x3A51B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A51B0u;
label_3a51b0:
    // 0x3a51b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3a51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3a51b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a51b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a51b8: 0xc0e5ea0  jal         func_397A80
    ctx->pc = 0x3A51B8u;
    SET_GPR_U32(ctx, 31, 0x3A51C0u);
    ctx->pc = 0x3A51BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A51B8u;
    // 0x3a51bc: 0x2444d980  addiu       $a0, $v0, -0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A80u, 0x3A51B8u, 0x3A51C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A51C0u;
label_3a51c0:
    // 0x3a51c0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3a51c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3a51c4:
    // 0x3a51c4: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x3a51c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x3a51c8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x3A51C8u;
    {
        const bool branch_taken_0x3a51c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51C8u;
        // 0x3a51cc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51c8) {
            ctx->pc = 0x3A50F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a50f0;
        }
    }
    ctx->pc = 0x3A51D0u;
label_3a51d0:
    // 0x3a51d0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a51d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a51d4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3a51d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a51d8: 0xc0e5ea0  jal         func_397A80
    ctx->pc = 0x3A51D8u;
    SET_GPR_U32(ctx, 31, 0x3A51E0u);
    ctx->pc = 0x3A51DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A51D8u;
    // 0x3a51dc: 0x2484d998  addiu       $a0, $a0, -0x2668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A80u, 0x3A51D8u, 0x3A51E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A51E0u;
label_3a51e0:
    // 0x3a51e0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3a51e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a51e4: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A51E4u;
    {
        const bool branch_taken_0x3a51e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51E4u;
        // 0x3a51e8: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51e4) {
            ctx->pc = 0x3A5200u;
            goto label_3a5200;
        }
    }
    ctx->pc = 0x3A51ECu;
    // 0x3a51ec: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a51ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a51f0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3a51f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a51f4: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A51F4u;
    SET_GPR_U32(ctx, 31, 0x3A51FCu);
    ctx->pc = 0x3A51F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A51F4u;
    // 0x3a51f8: 0x2484d9b0  addiu       $a0, $a0, -0x2650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A51F4u, 0x3A51FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A51FCu;
label_3a51fc:
    // 0x3a51fc: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x3a51fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3a5200:
    // 0x3a5200: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3a5200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a5204: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3a5204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3a5208: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3a5208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a520c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x3a520cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3a5210: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3a5210u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a5214: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x3a5214u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3a5218: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x3a5218u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a521c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x3a521cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3a5220: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x3a5220u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a5224: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x3a5224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3a5228: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5228u;
        // 0x3a522c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5230u;
}
