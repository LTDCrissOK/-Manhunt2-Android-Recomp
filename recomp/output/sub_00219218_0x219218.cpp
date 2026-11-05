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

// Function: sub_00219218
// Address: 0x219218 - 0x2193c0
void sub_00219218_0x219218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219218_0x219218");
#endif

    switch (ctx->pc) {
        case 0x219244u: goto label_219244;
        case 0x21924cu: goto label_21924c;
        case 0x219258u: goto label_219258;
        case 0x2192a8u: goto label_2192a8;
        case 0x2192b4u: goto label_2192b4;
        case 0x2192bcu: goto label_2192bc;
        case 0x2192d0u: goto label_2192d0;
        case 0x2192ecu: goto label_2192ec;
        case 0x2192f4u: goto label_2192f4;
        case 0x219300u: goto label_219300;
        case 0x219308u: goto label_219308;
        case 0x219310u: goto label_219310;
        case 0x219374u: goto label_219374;
        case 0x219388u: goto label_219388;
        case 0x219390u: goto label_219390;
        case 0x219398u: goto label_219398;
        case 0x2193a0u: goto label_2193a0;
        default: break;
    }

    ctx->pc = 0x219218u;

    // 0x219218: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x219218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21921c: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x21921cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x219220: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x219220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219224: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x219224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x219228: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x219228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21922c: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x21922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x219230: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x219230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x219234: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x219234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x219238: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x219238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x21923c: 0xc0860b4  jal         func_2182D0
    ctx->pc = 0x21923Cu;
    SET_GPR_U32(ctx, 31, 0x219244u);
    ctx->pc = 0x219240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21923Cu;
    // 0x219240: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2182D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2182D0u, 0x21923Cu, 0x219244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219244u;
label_219244:
    // 0x219244: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x219244u;
    SET_GPR_U32(ctx, 31, 0x21924Cu);
    ctx->pc = 0x219248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219244u;
    // 0x219248: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x219244u, 0x21924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21924Cu;
label_21924c:
    // 0x21924c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21924cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219250: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x219250u;
    SET_GPR_U32(ctx, 31, 0x219258u);
    ctx->pc = 0x219254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219250u;
    // 0x219254: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x219250u, 0x219258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219258u;
label_219258:
    // 0x219258: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x219258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21925c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x21925cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x219260: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x219260u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219264: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x219264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x219268: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x219268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x21926c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x21926cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x219270: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x219270u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x219274: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x219274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x219278: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x219278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21927c: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x21927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x219280: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x219280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219284: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x219284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219288: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x219288u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21928c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21928cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x219290: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x219290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x219294: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x219294u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x219298: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x219298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21929c: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x21929cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2192a0: 0xc0734c6  jal         func_1CD318
    ctx->pc = 0x2192A0u;
    SET_GPR_U32(ctx, 31, 0x2192A8u);
    ctx->pc = 0x2192A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192A0u;
    // 0x2192a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD318u, 0x2192A0u, 0x2192A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192A8u;
label_2192a8:
    // 0x2192a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2192a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2192ac: 0xc0860cc  jal         func_218330
    ctx->pc = 0x2192ACu;
    SET_GPR_U32(ctx, 31, 0x2192B4u);
    ctx->pc = 0x2192B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192ACu;
    // 0x2192b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218330u, 0x2192ACu, 0x2192B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192B4u;
label_2192b4:
    // 0x2192b4: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x2192B4u;
    SET_GPR_U32(ctx, 31, 0x2192BCu);
    ctx->pc = 0x2192B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192B4u;
    // 0x2192b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x2192B4u, 0x2192BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192BCu;
label_2192bc:
    // 0x2192bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2192bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192c0: 0x1a60002f  blez        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x2192C0u;
    {
        const bool branch_taken_0x2192c0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2192C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192C0u;
        // 0x2192c4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192c0) {
            ctx->pc = 0x219380u;
            goto label_219380;
        }
    }
    ctx->pc = 0x2192C8u;
    // 0x2192c8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2192C8u;
    SET_GPR_U32(ctx, 31, 0x2192D0u);
    ctx->pc = 0x2192CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192C8u;
    // 0x2192cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2192C8u, 0x2192D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192D0u;
label_2192d0:
    // 0x2192d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2192d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2192d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2192d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192dc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2192dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2192e0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2192e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2192e4: 0xc0795c6  jal         func_1E5718
    ctx->pc = 0x2192E4u;
    SET_GPR_U32(ctx, 31, 0x2192ECu);
    ctx->pc = 0x2192E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192E4u;
    // 0x2192e8: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5718u, 0x2192E4u, 0x2192ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192ECu;
label_2192ec:
    // 0x2192ec: 0xc0734ca  jal         func_1CD328
    ctx->pc = 0x2192ECu;
    SET_GPR_U32(ctx, 31, 0x2192F4u);
    ctx->pc = 0x2192F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192ECu;
    // 0x2192f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD328u, 0x2192ECu, 0x2192F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2192F4u;
label_2192f4:
    // 0x2192f4: 0x1a600022  blez        $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x2192F4u;
    {
        const bool branch_taken_0x2192f4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2192F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192F4u;
        // 0x2192f8: 0x27b40080  addiu       $s4, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192f4) {
            ctx->pc = 0x219380u;
            goto label_219380;
        }
    }
    ctx->pc = 0x2192FCu;
    // 0x2192fc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2192fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_219300:
    // 0x219300: 0xc0860b4  jal         func_2182D0
    ctx->pc = 0x219300u;
    SET_GPR_U32(ctx, 31, 0x219308u);
    ctx->pc = 0x219304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219300u;
    // 0x219304: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2182D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2182D0u, 0x219300u, 0x219308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219308u;
label_219308:
    // 0x219308: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x219308u;
    SET_GPR_U32(ctx, 31, 0x219310u);
    ctx->pc = 0x21930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219308u;
    // 0x21930c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x219308u, 0x219310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219310u;
label_219310:
    // 0x219310: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x219310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x219314: 0x102940  sll         $a1, $s0, 5
    ctx->pc = 0x219314u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x219318: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x219318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21931c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x21931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219320: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x219320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x219324: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x219324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x219328: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x219328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21932c: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x21932cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x219330: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x219330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x219334: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x219334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x219338: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x219338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x21933c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x21933cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x219340: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x219340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x219344: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x219344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x219348: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x219348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21934c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x21934cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219350: 0x90a20010  lbu         $v0, 0x10($a1)
    ctx->pc = 0x219350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x219354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219358: 0x93a30090  lbu         $v1, 0x90($sp)
    ctx->pc = 0x219358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21935c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21935cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x219360: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x219360u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x219364: 0xa0a30010  sb          $v1, 0x10($a1)
    ctx->pc = 0x219364u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x219368: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x219368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21936c: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x21936Cu;
    SET_GPR_U32(ctx, 31, 0x219374u);
    ctx->pc = 0x219370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21936Cu;
    // 0x219370: 0xa0a20010  sb          $v0, 0x10($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x21936Cu, 0x219374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219374u;
label_219374:
    // 0x219374: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x219374u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x219378: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x219378u;
    {
        const bool branch_taken_0x219378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219378u;
        // 0x21937c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219378) {
            ctx->pc = 0x219300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219300;
        }
    }
    ctx->pc = 0x219380u;
label_219380:
    // 0x219380: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x219380u;
    SET_GPR_U32(ctx, 31, 0x219388u);
    ctx->pc = 0x219384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219380u;
    // 0x219384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x219380u, 0x219388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219388u;
label_219388:
    // 0x219388: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x219388u;
    SET_GPR_U32(ctx, 31, 0x219390u);
    ctx->pc = 0x21938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219388u;
    // 0x21938c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x219388u, 0x219390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219390u;
label_219390:
    // 0x219390: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x219390u;
    SET_GPR_U32(ctx, 31, 0x219398u);
    ctx->pc = 0x219394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219390u;
    // 0x219394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x219390u, 0x219398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219398u;
label_219398:
    // 0x219398: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x219398u;
    SET_GPR_U32(ctx, 31, 0x2193A0u);
    ctx->pc = 0x21939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219398u;
    // 0x21939c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x219398u, 0x2193A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193A0u;
label_2193a0:
    // 0x2193a0: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x2193a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2193a4: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x2193a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2193a8: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x2193a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2193ac: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x2193acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2193b0: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2193b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2193b4: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x2193b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2193b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2193B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2193BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193B8u;
        // 0x2193bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2193B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2193C0u;
}
