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

// Function: sub_00201400
// Address: 0x201400 - 0x201540
void sub_00201400_0x201400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201400_0x201400");
#endif

    switch (ctx->pc) {
        case 0x201448u: goto label_201448;
        case 0x201478u: goto label_201478;
        case 0x201484u: goto label_201484;
        case 0x2014b0u: goto label_2014b0;
        case 0x2014f0u: goto label_2014f0;
        case 0x201504u: goto label_201504;
        default: break;
    }

    ctx->pc = 0x201400u;

    // 0x201400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x201400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x201404: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201408: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x201408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20140c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20140cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201414: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x201414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x201418: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x201418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20141c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x20141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x201420: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x201420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x201424: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x201424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x201428: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x201428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20142c: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x20142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x201430: 0x1840002a  blez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x201430u;
    {
        const bool branch_taken_0x201430 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x201434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201430u;
        // 0x201434: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201430) {
            ctx->pc = 0x2014DCu;
            goto label_2014dc;
        }
    }
    ctx->pc = 0x201438u;
    // 0x201438: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x201438u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20143c: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x20143cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x201440: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x201440u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x201444: 0x2551018  mult        $v0, $s2, $s5
    ctx->pc = 0x201444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_201448:
    // 0x201448: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x201448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x20144c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201450: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x201450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x201454: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x201454u;
    {
        const bool branch_taken_0x201454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201454u;
        // 0x201458: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201454) {
            ctx->pc = 0x2014C8u;
            goto label_2014c8;
        }
    }
    ctx->pc = 0x20145Cu;
    // 0x20145c: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x20145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x201460: 0x572018  mult        $a0, $v0, $s7
    ctx->pc = 0x201460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x201464: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x201464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x201468: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x201468u;
    {
        const bool branch_taken_0x201468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x201468) {
            ctx->pc = 0x20146Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201468u;
            // 0x20146c: 0x2558018  mult        $s0, $s2, $s5 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20149Cu;
            goto label_20149c;
        }
    }
    ctx->pc = 0x201470u;
    // 0x201470: 0x2569818  mult        $s3, $s2, $s6
    ctx->pc = 0x201470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x201474: 0x2610ffec  addiu       $s0, $s0, -0x14
    ctx->pc = 0x201474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_201478:
    // 0x201478: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x201478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20147c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x20147Cu;
    SET_GPR_U32(ctx, 31, 0x201484u);
    ctx->pc = 0x201480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20147Cu;
    // 0x201480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20147Cu, 0x201484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201484u;
label_201484:
    // 0x201484: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x201484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x201488: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x201488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20148c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x201490: 0x1470fff9  bne         $v1, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x201490u;
    {
        const bool branch_taken_0x201490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x201494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201490u;
        // 0x201494: 0x2610ffec  addiu       $s0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201490) {
            ctx->pc = 0x201478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201478;
        }
    }
    ctx->pc = 0x201498u;
    // 0x201498: 0x2558018  mult        $s0, $s2, $s5
    ctx->pc = 0x201498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_20149c:
    // 0x20149c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x20149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2014a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2014a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2014a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2014a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2014a8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2014A8u;
    SET_GPR_U32(ctx, 31, 0x2014B0u);
    ctx->pc = 0x2014ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2014A8u;
    // 0x2014ac: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2014A8u, 0x2014B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014B0u;
label_2014b0:
    // 0x2014b0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2014b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2014b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2014b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2014b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2014b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2014bc: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2014bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2014c0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2014c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2014c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2014c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2014c8:
    // 0x2014c8: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x2014c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x2014cc: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2014ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2014d0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2014d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2014d4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2014D4u;
    {
        const bool branch_taken_0x2014d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2014D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014D4u;
        // 0x2014d8: 0x2551018  mult        $v0, $s2, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014d4) {
            ctx->pc = 0x201448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201448;
        }
    }
    ctx->pc = 0x2014DCu;
label_2014dc:
    // 0x2014dc: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2014dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2014e0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2014E0u;
    {
        const bool branch_taken_0x2014e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2014e0) {
            ctx->pc = 0x2014E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2014E0u;
            // 0x2014e4: 0x8e2400fc  lw          $a0, 0xFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2014F4u;
            goto label_2014f4;
        }
    }
    ctx->pc = 0x2014E8u;
    // 0x2014e8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2014E8u;
    SET_GPR_U32(ctx, 31, 0x2014F0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2014E8u, 0x2014F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014F0u;
label_2014f0:
    // 0x2014f0: 0x8e2400fc  lw          $a0, 0xFC($s1)
    ctx->pc = 0x2014f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_2014f4:
    // 0x2014f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2014F4u;
    {
        const bool branch_taken_0x2014f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2014F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014F4u;
        // 0x2014f8: 0xae200104  sw          $zero, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014f4) {
            ctx->pc = 0x201504u;
            goto label_201504;
        }
    }
    ctx->pc = 0x2014FCu;
    // 0x2014fc: 0xc0b4c1a  jal         func_2D3068
    ctx->pc = 0x2014FCu;
    SET_GPR_U32(ctx, 31, 0x201504u);
    ctx->pc = 0x201500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2014FCu;
    // 0x201500: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3068u, 0x2014FCu, 0x201504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201504u;
label_201504:
    // 0x201504: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x201504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x201508: 0xae2000fc  sw          $zero, 0xFC($s1)
    ctx->pc = 0x201508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
    // 0x20150c: 0xa2200100  sb          $zero, 0x100($s1)
    ctx->pc = 0x20150cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x201510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201518: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x201518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20151c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20151cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201520: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x201520u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201524: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x201524u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x201528: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x201528u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20152c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x20152cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x201530: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x201530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201534: 0x3e00008  jr          $ra
    ctx->pc = 0x201534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201534u;
        // 0x201538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20153Cu;
    // 0x20153c: 0x0  nop
    ctx->pc = 0x20153cu;
    // NOP
    ctx->pc = 0x201540u;
}
