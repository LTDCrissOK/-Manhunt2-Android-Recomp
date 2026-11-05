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

// Function: sub_00104870
// Address: 0x104870 - 0x1049c0
void sub_00104870_0x104870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104870_0x104870");
#endif

    switch (ctx->pc) {
        case 0x104904u: goto label_104904;
        case 0x104918u: goto label_104918;
        case 0x10491cu: goto label_10491c;
        case 0x104938u: goto label_104938;
        case 0x104950u: goto label_104950;
        case 0x10495cu: goto label_10495c;
        default: break;
    }

    ctx->pc = 0x104870u;

    // 0x104870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x104870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x104874: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x104874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x104878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10487c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10487cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104884: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104888: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x104888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10488c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x104890: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x104890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x104894: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x104894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x104898: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x104898u;
    {
        const bool branch_taken_0x104898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104898u;
        // 0x10489c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104898) {
            ctx->pc = 0x10499Cu;
            goto label_10499c;
        }
    }
    ctx->pc = 0x1048A0u;
    // 0x1048a0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1048a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1048a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1048a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1048a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1048ACu;
    {
        const bool branch_taken_0x1048ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1048B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048ACu;
        // 0x1048b0: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048ac) {
            ctx->pc = 0x1048B8u;
            goto label_1048b8;
        }
    }
    ctx->pc = 0x1048B4u;
    // 0x1048b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1048b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1048b8:
    // 0x1048b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1048B8u;
    {
        const bool branch_taken_0x1048b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1048b8) {
            ctx->pc = 0x1048BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1048B8u;
            // 0x1048bc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1048CCu;
            goto label_1048cc;
        }
    }
    ctx->pc = 0x1048C0u;
    // 0x1048c0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1048c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1048c4: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1048c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1048c8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1048c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1048cc:
    // 0x1048cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1048ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1048D0u;
    {
        const bool branch_taken_0x1048d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1048D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048D0u;
        // 0x1048d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048d0) {
            ctx->pc = 0x1048DCu;
            goto label_1048dc;
        }
    }
    ctx->pc = 0x1048D8u;
    // 0x1048d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1048d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1048dc:
    // 0x1048dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1048DCu;
    {
        const bool branch_taken_0x1048dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1048dc) {
            ctx->pc = 0x1048ECu;
            goto label_1048ec;
        }
    }
    ctx->pc = 0x1048E4u;
    // 0x1048e4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1048e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1048e8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1048e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_1048ec:
    // 0x1048ec: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1048ECu;
    {
        const bool branch_taken_0x1048ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1048F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048ECu;
        // 0x1048f0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048ec) {
            ctx->pc = 0x10490Cu;
            goto label_10490c;
        }
    }
    ctx->pc = 0x1048F4u;
    // 0x1048f4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1048F4u;
    {
        const bool branch_taken_0x1048f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1048F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048F4u;
        // 0x1048f8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048f4) {
            ctx->pc = 0x104918u;
            goto label_104918;
        }
    }
    ctx->pc = 0x1048FCu;
    // 0x1048fc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1048FCu;
    {
        const bool branch_taken_0x1048fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048FCu;
        // 0x104900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048fc) {
            ctx->pc = 0x104998u;
            goto label_104998;
        }
    }
    ctx->pc = 0x104904u;
label_104904:
    // 0x104904: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x104904u;
    {
        const bool branch_taken_0x104904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104904u;
        // 0x104908: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104904) {
            ctx->pc = 0x104990u;
            goto label_104990;
        }
    }
    ctx->pc = 0x10490Cu;
label_10490c:
    // 0x10490c: 0x52200021  beql        $s1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x10490Cu;
    {
        const bool branch_taken_0x10490c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10490c) {
            ctx->pc = 0x104910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10490Cu;
            // 0x104910: 0xae750020  sw          $s5, 0x20($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104994u;
            goto label_104994;
        }
    }
    ctx->pc = 0x104914u;
    // 0x104914: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x104914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104918:
    // 0x104918: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x104918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10491c:
    // 0x10491c: 0x92420022  lbu         $v0, 0x22($s2)
    ctx->pc = 0x10491cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x104920: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x104920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104924: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x104924u;
    {
        const bool branch_taken_0x104924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104924) {
            ctx->pc = 0x104960u;
            goto label_104960;
        }
    }
    ctx->pc = 0x10492Cu;
    // 0x10492c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104930: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x104930u;
    SET_GPR_U32(ctx, 31, 0x104938u);
    ctx->pc = 0x104934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104930u;
    // 0x104934: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x104930u, 0x104938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104938u;
label_104938:
    // 0x104938: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10493c: 0x5471fff7  bnel        $v1, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10493Cu;
    {
        const bool branch_taken_0x10493c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x10493c) {
            ctx->pc = 0x104940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10493Cu;
            // 0x104940: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10491Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10491c;
        }
    }
    ctx->pc = 0x104944u;
    // 0x104944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x104944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104948: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x104948u;
    SET_GPR_U32(ctx, 31, 0x104950u);
    ctx->pc = 0x10494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104948u;
    // 0x10494c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x104948u, 0x104950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104950u;
label_104950:
    // 0x104950: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x104950u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104954: 0xc04113c  jal         func_1044F0
    ctx->pc = 0x104954u;
    SET_GPR_U32(ctx, 31, 0x10495Cu);
    ctx->pc = 0x104958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104954u;
    // 0x104958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044F0u, 0x104954u, 0x10495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10495Cu;
label_10495c:
    // 0x10495c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x10495cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_104960:
    // 0x104960: 0x1280ffe8  beqz        $s4, . + 4 + (-0x18 << 2)
    ctx->pc = 0x104960u;
    {
        const bool branch_taken_0x104960 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x104964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104960u;
        // 0x104964: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104960) {
            ctx->pc = 0x104904u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104904;
        }
    }
    ctx->pc = 0x104968u;
    // 0x104968: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x104968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x10496c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10496Cu;
    {
        const bool branch_taken_0x10496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10496Cu;
        // 0x104970: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10496c) {
            ctx->pc = 0x104978u;
            goto label_104978;
        }
    }
    ctx->pc = 0x104974u;
    // 0x104974: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104978:
    // 0x104978: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104978u;
    {
        const bool branch_taken_0x104978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104978u;
        // 0x10497c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104978) {
            ctx->pc = 0x104988u;
            goto label_104988;
        }
    }
    ctx->pc = 0x104980u;
    // 0x104980: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x104980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x104984: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x104984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_104988:
    // 0x104988: 0x1620ffe3  bnez        $s1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x104988u;
    {
        const bool branch_taken_0x104988 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104988u;
        // 0x10498c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104988) {
            ctx->pc = 0x104918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104918;
        }
    }
    ctx->pc = 0x104990u;
label_104990:
    // 0x104990: 0xae750020  sw          $s5, 0x20($s3)
    ctx->pc = 0x104990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 21));
label_104994:
    // 0x104994: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x104994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_104998:
    // 0x104998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10499c:
    // 0x10499c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10499cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1049a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1049a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1049a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1049a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1049a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1049a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1049ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1049acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1049b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1049b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1049b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1049B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1049B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049B4u;
        // 0x1049b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1049B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1049BCu;
    // 0x1049bc: 0x0  nop
    ctx->pc = 0x1049bcu;
    // NOP
    ctx->pc = 0x1049c0u;
}
