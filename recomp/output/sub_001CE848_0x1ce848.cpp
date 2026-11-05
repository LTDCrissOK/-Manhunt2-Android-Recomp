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

// Function: sub_001CE848
// Address: 0x1ce848 - 0x1ce988
void sub_001CE848_0x1ce848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE848_0x1ce848");
#endif

    switch (ctx->pc) {
        case 0x1ce88cu: goto label_1ce88c;
        case 0x1ce89cu: goto label_1ce89c;
        case 0x1ce8c4u: goto label_1ce8c4;
        case 0x1ce8d4u: goto label_1ce8d4;
        case 0x1ce8fcu: goto label_1ce8fc;
        case 0x1ce924u: goto label_1ce924;
        case 0x1ce934u: goto label_1ce934;
        case 0x1ce944u: goto label_1ce944;
        case 0x1ce964u: goto label_1ce964;
        case 0x1ce974u: goto label_1ce974;
        default: break;
    }

    ctx->pc = 0x1ce848u;

    // 0x1ce848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce84c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ce84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ce850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce854: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ce854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ce858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce85c: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x1ce85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1ce860: 0x10820044  beq         $a0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1CE860u;
    {
        const bool branch_taken_0x1ce860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE860u;
        // 0x1ce864: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce860) {
            ctx->pc = 0x1CE974u;
            goto label_1ce974;
        }
    }
    ctx->pc = 0x1CE868u;
    // 0x1ce868: 0x8c438a5c  lw          $v1, -0x75A4($v0)
    ctx->pc = 0x1ce868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937180)));
    // 0x1ce86c: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1CE86Cu;
    {
        const bool branch_taken_0x1ce86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE86Cu;
        // 0x1ce870: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce86c) {
            ctx->pc = 0x1CE974u;
            goto label_1ce974;
        }
    }
    ctx->pc = 0x1CE874u;
    // 0x1ce874: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE874u;
    {
        const bool branch_taken_0x1ce874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE874u;
        // 0x1ce878: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce874) {
            ctx->pc = 0x1CE8ACu;
            goto label_1ce8ac;
        }
    }
    ctx->pc = 0x1CE87Cu;
    // 0x1ce87c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1ce87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce880: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ce880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce884: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1CE884u;
    SET_GPR_U32(ctx, 31, 0x1CE88Cu);
    ctx->pc = 0x1CE888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE884u;
    // 0x1ce888: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1CE884u, 0x1CE88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE88Cu;
label_1ce88c:
    // 0x1ce88c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ce88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce890: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1ce890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ce894: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1CE894u;
    SET_GPR_U32(ctx, 31, 0x1CE89Cu);
    ctx->pc = 0x1CE898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE894u;
    // 0x1ce898: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1CE894u, 0x1CE89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE89Cu;
label_1ce89c:
    // 0x1ce89c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ce89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce8a0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1ce8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1ce8a4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CE8A4u;
    {
        const bool branch_taken_0x1ce8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8A4u;
        // 0x1ce8a8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8a4) {
            ctx->pc = 0x1CE91Cu;
            goto label_1ce91c;
        }
    }
    ctx->pc = 0x1CE8ACu;
label_1ce8ac:
    // 0x1ce8ac: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE8ACu;
    {
        const bool branch_taken_0x1ce8ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8ACu;
        // 0x1ce8b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8ac) {
            ctx->pc = 0x1CE8E4u;
            goto label_1ce8e4;
        }
    }
    ctx->pc = 0x1CE8B4u;
    // 0x1ce8b4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1ce8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce8b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ce8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ce8bc: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1CE8BCu;
    SET_GPR_U32(ctx, 31, 0x1CE8C4u);
    ctx->pc = 0x1CE8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE8BCu;
    // 0x1ce8c0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1CE8BCu, 0x1CE8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE8C4u;
label_1ce8c4:
    // 0x1ce8c4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ce8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce8c8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1ce8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ce8cc: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1CE8CCu;
    SET_GPR_U32(ctx, 31, 0x1CE8D4u);
    ctx->pc = 0x1CE8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE8CCu;
    // 0x1ce8d0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1CE8CCu, 0x1CE8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE8D4u;
label_1ce8d4:
    // 0x1ce8d4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ce8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce8d8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1ce8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1ce8dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CE8DCu;
    {
        const bool branch_taken_0x1ce8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8DCu;
        // 0x1ce8e0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8dc) {
            ctx->pc = 0x1CE91Cu;
            goto label_1ce91c;
        }
    }
    ctx->pc = 0x1CE8E4u;
label_1ce8e4:
    // 0x1ce8e4: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE8E4u;
    {
        const bool branch_taken_0x1ce8e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8E4u;
        // 0x1ce8e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8e4) {
            ctx->pc = 0x1CE90Cu;
            goto label_1ce90c;
        }
    }
    ctx->pc = 0x1CE8ECu;
    // 0x1ce8ec: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1ce8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce8f0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ce8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce8f4: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1CE8F4u;
    SET_GPR_U32(ctx, 31, 0x1CE8FCu);
    ctx->pc = 0x1CE8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE8F4u;
    // 0x1ce8f8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1CE8F4u, 0x1CE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE8FCu;
label_1ce8fc:
    // 0x1ce8fc: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ce8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce900: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1ce900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1ce904: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE904u;
    {
        const bool branch_taken_0x1ce904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE904u;
        // 0x1ce908: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce904) {
            ctx->pc = 0x1CE91Cu;
            goto label_1ce91c;
        }
    }
    ctx->pc = 0x1CE90Cu;
label_1ce90c:
    // 0x1ce90c: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CE90Cu;
    {
        const bool branch_taken_0x1ce90c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE90Cu;
        // 0x1ce910: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce90c) {
            ctx->pc = 0x1CE94Cu;
            goto label_1ce94c;
        }
    }
    ctx->pc = 0x1CE914u;
    // 0x1ce914: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1ce914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce918: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ce918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ce91c:
    // 0x1ce91c: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1CE91Cu;
    SET_GPR_U32(ctx, 31, 0x1CE924u);
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1CE91Cu, 0x1CE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE924u;
label_1ce924:
    // 0x1ce924: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ce924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce928: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1ce928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1ce92c: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1CE92Cu;
    SET_GPR_U32(ctx, 31, 0x1CE934u);
    ctx->pc = 0x1CE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE92Cu;
    // 0x1ce930: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1CE92Cu, 0x1CE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE934u;
label_1ce934:
    // 0x1ce934: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ce934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce938: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1ce938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1ce93c: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1CE93Cu;
    SET_GPR_U32(ctx, 31, 0x1CE944u);
    ctx->pc = 0x1CE940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE93Cu;
    // 0x1ce940: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1CE93Cu, 0x1CE944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE944u;
label_1ce944:
    // 0x1ce944: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CE944u;
    {
        const bool branch_taken_0x1ce944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE944u;
        // 0x1ce948: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce944) {
            ctx->pc = 0x1CE978u;
            goto label_1ce978;
        }
    }
    ctx->pc = 0x1CE94Cu;
label_1ce94c:
    // 0x1ce94c: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CE94Cu;
    {
        const bool branch_taken_0x1ce94c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce94c) {
            ctx->pc = 0x1CE950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE94Cu;
            // 0x1ce950: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE978u;
            goto label_1ce978;
        }
    }
    ctx->pc = 0x1CE954u;
    // 0x1ce954: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1ce954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce958: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1ce958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ce95c: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1CE95Cu;
    SET_GPR_U32(ctx, 31, 0x1CE964u);
    ctx->pc = 0x1CE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE95Cu;
    // 0x1ce960: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1CE95Cu, 0x1CE964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE964u;
label_1ce964:
    // 0x1ce964: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ce964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce968: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1ce968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1ce96c: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1CE96Cu;
    SET_GPR_U32(ctx, 31, 0x1CE974u);
    ctx->pc = 0x1CE970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE96Cu;
    // 0x1ce970: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1CE96Cu, 0x1CE974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE974u;
label_1ce974:
    // 0x1ce974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce978:
    // 0x1ce978: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ce978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE97Cu;
        // 0x1ce980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE984u;
    // 0x1ce984: 0x0  nop
    ctx->pc = 0x1ce984u;
    // NOP
    ctx->pc = 0x1ce988u;
}
