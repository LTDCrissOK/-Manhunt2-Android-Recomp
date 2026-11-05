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

// Function: sub_0027A7C0
// Address: 0x27a7c0 - 0x27aa58
void sub_0027A7C0_0x27a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A7C0_0x27a7c0");
#endif

    switch (ctx->pc) {
        case 0x27a7fcu: goto label_27a7fc;
        case 0x27a810u: goto label_27a810;
        case 0x27a818u: goto label_27a818;
        case 0x27a860u: goto label_27a860;
        case 0x27a890u: goto label_27a890;
        case 0x27a8a0u: goto label_27a8a0;
        case 0x27a8b0u: goto label_27a8b0;
        case 0x27a8b8u: goto label_27a8b8;
        case 0x27a8c4u: goto label_27a8c4;
        case 0x27a8d4u: goto label_27a8d4;
        case 0x27a8e4u: goto label_27a8e4;
        case 0x27a8ecu: goto label_27a8ec;
        case 0x27a8f8u: goto label_27a8f8;
        case 0x27a904u: goto label_27a904;
        case 0x27a930u: goto label_27a930;
        case 0x27a948u: goto label_27a948;
        case 0x27a958u: goto label_27a958;
        case 0x27a96cu: goto label_27a96c;
        case 0x27a974u: goto label_27a974;
        case 0x27a980u: goto label_27a980;
        case 0x27a98cu: goto label_27a98c;
        case 0x27a998u: goto label_27a998;
        case 0x27a9b0u: goto label_27a9b0;
        case 0x27a9c0u: goto label_27a9c0;
        case 0x27a9d0u: goto label_27a9d0;
        case 0x27a9e4u: goto label_27a9e4;
        case 0x27a9ecu: goto label_27a9ec;
        case 0x27a9f8u: goto label_27a9f8;
        case 0x27aa04u: goto label_27aa04;
        case 0x27aa10u: goto label_27aa10;
        case 0x27aa1cu: goto label_27aa1c;
        case 0x27aa28u: goto label_27aa28;
        default: break;
    }

    ctx->pc = 0x27a7c0u;

    // 0x27a7c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x27a7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x27a7c4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27a7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x27a7c8: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x27a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x27a7cc: 0x24a59408  addiu       $a1, $a1, -0x6BF8
    ctx->pc = 0x27a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939656));
    // 0x27a7d0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x27a7d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a7d4: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x27a7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x27a7d8: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x27a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x27a7dc: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x27a7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x27a7e0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x27a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x27a7e4: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x27a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x27a7e8: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x27a7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x27a7ec: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x27a7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x27a7f0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x27a7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x27a7f4: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x27A7F4u;
    SET_GPR_U32(ctx, 31, 0x27A7FCu);
    ctx->pc = 0x27A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A7F4u;
    // 0x27a7f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x27A7F4u, 0x27A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A7FCu;
label_27a7fc:
    // 0x27a7fc: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x27a7fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27a800: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27a800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a804: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27a804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a808: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x27A808u;
    SET_GPR_U32(ctx, 31, 0x27A810u);
    ctx->pc = 0x27A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A808u;
    // 0x27a80c: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x27A808u, 0x27A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A810u;
label_27a810:
    // 0x27a810: 0xc09eaf4  jal         func_27ABD0
    ctx->pc = 0x27A810u;
    SET_GPR_U32(ctx, 31, 0x27A818u);
    ctx->pc = 0x27A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A810u;
    // 0x27a814: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27ABD0u, 0x27A810u, 0x27A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A818u;
label_27a818:
    // 0x27a818: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27a818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27a81c: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x27a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x27a820: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x27a820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27a824: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x27A824u;
    {
        const bool branch_taken_0x27a824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A824u;
        // 0x27a828: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a824) {
            ctx->pc = 0x27A90Cu;
            goto label_27a90c;
        }
    }
    ctx->pc = 0x27A82Cu;
    // 0x27a82c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x27a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x27a830: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x27a830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27a834: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x27a834u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x27a838: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x27a838u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a83c: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x27a83cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    // 0x27a840: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x27a840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27a844: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x27A844u;
    {
        const bool branch_taken_0x27a844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A844u;
        // 0x27a848: 0x3c170047  lui         $s7, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a844) {
            ctx->pc = 0x27A878u;
            goto label_27a878;
        }
    }
    ctx->pc = 0x27A84Cu;
    // 0x27a84c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x27a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x27a850: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27A850u;
    {
        const bool branch_taken_0x27a850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a850) {
            ctx->pc = 0x27A854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A850u;
            // 0x27a854: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A87Cu;
            goto label_27a87c;
        }
    }
    ctx->pc = 0x27A858u;
    // 0x27a858: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x27a858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x27a85c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27a860:
    // 0x27a860: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27a860u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a864: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27A864u;
    {
        const bool branch_taken_0x27a864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A864u;
        // 0x27a868: 0x24650001  addiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a864) {
            ctx->pc = 0x27A880u;
            goto label_27a880;
        }
    }
    ctx->pc = 0x27A86Cu;
    // 0x27a86c: 0x0  nop
    ctx->pc = 0x27a86cu;
    // NOP
    // 0x27a870: 0x5444fffb  bnel        $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x27A870u;
    {
        const bool branch_taken_0x27a870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x27a870) {
            ctx->pc = 0x27A874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A870u;
            // 0x27a874: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a860;
        }
    }
    ctx->pc = 0x27A878u;
label_27a878:
    // 0x27a878: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27a878u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27a87c:
    // 0x27a87c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x27a87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27a880:
    // 0x27a880: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27a880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a884: 0x2610edc8  addiu       $s0, $s0, -0x1238
    ctx->pc = 0x27a884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962632));
    // 0x27a888: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x27A888u;
    SET_GPR_U32(ctx, 31, 0x27A890u);
    ctx->pc = 0x27A88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A888u;
    // 0x27a88c: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x27A888u, 0x27A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A890u;
label_27a890:
    // 0x27a890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27a894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a898: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x27A898u;
    SET_GPR_U32(ctx, 31, 0x27A8A0u);
    ctx->pc = 0x27A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A898u;
    // 0x27a89c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x27A898u, 0x27A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8A0u;
label_27a8a0:
    // 0x27a8a0: 0x26a69410  addiu       $a2, $s5, -0x6BF0
    ctx->pc = 0x27a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939664));
    // 0x27a8a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27a8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8a8: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x27A8A8u;
    SET_GPR_U32(ctx, 31, 0x27A8B0u);
    ctx->pc = 0x27A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A8A8u;
    // 0x27a8ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x27A8A8u, 0x27A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8B0u;
label_27a8b0:
    // 0x27a8b0: 0xc09eabc  jal         func_27AAF0
    ctx->pc = 0x27A8B0u;
    SET_GPR_U32(ctx, 31, 0x27A8B8u);
    ctx->pc = 0x27A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A8B0u;
    // 0x27a8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AAF0u, 0x27A8B0u, 0x27A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8B8u;
label_27a8b8:
    // 0x27a8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8bc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A8BCu;
    SET_GPR_U32(ctx, 31, 0x27A8C4u);
    ctx->pc = 0x27A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A8BCu;
    // 0x27a8c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A8BCu, 0x27A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8C4u;
label_27a8c4:
    // 0x27a8c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27a8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8cc: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x27A8CCu;
    SET_GPR_U32(ctx, 31, 0x27A8D4u);
    ctx->pc = 0x27A8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A8CCu;
    // 0x27a8d0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x27A8CCu, 0x27A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8D4u;
label_27a8d4:
    // 0x27a8d4: 0x26e69418  addiu       $a2, $s7, -0x6BE8
    ctx->pc = 0x27a8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939672));
    // 0x27a8d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27a8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8dc: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x27A8DCu;
    SET_GPR_U32(ctx, 31, 0x27A8E4u);
    ctx->pc = 0x27A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A8DCu;
    // 0x27a8e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x27A8DCu, 0x27A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8E4u;
label_27a8e4:
    // 0x27a8e4: 0xc09ead8  jal         func_27AB60
    ctx->pc = 0x27A8E4u;
    SET_GPR_U32(ctx, 31, 0x27A8ECu);
    ctx->pc = 0x27A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A8E4u;
    // 0x27a8e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AB60u, 0x27A8E4u, 0x27A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8ECu;
label_27a8ec:
    // 0x27a8ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27a8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8f0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A8F0u;
    SET_GPR_U32(ctx, 31, 0x27A8F8u);
    ctx->pc = 0x27A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A8F0u;
    // 0x27a8f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A8F0u, 0x27A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A8F8u;
label_27a8f8:
    // 0x27a8f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27a8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8fc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A8FCu;
    SET_GPR_U32(ctx, 31, 0x27A904u);
    ctx->pc = 0x27A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A8FCu;
    // 0x27a900: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A8FCu, 0x27A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A904u;
label_27a904:
    // 0x27a904: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x27A904u;
    {
        const bool branch_taken_0x27a904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A904u;
        // 0x27a908: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a904) {
            ctx->pc = 0x27AA14u;
            goto label_27aa14;
        }
    }
    ctx->pc = 0x27A90Cu;
label_27a90c:
    // 0x27a90c: 0x3c13004c  lui         $s3, 0x4C
    ctx->pc = 0x27a90cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)76 << 16));
    // 0x27a910: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x27a910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27a914: 0x2673edc8  addiu       $s3, $s3, -0x1238
    ctx->pc = 0x27a914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962632));
    // 0x27a918: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x27a918u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27a91c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x27a91cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27a920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27a920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a924: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27a924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a928: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x27A928u;
    SET_GPR_U32(ctx, 31, 0x27A930u);
    ctx->pc = 0x27A92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A928u;
    // 0x27a92c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x27A928u, 0x27A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A930u;
label_27a930:
    // 0x27a930: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x27a930u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x27a934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a938: 0x26319420  addiu       $s1, $s1, -0x6BE0
    ctx->pc = 0x27a938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939680));
    // 0x27a93c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27a93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a940: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x27A940u;
    SET_GPR_U32(ctx, 31, 0x27A948u);
    ctx->pc = 0x27A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A940u;
    // 0x27a944: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x27A940u, 0x27A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A948u;
label_27a948:
    // 0x27a948: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27a948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a94c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27a94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a950: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x27A950u;
    SET_GPR_U32(ctx, 31, 0x27A958u);
    ctx->pc = 0x27A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A950u;
    // 0x27a954: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x27A950u, 0x27A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A958u;
label_27a958:
    // 0x27a958: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x27a958u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x27a95c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27a95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a960: 0x24c69410  addiu       $a2, $a2, -0x6BF0
    ctx->pc = 0x27a960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939664));
    // 0x27a964: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x27A964u;
    SET_GPR_U32(ctx, 31, 0x27A96Cu);
    ctx->pc = 0x27A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A964u;
    // 0x27a968: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x27A964u, 0x27A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A96Cu;
label_27a96c:
    // 0x27a96c: 0xc09eabc  jal         func_27AAF0
    ctx->pc = 0x27A96Cu;
    SET_GPR_U32(ctx, 31, 0x27A974u);
    ctx->pc = 0x27A970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A96Cu;
    // 0x27a970: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AAF0u, 0x27A96Cu, 0x27A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A974u;
label_27a974:
    // 0x27a974: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27a974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a978: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A978u;
    SET_GPR_U32(ctx, 31, 0x27A980u);
    ctx->pc = 0x27A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A978u;
    // 0x27a97c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A978u, 0x27A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A980u;
label_27a980:
    // 0x27a980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a984: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A984u;
    SET_GPR_U32(ctx, 31, 0x27A98Cu);
    ctx->pc = 0x27A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A984u;
    // 0x27a988: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A984u, 0x27A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A98Cu;
label_27a98c:
    // 0x27a98c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27a98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a990: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A990u;
    SET_GPR_U32(ctx, 31, 0x27A998u);
    ctx->pc = 0x27A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A990u;
    // 0x27a994: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A990u, 0x27A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A998u;
label_27a998:
    // 0x27a998: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x27a998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27a99c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x27a99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27a9a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27a9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27a9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9a8: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x27A9A8u;
    SET_GPR_U32(ctx, 31, 0x27A9B0u);
    ctx->pc = 0x27A9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9A8u;
    // 0x27a9ac: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x27A9A8u, 0x27A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9B0u;
label_27a9b0:
    // 0x27a9b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27a9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9b8: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x27A9B8u;
    SET_GPR_U32(ctx, 31, 0x27A9C0u);
    ctx->pc = 0x27A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9B8u;
    // 0x27a9bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x27A9B8u, 0x27A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9C0u;
label_27a9c0:
    // 0x27a9c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27a9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27a9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9c8: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x27A9C8u;
    SET_GPR_U32(ctx, 31, 0x27A9D0u);
    ctx->pc = 0x27A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9C8u;
    // 0x27a9cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x27A9C8u, 0x27A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9D0u;
label_27a9d0:
    // 0x27a9d0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x27a9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x27a9d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27a9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9d8: 0x24c69418  addiu       $a2, $a2, -0x6BE8
    ctx->pc = 0x27a9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939672));
    // 0x27a9dc: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x27A9DCu;
    SET_GPR_U32(ctx, 31, 0x27A9E4u);
    ctx->pc = 0x27A9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9DCu;
    // 0x27a9e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x27A9DCu, 0x27A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9E4u;
label_27a9e4:
    // 0x27a9e4: 0xc09ead8  jal         func_27AB60
    ctx->pc = 0x27A9E4u;
    SET_GPR_U32(ctx, 31, 0x27A9ECu);
    ctx->pc = 0x27A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9E4u;
    // 0x27a9e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AB60u, 0x27A9E4u, 0x27A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9ECu;
label_27a9ec:
    // 0x27a9ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27a9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9f0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A9F0u;
    SET_GPR_U32(ctx, 31, 0x27A9F8u);
    ctx->pc = 0x27A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9F0u;
    // 0x27a9f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A9F0u, 0x27A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9F8u;
label_27a9f8:
    // 0x27a9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9fc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A9FCu;
    SET_GPR_U32(ctx, 31, 0x27AA04u);
    ctx->pc = 0x27AA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9FCu;
    // 0x27aa00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A9FCu, 0x27AA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA04u;
label_27aa04:
    // 0x27aa04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27aa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa08: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27AA08u;
    SET_GPR_U32(ctx, 31, 0x27AA10u);
    ctx->pc = 0x27AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AA08u;
    // 0x27aa0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27AA08u, 0x27AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA10u;
label_27aa10:
    // 0x27aa10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27aa10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27aa14:
    // 0x27aa14: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27AA14u;
    SET_GPR_U32(ctx, 31, 0x27AA1Cu);
    ctx->pc = 0x27AA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AA14u;
    // 0x27aa18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27AA14u, 0x27AA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA1Cu;
label_27aa1c:
    // 0x27aa1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27aa1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa20: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27AA20u;
    SET_GPR_U32(ctx, 31, 0x27AA28u);
    ctx->pc = 0x27AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AA20u;
    // 0x27aa24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27AA20u, 0x27AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA28u;
label_27aa28:
    // 0x27aa28: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x27aa28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27aa2c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x27aa2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x27aa30: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x27aa30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27aa34: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x27aa34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x27aa38: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x27aa38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27aa3c: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x27aa3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x27aa40: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x27aa40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27aa44: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x27aa44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x27aa48: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x27aa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27aa4c: 0x3e00008  jr          $ra
    ctx->pc = 0x27AA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA4Cu;
        // 0x27aa50: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AA54u;
    // 0x27aa54: 0x0  nop
    ctx->pc = 0x27aa54u;
    // NOP
    ctx->pc = 0x27aa58u;
}
