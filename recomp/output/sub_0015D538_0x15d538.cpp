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

// Function: sub_0015D538
// Address: 0x15d538 - 0x15d8d8
void sub_0015D538_0x15d538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D538_0x15d538");
#endif

    switch (ctx->pc) {
        case 0x15d5a0u: goto label_15d5a0;
        case 0x15d5d0u: goto label_15d5d0;
        case 0x15d5e0u: goto label_15d5e0;
        case 0x15d608u: goto label_15d608;
        case 0x15d61cu: goto label_15d61c;
        case 0x15d62cu: goto label_15d62c;
        case 0x15d644u: goto label_15d644;
        case 0x15d6a0u: goto label_15d6a0;
        case 0x15d6b0u: goto label_15d6b0;
        case 0x15d6c8u: goto label_15d6c8;
        case 0x15d6e0u: goto label_15d6e0;
        case 0x15d6f4u: goto label_15d6f4;
        case 0x15d718u: goto label_15d718;
        case 0x15d784u: goto label_15d784;
        case 0x15d790u: goto label_15d790;
        case 0x15d7f0u: goto label_15d7f0;
        case 0x15d82cu: goto label_15d82c;
        case 0x15d838u: goto label_15d838;
        case 0x15d860u: goto label_15d860;
        case 0x15d870u: goto label_15d870;
        case 0x15d87cu: goto label_15d87c;
        case 0x15d894u: goto label_15d894;
        case 0x15d8a0u: goto label_15d8a0;
        default: break;
    }

    ctx->pc = 0x15d538u;

    // 0x15d538: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15d538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15d53c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15d540: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x15d540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x15d544: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x15d544u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x15d548: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x15d548u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15d54c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x15d54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x15d550: 0x2631018  mult        $v0, $s3, $v1
    ctx->pc = 0x15d550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15d554: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x15d554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x15d558: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x15d558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x15d55c: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x15d55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x15d560: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x15d560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x15d564: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15d564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d568: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x15d568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x15d56c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x15d56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x15d570: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15d570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15d574: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x15d574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x15d578: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15d578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15d57c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x15d57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x15d580: 0x2451b060  addiu       $s1, $v0, -0x4FA0
    ctx->pc = 0x15d580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x15d584: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x15d584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x15d588: 0x8e440214  lw          $a0, 0x214($s2)
    ctx->pc = 0x15d588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15d58c: 0x8c740320  lw          $s4, 0x320($v1)
    ctx->pc = 0x15d58cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x15d590: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x15d590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15d594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d598: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x15D598u;
    SET_GPR_U32(ctx, 31, 0x15D5A0u);
    ctx->pc = 0x15D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D598u;
    // 0x15d59c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x15D598u, 0x15D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5A0u;
label_15d5a0:
    // 0x15d5a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d5a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5a4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x15d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15d5a8: 0x120000bf  beqz        $s0, . + 4 + (0xBF << 2)
    ctx->pc = 0x15D5A8u;
    {
        const bool branch_taken_0x15d5a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5A8u;
        // 0x15d5ac: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5a8) {
            ctx->pc = 0x15D8A8u;
            goto label_15d8a8;
        }
    }
    ctx->pc = 0x15D5B0u;
    // 0x15d5b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15d5b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5b8: 0x8e1e0010  lw          $fp, 0x10($s0)
    ctx->pc = 0x15d5b8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15d5bc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x15d5bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x15d5c0: 0x8e170004  lw          $s7, 0x4($s0)
    ctx->pc = 0x15d5c0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d5c4: 0x30560001  andi        $s6, $v0, 0x1
    ctx->pc = 0x15d5c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15d5c8: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x15D5C8u;
    SET_GPR_U32(ctx, 31, 0x15D5D0u);
    ctx->pc = 0x15D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D5C8u;
    // 0x15d5cc: 0x8e150008  lw          $s5, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x15D5C8u, 0x15D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5D0u;
label_15d5d0:
    // 0x15d5d0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15d5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15d5d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5d8: 0xc042128  jal         func_1084A0
    ctx->pc = 0x15D5D8u;
    SET_GPR_U32(ctx, 31, 0x15D5E0u);
    ctx->pc = 0x15D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D5D8u;
    // 0x15d5dc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x15D5D8u, 0x15D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5E0u;
label_15d5e0:
    // 0x15d5e0: 0x53c000b2  beql        $fp, $zero, . + 4 + (0xB2 << 2)
    ctx->pc = 0x15D5E0u;
    {
        const bool branch_taken_0x15d5e0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d5e0) {
            ctx->pc = 0x15D5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D5E0u;
            // 0x15d5e4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D8ACu;
            goto label_15d8ac;
        }
    }
    ctx->pc = 0x15D5E8u;
    // 0x15d5e8: 0x12c0001f  beqz        $s6, . + 4 + (0x1F << 2)
    ctx->pc = 0x15D5E8u;
    {
        const bool branch_taken_0x15d5e8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5E8u;
        // 0x15d5ec: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5e8) {
            ctx->pc = 0x15D668u;
            goto label_15d668;
        }
    }
    ctx->pc = 0x15D5F0u;
    // 0x15d5f0: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D5F0u;
    {
        const bool branch_taken_0x15d5f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5F0u;
        // 0x15d5f4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5f0) {
            ctx->pc = 0x15D610u;
            goto label_15d610;
        }
    }
    ctx->pc = 0x15D5F8u;
    // 0x15d5f8: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x15d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15d5fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d600: 0xc04add4  jal         func_12B750
    ctx->pc = 0x15D600u;
    SET_GPR_U32(ctx, 31, 0x15D608u);
    ctx->pc = 0x15D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D600u;
    // 0x15d604: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B750u, 0x15D600u, 0x15D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D608u;
label_15d608:
    // 0x15d608: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15D608u;
    {
        const bool branch_taken_0x15d608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d608) {
            ctx->pc = 0x15D644u;
            goto label_15d644;
        }
    }
    ctx->pc = 0x15D610u;
label_15d610:
    // 0x15d610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d614: 0xc04f0b6  jal         func_13C2D8
    ctx->pc = 0x15D614u;
    SET_GPR_U32(ctx, 31, 0x15D61Cu);
    ctx->pc = 0x15D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D614u;
    // 0x15d618: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15D614u, 0x15D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D61Cu;
label_15d61c:
    // 0x15d61c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d620: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15d620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d624: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x15D624u;
    SET_GPR_U32(ctx, 31, 0x15D62Cu);
    ctx->pc = 0x15D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D624u;
    // 0x15d628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x15D624u, 0x15D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D62Cu;
label_15d62c:
    // 0x15d62c: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x15d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15d630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d634: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15d634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d638: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15d638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d63c: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x15D63Cu;
    SET_GPR_U32(ctx, 31, 0x15D644u);
    ctx->pc = 0x15D640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D63Cu;
    // 0x15d640: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x15D63Cu, 0x15D644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D644u;
label_15d644:
    // 0x15d644: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D644u;
    {
        const bool branch_taken_0x15d644 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D644u;
        // 0x15d648: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d644) {
            ctx->pc = 0x15D668u;
            goto label_15d668;
        }
    }
    ctx->pc = 0x15D64Cu;
    // 0x15d64c: 0x12a20006  beq         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D64Cu;
    {
        const bool branch_taken_0x15d64c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D64Cu;
        // 0x15d650: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d64c) {
            ctx->pc = 0x15D668u;
            goto label_15d668;
        }
    }
    ctx->pc = 0x15D654u;
    // 0x15d654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d658: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x15d658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15d65c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x15d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15d660: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x15D660u;
    {
        const bool branch_taken_0x15d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D660u;
        // 0x15d664: 0xac430348  sw          $v1, 0x348($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d660) {
            ctx->pc = 0x15D704u;
            goto label_15d704;
        }
    }
    ctx->pc = 0x15D668u;
label_15d668:
    // 0x15d668: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15d668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15d66c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x15d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x15d670: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x15d670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x15d674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d678: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x15d678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x15d67c: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15D67Cu;
    {
        const bool branch_taken_0x15d67c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D67Cu;
        // 0x15d680: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d67c) {
            ctx->pc = 0x15D6F4u;
            goto label_15d6f4;
        }
    }
    ctx->pc = 0x15D684u;
    // 0x15d684: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x15d684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d688: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x15d688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15d68c: 0x8c430348  lw          $v1, 0x348($v0)
    ctx->pc = 0x15d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x15d690: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15D690u;
    {
        const bool branch_taken_0x15d690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D690u;
        // 0x15d694: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d690) {
            ctx->pc = 0x15D6F8u;
            goto label_15d6f8;
        }
    }
    ctx->pc = 0x15D698u;
    // 0x15d698: 0xc043958  jal         func_10E560
    ctx->pc = 0x15D698u;
    SET_GPR_U32(ctx, 31, 0x15D6A0u);
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x15D698u, 0x15D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6A0u;
label_15d6a0:
    // 0x15d6a0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15D6A0u;
    {
        const bool branch_taken_0x15d6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6A0u;
        // 0x15d6a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d6a0) {
            ctx->pc = 0x15D6F4u;
            goto label_15d6f4;
        }
    }
    ctx->pc = 0x15D6A8u;
    // 0x15d6a8: 0xc04f0b6  jal         func_13C2D8
    ctx->pc = 0x15D6A8u;
    SET_GPR_U32(ctx, 31, 0x15D6B0u);
    ctx->pc = 0x15D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D6A8u;
    // 0x15d6ac: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15D6A8u, 0x15D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6B0u;
label_15d6b0:
    // 0x15d6b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15d6b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6b8: 0x2491b060  addiu       $s1, $a0, -0x4FA0
    ctx->pc = 0x15d6b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x15d6bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15d6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d6c0: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x15D6C0u;
    SET_GPR_U32(ctx, 31, 0x15D6C8u);
    ctx->pc = 0x15D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D6C0u;
    // 0x15d6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x15D6C0u, 0x15D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6C8u;
label_15d6c8:
    // 0x15d6c8: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x15d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15d6cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6d0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15d6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15d6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6d8: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x15D6D8u;
    SET_GPR_U32(ctx, 31, 0x15D6E0u);
    ctx->pc = 0x15D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D6D8u;
    // 0x15d6dc: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x15D6D8u, 0x15D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6E0u;
label_15d6e0:
    // 0x15d6e0: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x15d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x15d6e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15d6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6ec: 0xc04add4  jal         func_12B750
    ctx->pc = 0x15D6ECu;
    SET_GPR_U32(ctx, 31, 0x15D6F4u);
    ctx->pc = 0x15D6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D6ECu;
    // 0x15d6f0: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B750u, 0x15D6ECu, 0x15D6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6F4u;
label_15d6f4:
    // 0x15d6f4: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15d6f8:
    // 0x15d6f8: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x15d6f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d6fc: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x15d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15d700: 0xac400348  sw          $zero, 0x348($v0)
    ctx->pc = 0x15d700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 840), GPR_U32(ctx, 0));
label_15d704:
    // 0x15d704: 0x8e4502e4  lw          $a1, 0x2E4($s2)
    ctx->pc = 0x15d704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 740)));
    // 0x15d708: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d70c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x15d70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d710: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15D710u;
    SET_GPR_U32(ctx, 31, 0x15D718u);
    ctx->pc = 0x15D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D710u;
    // 0x15d714: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15D710u, 0x15D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D718u;
label_15d718:
    // 0x15d718: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d71c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d720: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15d720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15d724: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15d724u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15d728: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15d728u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15d72c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15d72cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15d730: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x15d730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d734: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d734u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d738: 0x0  nop
    ctx->pc = 0x15d738u;
    // NOP
    // 0x15d73c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15D73Cu;
    {
        const bool branch_taken_0x15d73c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d73c) {
            ctx->pc = 0x15D740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D73Cu;
            // 0x15d740: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D744u;
            goto label_15d744;
        }
    }
    ctx->pc = 0x15D744u;
label_15d744:
    // 0x15d744: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x15D744u;
    {
        const bool branch_taken_0x15d744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D744u;
        // 0x15d748: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d744) {
            ctx->pc = 0x15D7A8u;
            goto label_15d7a8;
        }
    }
    ctx->pc = 0x15D74Cu;
    // 0x15d74c: 0x3ae20009  xori        $v0, $s7, 0x9
    ctx->pc = 0x15d74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)9);
    // 0x15d750: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15d750u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d754: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x15d754u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x15d758: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D758u;
    {
        const bool branch_taken_0x15d758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D758u;
        // 0x15d75c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d758) {
            ctx->pc = 0x15D778u;
            goto label_15d778;
        }
    }
    ctx->pc = 0x15D760u;
    // 0x15d760: 0x12a50003  beq         $s5, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D760u;
    {
        const bool branch_taken_0x15d760 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 5));
        ctx->pc = 0x15D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D760u;
        // 0x15d764: 0x2aa20002  slti        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d760) {
            ctx->pc = 0x15D770u;
            goto label_15d770;
        }
    }
    ctx->pc = 0x15D768u;
    // 0x15d768: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15d768u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d76c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x15d76cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_15d770:
    // 0x15d770: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D770u;
    {
        const bool branch_taken_0x15d770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D770u;
        // 0x15d774: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d770) {
            ctx->pc = 0x15D798u;
            goto label_15d798;
        }
    }
    ctx->pc = 0x15D778u;
label_15d778:
    // 0x15d778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d77c: 0xc0573d0  jal         func_15CF40
    ctx->pc = 0x15D77Cu;
    SET_GPR_U32(ctx, 31, 0x15D784u);
    ctx->pc = 0x15D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D77Cu;
    // 0x15d780: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF40u, 0x15D77Cu, 0x15D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D784u;
label_15d784:
    // 0x15d784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d788: 0xc0570d0  jal         func_15C340
    ctx->pc = 0x15D788u;
    SET_GPR_U32(ctx, 31, 0x15D790u);
    ctx->pc = 0x15D78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D788u;
    // 0x15d78c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C340u, 0x15D788u, 0x15D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D790u;
label_15d790:
    // 0x15d790: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x15D790u;
    {
        const bool branch_taken_0x15d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D790u;
        // 0x15d794: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d790) {
            ctx->pc = 0x15D8ACu;
            goto label_15d8ac;
        }
    }
    ctx->pc = 0x15D798u;
label_15d798:
    // 0x15d798: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x15d798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d79c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15d7a0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x15D7A0u;
    {
        const bool branch_taken_0x15d7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7A0u;
        // 0x15d7a4: 0xac440330  sw          $a0, 0x330($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 816), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7a0) {
            ctx->pc = 0x15D8A8u;
            goto label_15d8a8;
        }
    }
    ctx->pc = 0x15D7A8u;
label_15d7a8:
    // 0x15d7a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d7ac: 0x3ae20009  xori        $v0, $s7, 0x9
    ctx->pc = 0x15d7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)9);
    // 0x15d7b0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x15d7b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d7b4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x15d7b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x15d7b8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D7B8u;
    {
        const bool branch_taken_0x15d7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7B8u;
        // 0x15d7bc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7b8) {
            ctx->pc = 0x15D7D0u;
            goto label_15d7d0;
        }
    }
    ctx->pc = 0x15D7C0u;
    // 0x15d7c0: 0x12a40003  beq         $s5, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D7C0u;
    {
        const bool branch_taken_0x15d7c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x15D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7C0u;
        // 0x15d7c4: 0x2aa20002  slti        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7c0) {
            ctx->pc = 0x15D7D0u;
            goto label_15d7d0;
        }
    }
    ctx->pc = 0x15D7C8u;
    // 0x15d7c8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x15d7c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d7cc: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x15d7ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_15d7d0:
    // 0x15d7d0: 0x2c3180a  movz        $v1, $s6, $v1
    ctx->pc = 0x15d7d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 22));
    // 0x15d7d4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15D7D4u;
    {
        const bool branch_taken_0x15d7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D4u;
        // 0x15d7d8: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7d4) {
            ctx->pc = 0x15D810u;
            goto label_15d810;
        }
    }
    ctx->pc = 0x15D7DCu;
    // 0x15d7dc: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D7DCu;
    {
        const bool branch_taken_0x15d7dc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7DCu;
        // 0x15d7e0: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7dc) {
            ctx->pc = 0x15D7F4u;
            goto label_15d7f4;
        }
    }
    ctx->pc = 0x15D7E4u;
    // 0x15d7e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d7e8: 0xc04f582  jal         func_13D608
    ctx->pc = 0x15D7E8u;
    SET_GPR_U32(ctx, 31, 0x15D7F0u);
    ctx->pc = 0x15D7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D7E8u;
    // 0x15d7ec: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D608u, 0x15D7E8u, 0x15D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D7F0u;
label_15d7f0:
    // 0x15d7f0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x15d7f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15d7f4:
    // 0x15d7f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D7F4u;
    {
        const bool branch_taken_0x15d7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7F4u;
        // 0x15d7f8: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7f4) {
            ctx->pc = 0x15D810u;
            goto label_15d810;
        }
    }
    ctx->pc = 0x15D7FCu;
    // 0x15d7fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d800: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x15d800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15d804: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x15d804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15d808: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x15D808u;
    {
        const bool branch_taken_0x15d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D808u;
        // 0x15d80c: 0xac430330  sw          $v1, 0x330($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d808) {
            ctx->pc = 0x15D8A8u;
            goto label_15d8a8;
        }
    }
    ctx->pc = 0x15D810u;
label_15d810:
    // 0x15d810: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x15d810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15d814: 0x728821  addu        $s1, $v1, $s2
    ctx->pc = 0x15d814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15d818: 0x8e30033c  lw          $s0, 0x33C($s1)
    ctx->pc = 0x15d818u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
    // 0x15d81c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15D81Cu;
    {
        const bool branch_taken_0x15d81c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D81Cu;
        // 0x15d820: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d81c) {
            ctx->pc = 0x15D884u;
            goto label_15d884;
        }
    }
    ctx->pc = 0x15D824u;
    // 0x15d824: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15D824u;
    SET_GPR_U32(ctx, 31, 0x15D82Cu);
    ctx->pc = 0x15D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D824u;
    // 0x15d828: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15D824u, 0x15D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D82Cu;
label_15d82c:
    // 0x15d82c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d830: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15D830u;
    SET_GPR_U32(ctx, 31, 0x15D838u);
    ctx->pc = 0x15D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D830u;
    // 0x15d834: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15D830u, 0x15D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D838u;
label_15d838:
    // 0x15d838: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D838u;
    {
        const bool branch_taken_0x15d838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d838) {
            ctx->pc = 0x15D83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D838u;
            // 0x15d83c: 0xae200340  sw          $zero, 0x340($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D850u;
            goto label_15d850;
        }
    }
    ctx->pc = 0x15D840u;
    // 0x15d840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d844: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d848: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D848u;
    {
        const bool branch_taken_0x15d848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D848u;
        // 0x15d84c: 0xae220330  sw          $v0, 0x330($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d848) {
            ctx->pc = 0x15D874u;
            goto label_15d874;
        }
    }
    ctx->pc = 0x15D850u;
label_15d850:
    // 0x15d850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d854: 0xae20033c  sw          $zero, 0x33C($s1)
    ctx->pc = 0x15d854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 0));
    // 0x15d858: 0xc0573d0  jal         func_15CF40
    ctx->pc = 0x15D858u;
    SET_GPR_U32(ctx, 31, 0x15D860u);
    ctx->pc = 0x15D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D858u;
    // 0x15d85c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF40u, 0x15D858u, 0x15D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D860u;
label_15d860:
    // 0x15d860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d864: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15d864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d868: 0xc057952  jal         func_15E548
    ctx->pc = 0x15D868u;
    SET_GPR_U32(ctx, 31, 0x15D870u);
    ctx->pc = 0x15D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D868u;
    // 0x15d86c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E548u, 0x15D868u, 0x15D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D870u;
label_15d870:
    // 0x15d870: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15d874:
    // 0x15d874: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15D874u;
    SET_GPR_U32(ctx, 31, 0x15D87Cu);
    ctx->pc = 0x15D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D874u;
    // 0x15d878: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15D874u, 0x15D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D87Cu;
label_15d87c:
    // 0x15d87c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15D87Cu;
    {
        const bool branch_taken_0x15d87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D87Cu;
        // 0x15d880: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d87c) {
            ctx->pc = 0x15D8ACu;
            goto label_15d8ac;
        }
    }
    ctx->pc = 0x15D884u;
label_15d884:
    // 0x15d884: 0x12e20008  beq         $s7, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D884u;
    {
        const bool branch_taken_0x15d884 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D884u;
        // 0x15d888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d884) {
            ctx->pc = 0x15D8A8u;
            goto label_15d8a8;
        }
    }
    ctx->pc = 0x15D88Cu;
    // 0x15d88c: 0xc0573d0  jal         func_15CF40
    ctx->pc = 0x15D88Cu;
    SET_GPR_U32(ctx, 31, 0x15D894u);
    ctx->pc = 0x15D890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D88Cu;
    // 0x15d890: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF40u, 0x15D88Cu, 0x15D894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D894u;
label_15d894:
    // 0x15d894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d898: 0xc0571c6  jal         func_15C718
    ctx->pc = 0x15D898u;
    SET_GPR_U32(ctx, 31, 0x15D8A0u);
    ctx->pc = 0x15D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D898u;
    // 0x15d89c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C718u, 0x15D898u, 0x15D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D8A0u;
label_15d8a0:
    // 0x15d8a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d8a4: 0xae220384  sw          $v0, 0x384($s1)
    ctx->pc = 0x15d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 900), GPR_U32(ctx, 2));
label_15d8a8:
    // 0x15d8a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x15d8a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15d8ac:
    // 0x15d8ac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x15d8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15d8b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x15d8b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d8b4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x15d8b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d8b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x15d8b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d8bc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x15d8bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d8c0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x15d8c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d8c4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x15d8c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d8c8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x15d8c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15d8cc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x15d8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15d8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x15D8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8D0u;
        // 0x15d8d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D8D8u;
}
