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

// Function: sub_00268800
// Address: 0x268800 - 0x2689a8
void sub_00268800_0x268800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268800_0x268800");
#endif

    switch (ctx->pc) {
        case 0x268840u: goto label_268840;
        case 0x268848u: goto label_268848;
        case 0x268850u: goto label_268850;
        case 0x268868u: goto label_268868;
        case 0x268878u: goto label_268878;
        case 0x2688a8u: goto label_2688a8;
        case 0x2688e0u: goto label_2688e0;
        case 0x268934u: goto label_268934;
        case 0x268984u: goto label_268984;
        default: break;
    }

    ctx->pc = 0x268800u;

    // 0x268800: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x268800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x268804: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x268804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x268808: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x268808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x26880c: 0x8c629dc0  lw          $v0, -0x6240($v1)
    ctx->pc = 0x26880cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9DC0u));
    // 0x268810: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x268810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268814: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x268814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x268818: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x268818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x26881c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x26881cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x268820: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x268820u;
    {
        const bool branch_taken_0x268820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268820u;
        // 0x268824: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268820) {
            ctx->pc = 0x268988u;
            goto label_268988;
        }
    }
    ctx->pc = 0x268828u;
    // 0x268828: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x268828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x26882c: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x26882cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x268830: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268830u;
    {
        const bool branch_taken_0x268830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x268830) {
            ctx->pc = 0x268840u;
            goto label_268840;
        }
    }
    ctx->pc = 0x268838u;
    // 0x268838: 0xc08961e  jal         func_225878
    ctx->pc = 0x268838u;
    SET_GPR_U32(ctx, 31, 0x268840u);
    ctx->pc = 0x26883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268838u;
    // 0x26883c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225878u, 0x268838u, 0x268840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268840u;
label_268840:
    // 0x268840: 0xc040186  jal         func_100618
    ctx->pc = 0x268840u;
    SET_GPR_U32(ctx, 31, 0x268848u);
    ctx->pc = 0x268844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268840u;
    // 0x268844: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100618u, 0x268840u, 0x268848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268848u;
label_268848:
    // 0x268848: 0xc040182  jal         func_100608
    ctx->pc = 0x268848u;
    SET_GPR_U32(ctx, 31, 0x268850u);
    ctx->pc = 0x100608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100608u, 0x268848u, 0x268850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268850u;
label_268850:
    // 0x268850: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x268850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268854: 0x8e429dc0  lw          $v0, -0x6240($s2)
    ctx->pc = 0x268854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942144)));
    // 0x268858: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x268858u;
    {
        const bool branch_taken_0x268858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268858u;
        // 0x26885c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268858) {
            ctx->pc = 0x26897Cu;
            goto label_26897c;
        }
    }
    ctx->pc = 0x268860u;
    // 0x268860: 0x2453aed0  addiu       $s3, $v0, -0x5130
    ctx->pc = 0x268860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946512));
    // 0x268864: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x268864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_268868:
    // 0x268868: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x268868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26886c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26886cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x268870: 0xc09a354  jal         func_268D50
    ctx->pc = 0x268870u;
    SET_GPR_U32(ctx, 31, 0x268878u);
    ctx->pc = 0x268874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268870u;
    // 0x268874: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D50u, 0x268870u, 0x268878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268878u;
label_268878:
    // 0x268878: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x268878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26887c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x26887cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x268880: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x268880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x268884: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x268884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x268888: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x268888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26888c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x26888cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x268890: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x268890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x268894: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x268894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x268898: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x268898u;
    {
        const bool branch_taken_0x268898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268898u;
        // 0x26889c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268898) {
            ctx->pc = 0x26896Cu;
            goto label_26896c;
        }
    }
    ctx->pc = 0x2688A0u;
    // 0x2688a0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2688a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2688a4: 0x0  nop
    ctx->pc = 0x2688a4u;
    // NOP
label_2688a8:
    // 0x2688a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2688a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2688ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2688acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2688b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2688b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2688b4: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x2688b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x2688b8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2688b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2688bc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2688bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2688c0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2688c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2688c4: 0xafb10030  sw          $s1, 0x30($sp)
    ctx->pc = 0x2688c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 17));
    // 0x2688c8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2688c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2688cc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2688ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2688d0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2688D0u;
    {
        const bool branch_taken_0x2688d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2688D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688D0u;
        // 0x2688d4: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688d0) {
            ctx->pc = 0x268924u;
            goto label_268924;
        }
    }
    ctx->pc = 0x2688D8u;
    // 0x2688d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2688D8u;
    {
        const bool branch_taken_0x2688d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2688DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688D8u;
        // 0x2688dc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688d8) {
            ctx->pc = 0x268918u;
            goto label_268918;
        }
    }
    ctx->pc = 0x2688E0u;
label_2688e0:
    // 0x2688e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2688E0u;
    {
        const bool branch_taken_0x2688e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2688e0) {
            ctx->pc = 0x2688E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2688E0u;
            // 0x2688e4: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2688F4u;
            goto label_2688f4;
        }
    }
    ctx->pc = 0x2688E8u;
    // 0x2688e8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2688e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2688ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2688ECu;
    {
        const bool branch_taken_0x2688ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2688F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688ECu;
        // 0x2688f0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688ec) {
            ctx->pc = 0x268904u;
            goto label_268904;
        }
    }
    ctx->pc = 0x2688F4u;
label_2688f4:
    // 0x2688f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2688F4u;
    {
        const bool branch_taken_0x2688f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2688F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688F4u;
        // 0x2688f8: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688f4) {
            ctx->pc = 0x268908u;
            goto label_268908;
        }
    }
    ctx->pc = 0x2688FCu;
    // 0x2688fc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2688fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x268900: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x268900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_268904:
    // 0x268904: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x268904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_268908:
    // 0x268908: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x268908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x26890c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26890Cu;
    {
        const bool branch_taken_0x26890c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26890c) {
            ctx->pc = 0x268924u;
            goto label_268924;
        }
    }
    ctx->pc = 0x268914u;
    // 0x268914: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x268914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_268918:
    // 0x268918: 0x1445fff1  bne         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x268918u;
    {
        const bool branch_taken_0x268918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x26891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268918u;
        // 0x26891c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268918) {
            ctx->pc = 0x2688E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2688e0;
        }
    }
    ctx->pc = 0x268920u;
    // 0x268920: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x268920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268924:
    // 0x268924: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268924u;
    {
        const bool branch_taken_0x268924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x268928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268924u;
        // 0x268928: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268924) {
            ctx->pc = 0x268938u;
            goto label_268938;
        }
    }
    ctx->pc = 0x26892Cu;
    // 0x26892c: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x26892Cu;
    SET_GPR_U32(ctx, 31, 0x268934u);
    ctx->pc = 0x268930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26892Cu;
    // 0x268930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x26892Cu, 0x268934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268934u;
label_268934:
    // 0x268934: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x268934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_268938:
    // 0x268938: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x268938u;
    {
        const bool branch_taken_0x268938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268938) {
            ctx->pc = 0x26893Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268938u;
            // 0x26893c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26894Cu;
            goto label_26894c;
        }
    }
    ctx->pc = 0x268940u;
    // 0x268940: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x268940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x268944: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x268944u;
    {
        const bool branch_taken_0x268944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268944u;
        // 0x268948: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268944) {
            ctx->pc = 0x26895Cu;
            goto label_26895c;
        }
    }
    ctx->pc = 0x26894Cu;
label_26894c:
    // 0x26894c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26894Cu;
    {
        const bool branch_taken_0x26894c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26894Cu;
        // 0x268950: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26894c) {
            ctx->pc = 0x268960u;
            goto label_268960;
        }
    }
    ctx->pc = 0x268954u;
    // 0x268954: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x268954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x268958: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x268958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_26895c:
    // 0x26895c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x26895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_268960:
    // 0x268960: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x268960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x268964: 0x1462ffd0  bne         $v1, $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x268964u;
    {
        const bool branch_taken_0x268964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x268968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268964u;
        // 0x268968: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268964) {
            ctx->pc = 0x2688A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2688a8;
        }
    }
    ctx->pc = 0x26896Cu;
label_26896c:
    // 0x26896c: 0x8e429dc0  lw          $v0, -0x6240($s2)
    ctx->pc = 0x26896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942144)));
    // 0x268970: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x268970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x268974: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x268974u;
    {
        const bool branch_taken_0x268974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268974u;
        // 0x268978: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268974) {
            ctx->pc = 0x268868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268868;
        }
    }
    ctx->pc = 0x26897Cu;
label_26897c:
    // 0x26897c: 0xc040110  jal         func_100440
    ctx->pc = 0x26897Cu;
    SET_GPR_U32(ctx, 31, 0x268984u);
    ctx->pc = 0x100440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100440u, 0x26897Cu, 0x268984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268984u;
label_268984:
    // 0x268984: 0xae409dc0  sw          $zero, -0x6240($s2)
    ctx->pc = 0x268984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294942144), GPR_U32(ctx, 0));
label_268988:
    // 0x268988: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x268988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26898c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x26898cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x268990: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x268990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268994: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x268994u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x268998: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x268998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26899c: 0x3e00008  jr          $ra
    ctx->pc = 0x26899Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2689A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26899Cu;
        // 0x2689a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26899Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2689A4u;
    // 0x2689a4: 0x0  nop
    ctx->pc = 0x2689a4u;
    // NOP
    ctx->pc = 0x2689a8u;
}
