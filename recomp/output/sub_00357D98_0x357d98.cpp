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

// Function: sub_00357D98
// Address: 0x357d98 - 0x358098
void sub_00357D98_0x357d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357D98_0x357d98");
#endif

    switch (ctx->pc) {
        case 0x357e10u: goto label_357e10;
        case 0x357e2cu: goto label_357e2c;
        case 0x358074u: goto label_358074;
        case 0x358084u: goto label_358084;
        default: break;
    }

    ctx->pc = 0x357d98u;

    // 0x357d98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x357d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x357d9c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x357d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x357da0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x357da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x357da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357da8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x357da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x357dac: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x357dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x357db0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x357DB0u;
    {
        const bool branch_taken_0x357db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357DB0u;
        // 0x357db4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357db0) {
            ctx->pc = 0x357E7Cu;
            goto label_357e7c;
        }
    }
    ctx->pc = 0x357DB8u;
    // 0x357db8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x357db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x357dbc: 0x24426b10  addiu       $v0, $v0, 0x6B10
    ctx->pc = 0x357dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27408));
    // 0x357dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x357dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x357dc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x357dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x357dc8: 0x800008  jr          $a0
    ctx->pc = 0x357DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x357DD0u: goto label_357dd0;
            case 0x357E20u: goto label_357e20;
            case 0x357E3Cu: goto label_357e3c;
            case 0x357E78u: goto label_357e78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357DC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x357DD0u;
label_357dd0:
    // 0x357dd0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x357dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x357dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357dd8: 0x8c46bd50  lw          $a2, -0x42B0($v0)
    ctx->pc = 0x357dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x357ddc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x357ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357de0: 0x8cc20104  lw          $v0, 0x104($a2)
    ctx->pc = 0x357de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x357de4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x357de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357de8: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x357de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357dec: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x357decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x357df0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x357df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x357df4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x357df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357df8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x357df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x357dfc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x357dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357e00: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x357e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x357e04: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x357e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357e08: 0xc0d60f8  jal         func_3583E0
    ctx->pc = 0x357E08u;
    SET_GPR_U32(ctx, 31, 0x357E10u);
    ctx->pc = 0x357E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357E08u;
    // 0x357e0c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3583E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3583E0u, 0x357E08u, 0x357E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E10u;
label_357e10:
    // 0x357e10: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x357E10u;
    {
        const bool branch_taken_0x357e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E10u;
        // 0x357e14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e10) {
            ctx->pc = 0x357E78u;
            goto label_357e78;
        }
    }
    ctx->pc = 0x357E18u;
    // 0x357e18: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x357E18u;
    {
        const bool branch_taken_0x357e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E18u;
        // 0x357e1c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e18) {
            ctx->pc = 0x357E78u;
            goto label_357e78;
        }
    }
    ctx->pc = 0x357E20u;
label_357e20:
    // 0x357e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e24: 0xc0d60f8  jal         func_3583E0
    ctx->pc = 0x357E24u;
    SET_GPR_U32(ctx, 31, 0x357E2Cu);
    ctx->pc = 0x357E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357E24u;
    // 0x357e28: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3583E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3583E0u, 0x357E24u, 0x357E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E2Cu;
label_357e2c:
    // 0x357e2c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x357E2Cu;
    {
        const bool branch_taken_0x357e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E2Cu;
        // 0x357e30: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e2c) {
            ctx->pc = 0x357E78u;
            goto label_357e78;
        }
    }
    ctx->pc = 0x357E34u;
    // 0x357e34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x357E34u;
    {
        const bool branch_taken_0x357e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E34u;
        // 0x357e38: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e34) {
            ctx->pc = 0x357E78u;
            goto label_357e78;
        }
    }
    ctx->pc = 0x357E3Cu;
label_357e3c:
    // 0x357e3c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x357e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x357e40: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x357e40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x357e44: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x357e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x357e48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x357e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x357e4c: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x357e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357e50: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x357e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x357e54: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x357e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x357e58: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x357e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357e5c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x357e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x357e60: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x357e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357e64: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x357e64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x357e68: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x357e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357e6c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x357e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x357e70: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x357e70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357e74: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x357e74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_357e78:
    // 0x357e78: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x357e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_357e7c:
    // 0x357e7c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x357e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x357e80: 0x50400081  beql        $v0, $zero, . + 4 + (0x81 << 2)
    ctx->pc = 0x357E80u;
    {
        const bool branch_taken_0x357e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357e80) {
            ctx->pc = 0x357E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357E80u;
            // 0x357e84: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358088u;
            goto label_358088;
        }
    }
    ctx->pc = 0x357E88u;
    // 0x357e88: 0x5860007f  blezl       $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x357E88u;
    {
        const bool branch_taken_0x357e88 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x357e88) {
            ctx->pc = 0x357E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357E88u;
            // 0x357e8c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358088u;
            goto label_358088;
        }
    }
    ctx->pc = 0x357E90u;
    // 0x357e90: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x357e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x357e94: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x357E94u;
    {
        const bool branch_taken_0x357e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E94u;
        // 0x357e98: 0x26030040  addiu       $v1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e94) {
            ctx->pc = 0x358074u;
            goto label_358074;
        }
    }
    ctx->pc = 0x357E9Cu;
    // 0x357e9c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x357e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x357ea0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x357ea0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x357ea4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x357ea4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357ea8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x357ea8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x357eac: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x357eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x357eb0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x357eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x357eb4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x357eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x357eb8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x357eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357ebc: 0x24445b30  addiu       $a0, $v0, 0x5B30
    ctx->pc = 0x357ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
    // 0x357ec0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x357ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357ec4: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x357ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x357ec8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x357ec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x357ecc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x357eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x357ed0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x357ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x357ed4: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x357ed4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x357ed8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x357ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x357edc: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x357edcu;
    { uint32_t bits = FAST_READ32(0x575B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x357ee0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x357ee0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x357ee4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x357ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x357ee8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x357ee8u;
    { uint32_t bits = FAST_READ32(0x575B34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x357eec: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x357eecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x357ef0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x357ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x357ef4: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x357ef4u;
    { uint32_t bits = FAST_READ32(0x575B38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x357ef8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x357ef8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x357efc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x357efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x357f00: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x357f00u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x357f04: 0x24425b50  addiu       $v0, $v0, 0x5B50
    ctx->pc = 0x357f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23376));
    // 0x357f08: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x357f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x357f0c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x357f0cu;
    { uint32_t bits = FAST_READ32(0x575B50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x357f10: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x357f10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x357f14: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x357f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x357f18: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x357f18u;
    { uint32_t bits = FAST_READ32(0x575B54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x357f1c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x357f1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x357f20: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x357f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x357f24: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x357f24u;
    { uint32_t bits = FAST_READ32(0x575B58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x357f28: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x357f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x357f2c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x357f2cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x357f30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x357f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x357f34: 0x0  nop
    ctx->pc = 0x357f34u;
    // NOP
    // 0x357f38: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x357F38u;
    {
        const bool branch_taken_0x357f38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x357F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F38u;
        // 0x357f3c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f38) {
            ctx->pc = 0x357F44u;
            goto label_357f44;
        }
    }
    ctx->pc = 0x357F40u;
    // 0x357f40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x357f40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357f44:
    // 0x357f44: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x357F44u;
    {
        const bool branch_taken_0x357f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x357f44) {
            ctx->pc = 0x357F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357F44u;
            // 0x357f48: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357F4Cu;
            goto label_357f4c;
        }
    }
    ctx->pc = 0x357F4Cu;
label_357f4c:
    // 0x357f4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x357f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357f50: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x357f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x357f54: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x357f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357f58: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x357f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x357f5c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x357f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357f60: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x357f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x357f64: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x357f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357f68: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x357f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x357f6c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x357f6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357f70: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x357f70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x357f74: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x357f74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x357f78: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x357f78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x357f7c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x357f7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x357f80: 0x4a0003bf  vwaitq
    ctx->pc = 0x357f80u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x357f84: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x357f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x357f88: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x357f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x357f8c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x357f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x357f90: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x357f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x357f94: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x357f94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357f98: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x357f98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357f9c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x357f9cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x357fa0: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x357fa0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x357fa4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x357fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x357fa8: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x357fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x357fac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x357facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x357fb0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x357fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357fb4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x357fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357fb8: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x357fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x357fbc: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x357fbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x357fc0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x357fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x357fc4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x357fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x357fc8: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x357fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x357fcc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x357fccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x357fd0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x357fd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x357fd4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x357fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x357fd8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x357fd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x357fdc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x357fdcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x357fe0: 0x4a0003bf  vwaitq
    ctx->pc = 0x357fe0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x357fe4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x357fe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x357fe8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x357fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x357fec: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x357fecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357ff0: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x357ff0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x357ff4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x357ff4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x357ff8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x357ff8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x357ffc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x357ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x358000: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x358000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358004: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x358004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358008: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x358008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35800c: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x35800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358010: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x358010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x358014: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x358014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x358018: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x358018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x35801c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x35801cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x358020: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x358020u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x358024: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x358024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x358028: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x358028u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35802c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35802cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x358030: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x358030u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x358034: 0x4a0003bf  vwaitq
    ctx->pc = 0x358034u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x358038: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x358038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35803c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x35803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x358040: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x358040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x358044: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x358044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x358048: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x358048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35804c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x35804cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x358050: 0xf8410060  sqc2        $vf1, 0x60($v0)
    ctx->pc = 0x358050u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x358054: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x358054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x358058: 0xf8410050  sqc2        $vf1, 0x50($v0)
    ctx->pc = 0x358058u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35805c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x35805cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358060: 0xf8410040  sqc2        $vf1, 0x40($v0)
    ctx->pc = 0x358060u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x358064: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x358064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x358068: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x358068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x35806c: 0xc0c48da  jal         func_312368
    ctx->pc = 0x35806Cu;
    SET_GPR_U32(ctx, 31, 0x358074u);
    ctx->pc = 0x358070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35806Cu;
    // 0x358070: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x35806Cu, 0x358074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358074u;
label_358074:
    // 0x358074: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x358074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x358078: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35807c: 0xc08961e  jal         func_225878
    ctx->pc = 0x35807Cu;
    SET_GPR_U32(ctx, 31, 0x358084u);
    ctx->pc = 0x358080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35807Cu;
    // 0x358080: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225878u, 0x35807Cu, 0x358084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358084u;
label_358084:
    // 0x358084: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x358084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_358088:
    // 0x358088: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x358088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35808c: 0x3e00008  jr          $ra
    ctx->pc = 0x35808Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35808Cu;
        // 0x358090: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35808Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358094u;
    // 0x358094: 0x0  nop
    ctx->pc = 0x358094u;
    // NOP
    ctx->pc = 0x358098u;
}
