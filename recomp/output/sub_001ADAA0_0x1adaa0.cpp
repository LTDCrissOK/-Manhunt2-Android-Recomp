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

// Function: sub_001ADAA0
// Address: 0x1adaa0 - 0x1add68
void sub_001ADAA0_0x1adaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADAA0_0x1adaa0");
#endif

    switch (ctx->pc) {
        case 0x1adad4u: goto label_1adad4;
        case 0x1adb80u: goto label_1adb80;
        case 0x1adc20u: goto label_1adc20;
        case 0x1adcc0u: goto label_1adcc0;
        default: break;
    }

    ctx->pc = 0x1adaa0u;

    // 0x1adaa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1adaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1adaa4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1adaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1adaa8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1adaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1adaac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1adaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1adab0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1adab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1adab4: 0x14a200a5  bne         $a1, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1ADAB4u;
    {
        const bool branch_taken_0x1adab4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ADAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAB4u;
        // 0x1adab8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adab4) {
            ctx->pc = 0x1ADD4Cu;
            goto label_1add4c;
        }
    }
    ctx->pc = 0x1ADABCu;
    // 0x1adabc: 0x108000a3  beqz        $a0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1ADABCu;
    {
        const bool branch_taken_0x1adabc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADABCu;
        // 0x1adac0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adabc) {
            ctx->pc = 0x1ADD4Cu;
            goto label_1add4c;
        }
    }
    ctx->pc = 0x1ADAC4u;
    // 0x1adac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adac8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1adac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1adacc: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x1ADACCu;
    SET_GPR_U32(ctx, 31, 0x1ADAD4u);
    ctx->pc = 0x1ADAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADACCu;
    // 0x1adad0: 0x3c110049  lui         $s1, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x1ADACCu, 0x1ADAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAD4u;
label_1adad4:
    // 0x1adad4: 0x2630f060  addiu       $s0, $s1, -0xFA0
    ctx->pc = 0x1adad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963296));
    // 0x1adad8: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x1adad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x1adadc: 0x24030261  addiu       $v1, $zero, 0x261
    ctx->pc = 0x1adadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    // 0x1adae0: 0xc4547a30  lwc1        $f20, 0x7A30($v0)
    ctx->pc = 0x1adae0u;
    { uint32_t bits = FAST_READ32(0x457A30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1adae4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adae8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1adae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1adaec: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x1adaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x1adaf0: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1adaf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1adaf4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1adaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1adaf8: 0x3c070045  lui         $a3, 0x45
    ctx->pc = 0x1adaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)69 << 16));
    // 0x1adafc: 0x3c080045  lui         $t0, 0x45
    ctx->pc = 0x1adafcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)69 << 16));
    // 0x1adb00: 0x2629f060  addiu       $t1, $s1, -0xFA0
    ctx->pc = 0x1adb00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963296));
    // 0x1adb04: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x1adb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1adb08: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x1adb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1adb0c: 0xb1240007  sdl         $a0, 0x7($t1)
    ctx->pc = 0x1adb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adb10: 0xb5240000  sdr         $a0, 0x0($t1)
    ctx->pc = 0x1adb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adb14: 0x244679b0  addiu       $a2, $v0, 0x79B0
    ctx->pc = 0x1adb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 31152));
    // 0x1adb18: 0x68ca0007  ldl         $t2, 0x7($a2)
    ctx->pc = 0x1adb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1adb1c: 0x6cca0000  ldr         $t2, 0x0($a2)
    ctx->pc = 0x1adb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1adb20: 0xb20a0007  sdl         $t2, 0x7($s0)
    ctx->pc = 0x1adb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adb24: 0xb60a0000  sdr         $t2, 0x0($s0)
    ctx->pc = 0x1adb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adb28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1adb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb2c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adb30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb34: 0x246279b8  addiu       $v0, $v1, 0x79B8
    ctx->pc = 0x1adb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31160));
    // 0x1adb38: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x1adb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1adb3c: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x1adb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1adb40: 0xb2090007  sdl         $t1, 0x7($s0)
    ctx->pc = 0x1adb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adb44: 0xb6090000  sdr         $t1, 0x0($s0)
    ctx->pc = 0x1adb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adb48: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adb4c: 0x24eb79c0  addiu       $t3, $a3, 0x79C0
    ctx->pc = 0x1adb4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 31168));
    // 0x1adb50: 0x69630007  ldl         $v1, 0x7($t3)
    ctx->pc = 0x1adb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1adb54: 0x6d630000  ldr         $v1, 0x0($t3)
    ctx->pc = 0x1adb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1adb58: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x1adb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adb5c: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x1adb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adb60: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adb60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adb64: 0x250979c8  addiu       $t1, $t0, 0x79C8
    ctx->pc = 0x1adb64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 31176));
    // 0x1adb68: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x1adb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1adb6c: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x1adb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1adb70: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x1adb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adb74: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x1adb74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adb78: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x1ADB78u;
    SET_GPR_U32(ctx, 31, 0x1ADB80u);
    ctx->pc = 0x1ADB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB78u;
    // 0x1adb7c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x1ADB78u, 0x1ADB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB80u;
label_1adb80:
    // 0x1adb80: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adb80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adb84: 0x24020266  addiu       $v0, $zero, 0x266
    ctx->pc = 0x1adb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 614));
    // 0x1adb88: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1adb88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1adb8c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1adb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1adb90: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1adb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1adb94: 0x6baa0007  ldl         $t2, 0x7($sp)
    ctx->pc = 0x1adb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1adb98: 0x6faa0000  ldr         $t2, 0x0($sp)
    ctx->pc = 0x1adb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1adb9c: 0xb20a0007  sdl         $t2, 0x7($s0)
    ctx->pc = 0x1adb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adba0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x1adba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x1adba4: 0xb60a0000  sdr         $t2, 0x0($s0)
    ctx->pc = 0x1adba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adba8: 0x3c070045  lui         $a3, 0x45
    ctx->pc = 0x1adba8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)69 << 16));
    // 0x1adbac: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adbacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adbb0: 0x3c080045  lui         $t0, 0x45
    ctx->pc = 0x1adbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)69 << 16));
    // 0x1adbb4: 0x246b79d0  addiu       $t3, $v1, 0x79D0
    ctx->pc = 0x1adbb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 31184));
    // 0x1adbb8: 0x69660007  ldl         $a2, 0x7($t3)
    ctx->pc = 0x1adbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1adbbc: 0x6d660000  ldr         $a2, 0x0($t3)
    ctx->pc = 0x1adbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1adbc0: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x1adbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adbc4: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x1adbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adbc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1adbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbcc: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adbd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbd4: 0x244b79d8  addiu       $t3, $v0, 0x79D8
    ctx->pc = 0x1adbd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 31192));
    // 0x1adbd8: 0x69630007  ldl         $v1, 0x7($t3)
    ctx->pc = 0x1adbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1adbdc: 0x6d630000  ldr         $v1, 0x0($t3)
    ctx->pc = 0x1adbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1adbe0: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x1adbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adbe4: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x1adbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adbe8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adbec: 0x24ea79e0  addiu       $t2, $a3, 0x79E0
    ctx->pc = 0x1adbecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 31200));
    // 0x1adbf0: 0x69420007  ldl         $v0, 0x7($t2)
    ctx->pc = 0x1adbf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1adbf4: 0x6d420000  ldr         $v0, 0x0($t2)
    ctx->pc = 0x1adbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1adbf8: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x1adbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adbfc: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x1adbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc00: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adc00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adc04: 0x250779e8  addiu       $a3, $t0, 0x79E8
    ctx->pc = 0x1adc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 31208));
    // 0x1adc08: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x1adc08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x1adc0c: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x1adc0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x1adc10: 0xb20b0007  sdl         $t3, 0x7($s0)
    ctx->pc = 0x1adc10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc14: 0xb60b0000  sdr         $t3, 0x0($s0)
    ctx->pc = 0x1adc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc18: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x1ADC18u;
    SET_GPR_U32(ctx, 31, 0x1ADC20u);
    ctx->pc = 0x1ADC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC18u;
    // 0x1adc1c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x1ADC18u, 0x1ADC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC20u;
label_1adc20:
    // 0x1adc20: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adc20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adc24: 0x2402026b  addiu       $v0, $zero, 0x26B
    ctx->pc = 0x1adc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
    // 0x1adc28: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1adc28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1adc2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1adc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1adc30: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1adc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1adc34: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x1adc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1adc38: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x1adc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1adc3c: 0xb2080007  sdl         $t0, 0x7($s0)
    ctx->pc = 0x1adc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc40: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x1adc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x1adc44: 0xb6080000  sdr         $t0, 0x0($s0)
    ctx->pc = 0x1adc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc48: 0x3c070045  lui         $a3, 0x45
    ctx->pc = 0x1adc48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)69 << 16));
    // 0x1adc4c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adc50: 0x3c080045  lui         $t0, 0x45
    ctx->pc = 0x1adc50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)69 << 16));
    // 0x1adc54: 0x246a79f0  addiu       $t2, $v1, 0x79F0
    ctx->pc = 0x1adc54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 31216));
    // 0x1adc58: 0x69450007  ldl         $a1, 0x7($t2)
    ctx->pc = 0x1adc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1adc5c: 0x6d450000  ldr         $a1, 0x0($t2)
    ctx->pc = 0x1adc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1adc60: 0xb2050007  sdl         $a1, 0x7($s0)
    ctx->pc = 0x1adc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc64: 0xb6050000  sdr         $a1, 0x0($s0)
    ctx->pc = 0x1adc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1adc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc6c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adc70: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1adc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1adc74: 0x244a79f8  addiu       $t2, $v0, 0x79F8
    ctx->pc = 0x1adc74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 31224));
    // 0x1adc78: 0x694b0007  ldl         $t3, 0x7($t2)
    ctx->pc = 0x1adc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x1adc7c: 0x6d4b0000  ldr         $t3, 0x0($t2)
    ctx->pc = 0x1adc7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x1adc80: 0xb20b0007  sdl         $t3, 0x7($s0)
    ctx->pc = 0x1adc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc84: 0xb60b0000  sdr         $t3, 0x0($s0)
    ctx->pc = 0x1adc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc88: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adc88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adc8c: 0x24e97a00  addiu       $t1, $a3, 0x7A00
    ctx->pc = 0x1adc8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 31232));
    // 0x1adc90: 0x692b0007  ldl         $t3, 0x7($t1)
    ctx->pc = 0x1adc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x1adc94: 0x6d2b0000  ldr         $t3, 0x0($t1)
    ctx->pc = 0x1adc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x1adc98: 0xb20b0007  sdl         $t3, 0x7($s0)
    ctx->pc = 0x1adc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adc9c: 0xb60b0000  sdr         $t3, 0x0($s0)
    ctx->pc = 0x1adc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adca0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adca4: 0x25037a08  addiu       $v1, $t0, 0x7A08
    ctx->pc = 0x1adca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 31240));
    // 0x1adca8: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x1adca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1adcac: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x1adcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1adcb0: 0xb20a0007  sdl         $t2, 0x7($s0)
    ctx->pc = 0x1adcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adcb4: 0xb60a0000  sdr         $t2, 0x0($s0)
    ctx->pc = 0x1adcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adcb8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x1ADCB8u;
    SET_GPR_U32(ctx, 31, 0x1ADCC0u);
    ctx->pc = 0x1ADCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADCB8u;
    // 0x1adcbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x1ADCB8u, 0x1ADCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADCC0u;
label_1adcc0:
    // 0x1adcc0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adcc4: 0x24020270  addiu       $v0, $zero, 0x270
    ctx->pc = 0x1adcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x1adcc8: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1adcc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1adccc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1adcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1adcd0: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1adcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1adcd4: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x1adcd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1adcd8: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x1adcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1adcdc: 0xb2040007  sdl         $a0, 0x7($s0)
    ctx->pc = 0x1adcdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adce0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x1adce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x1adce4: 0xb6040000  sdr         $a0, 0x0($s0)
    ctx->pc = 0x1adce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adce8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1adce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1adcec: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1adcecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1adcf0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x1adcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x1adcf4: 0x24667a10  addiu       $a2, $v1, 0x7A10
    ctx->pc = 0x1adcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 31248));
    // 0x1adcf8: 0x68c90007  ldl         $t1, 0x7($a2)
    ctx->pc = 0x1adcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1adcfc: 0x6cc90000  ldr         $t1, 0x0($a2)
    ctx->pc = 0x1adcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1add00: 0xb2090007  sdl         $t1, 0x7($s0)
    ctx->pc = 0x1add00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1add04: 0xb6090000  sdr         $t1, 0x0($s0)
    ctx->pc = 0x1add04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1add08: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1add08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1add0c: 0x244a7a18  addiu       $t2, $v0, 0x7A18
    ctx->pc = 0x1add0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 31256));
    // 0x1add10: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x1add10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1add14: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x1add14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1add18: 0xb2070007  sdl         $a3, 0x7($s0)
    ctx->pc = 0x1add18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1add1c: 0xb6070000  sdr         $a3, 0x0($s0)
    ctx->pc = 0x1add1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1add20: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1add20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1add24: 0x24a67a20  addiu       $a2, $a1, 0x7A20
    ctx->pc = 0x1add24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 31264));
    // 0x1add28: 0x68cb0007  ldl         $t3, 0x7($a2)
    ctx->pc = 0x1add28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x1add2c: 0x6ccb0000  ldr         $t3, 0x0($a2)
    ctx->pc = 0x1add2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x1add30: 0xb20b0007  sdl         $t3, 0x7($s0)
    ctx->pc = 0x1add30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1add34: 0xb60b0000  sdr         $t3, 0x0($s0)
    ctx->pc = 0x1add34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1add38: 0x248a7a28  addiu       $t2, $a0, 0x7A28
    ctx->pc = 0x1add38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 31272));
    // 0x1add3c: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x1add3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1add40: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x1add40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1add44: 0xb207000f  sdl         $a3, 0xF($s0)
    ctx->pc = 0x1add44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1add48: 0xb6070008  sdr         $a3, 0x8($s0)
    ctx->pc = 0x1add48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1add4c:
    // 0x1add4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1add4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1add50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1add50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1add54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1add54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1add58: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1add58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1add5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD5Cu;
        // 0x1add60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADD64u;
    // 0x1add64: 0x0  nop
    ctx->pc = 0x1add64u;
    // NOP
    ctx->pc = 0x1add68u;
}
