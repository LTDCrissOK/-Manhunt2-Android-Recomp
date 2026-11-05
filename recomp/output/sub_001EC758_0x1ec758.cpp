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

// Function: sub_001EC758
// Address: 0x1ec758 - 0x1ec8e8
void sub_001EC758_0x1ec758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC758_0x1ec758");
#endif

    switch (ctx->pc) {
        case 0x1ec780u: goto label_1ec780;
        case 0x1ec870u: goto label_1ec870;
        case 0x1ec8c4u: goto label_1ec8c4;
        default: break;
    }

    ctx->pc = 0x1ec758u;

    // 0x1ec758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec75c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ec75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec764: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ec764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ec768: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ec768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ec76c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ec76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ec770: 0x90e2050a  lbu         $v0, 0x50A($a3)
    ctx->pc = 0x1ec770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1290)));
    // 0x1ec774: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EC774u;
    {
        const bool branch_taken_0x1ec774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC774u;
        // 0x1ec778: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec774) {
            ctx->pc = 0x1EC7F8u;
            goto label_1ec7f8;
        }
    }
    ctx->pc = 0x1EC77Cu;
    // 0x1ec77c: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1ec77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_1ec780:
    // 0x1ec780: 0x8ce40510  lw          $a0, 0x510($a3)
    ctx->pc = 0x1ec780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1296)));
    // 0x1ec784: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x1ec784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1ec788: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ec788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ec78c: 0x14640015  bne         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EC78Cu;
    {
        const bool branch_taken_0x1ec78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC78Cu;
        // 0x1ec790: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec78c) {
            ctx->pc = 0x1EC7E4u;
            goto label_1ec7e4;
        }
    }
    ctx->pc = 0x1EC794u;
    // 0x1ec794: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1ec794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ec798: 0x8ce20514  lw          $v0, 0x514($a3)
    ctx->pc = 0x1ec798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1300)));
    // 0x1ec79c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EC79Cu;
    {
        const bool branch_taken_0x1ec79c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC79Cu;
        // 0x1ec7a0: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec79c) {
            ctx->pc = 0x1EC7E4u;
            goto label_1ec7e4;
        }
    }
    ctx->pc = 0x1EC7A4u;
    // 0x1ec7a4: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x1ec7a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ec7a8: 0x90e20518  lbu         $v0, 0x518($a3)
    ctx->pc = 0x1ec7a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1304)));
    // 0x1ec7ac: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EC7ACu;
    {
        const bool branch_taken_0x1ec7ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7ACu;
        // 0x1ec7b0: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7ac) {
            ctx->pc = 0x1EC7E4u;
            goto label_1ec7e4;
        }
    }
    ctx->pc = 0x1EC7B4u;
    // 0x1ec7b4: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x1ec7b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x1ec7b8: 0x90e20519  lbu         $v0, 0x519($a3)
    ctx->pc = 0x1ec7b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1305)));
    // 0x1ec7bc: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC7BCu;
    {
        const bool branch_taken_0x1ec7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ec7bc) {
            ctx->pc = 0x1EC7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC7BCu;
            // 0x1ec7c0: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC7E4u;
            goto label_1ec7e4;
        }
    }
    ctx->pc = 0x1EC7C4u;
    // 0x1ec7c4: 0xc4e1051c  lwc1        $f1, 0x51C($a3)
    ctx->pc = 0x1ec7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec7c8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1ec7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec7cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ec7ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec7d0: 0x0  nop
    ctx->pc = 0x1ec7d0u;
    // NOP
    // 0x1ec7d4: 0x4503003d  bc1tl       . + 4 + (0x3D << 2)
    ctx->pc = 0x1EC7D4u;
    {
        const bool branch_taken_0x1ec7d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec7d4) {
            ctx->pc = 0x1EC7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC7D4u;
            // 0x1ec7d8: 0xe4a1000c  swc1        $f1, 0xC($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC8CCu;
            goto label_1ec8cc;
        }
    }
    ctx->pc = 0x1EC7DCu;
    // 0x1ec7dc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1EC7DCu;
    {
        const bool branch_taken_0x1ec7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7DCu;
        // 0x1ec7e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7dc) {
            ctx->pc = 0x1EC8D0u;
            goto label_1ec8d0;
        }
    }
    ctx->pc = 0x1EC7E4u;
label_1ec7e4:
    // 0x1ec7e4: 0x90e2050a  lbu         $v0, 0x50A($a3)
    ctx->pc = 0x1ec7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1290)));
    // 0x1ec7e8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1ec7e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ec7ec: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1ec7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ec7f0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1EC7F0u;
    {
        const bool branch_taken_0x1ec7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7F0u;
        // 0x1ec7f4: 0x101180  sll         $v0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7f0) {
            ctx->pc = 0x1EC780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec780;
        }
    }
    ctx->pc = 0x1EC7F8u;
label_1ec7f8:
    // 0x1ec7f8: 0x90e3050a  lbu         $v1, 0x50A($a3)
    ctx->pc = 0x1ec7f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1290)));
    // 0x1ec7fc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1ec7fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ec800: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x1ec800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ec804: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC804u;
    {
        const bool branch_taken_0x1ec804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC804u;
        // 0x1ec808: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec804) {
            ctx->pc = 0x1EC818u;
            goto label_1ec818;
        }
    }
    ctx->pc = 0x1EC80Cu;
    // 0x1ec80c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ec80cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec810: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EC810u;
    {
        const bool branch_taken_0x1ec810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC810u;
        // 0x1ec814: 0xa0e2050a  sb          $v0, 0x50A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1290), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec810) {
            ctx->pc = 0x1EC83Cu;
            goto label_1ec83c;
        }
    }
    ctx->pc = 0x1EC818u;
label_1ec818:
    // 0x1ec818: 0x90f20509  lbu         $s2, 0x509($a3)
    ctx->pc = 0x1ec818u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1289)));
    // 0x1ec81c: 0xc4e00540  lwc1        $f0, 0x540($a3)
    ctx->pc = 0x1ec81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec820: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1ec820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1ec824: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1ec824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1ec828: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1ec828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec82c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec82cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec830: 0x0  nop
    ctx->pc = 0x1ec830u;
    // NOP
    // 0x1ec834: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x1EC834u;
    {
        const bool branch_taken_0x1ec834 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC834u;
        // 0x1ec838: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec834) {
            ctx->pc = 0x1EC8D0u;
            goto label_1ec8d0;
        }
    }
    ctx->pc = 0x1EC83Cu;
label_1ec83c:
    // 0x1ec83c: 0x78e30510  lq          $v1, 0x510($a3)
    ctx->pc = 0x1ec83cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 1296)));
    // 0x1ec840: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x1ec840u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1ec844: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x1ec844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1ec848: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ec848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec84c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1ec84cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1ec850: 0x78e20520  lq          $v0, 0x520($a3)
    ctx->pc = 0x1ec850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 1312)));
    // 0x1ec854: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x1ec854u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x1ec858: 0x78e30530  lq          $v1, 0x530($a3)
    ctx->pc = 0x1ec858u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 1328)));
    // 0x1ec85c: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x1ec85cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x1ec860: 0x78e20540  lq          $v0, 0x540($a3)
    ctx->pc = 0x1ec860u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 1344)));
    // 0x1ec864: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x1ec864u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x1ec868: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC868u;
    {
        const bool branch_taken_0x1ec868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC868u;
        // 0x1ec86c: 0x24f10500  addiu       $s1, $a3, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec868) {
            ctx->pc = 0x1EC878u;
            goto label_1ec878;
        }
    }
    ctx->pc = 0x1EC870u;
label_1ec870:
    // 0x1ec870: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1ec870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ec874: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1ec874u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec878:
    // 0x1ec878: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1ec878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1ec87c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EC87Cu;
    {
        const bool branch_taken_0x1ec87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC87Cu;
        // 0x1ec880: 0x2301821  addu        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec87c) {
            ctx->pc = 0x1EC8C4u;
            goto label_1ec8c4;
        }
    }
    ctx->pc = 0x1EC884u;
    // 0x1ec884: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1ec884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1ec888: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1ec888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec88c: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x1ec88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec890: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1ec890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1ec894: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1ec894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1ec898: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1ec898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec89c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec89cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec8a0: 0x0  nop
    ctx->pc = 0x1ec8a0u;
    // NOP
    // 0x1ec8a4: 0x4500fff2  bc1f        . + 4 + (-0xE << 2)
    ctx->pc = 0x1EC8A4u;
    {
        const bool branch_taken_0x1ec8a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8A4u;
        // 0x1ec8a8: 0x26040501  addiu       $a0, $s0, 0x501 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1281));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8a4) {
            ctx->pc = 0x1EC870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec870;
        }
    }
    ctx->pc = 0x1EC8ACu;
    // 0x1ec8ac: 0x26050500  addiu       $a1, $s0, 0x500
    ctx->pc = 0x1ec8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
    // 0x1ec8b0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1ec8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ec8b4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1ec8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1ec8b8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1ec8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1ec8bc: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1EC8BCu;
    SET_GPR_U32(ctx, 31, 0x1EC8C4u);
    ctx->pc = 0x1EC8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC8BCu;
    // 0x1ec8c0: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1EC8BCu, 0x1EC8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC8C4u;
label_1ec8c4:
    // 0x1ec8c4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1ec8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1ec8c8: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1ec8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
label_1ec8cc:
    // 0x1ec8cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec8d0:
    // 0x1ec8d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ec8d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ec8d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ec8d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec8d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ec8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8DCu;
        // 0x1ec8e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC8E4u;
    // 0x1ec8e4: 0x0  nop
    ctx->pc = 0x1ec8e4u;
    // NOP
    ctx->pc = 0x1ec8e8u;
}
