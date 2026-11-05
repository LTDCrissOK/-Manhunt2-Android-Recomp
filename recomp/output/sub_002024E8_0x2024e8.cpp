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

// Function: sub_002024E8
// Address: 0x2024e8 - 0x202790
void sub_002024E8_0x2024e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002024E8_0x2024e8");
#endif

    switch (ctx->pc) {
        case 0x202548u: goto label_202548;
        case 0x202558u: goto label_202558;
        case 0x202568u: goto label_202568;
        case 0x202578u: goto label_202578;
        case 0x202588u: goto label_202588;
        case 0x202598u: goto label_202598;
        case 0x2025a4u: goto label_2025a4;
        case 0x2025b8u: goto label_2025b8;
        case 0x2025c0u: goto label_2025c0;
        case 0x2025d4u: goto label_2025d4;
        case 0x2025e0u: goto label_2025e0;
        case 0x202600u: goto label_202600;
        case 0x202618u: goto label_202618;
        case 0x202638u: goto label_202638;
        case 0x202640u: goto label_202640;
        case 0x202660u: goto label_202660;
        case 0x20266cu: goto label_20266c;
        case 0x202688u: goto label_202688;
        case 0x2026a8u: goto label_2026a8;
        case 0x2026fcu: goto label_2026fc;
        case 0x202714u: goto label_202714;
        case 0x202738u: goto label_202738;
        case 0x202748u: goto label_202748;
        case 0x202754u: goto label_202754;
        case 0x202760u: goto label_202760;
        default: break;
    }

    ctx->pc = 0x2024e8u;

    // 0x2024e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2024e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2024ec: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2024ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2024f0: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2024f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2024f4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2024f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2024f8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2024f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024fc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2024fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x202500: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x202500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x202504: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x202504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x202508: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x202508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x20250c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x20250cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x202510: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x202510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x202514: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x202514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202518: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x202518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x20251c: 0x2495fe40  addiu       $s5, $a0, -0x1C0
    ctx->pc = 0x20251cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x202520: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x202520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x202524: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x202524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202528: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x202528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x20252c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20252cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202530: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x202530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x202534: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x202534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x202538: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x202538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x20253c: 0xac60045c  sw          $zero, 0x45C($v1)
    ctx->pc = 0x20253cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1116), GPR_U32(ctx, 0));
    // 0x202540: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x202540u;
    SET_GPR_U32(ctx, 31, 0x202548u);
    ctx->pc = 0x202544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202540u;
    // 0x202544: 0xac400480  sw          $zero, 0x480($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1152), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x202540u, 0x202548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202548u;
label_202548:
    // 0x202548: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x202548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20254c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20254cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202550: 0xc09dd98  jal         func_277660
    ctx->pc = 0x202550u;
    SET_GPR_U32(ctx, 31, 0x202558u);
    ctx->pc = 0x202554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202550u;
    // 0x202554: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x202550u, 0x202558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202558u;
label_202558:
    // 0x202558: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20255c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202560: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x202560u;
    SET_GPR_U32(ctx, 31, 0x202568u);
    ctx->pc = 0x202564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202560u;
    // 0x202564: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x202560u, 0x202568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202568u;
label_202568:
    // 0x202568: 0x1200007d  beqz        $s0, . + 4 + (0x7D << 2)
    ctx->pc = 0x202568u;
    {
        const bool branch_taken_0x202568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202568u;
        // 0x20256c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202568) {
            ctx->pc = 0x202760u;
            goto label_202760;
        }
    }
    ctx->pc = 0x202570u;
    // 0x202570: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x202570u;
    SET_GPR_U32(ctx, 31, 0x202578u);
    ctx->pc = 0x202574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202570u;
    // 0x202574: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x202570u, 0x202578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202578u;
label_202578:
    // 0x202578: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x202578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20257c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x20257cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x202580: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x202580u;
    SET_GPR_U32(ctx, 31, 0x202588u);
    ctx->pc = 0x202584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202580u;
    // 0x202584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x202580u, 0x202588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202588u;
label_202588:
    // 0x202588: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x202588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20258c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x20258Cu;
    {
        const bool branch_taken_0x20258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20258Cu;
        // 0x202590: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20258c) {
            ctx->pc = 0x20272Cu;
            goto label_20272c;
        }
    }
    ctx->pc = 0x202594u;
    // 0x202594: 0x0  nop
    ctx->pc = 0x202594u;
    // NOP
label_202598:
    // 0x202598: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x202598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20259c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20259Cu;
    SET_GPR_U32(ctx, 31, 0x2025A4u);
    ctx->pc = 0x2025A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20259Cu;
    // 0x2025a0: 0x24a507d0  addiu       $a1, $a1, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20259Cu, 0x2025A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2025A4u;
label_2025a4:
    // 0x2025a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2025a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2025a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2025A8u;
    {
        const bool branch_taken_0x2025a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025A8u;
        // 0x2025ac: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025a8) {
            ctx->pc = 0x2025F0u;
            goto label_2025f0;
        }
    }
    ctx->pc = 0x2025B0u;
    // 0x2025b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2025B0u;
    {
        const bool branch_taken_0x2025b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025B0u;
        // 0x2025b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025b0) {
            ctx->pc = 0x2025D8u;
            goto label_2025d8;
        }
    }
    ctx->pc = 0x2025B8u;
label_2025b8:
    // 0x2025b8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2025B8u;
    SET_GPR_U32(ctx, 31, 0x2025C0u);
    ctx->pc = 0x2025BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2025B8u;
    // 0x2025bc: 0x260507d8  addiu       $a1, $s0, 0x7D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2025B8u, 0x2025C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2025C0u;
label_2025c0:
    // 0x2025c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2025c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2025c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2025C4u;
    {
        const bool branch_taken_0x2025c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025C4u;
        // 0x2025c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025c4) {
            ctx->pc = 0x2025D4u;
            goto label_2025d4;
        }
    }
    ctx->pc = 0x2025CCu;
    // 0x2025cc: 0xc09e056  jal         func_278158
    ctx->pc = 0x2025CCu;
    SET_GPR_U32(ctx, 31, 0x2025D4u);
    ctx->pc = 0x2025D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2025CCu;
    // 0x2025d0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2025CCu, 0x2025D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2025D4u;
label_2025d4:
    // 0x2025d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2025d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2025d8:
    // 0x2025d8: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x2025D8u;
    SET_GPR_U32(ctx, 31, 0x2025E0u);
    ctx->pc = 0x2025DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2025D8u;
    // 0x2025dc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2025D8u, 0x2025E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2025E0u;
label_2025e0:
    // 0x2025e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2025E0u;
    {
        const bool branch_taken_0x2025e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2025E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025E0u;
        // 0x2025e4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025e0) {
            ctx->pc = 0x2025B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2025b8;
        }
    }
    ctx->pc = 0x2025E8u;
    // 0x2025e8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2025E8u;
    {
        const bool branch_taken_0x2025e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025E8u;
        // 0x2025ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025e8) {
            ctx->pc = 0x202730u;
            goto label_202730;
        }
    }
    ctx->pc = 0x2025F0u;
label_2025f0:
    // 0x2025f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2025f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2025f4: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2025f4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2025f8: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x2025F8u;
    SET_GPR_U32(ctx, 31, 0x202600u);
    ctx->pc = 0x2025FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2025F8u;
    // 0x2025fc: 0x28840000  slti        $a0, $a0, 0x0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x2025F8u, 0x202600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202600u;
label_202600:
    // 0x202600: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x202600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202604: 0x18400049  blez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x202604u;
    {
        const bool branch_taken_0x202604 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x202608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202604u;
        // 0x202608: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202604) {
            ctx->pc = 0x20272Cu;
            goto label_20272c;
        }
    }
    ctx->pc = 0x20260Cu;
    // 0x20260c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20260cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202610: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x202610u;
    SET_GPR_U32(ctx, 31, 0x202618u);
    ctx->pc = 0x202614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202610u;
    // 0x202614: 0x442018  mult        $a0, $v0, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x202610u, 0x202618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202618u;
label_202618:
    // 0x202618: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x202618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20261c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x20261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x202620: 0x2b080  sll         $s6, $v0, 2
    ctx->pc = 0x202620u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x202624: 0x26e30480  addiu       $v1, $s7, 0x480
    ctx->pc = 0x202624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1152));
    // 0x202628: 0x26fe045c  addiu       $fp, $s7, 0x45C
    ctx->pc = 0x202628u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 1116));
    // 0x20262c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x20262Cu;
    {
        const bool branch_taken_0x20262c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20262Cu;
        // 0x202630: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20262c) {
            ctx->pc = 0x2026F0u;
            goto label_2026f0;
        }
    }
    ctx->pc = 0x202634u;
    // 0x202634: 0x0  nop
    ctx->pc = 0x202634u;
    // NOP
label_202638:
    // 0x202638: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x202638u;
    SET_GPR_U32(ctx, 31, 0x202640u);
    ctx->pc = 0x20263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202638u;
    // 0x20263c: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x202638u, 0x202640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202640u;
label_202640:
    // 0x202640: 0x2411002c  addiu       $s1, $zero, 0x2C
    ctx->pc = 0x202640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x202644: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x202644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202648: 0x2511818  mult        $v1, $s2, $s1
    ctx->pc = 0x202648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20264c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x20264cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x202650: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x202650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x202654: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x202654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x202658: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x202658u;
    SET_GPR_U32(ctx, 31, 0x202660u);
    ctx->pc = 0x20265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202658u;
    // 0x20265c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x202658u, 0x202660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202660u;
label_202660:
    // 0x202660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202664: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x202664u;
    SET_GPR_U32(ctx, 31, 0x20266Cu);
    ctx->pc = 0x202668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202664u;
    // 0x202668: 0xa2200023  sb          $zero, 0x23($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x202664u, 0x20266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20266Cu;
label_20266c:
    // 0x20266c: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x20266cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x202670: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x202670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x202674: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x202674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x202678: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x202678u;
    {
        const bool branch_taken_0x202678 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x20267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202678u;
        // 0x20267c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202678) {
            ctx->pc = 0x2026A0u;
            goto label_2026a0;
        }
    }
    ctx->pc = 0x202680u;
    // 0x202680: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x202680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202684: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x202684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_202688:
    // 0x202688: 0x0  nop
    ctx->pc = 0x202688u;
    // NOP
    // 0x20268c: 0x0  nop
    ctx->pc = 0x20268cu;
    // NOP
    // 0x202690: 0x0  nop
    ctx->pc = 0x202690u;
    // NOP
    // 0x202694: 0x0  nop
    ctx->pc = 0x202694u;
    // NOP
    // 0x202698: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202698u;
    {
        const bool branch_taken_0x202698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202698u;
        // 0x20269c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202698) {
            ctx->pc = 0x202688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202688;
        }
    }
    ctx->pc = 0x2026A0u;
label_2026a0:
    // 0x2026a0: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2026A0u;
    SET_GPR_U32(ctx, 31, 0x2026A8u);
    ctx->pc = 0x2026A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026A0u;
    // 0x2026a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2026A0u, 0x2026A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026A8u;
label_2026a8:
    // 0x2026a8: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x2026a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2026ac: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2026acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2026b0: 0x2431018  mult        $v0, $s2, $v1
    ctx->pc = 0x2026b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2026b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2026b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2026b8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2026b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2026bc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2026bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2026c0: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x2026c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2026c4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2026c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2026c8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2026c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2026cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2026CCu;
    {
        const bool branch_taken_0x2026cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2026D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026CCu;
        // 0x2026d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026cc) {
            ctx->pc = 0x2026D8u;
            goto label_2026d8;
        }
    }
    ctx->pc = 0x2026D4u;
    // 0x2026d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2026d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2026d8:
    // 0x2026d8: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2026d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2026dc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2026dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2026e0: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x2026e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x2026e4: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2026e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026e8: 0xa085002a  sb          $a1, 0x2A($a0)
    ctx->pc = 0x2026e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 5));
    // 0x2026ec: 0xa0830028  sb          $v1, 0x28($a0)
    ctx->pc = 0x2026ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 3));
label_2026f0:
    // 0x2026f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2026f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026f4: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x2026F4u;
    SET_GPR_U32(ctx, 31, 0x2026FCu);
    ctx->pc = 0x2026F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026F4u;
    // 0x2026f8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2026F4u, 0x2026FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026FCu;
label_2026fc:
    // 0x2026fc: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2026FCu;
    {
        const bool branch_taken_0x2026fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2026fc) {
            ctx->pc = 0x202700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2026FCu;
            // 0x202700: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202638;
        }
    }
    ctx->pc = 0x202704u;
    // 0x202704: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x202704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202708: 0x922026  xor         $a0, $a0, $s2
    ctx->pc = 0x202708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 18));
    // 0x20270c: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x20270Cu;
    SET_GPR_U32(ctx, 31, 0x202714u);
    ctx->pc = 0x202710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20270Cu;
    // 0x202710: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x20270Cu, 0x202714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202714u;
label_202714:
    // 0x202714: 0x3d61821  addu        $v1, $fp, $s6
    ctx->pc = 0x202714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x202718: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x202718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20271c: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x20271cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x202720: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x202720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202724: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x202724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x202728: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x202728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_20272c:
    // 0x20272c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20272cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_202730:
    // 0x202730: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x202730u;
    SET_GPR_U32(ctx, 31, 0x202738u);
    ctx->pc = 0x202734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202730u;
    // 0x202734: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x202730u, 0x202738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202738u;
label_202738:
    // 0x202738: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x202738u;
    {
        const bool branch_taken_0x202738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202738u;
        // 0x20273c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202738) {
            ctx->pc = 0x202598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202598;
        }
    }
    ctx->pc = 0x202740u;
    // 0x202740: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x202740u;
    SET_GPR_U32(ctx, 31, 0x202748u);
    ctx->pc = 0x202744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202740u;
    // 0x202744: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x202740u, 0x202748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202748u;
label_202748:
    // 0x202748: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x202748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20274c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x20274Cu;
    SET_GPR_U32(ctx, 31, 0x202754u);
    ctx->pc = 0x202750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20274Cu;
    // 0x202750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20274Cu, 0x202754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202754u;
label_202754:
    // 0x202754: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x202754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202758: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x202758u;
    SET_GPR_U32(ctx, 31, 0x202760u);
    ctx->pc = 0x20275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202758u;
    // 0x20275c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x202758u, 0x202760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202760u;
label_202760:
    // 0x202760: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x202760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202764: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x202764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x202768: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x202768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20276c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x20276cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x202770: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x202770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202774: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x202774u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x202778: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x202778u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20277c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x20277cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x202780: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x202780u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x202784: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x202784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x202788: 0x3e00008  jr          $ra
    ctx->pc = 0x202788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202788u;
        // 0x20278c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202790u;
}
