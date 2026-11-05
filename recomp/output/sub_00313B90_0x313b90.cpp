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

// Function: sub_00313B90
// Address: 0x313b90 - 0x313c88
void sub_00313B90_0x313b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313B90_0x313b90");
#endif

    switch (ctx->pc) {
        case 0x313bb0u: goto label_313bb0;
        case 0x313bf8u: goto label_313bf8;
        default: break;
    }

    ctx->pc = 0x313b90u;

    // 0x313b90: 0x800013  mtlo        $a0
    ctx->pc = 0x313b90u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x313b94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313b98: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x313B98u;
    {
        const bool branch_taken_0x313b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B98u;
        // 0x313b9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b98) {
            ctx->pc = 0x313C7Cu;
            goto label_313c7c;
        }
    }
    ctx->pc = 0x313BA0u;
    // 0x313ba0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x313ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313ba4: 0x1812  mflo        $v1
    ctx->pc = 0x313ba4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x313ba8: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x313ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x313bac: 0x0  nop
    ctx->pc = 0x313bacu;
    // NOP
label_313bb0:
    // 0x313bb0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x313bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313bb4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x313bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313bb8: 0x0  nop
    ctx->pc = 0x313bb8u;
    // NOP
    // 0x313bbc: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x313BBCu;
    {
        const bool branch_taken_0x313bbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BBCu;
        // 0x313bc0: 0x24870001  addiu       $a3, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bbc) {
            ctx->pc = 0x313C6Cu;
            goto label_313c6c;
        }
    }
    ctx->pc = 0x313BC4u;
    // 0x313bc4: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x313bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x313bc8: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x313bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x313bcc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x313bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x313bd0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x313bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313bd4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x313bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313bd8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x313bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x313bdc: 0xa0680008  sb          $t0, 0x8($v1)
    ctx->pc = 0x313bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 8));
    // 0x313be0: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x313be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x313be4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x313be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x313be8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x313BE8u;
    {
        const bool branch_taken_0x313be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BE8u;
        // 0x313bec: 0xe46c0004  swc1        $f12, 0x4($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x313be8) {
            ctx->pc = 0x313C7Cu;
            goto label_313c7c;
        }
    }
    ctx->pc = 0x313BF0u;
    // 0x313bf0: 0x70e92000  madd        $a0, $a3, $t1
    ctx->pc = 0x313bf0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x313bf4: 0x0  nop
    ctx->pc = 0x313bf4u;
    // NOP
label_313bf8:
    // 0x313bf8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x313bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313bfc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x313bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313c00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x313c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313c04: 0x0  nop
    ctx->pc = 0x313c04u;
    // NOP
    // 0x313c08: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x313C08u;
    {
        const bool branch_taken_0x313c08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C08u;
        // 0x313c0c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c08) {
            ctx->pc = 0x313C58u;
            goto label_313c58;
        }
    }
    ctx->pc = 0x313C10u;
    // 0x313c10: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x313c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x313c14: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x313c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x313c18: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x313c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x313c1c: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x313c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313c20: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x313c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313c24: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x313c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x313c28: 0x6bab0007  ldl         $t3, 0x7($sp)
    ctx->pc = 0x313c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x313c2c: 0x6fab0000  ldr         $t3, 0x0($sp)
    ctx->pc = 0x313c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x313c30: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x313c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x313c34: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x313c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313c38: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x313c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313c3c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x313c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x313c40: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x313c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x313c44: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x313c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x313c48: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x313c48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x313c4c: 0xb3a80007  sdl         $t0, 0x7($sp)
    ctx->pc = 0x313c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313c50: 0xb7a80000  sdr         $t0, 0x0($sp)
    ctx->pc = 0x313c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313c54: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x313c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_313c58:
    // 0x313c58: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x313c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x313c5c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x313C5Cu;
    {
        const bool branch_taken_0x313c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C5Cu;
        // 0x313c60: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c5c) {
            ctx->pc = 0x313BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313bf8;
        }
    }
    ctx->pc = 0x313C64u;
    // 0x313c64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x313C64u;
    {
        const bool branch_taken_0x313c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313c64) {
            ctx->pc = 0x313C7Cu;
            goto label_313c7c;
        }
    }
    ctx->pc = 0x313C6Cu;
label_313c6c:
    // 0x313c6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x313c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x313c70: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x313c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x313c74: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x313C74u;
    {
        const bool branch_taken_0x313c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C74u;
        // 0x313c78: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c74) {
            ctx->pc = 0x313BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313bb0;
        }
    }
    ctx->pc = 0x313C7Cu;
label_313c7c:
    // 0x313c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x313C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C7Cu;
        // 0x313c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313C84u;
    // 0x313c84: 0x0  nop
    ctx->pc = 0x313c84u;
    // NOP
    ctx->pc = 0x313c88u;
}
