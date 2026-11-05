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

// Function: sub_001EE618
// Address: 0x1ee618 - 0x1eea30
void sub_001EE618_0x1ee618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE618_0x1ee618");
#endif

    switch (ctx->pc) {
        case 0x1ee6d4u: goto label_1ee6d4;
        case 0x1ee6e0u: goto label_1ee6e0;
        case 0x1ee6f4u: goto label_1ee6f4;
        case 0x1ee764u: goto label_1ee764;
        case 0x1ee904u: goto label_1ee904;
        case 0x1ee914u: goto label_1ee914;
        case 0x1ee9e0u: goto label_1ee9e0;
        default: break;
    }

    ctx->pc = 0x1ee618u;

    // 0x1ee618: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ee618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ee61c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ee61cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ee620: 0x8c629214  lw          $v0, -0x6DEC($v1)
    ctx->pc = 0x1ee620u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9214u));
    // 0x1ee624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ee624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ee628: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ee628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ee62c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ee62cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee630: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ee630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1ee634: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ee634u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ee63c: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1ee63cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee640: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ee640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ee644: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1ee644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ee648: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ee648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ee64c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ee64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ee650: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ee650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ee654: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE654u;
    {
        const bool branch_taken_0x1ee654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE654u;
        // 0x1ee658: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee654) {
            ctx->pc = 0x1EE664u;
            goto label_1ee664;
        }
    }
    ctx->pc = 0x1EE65Cu;
    // 0x1ee65c: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x1EE65Cu;
    {
        const bool branch_taken_0x1ee65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE65Cu;
        // 0x1ee660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee65c) {
            ctx->pc = 0x1EEA04u;
            goto label_1eea04;
        }
    }
    ctx->pc = 0x1EE664u;
label_1ee664:
    // 0x1ee664: 0x90f40008  lbu         $s4, 0x8($a3)
    ctx->pc = 0x1ee664u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ee668: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ee668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee66c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1ee66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ee670: 0x16820008  bne         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE670u;
    {
        const bool branch_taken_0x1ee670 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE670u;
        // 0x1ee674: 0x90f60009  lbu         $s6, 0x9($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee670) {
            ctx->pc = 0x1EE694u;
            goto label_1ee694;
        }
    }
    ctx->pc = 0x1EE678u;
    // 0x1ee678: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1ee678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ee67c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1ee67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1ee680: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x1ee680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x1ee684: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1ee684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1ee688: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1ee688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ee68c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EE68Cu;
    {
        const bool branch_taken_0x1ee68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE68Cu;
        // 0x1ee690: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee68c) {
            ctx->pc = 0x1EE6B8u;
            goto label_1ee6b8;
        }
    }
    ctx->pc = 0x1EE694u;
label_1ee694:
    // 0x1ee694: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE694u;
    {
        const bool branch_taken_0x1ee694 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee694) {
            ctx->pc = 0x1EE6B8u;
            goto label_1ee6b8;
        }
    }
    ctx->pc = 0x1EE69Cu;
    // 0x1ee69c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1ee69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ee6a0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1ee6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1ee6a4: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x1ee6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x1ee6a8: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1ee6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1ee6ac: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1ee6acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ee6b0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1ee6b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6b4: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x1ee6b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_1ee6b8:
    // 0x1ee6b8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE6B8u;
    {
        const bool branch_taken_0x1ee6b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6B8u;
        // 0x1ee6bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee6b8) {
            ctx->pc = 0x1EE6C4u;
            goto label_1ee6c4;
        }
    }
    ctx->pc = 0x1EE6C0u;
    // 0x1ee6c0: 0x8e500274  lw          $s0, 0x274($s2)
    ctx->pc = 0x1ee6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_1ee6c4:
    // 0x1ee6c4: 0x120000cf  beqz        $s0, . + 4 + (0xCF << 2)
    ctx->pc = 0x1EE6C4u;
    {
        const bool branch_taken_0x1ee6c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6C4u;
        // 0x1ee6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee6c4) {
            ctx->pc = 0x1EEA04u;
            goto label_1eea04;
        }
    }
    ctx->pc = 0x1EE6CCu;
    // 0x1ee6cc: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1EE6CCu;
    SET_GPR_U32(ctx, 31, 0x1EE6D4u);
    ctx->pc = 0x1EE6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE6CCu;
    // 0x1ee6d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1EE6CCu, 0x1EE6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6D4u;
label_1ee6d4:
    // 0x1ee6d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ee6d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6d8: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1EE6D8u;
    SET_GPR_U32(ctx, 31, 0x1EE6E0u);
    ctx->pc = 0x1EE6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE6D8u;
    // 0x1ee6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1EE6D8u, 0x1EE6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6E0u;
label_1ee6e0:
    // 0x1ee6e0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1ee6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1ee6e4: 0x144000c7  bnez        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x1EE6E4u;
    {
        const bool branch_taken_0x1ee6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6E4u;
        // 0x1ee6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee6e4) {
            ctx->pc = 0x1EEA04u;
            goto label_1eea04;
        }
    }
    ctx->pc = 0x1EE6ECu;
    // 0x1ee6ec: 0xc098b72  jal         func_262DC8
    ctx->pc = 0x1EE6ECu;
    SET_GPR_U32(ctx, 31, 0x1EE6F4u);
    ctx->pc = 0x1EE6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE6ECu;
    // 0x1ee6f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DC8u, 0x1EE6ECu, 0x1EE6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6F4u;
label_1ee6f4:
    // 0x1ee6f4: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x1EE6F4u;
    {
        const bool branch_taken_0x1ee6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6F4u;
        // 0x1ee6f8: 0x3a82001c  xori        $v0, $s4, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee6f4) {
            ctx->pc = 0x1EE8FCu;
            goto label_1ee8fc;
        }
    }
    ctx->pc = 0x1EE6FCu;
    // 0x1ee6fc: 0x3c013dae  lui         $at, 0x3DAE
    ctx->pc = 0x1ee6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15790 << 16));
    // 0x1ee700: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1ee700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1ee704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ee704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee708: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ee708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee70c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee710: 0x282200b  movn        $a0, $s4, $v0
    ctx->pc = 0x1ee710u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
    // 0x1ee714: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1ee714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1ee718: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1ee718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1ee71c: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE71Cu;
    {
        const bool branch_taken_0x1ee71c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EE720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE71Cu;
        // 0x1ee720: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee71c) {
            ctx->pc = 0x1EE730u;
            goto label_1ee730;
        }
    }
    ctx->pc = 0x1EE724u;
    // 0x1ee724: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1ee724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1ee728: 0x1662003e  bne         $s3, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EE728u;
    {
        const bool branch_taken_0x1ee728 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE728u;
        // 0x1ee72c: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee728) {
            ctx->pc = 0x1EE824u;
            goto label_1ee824;
        }
    }
    ctx->pc = 0x1EE730u;
label_1ee730:
    // 0x1ee730: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ee730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ee734: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1ee734u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1ee738: 0xc441921c  lwc1        $f1, -0x6DE4($v0)
    ctx->pc = 0x1ee738u;
    { uint32_t bits = FAST_READ32(0x3F921Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee73c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ee73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ee740: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ee740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ee744: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x1ee744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1ee748: 0xc6009220  lwc1        $f0, -0x6DE0($s0)
    ctx->pc = 0x1ee748u;
    { uint32_t bits = FAST_READ32(0x3F9220u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee74c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1ee74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1ee750: 0xc4619224  lwc1        $f1, -0x6DDC($v1)
    ctx->pc = 0x1ee750u;
    { uint32_t bits = FAST_READ32(0x3F9224u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee754: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1ee754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1ee758: 0xc4409228  lwc1        $f0, -0x6DD8($v0)
    ctx->pc = 0x1ee758u;
    { uint32_t bits = FAST_READ32(0x3F9228u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee75c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x1EE75Cu;
    SET_GPR_U32(ctx, 31, 0x1EE764u);
    ctx->pc = 0x1EE760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE75Cu;
    // 0x1ee760: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x1EE75Cu, 0x1EE764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE764u;
label_1ee764:
    // 0x1ee764: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x1ee764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1ee768: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE768u;
    {
        const bool branch_taken_0x1ee768 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1EE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE768u;
        // 0x1ee76c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee768) {
            ctx->pc = 0x1EE784u;
            goto label_1ee784;
        }
    }
    ctx->pc = 0x1EE770u;
    // 0x1ee770: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1ee770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1ee774: 0x0  nop
    ctx->pc = 0x1ee774u;
    // NOP
    // 0x1ee778: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1ee778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1ee77c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE77Cu;
    {
        const bool branch_taken_0x1ee77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE77Cu;
        // 0x1ee780: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee77c) {
            ctx->pc = 0x1EE7A0u;
            goto label_1ee7a0;
        }
    }
    ctx->pc = 0x1EE784u;
label_1ee784:
    // 0x1ee784: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1ee784u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ee788: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ee788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ee78c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1ee78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1ee790: 0x0  nop
    ctx->pc = 0x1ee790u;
    // NOP
    // 0x1ee794: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1ee794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1ee798: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1ee798u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x1ee79c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ee79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1ee7a0:
    // 0x1ee7a0: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x1ee7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x1ee7a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ee7a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee7a8: 0xc440922c  lwc1        $f0, -0x6DD4($v0)
    ctx->pc = 0x1ee7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee7ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ee7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ee7b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ee7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee7b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ee7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ee7b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee7b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee7bc: 0xc6029220  lwc1        $f2, -0x6DE0($s0)
    ctx->pc = 0x1ee7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294939168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ee7c0: 0xc4619230  lwc1        $f1, -0x6DD0($v1)
    ctx->pc = 0x1ee7c0u;
    { uint32_t bits = FAST_READ32(0x3F9230u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee7c4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1ee7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1ee7c8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1ee7c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1ee7cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ee7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ee7d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ee7d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee7d4: 0x0  nop
    ctx->pc = 0x1ee7d4u;
    // NOP
    // 0x1ee7d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE7D8u;
    {
        const bool branch_taken_0x1ee7d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7D8u;
        // 0x1ee7dc: 0xe6009220  swc1        $f0, -0x6DE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7d8) {
            ctx->pc = 0x1EE7F8u;
            goto label_1ee7f8;
        }
    }
    ctx->pc = 0x1EE7E0u;
    // 0x1ee7e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ee7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ee7e4: 0xc4419234  lwc1        $f1, -0x6DCC($v0)
    ctx->pc = 0x1ee7e4u;
    { uint32_t bits = FAST_READ32(0x3F9234u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee7e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ee7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee7ec: 0x0  nop
    ctx->pc = 0x1ee7ecu;
    // NOP
    // 0x1ee7f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE7F0u;
    {
        const bool branch_taken_0x1ee7f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7F0u;
        // 0x1ee7f4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7f0) {
            ctx->pc = 0x1EE800u;
            goto label_1ee800;
        }
    }
    ctx->pc = 0x1EE7F8u;
label_1ee7f8:
    // 0x1ee7f8: 0xe6019220  swc1        $f1, -0x6DE0($s0)
    ctx->pc = 0x1ee7f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939168), bits); }
    // 0x1ee7fc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1ee800:
    // 0x1ee800: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee804: 0x2442e928  addiu       $v0, $v0, -0x16D8
    ctx->pc = 0x1ee804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961448));
    // 0x1ee808: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1ee808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1ee80c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ee80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ee810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee814: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1ee814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ee818: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ee818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ee81c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1EE81Cu;
    {
        const bool branch_taken_0x1ee81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE81Cu;
        // 0x1ee820: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee81c) {
            ctx->pc = 0x1EEA04u;
            goto label_1eea04;
        }
    }
    ctx->pc = 0x1EE824u;
label_1ee824:
    // 0x1ee824: 0x2c620034  sltiu       $v0, $v1, 0x34
    ctx->pc = 0x1ee824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x1ee828: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EE828u;
    {
        const bool branch_taken_0x1ee828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE828u;
        // 0x1ee82c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee828) {
            ctx->pc = 0x1EE8B8u;
            goto label_1ee8b8;
        }
    }
    ctx->pc = 0x1EE830u;
    // 0x1ee830: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ee830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ee834: 0x2442ea40  addiu       $v0, $v0, -0x15C0
    ctx->pc = 0x1ee834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961728));
    // 0x1ee838: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ee838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee83c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ee83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee840: 0x800008  jr          $a0
    ctx->pc = 0x1EE840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE848u: goto label_1ee848;
            case 0x1EE864u: goto label_1ee864;
            case 0x1EE880u: goto label_1ee880;
            case 0x1EE89Cu: goto label_1ee89c;
            case 0x1EE8B8u: goto label_1ee8b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE840u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EE848u;
label_1ee848:
    // 0x1ee848: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee84c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee850: 0x2442e940  addiu       $v0, $v0, -0x16C0
    ctx->pc = 0x1ee850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961472));
    // 0x1ee854: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1ee854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1ee858: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ee858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ee85c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1EE85Cu;
    {
        const bool branch_taken_0x1ee85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE85Cu;
        // 0x1ee860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee85c) {
            ctx->pc = 0x1EE8E0u;
            goto label_1ee8e0;
        }
    }
    ctx->pc = 0x1EE864u;
label_1ee864:
    // 0x1ee864: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee868: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee86c: 0x2442e958  addiu       $v0, $v0, -0x16A8
    ctx->pc = 0x1ee86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961496));
    // 0x1ee870: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1ee870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1ee874: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ee874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ee878: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1EE878u;
    {
        const bool branch_taken_0x1ee878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE878u;
        // 0x1ee87c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee878) {
            ctx->pc = 0x1EE8E0u;
            goto label_1ee8e0;
        }
    }
    ctx->pc = 0x1EE880u;
label_1ee880:
    // 0x1ee880: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee884: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee888: 0x2442e970  addiu       $v0, $v0, -0x1690
    ctx->pc = 0x1ee888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961520));
    // 0x1ee88c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1ee88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1ee890: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ee890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ee894: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE894u;
    {
        const bool branch_taken_0x1ee894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE894u;
        // 0x1ee898: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee894) {
            ctx->pc = 0x1EE8E0u;
            goto label_1ee8e0;
        }
    }
    ctx->pc = 0x1EE89Cu;
label_1ee89c:
    // 0x1ee89c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee8a0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee8a4: 0x2442e928  addiu       $v0, $v0, -0x16D8
    ctx->pc = 0x1ee8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961448));
    // 0x1ee8a8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1ee8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1ee8ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ee8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ee8b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EE8B0u;
    {
        const bool branch_taken_0x1ee8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8B0u;
        // 0x1ee8b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8b0) {
            ctx->pc = 0x1EE8E0u;
            goto label_1ee8e0;
        }
    }
    ctx->pc = 0x1EE8B8u;
label_1ee8b8:
    // 0x1ee8b8: 0x3c013f2c  lui         $at, 0x3F2C
    ctx->pc = 0x1ee8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16172 << 16));
    // 0x1ee8bc: 0x34210831  ori         $at, $at, 0x831
    ctx->pc = 0x1ee8bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2097);
    // 0x1ee8c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ee8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee8c4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1ee8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1ee8c8: 0x2484e928  addiu       $a0, $a0, -0x16D8
    ctx->pc = 0x1ee8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961448));
    // 0x1ee8cc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ee8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee8d0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ee8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1ee8d4: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1ee8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1ee8d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee8dc: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1ee8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1ee8e0:
    // 0x1ee8e0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1ee8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ee8e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ee8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ee8e8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1ee8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1ee8ec: 0x8ee49214  lw          $a0, -0x6DEC($s7)
    ctx->pc = 0x1ee8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939156)));
    // 0x1ee8f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ee8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ee8f4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1EE8F4u;
    {
        const bool branch_taken_0x1ee8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8F4u;
        // 0x1ee8f8: 0xaee49214  sw          $a0, -0x6DEC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294939156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8f4) {
            ctx->pc = 0x1EEA04u;
            goto label_1eea04;
        }
    }
    ctx->pc = 0x1EE8FCu;
label_1ee8fc:
    // 0x1ee8fc: 0xc098b9e  jal         func_262E78
    ctx->pc = 0x1EE8FCu;
    SET_GPR_U32(ctx, 31, 0x1EE904u);
    ctx->pc = 0x1EE900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE8FCu;
    // 0x1ee900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E78u, 0x1EE8FCu, 0x1EE904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE904u;
label_1ee904:
    // 0x1ee904: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1EE904u;
    {
        const bool branch_taken_0x1ee904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE904u;
        // 0x1ee908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee904) {
            ctx->pc = 0x1EEA04u;
            goto label_1eea04;
        }
    }
    ctx->pc = 0x1EE90Cu;
    // 0x1ee90c: 0xc098b98  jal         func_262E60
    ctx->pc = 0x1EE90Cu;
    SET_GPR_U32(ctx, 31, 0x1EE914u);
    ctx->pc = 0x1EE910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE90Cu;
    // 0x1ee910: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E60u, 0x1EE90Cu, 0x1EE914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE914u;
label_1ee914:
    // 0x1ee914: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1EE914u;
    {
        const bool branch_taken_0x1ee914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE914u;
        // 0x1ee918: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee914) {
            ctx->pc = 0x1EEA00u;
            goto label_1eea00;
        }
    }
    ctx->pc = 0x1EE91Cu;
    // 0x1ee91c: 0x2664ffd8  addiu       $a0, $s3, -0x28
    ctx->pc = 0x1ee91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967256));
    // 0x1ee920: 0x38a2001c  xori        $v0, $a1, 0x1C
    ctx->pc = 0x1ee920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)28);
    // 0x1ee924: 0x2c83005c  sltiu       $v1, $a0, 0x5C
    ctx->pc = 0x1ee924u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)92) ? 1 : 0);
    // 0x1ee928: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1EE928u;
    {
        const bool branch_taken_0x1ee928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE928u;
        // 0x1ee92c: 0x2c2280a  movz        $a1, $s6, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee928) {
            ctx->pc = 0x1EEA00u;
            goto label_1eea00;
        }
    }
    ctx->pc = 0x1EE930u;
    // 0x1ee930: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee934: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ee934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ee938: 0x2442eb10  addiu       $v0, $v0, -0x14F0
    ctx->pc = 0x1ee938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961936));
    // 0x1ee93c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ee93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee940: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ee940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee944: 0x800008  jr          $a0
    ctx->pc = 0x1EE944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE94Cu: goto label_1ee94c;
            case 0x1EE958u: goto label_1ee958;
            case 0x1EE964u: goto label_1ee964;
            case 0x1EE970u: goto label_1ee970;
            case 0x1EE97Cu: goto label_1ee97c;
            case 0x1EE988u: goto label_1ee988;
            case 0x1EE994u: goto label_1ee994;
            case 0x1EE9A0u: goto label_1ee9a0;
            case 0x1EE9ACu: goto label_1ee9ac;
            case 0x1EE9B8u: goto label_1ee9b8;
            case 0x1EEA00u: goto label_1eea00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE944u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EE94Cu;
label_1ee94c:
    // 0x1ee94c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee950: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1EE950u;
    {
        const bool branch_taken_0x1ee950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE950u;
        // 0x1ee954: 0x2442e988  addiu       $v0, $v0, -0x1678 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee950) {
            ctx->pc = 0x1EE9C0u;
            goto label_1ee9c0;
        }
    }
    ctx->pc = 0x1EE958u;
label_1ee958:
    // 0x1ee958: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee95c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1EE95Cu;
    {
        const bool branch_taken_0x1ee95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE95Cu;
        // 0x1ee960: 0x2442e9a0  addiu       $v0, $v0, -0x1660 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee95c) {
            ctx->pc = 0x1EE9C0u;
            goto label_1ee9c0;
        }
    }
    ctx->pc = 0x1EE964u;
label_1ee964:
    // 0x1ee964: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee968: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1EE968u;
    {
        const bool branch_taken_0x1ee968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE968u;
        // 0x1ee96c: 0x2442e9b8  addiu       $v0, $v0, -0x1648 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee968) {
            ctx->pc = 0x1EE9C0u;
            goto label_1ee9c0;
        }
    }
    ctx->pc = 0x1EE970u;
label_1ee970:
    // 0x1ee970: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee974: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE974u;
    {
        const bool branch_taken_0x1ee974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE974u;
        // 0x1ee978: 0x2442e9d0  addiu       $v0, $v0, -0x1630 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee974) {
            ctx->pc = 0x1EE9C0u;
            goto label_1ee9c0;
        }
    }
    ctx->pc = 0x1EE97Cu;
label_1ee97c:
    // 0x1ee97c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee980: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EE980u;
    {
        const bool branch_taken_0x1ee980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE980u;
        // 0x1ee984: 0x2442e9e8  addiu       $v0, $v0, -0x1618 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee980) {
            ctx->pc = 0x1EE9C0u;
            goto label_1ee9c0;
        }
    }
    ctx->pc = 0x1EE988u;
label_1ee988:
    // 0x1ee988: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee98c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EE98Cu;
    {
        const bool branch_taken_0x1ee98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE98Cu;
        // 0x1ee990: 0x2442ea00  addiu       $v0, $v0, -0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee98c) {
            ctx->pc = 0x1EE9C0u;
            goto label_1ee9c0;
        }
    }
    ctx->pc = 0x1EE994u;
label_1ee994:
    // 0x1ee994: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee998: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE998u;
    {
        const bool branch_taken_0x1ee998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE998u;
        // 0x1ee99c: 0x2442ea10  addiu       $v0, $v0, -0x15F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee998) {
            ctx->pc = 0x1EE9C0u;
            goto label_1ee9c0;
        }
    }
    ctx->pc = 0x1EE9A0u;
label_1ee9a0:
    // 0x1ee9a0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee9a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE9A4u;
    {
        const bool branch_taken_0x1ee9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9A4u;
        // 0x1ee9a8: 0x2442ea28  addiu       $v0, $v0, -0x15D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9a4) {
            ctx->pc = 0x1EE9C0u;
            goto label_1ee9c0;
        }
    }
    ctx->pc = 0x1EE9ACu;
label_1ee9ac:
    // 0x1ee9ac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee9b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE9B0u;
    {
        const bool branch_taken_0x1ee9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9B0u;
        // 0x1ee9b4: 0x2442dc10  addiu       $v0, $v0, -0x23F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9b0) {
            ctx->pc = 0x1EE9C0u;
            goto label_1ee9c0;
        }
    }
    ctx->pc = 0x1EE9B8u;
label_1ee9b8:
    // 0x1ee9b8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee9bc: 0x2442dbf0  addiu       $v0, $v0, -0x2410
    ctx->pc = 0x1ee9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958064));
label_1ee9c0:
    // 0x1ee9c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ee9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ee9c4: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x1ee9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x1ee9c8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1ee9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ee9cc: 0x24847ee0  addiu       $a0, $a0, 0x7EE0
    ctx->pc = 0x1ee9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
    // 0x1ee9d0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ee9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee9d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ee9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ee9d8: 0xc0c3566  jal         func_30D598
    ctx->pc = 0x1EE9D8u;
    SET_GPR_U32(ctx, 31, 0x1EE9E0u);
    ctx->pc = 0x1EE9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE9D8u;
    // 0x1ee9dc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D598u, 0x1EE9D8u, 0x1EE9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9E0u;
label_1ee9e0:
    // 0x1ee9e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ee9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee9e4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1ee9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x1ee9e8: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x1ee9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x1ee9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee9f0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1ee9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ee9f4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ee9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ee9f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE9F8u;
    {
        const bool branch_taken_0x1ee9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9F8u;
        // 0x1ee9fc: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9f8) {
            ctx->pc = 0x1EEA04u;
            goto label_1eea04;
        }
    }
    ctx->pc = 0x1EEA00u;
label_1eea00:
    // 0x1eea00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eea00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eea04:
    // 0x1eea04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eea04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eea08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eea08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eea0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eea0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eea10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eea10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eea14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1eea14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eea18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1eea18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea1c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1eea1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eea20: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1eea20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eea24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1eea24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eea28: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA28u;
        // 0x1eea2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEA30u;
}
