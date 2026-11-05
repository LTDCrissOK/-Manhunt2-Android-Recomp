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

// Function: sub_002E22E0
// Address: 0x2e22e0 - 0x2e2468
void sub_002E22E0_0x2e22e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E22E0_0x2e22e0");
#endif

    switch (ctx->pc) {
        case 0x2e2360u: goto label_2e2360;
        case 0x2e2390u: goto label_2e2390;
        case 0x2e23acu: goto label_2e23ac;
        case 0x2e23c8u: goto label_2e23c8;
        case 0x2e243cu: goto label_2e243c;
        case 0x2e244cu: goto label_2e244c;
        default: break;
    }

    ctx->pc = 0x2e22e0u;

    // 0x2e22e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e22e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e22e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e22e8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2e22e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2e22ec: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2e22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x2e22f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e22f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e22f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e22f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e22f8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E22F8u;
    {
        const bool branch_taken_0x2e22f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22F8u;
        // 0x2e22fc: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22f8) {
            ctx->pc = 0x2E2314u;
            goto label_2e2314;
        }
    }
    ctx->pc = 0x2E2300u;
    // 0x2e2300: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e2300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2304: 0x0  nop
    ctx->pc = 0x2e2304u;
    // NOP
    // 0x2e2308: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e2308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e230c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E230Cu;
    {
        const bool branch_taken_0x2e230c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e230c) {
            ctx->pc = 0x2E2330u;
            goto label_2e2330;
        }
    }
    ctx->pc = 0x2E2314u;
label_2e2314:
    // 0x2e2314: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e2314u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e2318: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e2318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e231c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e231cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e2320: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e2320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2324: 0x0  nop
    ctx->pc = 0x2e2324u;
    // NOP
    // 0x2e2328: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e2328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e232c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2e232cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2e2330:
    // 0x2e2330: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2e2330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2e2334: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2e2334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2e2338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e233c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e233cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2340: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e2340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2344: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2348: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2e2348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e234c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e234cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e2350: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2e2350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2e2354: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x2e2354u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e2358: 0xc0b8a44  jal         func_2E2910
    ctx->pc = 0x2E2358u;
    SET_GPR_U32(ctx, 31, 0x2E2360u);
    ctx->pc = 0x2E235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2358u;
    // 0x2e235c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2910u, 0x2E2358u, 0x2E2360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2360u;
label_2e2360:
    // 0x2e2360: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e2360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2364: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e2364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2368: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2e2368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x2e236c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e236cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e2370: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e2370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2374: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e2374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e2378: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2e2378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e237c: 0x0  nop
    ctx->pc = 0x2e237cu;
    // NOP
    // 0x2e2380: 0x45010030  bc1t        . + 4 + (0x30 << 2)
    ctx->pc = 0x2E2380u;
    {
        const bool branch_taken_0x2e2380 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2380u;
        // 0x2e2384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2380) {
            ctx->pc = 0x2E2444u;
            goto label_2e2444;
        }
    }
    ctx->pc = 0x2E2388u;
    // 0x2e2388: 0xc0b891a  jal         func_2E2468
    ctx->pc = 0x2E2388u;
    SET_GPR_U32(ctx, 31, 0x2E2390u);
    ctx->pc = 0x2E238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2388u;
    // 0x2e238c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2468u, 0x2E2388u, 0x2E2390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2390u;
label_2e2390:
    // 0x2e2390: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x2e2390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e2394: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E2394u;
    {
        const bool branch_taken_0x2e2394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2394u;
        // 0x2e2398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2394) {
            ctx->pc = 0x2E2450u;
            goto label_2e2450;
        }
    }
    ctx->pc = 0x2E239Cu;
    // 0x2e239c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e23a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e23a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e23a4: 0xc0b8948  jal         func_2E2520
    ctx->pc = 0x2E23A4u;
    SET_GPR_U32(ctx, 31, 0x2E23ACu);
    ctx->pc = 0x2E23A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E23A4u;
    // 0x2e23a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2520u, 0x2E23A4u, 0x2E23ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E23ACu;
label_2e23ac:
    // 0x2e23ac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e23acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e23b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e23b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e23b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2e23b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e23b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e23b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e23bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e23bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e23c0: 0xc0b89a0  jal         func_2E2680
    ctx->pc = 0x2E23C0u;
    SET_GPR_U32(ctx, 31, 0x2E23C8u);
    ctx->pc = 0x2E23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E23C0u;
    // 0x2e23c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2680u, 0x2E23C0u, 0x2E23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E23C8u;
label_2e23c8:
    // 0x2e23c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E23C8u;
    {
        const bool branch_taken_0x2e23c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23C8u;
        // 0x2e23cc: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23c8) {
            ctx->pc = 0x2E23F0u;
            goto label_2e23f0;
        }
    }
    ctx->pc = 0x2E23D0u;
    // 0x2e23d0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2e23d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2e23d4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e23d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e23d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e23d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e23dc: 0x0  nop
    ctx->pc = 0x2e23dcu;
    // NOP
    // 0x2e23e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e23e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e23e4: 0x0  nop
    ctx->pc = 0x2e23e4u;
    // NOP
    // 0x2e23e8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2E23E8u;
    {
        const bool branch_taken_0x2e23e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e23e8) {
            ctx->pc = 0x2E2444u;
            goto label_2e2444;
        }
    }
    ctx->pc = 0x2E23F0u;
label_2e23f0:
    // 0x2e23f0: 0x8e020970  lw          $v0, 0x970($s0)
    ctx->pc = 0x2e23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2416)));
    // 0x2e23f4: 0x26040970  addiu       $a0, $s0, 0x970
    ctx->pc = 0x2e23f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2416));
    // 0x2e23f8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e23fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e2400: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e2400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2404: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x2e2404u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e2408: 0x8e030970  lw          $v1, 0x970($s0)
    ctx->pc = 0x2e2408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2416)));
    // 0x2e240c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2410: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e2410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e2414: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2e2414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e2418: 0xa0850020  sb          $a1, 0x20($a0)
    ctx->pc = 0x2e2418u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e241c: 0x8e020970  lw          $v0, 0x970($s0)
    ctx->pc = 0x2e241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2416)));
    // 0x2e2420: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e2420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e2424: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2424u;
    {
        const bool branch_taken_0x2e2424 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e2424) {
            ctx->pc = 0x2E2428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2424u;
            // 0x2e2428: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E242Cu;
            goto label_2e242c;
        }
    }
    ctx->pc = 0x2E242Cu;
label_2e242c:
    // 0x2e242c: 0xae020970  sw          $v0, 0x970($s0)
    ctx->pc = 0x2e242cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2416), GPR_U32(ctx, 2));
    // 0x2e2430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2434: 0xc0b89ea  jal         func_2E27A8
    ctx->pc = 0x2E2434u;
    SET_GPR_U32(ctx, 31, 0x2E243Cu);
    ctx->pc = 0x2E2438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2434u;
    // 0x2e2438: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E27A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E27A8u, 0x2E2434u, 0x2E243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E243Cu;
label_2e243c:
    // 0x2e243c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E243Cu;
    {
        const bool branch_taken_0x2e243c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E243Cu;
        // 0x2e2440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e243c) {
            ctx->pc = 0x2E2450u;
            goto label_2e2450;
        }
    }
    ctx->pc = 0x2E2444u;
label_2e2444:
    // 0x2e2444: 0xc0b8a86  jal         func_2E2A18
    ctx->pc = 0x2E2444u;
    SET_GPR_U32(ctx, 31, 0x2E244Cu);
    ctx->pc = 0x2E2448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2444u;
    // 0x2e2448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2A18u, 0x2E2444u, 0x2E244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E244Cu;
label_2e244c:
    // 0x2e244c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e2450:
    // 0x2e2450: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e2450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2454: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e2454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2458: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2e2458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e245c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E245Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E245Cu;
        // 0x2e2460: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E245Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2464u;
    // 0x2e2464: 0x0  nop
    ctx->pc = 0x2e2464u;
    // NOP
    ctx->pc = 0x2e2468u;
}
