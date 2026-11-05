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

// Function: sub_003BF3B8
// Address: 0x3bf3b8 - 0x3bf580
void sub_003BF3B8_0x3bf3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF3B8_0x3bf3b8");
#endif

    switch (ctx->pc) {
        case 0x3bf3c0u: goto label_3bf3c0;
        case 0x3bf44cu: goto label_3bf44c;
        case 0x3bf4e8u: goto label_3bf4e8;
        case 0x3bf548u: goto label_3bf548;
        default: break;
    }

    ctx->pc = 0x3bf3b8u;

    // 0x3bf3b8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BF3B8u;
    {
        const bool branch_taken_0x3bf3b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3B8u;
        // 0x3bf3bc: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf3b8) {
            ctx->pc = 0x3BF3C8u;
            goto label_3bf3c8;
        }
    }
    ctx->pc = 0x3BF3C0u;
label_3bf3c0:
    // 0x3bf3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3C0u;
        // 0x3bf3c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF3C8u;
label_3bf3c8:
    // 0x3bf3c8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x3bf3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3bf3cc: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3BF3CCu;
    {
        const bool branch_taken_0x3bf3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3CCu;
        // 0x3bf3d0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf3cc) {
            ctx->pc = 0x3BF534u;
            goto label_3bf534;
        }
    }
    ctx->pc = 0x3BF3D4u;
    // 0x3bf3d4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x3bf3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3bf3d8: 0x2cc70010  sltiu       $a3, $a2, 0x10
    ctx->pc = 0x3bf3d8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3bf3dc: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x3bf3dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf3e0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3bf3e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3bf3e4: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3bf3e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3bf3e8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3bf3e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3bf3ec: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3bf3ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3bf3f0: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x3bf3f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x3bf3f4: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x3bf3f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x3bf3f8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3bf3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3bf3fc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3BF3FCu;
    {
        const bool branch_taken_0x3bf3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3FCu;
        // 0x3bf400: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf3fc) {
            ctx->pc = 0x3BF4A8u;
            goto label_3bf4a8;
        }
    }
    ctx->pc = 0x3BF404u;
    // 0x3bf404: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3bf404u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bf408: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x3bf408u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3bf40c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3bf40cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf410: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x3bf410u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf414: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3bf414u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3bf418: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3bf418u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3bf41c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3bf41cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3bf420: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3bf420u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3bf424: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3bf424u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3bf428: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3bf428u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3bf42c: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x3bf42cu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3bf430: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x3bf430u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x3bf434: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x3bf434u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3bf438: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3bf438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf43c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3bf43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3bf440: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3BF440u;
    {
        const bool branch_taken_0x3bf440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF440u;
        // 0x3bf444: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf440) {
            ctx->pc = 0x3BF534u;
            goto label_3bf534;
        }
    }
    ctx->pc = 0x3BF448u;
    // 0x3bf448: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x3bf448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_3bf44c:
    // 0x3bf44c: 0x10c0ffdc  beqz        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3BF44Cu;
    {
        const bool branch_taken_0x3bf44c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf44c) {
            ctx->pc = 0x3BF3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf3c0;
        }
    }
    ctx->pc = 0x3BF454u;
    // 0x3bf454: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x3bf454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3bf458: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3bf458u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3bf45c: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x3bf45cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3bf460: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3bf460u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3bf464: 0x70491c89  pand        $v1, $v0, $t1
    ctx->pc = 0x3bf464u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3bf468: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x3bf468u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3bf46c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3bf46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3bf470: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x3BF470u;
    {
        const bool branch_taken_0x3bf470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF470u;
        // 0x3bf474: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf470) {
            ctx->pc = 0x3BF3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf3c0;
        }
    }
    ctx->pc = 0x3BF478u;
    // 0x3bf478: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x3bf478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3bf47c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x3bf47cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3bf480: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3BF480u;
    {
        const bool branch_taken_0x3bf480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF480u;
        // 0x3bf484: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf480) {
            ctx->pc = 0x3BF528u;
            goto label_3bf528;
        }
    }
    ctx->pc = 0x3BF488u;
    // 0x3bf488: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x3bf488u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3bf48c: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x3bf48cu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3bf490: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x3bf490u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3bf494: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3bf494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3bf498: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3BF498u;
    {
        const bool branch_taken_0x3bf498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf498) {
            ctx->pc = 0x3BF49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF498u;
            // 0x3bf49c: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF44Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf44c;
        }
    }
    ctx->pc = 0x3BF4A0u;
    // 0x3bf4a0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3BF4A0u;
    {
        const bool branch_taken_0x3bf4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4A0u;
        // 0x3bf4a4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf4a0) {
            ctx->pc = 0x3BF52Cu;
            goto label_3bf52c;
        }
    }
    ctx->pc = 0x3BF4A8u;
label_3bf4a8:
    // 0x3bf4a8: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3bf4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3bf4ac: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3BF4ACu;
    {
        const bool branch_taken_0x3bf4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4ACu;
        // 0x3bf4b0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf4ac) {
            ctx->pc = 0x3BF528u;
            goto label_3bf528;
        }
    }
    ctx->pc = 0x3BF4B4u;
    // 0x3bf4b4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3bf4b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bf4b8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x3bf4b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf4bc: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3BF4BCu;
    {
        const bool branch_taken_0x3bf4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4BCu;
        // 0x3bf4c0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf4bc) {
            ctx->pc = 0x3BF534u;
            goto label_3bf534;
        }
    }
    ctx->pc = 0x3BF4C4u;
    // 0x3bf4c4: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3bf4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3bf4c8: 0x340a8080  ori         $t2, $zero, 0x8080
    ctx->pc = 0x3bf4c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf4cc: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3bf4ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3bf4d0: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x3bf4d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3bf4d4: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3bf4d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3bf4d8: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x3bf4d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3bf4dc: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3bf4dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3bf4e0: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x3bf4e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3bf4e4: 0x0  nop
    ctx->pc = 0x3bf4e4u;
    // NOP
label_3bf4e8:
    // 0x3bf4e8: 0x10c0ffb5  beqz        $a2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x3BF4E8u;
    {
        const bool branch_taken_0x3bf4e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf4e8) {
            ctx->pc = 0x3BF3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf3c0;
        }
    }
    ctx->pc = 0x3BF4F0u;
    // 0x3bf4f0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3bf4f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3bf4f4: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3bf4f4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3bf4f8: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x3bf4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x3bf4fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bf4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bf500: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x3bf500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x3bf504: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x3BF504u;
    {
        const bool branch_taken_0x3bf504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF504u;
        // 0x3bf508: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf504) {
            ctx->pc = 0x3BF3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf3c0;
        }
    }
    ctx->pc = 0x3BF50Cu;
    // 0x3bf50c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3bf50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3bf510: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BF510u;
    {
        const bool branch_taken_0x3bf510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF510u;
        // 0x3bf514: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf510) {
            ctx->pc = 0x3BF528u;
            goto label_3bf528;
        }
    }
    ctx->pc = 0x3BF518u;
    // 0x3bf518: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x3bf518u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3bf51c: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x3bf51cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3bf520: 0x5062fff1  beql        $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3BF520u;
    {
        const bool branch_taken_0x3bf520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bf520) {
            ctx->pc = 0x3BF524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF520u;
            // 0x3bf524: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf4e8;
        }
    }
    ctx->pc = 0x3BF528u;
label_3bf528:
    // 0x3bf528: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3bf528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3bf52c:
    // 0x3bf52c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3bf52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf530: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3bf530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bf534:
    // 0x3bf534: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3BF534u;
    {
        const bool branch_taken_0x3bf534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF534u;
        // 0x3bf538: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf534) {
            ctx->pc = 0x3BF570u;
            goto label_3bf570;
        }
    }
    ctx->pc = 0x3BF53Cu;
    // 0x3bf53c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF53Cu;
    {
        const bool branch_taken_0x3bf53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF53Cu;
        // 0x3bf540: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf53c) {
            ctx->pc = 0x3BF564u;
            goto label_3bf564;
        }
    }
    ctx->pc = 0x3BF544u;
    // 0x3bf544: 0x0  nop
    ctx->pc = 0x3bf544u;
    // NOP
label_3bf548:
    // 0x3bf548: 0x10c0ff9d  beqz        $a2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x3BF548u;
    {
        const bool branch_taken_0x3bf548 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf548) {
            ctx->pc = 0x3BF3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf3c0;
        }
    }
    ctx->pc = 0x3BF550u;
    // 0x3bf550: 0x10e0ff9b  beqz        $a3, . + 4 + (-0x65 << 2)
    ctx->pc = 0x3BF550u;
    {
        const bool branch_taken_0x3bf550 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF550u;
        // 0x3bf554: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf550) {
            ctx->pc = 0x3BF3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf3c0;
        }
    }
    ctx->pc = 0x3BF558u;
    // 0x3bf558: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3bf558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3bf55c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x3bf55cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bf560: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3bf560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3bf564:
    // 0x3bf564: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3bf564u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf568: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3BF568u;
    {
        const bool branch_taken_0x3bf568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF568u;
        // 0x3bf56c: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf568) {
            ctx->pc = 0x3BF548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf548;
        }
    }
    ctx->pc = 0x3BF570u;
label_3bf570:
    // 0x3bf570: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3bf570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf574: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3bf574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bf578: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF578u;
        // 0x3bf57c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF580u;
}
