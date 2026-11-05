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

// Function: sub_001FA668
// Address: 0x1fa668 - 0x1fa9e8
void sub_001FA668_0x1fa668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA668_0x1fa668");
#endif

    switch (ctx->pc) {
        case 0x1fa6f0u: goto label_1fa6f0;
        case 0x1fa70cu: goto label_1fa70c;
        case 0x1fa7a0u: goto label_1fa7a0;
        case 0x1fa7dcu: goto label_1fa7dc;
        case 0x1fa7f0u: goto label_1fa7f0;
        case 0x1fa7fcu: goto label_1fa7fc;
        case 0x1fa8a4u: goto label_1fa8a4;
        case 0x1fa8e0u: goto label_1fa8e0;
        case 0x1fa8ecu: goto label_1fa8ec;
        case 0x1fa920u: goto label_1fa920;
        case 0x1fa944u: goto label_1fa944;
        case 0x1fa980u: goto label_1fa980;
        case 0x1fa9a0u: goto label_1fa9a0;
        default: break;
    }

    ctx->pc = 0x1fa668u;

    // 0x1fa668: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fa668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fa66c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fa66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fa670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa674: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fa674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa678: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa67c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fa67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fa680: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fa680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fa684: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fa684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fa688: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fa688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fa68c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1fa68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1fa690: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1fa690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1fa694: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1fa694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1fa698: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fa698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fa69c: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x1FA69Cu;
    {
        const bool branch_taken_0x1fa69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA69Cu;
        // 0x1fa6a0: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa69c) {
            ctx->pc = 0x1FA9B8u;
            goto label_1fa9b8;
        }
    }
    ctx->pc = 0x1FA6A4u;
    // 0x1fa6a4: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1fa6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1fa6a8: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x1fa6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x1fa6ac: 0x46000c3  bltz        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1FA6ACu;
    {
        const bool branch_taken_0x1fa6ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6ACu;
        // 0x1fa6b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa6ac) {
            ctx->pc = 0x1FA9BCu;
            goto label_1fa9bc;
        }
    }
    ctx->pc = 0x1FA6B4u;
    // 0x1fa6b4: 0x8c8215e8  lw          $v0, 0x15E8($a0)
    ctx->pc = 0x1fa6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5608)));
    // 0x1fa6b8: 0x144000c1  bnez        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x1FA6B8u;
    {
        const bool branch_taken_0x1fa6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6B8u;
        // 0x1fa6bc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa6b8) {
            ctx->pc = 0x1FA9C0u;
            goto label_1fa9c0;
        }
    }
    ctx->pc = 0x1FA6C0u;
    // 0x1fa6c0: 0x908212e0  lbu         $v0, 0x12E0($a0)
    ctx->pc = 0x1fa6c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4832)));
    // 0x1fa6c4: 0x908312e1  lbu         $v1, 0x12E1($a0)
    ctx->pc = 0x1fa6c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4833)));
    // 0x1fa6c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fa6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa6cc: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x1fa6ccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa6d0: 0x12c000bb  beqz        $s6, . + 4 + (0xBB << 2)
    ctx->pc = 0x1FA6D0u;
    {
        const bool branch_taken_0x1fa6d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6D0u;
        // 0x1fa6d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa6d0) {
            ctx->pc = 0x1FA9C0u;
            goto label_1fa9c0;
        }
    }
    ctx->pc = 0x1FA6D8u;
    // 0x1fa6d8: 0x909712e0  lbu         $s7, 0x12E0($a0)
    ctx->pc = 0x1fa6d8u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4832)));
    // 0x1fa6dc: 0x12e00038  beqz        $s7, . + 4 + (0x38 << 2)
    ctx->pc = 0x1FA6DCu;
    {
        const bool branch_taken_0x1fa6dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6DCu;
        // 0x1fa6e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa6dc) {
            ctx->pc = 0x1FA7C0u;
            goto label_1fa7c0;
        }
    }
    ctx->pc = 0x1FA6E4u;
    // 0x1fa6e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1fa6e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa6e8: 0x341e8de0  ori         $fp, $zero, 0x8DE0
    ctx->pc = 0x1fa6e8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1fa6ec: 0x109180  sll         $s2, $s0, 6
    ctx->pc = 0x1fa6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_1fa6f0:
    // 0x1fa6f0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fa6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fa6f4: 0x2728821  addu        $s1, $s3, $s2
    ctx->pc = 0x1fa6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1fa6f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fa6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa6fc: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1fa6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1fa700: 0x8c430de4  lw          $v1, 0xDE4($v0)
    ctx->pc = 0x1fa700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3556)));
    // 0x1fa704: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x1FA704u;
    SET_GPR_U32(ctx, 31, 0x1FA70Cu);
    ctx->pc = 0x1FA708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA704u;
    // 0x1fa708: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1FA704u, 0x1FA70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA70Cu;
label_1fa70c:
    // 0x1fa70c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FA70Cu;
    {
        const bool branch_taken_0x1fa70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA70Cu;
        // 0x1fa710: 0x25e2021  addu        $a0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa70c) {
            ctx->pc = 0x1FA798u;
            goto label_1fa798;
        }
    }
    ctx->pc = 0x1FA714u;
    // 0x1fa714: 0x1214001d  beq         $s0, $s4, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA714u;
    {
        const bool branch_taken_0x1fa714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x1FA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA714u;
        // 0x1fa718: 0x23e2821  addu        $a1, $s1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa714) {
            ctx->pc = 0x1FA78Cu;
            goto label_1fa78c;
        }
    }
    ctx->pc = 0x1FA71Cu;
    // 0x1fa71c: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x1fa71cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x1fa720: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1fa720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fa724: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1fa724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fa728: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x1fa728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1fa72c: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x1fa72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1fa730: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1fa730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa734: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1fa734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fa738: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fa738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1fa73c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1fa73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fa740: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1fa740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1fa744: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1fa744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fa748: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1fa748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1fa74c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1fa74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1fa750: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1fa750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1fa754: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1fa754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1fa758: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1fa758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1fa75c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1fa75cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fa760: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1fa760u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa764: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1fa764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1fa768: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1fa768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1fa76c: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x1fa76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa770: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x1fa770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1fa774: 0x90a20038  lbu         $v0, 0x38($a1)
    ctx->pc = 0x1fa774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1fa778: 0xa0820038  sb          $v0, 0x38($a0)
    ctx->pc = 0x1fa778u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fa77c: 0x90a30039  lbu         $v1, 0x39($a1)
    ctx->pc = 0x1fa77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 57)));
    // 0x1fa780: 0xa0830039  sb          $v1, 0x39($a0)
    ctx->pc = 0x1fa780u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa784: 0x90a2003a  lbu         $v0, 0x3A($a1)
    ctx->pc = 0x1fa784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x1fa788: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x1fa788u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
label_1fa78c:
    // 0x1fa78c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1fa78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1fa790: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA790u;
    {
        const bool branch_taken_0x1fa790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA790u;
        // 0x1fa794: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa790) {
            ctx->pc = 0x1FA7ACu;
            goto label_1fa7ac;
        }
    }
    ctx->pc = 0x1FA798u;
label_1fa798:
    // 0x1fa798: 0xc07e8ac  jal         func_1FA2B0
    ctx->pc = 0x1FA798u;
    SET_GPR_U32(ctx, 31, 0x1FA7A0u);
    ctx->pc = 0x1FA79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA798u;
    // 0x1fa79c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA2B0u, 0x1FA798u, 0x1FA7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA7A0u;
label_1fa7a0:
    // 0x1fa7a0: 0x92a212e0  lbu         $v0, 0x12E0($s5)
    ctx->pc = 0x1fa7a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4832)));
    // 0x1fa7a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fa7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fa7a8: 0xa2a212e0  sb          $v0, 0x12E0($s5)
    ctx->pc = 0x1fa7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4832), (uint8_t)GPR_U32(ctx, 2));
label_1fa7ac:
    // 0x1fa7ac: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1fa7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fa7b0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1fa7b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa7b4: 0x217182b  sltu        $v1, $s0, $s7
    ctx->pc = 0x1fa7b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1fa7b8: 0x5460ffcd  bnel        $v1, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1FA7B8u;
    {
        const bool branch_taken_0x1fa7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa7b8) {
            ctx->pc = 0x1FA7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA7B8u;
            // 0x1fa7bc: 0x109180  sll         $s2, $s0, 6 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa6f0;
        }
    }
    ctx->pc = 0x1FA7C0u;
label_1fa7c0:
    // 0x1fa7c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fa7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fa7c4: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x1fa7c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1fa7c8: 0x922312e1  lbu         $v1, 0x12E1($s1)
    ctx->pc = 0x1fa7c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4833)));
    // 0x1fa7cc: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1FA7CCu;
    {
        const bool branch_taken_0x1fa7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7CCu;
        // 0x1fa7d0: 0x2621021  addu        $v0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7cc) {
            ctx->pc = 0x1FA8C8u;
            goto label_1fa8c8;
        }
    }
    ctx->pc = 0x1FA7D4u;
    // 0x1fa7d4: 0xc07eab8  jal         func_1FAAE0
    ctx->pc = 0x1FA7D4u;
    SET_GPR_U32(ctx, 31, 0x1FA7DCu);
    ctx->pc = 0x1FA7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA7D4u;
    // 0x1fa7d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAAE0u, 0x1FA7D4u, 0x1FA7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA7DCu;
label_1fa7dc:
    // 0x1fa7dc: 0x216102b  sltu        $v0, $s0, $s6
    ctx->pc = 0x1fa7dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1fa7e0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1FA7E0u;
    {
        const bool branch_taken_0x1fa7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7E0u;
        // 0x1fa7e4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7e0) {
            ctx->pc = 0x1FA8C4u;
            goto label_1fa8c4;
        }
    }
    ctx->pc = 0x1FA7E8u;
    // 0x1fa7e8: 0x34128de0  ori         $s2, $zero, 0x8DE0
    ctx->pc = 0x1fa7e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1fa7ec: 0x0  nop
    ctx->pc = 0x1fa7ecu;
    // NOP
label_1fa7f0:
    // 0x1fa7f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fa7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7f4: 0xc07ea7a  jal         func_1FA9E8
    ctx->pc = 0x1FA7F4u;
    SET_GPR_U32(ctx, 31, 0x1FA7FCu);
    ctx->pc = 0x1FA7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA7F4u;
    // 0x1fa7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA9E8u, 0x1FA7F4u, 0x1FA7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA7FCu;
label_1fa7fc:
    // 0x1fa7fc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FA7FCu;
    {
        const bool branch_taken_0x1fa7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7FCu;
        // 0x1fa800: 0x102180  sll         $a0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7fc) {
            ctx->pc = 0x1FA898u;
            goto label_1fa898;
        }
    }
    ctx->pc = 0x1FA804u;
    // 0x1fa804: 0x1214001e  beq         $s0, $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FA804u;
    {
        const bool branch_taken_0x1fa804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x1FA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA804u;
        // 0x1fa808: 0x142980  sll         $a1, $s4, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa804) {
            ctx->pc = 0x1FA880u;
            goto label_1fa880;
        }
    }
    ctx->pc = 0x1FA80Cu;
    // 0x1fa80c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1fa80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fa810: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1fa810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1fa814: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1fa814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1fa818: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x1fa818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1fa81c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1fa81cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa820: 0x24860020  addiu       $a2, $a0, 0x20
    ctx->pc = 0x1fa820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1fa824: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1fa824u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa828: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1fa828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fa82c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fa82cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fa830: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fa830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fa834: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1fa834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1fa838: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fa838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fa83c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1fa83cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1fa840: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1fa840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1fa844: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1fa844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1fa848: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1fa848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1fa84c: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x1fa84cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x1fa850: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1fa850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fa854: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1fa854u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa858: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1fa858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1fa85c: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x1fa85cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x1fa860: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1fa860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa864: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x1fa864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x1fa868: 0x90820038  lbu         $v0, 0x38($a0)
    ctx->pc = 0x1fa868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1fa86c: 0xa0a20038  sb          $v0, 0x38($a1)
    ctx->pc = 0x1fa86cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fa870: 0x90830039  lbu         $v1, 0x39($a0)
    ctx->pc = 0x1fa870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x1fa874: 0xa0a30039  sb          $v1, 0x39($a1)
    ctx->pc = 0x1fa874u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa878: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1fa878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1fa87c: 0xa0a2003a  sb          $v0, 0x3A($a1)
    ctx->pc = 0x1fa87cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 2));
label_1fa880:
    // 0x1fa880: 0x922312e0  lbu         $v1, 0x12E0($s1)
    ctx->pc = 0x1fa880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4832)));
    // 0x1fa884: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1fa884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1fa888: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1fa888u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa88c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fa88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fa890: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA890u;
    {
        const bool branch_taken_0x1fa890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA890u;
        // 0x1fa894: 0xa22312e0  sb          $v1, 0x12E0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4832), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa890) {
            ctx->pc = 0x1FA8A4u;
            goto label_1fa8a4;
        }
    }
    ctx->pc = 0x1FA898u;
label_1fa898:
    // 0x1fa898: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1fa898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1fa89c: 0xc07e8ac  jal         func_1FA2B0
    ctx->pc = 0x1FA89Cu;
    SET_GPR_U32(ctx, 31, 0x1FA8A4u);
    ctx->pc = 0x1FA8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA89Cu;
    // 0x1fa8a0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA2B0u, 0x1FA89Cu, 0x1FA8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8A4u;
label_1fa8a4:
    // 0x1fa8a4: 0x922212e1  lbu         $v0, 0x12E1($s1)
    ctx->pc = 0x1fa8a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4833)));
    // 0x1fa8a8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fa8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fa8ac: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fa8acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa8b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fa8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fa8b4: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x1fa8b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1fa8b8: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1FA8B8u;
    {
        const bool branch_taken_0x1fa8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8B8u;
        // 0x1fa8bc: 0xa22212e1  sb          $v0, 0x12E1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4833), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8b8) {
            ctx->pc = 0x1FA7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa7f0;
        }
    }
    ctx->pc = 0x1FA8C0u;
    // 0x1fa8c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fa8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1fa8c4:
    // 0x1fa8c4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1fa8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1fa8c8:
    // 0x1fa8c8: 0x905012e0  lbu         $s0, 0x12E0($v0)
    ctx->pc = 0x1fa8c8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4832)));
    // 0x1fa8cc: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x1fa8ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1fa8d0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FA8D0u;
    {
        const bool branch_taken_0x1fa8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8D0u;
        // 0x1fa8d4: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8d0) {
            ctx->pc = 0x1FA904u;
            goto label_1fa904;
        }
    }
    ctx->pc = 0x1FA8D8u;
    // 0x1fa8d8: 0x34118de0  ori         $s1, $zero, 0x8DE0
    ctx->pc = 0x1fa8d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1fa8dc: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1fa8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_1fa8e0:
    // 0x1fa8e0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1fa8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fa8e4: 0xc07e85c  jal         func_1FA170
    ctx->pc = 0x1FA8E4u;
    SET_GPR_U32(ctx, 31, 0x1FA8ECu);
    ctx->pc = 0x1FA8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA8E4u;
    // 0x1fa8e8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA170u, 0x1FA8E4u, 0x1FA8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8ECu;
label_1fa8ec:
    // 0x1fa8ec: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1fa8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fa8f0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1fa8f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa8f4: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x1fa8f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1fa8f8: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FA8F8u;
    {
        const bool branch_taken_0x1fa8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa8f8) {
            ctx->pc = 0x1FA8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA8F8u;
            // 0x1fa8fc: 0x102180  sll         $a0, $s0, 6 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa8e0;
        }
    }
    ctx->pc = 0x1FA900u;
    // 0x1fa900: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fa900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1fa904:
    // 0x1fa904: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1fa904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1fa908: 0x906212e0  lbu         $v0, 0x12E0($v1)
    ctx->pc = 0x1fa908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4832)));
    // 0x1fa90c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FA90Cu;
    {
        const bool branch_taken_0x1fa90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA90Cu;
        // 0x1fa910: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa90c) {
            ctx->pc = 0x1FA95Cu;
            goto label_1fa95c;
        }
    }
    ctx->pc = 0x1FA914u;
    // 0x1fa914: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1fa914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa918: 0x34128de0  ori         $s2, $zero, 0x8DE0
    ctx->pc = 0x1fa918u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1fa91c: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1fa91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_1fa920:
    // 0x1fa920: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1fa920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1fa924: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1fa924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1fa928: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fa928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa92c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fa92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fa930: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA930u;
    {
        const bool branch_taken_0x1fa930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA930u;
        // 0x1fa934: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa930) {
            ctx->pc = 0x1FA948u;
            goto label_1fa948;
        }
    }
    ctx->pc = 0x1FA938u;
    // 0x1fa938: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fa938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa93c: 0xc07eb4e  jal         func_1FAD38
    ctx->pc = 0x1FA93Cu;
    SET_GPR_U32(ctx, 31, 0x1FA944u);
    ctx->pc = 0x1FA940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA93Cu;
    // 0x1fa940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD38u, 0x1FA93Cu, 0x1FA944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA944u;
label_1fa944:
    // 0x1fa944: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fa944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fa948:
    // 0x1fa948: 0x922212e0  lbu         $v0, 0x12E0($s1)
    ctx->pc = 0x1fa948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4832)));
    // 0x1fa94c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fa94cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa950: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fa950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fa954: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FA954u;
    {
        const bool branch_taken_0x1fa954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA954u;
        // 0x1fa958: 0x101180  sll         $v0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa954) {
            ctx->pc = 0x1FA920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa920;
        }
    }
    ctx->pc = 0x1FA95Cu;
label_1fa95c:
    // 0x1fa95c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fa95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fa960: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1fa960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1fa964: 0x906212e0  lbu         $v0, 0x12E0($v1)
    ctx->pc = 0x1fa964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4832)));
    // 0x1fa968: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FA968u;
    {
        const bool branch_taken_0x1fa968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA968u;
        // 0x1fa96c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa968) {
            ctx->pc = 0x1FA9B8u;
            goto label_1fa9b8;
        }
    }
    ctx->pc = 0x1FA970u;
    // 0x1fa970: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1fa970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa974: 0x34128de0  ori         $s2, $zero, 0x8DE0
    ctx->pc = 0x1fa974u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1fa978: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1fa978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1fa97c: 0x0  nop
    ctx->pc = 0x1fa97cu;
    // NOP
label_1fa980:
    // 0x1fa980: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1fa980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1fa984: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1fa984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1fa988: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fa988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa98c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1fa98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1fa990: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA990u;
    {
        const bool branch_taken_0x1fa990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA990u;
        // 0x1fa994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa990) {
            ctx->pc = 0x1FA9A0u;
            goto label_1fa9a0;
        }
    }
    ctx->pc = 0x1FA998u;
    // 0x1fa998: 0xc07eb7a  jal         func_1FADE8
    ctx->pc = 0x1FA998u;
    SET_GPR_U32(ctx, 31, 0x1FA9A0u);
    ctx->pc = 0x1FA99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA998u;
    // 0x1fa99c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADE8u, 0x1FA998u, 0x1FA9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA9A0u;
label_1fa9a0:
    // 0x1fa9a0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fa9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fa9a4: 0x922212e0  lbu         $v0, 0x12E0($s1)
    ctx->pc = 0x1fa9a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4832)));
    // 0x1fa9a8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fa9a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa9ac: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fa9acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fa9b0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FA9B0u;
    {
        const bool branch_taken_0x1fa9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9B0u;
        // 0x1fa9b4: 0x101180  sll         $v0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9b0) {
            ctx->pc = 0x1FA980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa980;
        }
    }
    ctx->pc = 0x1FA9B8u;
label_1fa9b8:
    // 0x1fa9b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa9bc:
    // 0x1fa9bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa9bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fa9c0:
    // 0x1fa9c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fa9c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa9c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fa9c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa9c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fa9c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa9cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fa9ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fa9d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fa9d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa9d4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1fa9d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fa9d8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1fa9d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fa9dc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1fa9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fa9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9E0u;
        // 0x1fa9e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA9E8u;
}
