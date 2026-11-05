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

// Function: sub_00291918
// Address: 0x291918 - 0x291aa0
void sub_00291918_0x291918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291918_0x291918");
#endif

    switch (ctx->pc) {
        case 0x291954u: goto label_291954;
        case 0x291964u: goto label_291964;
        case 0x29197cu: goto label_29197c;
        case 0x291984u: goto label_291984;
        case 0x2919c0u: goto label_2919c0;
        case 0x2919f4u: goto label_2919f4;
        case 0x291a2cu: goto label_291a2c;
        case 0x291a68u: goto label_291a68;
        case 0x291a74u: goto label_291a74;
        default: break;
    }

    ctx->pc = 0x291918u;

    // 0x291918: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x291918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29191c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x29191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x291920: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x291920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x291924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x291924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291928: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x291928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x29192c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29192cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291930: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x291930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x291934: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x291934u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291938: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x291938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x29193c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x29193cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291940: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x291940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x291944: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x291944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x291948: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x291948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x29194c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29194Cu;
    SET_GPR_U32(ctx, 31, 0x291954u);
    ctx->pc = 0x291950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29194Cu;
    // 0x291950: 0x240401fc  addiu       $a0, $zero, 0x1FC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29194Cu, 0x291954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291954u;
label_291954:
    // 0x291954: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x291954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29195c: 0xc0a42a6  jal         func_290A98
    ctx->pc = 0x29195Cu;
    SET_GPR_U32(ctx, 31, 0x291964u);
    ctx->pc = 0x291960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29195Cu;
    // 0x291960: 0x265301e8  addiu       $s3, $s2, 0x1E8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290A98u, 0x29195Cu, 0x291964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291964u;
label_291964:
    // 0x291964: 0x265401f0  addiu       $s4, $s2, 0x1F0
    ctx->pc = 0x291964u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    // 0x291968: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x291968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x29196c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291970: 0x24632e70  addiu       $v1, $v1, 0x2E70
    ctx->pc = 0x291970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11888));
    // 0x291974: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x291974u;
    SET_GPR_U32(ctx, 31, 0x29197Cu);
    ctx->pc = 0x291978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291974u;
    // 0x291978: 0xae430074  sw          $v1, 0x74($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x291974u, 0x29197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29197Cu;
label_29197c:
    // 0x29197c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29197Cu;
    SET_GPR_U32(ctx, 31, 0x291984u);
    ctx->pc = 0x291980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29197Cu;
    // 0x291980: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29197Cu, 0x291984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291984u;
label_291984:
    // 0x291984: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x291984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x291988: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x291988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29198c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x29198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x291990: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x291990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x291994: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x291994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x291998: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x291998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29199c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29199cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919a0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2919a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2919a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2919a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919a8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2919a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2919ac: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x2919acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x2919b0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2919b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2919b4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2919b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2919b8: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2919B8u;
    SET_GPR_U32(ctx, 31, 0x2919C0u);
    ctx->pc = 0x2919BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919B8u;
    // 0x2919bc: 0xa24001f8  sb          $zero, 0x1F8($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 504), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2919B8u, 0x2919C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919C0u;
label_2919c0:
    // 0x2919c0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2919c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2919c4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2919c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2919c8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2919c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2919cc: 0x24a54ec0  addiu       $a1, $a1, 0x4EC0
    ctx->pc = 0x2919ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20160));
    // 0x2919d0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2919d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2919d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2919d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919d8: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2919d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2919dc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2919dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2919e0: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x2919e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2919e4: 0xe640007c  swc1        $f0, 0x7C($s2)
    ctx->pc = 0x2919e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x2919e8: 0xe643001c  swc1        $f3, 0x1C($s2)
    ctx->pc = 0x2919e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2919ec: 0xc0a42c4  jal         func_290B10
    ctx->pc = 0x2919ECu;
    SET_GPR_U32(ctx, 31, 0x2919F4u);
    ctx->pc = 0x2919F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919ECu;
    // 0x2919f0: 0xe6420078  swc1        $f2, 0x78($s2) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x290B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290B10u, 0x2919ECu, 0x2919F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919F4u;
label_2919f4:
    // 0x2919f4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2919f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2919f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2919f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2919fc: 0x0  nop
    ctx->pc = 0x2919fcu;
    // NOP
    // 0x291a00: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x291a00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291a04: 0x0  nop
    ctx->pc = 0x291a04u;
    // NOP
    // 0x291a08: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x291A08u;
    {
        const bool branch_taken_0x291a08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291a08) {
            ctx->pc = 0x291A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291A08u;
            // 0x291a0c: 0xe6400020  swc1        $f0, 0x20($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x291A10u;
            goto label_291a10;
        }
    }
    ctx->pc = 0x291A10u;
label_291a10:
    // 0x291a10: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x291a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291a14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x291a14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291a18: 0x0  nop
    ctx->pc = 0x291a18u;
    // NOP
    // 0x291a1c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x291A1Cu;
    {
        const bool branch_taken_0x291a1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291a1c) {
            ctx->pc = 0x291A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291A1Cu;
            // 0x291a20: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x291A24u;
            goto label_291a24;
        }
    }
    ctx->pc = 0x291A24u;
label_291a24:
    // 0x291a24: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x291A24u;
    SET_GPR_U32(ctx, 31, 0x291A2Cu);
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x291A24u, 0x291A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A2Cu;
label_291a2c:
    // 0x291a2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x291a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a30: 0x2363a  dsrl        $a2, $v0, 24
    ctx->pc = 0x291a30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> 24);
    // 0x291a34: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x291a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x291a38: 0x22c3a  dsrl        $a1, $v0, 16
    ctx->pc = 0x291a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 16);
    // 0x291a3c: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x291a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x291a40: 0xa3a50022  sb          $a1, 0x22($sp)
    ctx->pc = 0x291a40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 5));
    // 0x291a44: 0xa3a60023  sb          $a2, 0x23($sp)
    ctx->pc = 0x291a44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 6));
    // 0x291a48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x291a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a4c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x291a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x291a50: 0x8ba20023  lwl         $v0, 0x23($sp)
    ctx->pc = 0x291a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x291a54: 0x9ba20020  lwr         $v0, 0x20($sp)
    ctx->pc = 0x291a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x291a58: 0xaa420017  swl         $v0, 0x17($s2)
    ctx->pc = 0x291a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x291a5c: 0xba420014  swr         $v0, 0x14($s2)
    ctx->pc = 0x291a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x291a60: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x291A60u;
    SET_GPR_U32(ctx, 31, 0x291A68u);
    ctx->pc = 0x291A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291A60u;
    // 0x291a64: 0xa240006c  sb          $zero, 0x6C($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x291A60u, 0x291A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A68u;
label_291a68:
    // 0x291a68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x291a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a6c: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x291A6Cu;
    SET_GPR_U32(ctx, 31, 0x291A74u);
    ctx->pc = 0x291A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291A6Cu;
    // 0x291a70: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x291A6Cu, 0x291A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A74u;
label_291a74:
    // 0x291a74: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x291a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a78: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x291a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291a7c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x291a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x291a80: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x291a80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291a84: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x291a84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x291a88: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x291a88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291a8c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x291a8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x291a90: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x291a90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x291a94: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x291a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x291a98: 0x3e00008  jr          $ra
    ctx->pc = 0x291A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A98u;
        // 0x291a9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291AA0u;
}
