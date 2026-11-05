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

// Function: sub_002BCD80
// Address: 0x2bcd80 - 0x2bcf28
void sub_002BCD80_0x2bcd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCD80_0x2bcd80");
#endif

    switch (ctx->pc) {
        case 0x2bcdc8u: goto label_2bcdc8;
        case 0x2bcdd0u: goto label_2bcdd0;
        case 0x2bcdd8u: goto label_2bcdd8;
        case 0x2bcde0u: goto label_2bcde0;
        case 0x2bce08u: goto label_2bce08;
        case 0x2bce10u: goto label_2bce10;
        case 0x2bce18u: goto label_2bce18;
        case 0x2bce20u: goto label_2bce20;
        case 0x2bce2cu: goto label_2bce2c;
        case 0x2bcea8u: goto label_2bcea8;
        case 0x2bceb4u: goto label_2bceb4;
        case 0x2bcec4u: goto label_2bcec4;
        case 0x2bced8u: goto label_2bced8;
        case 0x2bcef8u: goto label_2bcef8;
        default: break;
    }

    ctx->pc = 0x2bcd80u;

    // 0x2bcd80: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2bcd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2bcd84: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x2bcd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x2bcd88: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x2bcd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x2bcd8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bcd8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd90: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x2bcd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x2bcd94: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bcd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bcd98: 0xffb50198  sd          $s5, 0x198($sp)
    ctx->pc = 0x2bcd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 21));
    // 0x2bcd9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bcd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcda0: 0xffb601a0  sd          $s6, 0x1A0($sp)
    ctx->pc = 0x2bcda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 22));
    // 0x2bcda4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2bcda4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcda8: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2bcda8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2bcdac: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2bcdacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcdb0: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x2bcdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x2bcdb4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2bcdb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcdb8: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x2bcdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
    // 0x2bcdbc: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x2bcdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x2bcdc0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCDC0u;
    SET_GPR_U32(ctx, 31, 0x2BCDC8u);
    ctx->pc = 0x2BCDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDC0u;
    // 0x2bcdc4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCDC0u, 0x2BCDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDC8u;
label_2bcdc8:
    // 0x2bcdc8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCDC8u;
    SET_GPR_U32(ctx, 31, 0x2BCDD0u);
    ctx->pc = 0x2BCDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDC8u;
    // 0x2bcdcc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCDC8u, 0x2BCDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDD0u;
label_2bcdd0:
    // 0x2bcdd0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCDD0u;
    SET_GPR_U32(ctx, 31, 0x2BCDD8u);
    ctx->pc = 0x2BCDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDD0u;
    // 0x2bcdd4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCDD0u, 0x2BCDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDD8u;
label_2bcdd8:
    // 0x2bcdd8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCDD8u;
    SET_GPR_U32(ctx, 31, 0x2BCDE0u);
    ctx->pc = 0x2BCDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDD8u;
    // 0x2bcddc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCDD8u, 0x2BCDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDE0u;
label_2bcde0:
    // 0x2bcde0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2bcde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bcde4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bcde4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcde8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bcde8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bcdec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2bcdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bcdf0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2bcdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bcdf4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2bcdf4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2bcdf8: 0xc44e000c  lwc1        $f14, 0xC($v0)
    ctx->pc = 0x2bcdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2bcdfc: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x2bcdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2bce00: 0xc0af91a  jal         func_2BE468
    ctx->pc = 0x2BCE00u;
    SET_GPR_U32(ctx, 31, 0x2BCE08u);
    ctx->pc = 0x2BCE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCE00u;
    // 0x2bce04: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE468u, 0x2BCE00u, 0x2BCE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE08u;
label_2bce08:
    // 0x2bce08: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BCE08u;
    SET_GPR_U32(ctx, 31, 0x2BCE10u);
    ctx->pc = 0x2BCE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCE08u;
    // 0x2bce0c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BCE08u, 0x2BCE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE10u;
label_2bce10:
    // 0x2bce10: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BCE10u;
    SET_GPR_U32(ctx, 31, 0x2BCE18u);
    ctx->pc = 0x2BCE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCE10u;
    // 0x2bce14: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BCE10u, 0x2BCE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE18u;
label_2bce18:
    // 0x2bce18: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BCE18u;
    SET_GPR_U32(ctx, 31, 0x2BCE20u);
    ctx->pc = 0x2BCE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCE18u;
    // 0x2bce1c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BCE18u, 0x2BCE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE20u;
label_2bce20:
    // 0x2bce20: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x2bce20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bce24: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BCE24u;
    SET_GPR_U32(ctx, 31, 0x2BCE2Cu);
    ctx->pc = 0x2BCE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCE24u;
    // 0x2bce28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BCE24u, 0x2BCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE2Cu;
label_2bce2c:
    // 0x2bce2c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2bce2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bce30: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x2bce30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bce34: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2bce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2bce38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bce38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bce3c: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x2bce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bce40: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2bce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2bce44: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bce44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bce48: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2bce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bce4c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2bce4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2bce50: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2bce50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bce54: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2bce54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bce58: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2bce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bce5c: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2bce5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2bce60: 0x14c0000e  bnez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2BCE60u;
    {
        const bool branch_taken_0x2bce60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BCE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE60u;
        // 0x2bce64: 0x27b000b0  addiu       $s0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce60) {
            ctx->pc = 0x2BCE9Cu;
            goto label_2bce9c;
        }
    }
    ctx->pc = 0x2BCE68u;
    // 0x2bce68: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2bce68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bce6c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2bce6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bce70: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2bce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2bce74: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bce74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bce78: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2bce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bce7c: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x2bce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2bce80: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bce80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bce84: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2bce84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bce88: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x2bce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2bce8c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bce8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bce90: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x2bce90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bce94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BCE94u;
    {
        const bool branch_taken_0x2bce94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE94u;
        // 0x2bce98: 0x27b300b0  addiu       $s3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce94) {
            ctx->pc = 0x2BCEACu;
            goto label_2bceac;
        }
    }
    ctx->pc = 0x2BCE9Cu;
label_2bce9c:
    // 0x2bce9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bce9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcea0: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2BCEA0u;
    SET_GPR_U32(ctx, 31, 0x2BCEA8u);
    ctx->pc = 0x2BCEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCEA0u;
    // 0x2bcea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2BCEA0u, 0x2BCEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCEA8u;
label_2bcea8:
    // 0x2bcea8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2bcea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bceac:
    // 0x2bceac: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BCEACu;
    SET_GPR_U32(ctx, 31, 0x2BCEB4u);
    ctx->pc = 0x2BCEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCEACu;
    // 0x2bceb0: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BCEACu, 0x2BCEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCEB4u;
label_2bceb4:
    // 0x2bceb4: 0x27b00130  addiu       $s0, $sp, 0x130
    ctx->pc = 0x2bceb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2bceb8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2bceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bcebc: 0xc0b0cc4  jal         func_2C3310
    ctx->pc = 0x2BCEBCu;
    SET_GPR_U32(ctx, 31, 0x2BCEC4u);
    ctx->pc = 0x2BCEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCEBCu;
    // 0x2bcec0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3310u, 0x2BCEBCu, 0x2BCEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCEC4u;
label_2bcec4:
    // 0x2bcec4: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x2bcec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bcec8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bcec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcecc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bceccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bced0: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2BCED0u;
    SET_GPR_U32(ctx, 31, 0x2BCED8u);
    ctx->pc = 0x2BCED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCED0u;
    // 0x2bced4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2BCED0u, 0x2BCED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCED8u;
label_2bced8:
    // 0x2bced8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bced8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcedc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bcedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcee0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2bcee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcee4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bcee4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bcee8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2bcee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bceec: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2bceecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcef0: 0xc0af4ca  jal         func_2BD328
    ctx->pc = 0x2BCEF0u;
    SET_GPR_U32(ctx, 31, 0x2BCEF8u);
    ctx->pc = 0x2BCEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCEF0u;
    // 0x2bcef4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD328u, 0x2BCEF0u, 0x2BCEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCEF8u;
label_2bcef8:
    // 0x2bcef8: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x2bcef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bcefc: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x2bcefcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2bcf00: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x2bcf00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bcf04: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x2bcf04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2bcf08: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x2bcf08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2bcf0c: 0xdfb50198  ld          $s5, 0x198($sp)
    ctx->pc = 0x2bcf0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2bcf10: 0xdfb601a0  ld          $s6, 0x1A0($sp)
    ctx->pc = 0x2bcf10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2bcf14: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x2bcf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2bcf18: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2bcf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bcf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF1Cu;
        // 0x2bcf20: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCF24u;
    // 0x2bcf24: 0x0  nop
    ctx->pc = 0x2bcf24u;
    // NOP
    ctx->pc = 0x2bcf28u;
}
