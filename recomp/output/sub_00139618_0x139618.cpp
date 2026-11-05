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

// Function: sub_00139618
// Address: 0x139618 - 0x139890
void sub_00139618_0x139618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139618_0x139618");
#endif

    switch (ctx->pc) {
        case 0x139650u: goto label_139650;
        case 0x139698u: goto label_139698;
        case 0x1396c0u: goto label_1396c0;
        case 0x1396d4u: goto label_1396d4;
        case 0x139760u: goto label_139760;
        case 0x139774u: goto label_139774;
        case 0x139784u: goto label_139784;
        case 0x139798u: goto label_139798;
        case 0x1397c0u: goto label_1397c0;
        case 0x1397e0u: goto label_1397e0;
        case 0x139808u: goto label_139808;
        case 0x139818u: goto label_139818;
        case 0x139830u: goto label_139830;
        case 0x139858u: goto label_139858;
        default: break;
    }

    ctx->pc = 0x139618u;

    // 0x139618: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x139618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13961c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13961cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139624: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139628: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x139628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13962c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13962cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x139630: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x139630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x139634: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x139634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x139638: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x139638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x13963c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x13963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x139640: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x139640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x139644: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x139644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x139648: 0xc04eaa0  jal         func_13AA80
    ctx->pc = 0x139648u;
    SET_GPR_U32(ctx, 31, 0x139650u);
    ctx->pc = 0x13964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139648u;
    // 0x13964c: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AA80u, 0x139648u, 0x139650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139650u;
label_139650:
    // 0x139650: 0x54400082  bnel        $v0, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x139650u;
    {
        const bool branch_taken_0x139650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139650) {
            ctx->pc = 0x139654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139650u;
            // 0x139654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13985Cu;
            goto label_13985c;
        }
    }
    ctx->pc = 0x139658u;
    // 0x139658: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x139658u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x13965c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x13965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x139660: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x139660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x139664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139668: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x139668u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13966c: 0x1280007b  beqz        $s4, . + 4 + (0x7B << 2)
    ctx->pc = 0x13966Cu;
    {
        const bool branch_taken_0x13966c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x139670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13966Cu;
        // 0x139670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13966c) {
            ctx->pc = 0x13985Cu;
            goto label_13985c;
        }
    }
    ctx->pc = 0x139674u;
    // 0x139674: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x139674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x139678: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x139678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x13967c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x139680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139684: 0x8c53020c  lw          $s3, 0x20C($v0)
    ctx->pc = 0x139684u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x139688: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x139688u;
    {
        const bool branch_taken_0x139688 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x139688) {
            ctx->pc = 0x1396B8u;
            goto label_1396b8;
        }
    }
    ctx->pc = 0x139690u;
    // 0x139690: 0xc04ea6e  jal         func_13A9B8
    ctx->pc = 0x139690u;
    SET_GPR_U32(ctx, 31, 0x139698u);
    ctx->pc = 0x139694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139690u;
    // 0x139694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A9B8u, 0x139690u, 0x139698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139698u;
label_139698:
    // 0x139698: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x139698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x13969c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x13969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1396a0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1396a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1396a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1396a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396a8: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x1396a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1396ac: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x1396acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1396b0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1396B0u;
    {
        const bool branch_taken_0x1396b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1396B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396B0u;
        // 0x1396b4: 0xac4504f0  sw          $a1, 0x4F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1264), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396b0) {
            ctx->pc = 0x13984Cu;
            goto label_13984c;
        }
    }
    ctx->pc = 0x1396B8u;
label_1396b8:
    // 0x1396b8: 0xc043f14  jal         func_10FC50
    ctx->pc = 0x1396B8u;
    SET_GPR_U32(ctx, 31, 0x1396C0u);
    ctx->pc = 0x1396BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396B8u;
    // 0x1396bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC50u, 0x1396B8u, 0x1396C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396C0u;
label_1396c0:
    // 0x1396c0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1396C0u;
    {
        const bool branch_taken_0x1396c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1396c0) {
            ctx->pc = 0x1396C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1396C0u;
            // 0x1396c4: 0x9223046c  lbu         $v1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1396F4u;
            goto label_1396f4;
        }
    }
    ctx->pc = 0x1396C8u;
    // 0x1396c8: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1396c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1396cc: 0xc04ea6e  jal         func_13A9B8
    ctx->pc = 0x1396CCu;
    SET_GPR_U32(ctx, 31, 0x1396D4u);
    ctx->pc = 0x1396D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396CCu;
    // 0x1396d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A9B8u, 0x1396CCu, 0x1396D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396D4u;
label_1396d4:
    // 0x1396d4: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x1396d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1396d8: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1396d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1396dc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1396dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1396e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1396e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396e4: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x1396e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1396e8: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x1396e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1396ec: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1396ECu;
    {
        const bool branch_taken_0x1396ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1396F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396ECu;
        // 0x1396f0: 0xac4504f0  sw          $a1, 0x4F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1264), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396ec) {
            ctx->pc = 0x13984Cu;
            goto label_13984c;
        }
    }
    ctx->pc = 0x1396F4u;
label_1396f4:
    // 0x1396f4: 0x2416005c  addiu       $s6, $zero, 0x5C
    ctx->pc = 0x1396f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1396f8: 0x262404f0  addiu       $a0, $s1, 0x4F0
    ctx->pc = 0x1396f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1264));
    // 0x1396fc: 0x761818  mult        $v1, $v1, $s6
    ctx->pc = 0x1396fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x139700: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x139700u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139704: 0x24170012  addiu       $s7, $zero, 0x12
    ctx->pc = 0x139704u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x139708: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x139708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13970c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x139710: 0x14570004  bne         $v0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x139710u;
    {
        const bool branch_taken_0x139710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x139714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139710u;
        // 0x139714: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139710) {
            ctx->pc = 0x139724u;
            goto label_139724;
        }
    }
    ctx->pc = 0x139718u;
    // 0x139718: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x139718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13971c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x13971cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139720: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x139720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_139724:
    // 0x139724: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x139724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139728: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x139728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13972c: 0x561818  mult        $v1, $v0, $s6
    ctx->pc = 0x13972cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x139730: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x139730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x139734: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x139734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139738: 0x14640048  bne         $v1, $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x139738u;
    {
        const bool branch_taken_0x139738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139738u;
        // 0x13973c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139738) {
            ctx->pc = 0x13985Cu;
            goto label_13985c;
        }
    }
    ctx->pc = 0x139740u;
    // 0x139740: 0x8e220464  lw          $v0, 0x464($s1)
    ctx->pc = 0x139740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1124)));
    // 0x139744: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x139744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x139748: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x139748u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x13974c: 0x8e260ab0  lw          $a2, 0xAB0($s1)
    ctx->pc = 0x13974cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
    // 0x139750: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x139750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x139754: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x139754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x139758: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x139758u;
    SET_GPR_U32(ctx, 31, 0x139760u);
    ctx->pc = 0x13975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139758u;
    // 0x13975c: 0x24e78738  addiu       $a3, $a3, -0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x139758u, 0x139760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139760u;
label_139760:
    // 0x139760: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x139760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139764: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x139764u;
    {
        const bool branch_taken_0x139764 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x139768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139764u;
        // 0x139768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139764) {
            ctx->pc = 0x1397B4u;
            goto label_1397b4;
        }
    }
    ctx->pc = 0x13976Cu;
    // 0x13976c: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x13976Cu;
    SET_GPR_U32(ctx, 31, 0x139774u);
    ctx->pc = 0x139770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13976Cu;
    // 0x139770: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x13976Cu, 0x139774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139774u;
label_139774:
    // 0x139774: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x139774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x139778: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13977c: 0xc042128  jal         func_1084A0
    ctx->pc = 0x13977Cu;
    SET_GPR_U32(ctx, 31, 0x139784u);
    ctx->pc = 0x139780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13977Cu;
    // 0x139780: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x13977Cu, 0x139784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139784u;
label_139784:
    // 0x139784: 0x5614000c  bnel        $s0, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x139784u;
    {
        const bool branch_taken_0x139784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x139784) {
            ctx->pc = 0x139788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139784u;
            // 0x139788: 0x8e250ab0  lw          $a1, 0xAB0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1397B8u;
            goto label_1397b8;
        }
    }
    ctx->pc = 0x13978Cu;
    // 0x13978c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x13978cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139790: 0xc04ea6e  jal         func_13A9B8
    ctx->pc = 0x139790u;
    SET_GPR_U32(ctx, 31, 0x139798u);
    ctx->pc = 0x139794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139790u;
    // 0x139794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A9B8u, 0x139790u, 0x139798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139798u;
label_139798:
    // 0x139798: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x139798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x13979c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13979cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1397a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1397a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1397a4: 0x561818  mult        $v1, $v0, $s6
    ctx->pc = 0x1397a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1397a8: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1397a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1397ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1397ACu;
    {
        const bool branch_taken_0x1397ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397ACu;
        // 0x1397b0: 0xac570000  sw          $s7, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397ac) {
            ctx->pc = 0x139850u;
            goto label_139850;
        }
    }
    ctx->pc = 0x1397B4u;
label_1397b4:
    // 0x1397b4: 0x8e250ab0  lw          $a1, 0xAB0($s1)
    ctx->pc = 0x1397b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
label_1397b8:
    // 0x1397b8: 0xc044234  jal         func_1108D0
    ctx->pc = 0x1397B8u;
    SET_GPR_U32(ctx, 31, 0x1397C0u);
    ctx->pc = 0x1397BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1397B8u;
    // 0x1397bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x1397B8u, 0x1397C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397C0u;
label_1397c0:
    // 0x1397c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1397c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1397c4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1397c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1397c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1397C8u;
    {
        const bool branch_taken_0x1397c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1397CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397C8u;
        // 0x1397cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397c8) {
            ctx->pc = 0x1397D8u;
            goto label_1397d8;
        }
    }
    ctx->pc = 0x1397D0u;
    // 0x1397d0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1397D0u;
    {
        const bool branch_taken_0x1397d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1397d0) {
            ctx->pc = 0x1397D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1397D0u;
            // 0x1397d4: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139828u;
            goto label_139828;
        }
    }
    ctx->pc = 0x1397D8u;
label_1397d8:
    // 0x1397d8: 0xc044240  jal         func_110900
    ctx->pc = 0x1397D8u;
    SET_GPR_U32(ctx, 31, 0x1397E0u);
    ctx->pc = 0x1397DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1397D8u;
    // 0x1397dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110900u, 0x1397D8u, 0x1397E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397E0u;
label_1397e0:
    // 0x1397e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1397e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1397e4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1397e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1397e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1397E8u;
    {
        const bool branch_taken_0x1397e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1397ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397E8u;
        // 0x1397ec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397e8) {
            ctx->pc = 0x1397F8u;
            goto label_1397f8;
        }
    }
    ctx->pc = 0x1397F0u;
    // 0x1397f0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1397F0u;
    {
        const bool branch_taken_0x1397f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1397f0) {
            ctx->pc = 0x1397F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1397F0u;
            // 0x1397f4: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139828u;
            goto label_139828;
        }
    }
    ctx->pc = 0x1397F8u;
label_1397f8:
    // 0x1397f8: 0x53c00005  beql        $fp, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1397F8u;
    {
        const bool branch_taken_0x1397f8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1397f8) {
            ctx->pc = 0x1397FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1397F8u;
            // 0x1397fc: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139810u;
            goto label_139810;
        }
    }
    ctx->pc = 0x139800u;
    // 0x139800: 0xc04ed28  jal         func_13B4A0
    ctx->pc = 0x139800u;
    SET_GPR_U32(ctx, 31, 0x139808u);
    ctx->pc = 0x139804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139800u;
    // 0x139804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B4A0u, 0x139800u, 0x139808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139808u;
label_139808:
    // 0x139808: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x139808u;
    {
        const bool branch_taken_0x139808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139808u;
        // 0x13980c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139808) {
            ctx->pc = 0x13985Cu;
            goto label_13985c;
        }
    }
    ctx->pc = 0x139810u;
label_139810:
    // 0x139810: 0xc04ea74  jal         func_13A9D0
    ctx->pc = 0x139810u;
    SET_GPR_U32(ctx, 31, 0x139818u);
    ctx->pc = 0x139814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139810u;
    // 0x139814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A9D0u, 0x139810u, 0x139818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139818u;
label_139818:
    // 0x139818: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x139818u;
    {
        const bool branch_taken_0x139818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139818) {
            ctx->pc = 0x13981Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139818u;
            // 0x13981c: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139828u;
            goto label_139828;
        }
    }
    ctx->pc = 0x139820u;
    // 0x139820: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x139820u;
    {
        const bool branch_taken_0x139820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139820u;
        // 0x139824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139820) {
            ctx->pc = 0x13985Cu;
            goto label_13985c;
        }
    }
    ctx->pc = 0x139828u;
label_139828:
    // 0x139828: 0xc04ea6e  jal         func_13A9B8
    ctx->pc = 0x139828u;
    SET_GPR_U32(ctx, 31, 0x139830u);
    ctx->pc = 0x13982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139828u;
    // 0x13982c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A9B8u, 0x139828u, 0x139830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139830u;
label_139830:
    // 0x139830: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x139830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139834: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x139834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x139838: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x139838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x13983c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139840: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x139840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x139844: 0xd51021  addu        $v0, $a2, $s5
    ctx->pc = 0x139844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x139848: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x139848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_13984c:
    // 0x13984c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13984cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139850:
    // 0x139850: 0xc04ea9a  jal         func_13AA68
    ctx->pc = 0x139850u;
    SET_GPR_U32(ctx, 31, 0x139858u);
    ctx->pc = 0x139854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139850u;
    // 0x139854: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AA68u, 0x139850u, 0x139858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139858u;
label_139858:
    // 0x139858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13985c:
    // 0x13985c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13985cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139860: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139864: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139868: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x139868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13986c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13986cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139870: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x139870u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139874: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x139874u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139878: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x139878u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13987c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x13987cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139880: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x139880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139884: 0x3e00008  jr          $ra
    ctx->pc = 0x139884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139884u;
        // 0x139888: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13988Cu;
    // 0x13988c: 0x0  nop
    ctx->pc = 0x13988cu;
    // NOP
    ctx->pc = 0x139890u;
}
