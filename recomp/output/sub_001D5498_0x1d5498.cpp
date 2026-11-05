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

// Function: sub_001D5498
// Address: 0x1d5498 - 0x1d55c0
void sub_001D5498_0x1d5498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5498_0x1d5498");
#endif

    switch (ctx->pc) {
        case 0x1d54b8u: goto label_1d54b8;
        case 0x1d54c0u: goto label_1d54c0;
        case 0x1d54d0u: goto label_1d54d0;
        case 0x1d54f0u: goto label_1d54f0;
        case 0x1d5530u: goto label_1d5530;
        case 0x1d5538u: goto label_1d5538;
        case 0x1d554cu: goto label_1d554c;
        case 0x1d5570u: goto label_1d5570;
        default: break;
    }

    ctx->pc = 0x1d5498u;

    // 0x1d5498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d549c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d549cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d54a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d54a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d54a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d54a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d54a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d54ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d54acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d54b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d54b4: 0x0  nop
    ctx->pc = 0x1d54b4u;
    // NOP
label_1d54b8:
    // 0x1d54b8: 0xc069e04  jal         func_1A7810
    ctx->pc = 0x1D54B8u;
    SET_GPR_U32(ctx, 31, 0x1D54C0u);
    ctx->pc = 0x1D54BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54B8u;
    // 0x1d54bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7810u, 0x1D54B8u, 0x1D54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54C0u;
label_1d54c0:
    // 0x1d54c0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D54C0u;
    {
        const bool branch_taken_0x1d54c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54C0u;
        // 0x1d54c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54c0) {
            ctx->pc = 0x1D5518u;
            goto label_1d5518;
        }
    }
    ctx->pc = 0x1D54C8u;
    // 0x1d54c8: 0xc0752fc  jal         func_1D4BF0
    ctx->pc = 0x1D54C8u;
    SET_GPR_U32(ctx, 31, 0x1D54D0u);
    ctx->pc = 0x1D54CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54C8u;
    // 0x1d54cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4BF0u, 0x1D54C8u, 0x1D54D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54D0u;
label_1d54d0:
    // 0x1d54d0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D54D0u;
    {
        const bool branch_taken_0x1d54d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54D0u;
        // 0x1d54d4: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54d0) {
            ctx->pc = 0x1D5518u;
            goto label_1d5518;
        }
    }
    ctx->pc = 0x1D54D8u;
    // 0x1d54d8: 0x8ce28eb4  lw          $v0, -0x714C($a3)
    ctx->pc = 0x1d54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294938292)));
    // 0x1d54dc: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D54DCu;
    {
        const bool branch_taken_0x1d54dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54DCu;
        // 0x1d54e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54dc) {
            ctx->pc = 0x1D5518u;
            goto label_1d5518;
        }
    }
    ctx->pc = 0x1D54E4u;
    // 0x1d54e4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1d54e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1d54e8: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x1d54e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d54ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d54ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d54f0:
    // 0x1d54f0: 0x8d028eb0  lw          $v0, -0x7150($t0)
    ctx->pc = 0x1d54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294938288)));
    // 0x1d54f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d54f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d54f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d54fc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d54fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d5500: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1d5500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d5504: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d5504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d5508: 0x8ce28eb4  lw          $v0, -0x714C($a3)
    ctx->pc = 0x1d5508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294938292)));
    // 0x1d550c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d550cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5510: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D5510u;
    {
        const bool branch_taken_0x1d5510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5510u;
        // 0x1d5514: 0x24840818  addiu       $a0, $a0, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5510) {
            ctx->pc = 0x1D54F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d54f0;
        }
    }
    ctx->pc = 0x1D5518u;
label_1d5518:
    // 0x1d5518: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d5518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d551c: 0x2a02080d  slti        $v0, $s0, 0x80D
    ctx->pc = 0x1d551cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2061) ? 1 : 0);
    // 0x1d5520: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D5520u;
    {
        const bool branch_taken_0x1d5520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5520) {
            ctx->pc = 0x1D54B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d54b8;
        }
    }
    ctx->pc = 0x1D5528u;
    // 0x1d5528: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d5528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d552c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d552cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5530:
    // 0x1d5530: 0xc06c04c  jal         func_1B0130
    ctx->pc = 0x1D5530u;
    SET_GPR_U32(ctx, 31, 0x1D5538u);
    ctx->pc = 0x1D5534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5530u;
    // 0x1d5534: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0130u, 0x1D5530u, 0x1D5538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5538u;
label_1d5538:
    // 0x1d5538: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D5538u;
    {
        const bool branch_taken_0x1d5538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5538) {
            ctx->pc = 0x1D553Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5538u;
            // 0x1d553c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D559Cu;
            goto label_1d559c;
        }
    }
    ctx->pc = 0x1D5540u;
    // 0x1d5540: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5544: 0xc0752fc  jal         func_1D4BF0
    ctx->pc = 0x1D5544u;
    SET_GPR_U32(ctx, 31, 0x1D554Cu);
    ctx->pc = 0x1D5548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5544u;
    // 0x1d5548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4BF0u, 0x1D5544u, 0x1D554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D554Cu;
label_1d554c:
    // 0x1d554c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D554Cu;
    {
        const bool branch_taken_0x1d554c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d554c) {
            ctx->pc = 0x1D5550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D554Cu;
            // 0x1d5550: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D559Cu;
            goto label_1d559c;
        }
    }
    ctx->pc = 0x1D5554u;
    // 0x1d5554: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1d5554u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1d5558: 0x8d028eb4  lw          $v0, -0x714C($t0)
    ctx->pc = 0x1d5558u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F8EB4u));
    // 0x1d555c: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D555Cu;
    {
        const bool branch_taken_0x1d555c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D5560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D555Cu;
        // 0x1d5560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d555c) {
            ctx->pc = 0x1D5598u;
            goto label_1d5598;
        }
    }
    ctx->pc = 0x1D5564u;
    // 0x1d5564: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1d5564u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d5568: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1d5568u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1d556c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d556cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5570:
    // 0x1d5570: 0x8ce28eb0  lw          $v0, -0x7150($a3)
    ctx->pc = 0x1d5570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294938288)));
    // 0x1d5574: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d5574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d5578: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1d5578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d557c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1d557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d5580: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d5580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d5584: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d5584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d5588: 0x8d028eb4  lw          $v0, -0x714C($t0)
    ctx->pc = 0x1d5588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294938292)));
    // 0x1d558c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d558cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5590: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D5590u;
    {
        const bool branch_taken_0x1d5590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5590u;
        // 0x1d5594: 0x24c60818  addiu       $a2, $a2, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5590) {
            ctx->pc = 0x1D5570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5570;
        }
    }
    ctx->pc = 0x1D5598u;
label_1d5598:
    // 0x1d5598: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1d5598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d559c:
    // 0x1d559c: 0x2a0201ba  slti        $v0, $s0, 0x1BA
    ctx->pc = 0x1d559cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)442) ? 1 : 0);
    // 0x1d55a0: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1D55A0u;
    {
        const bool branch_taken_0x1d55a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d55a0) {
            ctx->pc = 0x1D55A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D55A0u;
            // 0x1d55a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5530;
        }
    }
    ctx->pc = 0x1D55A8u;
    // 0x1d55a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d55a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d55ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d55acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d55b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d55b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d55b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d55b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d55b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D55B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55B8u;
        // 0x1d55bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D55B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D55C0u;
}
