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

// Function: sub_0012F818
// Address: 0x12f818 - 0x12fb30
void sub_0012F818_0x12f818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F818_0x12f818");
#endif

    switch (ctx->pc) {
        case 0x12f86cu: goto label_12f86c;
        case 0x12f8acu: goto label_12f8ac;
        case 0x12f8fcu: goto label_12f8fc;
        case 0x12f924u: goto label_12f924;
        case 0x12f9b4u: goto label_12f9b4;
        case 0x12f9f8u: goto label_12f9f8;
        case 0x12fa60u: goto label_12fa60;
        case 0x12fa78u: goto label_12fa78;
        case 0x12fa90u: goto label_12fa90;
        case 0x12fabcu: goto label_12fabc;
        default: break;
    }

    ctx->pc = 0x12f818u;

    // 0x12f818: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12f818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12f81c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x12f81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x12f820: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x12f820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x12f824: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12f824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f828: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x12f828u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f82c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x12f82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12f830: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x12f830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x12f834: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12f834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f838: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x12f838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x12f83c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12f83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f840: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x12f840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x12f844: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12f844u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f848: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x12f848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x12f84c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12f84cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f850: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x12f850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x12f854: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12f854u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f858: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x12f858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12f85c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12f85cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f860: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x12f860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x12f864: 0xc046144  jal         func_118510
    ctx->pc = 0x12F864u;
    SET_GPR_U32(ctx, 31, 0x12F86Cu);
    ctx->pc = 0x12F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F864u;
    // 0x12f868: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118510u, 0x12F864u, 0x12F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F86Cu;
label_12f86c:
    // 0x12f86c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x12f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x12f870: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12f870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x12f874: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x12f874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12f878: 0x2c620021  sltiu       $v0, $v1, 0x21
    ctx->pc = 0x12f878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x12f87c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x12F87Cu;
    {
        const bool branch_taken_0x12f87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F87Cu;
        // 0x12f880: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f87c) {
            ctx->pc = 0x12F914u;
            goto label_12f914;
        }
    }
    ctx->pc = 0x12F884u;
    // 0x12f884: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x12f884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x12f888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12f888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12f88c: 0x2442dd40  addiu       $v0, $v0, -0x22C0
    ctx->pc = 0x12f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958400));
    // 0x12f890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12f890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f894: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12f894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f898: 0x800008  jr          $a0
    ctx->pc = 0x12F898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F8A0u: goto label_12f8a0;
            case 0x12F8B8u: goto label_12f8b8;
            case 0x12F8C0u: goto label_12f8c0;
            case 0x12F8C8u: goto label_12f8c8;
            case 0x12F8D0u: goto label_12f8d0;
            case 0x12F8E0u: goto label_12f8e0;
            case 0x12F8E8u: goto label_12f8e8;
            case 0x12F8F0u: goto label_12f8f0;
            case 0x12F914u: goto label_12f914;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F898u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12F8A0u;
label_12f8a0:
    // 0x12f8a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8a4: 0xc04bf4e  jal         func_12FD38
    ctx->pc = 0x12F8A4u;
    SET_GPR_U32(ctx, 31, 0x12F8ACu);
    ctx->pc = 0x12F8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F8A4u;
    // 0x12f8a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD38u, 0x12F8A4u, 0x12F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8ACu;
label_12f8ac:
    // 0x12f8ac: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x12f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x12f8b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12F8B0u;
    {
        const bool branch_taken_0x12f8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8B0u;
        // 0x12f8b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8b0) {
            ctx->pc = 0x12F914u;
            goto label_12f914;
        }
    }
    ctx->pc = 0x12F8B8u;
label_12f8b8:
    // 0x12f8b8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12F8B8u;
    {
        const bool branch_taken_0x12f8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8B8u;
        // 0x12f8bc: 0x24130098  addiu       $s3, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8b8) {
            ctx->pc = 0x12F914u;
            goto label_12f914;
        }
    }
    ctx->pc = 0x12F8C0u;
label_12f8c0:
    // 0x12f8c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12F8C0u;
    {
        const bool branch_taken_0x12f8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8C0u;
        // 0x12f8c4: 0x24130456  addiu       $s3, $zero, 0x456 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8c0) {
            ctx->pc = 0x12F914u;
            goto label_12f914;
        }
    }
    ctx->pc = 0x12F8C8u;
label_12f8c8:
    // 0x12f8c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12F8C8u;
    {
        const bool branch_taken_0x12f8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8C8u;
        // 0x12f8cc: 0x24130112  addiu       $s3, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8c8) {
            ctx->pc = 0x12F8D4u;
            goto label_12f8d4;
        }
    }
    ctx->pc = 0x12F8D0u;
label_12f8d0:
    // 0x12f8d0: 0x24130110  addiu       $s3, $zero, 0x110
    ctx->pc = 0x12f8d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_12f8d4:
    // 0x12f8d4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12f8d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f8d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12F8D8u;
    {
        const bool branch_taken_0x12f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8D8u;
        // 0x12f8dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8d8) {
            ctx->pc = 0x12F914u;
            goto label_12f914;
        }
    }
    ctx->pc = 0x12F8E0u;
label_12f8e0:
    // 0x12f8e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12F8E0u;
    {
        const bool branch_taken_0x12f8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8E0u;
        // 0x12f8e4: 0x24130457  addiu       $s3, $zero, 0x457 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8e0) {
            ctx->pc = 0x12F914u;
            goto label_12f914;
        }
    }
    ctx->pc = 0x12F8E8u;
label_12f8e8:
    // 0x12f8e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12F8E8u;
    {
        const bool branch_taken_0x12f8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8E8u;
        // 0x12f8ec: 0x24130458  addiu       $s3, $zero, 0x458 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8e8) {
            ctx->pc = 0x12F914u;
            goto label_12f914;
        }
    }
    ctx->pc = 0x12F8F0u;
label_12f8f0:
    // 0x12f8f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12f8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8f4: 0xc046356  jal         func_118D58
    ctx->pc = 0x12F8F4u;
    SET_GPR_U32(ctx, 31, 0x12F8FCu);
    ctx->pc = 0x12F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F8F4u;
    // 0x12f8f8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D58u, 0x12F8F4u, 0x12F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8FCu;
label_12f8fc:
    // 0x12f8fc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12f8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f900: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x12f900u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12f904: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x12f904u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f908: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x12f908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12f90c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x12f90cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f910: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x12f910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_12f914:
    // 0x12f914: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12f914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12f918: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x12f918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12f91c: 0xc047866  jal         func_11E198
    ctx->pc = 0x12F91Cu;
    SET_GPR_U32(ctx, 31, 0x12F924u);
    ctx->pc = 0x12F920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F91Cu;
    // 0x12f920: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x12F91Cu, 0x12F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F924u;
label_12f924:
    // 0x12f924: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f928: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F928u;
    {
        const bool branch_taken_0x12f928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F928u;
        // 0x12f92c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f928) {
            ctx->pc = 0x12F940u;
            goto label_12f940;
        }
    }
    ctx->pc = 0x12F930u;
    // 0x12f930: 0x8e230ff8  lw          $v1, 0xFF8($s1)
    ctx->pc = 0x12f930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
    // 0x12f934: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f938: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x12f938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x12f93c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x12f93cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12f940:
    // 0x12f940: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x12f940u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
    // 0x12f944: 0x3a630002  xori        $v1, $s3, 0x2
    ctx->pc = 0x12f944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)2);
    // 0x12f948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f94c: 0x3a02b  sltu        $s4, $zero, $v1
    ctx->pc = 0x12f94cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12f950: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x12f950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x12f954: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x12f954u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
    // 0x12f958: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f95c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12f95cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12f960: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F960u;
    {
        const bool branch_taken_0x12f960 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F960u;
        // 0x12f964: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f960) {
            ctx->pc = 0x12F970u;
            goto label_12f970;
        }
    }
    ctx->pc = 0x12F968u;
    // 0x12f968: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12F968u;
    {
        const bool branch_taken_0x12f968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F968u;
        // 0x12f96c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f968) {
            ctx->pc = 0x12F9B8u;
            goto label_12f9b8;
        }
    }
    ctx->pc = 0x12F970u;
label_12f970:
    // 0x12f970: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F970u;
    {
        const bool branch_taken_0x12f970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f970) {
            ctx->pc = 0x12F98Cu;
            goto label_12f98c;
        }
    }
    ctx->pc = 0x12F978u;
    // 0x12f978: 0x17c0000a  bnez        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x12F978u;
    {
        const bool branch_taken_0x12f978 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F978u;
        // 0x12f97c: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f978) {
            ctx->pc = 0x12F9A4u;
            goto label_12f9a4;
        }
    }
    ctx->pc = 0x12F980u;
    // 0x12f980: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12f980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12f984: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12F984u;
    {
        const bool branch_taken_0x12f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F984u;
        // 0x12f988: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f984) {
            ctx->pc = 0x12F9B8u;
            goto label_12f9b8;
        }
    }
    ctx->pc = 0x12F98Cu;
label_12f98c:
    // 0x12f98c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F98Cu;
    {
        const bool branch_taken_0x12f98c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F98Cu;
        // 0x12f990: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f98c) {
            ctx->pc = 0x12F9A4u;
            goto label_12f9a4;
        }
    }
    ctx->pc = 0x12F994u;
    // 0x12f994: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F994u;
    {
        const bool branch_taken_0x12f994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F994u;
        // 0x12f998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f994) {
            ctx->pc = 0x12F9A8u;
            goto label_12f9a8;
        }
    }
    ctx->pc = 0x12F99Cu;
    // 0x12f99c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12F99Cu;
    {
        const bool branch_taken_0x12f99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F99Cu;
        // 0x12f9a0: 0x3aa30001  xori        $v1, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f99c) {
            ctx->pc = 0x12F9B8u;
            goto label_12f9b8;
        }
    }
    ctx->pc = 0x12F9A4u;
label_12f9a4:
    // 0x12f9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12f9a8:
    // 0x12f9a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12f9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9ac: 0xc08e04a  jal         func_238128
    ctx->pc = 0x12F9ACu;
    SET_GPR_U32(ctx, 31, 0x12F9B4u);
    ctx->pc = 0x12F9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F9ACu;
    // 0x12f9b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238128u, 0x12F9ACu, 0x12F9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9B4u;
label_12f9b4:
    // 0x12f9b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12f9b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f9b8:
    // 0x12f9b8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x12f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12f9bc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F9BCu;
    {
        const bool branch_taken_0x12f9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9BCu;
        // 0x12f9c0: 0x26450008  addiu       $a1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9bc) {
            ctx->pc = 0x12F9E4u;
            goto label_12f9e4;
        }
    }
    ctx->pc = 0x12F9C4u;
    // 0x12f9c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f9cc: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x12f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x12f9d0: 0xae440020  sw          $a0, 0x20($s2)
    ctx->pc = 0x12f9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
    // 0x12f9d4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x12f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x12f9d8: 0xae530010  sw          $s3, 0x10($s2)
    ctx->pc = 0x12f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
    // 0x12f9dc: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x12f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x12f9e0: 0xae5e001c  sw          $fp, 0x1C($s2)
    ctx->pc = 0x12f9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 30));
label_12f9e4:
    // 0x12f9e4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F9E4u;
    {
        const bool branch_taken_0x12f9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9E4u;
        // 0x12f9e8: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9e4) {
            ctx->pc = 0x12FA00u;
            goto label_12fa00;
        }
    }
    ctx->pc = 0x12F9ECu;
    // 0x12f9ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9f0: 0xc04beee  jal         func_12FBB8
    ctx->pc = 0x12F9F0u;
    SET_GPR_U32(ctx, 31, 0x12F9F8u);
    ctx->pc = 0x12F9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F9F0u;
    // 0x12f9f4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FBB8u, 0x12F9F0u, 0x12F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9F8u;
label_12f9f8:
    // 0x12f9f8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x12F9F8u;
    {
        const bool branch_taken_0x12f9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9F8u;
        // 0x12f9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9f8) {
            ctx->pc = 0x12FAFCu;
            goto label_12fafc;
        }
    }
    ctx->pc = 0x12FA00u;
label_12fa00:
    // 0x12fa00: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x12FA00u;
    {
        const bool branch_taken_0x12fa00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA00u;
        // 0x12fa04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa00) {
            ctx->pc = 0x12FA4Cu;
            goto label_12fa4c;
        }
    }
    ctx->pc = 0x12FA08u;
    // 0x12fa08: 0xde231020  ld          $v1, 0x1020($s1)
    ctx->pc = 0x12fa08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
    // 0x12fa0c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12fa10: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x12fa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x12fa14: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x12fa14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12fa18: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x12fa18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x12fa1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12fa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12fa20: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x12fa20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12fa24: 0x635b8  dsll        $a2, $a2, 22
    ctx->pc = 0x12fa24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 22);
    // 0x12fa28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x12fa28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x12fa2c: 0xfe231020  sd          $v1, 0x1020($s1)
    ctx->pc = 0x12fa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 3));
    // 0x12fa30: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x12fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12fa34: 0xac450240  sw          $a1, 0x240($v0)
    ctx->pc = 0x12fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 5));
    // 0x12fa38: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x12fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12fa3c: 0xac650244  sw          $a1, 0x244($v1)
    ctx->pc = 0x12fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 580), GPR_U32(ctx, 5));
    // 0x12fa40: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x12fa40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
    // 0x12fa44: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12fa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x12fa48: 0xfe221020  sd          $v0, 0x1020($s1)
    ctx->pc = 0x12fa48u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
label_12fa4c:
    // 0x12fa4c: 0x13c00022  beqz        $fp, . + 4 + (0x22 << 2)
    ctx->pc = 0x12FA4Cu;
    {
        const bool branch_taken_0x12fa4c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA4Cu;
        // 0x12fa50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa4c) {
            ctx->pc = 0x12FAD8u;
            goto label_12fad8;
        }
    }
    ctx->pc = 0x12FA54u;
    // 0x12fa54: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x12fa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x12fa58: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x12FA58u;
    SET_GPR_U32(ctx, 31, 0x12FA60u);
    ctx->pc = 0x12FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA58u;
    // 0x12fa5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x12FA58u, 0x12FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA60u;
label_12fa60:
    // 0x12fa60: 0x8e270334  lw          $a3, 0x334($s1)
    ctx->pc = 0x12fa60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x12fa64: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x12fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x12fa68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FA68u;
    {
        const bool branch_taken_0x12fa68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA68u;
        // 0x12fa6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa68) {
            ctx->pc = 0x12FA80u;
            goto label_12fa80;
        }
    }
    ctx->pc = 0x12FA70u;
    // 0x12fa70: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12FA70u;
    {
        const bool branch_taken_0x12fa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA70u;
        // 0x12fa74: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa70) {
            ctx->pc = 0x12FAACu;
            goto label_12faac;
        }
    }
    ctx->pc = 0x12FA78u;
label_12fa78:
    // 0x12fa78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12FA78u;
    {
        const bool branch_taken_0x12fa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA78u;
        // 0x12fa7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa78) {
            ctx->pc = 0x12FAACu;
            goto label_12faac;
        }
    }
    ctx->pc = 0x12FA80u;
label_12fa80:
    // 0x12fa80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12fa80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa84: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x12fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x12fa88: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x12fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
    // 0x12fa8c: 0x0  nop
    ctx->pc = 0x12fa8cu;
    // NOP
label_12fa90:
    // 0x12fa90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12fa94: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12FA94u;
    {
        const bool branch_taken_0x12fa94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA94u;
        // 0x12fa98: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa94) {
            ctx->pc = 0x12FA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fa78;
        }
    }
    ctx->pc = 0x12FA9Cu;
    // 0x12fa9c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x12fa9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12faa0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12FAA0u;
    {
        const bool branch_taken_0x12faa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAA0u;
        // 0x12faa4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12faa0) {
            ctx->pc = 0x12FA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fa90;
        }
    }
    ctx->pc = 0x12FAA8u;
    // 0x12faa8: 0x8cf001e8  lw          $s0, 0x1E8($a3)
    ctx->pc = 0x12faa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_12faac:
    // 0x12faac: 0x24a57f78  addiu       $a1, $a1, 0x7F78
    ctx->pc = 0x12faacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32632));
    // 0x12fab0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12fab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fab4: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x12FAB4u;
    SET_GPR_U32(ctx, 31, 0x12FABCu);
    ctx->pc = 0x12FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FAB4u;
    // 0x12fab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x12FAB4u, 0x12FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FABCu;
label_12fabc:
    // 0x12fabc: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x12fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12fac0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FAC0u;
    {
        const bool branch_taken_0x12fac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAC0u;
        // 0x12fac4: 0x9602002a  lhu         $v0, 0x2A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fac0) {
            ctx->pc = 0x12FAD0u;
            goto label_12fad0;
        }
    }
    ctx->pc = 0x12FAC8u;
    // 0x12fac8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12FAC8u;
    {
        const bool branch_taken_0x12fac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAC8u;
        // 0x12facc: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fac8) {
            ctx->pc = 0x12FAD4u;
            goto label_12fad4;
        }
    }
    ctx->pc = 0x12FAD0u;
label_12fad0:
    // 0x12fad0: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x12fad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
label_12fad4:
    // 0x12fad4: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x12fad4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
label_12fad8:
    // 0x12fad8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fadc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FADCu;
    {
        const bool branch_taken_0x12fadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FADCu;
        // 0x12fae0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fadc) {
            ctx->pc = 0x12FAF0u;
            goto label_12faf0;
        }
    }
    ctx->pc = 0x12FAE4u;
    // 0x12fae4: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12FAE4u;
    {
        const bool branch_taken_0x12fae4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fae4) {
            ctx->pc = 0x12FAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FAE4u;
            // 0x12fae8: 0xae530030  sw          $s3, 0x30($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FAECu;
            goto label_12faec;
        }
    }
    ctx->pc = 0x12FAECu;
label_12faec:
    // 0x12faec: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x12faecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12faf0:
    // 0x12faf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12faf4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x12faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12faf8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x12faf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_12fafc:
    // 0x12fafc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x12fafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fb00: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x12fb00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12fb04: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x12fb04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fb08: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x12fb08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12fb0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12fb0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fb10: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x12fb10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12fb14: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x12fb14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12fb18: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x12fb18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12fb1c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x12fb1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fb20: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x12fb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12fb24: 0x3e00008  jr          $ra
    ctx->pc = 0x12FB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB24u;
        // 0x12fb28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FB2Cu;
    // 0x12fb2c: 0x0  nop
    ctx->pc = 0x12fb2cu;
    // NOP
    ctx->pc = 0x12fb30u;
}
