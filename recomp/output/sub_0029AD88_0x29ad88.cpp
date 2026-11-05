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

// Function: sub_0029AD88
// Address: 0x29ad88 - 0x29ae68
void sub_0029AD88_0x29ad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AD88_0x29ad88");
#endif

    switch (ctx->pc) {
        case 0x29adb4u: goto label_29adb4;
        case 0x29adbcu: goto label_29adbc;
        case 0x29ae14u: goto label_29ae14;
        default: break;
    }

    ctx->pc = 0x29ad88u;

    // 0x29ad88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ad88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29ad8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29ad8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29ad90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29ad90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x29ad94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ad94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad98: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29ad98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x29ad9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29ad9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ada0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29ada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29ada4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29ada4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ada8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29ada8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29adac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29ADACu;
    SET_GPR_U32(ctx, 31, 0x29ADB4u);
    ctx->pc = 0x29ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADACu;
    // 0x29adb0: 0x240401e8  addiu       $a0, $zero, 0x1E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29ADACu, 0x29ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADB4u;
label_29adb4:
    // 0x29adb4: 0xc0a6b52  jal         func_29AD48
    ctx->pc = 0x29ADB4u;
    SET_GPR_U32(ctx, 31, 0x29ADBCu);
    ctx->pc = 0x29ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADB4u;
    // 0x29adb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AD48u, 0x29ADB4u, 0x29ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADBCu;
label_29adbc:
    // 0x29adbc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x29adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29adc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29adc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29adc4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x29adc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29adc8: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x29adc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x29adcc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x29adccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29add0: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x29add0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x29add4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29add8: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x29add8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x29addc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x29addcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ade0: 0xe641007c  swc1        $f1, 0x7C($s2)
    ctx->pc = 0x29ade0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x29ade4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x29ade4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ade8: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x29ade8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29adec: 0x0  nop
    ctx->pc = 0x29adecu;
    // NOP
    // 0x29adf0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x29ADF0u;
    {
        const bool branch_taken_0x29adf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29adf0) {
            ctx->pc = 0x29ADF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29ADF0u;
            // 0x29adf4: 0xe6400020  swc1        $f0, 0x20($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29ADF8u;
            goto label_29adf8;
        }
    }
    ctx->pc = 0x29ADF8u;
label_29adf8:
    // 0x29adf8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x29adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29adfc: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x29adfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ae00: 0x0  nop
    ctx->pc = 0x29ae00u;
    // NOP
    // 0x29ae04: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x29AE04u;
    {
        const bool branch_taken_0x29ae04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ae04) {
            ctx->pc = 0x29AE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AE04u;
            // 0x29ae08: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AE0Cu;
            goto label_29ae0c;
        }
    }
    ctx->pc = 0x29AE0Cu;
label_29ae0c:
    // 0x29ae0c: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x29AE0Cu;
    SET_GPR_U32(ctx, 31, 0x29AE14u);
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x29AE0Cu, 0x29AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE14u;
label_29ae14:
    // 0x29ae14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29ae14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29ae18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ae1c: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x29ae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x29ae20: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x29ae20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x29ae24: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x29ae24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x29ae28: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x29ae28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x29ae2c: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x29ae2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ae30: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29ae30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae34: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x29ae34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x29ae38: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x29ae38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29ae3c: 0x8ba30003  lwl         $v1, 0x3($sp)
    ctx->pc = 0x29ae3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x29ae40: 0x9ba30000  lwr         $v1, 0x0($sp)
    ctx->pc = 0x29ae40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x29ae44: 0xaa430017  swl         $v1, 0x17($s2)
    ctx->pc = 0x29ae44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29ae48: 0xba430014  swr         $v1, 0x14($s2)
    ctx->pc = 0x29ae48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29ae4c: 0xa240006c  sb          $zero, 0x6C($s2)
    ctx->pc = 0x29ae4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ae50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29ae50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ae54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29ae54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ae58: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x29ae58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29ae5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29ae5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ae60: 0x3e00008  jr          $ra
    ctx->pc = 0x29AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE60u;
        // 0x29ae64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AE68u;
}
