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

// Function: sub_00296CF8
// Address: 0x296cf8 - 0x296df8
void sub_00296CF8_0x296cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296CF8_0x296cf8");
#endif

    switch (ctx->pc) {
        case 0x296d24u: goto label_296d24;
        case 0x296d30u: goto label_296d30;
        case 0x296d50u: goto label_296d50;
        case 0x296d5cu: goto label_296d5c;
        case 0x296da0u: goto label_296da0;
        default: break;
    }

    ctx->pc = 0x296cf8u;

    // 0x296cf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x296cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x296cfc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x296cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x296d00: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x296d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x296d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d08: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x296d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x296d0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x296d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x296d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x296d14: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x296d14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x296d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x296d1c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x296D1Cu;
    SET_GPR_U32(ctx, 31, 0x296D24u);
    ctx->pc = 0x296D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D1Cu;
    // 0x296d20: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x296D1Cu, 0x296D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D24u;
label_296d24:
    // 0x296d24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x296d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d28: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x296D28u;
    SET_GPR_U32(ctx, 31, 0x296D30u);
    ctx->pc = 0x296D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D28u;
    // 0x296d2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x296D28u, 0x296D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D30u;
label_296d30:
    // 0x296d30: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x296d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x296d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296d38: 0x246332c8  addiu       $v1, $v1, 0x32C8
    ctx->pc = 0x296d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13000));
    // 0x296d3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x296d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d40: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x296d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    // 0x296d44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d48: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x296D48u;
    SET_GPR_U32(ctx, 31, 0x296D50u);
    ctx->pc = 0x296D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D48u;
    // 0x296d4c: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x296D48u, 0x296D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D50u;
label_296d50:
    // 0x296d50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d54: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x296D54u;
    SET_GPR_U32(ctx, 31, 0x296D5Cu);
    ctx->pc = 0x296D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D54u;
    // 0x296d58: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x296D54u, 0x296D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D5Cu;
label_296d5c:
    // 0x296d5c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x296d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x296d60: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x296d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x296d64: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x296d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x296d68: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x296d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296d6c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x296d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296d70: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x296d70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296d74: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x296d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x296d78: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x296D78u;
    {
        const bool branch_taken_0x296d78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x296D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D78u;
        // 0x296d7c: 0xe6410018  swc1        $f1, 0x18($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d78) {
            ctx->pc = 0x296D84u;
            goto label_296d84;
        }
    }
    ctx->pc = 0x296D80u;
    // 0x296d80: 0xe6420020  swc1        $f2, 0x20($s2)
    ctx->pc = 0x296d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_296d84:
    // 0x296d84: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x296d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296d88: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x296d88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296d8c: 0x0  nop
    ctx->pc = 0x296d8cu;
    // NOP
    // 0x296d90: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x296D90u;
    {
        const bool branch_taken_0x296d90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x296d90) {
            ctx->pc = 0x296D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296D90u;
            // 0x296d94: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x296D98u;
            goto label_296d98;
        }
    }
    ctx->pc = 0x296D98u;
label_296d98:
    // 0x296d98: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x296D98u;
    SET_GPR_U32(ctx, 31, 0x296DA0u);
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x296D98u, 0x296DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296DA0u;
label_296da0:
    // 0x296da0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x296da0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296da4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x296da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296da8: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x296da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x296dac: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x296dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x296db0: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x296db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x296db4: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x296db4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x296db8: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x296db8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x296dbc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x296dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296dc0: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x296dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x296dc4: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x296dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x296dc8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x296dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296dcc: 0x8ba30003  lwl         $v1, 0x3($sp)
    ctx->pc = 0x296dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x296dd0: 0x9ba30000  lwr         $v1, 0x0($sp)
    ctx->pc = 0x296dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x296dd4: 0xaa430017  swl         $v1, 0x17($s2)
    ctx->pc = 0x296dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x296dd8: 0xba430014  swr         $v1, 0x14($s2)
    ctx->pc = 0x296dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x296ddc: 0xa240006c  sb          $zero, 0x6C($s2)
    ctx->pc = 0x296ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x296de0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x296de0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296de4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x296de4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296de8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x296de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296dec: 0x3e00008  jr          $ra
    ctx->pc = 0x296DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DECu;
        // 0x296df0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296DF4u;
    // 0x296df4: 0x0  nop
    ctx->pc = 0x296df4u;
    // NOP
    ctx->pc = 0x296df8u;
}
