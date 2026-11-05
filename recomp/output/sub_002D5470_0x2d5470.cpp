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

// Function: sub_002D5470
// Address: 0x2d5470 - 0x2d55a8
void sub_002D5470_0x2d5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5470_0x2d5470");
#endif

    switch (ctx->pc) {
        case 0x2d54b8u: goto label_2d54b8;
        case 0x2d54f0u: goto label_2d54f0;
        case 0x2d5530u: goto label_2d5530;
        case 0x2d5540u: goto label_2d5540;
        case 0x2d5550u: goto label_2d5550;
        default: break;
    }

    ctx->pc = 0x2d5470u;

    // 0x2d5470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d5470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d5474: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d5474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d5478: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d547c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d547cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5480: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d5480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2d5484: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d5484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d5488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d548c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2d548cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d5490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d5494: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d5494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d5498: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d5498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d549c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d549cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d54a0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d54a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d54a4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d54a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d54a8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2d54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2d54ac: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D54ACu;
    {
        const bool branch_taken_0x2d54ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54ACu;
        // 0x2d54b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54ac) {
            ctx->pc = 0x2D5574u;
            goto label_2d5574;
        }
    }
    ctx->pc = 0x2D54B4u;
    // 0x2d54b4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2d54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2d54b8:
    // 0x2d54b8: 0x24950001  addiu       $s5, $a0, 0x1
    ctx->pc = 0x2d54b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d54bc: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x2d54bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d54c0: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x2d54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2d54c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d54c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d54c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d54cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d54d0: 0x58400024  blezl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D54D0u;
    {
        const bool branch_taken_0x2d54d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d54d0) {
            ctx->pc = 0x2D54D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D54D0u;
            // 0x2d54d4: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5564u;
            goto label_2d5564;
        }
    }
    ctx->pc = 0x2D54D8u;
    // 0x2d54d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d54d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d54dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54e0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2d54e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d54e4: 0x2a530002  slti        $s3, $s2, 0x2
    ctx->pc = 0x2d54e4u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d54e8: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2d54e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d54ec: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2d54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_2d54f0:
    // 0x2d54f0: 0x545e0018  bnel        $v0, $fp, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D54F0u;
    {
        const bool branch_taken_0x2d54f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x2d54f0) {
            ctx->pc = 0x2D54F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D54F0u;
            // 0x2d54f4: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5554u;
            goto label_2d5554;
        }
    }
    ctx->pc = 0x2D54F8u;
    // 0x2d54f8: 0x1257000f  beq         $s2, $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x2D54F8u;
    {
        const bool branch_taken_0x2d54f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        if (branch_taken_0x2d54f8) {
            ctx->pc = 0x2D5538u;
            goto label_2d5538;
        }
    }
    ctx->pc = 0x2D5500u;
    // 0x2d5500: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5500u;
    {
        const bool branch_taken_0x2d5500 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5500) {
            ctx->pc = 0x2D5518u;
            goto label_2d5518;
        }
    }
    ctx->pc = 0x2D5508u;
    // 0x2d5508: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5508u;
    {
        const bool branch_taken_0x2d5508 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5508) {
            ctx->pc = 0x2D5528u;
            goto label_2d5528;
        }
    }
    ctx->pc = 0x2D5510u;
    // 0x2d5510: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5510u;
    {
        const bool branch_taken_0x2d5510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5510u;
        // 0x2d5514: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5510) {
            ctx->pc = 0x2D5554u;
            goto label_2d5554;
        }
    }
    ctx->pc = 0x2D5518u;
label_2d5518:
    // 0x2d5518: 0x1256000b  beq         $s2, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x2D5518u;
    {
        const bool branch_taken_0x2d5518 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        if (branch_taken_0x2d5518) {
            ctx->pc = 0x2D5548u;
            goto label_2d5548;
        }
    }
    ctx->pc = 0x2D5520u;
    // 0x2d5520: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D5520u;
    {
        const bool branch_taken_0x2d5520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5520u;
        // 0x2d5524: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5520) {
            ctx->pc = 0x2D5554u;
            goto label_2d5554;
        }
    }
    ctx->pc = 0x2D5528u;
label_2d5528:
    // 0x2d5528: 0xc0b4f7c  jal         func_2D3DF0
    ctx->pc = 0x2D5528u;
    SET_GPR_U32(ctx, 31, 0x2D5530u);
    ctx->pc = 0x2D552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5528u;
    // 0x2d552c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3DF0u, 0x2D5528u, 0x2D5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5530u;
label_2d5530:
    // 0x2d5530: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5530u;
    {
        const bool branch_taken_0x2d5530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5530u;
        // 0x2d5534: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5530) {
            ctx->pc = 0x2D5554u;
            goto label_2d5554;
        }
    }
    ctx->pc = 0x2D5538u;
label_2d5538:
    // 0x2d5538: 0xc0b4f84  jal         func_2D3E10
    ctx->pc = 0x2D5538u;
    SET_GPR_U32(ctx, 31, 0x2D5540u);
    ctx->pc = 0x2D553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5538u;
    // 0x2d553c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3E10u, 0x2D5538u, 0x2D5540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5540u;
label_2d5540:
    // 0x2d5540: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5540u;
    {
        const bool branch_taken_0x2d5540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5540u;
        // 0x2d5544: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5540) {
            ctx->pc = 0x2D5554u;
            goto label_2d5554;
        }
    }
    ctx->pc = 0x2D5548u;
label_2d5548:
    // 0x2d5548: 0xc0b4f80  jal         func_2D3E00
    ctx->pc = 0x2D5548u;
    SET_GPR_U32(ctx, 31, 0x2D5550u);
    ctx->pc = 0x2D554Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5548u;
    // 0x2d554c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3E00u, 0x2D5548u, 0x2D5550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5550u;
label_2d5550:
    // 0x2d5550: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x2d5550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2d5554:
    // 0x2d5554: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d5554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2d5558: 0x5620ffe5  bnel        $s1, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2D5558u;
    {
        const bool branch_taken_0x2d5558 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5558) {
            ctx->pc = 0x2D555Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5558u;
            // 0x2d555c: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D54F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d54f0;
        }
    }
    ctx->pc = 0x2D5560u;
    // 0x2d5560: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2d5560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2d5564:
    // 0x2d5564: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d5564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5568: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2d5568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d556c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2D556Cu;
    {
        const bool branch_taken_0x2d556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D556Cu;
        // 0x2d5570: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d556c) {
            ctx->pc = 0x2D54B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d54b8;
        }
    }
    ctx->pc = 0x2D5574u;
label_2d5574:
    // 0x2d5574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d557c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d557cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5580: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d5580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5584: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d5584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5588: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d5588u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d558c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d558cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5590: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d5590u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d5594: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d5594u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5598: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d5598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d559c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D559Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D559Cu;
        // 0x2d55a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D559Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D55A4u;
    // 0x2d55a4: 0x0  nop
    ctx->pc = 0x2d55a4u;
    // NOP
    ctx->pc = 0x2d55a8u;
}
