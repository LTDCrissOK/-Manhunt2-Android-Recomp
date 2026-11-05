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

// Function: sub_003845B0
// Address: 0x3845b0 - 0x384740
void sub_003845B0_0x3845b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003845B0_0x3845b0");
#endif

    switch (ctx->pc) {
        case 0x38463cu: goto label_38463c;
        case 0x384650u: goto label_384650;
        case 0x384678u: goto label_384678;
        case 0x3846b8u: goto label_3846b8;
        case 0x3846dcu: goto label_3846dc;
        case 0x3846f0u: goto label_3846f0;
        case 0x3846f8u: goto label_3846f8;
        default: break;
    }

    ctx->pc = 0x3845b0u;

    // 0x3845b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3845b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3845b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3845b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3845b8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3845b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3845bc: 0x2475dfe4  addiu       $s5, $v1, -0x201C
    ctx->pc = 0x3845bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959076));
    // 0x3845c0: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x3845c0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x3845c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3845c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3845c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3845c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3845cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3845ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3845d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3845d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3845d4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3845d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3845d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3845d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3845dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3845dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3845e0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3845e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3845e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3845e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3845e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3845e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3845ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3845ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3845f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3845f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3845f4: 0x11280041  beq         $t1, $t0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3845F4u;
    {
        const bool branch_taken_0x3845f4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        ctx->pc = 0x3845F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3845F4u;
        // 0x3845f8: 0x3442000a  ori         $v0, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3845f4) {
            ctx->pc = 0x3846FCu;
            goto label_3846fc;
        }
    }
    ctx->pc = 0x3845FCu;
    // 0x3845fc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3845FCu;
    {
        const bool branch_taken_0x3845fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x384600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3845FCu;
        // 0x384600: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3845fc) {
            ctx->pc = 0x384610u;
            goto label_384610;
        }
    }
    ctx->pc = 0x384604u;
    // 0x384604: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x384604u;
    {
        const bool branch_taken_0x384604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384604u;
        // 0x384608: 0x24848c38  addiu       $a0, $a0, -0x73C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384604) {
            ctx->pc = 0x384634u;
            goto label_384634;
        }
    }
    ctx->pc = 0x38460Cu;
    // 0x38460c: 0x0  nop
    ctx->pc = 0x38460cu;
    // NOP
label_384610:
    // 0x384610: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x384610u;
    {
        const bool branch_taken_0x384610 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x384614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384610u;
        // 0x384614: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384610) {
            ctx->pc = 0x38462Cu;
            goto label_38462c;
        }
    }
    ctx->pc = 0x384618u;
    // 0x384618: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x384618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38461c: 0x8c43dfd4  lw          $v1, -0x202C($v0)
    ctx->pc = 0x38461cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959060)));
    // 0x384620: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x384620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x384624: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x384624u;
    {
        const bool branch_taken_0x384624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x384624) {
            ctx->pc = 0x384648u;
            goto label_384648;
        }
    }
    ctx->pc = 0x38462Cu;
label_38462c:
    // 0x38462c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x38462cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x384630: 0x24848c60  addiu       $a0, $a0, -0x73A0
    ctx->pc = 0x384630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937696));
label_384634:
    // 0x384634: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x384634u;
    SET_GPR_U32(ctx, 31, 0x38463Cu);
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384634u, 0x38463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38463Cu;
label_38463c:
    // 0x38463c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38463cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384640: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x384640u;
    {
        const bool branch_taken_0x384640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384640u;
        // 0x384644: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x384640) {
            ctx->pc = 0x3846FCu;
            goto label_3846fc;
        }
    }
    ctx->pc = 0x384648u;
label_384648:
    // 0x384648: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x384648u;
    SET_GPR_U32(ctx, 31, 0x384650u);
    ctx->pc = 0x38464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384648u;
    // 0x38464c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x384648u, 0x384650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384650u;
label_384650:
    // 0x384650: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384654: 0x2472dfdc  addiu       $s2, $v1, -0x2024
    ctx->pc = 0x384654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959068));
    // 0x384658: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x384658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38465c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x38465cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x384660: 0xacd3000c  sw          $s3, 0xC($a2)
    ctx->pc = 0x384660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 19));
    // 0x384664: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x384664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x384668: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x384668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38466c: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x38466cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
    // 0x384670: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x384670u;
    SET_GPR_U32(ctx, 31, 0x384678u);
    ctx->pc = 0x384674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384670u;
    // 0x384674: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x384670u, 0x384678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384678u;
label_384678:
    // 0x384678: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x384678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38467c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x38467cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x384680: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x384680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x384684: 0xa0740012  sb          $s4, 0x12($v1)
    ctx->pc = 0x384684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 20));
    // 0x384688: 0x24846080  addiu       $a0, $a0, 0x6080
    ctx->pc = 0x384688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
    // 0x38468c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38468cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384690: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x384690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x384694: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x384694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x384698: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x384698u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38469c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x38469cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3846a0: 0x2508003f  addiu       $t0, $t0, 0x3F
    ctx->pc = 0x3846a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x3846a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3846a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3846a8: 0x84103  sra         $t0, $t0, 4
    ctx->pc = 0x3846a8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 4));
    // 0x3846ac: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3846acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3846b0: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x3846B0u;
    SET_GPR_U32(ctx, 31, 0x3846B8u);
    ctx->pc = 0x3846B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3846B0u;
    // 0x3846b4: 0x84100  sll         $t0, $t0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x3846B0u, 0x3846B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3846B8u;
label_3846b8:
    // 0x3846b8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3846b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3846bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3846BCu;
    {
        const bool branch_taken_0x3846bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3846C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3846BCu;
        // 0x3846c0: 0x24848c90  addiu       $a0, $a0, -0x7370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3846bc) {
            ctx->pc = 0x3846E8u;
            goto label_3846e8;
        }
    }
    ctx->pc = 0x3846C4u;
    // 0x3846c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3846c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3846c8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3846c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3846cc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3846ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3846d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3846d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3846d4: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3846D4u;
    SET_GPR_U32(ctx, 31, 0x3846DCu);
    ctx->pc = 0x3846D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3846D4u;
    // 0x3846d8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3846D4u, 0x3846DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3846DCu;
label_3846dc:
    // 0x3846dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3846DCu;
    {
        const bool branch_taken_0x3846dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3846E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3846DCu;
        // 0x3846e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3846dc) {
            ctx->pc = 0x3846FCu;
            goto label_3846fc;
        }
    }
    ctx->pc = 0x3846E4u;
    // 0x3846e4: 0x0  nop
    ctx->pc = 0x3846e4u;
    // NOP
label_3846e8:
    // 0x3846e8: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x3846E8u;
    SET_GPR_U32(ctx, 31, 0x3846F0u);
    ctx->pc = 0x3846ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3846E8u;
    // 0x3846ec: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x3846E8u, 0x3846F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3846F0u;
label_3846f0:
    // 0x3846f0: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3846F0u;
    SET_GPR_U32(ctx, 31, 0x3846F8u);
    ctx->pc = 0x3846F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3846F0u;
    // 0x3846f4: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3846F0u, 0x3846F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3846F8u;
label_3846f8:
    // 0x3846f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3846f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3846fc:
    // 0x3846fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3846fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384700: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x384700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x384704: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x384704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384708: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x384708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x38470c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x38470cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x384710: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x384710u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x384714: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x384714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x384718: 0x3e00008  jr          $ra
    ctx->pc = 0x384718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384718u;
        // 0x38471c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384720u;
    // 0x384720: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x384720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x384724: 0x0  nop
    ctx->pc = 0x384724u;
    // NOP
    // 0x384728: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x384728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38472c: 0x0  nop
    ctx->pc = 0x38472cu;
    // NOP
    // 0x384730: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x384730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x384734: 0x0  nop
    ctx->pc = 0x384734u;
    // NOP
    // 0x384738: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x384738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38473c: 0x0  nop
    ctx->pc = 0x38473cu;
    // NOP
    ctx->pc = 0x384740u;
}
