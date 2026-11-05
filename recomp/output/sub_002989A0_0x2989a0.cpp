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

// Function: sub_002989A0
// Address: 0x2989a0 - 0x298b38
void sub_002989A0_0x2989a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002989A0_0x2989a0");
#endif

    switch (ctx->pc) {
        case 0x2989d8u: goto label_2989d8;
        case 0x2989e8u: goto label_2989e8;
        case 0x298a00u: goto label_298a00;
        case 0x298a08u: goto label_298a08;
        case 0x298a24u: goto label_298a24;
        case 0x298a38u: goto label_298a38;
        case 0x298a4cu: goto label_298a4c;
        case 0x298ab0u: goto label_298ab0;
        case 0x298abcu: goto label_298abc;
        case 0x298ae0u: goto label_298ae0;
        case 0x298b0cu: goto label_298b0c;
        default: break;
    }

    ctx->pc = 0x2989a0u;

    // 0x2989a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2989a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2989a4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2989a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2989a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2989a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2989ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2989acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989b0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2989b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2989b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2989b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989b8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2989b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2989bc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2989bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989c0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2989c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989c4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2989c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2989c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2989c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2989cc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2989ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2989d0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2989D0u;
    SET_GPR_U32(ctx, 31, 0x2989D8u);
    ctx->pc = 0x2989D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2989D0u;
    // 0x2989d4: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2989D0u, 0x2989D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989D8u;
label_2989d8:
    // 0x2989d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2989d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2989dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989e0: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x2989E0u;
    SET_GPR_U32(ctx, 31, 0x2989E8u);
    ctx->pc = 0x2989E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2989E0u;
    // 0x2989e4: 0x2654008c  addiu       $s4, $s2, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x2989E0u, 0x2989E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989E8u;
label_2989e8:
    // 0x2989e8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2989e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2989ec: 0x2644007c  addiu       $a0, $s2, 0x7C
    ctx->pc = 0x2989ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    // 0x2989f0: 0x246331e8  addiu       $v1, $v1, 0x31E8
    ctx->pc = 0x2989f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12776));
    // 0x2989f4: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x2989f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x2989f8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2989F8u;
    SET_GPR_U32(ctx, 31, 0x298A00u);
    ctx->pc = 0x2989FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2989F8u;
    // 0x2989fc: 0xae430074  sw          $v1, 0x74($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2989F8u, 0x298A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A00u;
label_298a00:
    // 0x298a00: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x298A00u;
    SET_GPR_U32(ctx, 31, 0x298A08u);
    ctx->pc = 0x298A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A00u;
    // 0x298a04: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x298A00u, 0x298A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A08u;
label_298a08:
    // 0x298a08: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x298a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x298a0c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x298a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x298a10: 0x246331b0  addiu       $v1, $v1, 0x31B0
    ctx->pc = 0x298a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12720));
    // 0x298a14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x298a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a18: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x298a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    // 0x298a1c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x298A1Cu;
    SET_GPR_U32(ctx, 31, 0x298A24u);
    ctx->pc = 0x298A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A1Cu;
    // 0x298a20: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x298A1Cu, 0x298A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A24u;
label_298a24:
    // 0x298a24: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x298a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x298a28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x298a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a2c: 0xae430070  sw          $v1, 0x70($s2)
    ctx->pc = 0x298a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
    // 0x298a30: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x298A30u;
    SET_GPR_U32(ctx, 31, 0x298A38u);
    ctx->pc = 0x298A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A30u;
    // 0x298a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x298A30u, 0x298A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A38u;
label_298a38:
    // 0x298a38: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x298a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298a3c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x298a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298a40: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x298a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x298a44: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x298A44u;
    SET_GPR_U32(ctx, 31, 0x298A4Cu);
    ctx->pc = 0x298A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A44u;
    // 0x298a48: 0xe6410018  swc1        $f1, 0x18($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x298A44u, 0x298A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A4Cu;
label_298a4c:
    // 0x298a4c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x298a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298a50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x298a50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298a54: 0x22e3a  dsrl        $a1, $v0, 24
    ctx->pc = 0x298a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 24);
    // 0x298a58: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x298a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x298a5c: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x298a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x298a60: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x298a60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x298a64: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x298a64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298a68: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x298a68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x298a6c: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x298a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x298a70: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x298a70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x298a74: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x298a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x298a78: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x298a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x298a7c: 0xaa420017  swl         $v0, 0x17($s2)
    ctx->pc = 0x298a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298a80: 0xba420014  swr         $v0, 0x14($s2)
    ctx->pc = 0x298a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298a84: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x298A84u;
    {
        const bool branch_taken_0x298a84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x298A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A84u;
        // 0x298a88: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a84) {
            ctx->pc = 0x298A90u;
            goto label_298a90;
        }
    }
    ctx->pc = 0x298A8Cu;
    // 0x298a8c: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x298a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_298a90:
    // 0x298a90: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x298a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298a94: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x298a94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298a98: 0x0  nop
    ctx->pc = 0x298a98u;
    // NOP
    // 0x298a9c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x298A9Cu;
    {
        const bool branch_taken_0x298a9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298a9c) {
            ctx->pc = 0x298AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298A9Cu;
            // 0x298aa0: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x298AA4u;
            goto label_298aa4;
        }
    }
    ctx->pc = 0x298AA4u;
label_298aa4:
    // 0x298aa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x298aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298aa8: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x298AA8u;
    SET_GPR_U32(ctx, 31, 0x298AB0u);
    ctx->pc = 0x298AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298AA8u;
    // 0x298aac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x298AA8u, 0x298AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298AB0u;
label_298ab0:
    // 0x298ab0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ab4: 0xc0d757c  jal         func_35D5F0
    ctx->pc = 0x298AB4u;
    SET_GPR_U32(ctx, 31, 0x298ABCu);
    ctx->pc = 0x298AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298AB4u;
    // 0x298ab8: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5F0u, 0x298AB4u, 0x298ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298ABCu;
label_298abc:
    // 0x298abc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x298abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x298ac0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x298ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x298ac4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x298ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298ac8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x298ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x298acc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x298accu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x298ad0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x298AD0u;
    {
        const bool branch_taken_0x298ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AD0u;
        // 0x298ad4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ad0) {
            ctx->pc = 0x298AFCu;
            goto label_298afc;
        }
    }
    ctx->pc = 0x298AD8u;
    // 0x298ad8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x298ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298adc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x298adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_298ae0:
    // 0x298ae0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x298ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x298ae4: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x298ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x298ae8: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x298ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x298aec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x298aecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x298af0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x298af0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x298af4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x298AF4u;
    {
        const bool branch_taken_0x298af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AF4u;
        // 0x298af8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298af4) {
            ctx->pc = 0x298AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298ae0;
        }
    }
    ctx->pc = 0x298AFCu;
label_298afc:
    // 0x298afc: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x298afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x298b00: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x298b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b04: 0xc0f02a8  jal         func_3C0AA0
    ctx->pc = 0x298B04u;
    SET_GPR_U32(ctx, 31, 0x298B0Cu);
    ctx->pc = 0x298B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298B04u;
    // 0x298b08: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0AA0u, 0x298B04u, 0x298B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B0Cu;
label_298b0c:
    // 0x298b0c: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x298b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x298b10: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x298b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b14: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x298b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298b18: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x298b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b1c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x298b1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298b20: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x298b20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x298b24: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x298b24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298b28: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x298b28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x298b2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x298b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298b30: 0x3e00008  jr          $ra
    ctx->pc = 0x298B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B30u;
        // 0x298b34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298B38u;
}
