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

// Function: sub_00372730
// Address: 0x372730 - 0x3728d0
void sub_00372730_0x372730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372730_0x372730");
#endif

    switch (ctx->pc) {
        case 0x3728c0u: goto label_3728c0;
        default: break;
    }

    ctx->pc = 0x372730u;

    // 0x372730: 0x3c0b0040  lui         $t3, 0x40
    ctx->pc = 0x372730u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64 << 16));
    // 0x372734: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372738: 0x8d62ccc0  lw          $v0, -0x3340($t3)
    ctx->pc = 0x372738u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCCC0u));
    // 0x37273c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x37273cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x372740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372744: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x372744u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x372748: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x372748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x37274c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37274cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x372750: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x372750u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x372754: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x372754u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x372758: 0x8d62ccc0  lw          $v0, -0x3340($t3)
    ctx->pc = 0x372758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294954176)));
    // 0x37275c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x37275cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372760: 0x7c403  sra         $t8, $a3, 16
    ctx->pc = 0x372760u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 7), 16));
    // 0x372764: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x372764u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x372768: 0xa4440050  sh          $a0, 0x50($v0)
    ctx->pc = 0x372768u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 80), (uint16_t)GPR_U32(ctx, 4));
    // 0x37276c: 0x2587003f  addiu       $a3, $t4, 0x3F
    ctx->pc = 0x37276cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 63));
    // 0x372770: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x372770u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x372774: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x372774u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x372778: 0x8d63ccc0  lw          $v1, -0x3340($t3)
    ctx->pc = 0x372778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294954176)));
    // 0x37277c: 0x2582007e  addiu       $v0, $t4, 0x7E
    ctx->pc = 0x37277cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 126));
    // 0x372780: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x372780u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x372784: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x372784u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x372788: 0xa4650052  sh          $a1, 0x52($v1)
    ctx->pc = 0x372788u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 82), (uint16_t)GPR_U32(ctx, 5));
    // 0x37278c: 0x86c03  sra         $t5, $t0, 16
    ctx->pc = 0x37278cu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 8), 16));
    // 0x372790: 0x1c7182a  slt         $v1, $t6, $a3
    ctx->pc = 0x372790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x372794: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x372794u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x372798: 0x8d64ccc0  lw          $a0, -0x3340($t3)
    ctx->pc = 0x372798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294954176)));
    // 0x37279c: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x37279cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x3727a0: 0x26183  sra         $t4, $v0, 6
    ctx->pc = 0x3727a0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 6));
    // 0x3727a4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3727a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3727a8: 0xa486004e  sh          $a2, 0x4E($a0)
    ctx->pc = 0x3727a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 78), (uint16_t)GPR_U32(ctx, 6));
    // 0x3727ac: 0x160782d  daddu       $t7, $t3, $zero
    ctx->pc = 0x3727acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3727b0: 0x30c60002  andi        $a2, $a2, 0x2
    ctx->pc = 0x3727b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x3727b4: 0x8d62ccc0  lw          $v0, -0x3340($t3)
    ctx->pc = 0x3727b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294954176)));
    // 0x3727b8: 0xa458005a  sh          $t8, 0x5A($v0)
    ctx->pc = 0x3727b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 90), (uint16_t)GPR_U32(ctx, 24));
    // 0x3727bc: 0x8d63ccc0  lw          $v1, -0x3340($t3)
    ctx->pc = 0x3727bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294954176)));
    // 0x3727c0: 0xa46d005c  sh          $t5, 0x5C($v1)
    ctx->pc = 0x3727c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 13));
    // 0x3727c4: 0x8d62ccc0  lw          $v0, -0x3340($t3)
    ctx->pc = 0x3727c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294954176)));
    // 0x3727c8: 0xa4490058  sh          $t1, 0x58($v0)
    ctx->pc = 0x3727c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 9));
    // 0x3727cc: 0x8d63ccc0  lw          $v1, -0x3340($t3)
    ctx->pc = 0x3727ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294954176)));
    // 0x3727d0: 0xa46a005e  sh          $t2, 0x5E($v1)
    ctx->pc = 0x3727d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 10));
    // 0x3727d4: 0x8d62ccc0  lw          $v0, -0x3340($t3)
    ctx->pc = 0x3727d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294954176)));
    // 0x3727d8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3727D8u;
    {
        const bool branch_taken_0x3727d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3727DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727D8u;
        // 0x3727dc: 0xac480074  sw          $t0, 0x74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727d8) {
            ctx->pc = 0x3727F8u;
            goto label_3727f8;
        }
    }
    ctx->pc = 0x3727E0u;
    // 0x3727e0: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x3727e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x3727e4: 0x24a3007e  addiu       $v1, $a1, 0x7E
    ctx->pc = 0x3727e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
    // 0x3727e8: 0x1c2202a  slt         $a0, $t6, $v0
    ctx->pc = 0x3727e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3727ec: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x3727ecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x3727f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3727F0u;
    {
        const bool branch_taken_0x3727f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3727F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727F0u;
        // 0x3727f4: 0x32983  sra         $a1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727f0) {
            ctx->pc = 0x372810u;
            goto label_372810;
        }
    }
    ctx->pc = 0x3727F8u;
label_3727f8:
    // 0x3727f8: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x3727f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x3727fc: 0x24a3003e  addiu       $v1, $a1, 0x3E
    ctx->pc = 0x3727fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 62));
    // 0x372800: 0x1c2202a  slt         $a0, $t6, $v0
    ctx->pc = 0x372800u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x372804: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x372804u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x372808: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x372808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x37280c: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x37280cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
label_372810:
    // 0x372810: 0x1851818  mult        $v1, $t4, $a1
    ctx->pc = 0x372810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x372814: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x372814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372818: 0x2505003f  addiu       $a1, $t0, 0x3F
    ctx->pc = 0x372818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x37281c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x37281cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x372820: 0x2502007e  addiu       $v0, $t0, 0x7E
    ctx->pc = 0x372820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 126));
    // 0x372824: 0x8de6ccc0  lw          $a2, -0x3340($t7)
    ctx->pc = 0x372824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294954176)));
    // 0x372828: 0x145202a  slt         $a0, $t2, $a1
    ctx->pc = 0x372828u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x37282c: 0x31270002  andi        $a3, $t1, 0x2
    ctx->pc = 0x37282cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x372830: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x372830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x372834: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x372834u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x372838: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x372838u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x37283c: 0x24183  sra         $t0, $v0, 6
    ctx->pc = 0x37283cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 6));
    // 0x372840: 0xa4c30042  sh          $v1, 0x42($a2)
    ctx->pc = 0x372840u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 66), (uint16_t)GPR_U32(ctx, 3));
    // 0x372844: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x372844u;
    {
        const bool branch_taken_0x372844 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x372848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372844u;
        // 0x372848: 0xa4c30040  sh          $v1, 0x40($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 64), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372844) {
            ctx->pc = 0x372864u;
            goto label_372864;
        }
    }
    ctx->pc = 0x37284Cu;
    // 0x37284c: 0x25a2003f  addiu       $v0, $t5, 0x3F
    ctx->pc = 0x37284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 63));
    // 0x372850: 0x25a3007e  addiu       $v1, $t5, 0x7E
    ctx->pc = 0x372850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 126));
    // 0x372854: 0x142202a  slt         $a0, $t2, $v0
    ctx->pc = 0x372854u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x372858: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x372858u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x37285c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37285Cu;
    {
        const bool branch_taken_0x37285c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37285Cu;
        // 0x372860: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37285c) {
            ctx->pc = 0x372878u;
            goto label_372878;
        }
    }
    ctx->pc = 0x372864u;
label_372864:
    // 0x372864: 0x25a2001f  addiu       $v0, $t5, 0x1F
    ctx->pc = 0x372864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 31));
    // 0x372868: 0x25a3003e  addiu       $v1, $t5, 0x3E
    ctx->pc = 0x372868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 62));
    // 0x37286c: 0x142202a  slt         $a0, $t2, $v0
    ctx->pc = 0x37286cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x372870: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x372870u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x372874: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x372874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
label_372878:
    // 0x372878: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x372878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37287c: 0x8de4ccc0  lw          $a0, -0x3340($t7)
    ctx->pc = 0x37287cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294954176)));
    // 0x372880: 0x29a50121  slti        $a1, $t5, 0x121
    ctx->pc = 0x372880u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)289) ? 1 : 0);
    // 0x372884: 0x94830040  lhu         $v1, 0x40($a0)
    ctx->pc = 0x372884u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x372888: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x372888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37288c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x37288cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x372890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x372890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x372894: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x372894u;
    {
        const bool branch_taken_0x372894 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x372898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372894u;
        // 0x372898: 0xa483004c  sh          $v1, 0x4C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 76), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372894) {
            ctx->pc = 0x3728A4u;
            goto label_3728a4;
        }
    }
    ctx->pc = 0x37289Cu;
    // 0x37289c: 0x8de2ccc0  lw          $v0, -0x3340($t7)
    ctx->pc = 0x37289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294954176)));
    // 0x3728a0: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x3728a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_3728a4:
    // 0x3728a4: 0x8de2ccc0  lw          $v0, -0x3340($t7)
    ctx->pc = 0x3728a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294954176)));
    // 0x3728a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3728a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3728ac: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x3728acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x3728b0: 0x8de3ccc0  lw          $v1, -0x3340($t7)
    ctx->pc = 0x3728b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294954176)));
    // 0x3728b4: 0xac640048  sw          $a0, 0x48($v1)
    ctx->pc = 0x3728b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 4));
    // 0x3728b8: 0xc0dc6d2  jal         func_371B48
    ctx->pc = 0x3728B8u;
    SET_GPR_U32(ctx, 31, 0x3728C0u);
    ctx->pc = 0x3728BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3728B8u;
    // 0x3728bc: 0x8de4ccc0  lw          $a0, -0x3340($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294954176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B48u, 0x3728B8u, 0x3728C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728C0u;
label_3728c0:
    // 0x3728c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3728c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3728c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3728C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3728C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728C4u;
        // 0x3728c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3728C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3728CCu;
    // 0x3728cc: 0x0  nop
    ctx->pc = 0x3728ccu;
    // NOP
    ctx->pc = 0x3728d0u;
}
