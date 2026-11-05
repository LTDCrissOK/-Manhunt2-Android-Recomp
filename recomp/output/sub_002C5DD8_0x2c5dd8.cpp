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

// Function: sub_002C5DD8
// Address: 0x2c5dd8 - 0x2c5ff8
void sub_002C5DD8_0x2c5dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5DD8_0x2c5dd8");
#endif

    switch (ctx->pc) {
        case 0x2c5e08u: goto label_2c5e08;
        case 0x2c5f18u: goto label_2c5f18;
        case 0x2c5f24u: goto label_2c5f24;
        case 0x2c5f48u: goto label_2c5f48;
        case 0x2c5f58u: goto label_2c5f58;
        default: break;
    }

    ctx->pc = 0x2c5dd8u;

    // 0x2c5dd8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2c5dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2c5ddc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2c5ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c5de0: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x2c5de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x2c5de4: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x2c5de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x2c5de8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c5de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5df0: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x2c5df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x2c5df4: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x2c5df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x2c5df8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2c5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c5dfc: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x2c5dfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2c5e00: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2C5E00u;
    SET_GPR_U32(ctx, 31, 0x2C5E08u);
    ctx->pc = 0x2C5E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5E00u;
    // 0x2c5e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2C5E00u, 0x2C5E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E08u;
label_2c5e08:
    // 0x2c5e08: 0xc60f003c  lwc1        $f15, 0x3C($s0)
    ctx->pc = 0x2c5e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2c5e0c: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x2c5e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c5e10: 0xc60e0000  lwc1        $f14, 0x0($s0)
    ctx->pc = 0x2c5e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2c5e14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c5e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e18: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2c5e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c5e1c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2c5e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5e20: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2c5e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5e24: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x2c5e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5e28: 0xc6040018  lwc1        $f4, 0x18($s0)
    ctx->pc = 0x2c5e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5e2c: 0xc605001c  lwc1        $f5, 0x1C($s0)
    ctx->pc = 0x2c5e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c5e30: 0xc6060020  lwc1        $f6, 0x20($s0)
    ctx->pc = 0x2c5e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c5e34: 0xc6070024  lwc1        $f7, 0x24($s0)
    ctx->pc = 0x2c5e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c5e38: 0xc6080028  lwc1        $f8, 0x28($s0)
    ctx->pc = 0x2c5e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c5e3c: 0xc609002c  lwc1        $f9, 0x2C($s0)
    ctx->pc = 0x2c5e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c5e40: 0xc60a0030  lwc1        $f10, 0x30($s0)
    ctx->pc = 0x2c5e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c5e44: 0xc60b0034  lwc1        $f11, 0x34($s0)
    ctx->pc = 0x2c5e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2c5e48: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x2c5e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c5e4c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2c5e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5e50: 0xe7ae0100  swc1        $f14, 0x100($sp)
    ctx->pc = 0x2c5e50u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2c5e54: 0xe7ad0104  swc1        $f13, 0x104($sp)
    ctx->pc = 0x2c5e54u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2c5e58: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x2c5e58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2c5e5c: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x2c5e5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2c5e60: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x2c5e60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2c5e64: 0xe7a40118  swc1        $f4, 0x118($sp)
    ctx->pc = 0x2c5e64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2c5e68: 0xe7a5011c  swc1        $f5, 0x11C($sp)
    ctx->pc = 0x2c5e68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2c5e6c: 0xe7a60120  swc1        $f6, 0x120($sp)
    ctx->pc = 0x2c5e6cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2c5e70: 0xe7a70124  swc1        $f7, 0x124($sp)
    ctx->pc = 0x2c5e70u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2c5e74: 0xe7a80128  swc1        $f8, 0x128($sp)
    ctx->pc = 0x2c5e74u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2c5e78: 0xe7a9012c  swc1        $f9, 0x12C($sp)
    ctx->pc = 0x2c5e78u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2c5e7c: 0xe7aa0130  swc1        $f10, 0x130($sp)
    ctx->pc = 0x2c5e7cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2c5e80: 0xe7ab0134  swc1        $f11, 0x134($sp)
    ctx->pc = 0x2c5e80u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2c5e84: 0xe7ac0138  swc1        $f12, 0x138($sp)
    ctx->pc = 0x2c5e84u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2c5e88: 0xe7af013c  swc1        $f15, 0x13C($sp)
    ctx->pc = 0x2c5e88u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2c5e8c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2c5e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2c5e90: 0x6ba20107  ldl         $v0, 0x107($sp)
    ctx->pc = 0x2c5e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c5e94: 0x6fa20100  ldr         $v0, 0x100($sp)
    ctx->pc = 0x2c5e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c5e98: 0x6ba3010f  ldl         $v1, 0x10F($sp)
    ctx->pc = 0x2c5e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c5e9c: 0x6fa30108  ldr         $v1, 0x108($sp)
    ctx->pc = 0x2c5e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c5ea0: 0x6ba60117  ldl         $a2, 0x117($sp)
    ctx->pc = 0x2c5ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c5ea4: 0x6fa60110  ldr         $a2, 0x110($sp)
    ctx->pc = 0x2c5ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c5ea8: 0x6ba7011f  ldl         $a3, 0x11F($sp)
    ctx->pc = 0x2c5ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c5eac: 0x6fa70118  ldr         $a3, 0x118($sp)
    ctx->pc = 0x2c5eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c5eb0: 0xb3a200c7  sdl         $v0, 0xC7($sp)
    ctx->pc = 0x2c5eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5eb4: 0xb7a200c0  sdr         $v0, 0xC0($sp)
    ctx->pc = 0x2c5eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5eb8: 0xb3a300cf  sdl         $v1, 0xCF($sp)
    ctx->pc = 0x2c5eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5ebc: 0xb7a300c8  sdr         $v1, 0xC8($sp)
    ctx->pc = 0x2c5ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5ec0: 0xb3a600d7  sdl         $a2, 0xD7($sp)
    ctx->pc = 0x2c5ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5ec4: 0xb7a600d0  sdr         $a2, 0xD0($sp)
    ctx->pc = 0x2c5ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5ec8: 0xb3a700df  sdl         $a3, 0xDF($sp)
    ctx->pc = 0x2c5ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5ecc: 0xb7a700d8  sdr         $a3, 0xD8($sp)
    ctx->pc = 0x2c5eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5ed0: 0x6ba20127  ldl         $v0, 0x127($sp)
    ctx->pc = 0x2c5ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c5ed4: 0x6fa20120  ldr         $v0, 0x120($sp)
    ctx->pc = 0x2c5ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c5ed8: 0x6ba3012f  ldl         $v1, 0x12F($sp)
    ctx->pc = 0x2c5ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c5edc: 0x6fa30128  ldr         $v1, 0x128($sp)
    ctx->pc = 0x2c5edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c5ee0: 0x6ba60137  ldl         $a2, 0x137($sp)
    ctx->pc = 0x2c5ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c5ee4: 0x6fa60130  ldr         $a2, 0x130($sp)
    ctx->pc = 0x2c5ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c5ee8: 0x6ba7013f  ldl         $a3, 0x13F($sp)
    ctx->pc = 0x2c5ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c5eec: 0x6fa70138  ldr         $a3, 0x138($sp)
    ctx->pc = 0x2c5eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c5ef0: 0xb3a200e7  sdl         $v0, 0xE7($sp)
    ctx->pc = 0x2c5ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5ef4: 0xb7a200e0  sdr         $v0, 0xE0($sp)
    ctx->pc = 0x2c5ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5ef8: 0xb3a300ef  sdl         $v1, 0xEF($sp)
    ctx->pc = 0x2c5ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5efc: 0xb7a300e8  sdr         $v1, 0xE8($sp)
    ctx->pc = 0x2c5efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5f00: 0xb3a600f7  sdl         $a2, 0xF7($sp)
    ctx->pc = 0x2c5f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5f04: 0xb7a600f0  sdr         $a2, 0xF0($sp)
    ctx->pc = 0x2c5f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5f08: 0xb3a700ff  sdl         $a3, 0xFF($sp)
    ctx->pc = 0x2c5f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5f0c: 0xb7a700f8  sdr         $a3, 0xF8($sp)
    ctx->pc = 0x2c5f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5f10: 0xc0b171c  jal         func_2C5C70
    ctx->pc = 0x2C5F10u;
    SET_GPR_U32(ctx, 31, 0x2C5F18u);
    ctx->pc = 0x2C5F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5F10u;
    // 0x2c5f14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5C70u, 0x2C5F10u, 0x2C5F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F18u;
label_2c5f18:
    // 0x2c5f18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c5f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f1c: 0xc0b1742  jal         func_2C5D08
    ctx->pc = 0x2C5F1Cu;
    SET_GPR_U32(ctx, 31, 0x2C5F24u);
    ctx->pc = 0x2C5F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5F1Cu;
    // 0x2c5f20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5D08u, 0x2C5F1Cu, 0x2C5F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F24u;
label_2c5f24:
    // 0x2c5f24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5f28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c5f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c5f2c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2c5f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c5f30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c5f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f34: 0x0  nop
    ctx->pc = 0x2c5f34u;
    // NOP
    // 0x2c5f38: 0x0  nop
    ctx->pc = 0x2c5f38u;
    // NOP
    // 0x2c5f3c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2c5f3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x2c5f40: 0xc0b174e  jal         func_2C5D38
    ctx->pc = 0x2C5F40u;
    SET_GPR_U32(ctx, 31, 0x2C5F48u);
    ctx->pc = 0x2C5F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5F40u;
    // 0x2c5f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5D38u, 0x2C5F40u, 0x2C5F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F48u;
label_2c5f48:
    // 0x2c5f48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f4c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c5f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c5f50: 0xc0b1762  jal         func_2C5D88
    ctx->pc = 0x2C5F50u;
    SET_GPR_U32(ctx, 31, 0x2C5F58u);
    ctx->pc = 0x2C5F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5F50u;
    // 0x2c5f54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5D88u, 0x2C5F50u, 0x2C5F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F58u;
label_2c5f58:
    // 0x2c5f58: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2c5f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5f5c: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x2c5f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5f60: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x2c5f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5f64: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x2c5f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5f68: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x2c5f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c5f6c: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x2c5f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c5f70: 0xc7a700a4  lwc1        $f7, 0xA4($sp)
    ctx->pc = 0x2c5f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c5f74: 0xc7a800b4  lwc1        $f8, 0xB4($sp)
    ctx->pc = 0x2c5f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c5f78: 0xc7a90088  lwc1        $f9, 0x88($sp)
    ctx->pc = 0x2c5f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c5f7c: 0xc7aa0098  lwc1        $f10, 0x98($sp)
    ctx->pc = 0x2c5f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c5f80: 0xc7ab00a8  lwc1        $f11, 0xA8($sp)
    ctx->pc = 0x2c5f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2c5f84: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2c5f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c5f88: 0xc7ad008c  lwc1        $f13, 0x8C($sp)
    ctx->pc = 0x2c5f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c5f8c: 0xc7ae009c  lwc1        $f14, 0x9C($sp)
    ctx->pc = 0x2c5f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2c5f90: 0xc7af00ac  lwc1        $f15, 0xAC($sp)
    ctx->pc = 0x2c5f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2c5f94: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2c5f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5f98: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2c5f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2c5f9c: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x2c5f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x2c5fa0: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2c5fa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2c5fa4: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x2c5fa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2c5fa8: 0xe624000c  swc1        $f4, 0xC($s1)
    ctx->pc = 0x2c5fa8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2c5fac: 0xe6250010  swc1        $f5, 0x10($s1)
    ctx->pc = 0x2c5facu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2c5fb0: 0xe6260014  swc1        $f6, 0x14($s1)
    ctx->pc = 0x2c5fb0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2c5fb4: 0xe6270018  swc1        $f7, 0x18($s1)
    ctx->pc = 0x2c5fb4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2c5fb8: 0xe628001c  swc1        $f8, 0x1C($s1)
    ctx->pc = 0x2c5fb8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2c5fbc: 0xe6290020  swc1        $f9, 0x20($s1)
    ctx->pc = 0x2c5fbcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2c5fc0: 0xe62a0024  swc1        $f10, 0x24($s1)
    ctx->pc = 0x2c5fc0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2c5fc4: 0xe62b0028  swc1        $f11, 0x28($s1)
    ctx->pc = 0x2c5fc4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2c5fc8: 0xe62c002c  swc1        $f12, 0x2C($s1)
    ctx->pc = 0x2c5fc8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2c5fcc: 0xe62d0030  swc1        $f13, 0x30($s1)
    ctx->pc = 0x2c5fccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2c5fd0: 0xe62e0034  swc1        $f14, 0x34($s1)
    ctx->pc = 0x2c5fd0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c5fd4: 0xe62f0038  swc1        $f15, 0x38($s1)
    ctx->pc = 0x2c5fd4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2c5fd8: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x2c5fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c5fdc: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x2c5fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2c5fe0: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x2c5fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2c5fe4: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x2c5fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2c5fe8: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x2c5fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c5fec: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FECu;
        // 0x2c5ff0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5FF4u;
    // 0x2c5ff4: 0x0  nop
    ctx->pc = 0x2c5ff4u;
    // NOP
    ctx->pc = 0x2c5ff8u;
}
