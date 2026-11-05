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

// Function: sub_002124A0
// Address: 0x2124a0 - 0x212778
void sub_002124A0_0x2124a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002124A0_0x2124a0");
#endif

    switch (ctx->pc) {
        case 0x212510u: goto label_212510;
        case 0x212524u: goto label_212524;
        case 0x212534u: goto label_212534;
        case 0x212548u: goto label_212548;
        case 0x212570u: goto label_212570;
        case 0x212578u: goto label_212578;
        case 0x21258cu: goto label_21258c;
        case 0x2125b0u: goto label_2125b0;
        case 0x2125c0u: goto label_2125c0;
        case 0x2125ccu: goto label_2125cc;
        case 0x2125dcu: goto label_2125dc;
        case 0x2125e8u: goto label_2125e8;
        case 0x212618u: goto label_212618;
        case 0x212628u: goto label_212628;
        case 0x212638u: goto label_212638;
        case 0x2126a0u: goto label_2126a0;
        case 0x2126fcu: goto label_2126fc;
        default: break;
    }

    ctx->pc = 0x2124a0u;

    // 0x2124a0: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x2124a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x2124a4: 0xffb002c0  sd          $s0, 0x2C0($sp)
    ctx->pc = 0x2124a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 16));
    // 0x2124a8: 0xffb302d8  sd          $s3, 0x2D8($sp)
    ctx->pc = 0x2124a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 19));
    // 0x2124ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2124acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124b0: 0xffb102c8  sd          $s1, 0x2C8($sp)
    ctx->pc = 0x2124b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 17));
    // 0x2124b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2124b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124b8: 0xffb202d0  sd          $s2, 0x2D0($sp)
    ctx->pc = 0x2124b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 18));
    // 0x2124bc: 0xffb402e0  sd          $s4, 0x2E0($sp)
    ctx->pc = 0x2124bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 20));
    // 0x2124c0: 0xffb502e8  sd          $s5, 0x2E8($sp)
    ctx->pc = 0x2124c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 744), GPR_U64(ctx, 21));
    // 0x2124c4: 0xffb602f0  sd          $s6, 0x2F0($sp)
    ctx->pc = 0x2124c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 22));
    // 0x2124c8: 0xffb702f8  sd          $s7, 0x2F8($sp)
    ctx->pc = 0x2124c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 760), GPR_U64(ctx, 23));
    // 0x2124cc: 0xffbe0300  sd          $fp, 0x300($sp)
    ctx->pc = 0x2124ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 30));
    // 0x2124d0: 0xffbf0308  sd          $ra, 0x308($sp)
    ctx->pc = 0x2124d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 776), GPR_U64(ctx, 31));
    // 0x2124d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2124D4u;
    {
        const bool branch_taken_0x2124d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2124D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124D4u;
        // 0x2124d8: 0xafa002a0  sw          $zero, 0x2A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2124d4) {
            ctx->pc = 0x2124ECu;
            goto label_2124ec;
        }
    }
    ctx->pc = 0x2124DCu;
    // 0x2124dc: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2124dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2124e0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2124e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2124e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2124e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2124e8: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x2124e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
label_2124ec:
    // 0x2124ec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2124ECu;
    {
        const bool branch_taken_0x2124ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2124F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124ECu;
        // 0x2124f0: 0xafa002a4  sw          $zero, 0x2A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2124ec) {
            ctx->pc = 0x212508u;
            goto label_212508;
        }
    }
    ctx->pc = 0x2124F4u;
    // 0x2124f4: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2124f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2124f8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2124f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2124fc: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2124fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x212500: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x212500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x212504: 0xafa202a4  sw          $v0, 0x2A4($sp)
    ctx->pc = 0x212504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 2));
label_212508:
    // 0x212508: 0xc0c3034  jal         func_30C0D0
    ctx->pc = 0x212508u;
    SET_GPR_U32(ctx, 31, 0x212510u);
    ctx->pc = 0x21250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212508u;
    // 0x21250c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C0D0u, 0x212508u, 0x212510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212510u;
label_212510:
    // 0x212510: 0x8e770010  lw          $s7, 0x10($s3)
    ctx->pc = 0x212510u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212514: 0x12e0008b  beqz        $s7, . + 4 + (0x8B << 2)
    ctx->pc = 0x212514u;
    {
        const bool branch_taken_0x212514 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x212518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212514u;
        // 0x212518: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212514) {
            ctx->pc = 0x212744u;
            goto label_212744;
        }
    }
    ctx->pc = 0x21251Cu;
    // 0x21251c: 0xc0742b4  jal         func_1D0AD0
    ctx->pc = 0x21251Cu;
    SET_GPR_U32(ctx, 31, 0x212524u);
    ctx->pc = 0x212520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21251Cu;
    // 0x212520: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0AD0u, 0x21251Cu, 0x212524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212524u;
label_212524:
    // 0x212524: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x212524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x212528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x212528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21252c: 0xc0c3002  jal         func_30C008
    ctx->pc = 0x21252Cu;
    SET_GPR_U32(ctx, 31, 0x212534u);
    ctx->pc = 0x212530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21252Cu;
    // 0x212530: 0xafa202a8  sw          $v0, 0x2A8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C008u, 0x21252Cu, 0x212534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212534u;
label_212534:
    // 0x212534: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x212534u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212538: 0x13c00082  beqz        $fp, . + 4 + (0x82 << 2)
    ctx->pc = 0x212538u;
    {
        const bool branch_taken_0x212538 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x21253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212538u;
        // 0x21253c: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212538) {
            ctx->pc = 0x212744u;
            goto label_212744;
        }
    }
    ctx->pc = 0x212540u;
    // 0x212540: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x212540u;
    SET_GPR_U32(ctx, 31, 0x212548u);
    ctx->pc = 0x212544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212540u;
    // 0x212544: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x212540u, 0x212548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212548u;
label_212548:
    // 0x212548: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x212548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x21254c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x21254cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x212550: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x212550u;
    {
        const bool branch_taken_0x212550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212550u;
        // 0x212554: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212550) {
            ctx->pc = 0x212744u;
            goto label_212744;
        }
    }
    ctx->pc = 0x212558u;
    // 0x212558: 0x27a30290  addiu       $v1, $sp, 0x290
    ctx->pc = 0x212558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x21255c: 0x27b50210  addiu       $s5, $sp, 0x210
    ctx->pc = 0x21255cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x212560: 0xafa302b4  sw          $v1, 0x2B4($sp)
    ctx->pc = 0x212560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 3));
    // 0x212564: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x212564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212568: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x212568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x21256c: 0x0  nop
    ctx->pc = 0x21256cu;
    // NOP
label_212570:
    // 0x212570: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x212570u;
    SET_GPR_U32(ctx, 31, 0x212578u);
    ctx->pc = 0x212574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212570u;
    // 0x212574: 0x1280c0  sll         $s0, $s2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x212570u, 0x212578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212578u;
label_212578:
    // 0x212578: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x212578u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21257c: 0xafb002b8  sw          $s0, 0x2B8($sp)
    ctx->pc = 0x21257cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 16));
    // 0x212580: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x212580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x212584: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x212584u;
    SET_GPR_U32(ctx, 31, 0x21258Cu);
    ctx->pc = 0x212588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212584u;
    // 0x212588: 0xafa002ac  sw          $zero, 0x2AC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x212584u, 0x21258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21258Cu;
label_21258c:
    // 0x21258c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x21258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212590: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x212590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x212594: 0xafa202b0  sw          $v0, 0x2B0($sp)
    ctx->pc = 0x212594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
    // 0x212598: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x212598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21259c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2125a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2125a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2125a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2125a8: 0xc0c780e  jal         func_31E038
    ctx->pc = 0x2125A8u;
    SET_GPR_U32(ctx, 31, 0x2125B0u);
    ctx->pc = 0x2125ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2125A8u;
    // 0x2125ac: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E038u, 0x2125A8u, 0x2125B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2125B0u;
label_2125b0:
    // 0x2125b0: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2125b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2125b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2125b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125b8: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x2125B8u;
    SET_GPR_U32(ctx, 31, 0x2125C0u);
    ctx->pc = 0x2125BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2125B8u;
    // 0x2125bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x2125B8u, 0x2125C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2125C0u;
label_2125c0:
    // 0x2125c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2125c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125c4: 0xc0c780e  jal         func_31E038
    ctx->pc = 0x2125C4u;
    SET_GPR_U32(ctx, 31, 0x2125CCu);
    ctx->pc = 0x2125C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2125C4u;
    // 0x2125c8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E038u, 0x2125C4u, 0x2125CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2125CCu;
label_2125cc:
    // 0x2125cc: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x2125ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2125d0: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x2125d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2125d4: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2125D4u;
    SET_GPR_U32(ctx, 31, 0x2125DCu);
    ctx->pc = 0x2125D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2125D4u;
    // 0x2125d8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2125D4u, 0x2125DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2125DCu;
label_2125dc:
    // 0x2125dc: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x2125dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2125e0: 0xc0b189c  jal         func_2C6270
    ctx->pc = 0x2125E0u;
    SET_GPR_U32(ctx, 31, 0x2125E8u);
    ctx->pc = 0x2125E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2125E0u;
    // 0x2125e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x2125E0u, 0x2125E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2125E8u;
label_2125e8:
    // 0x2125e8: 0xc7a20210  lwc1        $f2, 0x210($sp)
    ctx->pc = 0x2125e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2125ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2125ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125f0: 0xc7a10214  lwc1        $f1, 0x214($sp)
    ctx->pc = 0x2125f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2125f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2125f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125f8: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x2125f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2125fc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2125fcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x212600: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x212600u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x212604: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x212604u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x212608: 0xe7a20210  swc1        $f2, 0x210($sp)
    ctx->pc = 0x212608u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x21260c: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x21260cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x212610: 0xc0c3264  jal         func_30C990
    ctx->pc = 0x212610u;
    SET_GPR_U32(ctx, 31, 0x212618u);
    ctx->pc = 0x212614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212610u;
    // 0x212614: 0xe7a00218  swc1        $f0, 0x218($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C990u, 0x212610u, 0x212618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212618u;
label_212618:
    // 0x212618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21261c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21261cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212620: 0xc0c32a0  jal         func_30CA80
    ctx->pc = 0x212620u;
    SET_GPR_U32(ctx, 31, 0x212628u);
    ctx->pc = 0x212624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212620u;
    // 0x212624: 0x27a60290  addiu       $a2, $sp, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA80u, 0x212620u, 0x212628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212628u;
label_212628:
    // 0x212628: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x212628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x21262c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x21262Cu;
    {
        const bool branch_taken_0x21262c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21262Cu;
        // 0x212630: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21262c) {
            ctx->pc = 0x2126E0u;
            goto label_2126e0;
        }
    }
    ctx->pc = 0x212634u;
    // 0x212634: 0x0  nop
    ctx->pc = 0x212634u;
    // NOP
label_212638:
    // 0x212638: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x212638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x21263c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21263Cu;
    {
        const bool branch_taken_0x21263c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21263Cu;
        // 0x212640: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21263c) {
            ctx->pc = 0x212680u;
            goto label_212680;
        }
    }
    ctx->pc = 0x212644u;
    // 0x212644: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x212644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x212648: 0x24639540  addiu       $v1, $v1, -0x6AC0
    ctx->pc = 0x212648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939968));
    // 0x21264c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212650: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x212650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212654: 0x5470fff8  bnel        $v1, $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x212654u;
    {
        const bool branch_taken_0x212654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x212654) {
            ctx->pc = 0x212658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212654u;
            // 0x212658: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212638;
        }
    }
    ctx->pc = 0x21265Cu;
    // 0x21265c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x21265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x212660: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x212660u;
    {
        const bool branch_taken_0x212660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212660) {
            ctx->pc = 0x212664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212660u;
            // 0x212664: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212680u;
            goto label_212680;
        }
    }
    ctx->pc = 0x212668u;
    // 0x212668: 0x240203eb  addiu       $v0, $zero, 0x3EB
    ctx->pc = 0x212668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
    // 0x21266c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21266Cu;
    {
        const bool branch_taken_0x21266c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x212670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21266Cu;
        // 0x212670: 0x24020421  addiu       $v0, $zero, 0x421 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21266c) {
            ctx->pc = 0x21267Cu;
            goto label_21267c;
        }
    }
    ctx->pc = 0x212674u;
    // 0x212674: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x212674u;
    {
        const bool branch_taken_0x212674 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x212678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212674u;
        // 0x212678: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212674) {
            ctx->pc = 0x212638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212638;
        }
    }
    ctx->pc = 0x21267Cu;
label_21267c:
    // 0x21267c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x21267cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212680:
    // 0x212680: 0x16800018  bnez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x212680u;
    {
        const bool branch_taken_0x212680 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x212684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212680u;
        // 0x212684: 0x8fa802ac  lw          $t0, 0x2AC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212680) {
            ctx->pc = 0x2126E4u;
            goto label_2126e4;
        }
    }
    ctx->pc = 0x212688u;
    // 0x212688: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x212688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x21268c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21268cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212690: 0x244394e8  addiu       $v1, $v0, -0x6B18
    ctx->pc = 0x212690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939880));
    // 0x212694: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x212694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x212698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x212698u;
    {
        const bool branch_taken_0x212698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212698u;
        // 0x21269c: 0x24050435  addiu       $a1, $zero, 0x435 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1077));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212698) {
            ctx->pc = 0x2126A4u;
            goto label_2126a4;
        }
    }
    ctx->pc = 0x2126A0u;
label_2126a0:
    // 0x2126a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2126a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2126a4:
    // 0x2126a4: 0x28820015  slti        $v0, $a0, 0x15
    ctx->pc = 0x2126a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x2126a8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2126A8u;
    {
        const bool branch_taken_0x2126a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2126ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126A8u;
        // 0x2126ac: 0x8fa802ac  lw          $t0, 0x2AC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126a8) {
            ctx->pc = 0x2126E4u;
            goto label_2126e4;
        }
    }
    ctx->pc = 0x2126B0u;
    // 0x2126b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2126b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2126b4: 0x5450fffa  bnel        $v0, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2126B4u;
    {
        const bool branch_taken_0x2126b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2126b4) {
            ctx->pc = 0x2126B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2126B4u;
            // 0x2126b8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2126A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2126a0;
        }
    }
    ctx->pc = 0x2126BCu;
    // 0x2126bc: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x2126bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2126c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2126C0u;
    {
        const bool branch_taken_0x2126c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2126c0) {
            ctx->pc = 0x2126C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2126C0u;
            // 0x2126c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2126DCu;
            goto label_2126dc;
        }
    }
    ctx->pc = 0x2126C8u;
    // 0x2126c8: 0x52060004  beql        $s0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2126C8u;
    {
        const bool branch_taken_0x2126c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        if (branch_taken_0x2126c8) {
            ctx->pc = 0x2126CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2126C8u;
            // 0x2126cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2126DCu;
            goto label_2126dc;
        }
    }
    ctx->pc = 0x2126D0u;
    // 0x2126d0: 0x1605fff3  bne         $s0, $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2126D0u;
    {
        const bool branch_taken_0x2126d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x2126D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126D0u;
        // 0x2126d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126d0) {
            ctx->pc = 0x2126A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2126a0;
        }
    }
    ctx->pc = 0x2126D8u;
    // 0x2126d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2126d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2126dc:
    // 0x2126dc: 0xafa302ac  sw          $v1, 0x2AC($sp)
    ctx->pc = 0x2126dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 3));
label_2126e0:
    // 0x2126e0: 0x8fa802ac  lw          $t0, 0x2AC($sp)
    ctx->pc = 0x2126e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_2126e4:
    // 0x2126e4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2126e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126e8: 0x8fa402a8  lw          $a0, 0x2A8($sp)
    ctx->pc = 0x2126e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x2126ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2126ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126f0: 0x8fa702b4  lw          $a3, 0x2B4($sp)
    ctx->pc = 0x2126f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x2126f4: 0xc0741f6  jal         func_1D07D8
    ctx->pc = 0x2126F4u;
    SET_GPR_U32(ctx, 31, 0x2126FCu);
    ctx->pc = 0x2126F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2126F4u;
    // 0x2126f8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D07D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D07D8u, 0x2126F4u, 0x2126FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2126FCu;
label_2126fc:
    // 0x2126fc: 0x8fa302b8  lw          $v1, 0x2B8($sp)
    ctx->pc = 0x2126fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x212700: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x212700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x212704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212708: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x212708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x21270c: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x21270cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x212710: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x212710u;
    {
        const bool branch_taken_0x212710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212710u;
        // 0x212714: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212710) {
            ctx->pc = 0x212720u;
            goto label_212720;
        }
    }
    ctx->pc = 0x212718u;
    // 0x212718: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x212718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x21271c: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x21271cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
label_212720:
    // 0x212720: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x212720u;
    {
        const bool branch_taken_0x212720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212720u;
        // 0x212724: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212720) {
            ctx->pc = 0x212730u;
            goto label_212730;
        }
    }
    ctx->pc = 0x212728u;
    // 0x212728: 0x8e360000  lw          $s6, 0x0($s1)
    ctx->pc = 0x212728u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21272c: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x21272cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_212730:
    // 0x212730: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x212730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x212734: 0x8fb202b0  lw          $s2, 0x2B0($sp)
    ctx->pc = 0x212734u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x212738: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x212738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21273c: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x21273Cu;
    {
        const bool branch_taken_0x21273c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21273Cu;
        // 0x212740: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21273c) {
            ctx->pc = 0x212570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212570;
        }
    }
    ctx->pc = 0x212744u;
label_212744:
    // 0x212744: 0xdfb002c0  ld          $s0, 0x2C0($sp)
    ctx->pc = 0x212744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x212748: 0xdfb102c8  ld          $s1, 0x2C8($sp)
    ctx->pc = 0x212748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x21274c: 0xdfb202d0  ld          $s2, 0x2D0($sp)
    ctx->pc = 0x21274cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x212750: 0xdfb302d8  ld          $s3, 0x2D8($sp)
    ctx->pc = 0x212750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x212754: 0xdfb402e0  ld          $s4, 0x2E0($sp)
    ctx->pc = 0x212754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x212758: 0xdfb502e8  ld          $s5, 0x2E8($sp)
    ctx->pc = 0x212758u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x21275c: 0xdfb602f0  ld          $s6, 0x2F0($sp)
    ctx->pc = 0x21275cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x212760: 0xdfb702f8  ld          $s7, 0x2F8($sp)
    ctx->pc = 0x212760u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x212764: 0xdfbe0300  ld          $fp, 0x300($sp)
    ctx->pc = 0x212764u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x212768: 0xdfbf0308  ld          $ra, 0x308($sp)
    ctx->pc = 0x212768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 776)));
    // 0x21276c: 0x3e00008  jr          $ra
    ctx->pc = 0x21276Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21276Cu;
        // 0x212770: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21276Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212774u;
    // 0x212774: 0x0  nop
    ctx->pc = 0x212774u;
    // NOP
    ctx->pc = 0x212778u;
}
