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

// Function: sub_0021C788
// Address: 0x21c788 - 0x21c9d8
void sub_0021C788_0x21c788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C788_0x21c788");
#endif

    switch (ctx->pc) {
        case 0x21c7d0u: goto label_21c7d0;
        case 0x21c7f8u: goto label_21c7f8;
        case 0x21c800u: goto label_21c800;
        case 0x21c83cu: goto label_21c83c;
        case 0x21c868u: goto label_21c868;
        case 0x21c874u: goto label_21c874;
        case 0x21c898u: goto label_21c898;
        case 0x21c8e8u: goto label_21c8e8;
        case 0x21c968u: goto label_21c968;
        case 0x21c994u: goto label_21c994;
        default: break;
    }

    ctx->pc = 0x21c788u;

    // 0x21c788: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21c788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21c78c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x21c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x21c790: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x21c790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x21c794: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x21c794u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x21c798: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x21c798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x21c79c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x21c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x21c7a0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x21c7a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21c7a4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x21c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x21c7a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21c7a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7ac: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x21c7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x21c7b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7b4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x21c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x21c7b8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x21c7b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7bc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x21c7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x21c7c0: 0x26103598  addiu       $s0, $s0, 0x3598
    ctx->pc = 0x21c7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13720));
    // 0x21c7c4: 0x8e6200f8  lw          $v0, 0xF8($s3)
    ctx->pc = 0x21c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x21c7c8: 0xc085a12  jal         func_216848
    ctx->pc = 0x21C7C8u;
    SET_GPR_U32(ctx, 31, 0x21C7D0u);
    ctx->pc = 0x21C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7C8u;
    // 0x21c7cc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216848u, 0x21C7C8u, 0x21C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7D0u;
label_21c7d0:
    // 0x21c7d0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21C7D0u;
    {
        const bool branch_taken_0x21c7d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x21c7d0) {
            ctx->pc = 0x21C7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C7D0u;
            // 0x21c7d4: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C7D8u;
            goto label_21c7d8;
        }
    }
    ctx->pc = 0x21C7D8u;
label_21c7d8:
    // 0x21c7d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c7dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x21c7e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21c7e4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x21c7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21c7e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21c7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c7ec: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x21C7ECu;
    {
        const bool branch_taken_0x21c7ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x21C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7ECu;
        // 0x21c7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7ec) {
            ctx->pc = 0x21C81Cu;
            goto label_21c81c;
        }
    }
    ctx->pc = 0x21C7F4u;
    // 0x21c7f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x21c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21c7f8:
    // 0x21c7f8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x21C7F8u;
    SET_GPR_U32(ctx, 31, 0x21C800u);
    ctx->pc = 0x21C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7F8u;
    // 0x21c7fc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x21C7F8u, 0x21C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C800u;
label_21c800:
    // 0x21c800: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C800u;
    {
        const bool branch_taken_0x21c800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c800) {
            ctx->pc = 0x21C804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C800u;
            // 0x21c804: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C810u;
            goto label_21c810;
        }
    }
    ctx->pc = 0x21C808u;
    // 0x21c808: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21C808u;
    {
        const bool branch_taken_0x21c808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C808u;
        // 0x21c80c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c808) {
            ctx->pc = 0x21C81Cu;
            goto label_21c81c;
        }
    }
    ctx->pc = 0x21C810u;
label_21c810:
    // 0x21c810: 0x5611fff9  bnel        $s0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21C810u;
    {
        const bool branch_taken_0x21c810 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x21c810) {
            ctx->pc = 0x21C814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C810u;
            // 0x21c814: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c7f8;
        }
    }
    ctx->pc = 0x21C818u;
    // 0x21c818: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c81c:
    // 0x21c81c: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x21C81Cu;
    {
        const bool branch_taken_0x21c81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C81Cu;
        // 0x21c820: 0x27b50034  addiu       $s5, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c81c) {
            ctx->pc = 0x21C9ACu;
            goto label_21c9ac;
        }
    }
    ctx->pc = 0x21C824u;
    // 0x21c824: 0x8e6200f8  lw          $v0, 0xF8($s3)
    ctx->pc = 0x21c824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x21c828: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21c828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c82c: 0x26903598  addiu       $s0, $s4, 0x3598
    ctx->pc = 0x21c82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 13720));
    // 0x21c830: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x21c830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x21c834: 0xc085a12  jal         func_216848
    ctx->pc = 0x21C834u;
    SET_GPR_U32(ctx, 31, 0x21C83Cu);
    ctx->pc = 0x21C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C834u;
    // 0x21c838: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216848u, 0x21C834u, 0x21C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C83Cu;
label_21c83c:
    // 0x21c83c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21C83Cu;
    {
        const bool branch_taken_0x21c83c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x21c83c) {
            ctx->pc = 0x21C840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C83Cu;
            // 0x21c840: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C844u;
            goto label_21c844;
        }
    }
    ctx->pc = 0x21C844u;
label_21c844:
    // 0x21c844: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c848: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21c848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x21c84c: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x21c84cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21c850: 0x8e740004  lw          $s4, 0x4($s3)
    ctx->pc = 0x21c850u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x21c854: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x21c854u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21c858: 0x12140051  beq         $s0, $s4, . + 4 + (0x51 << 2)
    ctx->pc = 0x21C858u;
    {
        const bool branch_taken_0x21c858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x21C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C858u;
        // 0x21c85c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c858) {
            ctx->pc = 0x21C9A0u;
            goto label_21c9a0;
        }
    }
    ctx->pc = 0x21C860u;
    // 0x21c860: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x21c860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21c864: 0x0  nop
    ctx->pc = 0x21c864u;
    // NOP
label_21c868:
    // 0x21c868: 0x26120008  addiu       $s2, $s0, 0x8
    ctx->pc = 0x21c868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21c86c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x21C86Cu;
    SET_GPR_U32(ctx, 31, 0x21C874u);
    ctx->pc = 0x21C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C86Cu;
    // 0x21c870: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x21C86Cu, 0x21C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C874u;
label_21c874:
    // 0x21c874: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x21C874u;
    {
        const bool branch_taken_0x21c874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c874) {
            ctx->pc = 0x21C878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C874u;
            // 0x21c878: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C998u;
            goto label_21c998;
        }
    }
    ctx->pc = 0x21C87Cu;
    // 0x21c87c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x21c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21c880: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21C880u;
    {
        const bool branch_taken_0x21c880 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C880u;
        // 0x21c884: 0x521023  subu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c880) {
            ctx->pc = 0x21C8B8u;
            goto label_21c8b8;
        }
    }
    ctx->pc = 0x21C888u;
    // 0x21c888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c88c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x21c88cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x21c890: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C890u;
    {
        const bool branch_taken_0x21c890 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C890u;
        // 0x21c894: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c890) {
            ctx->pc = 0x21C8B8u;
            goto label_21c8b8;
        }
    }
    ctx->pc = 0x21C898u;
label_21c898:
    // 0x21c898: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x21c898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x21c89c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x21c89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x21c8a0: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x21c8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c8a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21c8a8: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x21c8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c8ac: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x21c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x21c8b0: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21C8B0u;
    {
        const bool branch_taken_0x21c8b0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x21C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8B0u;
        // 0x21c8b4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8b0) {
            ctx->pc = 0x21C898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c898;
        }
    }
    ctx->pc = 0x21C8B8u;
label_21c8b8:
    // 0x21c8b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x21c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21c8bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21c8c0: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x21c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x21c8c4: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x21C8C4u;
    {
        const bool branch_taken_0x21c8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8C4u;
        // 0x21c8c8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8c4) {
            ctx->pc = 0x21C994u;
            goto label_21c994;
        }
    }
    ctx->pc = 0x21C8CCu;
    // 0x21c8cc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21c8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c8d0: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x21c8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x21c8d4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x21c8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21c8d8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x21c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21c8dc: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21C8DCu;
    {
        const bool branch_taken_0x21c8dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x21C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8DCu;
        // 0x21c8e0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8dc) {
            ctx->pc = 0x21C900u;
            goto label_21c900;
        }
    }
    ctx->pc = 0x21C8E4u;
    // 0x21c8e4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x21c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_21c8e8:
    // 0x21c8e8: 0x0  nop
    ctx->pc = 0x21c8e8u;
    // NOP
    // 0x21c8ec: 0x0  nop
    ctx->pc = 0x21c8ecu;
    // NOP
    // 0x21c8f0: 0x0  nop
    ctx->pc = 0x21c8f0u;
    // NOP
    // 0x21c8f4: 0x0  nop
    ctx->pc = 0x21c8f4u;
    // NOP
    // 0x21c8f8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21C8F8u;
    {
        const bool branch_taken_0x21c8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8F8u;
        // 0x21c8fc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8f8) {
            ctx->pc = 0x21C8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c8e8;
        }
    }
    ctx->pc = 0x21C900u;
label_21c900:
    // 0x21c900: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21c900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21c904: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21c904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x21c908: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x21c908u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x21c90c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21c910: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21c910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c914: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x21c914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21c918: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21c918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x21c91c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x21c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x21c920: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x21c920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x21c924: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x21c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21c928: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x21c928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x21c92c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x21c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x21c930: 0x6a62000f  ldl         $v0, 0xF($s3)
    ctx->pc = 0x21c930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21c934: 0x6e620008  ldr         $v0, 0x8($s3)
    ctx->pc = 0x21c934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21c938: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x21c938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c93c: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x21c93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c940: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x21c940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21c944: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x21c944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21c948: 0xb266000f  sdl         $a2, 0xF($s3)
    ctx->pc = 0x21c948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c94c: 0xb6660008  sdr         $a2, 0x8($s3)
    ctx->pc = 0x21c94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c950: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21c954: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x21c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c958: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C958u;
    {
        const bool branch_taken_0x21c958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C958u;
        // 0x21c95c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c958) {
            ctx->pc = 0x21C980u;
            goto label_21c980;
        }
    }
    ctx->pc = 0x21C960u;
    // 0x21c960: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x21c960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x21c964: 0x0  nop
    ctx->pc = 0x21c964u;
    // NOP
label_21c968:
    // 0x21c968: 0x0  nop
    ctx->pc = 0x21c968u;
    // NOP
    // 0x21c96c: 0x0  nop
    ctx->pc = 0x21c96cu;
    // NOP
    // 0x21c970: 0x0  nop
    ctx->pc = 0x21c970u;
    // NOP
    // 0x21c974: 0x0  nop
    ctx->pc = 0x21c974u;
    // NOP
    // 0x21c978: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21C978u;
    {
        const bool branch_taken_0x21c978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21c978) {
            ctx->pc = 0x21C97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C978u;
            // 0x21c97c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c968;
        }
    }
    ctx->pc = 0x21C980u;
label_21c980:
    // 0x21c980: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x21c980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21c984: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C984u;
    {
        const bool branch_taken_0x21c984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C984u;
        // 0x21c988: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c984) {
            ctx->pc = 0x21C998u;
            goto label_21c998;
        }
    }
    ctx->pc = 0x21C98Cu;
    // 0x21c98c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x21C98Cu;
    SET_GPR_U32(ctx, 31, 0x21C994u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x21C98Cu, 0x21C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C994u;
label_21c994:
    // 0x21c994: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x21c994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21c998:
    // 0x21c998: 0x5614ffb3  bnel        $s0, $s4, . + 4 + (-0x4D << 2)
    ctx->pc = 0x21C998u;
    {
        const bool branch_taken_0x21c998 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x21c998) {
            ctx->pc = 0x21C99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C998u;
            // 0x21c99c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c868;
        }
    }
    ctx->pc = 0x21C9A0u;
label_21c9a0:
    // 0x21c9a0: 0xdec295e0  ld          $v0, -0x6A20($s6)
    ctx->pc = 0x21c9a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 4294940128)));
    // 0x21c9a4: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x21c9a4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x21c9a8: 0xfec295e0  sd          $v0, -0x6A20($s6)
    ctx->pc = 0x21c9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294940128), GPR_U64(ctx, 2));
label_21c9ac:
    // 0x21c9ac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x21c9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c9b0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x21c9b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21c9b4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x21c9b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21c9b8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x21c9b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21c9bc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x21c9bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21c9c0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x21c9c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21c9c4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x21c9c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21c9c8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x21c9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21c9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x21C9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9CCu;
        // 0x21c9d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C9D4u;
    // 0x21c9d4: 0x0  nop
    ctx->pc = 0x21c9d4u;
    // NOP
    ctx->pc = 0x21c9d8u;
}
