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

// Function: sub_00298CD0
// Address: 0x298cd0 - 0x298e48
void sub_00298CD0_0x298cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298CD0_0x298cd0");
#endif

    switch (ctx->pc) {
        case 0x298d04u: goto label_298d04;
        case 0x298d10u: goto label_298d10;
        case 0x298d28u: goto label_298d28;
        case 0x298d30u: goto label_298d30;
        case 0x298d50u: goto label_298d50;
        case 0x298d64u: goto label_298d64;
        case 0x298dc8u: goto label_298dc8;
        case 0x298df0u: goto label_298df0;
        case 0x298e1cu: goto label_298e1c;
        default: break;
    }

    ctx->pc = 0x298cd0u;

    // 0x298cd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x298cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x298cd4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x298cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x298cd8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x298cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x298cdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ce0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x298ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x298ce4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x298ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ce8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x298ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x298cec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x298cecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298cf0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x298cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x298cf4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x298cf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298cf8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x298cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x298cfc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x298CFCu;
    SET_GPR_U32(ctx, 31, 0x298D04u);
    ctx->pc = 0x298D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298CFCu;
    // 0x298d00: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x298CFCu, 0x298D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D04u;
label_298d04:
    // 0x298d04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x298d04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d08: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x298D08u;
    SET_GPR_U32(ctx, 31, 0x298D10u);
    ctx->pc = 0x298D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D08u;
    // 0x298d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x298D08u, 0x298D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D10u;
label_298d10:
    // 0x298d10: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x298d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x298d14: 0x2644007c  addiu       $a0, $s2, 0x7C
    ctx->pc = 0x298d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    // 0x298d18: 0x246331e8  addiu       $v1, $v1, 0x31E8
    ctx->pc = 0x298d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12776));
    // 0x298d1c: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x298d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x298d20: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x298D20u;
    SET_GPR_U32(ctx, 31, 0x298D28u);
    ctx->pc = 0x298D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D20u;
    // 0x298d24: 0xae430074  sw          $v1, 0x74($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x298D20u, 0x298D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D28u;
label_298d28:
    // 0x298d28: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x298D28u;
    SET_GPR_U32(ctx, 31, 0x298D30u);
    ctx->pc = 0x298D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D28u;
    // 0x298d2c: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x298D28u, 0x298D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D30u;
label_298d30:
    // 0x298d30: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x298d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x298d34: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x298d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x298d38: 0x24633178  addiu       $v1, $v1, 0x3178
    ctx->pc = 0x298d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12664));
    // 0x298d3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x298d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d40: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x298d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    // 0x298d44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x298d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d48: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x298D48u;
    SET_GPR_U32(ctx, 31, 0x298D50u);
    ctx->pc = 0x298D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D48u;
    // 0x298d4c: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x298D48u, 0x298D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D50u;
label_298d50:
    // 0x298d50: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x298d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298d54: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x298d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298d58: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x298d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x298d5c: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x298D5Cu;
    SET_GPR_U32(ctx, 31, 0x298D64u);
    ctx->pc = 0x298D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D5Cu;
    // 0x298d60: 0xe6410018  swc1        $f1, 0x18($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x298D5Cu, 0x298D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D64u;
label_298d64:
    // 0x298d64: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x298d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298d68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x298d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298d6c: 0x22e3a  dsrl        $a1, $v0, 24
    ctx->pc = 0x298d6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 24);
    // 0x298d70: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x298d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x298d74: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x298d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x298d78: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x298d78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x298d7c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x298d7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298d80: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x298d80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x298d84: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x298d84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x298d88: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x298d88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x298d8c: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x298d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x298d90: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x298d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x298d94: 0xaa420017  swl         $v0, 0x17($s2)
    ctx->pc = 0x298d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298d98: 0xba420014  swr         $v0, 0x14($s2)
    ctx->pc = 0x298d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298d9c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x298D9Cu;
    {
        const bool branch_taken_0x298d9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x298DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D9Cu;
        // 0x298da0: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d9c) {
            ctx->pc = 0x298DA8u;
            goto label_298da8;
        }
    }
    ctx->pc = 0x298DA4u;
    // 0x298da4: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x298da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_298da8:
    // 0x298da8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x298da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298dac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x298dacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298db0: 0x0  nop
    ctx->pc = 0x298db0u;
    // NOP
    // 0x298db4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x298DB4u;
    {
        const bool branch_taken_0x298db4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298db4) {
            ctx->pc = 0x298DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298DB4u;
            // 0x298db8: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x298DBCu;
            goto label_298dbc;
        }
    }
    ctx->pc = 0x298DBCu;
label_298dbc:
    // 0x298dbc: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x298dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x298dc0: 0xc0d757c  jal         func_35D5F0
    ctx->pc = 0x298DC0u;
    SET_GPR_U32(ctx, 31, 0x298DC8u);
    ctx->pc = 0x298DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298DC0u;
    // 0x298dc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5F0u, 0x298DC0u, 0x298DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298DC8u;
label_298dc8:
    // 0x298dc8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x298dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x298dcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x298dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x298dd0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x298dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298dd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x298dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x298dd8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x298dd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x298ddc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x298DDCu;
    {
        const bool branch_taken_0x298ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DDCu;
        // 0x298de0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ddc) {
            ctx->pc = 0x298E0Cu;
            goto label_298e0c;
        }
    }
    ctx->pc = 0x298DE4u;
    // 0x298de4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x298de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298de8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x298de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298dec: 0x0  nop
    ctx->pc = 0x298decu;
    // NOP
label_298df0:
    // 0x298df0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x298df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x298df4: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x298df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x298df8: 0x90e3ffff  lbu         $v1, -0x1($a3)
    ctx->pc = 0x298df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x298dfc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x298dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x298e00: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x298e00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x298e04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x298E04u;
    {
        const bool branch_taken_0x298e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E04u;
        // 0x298e08: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e04) {
            ctx->pc = 0x298DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298df0;
        }
    }
    ctx->pc = 0x298E0Cu;
label_298e0c:
    // 0x298e0c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x298e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x298e10: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x298e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e14: 0xc0f02a8  jal         func_3C0AA0
    ctx->pc = 0x298E14u;
    SET_GPR_U32(ctx, 31, 0x298E1Cu);
    ctx->pc = 0x298E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E14u;
    // 0x298e18: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0AA0u, 0x298E14u, 0x298E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E1Cu;
label_298e1c:
    // 0x298e1c: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x298e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x298e20: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x298e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e24: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x298e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298e28: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x298e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298e2c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x298e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298e30: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x298e30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x298e34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x298e34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298e38: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x298e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x298e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x298E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E3Cu;
        // 0x298e40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298E44u;
    // 0x298e44: 0x0  nop
    ctx->pc = 0x298e44u;
    // NOP
    ctx->pc = 0x298e48u;
}
