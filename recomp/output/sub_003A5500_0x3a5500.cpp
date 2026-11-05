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

// Function: sub_003A5500
// Address: 0x3a5500 - 0x3a5688
void sub_003A5500_0x3a5500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5500_0x3a5500");
#endif

    switch (ctx->pc) {
        case 0x3a5540u: goto label_3a5540;
        case 0x3a5558u: goto label_3a5558;
        case 0x3a5578u: goto label_3a5578;
        case 0x3a55b4u: goto label_3a55b4;
        case 0x3a55d0u: goto label_3a55d0;
        case 0x3a55dcu: goto label_3a55dc;
        case 0x3a55f4u: goto label_3a55f4;
        case 0x3a5604u: goto label_3a5604;
        case 0x3a563cu: goto label_3a563c;
        case 0x3a5648u: goto label_3a5648;
        default: break;
    }

    ctx->pc = 0x3a5500u;

    // 0x3a5500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a5504: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a5504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a5508: 0x3c140065  lui         $s4, 0x65
    ctx->pc = 0x3a5508u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)101 << 16));
    // 0x3a550c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a550cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a5510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a5510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5514: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a5514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a5518: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3a5518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a551c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a5520: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a5520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5524: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x3a5524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3a5528: 0x26846cc0  addiu       $a0, $s4, 0x6CC0
    ctx->pc = 0x3a5528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27840));
    // 0x3a552c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a552cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5530: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a5530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a5534: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3a5534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3a5538: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A5538u;
    SET_GPR_U32(ctx, 31, 0x3A5540u);
    ctx->pc = 0x3A553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5538u;
    // 0x3a553c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A5538u, 0x3A5540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5540u;
label_3a5540:
    // 0x3a5540: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a5540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a5544: 0x8c623780  lw          $v0, 0x3780($v1)
    ctx->pc = 0x3a5544u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x413780u));
    // 0x3a5548: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5548u;
    {
        const bool branch_taken_0x3a5548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5548) {
            ctx->pc = 0x3A5558u;
            goto label_3a5558;
        }
    }
    ctx->pc = 0x3A5550u;
    // 0x3a5550: 0xc0e94be  jal         func_3A52F8
    ctx->pc = 0x3A5550u;
    SET_GPR_U32(ctx, 31, 0x3A5558u);
    ctx->pc = 0x3A52F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F8u, 0x3A5550u, 0x3A5558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5558u;
label_3a5558:
    // 0x3a5558: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5558u;
    {
        const bool branch_taken_0x3a5558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5558) {
            ctx->pc = 0x3A5570u;
            goto label_3a5570;
        }
    }
    ctx->pc = 0x3A5560u;
    // 0x3a5560: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5560u;
    {
        const bool branch_taken_0x3a5560 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5560) {
            ctx->pc = 0x3A5570u;
            goto label_3a5570;
        }
    }
    ctx->pc = 0x3A5568u;
    // 0x3a5568: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5568u;
    {
        const bool branch_taken_0x3a5568 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5568) {
            ctx->pc = 0x3A5578u;
            goto label_3a5578;
        }
    }
    ctx->pc = 0x3A5570u;
label_3a5570:
    // 0x3a5570: 0xc0e94be  jal         func_3A52F8
    ctx->pc = 0x3A5570u;
    SET_GPR_U32(ctx, 31, 0x3A5578u);
    ctx->pc = 0x3A52F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F8u, 0x3A5570u, 0x3A5578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5578u;
label_3a5578:
    // 0x3a5578: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3A5578u;
    {
        const bool branch_taken_0x3a5578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5578u;
        // 0x3a557c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5578) {
            ctx->pc = 0x3A565Cu;
            goto label_3a565c;
        }
    }
    ctx->pc = 0x3A5580u;
    // 0x3a5580: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5580u;
    {
        const bool branch_taken_0x3a5580 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5580u;
        // 0x3a5584: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5580) {
            ctx->pc = 0x3A5598u;
            goto label_3a5598;
        }
    }
    ctx->pc = 0x3A5588u;
    // 0x3a5588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a558c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A558Cu;
    {
        const bool branch_taken_0x3a558c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A558Cu;
        // 0x3a5590: 0x2484da50  addiu       $a0, $a0, -0x25B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a558c) {
            ctx->pc = 0x3A55ACu;
            goto label_3a55ac;
        }
    }
    ctx->pc = 0x3A5594u;
    // 0x3a5594: 0x0  nop
    ctx->pc = 0x3a5594u;
    // NOP
label_3a5598:
    // 0x3a5598: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A5598u;
    {
        const bool branch_taken_0x3a5598 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5598u;
        // 0x3a559c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5598) {
            ctx->pc = 0x3A55C0u;
            goto label_3a55c0;
        }
    }
    ctx->pc = 0x3A55A0u;
    // 0x3a55a0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a55a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a55a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a55a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a55a8: 0x2484da80  addiu       $a0, $a0, -0x2580
    ctx->pc = 0x3a55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957696));
label_3a55ac:
    // 0x3a55ac: 0xc0e5ea0  jal         func_397A80
    ctx->pc = 0x3A55ACu;
    SET_GPR_U32(ctx, 31, 0x3A55B4u);
    ctx->pc = 0x397A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A80u, 0x3A55ACu, 0x3A55B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A55B4u;
label_3a55b4:
    // 0x3a55b4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3A55B4u;
    {
        const bool branch_taken_0x3a55b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A55B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A55B4u;
        // 0x3a55b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a55b4) {
            ctx->pc = 0x3A565Cu;
            goto label_3a565c;
        }
    }
    ctx->pc = 0x3A55BCu;
    // 0x3a55bc: 0x0  nop
    ctx->pc = 0x3a55bcu;
    // NOP
label_3a55c0:
    // 0x3a55c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a55c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a55c4: 0x26946cc0  addiu       $s4, $s4, 0x6CC0
    ctx->pc = 0x3a55c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 27840));
    // 0x3a55c8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A55C8u;
    SET_GPR_U32(ctx, 31, 0x3A55D0u);
    ctx->pc = 0x3A55CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A55C8u;
    // 0x3a55cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A55C8u, 0x3A55D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A55D0u;
label_3a55d0:
    // 0x3a55d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a55d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a55d4: 0xc0e93c6  jal         func_3A4F18
    ctx->pc = 0x3A55D4u;
    SET_GPR_U32(ctx, 31, 0x3A55DCu);
    ctx->pc = 0x3A55D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A55D4u;
    // 0x3a55d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F18u, 0x3A55D4u, 0x3A55DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A55DCu;
label_3a55dc:
    // 0x3a55dc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3A55DCu;
    {
        const bool branch_taken_0x3a55dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a55dc) {
            ctx->pc = 0x3A55E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A55DCu;
            // 0x3a55e0: 0x26700009  addiu       $s0, $s3, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5610u;
            goto label_3a5610;
        }
    }
    ctx->pc = 0x3A55E4u;
    // 0x3a55e4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a55e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a55e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a55e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a55ec: 0xc0e5ea0  jal         func_397A80
    ctx->pc = 0x3A55ECu;
    SET_GPR_U32(ctx, 31, 0x3A55F4u);
    ctx->pc = 0x3A55F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A55ECu;
    // 0x3a55f0: 0x2484dab0  addiu       $a0, $a0, -0x2550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A80u, 0x3A55ECu, 0x3A55F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A55F4u;
label_3a55f4:
    // 0x3a55f4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a55f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a55f8: 0x24a5dad8  addiu       $a1, $a1, -0x2528
    ctx->pc = 0x3a55f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957784));
    // 0x3a55fc: 0xc0e8ff0  jal         func_3A3FC0
    ctx->pc = 0x3A55FCu;
    SET_GPR_U32(ctx, 31, 0x3A5604u);
    ctx->pc = 0x3A5600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A55FCu;
    // 0x3a5600: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FC0u, 0x3A55FCu, 0x3A5604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5604u;
label_3a5604:
    // 0x3a5604: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3A5604u;
    {
        const bool branch_taken_0x3a5604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5604u;
        // 0x3a5608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5604) {
            ctx->pc = 0x3A565Cu;
            goto label_3a565c;
        }
    }
    ctx->pc = 0x3A560Cu;
    // 0x3a560c: 0x0  nop
    ctx->pc = 0x3a560cu;
    // NOP
label_3a5610:
    // 0x3a5610: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a5610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5614: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x3a5614u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x3a5618: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x3a5618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3a561c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3a561cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a5620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5624: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A5624u;
    {
        const bool branch_taken_0x3a5624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5624) {
            ctx->pc = 0x3A5628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5624u;
            // 0x3a5628: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A562Cu;
            goto label_3a562c;
        }
    }
    ctx->pc = 0x3A562Cu;
label_3a562c:
    // 0x3a562c: 0x8812  mflo        $s1
    ctx->pc = 0x3a562cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x3a5630: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a5630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5634: 0xc0e9360  jal         func_3A4D80
    ctx->pc = 0x3A5634u;
    SET_GPR_U32(ctx, 31, 0x3A563Cu);
    ctx->pc = 0x3A5638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5634u;
    // 0x3a5638: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D80u, 0x3A5634u, 0x3A563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A563Cu;
label_3a563c:
    // 0x3a563c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a563cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5640: 0xc0e9428  jal         func_3A50A0
    ctx->pc = 0x3A5640u;
    SET_GPR_U32(ctx, 31, 0x3A5648u);
    ctx->pc = 0x3A5644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5640u;
    // 0x3a5644: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50A0u, 0x3A5640u, 0x3A5648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5648u;
label_3a5648:
    // 0x3a5648: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A5648u;
    {
        const bool branch_taken_0x3a5648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5648) {
            ctx->pc = 0x3A564Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5648u;
            // 0x3a564c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5650u;
            goto label_3a5650;
        }
    }
    ctx->pc = 0x3A5650u;
label_3a5650:
    // 0x3a5650: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x3a5650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3a5654: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3a5654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a5658: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a5658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3a565c:
    // 0x3a565c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a565cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a5660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a5664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a5664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5668: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a5668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a566c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a566cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a5670: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a5670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a5674: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5674u;
        // 0x3a5678: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A567Cu;
    // 0x3a567c: 0x0  nop
    ctx->pc = 0x3a567cu;
    // NOP
    // 0x3a5680: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3a5680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a5684: 0x0  nop
    ctx->pc = 0x3a5684u;
    // NOP
    ctx->pc = 0x3a5688u;
}
