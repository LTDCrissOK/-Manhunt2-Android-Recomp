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

// Function: sub_001FB880
// Address: 0x1fb880 - 0x1fbc08
void sub_001FB880_0x1fb880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB880_0x1fb880");
#endif

    switch (ctx->pc) {
        case 0x1fb900u: goto label_1fb900;
        case 0x1fb91cu: goto label_1fb91c;
        case 0x1fb954u: goto label_1fb954;
        case 0x1fb9b4u: goto label_1fb9b4;
        case 0x1fb9f8u: goto label_1fb9f8;
        case 0x1fba1cu: goto label_1fba1c;
        case 0x1fba50u: goto label_1fba50;
        case 0x1fba68u: goto label_1fba68;
        case 0x1fba74u: goto label_1fba74;
        case 0x1fbab4u: goto label_1fbab4;
        case 0x1fbb24u: goto label_1fbb24;
        case 0x1fbb60u: goto label_1fbb60;
        case 0x1fbb6cu: goto label_1fbb6c;
        case 0x1fbba0u: goto label_1fbba0;
        case 0x1fbbc0u: goto label_1fbbc0;
        default: break;
    }

    ctx->pc = 0x1fb880u;

    // 0x1fb880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fb880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fb884: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fb884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fb888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb88c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fb88cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb890: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb894: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fb898: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fb898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fb89c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fb89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fb8a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fb8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fb8a4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1fb8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1fb8a8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1fb8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1fb8ac: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1fb8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1fb8b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fb8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fb8b4: 0x104000c8  beqz        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x1FB8B4u;
    {
        const bool branch_taken_0x1fb8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8B4u;
        // 0x1fb8b8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8b4) {
            ctx->pc = 0x1FBBD8u;
            goto label_1fbbd8;
        }
    }
    ctx->pc = 0x1FB8BCu;
    // 0x1fb8bc: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1fb8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1fb8c0: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x1fb8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x1fb8c4: 0x46000c5  bltz        $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x1FB8C4u;
    {
        const bool branch_taken_0x1fb8c4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8C4u;
        // 0x1fb8c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8c4) {
            ctx->pc = 0x1FBBDCu;
            goto label_1fbbdc;
        }
    }
    ctx->pc = 0x1FB8CCu;
    // 0x1fb8cc: 0x90820370  lbu         $v0, 0x370($a0)
    ctx->pc = 0x1fb8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x1fb8d0: 0x90830371  lbu         $v1, 0x371($a0)
    ctx->pc = 0x1fb8d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 881)));
    // 0x1fb8d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb8d8: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x1fb8d8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb8dc: 0x12c000bf  beqz        $s6, . + 4 + (0xBF << 2)
    ctx->pc = 0x1FB8DCu;
    {
        const bool branch_taken_0x1fb8dc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8DCu;
        // 0x1fb8e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8dc) {
            ctx->pc = 0x1FBBDCu;
            goto label_1fbbdc;
        }
    }
    ctx->pc = 0x1FB8E4u;
    // 0x1fb8e4: 0x909e0370  lbu         $fp, 0x370($a0)
    ctx->pc = 0x1fb8e4u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x1fb8e8: 0x13c0003a  beqz        $fp, . + 4 + (0x3A << 2)
    ctx->pc = 0x1FB8E8u;
    {
        const bool branch_taken_0x1fb8e8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8E8u;
        // 0x1fb8ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8e8) {
            ctx->pc = 0x1FB9D4u;
            goto label_1fb9d4;
        }
    }
    ctx->pc = 0x1FB8F0u;
    // 0x1fb8f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fb8f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb8f4: 0x341780f0  ori         $s7, $zero, 0x80F0
    ctx->pc = 0x1fb8f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fb8f8: 0x128180  sll         $s0, $s2, 6
    ctx->pc = 0x1fb8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1fb8fc: 0x0  nop
    ctx->pc = 0x1fb8fcu;
    // NOP
label_1fb900:
    // 0x1fb900: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fb900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fb904: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1fb904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1fb908: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fb908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb90c: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1fb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1fb910: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x1fb910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1fb914: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x1FB914u;
    SET_GPR_U32(ctx, 31, 0x1FB91Cu);
    ctx->pc = 0x1FB918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB914u;
    // 0x1fb918: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1FB914u, 0x1FB91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB91Cu;
label_1fb91c:
    // 0x1fb91c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FB91Cu;
    {
        const bool branch_taken_0x1fb91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB91Cu;
        // 0x1fb920: 0x2172021  addu        $a0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb91c) {
            ctx->pc = 0x1FB9ACu;
            goto label_1fb9ac;
        }
    }
    ctx->pc = 0x1FB924u;
    // 0x1fb924: 0x1255001e  beq         $s2, $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FB924u;
    {
        const bool branch_taken_0x1fb924 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x1FB928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB924u;
        // 0x1fb928: 0x2378821  addu        $s1, $s1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb924) {
            ctx->pc = 0x1FB9A0u;
            goto label_1fb9a0;
        }
    }
    ctx->pc = 0x1FB92Cu;
    // 0x1fb92c: 0x158180  sll         $s0, $s5, 6
    ctx->pc = 0x1fb92cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x1fb930: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1fb930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb934: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1fb934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1fb938: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x1fb938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x1fb93c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1fb93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1fb940: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1fb940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb944: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1fb944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1fb948: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fb948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fb94c: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x1FB94Cu;
    SET_GPR_U32(ctx, 31, 0x1FB954u);
    ctx->pc = 0x1FB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB94Cu;
    // 0x1fb950: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x1FB94Cu, 0x1FB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB954u;
label_1fb954:
    // 0x1fb954: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1fb954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1fb958: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1fb958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1fb95c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1fb95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1fb960: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1fb960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fb964: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1fb964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1fb968: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1fb968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1fb96c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1fb96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1fb970: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1fb970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb974: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1fb974u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb978: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1fb978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1fb97c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1fb97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1fb980: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1fb980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb984: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1fb984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1fb988: 0x92220038  lbu         $v0, 0x38($s1)
    ctx->pc = 0x1fb988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1fb98c: 0xa2020038  sb          $v0, 0x38($s0)
    ctx->pc = 0x1fb98cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb990: 0x9623003a  lhu         $v1, 0x3A($s1)
    ctx->pc = 0x1fb990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x1fb994: 0xa603003a  sh          $v1, 0x3A($s0)
    ctx->pc = 0x1fb994u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fb998: 0x9222003c  lbu         $v0, 0x3C($s1)
    ctx->pc = 0x1fb998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1fb99c: 0xa202003c  sb          $v0, 0x3C($s0)
    ctx->pc = 0x1fb99cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 2));
label_1fb9a0:
    // 0x1fb9a0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1fb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1fb9a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB9A4u;
    {
        const bool branch_taken_0x1fb9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9A4u;
        // 0x1fb9a8: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9a4) {
            ctx->pc = 0x1FB9C0u;
            goto label_1fb9c0;
        }
    }
    ctx->pc = 0x1FB9ACu;
label_1fb9ac:
    // 0x1fb9ac: 0xc07ed06  jal         func_1FB418
    ctx->pc = 0x1FB9ACu;
    SET_GPR_U32(ctx, 31, 0x1FB9B4u);
    ctx->pc = 0x1FB9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB9ACu;
    // 0x1fb9b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB418u, 0x1FB9ACu, 0x1FB9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB9B4u;
label_1fb9b4:
    // 0x1fb9b4: 0x92820370  lbu         $v0, 0x370($s4)
    ctx->pc = 0x1fb9b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 880)));
    // 0x1fb9b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fb9bc: 0xa2820370  sb          $v0, 0x370($s4)
    ctx->pc = 0x1fb9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 880), (uint8_t)GPR_U32(ctx, 2));
label_1fb9c0:
    // 0x1fb9c0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1fb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fb9c4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1fb9c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb9c8: 0x25e182b  sltu        $v1, $s2, $fp
    ctx->pc = 0x1fb9c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1fb9cc: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1FB9CCu;
    {
        const bool branch_taken_0x1fb9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9CCu;
        // 0x1fb9d0: 0x128180  sll         $s0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9cc) {
            ctx->pc = 0x1FB900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb900;
        }
    }
    ctx->pc = 0x1FB9D4u;
label_1fb9d4:
    // 0x1fb9d4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fb9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fb9d8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1fb9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1fb9dc: 0x90620370  lbu         $v0, 0x370($v1)
    ctx->pc = 0x1fb9dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x1fb9e0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FB9E0u;
    {
        const bool branch_taken_0x1fb9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9E0u;
        // 0x1fb9e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9e0) {
            ctx->pc = 0x1FBA34u;
            goto label_1fba34;
        }
    }
    ctx->pc = 0x1FB9E8u;
    // 0x1fb9e8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1fb9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9ec: 0x341180f0  ori         $s1, $zero, 0x80F0
    ctx->pc = 0x1fb9ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fb9f0: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1fb9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1fb9f4: 0x0  nop
    ctx->pc = 0x1fb9f4u;
    // NOP
label_1fb9f8:
    // 0x1fb9f8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1fb9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1fb9fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fb9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fba00: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fba00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fba04: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fba04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fba08: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBA08u;
    {
        const bool branch_taken_0x1fba08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA08u;
        // 0x1fba0c: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba08) {
            ctx->pc = 0x1FBA20u;
            goto label_1fba20;
        }
    }
    ctx->pc = 0x1FBA10u;
    // 0x1fba10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba14: 0xc07efcc  jal         func_1FBF30
    ctx->pc = 0x1FBA14u;
    SET_GPR_U32(ctx, 31, 0x1FBA1Cu);
    ctx->pc = 0x1FBA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA14u;
    // 0x1fba18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF30u, 0x1FBA14u, 0x1FBA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA1Cu;
label_1fba1c:
    // 0x1fba1c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1fba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1fba20:
    // 0x1fba20: 0x92020370  lbu         $v0, 0x370($s0)
    ctx->pc = 0x1fba20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x1fba24: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1fba24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fba28: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1fba28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fba2c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FBA2Cu;
    {
        const bool branch_taken_0x1fba2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA2Cu;
        // 0x1fba30: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba2c) {
            ctx->pc = 0x1FB9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb9f8;
        }
    }
    ctx->pc = 0x1FBA34u;
label_1fba34:
    // 0x1fba34: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fba34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fba38: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x1fba38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1fba3c: 0x92020371  lbu         $v0, 0x371($s0)
    ctx->pc = 0x1fba3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 881)));
    // 0x1fba40: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1FBA40u;
    {
        const bool branch_taken_0x1fba40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA40u;
        // 0x1fba44: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba40) {
            ctx->pc = 0x1FBB40u;
            goto label_1fbb40;
        }
    }
    ctx->pc = 0x1FBA48u;
    // 0x1fba48: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x1FBA48u;
    SET_GPR_U32(ctx, 31, 0x1FBA50u);
    ctx->pc = 0x1FBA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA48u;
    // 0x1fba4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x1FBA48u, 0x1FBA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA50u;
label_1fba50:
    // 0x1fba50: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x1fba50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1fba54: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1FBA54u;
    {
        const bool branch_taken_0x1fba54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA54u;
        // 0x1fba58: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba54) {
            ctx->pc = 0x1FBB44u;
            goto label_1fbb44;
        }
    }
    ctx->pc = 0x1FBA5Cu;
    // 0x1fba5c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1fba5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba60: 0x341780f0  ori         $s7, $zero, 0x80F0
    ctx->pc = 0x1fba60u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fba64: 0x0  nop
    ctx->pc = 0x1fba64u;
    // NOP
label_1fba68:
    // 0x1fba68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba6c: 0xc07ef02  jal         func_1FBC08
    ctx->pc = 0x1FBA6Cu;
    SET_GPR_U32(ctx, 31, 0x1FBA74u);
    ctx->pc = 0x1FBA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA6Cu;
    // 0x1fba70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBC08u, 0x1FBA6Cu, 0x1FBA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA74u;
label_1fba74:
    // 0x1fba74: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FBA74u;
    {
        const bool branch_taken_0x1fba74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA74u;
        // 0x1fba78: 0x122180  sll         $a0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba74) {
            ctx->pc = 0x1FBB18u;
            goto label_1fbb18;
        }
    }
    ctx->pc = 0x1FBA7Cu;
    // 0x1fba7c: 0x12550020  beq         $s2, $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FBA7Cu;
    {
        const bool branch_taken_0x1fba7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x1FBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA7Cu;
        // 0x1fba80: 0x128180  sll         $s0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba7c) {
            ctx->pc = 0x1FBB00u;
            goto label_1fbb00;
        }
    }
    ctx->pc = 0x1FBA84u;
    // 0x1fba84: 0x158980  sll         $s1, $s5, 6
    ctx->pc = 0x1fba84u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x1fba88: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1fba88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1fba8c: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x1fba8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1fba90: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x1fba90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x1fba94: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x1fba94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x1fba98: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1fba98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fba9c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1fba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1fbaa0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1fbaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1fbaa4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1fbaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fbaa8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fbaac: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x1FBAACu;
    SET_GPR_U32(ctx, 31, 0x1FBAB4u);
    ctx->pc = 0x1FBAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBAACu;
    // 0x1fbab0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x1FBAACu, 0x1FBAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBAB4u;
label_1fbab4:
    // 0x1fbab4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1fbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fbab8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1fbab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1fbabc: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1fbabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1fbac0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1fbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1fbac4: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1fbac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1fbac8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1fbac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1fbacc: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x1fbaccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x1fbad0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1fbad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbad4: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x1fbad4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fbad8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1fbad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1fbadc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1fbadcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1fbae0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1fbae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbae4: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1fbae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1fbae8: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x1fbae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1fbaec: 0xa2220038  sb          $v0, 0x38($s1)
    ctx->pc = 0x1fbaecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fbaf0: 0x9603003a  lhu         $v1, 0x3A($s0)
    ctx->pc = 0x1fbaf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x1fbaf4: 0xa623003a  sh          $v1, 0x3A($s1)
    ctx->pc = 0x1fbaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fbaf8: 0x9202003c  lbu         $v0, 0x3C($s0)
    ctx->pc = 0x1fbaf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fbafc: 0xa222003c  sb          $v0, 0x3C($s1)
    ctx->pc = 0x1fbafcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 2));
label_1fbb00:
    // 0x1fbb00: 0x92830370  lbu         $v1, 0x370($s4)
    ctx->pc = 0x1fbb00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 880)));
    // 0x1fbb04: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1fbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1fbb08: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1fbb08u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fbb0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fbb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fbb10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBB10u;
    {
        const bool branch_taken_0x1fbb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB10u;
        // 0x1fbb14: 0xa2830370  sb          $v1, 0x370($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 880), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb10) {
            ctx->pc = 0x1FBB24u;
            goto label_1fbb24;
        }
    }
    ctx->pc = 0x1FBB18u;
label_1fbb18:
    // 0x1fbb18: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x1fbb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x1fbb1c: 0xc07ed06  jal         func_1FB418
    ctx->pc = 0x1FBB1Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB24u);
    ctx->pc = 0x1FBB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB1Cu;
    // 0x1fbb20: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB418u, 0x1FBB1Cu, 0x1FBB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB24u;
label_1fbb24:
    // 0x1fbb24: 0x92820371  lbu         $v0, 0x371($s4)
    ctx->pc = 0x1fbb24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 881)));
    // 0x1fbb28: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1fbb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fbb2c: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1fbb2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fbb30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fbb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fbb34: 0x256182b  sltu        $v1, $s2, $s6
    ctx->pc = 0x1fbb34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1fbb38: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1FBB38u;
    {
        const bool branch_taken_0x1fbb38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB38u;
        // 0x1fbb3c: 0xa2820371  sb          $v0, 0x371($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 881), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb38) {
            ctx->pc = 0x1FBA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fba68;
        }
    }
    ctx->pc = 0x1FBB40u;
label_1fbb40:
    // 0x1fbb40: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fbb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1fbb44:
    // 0x1fbb44: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1fbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1fbb48: 0x90500370  lbu         $s0, 0x370($v0)
    ctx->pc = 0x1fbb48u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x1fbb4c: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x1fbb4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1fbb50: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FBB50u;
    {
        const bool branch_taken_0x1fbb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB50u;
        // 0x1fbb54: 0x341180f0  ori         $s1, $zero, 0x80F0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb50) {
            ctx->pc = 0x1FBB80u;
            goto label_1fbb80;
        }
    }
    ctx->pc = 0x1FBB58u;
    // 0x1fbb58: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1fbb58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1fbb5c: 0x0  nop
    ctx->pc = 0x1fbb5cu;
    // NOP
label_1fbb60:
    // 0x1fbb60: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1fbb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fbb64: 0xc07ecb0  jal         func_1FB2C0
    ctx->pc = 0x1FBB64u;
    SET_GPR_U32(ctx, 31, 0x1FBB6Cu);
    ctx->pc = 0x1FBB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB64u;
    // 0x1fbb68: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2C0u, 0x1FBB64u, 0x1FBB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB6Cu;
label_1fbb6c:
    // 0x1fbb6c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1fbb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fbb70: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1fbb70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fbb74: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x1fbb74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1fbb78: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FBB78u;
    {
        const bool branch_taken_0x1fbb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb78) {
            ctx->pc = 0x1FBB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBB78u;
            // 0x1fbb7c: 0x102180  sll         $a0, $s0, 6 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbb60;
        }
    }
    ctx->pc = 0x1FBB80u;
label_1fbb80:
    // 0x1fbb80: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fbb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fbb84: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1fbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1fbb88: 0x90620370  lbu         $v0, 0x370($v1)
    ctx->pc = 0x1fbb88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x1fbb8c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FBB8Cu;
    {
        const bool branch_taken_0x1fbb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB8Cu;
        // 0x1fbb90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb8c) {
            ctx->pc = 0x1FBBD8u;
            goto label_1fbbd8;
        }
    }
    ctx->pc = 0x1FBB94u;
    // 0x1fbb94: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1fbb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb98: 0x341180f0  ori         $s1, $zero, 0x80F0
    ctx->pc = 0x1fbb98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fbb9c: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1fbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_1fbba0:
    // 0x1fbba0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1fbba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1fbba4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fbba8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fbba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fbbac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1fbbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1fbbb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBBB0u;
    {
        const bool branch_taken_0x1fbbb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBB0u;
        // 0x1fbbb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbbb0) {
            ctx->pc = 0x1FBBC0u;
            goto label_1fbbc0;
        }
    }
    ctx->pc = 0x1FBBB8u;
    // 0x1fbbb8: 0xc07eff8  jal         func_1FBFE0
    ctx->pc = 0x1FBBB8u;
    SET_GPR_U32(ctx, 31, 0x1FBBC0u);
    ctx->pc = 0x1FBBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBBB8u;
    // 0x1fbbbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFE0u, 0x1FBBB8u, 0x1FBBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBC0u;
label_1fbbc0:
    // 0x1fbbc0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1fbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fbbc4: 0x92020370  lbu         $v0, 0x370($s0)
    ctx->pc = 0x1fbbc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x1fbbc8: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1fbbc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fbbcc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1fbbccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fbbd0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FBBD0u;
    {
        const bool branch_taken_0x1fbbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBD0u;
        // 0x1fbbd4: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbbd0) {
            ctx->pc = 0x1FBBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbba0;
        }
    }
    ctx->pc = 0x1FBBD8u;
label_1fbbd8:
    // 0x1fbbd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbbdc:
    // 0x1fbbdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fbbdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbbe0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fbbe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbbe4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fbbe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbbe8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fbbe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbbec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fbbecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fbbf0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fbbf0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbbf4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1fbbf4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fbbf8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1fbbf8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fbbfc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1fbbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fbc00: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC00u;
        // 0x1fbc04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBC08u;
}
