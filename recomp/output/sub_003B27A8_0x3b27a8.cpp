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

// Function: sub_003B27A8
// Address: 0x3b27a8 - 0x3b2d28
void sub_003B27A8_0x3b27a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B27A8_0x3b27a8");
#endif

    switch (ctx->pc) {
        case 0x3b2818u: goto label_3b2818;
        case 0x3b2830u: goto label_3b2830;
        case 0x3b28d0u: goto label_3b28d0;
        case 0x3b295cu: goto label_3b295c;
        case 0x3b298cu: goto label_3b298c;
        case 0x3b29b0u: goto label_3b29b0;
        case 0x3b29e0u: goto label_3b29e0;
        case 0x3b2b60u: goto label_3b2b60;
        case 0x3b2c00u: goto label_3b2c00;
        case 0x3b2c88u: goto label_3b2c88;
        case 0x3b2c98u: goto label_3b2c98;
        case 0x3b2cb8u: goto label_3b2cb8;
        default: break;
    }

    ctx->pc = 0x3b27a8u;

    // 0x3b27a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b27a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b27ac: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3b27acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3b27b0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3b27b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b27b4: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x3b27b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x3b27b8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3b27b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b27bc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3b27bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3b27c0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3b27c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3b27c4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3b27c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3b27c8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3b27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x3b27cc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3b27ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3b27d0: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x3b27d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x3b27d4: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x3b27d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x3b27d8: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x3b27d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x3b27dc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3b27dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3b27e0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3b27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b27e4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x3b27e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x3b27e8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3b27ec: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x3b27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x3b27f0: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x3b27f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x3b27f4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x3b27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3b27f8: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x3b27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x3b27fc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3b27fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3b2800: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3b2800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3b2804: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x3b2804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3b2808: 0x18400119  blez        $v0, . + 4 + (0x119 << 2)
    ctx->pc = 0x3B2808u;
    {
        const bool branch_taken_0x3b2808 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3B280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2808u;
        // 0x3b280c: 0xafa50018  sw          $a1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2808) {
            ctx->pc = 0x3B2C70u;
            goto label_3b2c70;
        }
    }
    ctx->pc = 0x3B2810u;
    // 0x3b2810: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3b2810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3b2814: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3b2814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_3b2818:
    // 0x3b2818: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3b2818u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b281c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x3b281cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b2820: 0x2c7382a  slt         $a3, $s6, $a3
    ctx->pc = 0x3b2820u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3b2824: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x3B2824u;
    {
        const bool branch_taken_0x3b2824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2824u;
        // 0x3b2828: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2824) {
            ctx->pc = 0x3B2C20u;
            goto label_3b2c20;
        }
    }
    ctx->pc = 0x3B282Cu;
    // 0x3b282c: 0x0  nop
    ctx->pc = 0x3b282cu;
    // NOP
label_3b2830:
    // 0x3b2830: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x3b2830u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3b2834: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3b2834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3b2838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b2838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b283c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3b283cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3b2840: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3b2840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2844: 0x10a000d8  beqz        $a1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x3B2844u;
    {
        const bool branch_taken_0x3b2844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2844u;
        // 0x3b2848: 0x1e1840  sll         $v1, $fp, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2844) {
            ctx->pc = 0x3B2BA8u;
            goto label_3b2ba8;
        }
    }
    ctx->pc = 0x3B284Cu;
    // 0x3b284c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3b284cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3b2850: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3b2850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3b2854: 0x7e9021  addu        $s2, $v1, $fp
    ctx->pc = 0x3b2854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x3b2858: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3b2858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3b285c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x3b285cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b2860: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x3b2860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x3b2864: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3b2864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3b2868: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x3b2868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3b286c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3b286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3b2870: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3b2870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3b2874: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x3b2874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b2878: 0x483021  addu        $a2, $v0, $t0
    ctx->pc = 0x3b2878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3b287c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3b287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b2880: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x3b2880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x3b2884: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x3b2884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3b2888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b2888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b288c: 0x8cd40014  lw          $s4, 0x14($a2)
    ctx->pc = 0x3b288cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3b2890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b2890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b2894: 0x8cd30010  lw          $s3, 0x10($a2)
    ctx->pc = 0x3b2894u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3b2898: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b2898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b289c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3b289cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3b28a0: 0x24636b08  addiu       $v1, $v1, 0x6B08
    ctx->pc = 0x3b28a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27400));
    // 0x3b28a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b28a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b28a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b28ac: 0x14910048  bne         $a0, $s1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3B28ACu;
    {
        const bool branch_taken_0x3b28ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B28ACu;
        // 0x3b28b0: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b28ac) {
            ctx->pc = 0x3B29D0u;
            goto label_3b29d0;
        }
    }
    ctx->pc = 0x3B28B4u;
    // 0x3b28b4: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x3b28b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3b28b8: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x3b28b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3b28bc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3B28BCu;
    {
        const bool branch_taken_0x3b28bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B28C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B28BCu;
        // 0x3b28c0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b28bc) {
            ctx->pc = 0x3B2950u;
            goto label_3b2950;
        }
    }
    ctx->pc = 0x3B28C4u;
    // 0x3b28c4: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x3b28c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3b28c8: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B28C8u;
    SET_GPR_U32(ctx, 31, 0x3B28D0u);
    ctx->pc = 0x3B28CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B28C8u;
    // 0x3b28cc: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B28C8u, 0x3B28D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B28D0u;
label_3b28d0:
    // 0x3b28d0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3b28d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3b28d4: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3b28d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3b28d8: 0x24844e28  addiu       $a0, $a0, 0x4E28
    ctx->pc = 0x3b28d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20008));
    // 0x3b28dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b28dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b28e0: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x3b28e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x3b28e4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3b28e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b28e8: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x3b28e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x3b28ec: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3b28ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3b28f0: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x3b28f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3b28f4: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x3b28f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x3b28f8: 0x733818  mult        $a3, $v1, $s3
    ctx->pc = 0x3b28f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b28fc: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x3b28fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3b2900: 0xb31818  mult        $v1, $a1, $s3
    ctx->pc = 0x3b2900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b2904: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x3b2904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x3b2908: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x3b2908u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x3b290c: 0xf43021  addu        $a2, $a3, $s4
    ctx->pc = 0x3b290cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x3b2910: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b2910u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b2914: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b2914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b2918: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b2918u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b291c: 0xa4860080  sh          $a2, 0x80($a0)
    ctx->pc = 0x3b291cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b2920: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x3b2920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3b2924: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b2924u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b2928: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x3b2928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b292c: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b292cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b2930: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b2930u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b2934: 0xa4860040  sh          $a2, 0x40($a0)
    ctx->pc = 0x3b2934u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b2938: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x3b2938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3b293c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b293cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b2940: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b2940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b2944: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b2944u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b2948: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x3B2948u;
    {
        const bool branch_taken_0x3b2948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2948u;
        // 0x3b294c: 0xa4860000  sh          $a2, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2948) {
            ctx->pc = 0x3B2BCCu;
            goto label_3b2bcc;
        }
    }
    ctx->pc = 0x3B2950u;
label_3b2950:
    // 0x3b2950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b2950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2954: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2954u;
    SET_GPR_U32(ctx, 31, 0x3B295Cu);
    ctx->pc = 0x3B2958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2954u;
    // 0x3b2958: 0x128140  sll         $s0, $s2, 5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2954u, 0x3B295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B295Cu;
label_3b295c:
    // 0x3b295c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b295cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2960: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x3b2960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b2964: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x3b2964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x3b2968: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x3b2968u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3b296c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3b296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2970: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x3b2970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x3b2974: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x3b2974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3b2978: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b2978u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b297c: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b297cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b2980: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b2980u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b2984: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2984u;
    SET_GPR_U32(ctx, 31, 0x3B298Cu);
    ctx->pc = 0x3B2988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2984u;
    // 0x3b2988: 0xa6060000  sh          $a2, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2984u, 0x3B298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B298Cu;
label_3b298c:
    // 0x3b298c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b298cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2990: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x3b2990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b2994: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3b2994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2998: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x3b2998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3b299c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b299cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b29a0: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b29a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b29a4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b29a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b29a8: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B29A8u;
    SET_GPR_U32(ctx, 31, 0x3B29B0u);
    ctx->pc = 0x3B29ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B29A8u;
    // 0x3b29ac: 0xa6060040  sh          $a2, 0x40($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B29A8u, 0x3B29B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B29B0u;
label_3b29b0:
    // 0x3b29b0: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x3b29b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b29b4: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x3b29b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3b29b8: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b29b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b29bc: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b29bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b29c0: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b29c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b29c4: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x3B29C4u;
    {
        const bool branch_taken_0x3b29c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B29C4u;
        // 0x3b29c8: 0xa6060080  sh          $a2, 0x80($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b29c4) {
            ctx->pc = 0x3B2BCCu;
            goto label_3b2bcc;
        }
    }
    ctx->pc = 0x3B29CCu;
    // 0x3b29cc: 0x0  nop
    ctx->pc = 0x3b29ccu;
    // NOP
label_3b29d0:
    // 0x3b29d0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x3b29d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3b29d4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3b29d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b29d8: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B29D8u;
    SET_GPR_U32(ctx, 31, 0x3B29E0u);
    ctx->pc = 0x3B29DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B29D8u;
    // 0x3b29dc: 0x8cd00000  lw          $s0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B29D8u, 0x3B29E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B29E0u;
label_3b29e0:
    // 0x3b29e0: 0x1611001b  bne         $s0, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3B29E0u;
    {
        const bool branch_taken_0x3b29e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B29E0u;
        // 0x3b29e4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b29e0) {
            ctx->pc = 0x3B2A50u;
            goto label_3b2a50;
        }
    }
    ctx->pc = 0x3B29E8u;
    // 0x3b29e8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b29ec: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x3b29ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x3b29f0: 0x24444ea0  addiu       $a0, $v0, 0x4EA0
    ctx->pc = 0x3b29f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
    // 0x3b29f4: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x3b29f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x3b29f8: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3b29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3b29fc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3b29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3b2a00: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x3b2a00u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2a04: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3b2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3b2a08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3b2a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3b2a0c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3b2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3b2a10: 0xb34018  mult        $t0, $a1, $s3
    ctx->pc = 0x3b2a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b2a14: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x3b2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x3b2a18: 0x1143021  addu        $a2, $t0, $s4
    ctx->pc = 0x3b2a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x3b2a1c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b2a1cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b2a20: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b2a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b2a24: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b2a24u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b2a28: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x3b2a28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b2a2c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x3b2a2cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2a30: 0xb31018  mult        $v0, $a1, $s3
    ctx->pc = 0x3b2a30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b2a34: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x3b2a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3b2a38: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b2a38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b2a3c: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b2a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b2a40: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b2a40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b2a44: 0xa4660040  sh          $a2, 0x40($v1)
    ctx->pc = 0x3b2a44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b2a48: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3B2A48u;
    {
        const bool branch_taken_0x3b2a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A48u;
        // 0x3b2a4c: 0x80850020  lb          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2a48) {
            ctx->pc = 0x3B2B34u;
            goto label_3b2b34;
        }
    }
    ctx->pc = 0x3B2A50u;
label_3b2a50:
    // 0x3b2a50: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3b2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3b2a54: 0x1602001c  bne         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3B2A54u;
    {
        const bool branch_taken_0x3b2a54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A54u;
        // 0x3b2a58: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2a54) {
            ctx->pc = 0x3B2AC8u;
            goto label_3b2ac8;
        }
    }
    ctx->pc = 0x3B2A5Cu;
    // 0x3b2a5c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b2a60: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x3b2a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x3b2a64: 0x24444f00  addiu       $a0, $v0, 0x4F00
    ctx->pc = 0x3b2a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20224));
    // 0x3b2a68: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x3b2a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x3b2a6c: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3b2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3b2a70: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x3b2a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x3b2a74: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x3b2a74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2a78: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3b2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3b2a7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3b2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3b2a80: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3b2a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3b2a84: 0xb34018  mult        $t0, $a1, $s3
    ctx->pc = 0x3b2a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b2a88: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x3b2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x3b2a8c: 0x1143021  addu        $a2, $t0, $s4
    ctx->pc = 0x3b2a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x3b2a90: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b2a90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b2a94: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b2a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b2a98: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b2a98u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b2a9c: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x3b2a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b2aa0: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x3b2aa0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2aa4: 0xb31018  mult        $v0, $a1, $s3
    ctx->pc = 0x3b2aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b2aa8: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x3b2aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3b2aac: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b2aacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b2ab0: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b2ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b2ab4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b2ab4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b2ab8: 0xa4660040  sh          $a2, 0x40($v1)
    ctx->pc = 0x3b2ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b2abc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3B2ABCu;
    {
        const bool branch_taken_0x3b2abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2ABCu;
        // 0x3b2ac0: 0x80850080  lb          $a1, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2abc) {
            ctx->pc = 0x3B2B34u;
            goto label_3b2b34;
        }
    }
    ctx->pc = 0x3B2AC4u;
    // 0x3b2ac4: 0x0  nop
    ctx->pc = 0x3b2ac4u;
    // NOP
label_3b2ac8:
    // 0x3b2ac8: 0x16020021  bne         $s0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3B2AC8u;
    {
        const bool branch_taken_0x3b2ac8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2AC8u;
        // 0x3b2acc: 0x121140  sll         $v0, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ac8) {
            ctx->pc = 0x3B2B50u;
            goto label_3b2b50;
        }
    }
    ctx->pc = 0x3B2AD0u;
    // 0x3b2ad0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b2ad4: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x3b2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x3b2ad8: 0x24445080  addiu       $a0, $v0, 0x5080
    ctx->pc = 0x3b2ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20608));
    // 0x3b2adc: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x3b2adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x3b2ae0: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3b2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3b2ae4: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x3b2ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x3b2ae8: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x3b2ae8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2aec: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3b2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3b2af0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3b2af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3b2af4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3b2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3b2af8: 0xb34018  mult        $t0, $a1, $s3
    ctx->pc = 0x3b2af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b2afc: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x3b2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x3b2b00: 0x1143021  addu        $a2, $t0, $s4
    ctx->pc = 0x3b2b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x3b2b04: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b2b04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b2b08: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b2b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b2b0c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b2b0cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b2b10: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x3b2b10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b2b14: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x3b2b14u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2b18: 0xb31018  mult        $v0, $a1, $s3
    ctx->pc = 0x3b2b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b2b1c: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x3b2b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3b2b20: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b2b20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b2b24: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b2b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b2b28: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b2b28u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b2b2c: 0xa4660040  sh          $a2, 0x40($v1)
    ctx->pc = 0x3b2b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b2b30: 0x80850400  lb          $a1, 0x400($a0)
    ctx->pc = 0x3b2b30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1024)));
label_3b2b34:
    // 0x3b2b34: 0xb31018  mult        $v0, $a1, $s3
    ctx->pc = 0x3b2b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b2b38: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x3b2b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3b2b3c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b2b3cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b2b40: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b2b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b2b44: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b2b44u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b2b48: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3B2B48u;
    {
        const bool branch_taken_0x3b2b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B48u;
        // 0x3b2b4c: 0xa4660080  sh          $a2, 0x80($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2b48) {
            ctx->pc = 0x3B2BCCu;
            goto label_3b2bcc;
        }
    }
    ctx->pc = 0x3B2B50u;
label_3b2b50:
    // 0x3b2b50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b2b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2b54: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3b2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3b2b58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3b2b5c: 0x572821  addu        $a1, $v0, $s7
    ctx->pc = 0x3b2b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3b2b60:
    // 0x3b2b60: 0xf0001a  div         $zero, $a3, $s0
    ctx->pc = 0x3b2b60u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b2b64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b2b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3b2b68: 0x2a240003  slti        $a0, $s1, 0x3
    ctx->pc = 0x3b2b68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b2b6c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B2B6Cu;
    {
        const bool branch_taken_0x3b2b6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2b6c) {
            ctx->pc = 0x3B2B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2B6Cu;
            // 0x3b2b70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2B74u;
            goto label_3b2b74;
        }
    }
    ctx->pc = 0x3B2B74u;
label_3b2b74:
    // 0x3b2b74: 0x1010  mfhi        $v0
    ctx->pc = 0x3b2b74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3b2b78: 0x1812  mflo        $v1
    ctx->pc = 0x3b2b78u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3b2b7c: 0x533818  mult        $a3, $v0, $s3
    ctx->pc = 0x3b2b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b2b80: 0xf43021  addu        $a2, $a3, $s4
    ctx->pc = 0x3b2b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x3b2b84: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3b2b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2b88: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3b2b88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3b2b8c: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x3b2b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b2b90: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3b2b90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3b2b94: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x3b2b94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b2b98: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3B2B98u;
    {
        const bool branch_taken_0x3b2b98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B98u;
        // 0x3b2b9c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2b98) {
            ctx->pc = 0x3B2B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2b60;
        }
    }
    ctx->pc = 0x3B2BA0u;
    // 0x3b2ba0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B2BA0u;
    {
        const bool branch_taken_0x3b2ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BA0u;
        // 0x3b2ba4: 0x8fa80010  lw          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ba0) {
            ctx->pc = 0x3B2BD0u;
            goto label_3b2bd0;
        }
    }
    ctx->pc = 0x3B2BA8u;
label_3b2ba8:
    // 0x3b2ba8: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x3b2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x3b2bac: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x3b2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x3b2bb0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3b2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3b2bb4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3b2bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3b2bb8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3b2bbc: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3b2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x3b2bc0: 0xa4400080  sh          $zero, 0x80($v0)
    ctx->pc = 0x3b2bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b2bc4: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x3b2bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b2bc8: 0xa4400040  sh          $zero, 0x40($v0)
    ctx->pc = 0x3b2bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 0));
label_3b2bcc:
    // 0x3b2bcc: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x3b2bccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b2bd0:
    // 0x3b2bd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b2bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b2bd4: 0x55020012  bnel        $t0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B2BD4u;
    {
        const bool branch_taken_0x3b2bd4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b2bd4) {
            ctx->pc = 0x3B2BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2BD4u;
            // 0x3b2bd8: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2C20u;
            goto label_3b2c20;
        }
    }
    ctx->pc = 0x3B2BDCu;
    // 0x3b2bdc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3b2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2be0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3B2BE0u;
    {
        const bool branch_taken_0x3b2be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2be0) {
            ctx->pc = 0x3B2BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2BE0u;
            // 0x3b2be4: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2C20u;
            goto label_3b2c20;
        }
    }
    ctx->pc = 0x3B2BE8u;
    // 0x3b2be8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x3b2be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3b2bec: 0x161840  sll         $v1, $s6, 1
    ctx->pc = 0x3b2becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x3b2bf0: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x3b2bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x3b2bf4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3b2bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b2bf8: 0x2e41021  addu        $v0, $s7, $a0
    ctx->pc = 0x3b2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x3b2bfc: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x3b2bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_3b2c00:
    // 0x3b2c00: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3b2c00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b2c04: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x3b2c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3b2c08: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b2c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3b2c0c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3b2c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b2c10: 0x0  nop
    ctx->pc = 0x3b2c10u;
    // NOP
    // 0x3b2c14: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B2C14u;
    {
        const bool branch_taken_0x3b2c14 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3B2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C14u;
        // 0x3b2c18: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c14) {
            ctx->pc = 0x3B2C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2c00;
        }
    }
    ctx->pc = 0x3B2C1Cu;
    // 0x3b2c1c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3b2c1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_3b2c20:
    // 0x3b2c20: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x3b2c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2c24: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B2C24u;
    {
        const bool branch_taken_0x3b2c24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C24u;
        // 0x3b2c28: 0x8fa80010  lw          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c24) {
            ctx->pc = 0x3B2C40u;
            goto label_3b2c40;
        }
    }
    ctx->pc = 0x3B2C2Cu;
    // 0x3b2c2c: 0x3c8102a  slt         $v0, $fp, $t0
    ctx->pc = 0x3b2c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3b2c30: 0x5440feff  bnel        $v0, $zero, . + 4 + (-0x101 << 2)
    ctx->pc = 0x3B2C30u;
    {
        const bool branch_taken_0x3b2c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2c30) {
            ctx->pc = 0x3B2C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2C30u;
            // 0x3b2c34: 0x1e1140  sll         $v0, $fp, 5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2830;
        }
    }
    ctx->pc = 0x3B2C38u;
    // 0x3b2c38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2C38u;
    {
        const bool branch_taken_0x3b2c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C38u;
        // 0x3b2c3c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c38) {
            ctx->pc = 0x3B2C4Cu;
            goto label_3b2c4c;
        }
    }
    ctx->pc = 0x3B2C40u;
label_3b2c40:
    // 0x3b2c40: 0x1bc0fefb  blez        $fp, . + 4 + (-0x105 << 2)
    ctx->pc = 0x3B2C40u;
    {
        const bool branch_taken_0x3b2c40 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x3B2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C40u;
        // 0x3b2c44: 0x1e1140  sll         $v0, $fp, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c40) {
            ctx->pc = 0x3B2830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2830;
        }
    }
    ctx->pc = 0x3B2C48u;
    // 0x3b2c48: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x3b2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3b2c4c:
    // 0x3b2c4c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b2c4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3b2c50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3b2c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b2c54: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3b2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3b2c58: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3b2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b2c5c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3b2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x3b2c60: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x3b2c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x3b2c64: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x3b2c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b2c68: 0x1440feeb  bnez        $v0, . + 4 + (-0x115 << 2)
    ctx->pc = 0x3B2C68u;
    {
        const bool branch_taken_0x3b2c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C68u;
        // 0x3b2c6c: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c68) {
            ctx->pc = 0x3B2818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2818;
        }
    }
    ctx->pc = 0x3B2C70u;
label_3b2c70:
    // 0x3b2c70: 0x8fb60014  lw          $s6, 0x14($sp)
    ctx->pc = 0x3b2c70u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3b2c74: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x3b2c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b2c78: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3B2C78u;
    {
        const bool branch_taken_0x3b2c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C78u;
        // 0x3b2c7c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c78) {
            ctx->pc = 0x3B2CFCu;
            goto label_3b2cfc;
        }
    }
    ctx->pc = 0x3B2C80u;
    // 0x3b2c80: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x3b2c80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2c84: 0x0  nop
    ctx->pc = 0x3b2c84u;
    // NOP
label_3b2c88:
    // 0x3b2c88: 0x18e00017  blez        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B2C88u;
    {
        const bool branch_taken_0x3b2c88 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3B2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C88u;
        // 0x3b2c8c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c88) {
            ctx->pc = 0x3B2CE8u;
            goto label_3b2ce8;
        }
    }
    ctx->pc = 0x3B2C90u;
    // 0x3b2c90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3b2c90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2c94: 0x0  nop
    ctx->pc = 0x3b2c94u;
    // NOP
label_3b2c98:
    // 0x3b2c98: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x3b2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x3b2c9c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3b2c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b2ca0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3b2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3b2ca4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3b2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3b2ca8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3b2cac: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3b2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x3b2cb0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3b2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3b2cb4: 0x0  nop
    ctx->pc = 0x3b2cb4u;
    // NOP
label_3b2cb8:
    // 0x3b2cb8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b2cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3b2cbc: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x3b2cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b2cc0: 0x0  nop
    ctx->pc = 0x3b2cc0u;
    // NOP
    // 0x3b2cc4: 0x0  nop
    ctx->pc = 0x3b2cc4u;
    // NOP
    // 0x3b2cc8: 0x0  nop
    ctx->pc = 0x3b2cc8u;
    // NOP
    // 0x3b2ccc: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B2CCCu;
    {
        const bool branch_taken_0x3b2ccc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3B2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CCCu;
        // 0x3b2cd0: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ccc) {
            ctx->pc = 0x3B2CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2cb8;
        }
    }
    ctx->pc = 0x3B2CD4u;
    // 0x3b2cd4: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x3b2cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2cd8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3b2cd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x3b2cdc: 0x3c8102a  slt         $v0, $fp, $t0
    ctx->pc = 0x3b2cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3b2ce0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3B2CE0u;
    {
        const bool branch_taken_0x3b2ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CE0u;
        // 0x3b2ce4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ce0) {
            ctx->pc = 0x3B2C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2c98;
        }
    }
    ctx->pc = 0x3B2CE8u;
label_3b2ce8:
    // 0x3b2ce8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b2ce8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3b2cec: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x3b2cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b2cf0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3B2CF0u;
    {
        const bool branch_taken_0x3b2cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CF0u;
        // 0x3b2cf4: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2cf0) {
            ctx->pc = 0x3B2C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2c88;
        }
    }
    ctx->pc = 0x3B2CF8u;
    // 0x3b2cf8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3b2cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b2cfc:
    // 0x3b2cfc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3b2cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3b2d00: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3b2d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b2d04: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3b2d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3b2d08: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3b2d08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2d0c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x3b2d0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b2d10: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3b2d10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b2d14: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x3b2d14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3b2d18: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x3b2d18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b2d1c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x3b2d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3b2d20: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D20u;
        // 0x3b2d24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2D28u;
}
