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

// Function: sub_00277318
// Address: 0x277318 - 0x277460
void sub_00277318_0x277318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277318_0x277318");
#endif

    switch (ctx->pc) {
        case 0x27735cu: goto label_27735c;
        case 0x2773a8u: goto label_2773a8;
        case 0x2773b4u: goto label_2773b4;
        case 0x2773c8u: goto label_2773c8;
        case 0x2773d4u: goto label_2773d4;
        case 0x2773dcu: goto label_2773dc;
        case 0x2773ecu: goto label_2773ec;
        case 0x27741cu: goto label_27741c;
        case 0x277438u: goto label_277438;
        default: break;
    }

    ctx->pc = 0x277318u;

    // 0x277318: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x277318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x27731c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x27731cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x277320: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x277320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x277324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277328: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x277328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x27732c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27732cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277330: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x277330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x277334: 0x244249c0  addiu       $v0, $v0, 0x49C0
    ctx->pc = 0x277334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18880));
    // 0x277338: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x277338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x27733c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27733cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277340: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x277340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x277344: 0x8c432040  lw          $v1, 0x2040($v0)
    ctx->pc = 0x277344u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B6A00u));
    // 0x277348: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x277348u;
    {
        const bool branch_taken_0x277348 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x27734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277348u;
        // 0x27734c: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277348) {
            ctx->pc = 0x277358u;
            goto label_277358;
        }
    }
    ctx->pc = 0x277350u;
    // 0x277350: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x277350u;
    {
        const bool branch_taken_0x277350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277350u;
        // 0x277354: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277350) {
            ctx->pc = 0x277384u;
            goto label_277384;
        }
    }
    ctx->pc = 0x277358u;
label_277358:
    // 0x277358: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x277358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27735c:
    // 0x27735c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x27735cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x277360: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x277360u;
    {
        const bool branch_taken_0x277360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277360u;
        // 0x277364: 0x24022080  addiu       $v0, $zero, 0x2080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277360) {
            ctx->pc = 0x277384u;
            goto label_277384;
        }
    }
    ctx->pc = 0x277368u;
    // 0x277368: 0x266449c0  addiu       $a0, $s3, 0x49C0
    ctx->pc = 0x277368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 18880));
    // 0x27736c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x27736cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x277370: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x277370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x277374: 0x8c432040  lw          $v1, 0x2040($v0)
    ctx->pc = 0x277374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8256)));
    // 0x277378: 0x463fff8  bgezl       $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x277378u;
    {
        const bool branch_taken_0x277378 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x277378) {
            ctx->pc = 0x27737Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277378u;
            // 0x27737c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27735Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27735c;
        }
    }
    ctx->pc = 0x277380u;
    // 0x277380: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x277380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_277384:
    // 0x277384: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x277384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277388: 0x1242002d  beq         $s2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x277388u;
    {
        const bool branch_taken_0x277388 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x27738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277388u;
        // 0x27738c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277388) {
            ctx->pc = 0x277440u;
            goto label_277440;
        }
    }
    ctx->pc = 0x277390u;
    // 0x277390: 0x37a40001  ori         $a0, $sp, 0x1
    ctx->pc = 0x277390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)1);
    // 0x277394: 0x90438298  lbu         $v1, -0x7D68($v0)
    ctx->pc = 0x277394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935192)));
    // 0x277398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27739c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x27739cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2773a0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2773A0u;
    SET_GPR_U32(ctx, 31, 0x2773A8u);
    ctx->pc = 0x2773A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773A0u;
    // 0x2773a4: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2773A0u, 0x2773A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773A8u;
label_2773a8:
    // 0x2773a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2773a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2773ac: 0xc0efb2d  jal         func_3BECB4
    ctx->pc = 0x2773ACu;
    SET_GPR_U32(ctx, 31, 0x2773B4u);
    ctx->pc = 0x2773B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773ACu;
    // 0x2773b0: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BECB4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BECB4u, 0x2773ACu, 0x2773B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773B4u;
label_2773b4:
    // 0x2773b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2773B4u;
    {
        const bool branch_taken_0x2773b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2773B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773B4u;
        // 0x2773b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2773b4) {
            ctx->pc = 0x2773CCu;
            goto label_2773cc;
        }
    }
    ctx->pc = 0x2773BCu;
    // 0x2773bc: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2773bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2773c0: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2773C0u;
    SET_GPR_U32(ctx, 31, 0x2773C8u);
    ctx->pc = 0x2773C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773C0u;
    // 0x2773c4: 0x24a5ec20  addiu       $a1, $a1, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2773C0u, 0x2773C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773C8u;
label_2773c8:
    // 0x2773c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2773c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2773cc:
    // 0x2773cc: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x2773CCu;
    SET_GPR_U32(ctx, 31, 0x2773D4u);
    ctx->pc = 0x2773D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773CCu;
    // 0x2773d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x2773CCu, 0x2773D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773D4u;
label_2773d4:
    // 0x2773d4: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x2773D4u;
    SET_GPR_U32(ctx, 31, 0x2773DCu);
    ctx->pc = 0x2773D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773D4u;
    // 0x2773d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x2773D4u, 0x2773DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773DCu;
label_2773dc:
    // 0x2773dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2773dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2773e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2773e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2773e4: 0xc0f3872  jal         func_3CE1C8
    ctx->pc = 0x2773E4u;
    SET_GPR_U32(ctx, 31, 0x2773ECu);
    ctx->pc = 0x2773E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773E4u;
    // 0x2773e8: 0x240601ff  addiu       $a2, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE1C8u, 0x2773E4u, 0x2773ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773ECu;
label_2773ec:
    // 0x2773ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2773ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2773f0: 0x6200013  bltz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2773F0u;
    {
        const bool branch_taken_0x2773f0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2773F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773F0u;
        // 0x2773f4: 0x24102080  addiu       $s0, $zero, 0x2080 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2773f0) {
            ctx->pc = 0x277440u;
            goto label_277440;
        }
    }
    ctx->pc = 0x2773F8u;
    // 0x2773f8: 0x266249c0  addiu       $v0, $s3, 0x49C0
    ctx->pc = 0x2773f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 18880));
    // 0x2773fc: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x2773fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x277400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277408: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x277408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27740c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x27740cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x277410: 0xae112040  sw          $s1, 0x2040($s0)
    ctx->pc = 0x277410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8256), GPR_U32(ctx, 17));
    // 0x277414: 0xc0f3974  jal         func_3CE5D0
    ctx->pc = 0x277414u;
    SET_GPR_U32(ctx, 31, 0x27741Cu);
    ctx->pc = 0x277418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277414u;
    // 0x277418: 0xae002048  sw          $zero, 0x2048($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8264), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE5D0u, 0x277414u, 0x27741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27741Cu;
label_27741c:
    // 0x27741c: 0xae022044  sw          $v0, 0x2044($s0)
    ctx->pc = 0x27741cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8260), GPR_U32(ctx, 2));
    // 0x277420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277424: 0xae00204c  sw          $zero, 0x204C($s0)
    ctx->pc = 0x277424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8268), GPR_U32(ctx, 0));
    // 0x277428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27742c: 0xae002050  sw          $zero, 0x2050($s0)
    ctx->pc = 0x27742cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8272), GPR_U32(ctx, 0));
    // 0x277430: 0xc0f3974  jal         func_3CE5D0
    ctx->pc = 0x277430u;
    SET_GPR_U32(ctx, 31, 0x277438u);
    ctx->pc = 0x277434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277430u;
    // 0x277434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE5D0u, 0x277430u, 0x277438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277438u;
label_277438:
    // 0x277438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x277438u;
    {
        const bool branch_taken_0x277438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277438u;
        // 0x27743c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277438) {
            ctx->pc = 0x277444u;
            goto label_277444;
        }
    }
    ctx->pc = 0x277440u;
label_277440:
    // 0x277440: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x277440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277444:
    // 0x277444: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x277444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x277448: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x277448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x27744c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x27744cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x277450: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x277450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x277454: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x277454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x277458: 0x3e00008  jr          $ra
    ctx->pc = 0x277458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277458u;
        // 0x27745c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277460u;
}
