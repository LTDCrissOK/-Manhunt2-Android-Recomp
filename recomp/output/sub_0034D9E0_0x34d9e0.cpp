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

// Function: sub_0034D9E0
// Address: 0x34d9e0 - 0x34e608
void sub_0034D9E0_0x34d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D9E0_0x34d9e0");
#endif

    switch (ctx->pc) {
        case 0x34da2cu: goto label_34da2c;
        case 0x34da38u: goto label_34da38;
        case 0x34dae4u: goto label_34dae4;
        case 0x34dae8u: goto label_34dae8;
        case 0x34dbdcu: goto label_34dbdc;
        case 0x34dc14u: goto label_34dc14;
        case 0x34dc88u: goto label_34dc88;
        case 0x34dc90u: goto label_34dc90;
        case 0x34dc98u: goto label_34dc98;
        case 0x34dca4u: goto label_34dca4;
        case 0x34dcb4u: goto label_34dcb4;
        case 0x34df84u: goto label_34df84;
        case 0x34df94u: goto label_34df94;
        case 0x34dfa4u: goto label_34dfa4;
        case 0x34dfb4u: goto label_34dfb4;
        case 0x34dfc4u: goto label_34dfc4;
        case 0x34dff8u: goto label_34dff8;
        case 0x34e05cu: goto label_34e05c;
        case 0x34e164u: goto label_34e164;
        case 0x34e20cu: goto label_34e20c;
        case 0x34e218u: goto label_34e218;
        case 0x34e224u: goto label_34e224;
        case 0x34e230u: goto label_34e230;
        case 0x34e23cu: goto label_34e23c;
        case 0x34e300u: goto label_34e300;
        case 0x34e328u: goto label_34e328;
        case 0x34e4e0u: goto label_34e4e0;
        case 0x34e4ecu: goto label_34e4ec;
        case 0x34e4f8u: goto label_34e4f8;
        case 0x34e504u: goto label_34e504;
        case 0x34e530u: goto label_34e530;
        case 0x34e540u: goto label_34e540;
        case 0x34e590u: goto label_34e590;
        case 0x34e5b4u: goto label_34e5b4;
        case 0x34e5bcu: goto label_34e5bc;
        case 0x34e5c4u: goto label_34e5c4;
        default: break;
    }

    ctx->pc = 0x34d9e0u;

    // 0x34d9e0: 0x27bdf7d0  addiu       $sp, $sp, -0x830
    ctx->pc = 0x34d9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965200));
    // 0x34d9e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34d9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d9e8: 0xffb007b0  sd          $s0, 0x7B0($sp)
    ctx->pc = 0x34d9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1968), GPR_U64(ctx, 16));
    // 0x34d9ec: 0xffb107b8  sd          $s1, 0x7B8($sp)
    ctx->pc = 0x34d9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1976), GPR_U64(ctx, 17));
    // 0x34d9f0: 0xffb207c0  sd          $s2, 0x7C0($sp)
    ctx->pc = 0x34d9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1984), GPR_U64(ctx, 18));
    // 0x34d9f4: 0xffb307c8  sd          $s3, 0x7C8($sp)
    ctx->pc = 0x34d9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1992), GPR_U64(ctx, 19));
    // 0x34d9f8: 0xffb407d0  sd          $s4, 0x7D0($sp)
    ctx->pc = 0x34d9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2000), GPR_U64(ctx, 20));
    // 0x34d9fc: 0xffb507d8  sd          $s5, 0x7D8($sp)
    ctx->pc = 0x34d9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2008), GPR_U64(ctx, 21));
    // 0x34da00: 0xffb607e0  sd          $s6, 0x7E0($sp)
    ctx->pc = 0x34da00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2016), GPR_U64(ctx, 22));
    // 0x34da04: 0xffb707e8  sd          $s7, 0x7E8($sp)
    ctx->pc = 0x34da04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2024), GPR_U64(ctx, 23));
    // 0x34da08: 0xffbe07f0  sd          $fp, 0x7F0($sp)
    ctx->pc = 0x34da08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2032), GPR_U64(ctx, 30));
    // 0x34da0c: 0xffbf07f8  sd          $ra, 0x7F8($sp)
    ctx->pc = 0x34da0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2040), GPR_U64(ctx, 31));
    // 0x34da10: 0xe7b80820  swc1        $f24, 0x820($sp)
    ctx->pc = 0x34da10u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2080), bits); }
    // 0x34da14: 0xe7b70818  swc1        $f23, 0x818($sp)
    ctx->pc = 0x34da14u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2072), bits); }
    // 0x34da18: 0xe7b60810  swc1        $f22, 0x810($sp)
    ctx->pc = 0x34da18u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2064), bits); }
    // 0x34da1c: 0xe7b50808  swc1        $f21, 0x808($sp)
    ctx->pc = 0x34da1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2056), bits); }
    // 0x34da20: 0xe7b40800  swc1        $f20, 0x800($sp)
    ctx->pc = 0x34da20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2048), bits); }
    // 0x34da24: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34DA24u;
    SET_GPR_U32(ctx, 31, 0x34DA2Cu);
    ctx->pc = 0x34DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DA24u;
    // 0x34da28: 0xafa007a0  sw          $zero, 0x7A0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1952), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34DA24u, 0x34DA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA2Cu;
label_34da2c:
    // 0x34da2c: 0xafa007a4  sw          $zero, 0x7A4($sp)
    ctx->pc = 0x34da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1956), GPR_U32(ctx, 0));
    // 0x34da30: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34DA30u;
    SET_GPR_U32(ctx, 31, 0x34DA38u);
    ctx->pc = 0x34DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DA30u;
    // 0x34da34: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34DA30u, 0x34DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA38u;
label_34da38:
    // 0x34da38: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34da38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34da3c: 0x8c432cec  lw          $v1, 0x2CEC($v0)
    ctx->pc = 0x34da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482CECu));
    // 0x34da40: 0x106002e0  beqz        $v1, . + 4 + (0x2E0 << 2)
    ctx->pc = 0x34DA40u;
    {
        const bool branch_taken_0x34da40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DA40u;
        // 0x34da44: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34da40) {
            ctx->pc = 0x34E5C4u;
            goto label_34e5c4;
        }
    }
    ctx->pc = 0x34DA48u;
    // 0x34da48: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x34da48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x34da4c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x34da4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x34da50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34da50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34da54: 0x8c43bcec  lw          $v1, -0x4314($v0)
    ctx->pc = 0x34da54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950124)));
    // 0x34da58: 0x3c0c0040  lui         $t4, 0x40
    ctx->pc = 0x34da58u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)64 << 16));
    // 0x34da5c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x34da5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x34da60: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x34da60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x34da64: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x34da64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x34da68: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x34da68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x34da6c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x34da6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x34da70: 0x3c0b0040  lui         $t3, 0x40
    ctx->pc = 0x34da70u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64 << 16));
    // 0x34da74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34da74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34da78: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x34da78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x34da7c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x34da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x34da80: 0x3c0a004c  lui         $t2, 0x4C
    ctx->pc = 0x34da80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)76 << 16));
    // 0x34da84: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x34da84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x34da88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34da88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da8c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x34da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x34da90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34da90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da94: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x34da94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x34da98: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x34da98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da9c: 0x8d83bcf8  lw          $v1, -0x4308($t4)
    ctx->pc = 0x34da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBCF8u));
    // 0x34daa0: 0x8fb407a0  lw          $s4, 0x7A0($sp)
    ctx->pc = 0x34daa0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1952)));
    // 0x34daa4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x34daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x34daa8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x34daa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x34daac: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x34daacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x34dab0: 0xad07bce4  sw          $a3, -0x431C($t0)
    ctx->pc = 0x34dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294950116), GPR_U32(ctx, 7));
    // 0x34dab4: 0x8d62bcf0  lw          $v0, -0x4310($t3)
    ctx->pc = 0x34dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294950128)));
    // 0x34dab8: 0x6ba30057  ldl         $v1, 0x57($sp)
    ctx->pc = 0x34dab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x34dabc: 0x6fa30050  ldr         $v1, 0x50($sp)
    ctx->pc = 0x34dabcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x34dac0: 0x6ba4005f  ldl         $a0, 0x5F($sp)
    ctx->pc = 0x34dac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x34dac4: 0x6fa40058  ldr         $a0, 0x58($sp)
    ctx->pc = 0x34dac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x34dac8: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x34dac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34dacc: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x34daccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34dad0: 0xb044001f  sdl         $a0, 0x1F($v0)
    ctx->pc = 0x34dad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34dad4: 0xb4440018  sdr         $a0, 0x18($v0)
    ctx->pc = 0x34dad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34dad8: 0xad27ca8c  sw          $a3, -0x3574($t1)
    ctx->pc = 0x34dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294953612), GPR_U32(ctx, 7));
    // 0x34dadc: 0xc0daa5e  jal         func_36A978
    ctx->pc = 0x34DADCu;
    SET_GPR_U32(ctx, 31, 0x34DAE4u);
    ctx->pc = 0x34DAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DADCu;
    // 0x34dae0: 0x8d44f41c  lw          $a0, -0xBE4($t2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294964252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A978u, 0x34DADCu, 0x34DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DAE4u;
label_34dae4:
    // 0x34dae4: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x34dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_34dae8:
    // 0x34dae8: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x34dae8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x34daec: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x34daecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34daf0: 0x8ea4c60c  lw          $a0, -0x39F4($s5)
    ctx->pc = 0x34daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952460)));
    // 0x34daf4: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x34daf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34daf8: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x34daf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x34dafc: 0x1040026f  beqz        $v0, . + 4 + (0x26F << 2)
    ctx->pc = 0x34DAFCu;
    {
        const bool branch_taken_0x34dafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DAFCu;
        // 0x34db00: 0x268d0001  addiu       $t5, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dafc) {
            ctx->pc = 0x34E4BCu;
            goto label_34e4bc;
        }
    }
    ctx->pc = 0x34DB04u;
    // 0x34db04: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x34db04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x34db08: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x34db08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34db0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34db10: 0x24530040  addiu       $s3, $v0, 0x40
    ctx->pc = 0x34db10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x34db14: 0xe6610030  swc1        $f1, 0x30($s3)
    ctx->pc = 0x34db14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x34db18: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x34db18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34db1c: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x34db1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x34db20: 0x92220044  lbu         $v0, 0x44($s1)
    ctx->pc = 0x34db20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x34db24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34db24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34db28: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x34db28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x34db2c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x34DB2Cu;
    {
        const bool branch_taken_0x34db2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB2Cu;
        // 0x34db30: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34db2c) {
            ctx->pc = 0x34DBF0u;
            goto label_34dbf0;
        }
    }
    ctx->pc = 0x34DB34u;
    // 0x34db34: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x34db34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x34db38: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x34db38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34db3c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x34db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x34db40: 0x8ca32b00  lw          $v1, 0x2B00($a1)
    ctx->pc = 0x34db40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11008)));
    // 0x34db44: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x34db44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34db48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34db48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34db4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34db50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34db50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34db54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34db54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34db58: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34DB58u;
    {
        const bool branch_taken_0x34db58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB58u;
        // 0x34db5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34db58) {
            ctx->pc = 0x34DB74u;
            goto label_34db74;
        }
    }
    ctx->pc = 0x34DB60u;
    // 0x34db60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34db60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34db64: 0x0  nop
    ctx->pc = 0x34db64u;
    // NOP
    // 0x34db68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34db68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34db6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DB6Cu;
    {
        const bool branch_taken_0x34db6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34db6c) {
            ctx->pc = 0x34DB8Cu;
            goto label_34db8c;
        }
    }
    ctx->pc = 0x34DB74u;
label_34db74:
    // 0x34db74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34db74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34db78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34db78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34db7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34db7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34db80: 0x0  nop
    ctx->pc = 0x34db80u;
    // NOP
    // 0x34db84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34db84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34db88: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34db88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34db8c:
    // 0x34db8c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34DB8Cu;
    {
        const bool branch_taken_0x34db8c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x34DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB8Cu;
        // 0x34db90: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34db8c) {
            ctx->pc = 0x34DBA8u;
            goto label_34dba8;
        }
    }
    ctx->pc = 0x34DB94u;
    // 0x34db94: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34db94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34db98: 0x0  nop
    ctx->pc = 0x34db98u;
    // NOP
    // 0x34db9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34db9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34dba0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DBA0u;
    {
        const bool branch_taken_0x34dba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dba0) {
            ctx->pc = 0x34DBC0u;
            goto label_34dbc0;
        }
    }
    ctx->pc = 0x34DBA8u;
label_34dba8:
    // 0x34dba8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x34dba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x34dbac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34dbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34dbb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dbb4: 0x0  nop
    ctx->pc = 0x34dbb4u;
    // NOP
    // 0x34dbb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34dbb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34dbbc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34dbbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_34dbc0:
    // 0x34dbc0: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x34dbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x34dbc4: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x34dbc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x34dbc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34dbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34dbcc: 0x0  nop
    ctx->pc = 0x34dbccu;
    // NOP
    // 0x34dbd0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x34dbd0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x34dbd4: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34DBD4u;
    SET_GPR_U32(ctx, 31, 0x34DBDCu);
    ctx->pc = 0x34DBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DBD4u;
    // 0x34dbd8: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34DBD4u, 0x34DBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DBDCu;
label_34dbdc:
    // 0x34dbdc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x34dbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x34dbe0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34dbe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34dbe4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34dbe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34dbe8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x34DBE8u;
    {
        const bool branch_taken_0x34dbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DBE8u;
        // 0x34dbec: 0xc6210004  lwc1        $f1, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dbe8) {
            ctx->pc = 0x34DC5Cu;
            goto label_34dc5c;
        }
    }
    ctx->pc = 0x34DBF0u;
label_34dbf0:
    // 0x34dbf0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34dbf4: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x34dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x34dbf8: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x34dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B00u));
    // 0x34dbfc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x34dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34dc00: 0x2c6307d0  sltiu       $v1, $v1, 0x7D0
    ctx->pc = 0x34dc00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x34dc04: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x34DC04u;
    {
        const bool branch_taken_0x34dc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC04u;
        // 0x34dc08: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc04) {
            ctx->pc = 0x34DC6Cu;
            goto label_34dc6c;
        }
    }
    ctx->pc = 0x34DC0Cu;
    // 0x34dc0c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34DC0Cu;
    SET_GPR_U32(ctx, 31, 0x34DC14u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34DC0Cu, 0x34DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC14u;
label_34dc14:
    // 0x34dc14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34dc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34dc18: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34DC18u;
    {
        const bool branch_taken_0x34dc18 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC18u;
        // 0x34dc1c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc18) {
            ctx->pc = 0x34DC34u;
            goto label_34dc34;
        }
    }
    ctx->pc = 0x34DC20u;
    // 0x34dc20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x34dc20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34dc24: 0x0  nop
    ctx->pc = 0x34dc24u;
    // NOP
    // 0x34dc28: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x34dc28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34dc2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DC2Cu;
    {
        const bool branch_taken_0x34dc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dc2c) {
            ctx->pc = 0x34DC4Cu;
            goto label_34dc4c;
        }
    }
    ctx->pc = 0x34DC34u;
label_34dc34:
    // 0x34dc34: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x34dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34dc38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34dc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34dc3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x34dc3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34dc40: 0x0  nop
    ctx->pc = 0x34dc40u;
    // NOP
    // 0x34dc44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x34dc44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34dc48: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x34dc48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_34dc4c:
    // 0x34dc4c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x34dc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x34dc50: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x34dc50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x34dc54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34dc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dc58: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x34dc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34dc5c:
    // 0x34dc5c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x34dc5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x34dc60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34dc60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34dc64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34DC64u;
    {
        const bool branch_taken_0x34dc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DC64u;
        // 0x34dc68: 0xe6610034  swc1        $f1, 0x34($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc64) {
            ctx->pc = 0x34DC74u;
            goto label_34dc74;
        }
    }
    ctx->pc = 0x34DC6Cu;
label_34dc6c:
    // 0x34dc6c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x34dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dc70: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x34dc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_34dc74:
    // 0x34dc74: 0x27a40720  addiu       $a0, $sp, 0x720
    ctx->pc = 0x34dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1824));
    // 0x34dc78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34dc7c: 0x8c52bd48  lw          $s2, -0x42B8($v0)
    ctx->pc = 0x34dc7cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x34dc80: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34DC80u;
    SET_GPR_U32(ctx, 31, 0x34DC88u);
    ctx->pc = 0x34DC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DC80u;
    // 0x34dc84: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34DC80u, 0x34DC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC88u;
label_34dc88:
    // 0x34dc88: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34DC88u;
    SET_GPR_U32(ctx, 31, 0x34DC90u);
    ctx->pc = 0x34DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DC88u;
    // 0x34dc8c: 0x27a40760  addiu       $a0, $sp, 0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34DC88u, 0x34DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC90u;
label_34dc90:
    // 0x34dc90: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34DC90u;
    SET_GPR_U32(ctx, 31, 0x34DC98u);
    ctx->pc = 0x34DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DC90u;
    // 0x34dc94: 0x27a40770  addiu       $a0, $sp, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34DC90u, 0x34DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC98u;
label_34dc98:
    // 0x34dc98: 0x8e500100  lw          $s0, 0x100($s2)
    ctx->pc = 0x34dc98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x34dc9c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x34DC9Cu;
    SET_GPR_U32(ctx, 31, 0x34DCA4u);
    ctx->pc = 0x34DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DC9Cu;
    // 0x34dca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x34DC9Cu, 0x34DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DCA4u;
label_34dca4:
    // 0x34dca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34DCA4u;
    {
        const bool branch_taken_0x34dca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DCA4u;
        // 0x34dca8: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dca4) {
            ctx->pc = 0x34DCB8u;
            goto label_34dcb8;
        }
    }
    ctx->pc = 0x34DCACu;
    // 0x34dcac: 0xc0c4900  jal         func_312400
    ctx->pc = 0x34DCACu;
    SET_GPR_U32(ctx, 31, 0x34DCB4u);
    ctx->pc = 0x34DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DCACu;
    // 0x34dcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x34DCACu, 0x34DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DCB4u;
label_34dcb4:
    // 0x34dcb4: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x34dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_34dcb8:
    // 0x34dcb8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34dcb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34dcbc: 0xfba10720  sqc2        $vf1, 0x720($sp)
    ctx->pc = 0x34dcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1824), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34dcc0: 0x27a70730  addiu       $a3, $sp, 0x730
    ctx->pc = 0x34dcc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1840));
    // 0x34dcc4: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x34dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x34dcc8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34dcc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34dccc: 0xfba10730  sqc2        $vf1, 0x730($sp)
    ctx->pc = 0x34dcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1840), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34dcd0: 0x27a40740  addiu       $a0, $sp, 0x740
    ctx->pc = 0x34dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
    // 0x34dcd4: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x34dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x34dcd8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34dcd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34dcdc: 0xfba10740  sqc2        $vf1, 0x740($sp)
    ctx->pc = 0x34dcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1856), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34dce0: 0x27a50750  addiu       $a1, $sp, 0x750
    ctx->pc = 0x34dce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1872));
    // 0x34dce4: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x34dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x34dce8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34dce8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34dcec: 0xfba10750  sqc2        $vf1, 0x750($sp)
    ctx->pc = 0x34dcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1872), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34dcf0: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x34dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dcf4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x34dcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x34dcf8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x34dcf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x34dcfc: 0x0  nop
    ctx->pc = 0x34dcfcu;
    // NOP
    // 0x34dd00: 0x460031c3  div.s       $f7, $f6, $f0
    ctx->pc = 0x34dd00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x34dd04: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x34dd04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34dd08: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x34dd08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34dd0c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34dd0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34dd10: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34dd10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34dd14: 0xfaa10040  sqc2        $vf1, 0x40($s5)
    ctx->pc = 0x34dd14u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34dd18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34dd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34dd1c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x34dd1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34dd20: 0x27a30770  addiu       $v1, $sp, 0x770
    ctx->pc = 0x34dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1904));
    // 0x34dd24: 0x44063800  mfc1        $a2, $f7
    ctx->pc = 0x34dd24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x34dd28: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x34dd28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34dd2c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x34dd2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34dd30: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34dd30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34dd34: 0xfba10770  sqc2        $vf1, 0x770($sp)
    ctx->pc = 0x34dd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1904), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34dd38: 0x27a20760  addiu       $v0, $sp, 0x760
    ctx->pc = 0x34dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
    // 0x34dd3c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34dd3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34dd40: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x34dd40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34dd44: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34dd44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34dd48: 0xfba10790  sqc2        $vf1, 0x790($sp)
    ctx->pc = 0x34dd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1936), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34dd4c: 0xc7a30790  lwc1        $f3, 0x790($sp)
    ctx->pc = 0x34dd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34dd50: 0x27a60780  addiu       $a2, $sp, 0x780
    ctx->pc = 0x34dd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
    // 0x34dd54: 0xc7a00794  lwc1        $f0, 0x794($sp)
    ctx->pc = 0x34dd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dd58: 0xc7a10798  lwc1        $f1, 0x798($sp)
    ctx->pc = 0x34dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dd5c: 0xc7a2079c  lwc1        $f2, 0x79C($sp)
    ctx->pc = 0x34dd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dd60: 0xe7a30780  swc1        $f3, 0x780($sp)
    ctx->pc = 0x34dd60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1920), bits); }
    // 0x34dd64: 0xe7a00784  swc1        $f0, 0x784($sp)
    ctx->pc = 0x34dd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1924), bits); }
    // 0x34dd68: 0xe7a10788  swc1        $f1, 0x788($sp)
    ctx->pc = 0x34dd68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1928), bits); }
    // 0x34dd6c: 0xe7a2078c  swc1        $f2, 0x78C($sp)
    ctx->pc = 0x34dd6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1932), bits); }
    // 0x34dd70: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x34dd70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34dd74: 0xfba10760  sqc2        $vf1, 0x760($sp)
    ctx->pc = 0x34dd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1888), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34dd78: 0xc7a00760  lwc1        $f0, 0x760($sp)
    ctx->pc = 0x34dd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dd7c: 0xc7a10764  lwc1        $f1, 0x764($sp)
    ctx->pc = 0x34dd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dd80: 0xc7a40768  lwc1        $f4, 0x768($sp)
    ctx->pc = 0x34dd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34dd84: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x34dd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34dd88: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x34dd88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34dd8c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x34dd8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34dd90: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x34dd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dd94: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x34dd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34dd98: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x34dd98u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34dd9c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x34dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dda0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x34dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34dda4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34dda4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34dda8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x34dda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ddac: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x34ddacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34ddb0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x34ddb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34ddb4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x34ddb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x34ddb8: 0x46003946  mov.s       $f5, $f7
    ctx->pc = 0x34ddb8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[7]);
    // 0x34ddbc: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x34ddbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x34ddc0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x34ddc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34ddc4: 0xc64100e4  lwc1        $f1, 0xE4($s2)
    ctx->pc = 0x34ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ddc8: 0x0  nop
    ctx->pc = 0x34ddc8u;
    // NOP
    // 0x34ddcc: 0x460131c3  div.s       $f7, $f6, $f1
    ctx->pc = 0x34ddccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
    // 0x34ddd0: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x34ddd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x34ddd4: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x34ddd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34ddd8: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x34ddd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x34dddc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34dddcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34dde0: 0xfba10760  sqc2        $vf1, 0x760($sp)
    ctx->pc = 0x34dde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1888), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34dde4: 0x440b2800  mfc1        $t3, $f5
    ctx->pc = 0x34dde4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x34dde8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x34dde8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34ddec: 0x48ab1000  qmtc2.ni    $t3, $vf2
    ctx->pc = 0x34ddecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x34ddf0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34ddf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34ddf4: 0xfba10770  sqc2        $vf1, 0x770($sp)
    ctx->pc = 0x34ddf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1904), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ddf8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34ddf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ddfc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x34ddfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34de00: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34de00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34de04: 0xfba10790  sqc2        $vf1, 0x790($sp)
    ctx->pc = 0x34de04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1936), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34de08: 0xc7a00790  lwc1        $f0, 0x790($sp)
    ctx->pc = 0x34de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34de0c: 0xc7a10794  lwc1        $f1, 0x794($sp)
    ctx->pc = 0x34de0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34de10: 0xc7a20798  lwc1        $f2, 0x798($sp)
    ctx->pc = 0x34de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34de14: 0xc7a3079c  lwc1        $f3, 0x79C($sp)
    ctx->pc = 0x34de14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34de18: 0xe7a00780  swc1        $f0, 0x780($sp)
    ctx->pc = 0x34de18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1920), bits); }
    // 0x34de1c: 0xe7a10784  swc1        $f1, 0x784($sp)
    ctx->pc = 0x34de1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1924), bits); }
    // 0x34de20: 0xe7a20788  swc1        $f2, 0x788($sp)
    ctx->pc = 0x34de20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1928), bits); }
    // 0x34de24: 0xe7a3078c  swc1        $f3, 0x78C($sp)
    ctx->pc = 0x34de24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1932), bits); }
    // 0x34de28: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x34de28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34de2c: 0xfba10760  sqc2        $vf1, 0x760($sp)
    ctx->pc = 0x34de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1888), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34de30: 0xc7a00760  lwc1        $f0, 0x760($sp)
    ctx->pc = 0x34de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34de34: 0xc7a10764  lwc1        $f1, 0x764($sp)
    ctx->pc = 0x34de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34de38: 0xc7a40768  lwc1        $f4, 0x768($sp)
    ctx->pc = 0x34de38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34de3c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x34de3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34de40: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x34de40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x34de44: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x34de44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34de48: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x34de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34de4c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x34de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34de50: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x34de50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34de54: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x34de54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34de58: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x34de58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34de5c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34de5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34de60: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x34de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34de64: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x34de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34de68: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x34de68u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34de6c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x34de6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x34de70: 0xc7a10740  lwc1        $f1, 0x740($sp)
    ctx->pc = 0x34de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34de74: 0xc7a20744  lwc1        $f2, 0x744($sp)
    ctx->pc = 0x34de74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34de78: 0xc7a30748  lwc1        $f3, 0x748($sp)
    ctx->pc = 0x34de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34de7c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x34de7cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x34de80: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x34de80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34de84: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x34de84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34de88: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x34de88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34de8c: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x34de8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34de90: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x34de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34de94: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x34de94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34de98: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x34de98u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34de9c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x34de9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dea0: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x34dea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34dea4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34dea4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34dea8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x34dea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34deac: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x34deacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34deb0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x34deb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34deb4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34deb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x34deb8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x34deb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34debc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34debcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34dec0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x34dec0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34dec4: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x34dec4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34dec8: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x34dec8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34decc: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x34deccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34ded0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x34ded0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34ded4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x34ded4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34ded8: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x34ded8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34dedc: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x34dedcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34dee0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x34dee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34dee4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x34dee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dee8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x34dee8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34deec: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x34deecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x34def0: 0x0  nop
    ctx->pc = 0x34def0u;
    // NOP
    // 0x34def4: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x34def4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34def8: 0x0  nop
    ctx->pc = 0x34def8u;
    // NOP
    // 0x34defc: 0x4500016f  bc1f        . + 4 + (0x16F << 2)
    ctx->pc = 0x34DEFCu;
    {
        const bool branch_taken_0x34defc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DEFCu;
        // 0x34df00: 0x268d0001  addiu       $t5, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34defc) {
            ctx->pc = 0x34E4BCu;
            goto label_34e4bc;
        }
    }
    ctx->pc = 0x34DF04u;
    // 0x34df04: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x34df04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34df08: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x34df08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34df0c: 0x0  nop
    ctx->pc = 0x34df0cu;
    // NOP
    // 0x34df10: 0x0  nop
    ctx->pc = 0x34df10u;
    // NOP
    // 0x34df14: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x34df14u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34df18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34df18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34df1c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x34df1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x34df20: 0x0  nop
    ctx->pc = 0x34df20u;
    // NOP
    // 0x34df24: 0x0  nop
    ctx->pc = 0x34df24u;
    // NOP
    // 0x34df28: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x34df28u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x34df2c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x34df2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34df30: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x34df30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x34df34: 0x45000161  bc1f        . + 4 + (0x161 << 2)
    ctx->pc = 0x34DF34u;
    {
        const bool branch_taken_0x34df34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DF34u;
        // 0x34df38: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34df34) {
            ctx->pc = 0x34E4BCu;
            goto label_34e4bc;
        }
    }
    ctx->pc = 0x34DF3Cu;
    // 0x34df3c: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x34df3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34df40: 0x0  nop
    ctx->pc = 0x34df40u;
    // NOP
    // 0x34df44: 0x4502015e  bc1fl       . + 4 + (0x15E << 2)
    ctx->pc = 0x34DF44u;
    {
        const bool branch_taken_0x34df44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34df44) {
            ctx->pc = 0x34DF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34DF44u;
            // 0x34df48: 0x1a0a02d  daddu       $s4, $t5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E4C0u;
            goto label_34e4c0;
        }
    }
    ctx->pc = 0x34DF4Cu;
    // 0x34df4c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x34df4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34df50: 0x0  nop
    ctx->pc = 0x34df50u;
    // NOP
    // 0x34df54: 0x4502015a  bc1fl       . + 4 + (0x15A << 2)
    ctx->pc = 0x34DF54u;
    {
        const bool branch_taken_0x34df54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34df54) {
            ctx->pc = 0x34DF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34DF54u;
            // 0x34df58: 0x1a0a02d  daddu       $s4, $t5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E4C0u;
            goto label_34e4c0;
        }
    }
    ctx->pc = 0x34DF5Cu;
    // 0x34df5c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x34df5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34df60: 0x0  nop
    ctx->pc = 0x34df60u;
    // NOP
    // 0x34df64: 0x45020156  bc1fl       . + 4 + (0x156 << 2)
    ctx->pc = 0x34DF64u;
    {
        const bool branch_taken_0x34df64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34df64) {
            ctx->pc = 0x34DF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34DF64u;
            // 0x34df68: 0x1a0a02d  daddu       $s4, $t5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E4C0u;
            goto label_34e4c0;
        }
    }
    ctx->pc = 0x34DF6Cu;
    // 0x34df6c: 0xc6340034  lwc1        $f20, 0x34($s1)
    ctx->pc = 0x34df6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34df70: 0xe6750010  swc1        $f21, 0x10($s3)
    ctx->pc = 0x34df70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x34df74: 0xe6760014  swc1        $f22, 0x14($s3)
    ctx->pc = 0x34df74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x34df78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34df78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34df7c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34DF7Cu;
    SET_GPR_U32(ctx, 31, 0x34DF84u);
    ctx->pc = 0x34DF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DF7Cu;
    // 0x34df80: 0xe6750018  swc1        $f21, 0x18($s3) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34DF7Cu, 0x34DF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DF84u;
label_34df84:
    // 0x34df84: 0xe6750004  swc1        $f21, 0x4($s3)
    ctx->pc = 0x34df84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x34df88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34df88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34df8c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34DF8Cu;
    SET_GPR_U32(ctx, 31, 0x34DF94u);
    ctx->pc = 0x34DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DF8Cu;
    // 0x34df90: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34DF8Cu, 0x34DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DF94u;
label_34df94:
    // 0x34df94: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34df94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x34df98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34df98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34df9c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34DF9Cu;
    SET_GPR_U32(ctx, 31, 0x34DFA4u);
    ctx->pc = 0x34DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DF9Cu;
    // 0x34dfa0: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34DF9Cu, 0x34DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DFA4u;
label_34dfa4:
    // 0x34dfa4: 0xe6750024  swc1        $f21, 0x24($s3)
    ctx->pc = 0x34dfa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x34dfa8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34dfa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34dfac: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34DFACu;
    SET_GPR_U32(ctx, 31, 0x34DFB4u);
    ctx->pc = 0x34DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DFACu;
    // 0x34dfb0: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34DFACu, 0x34DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DFB4u;
label_34dfb4:
    // 0x34dfb4: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x34dfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x34dfb8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x34dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x34dfbc: 0xc0c48da  jal         func_312368
    ctx->pc = 0x34DFBCu;
    SET_GPR_U32(ctx, 31, 0x34DFC4u);
    ctx->pc = 0x34DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DFBCu;
    // 0x34dfc0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x34DFBCu, 0x34DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DFC4u;
label_34dfc4:
    // 0x34dfc4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x34dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dfc8: 0x3c0141b0  lui         $at, 0x41B0
    ctx->pc = 0x34dfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16816 << 16));
    // 0x34dfcc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34dfccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34dfd0: 0x0  nop
    ctx->pc = 0x34dfd0u;
    // NOP
    // 0x34dfd4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x34dfd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dfd8: 0x0  nop
    ctx->pc = 0x34dfd8u;
    // NOP
    // 0x34dfdc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34DFDCu;
    {
        const bool branch_taken_0x34dfdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DFDCu;
        // 0x34dfe0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dfdc) {
            ctx->pc = 0x34E000u;
            goto label_34e000;
        }
    }
    ctx->pc = 0x34DFE4u;
    // 0x34dfe4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x34dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x34dfe8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34dfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34dfec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34dfecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dff0: 0xc0c2ecc  jal         func_30BB30
    ctx->pc = 0x34DFF0u;
    SET_GPR_U32(ctx, 31, 0x34DFF8u);
    ctx->pc = 0x34DFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DFF0u;
    // 0x34dff4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x34DFF0u, 0x34DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DFF8u;
label_34dff8:
    // 0x34dff8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x34DFF8u;
    {
        const bool branch_taken_0x34dff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DFF8u;
        // 0x34dffc: 0x92220044  lbu         $v0, 0x44($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dff8) {
            ctx->pc = 0x34E060u;
            goto label_34e060;
        }
    }
    ctx->pc = 0x34E000u;
label_34e000:
    // 0x34e000: 0x3c0141d8  lui         $at, 0x41D8
    ctx->pc = 0x34e000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16856 << 16));
    // 0x34e004: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34e004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e008: 0x0  nop
    ctx->pc = 0x34e008u;
    // NOP
    // 0x34e00c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34e00cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e010: 0x0  nop
    ctx->pc = 0x34e010u;
    // NOP
    // 0x34e014: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x34E014u;
    {
        const bool branch_taken_0x34e014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E014u;
        // 0x34e018: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e014) {
            ctx->pc = 0x34E05Cu;
            goto label_34e05c;
        }
    }
    ctx->pc = 0x34E01Cu;
    // 0x34e01c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x34e01cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34e020: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x34e020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x34e024: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x34e024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x34e028: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34e028u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34e02c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34e02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e030: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x34e030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x34e034: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34e034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34e038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34e038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e03c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34e03cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34e040: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e044: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x34e044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x34e048: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x34e048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e04c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34e04cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x34e050: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x34e050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34e054: 0xc0c2ecc  jal         func_30BB30
    ctx->pc = 0x34E054u;
    SET_GPR_U32(ctx, 31, 0x34E05Cu);
    ctx->pc = 0x34E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E054u;
    // 0x34e058: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x34E054u, 0x34E05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E05Cu;
label_34e05c:
    // 0x34e05c: 0x92220044  lbu         $v0, 0x44($s1)
    ctx->pc = 0x34e05cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
label_34e060:
    // 0x34e060: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34e064: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x34e064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x34e068: 0x10400114  beqz        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x34E068u;
    {
        const bool branch_taken_0x34e068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E068u;
        // 0x34e06c: 0x268d0001  addiu       $t5, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e068) {
            ctx->pc = 0x34E4BCu;
            goto label_34e4bc;
        }
    }
    ctx->pc = 0x34E070u;
    // 0x34e070: 0x8fc52b00  lw          $a1, 0x2B00($fp)
    ctx->pc = 0x34e070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11008)));
    // 0x34e074: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x34e074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x34e078: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34e078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34e07c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x34e07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x34e080: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x34e080u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34e084: 0x28620190  slti        $v0, $v1, 0x190
    ctx->pc = 0x34e084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x34e088: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34E088u;
    {
        const bool branch_taken_0x34e088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E088u;
        // 0x34e08c: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e088) {
            ctx->pc = 0x34E0B0u;
            goto label_34e0b0;
        }
    }
    ctx->pc = 0x34E090u;
    // 0x34e090: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34e090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e094: 0x0  nop
    ctx->pc = 0x34e094u;
    // NOP
    // 0x34e098: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34e098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34e09c: 0x3c013aa3  lui         $at, 0x3AA3
    ctx->pc = 0x34e09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15011 << 16));
    // 0x34e0a0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x34e0a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x34e0a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34e0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e0a8: 0x0  nop
    ctx->pc = 0x34e0a8u;
    // NOP
    // 0x34e0ac: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x34e0acu;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_34e0b0:
    // 0x34e0b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x34e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34e0b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34E0B4u;
    {
        const bool branch_taken_0x34e0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e0b4) {
            ctx->pc = 0x34E0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E0B4u;
            // 0x34e0b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E0BCu;
            goto label_34e0bc;
        }
    }
    ctx->pc = 0x34E0BCu;
label_34e0bc:
    // 0x34e0bc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x34e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x34e0c0: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x34e0c0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x34e0c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x34e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34e0c8: 0x1012  mflo        $v0
    ctx->pc = 0x34e0c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x34e0cc: 0x2833018  mult        $a2, $s4, $v1
    ctx->pc = 0x34e0ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x34e0d0: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x34e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x34e0d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34e0d8: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x34e0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x34e0dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E0DCu;
    {
        const bool branch_taken_0x34e0dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E0DCu;
        // 0x34e0e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e0dc) {
            ctx->pc = 0x34E0F8u;
            goto label_34e0f8;
        }
    }
    ctx->pc = 0x34E0E4u;
    // 0x34e0e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34e0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e0e8: 0x0  nop
    ctx->pc = 0x34e0e8u;
    // NOP
    // 0x34e0ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34e0ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34e0f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E0F0u;
    {
        const bool branch_taken_0x34e0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E0F0u;
        // 0x34e0f4: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e0f0) {
            ctx->pc = 0x34E114u;
            goto label_34e114;
        }
    }
    ctx->pc = 0x34E0F8u;
label_34e0f8:
    // 0x34e0f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e0fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e100: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34e100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e104: 0x0  nop
    ctx->pc = 0x34e104u;
    // NOP
    // 0x34e108: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34e108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34e10c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34e10cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x34e110: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x34e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_34e114:
    // 0x34e114: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E114u;
    {
        const bool branch_taken_0x34e114 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E114u;
        // 0x34e118: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e114) {
            ctx->pc = 0x34E130u;
            goto label_34e130;
        }
    }
    ctx->pc = 0x34E11Cu;
    // 0x34e11c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e120: 0x0  nop
    ctx->pc = 0x34e120u;
    // NOP
    // 0x34e124: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e128: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E128u;
    {
        const bool branch_taken_0x34e128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e128) {
            ctx->pc = 0x34E148u;
            goto label_34e148;
        }
    }
    ctx->pc = 0x34E130u;
label_34e130:
    // 0x34e130: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e134: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e13c: 0x0  nop
    ctx->pc = 0x34e13cu;
    // NOP
    // 0x34e140: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e144: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_34e148:
    // 0x34e148: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x34e148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x34e14c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x34e14cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x34e150: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34e150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34e154: 0x0  nop
    ctx->pc = 0x34e154u;
    // NOP
    // 0x34e158: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x34e158u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x34e15c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34E15Cu;
    SET_GPR_U32(ctx, 31, 0x34E164u);
    ctx->pc = 0x34E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E15Cu;
    // 0x34e160: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34E15Cu, 0x34E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E164u;
label_34e164:
    // 0x34e164: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x34e164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x34e168: 0x8fc32b00  lw          $v1, 0x2B00($fp)
    ctx->pc = 0x34e168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11008)));
    // 0x34e16c: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x34e16cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34e170: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x34e170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x34e174: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34e178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34e178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34e17c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34e17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34e180: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E180u;
    {
        const bool branch_taken_0x34e180 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E180u;
        // 0x34e184: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e180) {
            ctx->pc = 0x34E19Cu;
            goto label_34e19c;
        }
    }
    ctx->pc = 0x34E188u;
    // 0x34e188: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34e188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e18c: 0x0  nop
    ctx->pc = 0x34e18cu;
    // NOP
    // 0x34e190: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34e190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34e194: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34E194u;
    {
        const bool branch_taken_0x34e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E194u;
        // 0x34e198: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e194) {
            ctx->pc = 0x34E1BCu;
            goto label_34e1bc;
        }
    }
    ctx->pc = 0x34E19Cu;
label_34e19c:
    // 0x34e19c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x34e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x34e1a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e1a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e1a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34e1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e1ac: 0x0  nop
    ctx->pc = 0x34e1acu;
    // NOP
    // 0x34e1b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34e1b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34e1b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34e1b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x34e1b8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x34e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_34e1bc:
    // 0x34e1bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E1BCu;
    {
        const bool branch_taken_0x34e1bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E1BCu;
        // 0x34e1c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e1bc) {
            ctx->pc = 0x34E1D8u;
            goto label_34e1d8;
        }
    }
    ctx->pc = 0x34E1C4u;
    // 0x34e1c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e1c8: 0x0  nop
    ctx->pc = 0x34e1c8u;
    // NOP
    // 0x34e1cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e1d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E1D0u;
    {
        const bool branch_taken_0x34e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e1d0) {
            ctx->pc = 0x34E1F0u;
            goto label_34e1f0;
        }
    }
    ctx->pc = 0x34E1D8u;
label_34e1d8:
    // 0x34e1d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e1dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34e1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34e1e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e1e4: 0x0  nop
    ctx->pc = 0x34e1e4u;
    // NOP
    // 0x34e1e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34e1e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34e1ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34e1ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_34e1f0:
    // 0x34e1f0: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x34e1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x34e1f4: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x34e1f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x34e1f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34e1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34e1fc: 0x0  nop
    ctx->pc = 0x34e1fcu;
    // NOP
    // 0x34e200: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x34e200u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x34e204: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34E204u;
    SET_GPR_U32(ctx, 31, 0x34E20Cu);
    ctx->pc = 0x34E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E204u;
    // 0x34e208: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34E204u, 0x34E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E20Cu;
label_34e20c:
    // 0x34e20c: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x34e20cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x34e210: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34E210u;
    SET_GPR_U32(ctx, 31, 0x34E218u);
    ctx->pc = 0x34E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E210u;
    // 0x34e214: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34E210u, 0x34E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E218u;
label_34e218:
    // 0x34e218: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x34e218u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x34e21c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34E21Cu;
    SET_GPR_U32(ctx, 31, 0x34E224u);
    ctx->pc = 0x34E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E21Cu;
    // 0x34e220: 0x4600b5c2  mul.s       $f23, $f22, $f0 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34E21Cu, 0x34E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E224u;
label_34e224:
    // 0x34e224: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34e224u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34e228: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34E228u;
    SET_GPR_U32(ctx, 31, 0x34E230u);
    ctx->pc = 0x34E22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E228u;
    // 0x34e22c: 0x4600b542  mul.s       $f21, $f22, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34E228u, 0x34E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E230u;
label_34e230:
    // 0x34e230: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34e230u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34e234: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34E234u;
    SET_GPR_U32(ctx, 31, 0x34E23Cu);
    ctx->pc = 0x34E238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E234u;
    // 0x34e238: 0x4600b602  mul.s       $f24, $f22, $f0 (Delay Slot)
    ctx->f[24] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34E234u, 0x34E23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E23Cu;
label_34e23c:
    // 0x34e23c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x34e23cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x34e240: 0x4600b502  mul.s       $f20, $f22, $f0
    ctx->pc = 0x34e240u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x34e244: 0x8ce3bd48  lw          $v1, -0x42B8($a3)
    ctx->pc = 0x34e244u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x34e248: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x34e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x34e24c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x34e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34e250: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34e250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34e254: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x34e254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34e258: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34e258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e25c: 0xfba10730  sqc2        $vf1, 0x730($sp)
    ctx->pc = 0x34e25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1840), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34e260: 0xc7a00730  lwc1        $f0, 0x730($sp)
    ctx->pc = 0x34e260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e264: 0xc7a10734  lwc1        $f1, 0x734($sp)
    ctx->pc = 0x34e264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e268: 0xc7a20738  lwc1        $f2, 0x738($sp)
    ctx->pc = 0x34e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e26c: 0xc7a5073c  lwc1        $f5, 0x73C($sp)
    ctx->pc = 0x34e26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34e270: 0xe7a00720  swc1        $f0, 0x720($sp)
    ctx->pc = 0x34e270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
    // 0x34e274: 0xe7a10724  swc1        $f1, 0x724($sp)
    ctx->pc = 0x34e274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1828), bits); }
    // 0x34e278: 0xe7a20728  swc1        $f2, 0x728($sp)
    ctx->pc = 0x34e278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
    // 0x34e27c: 0xe7a5072c  swc1        $f5, 0x72C($sp)
    ctx->pc = 0x34e27cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1836), bits); }
    // 0x34e280: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x34e280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e284: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x34e284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34e288: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x34e288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34e28c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34e28cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34e290: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34e290u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34e294: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x34e294u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34e298: 0x46000004  c1          0x4
    ctx->pc = 0x34e298u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34e29c: 0x3c01418f  lui         $at, 0x418F
    ctx->pc = 0x34e29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16783 << 16));
    // 0x34e2a0: 0x3421ffa2  ori         $at, $at, 0xFFA2
    ctx->pc = 0x34e2a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65442);
    // 0x34e2a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34e2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e2a8: 0x0  nop
    ctx->pc = 0x34e2a8u;
    // NOP
    // 0x34e2ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34e2acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e2b0: 0x0  nop
    ctx->pc = 0x34e2b0u;
    // NOP
    // 0x34e2b4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x34E2B4u;
    {
        const bool branch_taken_0x34e2b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E2B4u;
        // 0x34e2b8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e2b4) {
            ctx->pc = 0x34E300u;
            goto label_34e300;
        }
    }
    ctx->pc = 0x34E2BCu;
    // 0x34e2bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34e2bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34e2c0: 0x3c013de3  lui         $at, 0x3DE3
    ctx->pc = 0x34e2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15843 << 16));
    // 0x34e2c4: 0x34218ecd  ori         $at, $at, 0x8ECD
    ctx->pc = 0x34e2c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36557);
    // 0x34e2c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34e2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34e2cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34e2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34e2d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34e2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e2d4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x34e2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34e2d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x34e2d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34e2dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34e2dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34e2e0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x34e2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e2e4: 0x0  nop
    ctx->pc = 0x34e2e4u;
    // NOP
    // 0x34e2e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34E2E8u;
    {
        const bool branch_taken_0x34e2e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34e2e8) {
            ctx->pc = 0x34E2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E2E8u;
            // 0x34e2ec: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E2F0u;
            goto label_34e2f0;
        }
    }
    ctx->pc = 0x34E2F0u;
label_34e2f0:
    // 0x34e2f0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x34e2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x34e2f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34e2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34e2f8: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x34E2F8u;
    SET_GPR_U32(ctx, 31, 0x34E300u);
    ctx->pc = 0x34E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E2F8u;
    // 0x34e2fc: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x34E2F8u, 0x34E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E300u;
label_34e300:
    // 0x34e300: 0x8fa807a0  lw          $t0, 0x7A0($sp)
    ctx->pc = 0x34e300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1952)));
    // 0x34e304: 0x268d0001  addiu       $t5, $s4, 0x1
    ctx->pc = 0x34e304u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x34e308: 0x304c00ff  andi        $t4, $v0, 0xFF
    ctx->pc = 0x34e308u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34e30c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34e30cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e310: 0x25100001  addiu       $s0, $t0, 0x1
    ctx->pc = 0x34e310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x34e314: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x34e314u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x34e318: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x34e318u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x34e31c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x34e31cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x34e320: 0x27ae00f0  addiu       $t6, $sp, 0xF0
    ctx->pc = 0x34e320u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x34e324: 0x26ef000c  addiu       $t7, $s7, 0xC
    ctx->pc = 0x34e324u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
label_34e328:
    // 0x34e328: 0x2d620006  sltiu       $v0, $t3, 0x6
    ctx->pc = 0x34e328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x34e32c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x34E32Cu;
    {
        const bool branch_taken_0x34e32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E32Cu;
        // 0x34e330: 0xb5080  sll         $t2, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e32c) {
            ctx->pc = 0x34E374u;
            goto label_34e374;
        }
    }
    ctx->pc = 0x34E334u;
    // 0x34e334: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x34e334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x34e338: 0x24426650  addiu       $v0, $v0, 0x6650
    ctx->pc = 0x34e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26192));
    // 0x34e33c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x34e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x34e340: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34e340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34e344: 0x600008  jr          $v1
    ctx->pc = 0x34E344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x34E34Cu: goto label_34e34c;
            case 0x34E358u: goto label_34e358;
            case 0x34E364u: goto label_34e364;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E344u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x34E34Cu;
label_34e34c:
    // 0x34e34c: 0xafa00740  sw          $zero, 0x740($sp)
    ctx->pc = 0x34e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1856), GPR_U32(ctx, 0));
    // 0x34e350: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E350u;
    {
        const bool branch_taken_0x34e350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E350u;
        // 0x34e354: 0xafa00744  sw          $zero, 0x744($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e350) {
            ctx->pc = 0x34E374u;
            goto label_34e374;
        }
    }
    ctx->pc = 0x34E358u;
label_34e358:
    // 0x34e358: 0xe7b70740  swc1        $f23, 0x740($sp)
    ctx->pc = 0x34e358u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
    // 0x34e35c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34E35Cu;
    {
        const bool branch_taken_0x34e35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E35Cu;
        // 0x34e360: 0xe7b50744  swc1        $f21, 0x744($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e35c) {
            ctx->pc = 0x34E374u;
            goto label_34e374;
        }
    }
    ctx->pc = 0x34E364u;
label_34e364:
    // 0x34e364: 0x4618b800  add.s       $f0, $f23, $f24
    ctx->pc = 0x34e364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x34e368: 0x4614a840  add.s       $f1, $f21, $f20
    ctx->pc = 0x34e368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x34e36c: 0xe7a00740  swc1        $f0, 0x740($sp)
    ctx->pc = 0x34e36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
    // 0x34e370: 0xe7a10744  swc1        $f1, 0x744($sp)
    ctx->pc = 0x34e370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1860), bits); }
label_34e374:
    // 0x34e374: 0x2682c610  addiu       $v0, $s4, -0x39F0
    ctx->pc = 0x34e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952464));
    // 0x34e378: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x34e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x34e37c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x34e37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e380: 0xe7a00748  swc1        $f0, 0x748($sp)
    ctx->pc = 0x34e380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
    // 0x34e384: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x34e384u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x34e388: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x34e388u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34e38c: 0xda630010  lqc2        $vf3, 0x10($s3)
    ctx->pc = 0x34e38cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x34e390: 0xda640020  lqc2        $vf4, 0x20($s3)
    ctx->pc = 0x34e390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x34e394: 0xda650030  lqc2        $vf5, 0x30($s3)
    ctx->pc = 0x34e394u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x34e398: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x34e398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34e39c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x34e39cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34e3a0: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x34e3a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34e3a4: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x34e3a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e3a8: 0xfba10730  sqc2        $vf1, 0x730($sp)
    ctx->pc = 0x34e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1840), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34e3ac: 0x2eb2021  addu        $a0, $s7, $t3
    ctx->pc = 0x34e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 11)));
    // 0x34e3b0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x34e3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x34e3b4: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x34e3b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34e3b8: 0x2647c628  addiu       $a3, $s2, -0x39D8
    ctx->pc = 0x34e3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952488));
    // 0x34e3bc: 0xc7a20730  lwc1        $f2, 0x730($sp)
    ctx->pc = 0x34e3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e3c0: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x34e3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x34e3c4: 0xc7a30734  lwc1        $f3, 0x734($sp)
    ctx->pc = 0x34e3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34e3c8: 0x2626c640  addiu       $a2, $s1, -0x39C0
    ctx->pc = 0x34e3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952512));
    // 0x34e3cc: 0xc7a00738  lwc1        $f0, 0x738($sp)
    ctx->pc = 0x34e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e3d0: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x34e3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x34e3d4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x34e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x34e3d8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x34e3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e3dc: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x34e3dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3e0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x34e3e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x34e3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3e8: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x34e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x34e3ec: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x34e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x34e3f0: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x34e3f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x34e3f4: 0xe4630010  swc1        $f3, 0x10($v1)
    ctx->pc = 0x34e3f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34e3f8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34e3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34e3fc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x34e3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e400: 0xe5210060  swc1        $f1, 0x60($t1)
    ctx->pc = 0x34e400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 96), bits); }
    // 0x34e404: 0xe5000064  swc1        $f0, 0x64($t0)
    ctx->pc = 0x34e404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 100), bits); }
    // 0x34e408: 0xa04c000b  sb          $t4, 0xB($v0)
    ctx->pc = 0x34e408u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 12));
    // 0x34e40c: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x34e40cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e410: 0xa0400009  sb          $zero, 0x9($v0)
    ctx->pc = 0x34e410u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e414: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x34e414u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e418: 0xc7a00740  lwc1        $f0, 0x740($sp)
    ctx->pc = 0x34e418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e41c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34e41cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x34e420: 0xe7a00740  swc1        $f0, 0x740($sp)
    ctx->pc = 0x34e420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
    // 0x34e424: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x34e424u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x34e428: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x34e428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34e42c: 0xda630010  lqc2        $vf3, 0x10($s3)
    ctx->pc = 0x34e42cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x34e430: 0xda640020  lqc2        $vf4, 0x20($s3)
    ctx->pc = 0x34e430u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x34e434: 0xda650030  lqc2        $vf5, 0x30($s3)
    ctx->pc = 0x34e434u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x34e438: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x34e438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34e43c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x34e43cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34e440: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x34e440u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34e444: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x34e444u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e448: 0xfba10730  sqc2        $vf1, 0x730($sp)
    ctx->pc = 0x34e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1840), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34e44c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x34e44cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34e450: 0xc7a30730  lwc1        $f3, 0x730($sp)
    ctx->pc = 0x34e450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34e454: 0xc7a40734  lwc1        $f4, 0x734($sp)
    ctx->pc = 0x34e454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34e458: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x34e458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x34e45c: 0xc7a00738  lwc1        $f0, 0x738($sp)
    ctx->pc = 0x34e45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e460: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x34e460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e464: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x34e464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e468: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x34e468u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x34e46c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x34e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e470: 0x1c41021  addu        $v0, $t6, $a0
    ctx->pc = 0x34e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x34e474: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x34e474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x34e478: 0x3a43021  addu        $a2, $sp, $a0
    ctx->pc = 0x34e478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x34e47c: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x34e47cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x34e480: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x34e480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34e484: 0xe4440010  swc1        $f4, 0x10($v0)
    ctx->pc = 0x34e484u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34e488: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34e488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34e48c: 0xe4c200f0  swc1        $f2, 0xF0($a2)
    ctx->pc = 0x34e48cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 240), bits); }
    // 0x34e490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e494: 0xafa207a4  sw          $v0, 0x7A4($sp)
    ctx->pc = 0x34e494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1956), GPR_U32(ctx, 2));
    // 0x34e498: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x34e498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x34e49c: 0x29620006  slti        $v0, $t3, 0x6
    ctx->pc = 0x34e49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x34e4a0: 0xa06c000b  sb          $t4, 0xB($v1)
    ctx->pc = 0x34e4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 12));
    // 0x34e4a4: 0xa0600008  sb          $zero, 0x8($v1)
    ctx->pc = 0x34e4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e4a8: 0xa0600009  sb          $zero, 0x9($v1)
    ctx->pc = 0x34e4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e4ac: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x34E4ACu;
    {
        const bool branch_taken_0x34e4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E4ACu;
        // 0x34e4b0: 0xa060000a  sb          $zero, 0xA($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e4ac) {
            ctx->pc = 0x34E328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e328;
        }
    }
    ctx->pc = 0x34E4B4u;
    // 0x34e4b4: 0xafb007a0  sw          $s0, 0x7A0($sp)
    ctx->pc = 0x34e4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1952), GPR_U32(ctx, 16));
    // 0x34e4b8: 0x1e0b82d  daddu       $s7, $t7, $zero
    ctx->pc = 0x34e4b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_34e4bc:
    // 0x34e4bc: 0x1a0a02d  daddu       $s4, $t5, $zero
    ctx->pc = 0x34e4bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_34e4c0:
    // 0x34e4c0: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x34e4c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x34e4c4: 0x1440fd88  bnez        $v0, . + 4 + (-0x278 << 2)
    ctx->pc = 0x34E4C4u;
    {
        const bool branch_taken_0x34e4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E4C4u;
        // 0x34e4c8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e4c4) {
            ctx->pc = 0x34DAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34dae8;
        }
    }
    ctx->pc = 0x34E4CCu;
    // 0x34e4cc: 0x8fa307a4  lw          $v1, 0x7A4($sp)
    ctx->pc = 0x34e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1956)));
    // 0x34e4d0: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x34E4D0u;
    {
        const bool branch_taken_0x34e4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E4D0u;
        // 0x34e4d4: 0xdfb007b0  ld          $s0, 0x7B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e4d0) {
            ctx->pc = 0x34E5C8u;
            goto label_34e5c8;
        }
    }
    ctx->pc = 0x34E4D8u;
    // 0x34e4d8: 0xc0db198  jal         func_36C660
    ctx->pc = 0x34E4D8u;
    SET_GPR_U32(ctx, 31, 0x34E4E0u);
    ctx->pc = 0x34E4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E4D8u;
    // 0x34e4dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x34E4D8u, 0x34E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4E0u;
label_34e4e0:
    // 0x34e4e0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34e4e4: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x34E4E4u;
    SET_GPR_U32(ctx, 31, 0x34E4ECu);
    ctx->pc = 0x34E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E4E4u;
    // 0x34e4e8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x34E4E4u, 0x34E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4ECu;
label_34e4ec:
    // 0x34e4ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34e4f0: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x34E4F0u;
    SET_GPR_U32(ctx, 31, 0x34E4F8u);
    ctx->pc = 0x34E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E4F0u;
    // 0x34e4f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x34E4F0u, 0x34E4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4F8u;
label_34e4f8:
    // 0x34e4f8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x34e4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x34e4fc: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x34E4FCu;
    SET_GPR_U32(ctx, 31, 0x34E504u);
    ctx->pc = 0x34E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E4FCu;
    // 0x34e500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x34E4FCu, 0x34E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E504u;
label_34e504:
    // 0x34e504: 0x8fa407a0  lw          $a0, 0x7A0($sp)
    ctx->pc = 0x34e504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1952)));
    // 0x34e508: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x34e508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34e50c: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x34e50cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34e510: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x34E510u;
    {
        const bool branch_taken_0x34e510 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x34E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E510u;
        // 0x34e514: 0x27be006c  addiu       $fp, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e510) {
            ctx->pc = 0x34E5ACu;
            goto label_34e5ac;
        }
    }
    ctx->pc = 0x34E518u;
    // 0x34e518: 0xafa307a8  sw          $v1, 0x7A8($sp)
    ctx->pc = 0x34e518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1960), GPR_U32(ctx, 3));
    // 0x34e51c: 0x27b70070  addiu       $s7, $sp, 0x70
    ctx->pc = 0x34e51cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34e520: 0x27b60074  addiu       $s6, $sp, 0x74
    ctx->pc = 0x34e520u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x34e524: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x34e524u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34e528: 0x27b40064  addiu       $s4, $sp, 0x64
    ctx->pc = 0x34e528u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x34e52c: 0x26530006  addiu       $s3, $s2, 0x6
    ctx->pc = 0x34e52cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
label_34e530:
    // 0x34e530: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x34e530u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x34e534: 0x2610c658  addiu       $s0, $s0, -0x39A8
    ctx->pc = 0x34e534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952536));
    // 0x34e538: 0x24110017  addiu       $s1, $zero, 0x17
    ctx->pc = 0x34e538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x34e53c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC658u));
label_34e540:
    // 0x34e540: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x34e540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x34e544: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x34e544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x34e548: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x34e548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x34e54c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34e550: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x34e550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34e554: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x34e554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x34e558: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x34e558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x34e55c: 0x3c22021  addu        $a0, $fp, $v0
    ctx->pc = 0x34e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x34e560: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x34e560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x34e564: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x34e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x34e568: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x34e568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34e56c: 0xc4ad0000  lwc1        $f13, 0x0($a1)
    ctx->pc = 0x34e56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x34e570: 0xc4d00000  lwc1        $f16, 0x0($a2)
    ctx->pc = 0x34e570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x34e574: 0xc44e0000  lwc1        $f14, 0x0($v0)
    ctx->pc = 0x34e574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x34e578: 0x9067000b  lbu         $a3, 0xB($v1)
    ctx->pc = 0x34e578u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x34e57c: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x34e57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x34e580: 0x90640008  lbu         $a0, 0x8($v1)
    ctx->pc = 0x34e580u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x34e584: 0x90650009  lbu         $a1, 0x9($v1)
    ctx->pc = 0x34e584u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x34e588: 0xc0daaf0  jal         func_36ABC0
    ctx->pc = 0x34E588u;
    SET_GPR_U32(ctx, 31, 0x34E590u);
    ctx->pc = 0x34E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E588u;
    // 0x34e58c: 0x9066000a  lbu         $a2, 0xA($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ABC0u, 0x34E588u, 0x34E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E590u;
label_34e590:
    // 0x34e590: 0x623ffeb  bgezl       $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x34E590u;
    {
        const bool branch_taken_0x34e590 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x34e590) {
            ctx->pc = 0x34E594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E590u;
            // 0x34e594: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e540;
        }
    }
    ctx->pc = 0x34E598u;
    // 0x34e598: 0x8fa707a8  lw          $a3, 0x7A8($sp)
    ctx->pc = 0x34e598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1960)));
    // 0x34e59c: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x34e59cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5a0: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x34e5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x34e5a4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x34E5A4u;
    {
        const bool branch_taken_0x34e5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E5A4u;
        // 0x34e5a8: 0x26530006  addiu       $s3, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e5a4) {
            ctx->pc = 0x34E530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e530;
        }
    }
    ctx->pc = 0x34E5ACu;
label_34e5ac:
    // 0x34e5ac: 0xc0daa80  jal         func_36AA00
    ctx->pc = 0x34E5ACu;
    SET_GPR_U32(ctx, 31, 0x34E5B4u);
    ctx->pc = 0x34E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E5ACu;
    // 0x34e5b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AA00u, 0x34E5ACu, 0x34E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E5B4u;
label_34e5b4:
    // 0x34e5b4: 0xc0db20a  jal         func_36C828
    ctx->pc = 0x34E5B4u;
    SET_GPR_U32(ctx, 31, 0x34E5BCu);
    ctx->pc = 0x36C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C828u, 0x34E5B4u, 0x34E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E5BCu;
label_34e5bc:
    // 0x34e5bc: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x34E5BCu;
    SET_GPR_U32(ctx, 31, 0x34E5C4u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x34E5BCu, 0x34E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E5C4u;
label_34e5c4:
    // 0x34e5c4: 0xdfb007b0  ld          $s0, 0x7B0($sp)
    ctx->pc = 0x34e5c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1968)));
label_34e5c8:
    // 0x34e5c8: 0xdfb107b8  ld          $s1, 0x7B8($sp)
    ctx->pc = 0x34e5c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1976)));
    // 0x34e5cc: 0xdfb207c0  ld          $s2, 0x7C0($sp)
    ctx->pc = 0x34e5ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1984)));
    // 0x34e5d0: 0xdfb307c8  ld          $s3, 0x7C8($sp)
    ctx->pc = 0x34e5d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1992)));
    // 0x34e5d4: 0xdfb407d0  ld          $s4, 0x7D0($sp)
    ctx->pc = 0x34e5d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 2000)));
    // 0x34e5d8: 0xdfb507d8  ld          $s5, 0x7D8($sp)
    ctx->pc = 0x34e5d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 2008)));
    // 0x34e5dc: 0xdfb607e0  ld          $s6, 0x7E0($sp)
    ctx->pc = 0x34e5dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 2016)));
    // 0x34e5e0: 0xdfb707e8  ld          $s7, 0x7E8($sp)
    ctx->pc = 0x34e5e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 2024)));
    // 0x34e5e4: 0xdfbe07f0  ld          $fp, 0x7F0($sp)
    ctx->pc = 0x34e5e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 2032)));
    // 0x34e5e8: 0xdfbf07f8  ld          $ra, 0x7F8($sp)
    ctx->pc = 0x34e5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2040)));
    // 0x34e5ec: 0xc7b80820  lwc1        $f24, 0x820($sp)
    ctx->pc = 0x34e5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34e5f0: 0xc7b70818  lwc1        $f23, 0x818($sp)
    ctx->pc = 0x34e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34e5f4: 0xc7b60810  lwc1        $f22, 0x810($sp)
    ctx->pc = 0x34e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34e5f8: 0xc7b50808  lwc1        $f21, 0x808($sp)
    ctx->pc = 0x34e5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34e5fc: 0xc7b40800  lwc1        $f20, 0x800($sp)
    ctx->pc = 0x34e5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34e600: 0x3e00008  jr          $ra
    ctx->pc = 0x34E600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E600u;
        // 0x34e604: 0x27bd0830  addiu       $sp, $sp, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E608u;
}
