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

// Function: sub_001DA750
// Address: 0x1da750 - 0x1da958
void sub_001DA750_0x1da750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA750_0x1da750");
#endif

    switch (ctx->pc) {
        case 0x1da790u: goto label_1da790;
        case 0x1da7a0u: goto label_1da7a0;
        case 0x1da810u: goto label_1da810;
        case 0x1da880u: goto label_1da880;
        case 0x1da8fcu: goto label_1da8fc;
        case 0x1da924u: goto label_1da924;
        default: break;
    }

    ctx->pc = 0x1da750u;

    // 0x1da750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1da750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1da754: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1da754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1da758: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1da758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1da75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da760: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1da760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1da764: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1da764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1da768: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1da768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1da76c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1da76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1da770: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1da770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1da774: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1da774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1da778: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1da778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1da77c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1da77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1da780: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1da780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1da784: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1da784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da788: 0xc07958c  jal         func_1E5630
    ctx->pc = 0x1DA788u;
    SET_GPR_U32(ctx, 31, 0x1DA790u);
    ctx->pc = 0x1DA78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA788u;
    // 0x1da78c: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5630u, 0x1DA788u, 0x1DA790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA790u;
label_1da790:
    // 0x1da790: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1da790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da798: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1DA798u;
    SET_GPR_U32(ctx, 31, 0x1DA7A0u);
    ctx->pc = 0x1DA79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA798u;
    // 0x1da79c: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1DA798u, 0x1DA7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7A0u;
label_1da7a0:
    // 0x1da7a0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1da7a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7a4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1da7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1da7a8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1da7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1da7ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA7ACu;
    {
        const bool branch_taken_0x1da7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7ACu;
        // 0x1da7b0: 0x8c540ffc  lw          $s4, 0xFFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7ac) {
            ctx->pc = 0x1DA7C4u;
            goto label_1da7c4;
        }
    }
    ctx->pc = 0x1DA7B4u;
    // 0x1da7b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1da7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1da7b8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1da7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1da7bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA7BCu;
    {
        const bool branch_taken_0x1da7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7BCu;
        // 0x1da7c0: 0x3442fdef  ori         $v0, $v0, 0xFDEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65007);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7bc) {
            ctx->pc = 0x1DA7D0u;
            goto label_1da7d0;
        }
    }
    ctx->pc = 0x1DA7C4u;
label_1da7c4:
    // 0x1da7c4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1da7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1da7c8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1da7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1da7cc: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1da7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_1da7d0:
    // 0x1da7d0: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x1da7d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7d4: 0xac62fff4  sw          $v0, -0xC($v1)
    ctx->pc = 0x1da7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
    // 0x1da7d8: 0x26820034  addiu       $v0, $s4, 0x34
    ctx->pc = 0x1da7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
    // 0x1da7dc: 0x8e840034  lw          $a0, 0x34($s4)
    ctx->pc = 0x1da7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1da7e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1da7e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1da7e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7e8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1da7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1da7ec: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1da7ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1da7f0: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1DA7F0u;
    {
        const bool branch_taken_0x1da7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7F0u;
        // 0x1da7f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7f0) {
            ctx->pc = 0x1DA91Cu;
            goto label_1da91c;
        }
    }
    ctx->pc = 0x1DA7F8u;
    // 0x1da7f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1da7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1da7fc: 0x3c150010  lui         $s5, 0x10
    ctx->pc = 0x1da7fcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16 << 16));
    // 0x1da800: 0xc454d808  lwc1        $f20, -0x27F8($v0)
    ctx->pc = 0x1da800u;
    { uint32_t bits = FAST_READ32(0x45D808u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1da804: 0x36b50001  ori         $s5, $s5, 0x1
    ctx->pc = 0x1da804u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
    // 0x1da808: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x1da808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1da80c: 0x0  nop
    ctx->pc = 0x1da80cu;
    // NOP
label_1da810:
    // 0x1da810: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1da810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1da814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da818: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1da818u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da81c: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1DA81Cu;
    {
        const bool branch_taken_0x1da81c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA81Cu;
        // 0x1da820: 0x8fc4fff4  lw          $a0, -0xC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da81c) {
            ctx->pc = 0x1DA8FCu;
            goto label_1da8fc;
        }
    }
    ctx->pc = 0x1DA824u;
    // 0x1da824: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x1da824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1da828: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1da82c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1da82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1da830: 0x54600033  bnel        $v1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1DA830u;
    {
        const bool branch_taken_0x1da830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da830) {
            ctx->pc = 0x1DA834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA830u;
            // 0x1da834: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA900u;
            goto label_1da900;
        }
    }
    ctx->pc = 0x1DA838u;
    // 0x1da838: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1da838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1da83c: 0x8c4391ac  lw          $v1, -0x6E54($v0)
    ctx->pc = 0x1da83cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ACu));
    // 0x1da840: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA840u;
    {
        const bool branch_taken_0x1da840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA840u;
        // 0x1da844: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da840) {
            ctx->pc = 0x1DA854u;
            goto label_1da854;
        }
    }
    ctx->pc = 0x1DA848u;
    // 0x1da848: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1da848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1da84c: 0x5055002c  beql        $v0, $s5, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DA84Cu;
    {
        const bool branch_taken_0x1da84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1da84c) {
            ctx->pc = 0x1DA850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA84Cu;
            // 0x1da850: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA900u;
            goto label_1da900;
        }
    }
    ctx->pc = 0x1DA854u;
label_1da854:
    // 0x1da854: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1da854u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x1da858: 0x8e2291d8  lw          $v0, -0x6E28($s1)
    ctx->pc = 0x1da858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939096)));
    // 0x1da85c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1da85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da860: 0x8e4391d4  lw          $v1, -0x6E2C($s2)
    ctx->pc = 0x1da860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91D4u));
    // 0x1da864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da86c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1da86cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1da870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da874: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1da874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da878: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x1DA878u;
    SET_GPR_U32(ctx, 31, 0x1DA880u);
    ctx->pc = 0x1DA87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA878u;
    // 0x1da87c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6E0u, 0x1DA878u, 0x1DA880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA880u;
label_1da880:
    // 0x1da880: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DA880u;
    {
        const bool branch_taken_0x1da880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA880u;
        // 0x1da884: 0x8e2391d8  lw          $v1, -0x6E28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da880) {
            ctx->pc = 0x1DA8FCu;
            goto label_1da8fc;
        }
    }
    ctx->pc = 0x1DA888u;
    // 0x1da888: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1da888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1da88c: 0x8e4491d4  lw          $a0, -0x6E2C($s2)
    ctx->pc = 0x1da88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939092)));
    // 0x1da890: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1da890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1da894: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1da898: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1da898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1da89c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1da89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da8a0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1da8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1da8a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1da8a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1da8a8: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x1da8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x1da8ac: 0x8e2491d8  lw          $a0, -0x6E28($s1)
    ctx->pc = 0x1da8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939096)));
    // 0x1da8b0: 0x8e4291d4  lw          $v0, -0x6E2C($s2)
    ctx->pc = 0x1da8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939092)));
    // 0x1da8b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1da8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1da8b8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1da8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da8bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1da8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1da8c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1da8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da8c4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1da8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1da8c8: 0x8e2291d8  lw          $v0, -0x6E28($s1)
    ctx->pc = 0x1da8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939096)));
    // 0x1da8cc: 0x8e4491d4  lw          $a0, -0x6E2C($s2)
    ctx->pc = 0x1da8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939092)));
    // 0x1da8d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da8d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1da8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1da8d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1da8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da8dc: 0xac700034  sw          $s0, 0x34($v1)
    ctx->pc = 0x1da8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 16));
    // 0x1da8e0: 0x8e2291d8  lw          $v0, -0x6E28($s1)
    ctx->pc = 0x1da8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939096)));
    // 0x1da8e4: 0x8e4491d4  lw          $a0, -0x6E2C($s2)
    ctx->pc = 0x1da8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939092)));
    // 0x1da8e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da8ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1da8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1da8f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1da8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da8f4: 0xc079586  jal         func_1E5618
    ctx->pc = 0x1DA8F4u;
    SET_GPR_U32(ctx, 31, 0x1DA8FCu);
    ctx->pc = 0x1DA8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8F4u;
    // 0x1da8f8: 0xac660038  sw          $a2, 0x38($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5618u, 0x1DA8F4u, 0x1DA8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8FCu;
label_1da8fc:
    // 0x1da8fc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1da8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1da900:
    // 0x1da900: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1da900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1da904: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x1da904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1da908: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1da908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da90c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1da90cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1da910: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1da910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1da914: 0x5440ffbe  bnel        $v0, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1DA914u;
    {
        const bool branch_taken_0x1da914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da914) {
            ctx->pc = 0x1DA918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA914u;
            // 0x1da918: 0x8e820034  lw          $v0, 0x34($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da810;
        }
    }
    ctx->pc = 0x1DA91Cu;
label_1da91c:
    // 0x1da91c: 0xc079582  jal         func_1E5608
    ctx->pc = 0x1DA91Cu;
    SET_GPR_U32(ctx, 31, 0x1DA924u);
    ctx->pc = 0x1E5608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5608u, 0x1DA91Cu, 0x1DA924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA924u;
label_1da924:
    // 0x1da924: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1da924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da928: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1da928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1da92c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1da92cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da930: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1da930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1da934: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1da934u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da938: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1da938u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da93c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1da93cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da940: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1da940u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1da944: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1da944u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1da948: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1da948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1da94c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1da94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1da950: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA950u;
        // 0x1da954: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA958u;
}
