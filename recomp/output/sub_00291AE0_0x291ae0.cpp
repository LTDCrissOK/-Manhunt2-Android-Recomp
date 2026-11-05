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

// Function: sub_00291AE0
// Address: 0x291ae0 - 0x291bc0
void sub_00291AE0_0x291ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291AE0_0x291ae0");
#endif

    switch (ctx->pc) {
        case 0x291b0cu: goto label_291b0c;
        case 0x291b14u: goto label_291b14;
        case 0x291b6cu: goto label_291b6c;
        default: break;
    }

    ctx->pc = 0x291ae0u;

    // 0x291ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x291ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x291ae4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x291ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x291ae8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x291ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x291aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291af0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x291af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x291af4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x291af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291af8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x291af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x291afc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x291afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x291b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x291b04: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x291B04u;
    SET_GPR_U32(ctx, 31, 0x291B0Cu);
    ctx->pc = 0x291B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B04u;
    // 0x291b08: 0x240401e8  addiu       $a0, $zero, 0x1E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x291B04u, 0x291B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B0Cu;
label_291b0c:
    // 0x291b0c: 0xc0a46a8  jal         func_291AA0
    ctx->pc = 0x291B0Cu;
    SET_GPR_U32(ctx, 31, 0x291B14u);
    ctx->pc = 0x291B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B0Cu;
    // 0x291b10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291AA0u, 0x291B0Cu, 0x291B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B14u;
label_291b14:
    // 0x291b14: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x291b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291b18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x291b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b1c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x291b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x291b20: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x291b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x291b24: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x291b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291b28: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x291b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x291b2c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x291b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291b30: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x291b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x291b34: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x291b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291b38: 0xe641007c  swc1        $f1, 0x7C($s2)
    ctx->pc = 0x291b38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x291b3c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x291b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291b40: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x291b40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291b44: 0x0  nop
    ctx->pc = 0x291b44u;
    // NOP
    // 0x291b48: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x291B48u;
    {
        const bool branch_taken_0x291b48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291b48) {
            ctx->pc = 0x291B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291B48u;
            // 0x291b4c: 0xe6400020  swc1        $f0, 0x20($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x291B50u;
            goto label_291b50;
        }
    }
    ctx->pc = 0x291B50u;
label_291b50:
    // 0x291b50: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x291b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291b54: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x291b54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291b58: 0x0  nop
    ctx->pc = 0x291b58u;
    // NOP
    // 0x291b5c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x291B5Cu;
    {
        const bool branch_taken_0x291b5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291b5c) {
            ctx->pc = 0x291B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291B5Cu;
            // 0x291b60: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x291B64u;
            goto label_291b64;
        }
    }
    ctx->pc = 0x291B64u;
label_291b64:
    // 0x291b64: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x291B64u;
    SET_GPR_U32(ctx, 31, 0x291B6Cu);
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x291B64u, 0x291B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B6Cu;
label_291b6c:
    // 0x291b6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x291b6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x291b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291b74: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x291b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x291b78: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x291b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x291b7c: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x291b7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x291b80: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x291b80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x291b84: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x291b84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x291b88: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x291b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b8c: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x291b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x291b90: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x291b90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x291b94: 0x8ba30003  lwl         $v1, 0x3($sp)
    ctx->pc = 0x291b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x291b98: 0x9ba30000  lwr         $v1, 0x0($sp)
    ctx->pc = 0x291b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x291b9c: 0xaa430017  swl         $v1, 0x17($s2)
    ctx->pc = 0x291b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x291ba0: 0xba430014  swr         $v1, 0x14($s2)
    ctx->pc = 0x291ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x291ba4: 0xa240006c  sb          $zero, 0x6C($s2)
    ctx->pc = 0x291ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x291ba8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x291ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291bac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x291bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291bb0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x291bb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x291bb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x291bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x291BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BB8u;
        // 0x291bbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291BC0u;
}
