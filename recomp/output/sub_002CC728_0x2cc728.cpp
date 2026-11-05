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

// Function: sub_002CC728
// Address: 0x2cc728 - 0x2cc8b8
void sub_002CC728_0x2cc728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC728_0x2cc728");
#endif

    switch (ctx->pc) {
        case 0x2cc7b8u: goto label_2cc7b8;
        case 0x2cc7ecu: goto label_2cc7ec;
        case 0x2cc7fcu: goto label_2cc7fc;
        case 0x2cc870u: goto label_2cc870;
        case 0x2cc880u: goto label_2cc880;
        case 0x2cc888u: goto label_2cc888;
        case 0x2cc890u: goto label_2cc890;
        default: break;
    }

    ctx->pc = 0x2cc728u;

    // 0x2cc728: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cc728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cc72c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2cc72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2cc730: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2cc730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2cc734: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x2cc734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x2cc738: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2cc738u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2cc73c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2cc73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2cc740: 0xde08a620  ld          $t0, -0x59E0($s0)
    ctx->pc = 0x2cc740u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 4294944288)));
    // 0x2cc744: 0x6373c  dsll32      $a2, $a2, 28
    ctx->pc = 0x2cc744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 28));
    // 0x2cc748: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2cc748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2cc74c: 0x34038008  ori         $v1, $zero, 0x8008
    ctx->pc = 0x2cc74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
    // 0x2cc750: 0x31afc  dsll32      $v1, $v1, 11
    ctx->pc = 0x2cc750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 11));
    // 0x2cc754: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x2cc754u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2cc758: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2cc758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2cc75c: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x2cc75cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x2cc760: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2cc760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2cc764: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2cc764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2cc768: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2cc768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2cc76c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2cc76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2cc770: 0x244209f0  addiu       $v0, $v0, 0x9F0
    ctx->pc = 0x2cc770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2544));
    // 0x2cc774: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2cc774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2cc778: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2cc778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2cc77c: 0x83bfc  dsll32      $a3, $t0, 15
    ctx->pc = 0x2cc77cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 15));
    // 0x2cc780: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2cc780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2cc784: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2cc784u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc788: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x2cc788u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2cc78c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2cc78cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2cc790: 0xfe08a620  sd          $t0, -0x59E0($s0)
    ctx->pc = 0x2cc790u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4294944288), GPR_U64(ctx, 8));
    // 0x2cc794: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2cc794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2cc798: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2cc798u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc79c: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x2cc79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x2cc7a0: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x2cc7a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x2cc7a4: 0xffa70020  sd          $a3, 0x20($sp)
    ctx->pc = 0x2cc7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 7));
    // 0x2cc7a8: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x2cc7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x2cc7ac: 0xffa70010  sd          $a3, 0x10($sp)
    ctx->pc = 0x2cc7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    // 0x2cc7b0: 0xc0b305e  jal         func_2CC178
    ctx->pc = 0x2CC7B0u;
    SET_GPR_U32(ctx, 31, 0x2CC7B8u);
    ctx->pc = 0x2CC7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC7B0u;
    // 0x2cc7b4: 0xffa50018  sd          $a1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC178u, 0x2CC7B0u, 0x2CC7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7B8u;
label_2cc7b8:
    // 0x2cc7b8: 0xde02a620  ld          $v0, -0x59E0($s0)
    ctx->pc = 0x2cc7b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4294944288)));
    // 0x2cc7bc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2cc7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2cc7c0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2CC7C0u;
    {
        const bool branch_taken_0x2cc7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7C0u;
        // 0x2cc7c4: 0x3c130058  lui         $s3, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7c0) {
            ctx->pc = 0x2CC870u;
            goto label_2cc870;
        }
    }
    ctx->pc = 0x2CC7C8u;
    // 0x2cc7c8: 0x8e62a628  lw          $v0, -0x59D8($s3)
    ctx->pc = 0x2cc7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944296)));
    // 0x2cc7cc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CC7CCu;
    {
        const bool branch_taken_0x2cc7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7CCu;
        // 0x2cc7d0: 0x2691a608  addiu       $s1, $s4, -0x59F8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7cc) {
            ctx->pc = 0x2CC870u;
            goto label_2cc870;
        }
    }
    ctx->pc = 0x2CC7D4u;
    // 0x2cc7d4: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x2cc7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2cc7d8: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x2cc7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2cc7dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc7e0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2cc7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2cc7e4: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC7E4u;
    SET_GPR_U32(ctx, 31, 0x2CC7ECu);
    ctx->pc = 0x2CC7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC7E4u;
    // 0x2cc7e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC7E4u, 0x2CC7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7ECu;
label_2cc7ec:
    // 0x2cc7ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc7f0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2cc7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cc7f4: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC7F4u;
    SET_GPR_U32(ctx, 31, 0x2CC7FCu);
    ctx->pc = 0x2CC7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC7F4u;
    // 0x2cc7f8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC7F4u, 0x2CC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7FCu;
label_2cc7fc:
    // 0x2cc7fc: 0x8e64a628  lw          $a0, -0x59D8($s3)
    ctx->pc = 0x2cc7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944296)));
    // 0x2cc800: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cc800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc804: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x2cc804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x2cc808: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x2cc808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x2cc80c: 0x10817c  dsll32      $s0, $s0, 5
    ctx->pc = 0x2cc80cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 5));
    // 0x2cc810: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2cc810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cc814: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2cc814u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2cc818: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2cc818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cc81c: 0x3c080130  lui         $t0, 0x130
    ctx->pc = 0x2cc81cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)304 << 16));
    // 0x2cc820: 0x24c3003f  addiu       $v1, $a2, 0x3F
    ctx->pc = 0x2cc820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x2cc824: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2cc824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cc828: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x2cc828u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cc82c: 0x24c6007e  addiu       $a2, $a2, 0x7E
    ctx->pc = 0x2cc82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 126));
    // 0x2cc830: 0x65300b  movn        $a2, $v1, $a1
    ctx->pc = 0x2cc830u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2cc834: 0x73eb8  dsll        $a3, $a3, 26
    ctx->pc = 0x2cc834u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 26);
    // 0x2cc838: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x2cc838u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x2cc83c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x2cc83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x2cc840: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x2cc840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x2cc844: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2cc844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2cc848: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x2cc848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x2cc84c: 0x2463025  or          $a2, $s2, $a2
    ctx->pc = 0x2cc84cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | GPR_U64(ctx, 6));
    // 0x2cc850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc854: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x2cc854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2cc858: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2cc858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cc85c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2cc85cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2cc860: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2cc860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2cc864: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x2cc864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x2cc868: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC868u;
    SET_GPR_U32(ctx, 31, 0x2CC870u);
    ctx->pc = 0x2CC86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC868u;
    // 0x2cc86c: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC868u, 0x2CC870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC870u;
label_2cc870:
    // 0x2cc870: 0xdea6a620  ld          $a2, -0x59E0($s5)
    ctx->pc = 0x2cc870u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 4294944288)));
    // 0x2cc874: 0x2684a608  addiu       $a0, $s4, -0x59F8
    ctx->pc = 0x2cc874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944264));
    // 0x2cc878: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC878u;
    SET_GPR_U32(ctx, 31, 0x2CC880u);
    ctx->pc = 0x2CC87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC878u;
    // 0x2cc87c: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC878u, 0x2CC880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC880u;
label_2cc880:
    // 0x2cc880: 0xc0b306a  jal         func_2CC1A8
    ctx->pc = 0x2CC880u;
    SET_GPR_U32(ctx, 31, 0x2CC888u);
    ctx->pc = 0x2CC1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC1A8u, 0x2CC880u, 0x2CC888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC888u;
label_2cc888:
    // 0x2cc888: 0xc0b305e  jal         func_2CC178
    ctx->pc = 0x2CC888u;
    SET_GPR_U32(ctx, 31, 0x2CC890u);
    ctx->pc = 0x2CC88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC888u;
    // 0x2cc88c: 0x7ba40000  lq          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC178u, 0x2CC888u, 0x2CC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC890u;
label_2cc890:
    // 0x2cc890: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2cc890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc894: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2cc894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cc898: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2cc898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc89c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2cc89cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cc8a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2cc8a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc8a4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2cc8a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc8a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2cc8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cc8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8ACu;
        // 0x2cc8b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC8B4u;
    // 0x2cc8b4: 0x0  nop
    ctx->pc = 0x2cc8b4u;
    // NOP
    ctx->pc = 0x2cc8b8u;
}
