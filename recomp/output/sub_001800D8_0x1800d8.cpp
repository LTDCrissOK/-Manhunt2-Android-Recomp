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

// Function: sub_001800D8
// Address: 0x1800d8 - 0x180218
void sub_001800D8_0x1800d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001800D8_0x1800d8");
#endif

    switch (ctx->pc) {
        case 0x180140u: goto label_180140;
        case 0x180158u: goto label_180158;
        case 0x180174u: goto label_180174;
        case 0x180184u: goto label_180184;
        case 0x180190u: goto label_180190;
        case 0x18019cu: goto label_18019c;
        case 0x1801acu: goto label_1801ac;
        case 0x1801b8u: goto label_1801b8;
        case 0x1801ccu: goto label_1801cc;
        default: break;
    }

    ctx->pc = 0x1800d8u;

    // 0x1800d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1800d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1800dc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1800dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1800e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1800e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1800e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1800e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1800e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1800ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1800ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1800f0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1800f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1800f4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1800f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1800f8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1800f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1800fc: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1800fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x180100: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x180100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x180104: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x180104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x180108: 0x92620410  lbu         $v0, 0x410($s3)
    ctx->pc = 0x180108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1040)));
    // 0x18010c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x18010Cu;
    {
        const bool branch_taken_0x18010c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18010Cu;
        // 0x180110: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18010c) {
            ctx->pc = 0x1801E8u;
            goto label_1801e8;
        }
    }
    ctx->pc = 0x180114u;
    // 0x180114: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x180114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x180118: 0x8cb700b0  lw          $s7, 0xB0($a1)
    ctx->pc = 0x180118u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x18011c: 0x12e00032  beqz        $s7, . + 4 + (0x32 << 2)
    ctx->pc = 0x18011Cu;
    {
        const bool branch_taken_0x18011c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x180120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18011Cu;
        // 0x180120: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18011c) {
            ctx->pc = 0x1801E8u;
            goto label_1801e8;
        }
    }
    ctx->pc = 0x180124u;
    // 0x180124: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x180124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x180128: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x180128u;
    {
        const bool branch_taken_0x180128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180128u;
        // 0x18012c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180128) {
            ctx->pc = 0x1801E8u;
            goto label_1801e8;
        }
    }
    ctx->pc = 0x180130u;
    // 0x180130: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x180130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x180134: 0x245eb060  addiu       $fp, $v0, -0x4FA0
    ctx->pc = 0x180134u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x180138: 0x14a940  sll         $s5, $s4, 5
    ctx->pc = 0x180138u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x18013c: 0x0  nop
    ctx->pc = 0x18013cu;
    // NOP
label_180140:
    // 0x180140: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x180140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180144: 0x2758821  addu        $s1, $s3, $s5
    ctx->pc = 0x180144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x180148: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x180148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18014c: 0x8e360020  lw          $s6, 0x20($s1)
    ctx->pc = 0x18014cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x180150: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x180150u;
    SET_GPR_U32(ctx, 31, 0x180158u);
    ctx->pc = 0x180154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180150u;
    // 0x180154: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x180150u, 0x180158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180158u;
label_180158:
    // 0x180158: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x180158u;
    {
        const bool branch_taken_0x180158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180158u;
        // 0x18015c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180158) {
            ctx->pc = 0x1801CCu;
            goto label_1801cc;
        }
    }
    ctx->pc = 0x180160u;
    // 0x180160: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x180160u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x180164: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x180164u;
    {
        const bool branch_taken_0x180164 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x180168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180164u;
        // 0x180168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180164) {
            ctx->pc = 0x1801CCu;
            goto label_1801cc;
        }
    }
    ctx->pc = 0x18016Cu;
    // 0x18016c: 0xc060086  jal         func_180218
    ctx->pc = 0x18016Cu;
    SET_GPR_U32(ctx, 31, 0x180174u);
    ctx->pc = 0x180170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18016Cu;
    // 0x180170: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180218u, 0x18016Cu, 0x180174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180174u;
label_180174:
    // 0x180174: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18017c: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x18017Cu;
    SET_GPR_U32(ctx, 31, 0x180184u);
    ctx->pc = 0x180180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18017Cu;
    // 0x180180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x18017Cu, 0x180184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180184u;
label_180184:
    // 0x180184: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x180184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180188: 0xc046190  jal         func_118640
    ctx->pc = 0x180188u;
    SET_GPR_U32(ctx, 31, 0x180190u);
    ctx->pc = 0x18018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180188u;
    // 0x18018c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x180188u, 0x180190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180190u;
label_180190:
    // 0x180190: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x180190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x180194: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x180194u;
    SET_GPR_U32(ctx, 31, 0x18019Cu);
    ctx->pc = 0x180198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180194u;
    // 0x180198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x180194u, 0x18019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18019Cu;
label_18019c:
    // 0x18019c: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x18019cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1801a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1801a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801a4: 0xc046058  jal         func_118160
    ctx->pc = 0x1801A4u;
    SET_GPR_U32(ctx, 31, 0x1801ACu);
    ctx->pc = 0x1801A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801A4u;
    // 0x1801a8: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x1801A4u, 0x1801ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1801ACu;
label_1801ac:
    // 0x1801ac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1801acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1801b0: 0xc0461e8  jal         func_1187A0
    ctx->pc = 0x1801B0u;
    SET_GPR_U32(ctx, 31, 0x1801B8u);
    ctx->pc = 0x1801B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801B0u;
    // 0x1801b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x1801B0u, 0x1801B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1801B8u;
label_1801b8:
    // 0x1801b8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1801b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1801bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1801c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801c4: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x1801C4u;
    SET_GPR_U32(ctx, 31, 0x1801CCu);
    ctx->pc = 0x1801C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801C4u;
    // 0x1801c8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x1801C4u, 0x1801CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1801CCu;
label_1801cc:
    // 0x1801cc: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1801ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1801d0: 0x92620410  lbu         $v0, 0x410($s3)
    ctx->pc = 0x1801d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1040)));
    // 0x1801d4: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x1801d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1801d8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1801d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1801dc: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1801DCu;
    {
        const bool branch_taken_0x1801dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1801E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801DCu;
        // 0x1801e0: 0x14a940  sll         $s5, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801dc) {
            ctx->pc = 0x180140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180140;
        }
    }
    ctx->pc = 0x1801E4u;
    // 0x1801e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1801e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1801e8:
    // 0x1801e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1801e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1801ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1801ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1801f0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1801f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1801f4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1801f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1801f8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1801f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1801fc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1801fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180200: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x180200u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x180204: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x180204u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180208: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x180208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18020c: 0x3e00008  jr          $ra
    ctx->pc = 0x18020Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18020Cu;
        // 0x180210: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18020Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180214u;
    // 0x180214: 0x0  nop
    ctx->pc = 0x180214u;
    // NOP
    ctx->pc = 0x180218u;
}
