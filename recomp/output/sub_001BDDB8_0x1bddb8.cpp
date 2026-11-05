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

// Function: sub_001BDDB8
// Address: 0x1bddb8 - 0x1bde80
void sub_001BDDB8_0x1bddb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDDB8_0x1bddb8");
#endif

    switch (ctx->pc) {
        case 0x1bddb8u: goto label_1bddb8;
        case 0x1bddbcu: goto label_1bddbc;
        case 0x1bddc0u: goto label_1bddc0;
        case 0x1bddc4u: goto label_1bddc4;
        case 0x1bddc8u: goto label_1bddc8;
        case 0x1bddccu: goto label_1bddcc;
        case 0x1bddd0u: goto label_1bddd0;
        case 0x1bddd4u: goto label_1bddd4;
        case 0x1bddd8u: goto label_1bddd8;
        case 0x1bdddcu: goto label_1bdddc;
        case 0x1bdde0u: goto label_1bdde0;
        case 0x1bdde4u: goto label_1bdde4;
        case 0x1bdde8u: goto label_1bdde8;
        case 0x1bddecu: goto label_1bddec;
        case 0x1bddf0u: goto label_1bddf0;
        case 0x1bddf4u: goto label_1bddf4;
        case 0x1bddf8u: goto label_1bddf8;
        case 0x1bddfcu: goto label_1bddfc;
        case 0x1bde00u: goto label_1bde00;
        case 0x1bde04u: goto label_1bde04;
        case 0x1bde08u: goto label_1bde08;
        case 0x1bde0cu: goto label_1bde0c;
        case 0x1bde10u: goto label_1bde10;
        case 0x1bde14u: goto label_1bde14;
        case 0x1bde18u: goto label_1bde18;
        case 0x1bde1cu: goto label_1bde1c;
        case 0x1bde20u: goto label_1bde20;
        case 0x1bde24u: goto label_1bde24;
        case 0x1bde28u: goto label_1bde28;
        case 0x1bde2cu: goto label_1bde2c;
        case 0x1bde30u: goto label_1bde30;
        case 0x1bde34u: goto label_1bde34;
        case 0x1bde38u: goto label_1bde38;
        case 0x1bde3cu: goto label_1bde3c;
        case 0x1bde40u: goto label_1bde40;
        case 0x1bde44u: goto label_1bde44;
        case 0x1bde48u: goto label_1bde48;
        case 0x1bde4cu: goto label_1bde4c;
        case 0x1bde50u: goto label_1bde50;
        case 0x1bde54u: goto label_1bde54;
        case 0x1bde58u: goto label_1bde58;
        case 0x1bde5cu: goto label_1bde5c;
        case 0x1bde60u: goto label_1bde60;
        case 0x1bde64u: goto label_1bde64;
        case 0x1bde68u: goto label_1bde68;
        case 0x1bde6cu: goto label_1bde6c;
        case 0x1bde70u: goto label_1bde70;
        case 0x1bde74u: goto label_1bde74;
        case 0x1bde78u: goto label_1bde78;
        case 0x1bde7cu: goto label_1bde7c;
        default: break;
    }

    ctx->pc = 0x1bddb8u;

label_1bddb8:
    // 0x1bddb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bddb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bddbc:
    // 0x1bddbc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1bddc0:
    // 0x1bddc0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bddc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1bddc4:
    // 0x1bddc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bddc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bddc8:
    // 0x1bddc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1bddcc:
    // 0x1bddcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bddccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bddd0:
    // 0x1bddd0: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x1bddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1bddd4:
    // 0x1bddd4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1bddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1bddd8:
    // 0x1bddd8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1bddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1bdddc:
    // 0x1bdddc: 0x50430024  beql        $v0, $v1, . + 4 + (0x24 << 2)
label_1bdde0:
    if (ctx->pc == 0x1BDDE0u) {
        ctx->pc = 0x1BDDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDDCu;
        // 0x1bdde0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDDE4u;
        goto label_1bdde4;
    }
    ctx->pc = 0x1BDDDCu;
    {
        const bool branch_taken_0x1bdddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bdddc) {
            ctx->pc = 0x1BDDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDDDCu;
            // 0x1bdde0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDE70u;
            goto label_1bde70;
        }
    }
    ctx->pc = 0x1BDDE4u;
label_1bdde4:
    // 0x1bdde4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1bdde4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1bdde8:
    // 0x1bdde8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1bdde8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1bddec:
    // 0x1bddec: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1bddecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1bddf0:
    // 0x1bddf0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1bddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bddf4:
    // 0x1bddf4: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1bddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1bddf8:
    // 0x1bddf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bddf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bddfc:
    // 0x1bddfc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1bddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bde00:
    // 0x1bde00: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1bde00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bde04:
    // 0x1bde04: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1bde04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bde08:
    // 0x1bde08: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1bde08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1bde0c:
    // 0x1bde0c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1bde0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1bde10:
    // 0x1bde10: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1bde10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1bde14:
    // 0x1bde14: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1bde14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1bde18:
    // 0x1bde18: 0xc0414d6  jal         func_105358
label_1bde1c:
    if (ctx->pc == 0x1BDE1Cu) {
        ctx->pc = 0x1BDE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE18u;
        // 0x1bde1c: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE20u;
        goto label_1bde20;
    }
    ctx->pc = 0x1BDE18u;
    SET_GPR_U32(ctx, 31, 0x1BDE20u);
    ctx->pc = 0x1BDE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE18u;
    // 0x1bde1c: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x1BDE18u, 0x1BDE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE20u;
label_1bde20:
    // 0x1bde20: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_1bde24:
    if (ctx->pc == 0x1BDE24u) {
        ctx->pc = 0x1BDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE20u;
        // 0x1bde24: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE28u;
        goto label_1bde28;
    }
    ctx->pc = 0x1BDE20u;
    {
        const bool branch_taken_0x1bde20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bde20) {
            ctx->pc = 0x1BDE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDE20u;
            // 0x1bde24: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDE70u;
            goto label_1bde70;
        }
    }
    ctx->pc = 0x1BDE28u;
label_1bde28:
    // 0x1bde28: 0x7e000300  sq          $zero, 0x300($s0)
    ctx->pc = 0x1bde28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 768), GPR_VEC(ctx, 0));
label_1bde2c:
    // 0x1bde2c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1bde2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_1bde30:
    // 0x1bde30: 0xc06fb58  jal         func_1BED60
label_1bde34:
    if (ctx->pc == 0x1BDE34u) {
        ctx->pc = 0x1BDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE30u;
        // 0x1bde34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE38u;
        goto label_1bde38;
    }
    ctx->pc = 0x1BDE30u;
    SET_GPR_U32(ctx, 31, 0x1BDE38u);
    ctx->pc = 0x1BDE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE30u;
    // 0x1bde34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BDE30u, 0x1BDE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE38u;
label_1bde38:
    // 0x1bde38: 0xc06fc34  jal         func_1BF0D0
label_1bde3c:
    if (ctx->pc == 0x1BDE3Cu) {
        ctx->pc = 0x1BDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE38u;
        // 0x1bde3c: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE40u;
        goto label_1bde40;
    }
    ctx->pc = 0x1BDE38u;
    SET_GPR_U32(ctx, 31, 0x1BDE40u);
    ctx->pc = 0x1BDE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE38u;
    // 0x1bde3c: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BDE38u, 0x1BDE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE40u;
label_1bde40:
    // 0x1bde40: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x1bde40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1bde44:
    // 0x1bde44: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bde44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1bde48:
    // 0x1bde48: 0x40f809  jalr        $v0
label_1bde4c:
    if (ctx->pc == 0x1BDE4Cu) {
        ctx->pc = 0x1BDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE48u;
        // 0x1bde4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE50u;
        goto label_1bde50;
    }
    ctx->pc = 0x1BDE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDE50u);
        ctx->pc = 0x1BDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE48u;
        // 0x1bde4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDE48u, 0x1BDE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDE50u;
label_1bde50:
    // 0x1bde50: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1bde54:
    if (ctx->pc == 0x1BDE54u) {
        ctx->pc = 0x1BDE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE50u;
        // 0x1bde54: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE58u;
        goto label_1bde58;
    }
    ctx->pc = 0x1BDE50u;
    {
        const bool branch_taken_0x1bde50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde50) {
            ctx->pc = 0x1BDE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDE50u;
            // 0x1bde54: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDE70u;
            goto label_1bde70;
        }
    }
    ctx->pc = 0x1BDE58u;
label_1bde58:
    // 0x1bde58: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x1bde58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_1bde5c:
    // 0x1bde5c: 0xc06fb58  jal         func_1BED60
label_1bde60:
    if (ctx->pc == 0x1BDE60u) {
        ctx->pc = 0x1BDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE5Cu;
        // 0x1bde60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE64u;
        goto label_1bde64;
    }
    ctx->pc = 0x1BDE5Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE64u);
    ctx->pc = 0x1BDE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE5Cu;
    // 0x1bde60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BDE5Cu, 0x1BDE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE64u;
label_1bde64:
    // 0x1bde64: 0xc06fc34  jal         func_1BF0D0
label_1bde68:
    if (ctx->pc == 0x1BDE68u) {
        ctx->pc = 0x1BDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE64u;
        // 0x1bde68: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE6Cu;
        goto label_1bde6c;
    }
    ctx->pc = 0x1BDE64u;
    SET_GPR_U32(ctx, 31, 0x1BDE6Cu);
    ctx->pc = 0x1BDE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE64u;
    // 0x1bde68: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BDE64u, 0x1BDE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE6Cu;
label_1bde6c:
    // 0x1bde6c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bde6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bde70:
    // 0x1bde70: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bde70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bde74:
    // 0x1bde74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bde74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bde78:
    // 0x1bde78: 0x3e00008  jr          $ra
label_1bde7c:
    if (ctx->pc == 0x1BDE7Cu) {
        ctx->pc = 0x1BDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE78u;
        // 0x1bde7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE80u;
        goto label_fallthrough_0x1bde78;
    }
    ctx->pc = 0x1BDE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE78u;
        // 0x1bde7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bde78:
    ctx->pc = 0x1BDE80u;
}
