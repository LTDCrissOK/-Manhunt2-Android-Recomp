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

// Function: sub_00322198
// Address: 0x322198 - 0x322440
void sub_00322198_0x322198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322198_0x322198");
#endif

    switch (ctx->pc) {
        case 0x3221d4u: goto label_3221d4;
        case 0x3221e4u: goto label_3221e4;
        case 0x3221f0u: goto label_3221f0;
        case 0x322210u: goto label_322210;
        case 0x322220u: goto label_322220;
        case 0x32226cu: goto label_32226c;
        case 0x3222a0u: goto label_3222a0;
        case 0x3222acu: goto label_3222ac;
        case 0x3222b4u: goto label_3222b4;
        case 0x3222d0u: goto label_3222d0;
        case 0x3222e0u: goto label_3222e0;
        case 0x3222ecu: goto label_3222ec;
        case 0x3222f8u: goto label_3222f8;
        case 0x322334u: goto label_322334;
        case 0x32233cu: goto label_32233c;
        case 0x322348u: goto label_322348;
        case 0x322354u: goto label_322354;
        case 0x3223e4u: goto label_3223e4;
        case 0x3223ecu: goto label_3223ec;
        case 0x3223f8u: goto label_3223f8;
        case 0x322414u: goto label_322414;
        default: break;
    }

    ctx->pc = 0x322198u;

    // 0x322198: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x322198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x32219c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32219cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3221a0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x3221a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x3221a4: 0x8c5195cc  lw          $s1, -0x6A34($v0)
    ctx->pc = 0x3221a4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3F95CCu));
    // 0x3221a8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3221a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3221ac: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3221acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3221b0: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x3221b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x3221b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3221b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3221b8: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x3221b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3221bc: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x3221bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3221c0: 0x12200094  beqz        $s1, . + 4 + (0x94 << 2)
    ctx->pc = 0x3221C0u;
    {
        const bool branch_taken_0x3221c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3221C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221C0u;
        // 0x3221c4: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3221c0) {
            ctx->pc = 0x322414u;
            goto label_322414;
        }
    }
    ctx->pc = 0x3221C8u;
    // 0x3221c8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3221c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3221cc: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x3221CCu;
    SET_GPR_U32(ctx, 31, 0x3221D4u);
    ctx->pc = 0x3221D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3221CCu;
    // 0x3221d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3221CCu, 0x3221D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3221D4u;
label_3221d4:
    // 0x3221d4: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x3221d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x3221d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3221d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3221dc: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x3221DCu;
    SET_GPR_U32(ctx, 31, 0x3221E4u);
    ctx->pc = 0x3221E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3221DCu;
    // 0x3221e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3221DCu, 0x3221E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3221E4u;
label_3221e4:
    // 0x3221e4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x3221e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3221e8: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x3221E8u;
    SET_GPR_U32(ctx, 31, 0x3221F0u);
    ctx->pc = 0x3221ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3221E8u;
    // 0x3221ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3221E8u, 0x3221F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3221F0u;
label_3221f0:
    // 0x3221f0: 0x8e70bd48  lw          $s0, -0x42B8($s3)
    ctx->pc = 0x3221f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    // 0x3221f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3221f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3221f8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x3221f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x3221fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3221fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322200: 0xc61400f4  lwc1        $f20, 0xF4($s0)
    ctx->pc = 0x322200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x322204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322208: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x322208u;
    SET_GPR_U32(ctx, 31, 0x322210u);
    ctx->pc = 0x32220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322208u;
    // 0x32220c: 0xe60000f4  swc1        $f0, 0xF4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x322208u, 0x322210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322210u;
label_322210:
    // 0x322210: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x322210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x322214: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x322214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322218: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x322218u;
    SET_GPR_U32(ctx, 31, 0x322220u);
    ctx->pc = 0x32221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322218u;
    // 0x32221c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x322218u, 0x322220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322220u;
label_322220:
    // 0x322220: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x322220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x322224: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x322224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x322228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x322228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32222c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x32222cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x322230: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x322230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x322234: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x322234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x322238: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x322238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x32223c: 0x8e63bd48  lw          $v1, -0x42B8($s3)
    ctx->pc = 0x32223cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    // 0x322240: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x322240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x322244: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x322244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x322248: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x322248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32224c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x32224cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322250: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x322250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x322254: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x322254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x322258: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x322258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x32225c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32225cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322260: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x322260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322264: 0xc0b1612  jal         func_2C5848
    ctx->pc = 0x322264u;
    SET_GPR_U32(ctx, 31, 0x32226Cu);
    ctx->pc = 0x322268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322264u;
    // 0x322268: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5848u, 0x322264u, 0x32226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32226Cu;
label_32226c:
    // 0x32226c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x32226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x322270: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x322270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x322274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x322274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x322278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x322278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32227c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32227cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322280: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x322280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322284: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x322284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x322288: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x322288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32228c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x32228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x322290: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x322290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x322294: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x322294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x322298: 0xc0b15e8  jal         func_2C57A0
    ctx->pc = 0x322298u;
    SET_GPR_U32(ctx, 31, 0x3222A0u);
    ctx->pc = 0x32229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322298u;
    // 0x32229c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x322298u, 0x3222A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222A0u;
label_3222a0:
    // 0x3222a0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x3222a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x3222a4: 0xc0c48da  jal         func_312368
    ctx->pc = 0x3222A4u;
    SET_GPR_U32(ctx, 31, 0x3222ACu);
    ctx->pc = 0x3222A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222A4u;
    // 0x3222a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x3222A4u, 0x3222ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222ACu;
label_3222ac:
    // 0x3222ac: 0xc0c313a  jal         func_30C4E8
    ctx->pc = 0x3222ACu;
    SET_GPR_U32(ctx, 31, 0x3222B4u);
    ctx->pc = 0x3222B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222ACu;
    // 0x3222b0: 0x8e240104  lw          $a0, 0x104($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C4E8u, 0x3222ACu, 0x3222B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222B4u;
label_3222b4:
    // 0x3222b4: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x3222b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x3222b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3222b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3222bc: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x3222bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x3222c0: 0x904500b1  lbu         $a1, 0xB1($v0)
    ctx->pc = 0x3222c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 177)));
    // 0x3222c4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3222c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3222c8: 0xc0c3244  jal         func_30C910
    ctx->pc = 0x3222C8u;
    SET_GPR_U32(ctx, 31, 0x3222D0u);
    ctx->pc = 0x3222CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222C8u;
    // 0x3222cc: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C910u, 0x3222C8u, 0x3222D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222D0u;
label_3222d0:
    // 0x3222d0: 0xe61400f4  swc1        $f20, 0xF4($s0)
    ctx->pc = 0x3222d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x3222d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3222d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3222d8: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x3222D8u;
    SET_GPR_U32(ctx, 31, 0x3222E0u);
    ctx->pc = 0x3222DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222D8u;
    // 0x3222dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x3222D8u, 0x3222E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222E0u;
label_3222e0:
    // 0x3222e0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3222e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3222e4: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x3222E4u;
    SET_GPR_U32(ctx, 31, 0x3222ECu);
    ctx->pc = 0x3222E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222E4u;
    // 0x3222e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3222E4u, 0x3222ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222ECu;
label_3222ec:
    // 0x3222ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3222ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3222f0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x3222F0u;
    SET_GPR_U32(ctx, 31, 0x3222F8u);
    ctx->pc = 0x3222F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222F0u;
    // 0x3222f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3222F0u, 0x3222F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222F8u;
label_3222f8:
    // 0x3222f8: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x3222f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x3222fc: 0x247021e8  addiu       $s0, $v1, 0x21E8
    ctx->pc = 0x3222fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8680));
    // 0x322300: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x322300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B2288u));
    // 0x322304: 0x9203009c  lbu         $v1, 0x9C($s0)
    ctx->pc = 0x322304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5B2284u));
    // 0x322308: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x322308u;
    {
        const bool branch_taken_0x322308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322308u;
        // 0x32230c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322308) {
            ctx->pc = 0x322414u;
            goto label_322414;
        }
    }
    ctx->pc = 0x322310u;
    // 0x322310: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x322310u;
    {
        const bool branch_taken_0x322310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322310u;
        // 0x322314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322310) {
            ctx->pc = 0x322414u;
            goto label_322414;
        }
    }
    ctx->pc = 0x322318u;
    // 0x322318: 0xc6140094  lwc1        $f20, 0x94($s0)
    ctx->pc = 0x322318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32231c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x32231cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x322320: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x322320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x322324: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x322324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x322328: 0xc6160098  lwc1        $f22, 0x98($s0)
    ctx->pc = 0x322328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x32232c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x32232Cu;
    SET_GPR_U32(ctx, 31, 0x322334u);
    ctx->pc = 0x322330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32232Cu;
    // 0x322330: 0x4615a502  mul.s       $f20, $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x32232Cu, 0x322334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322334u;
label_322334:
    // 0x322334: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x322334u;
    SET_GPR_U32(ctx, 31, 0x32233Cu);
    ctx->pc = 0x322338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322334u;
    // 0x322338: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x322334u, 0x32233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32233Cu;
label_32233c:
    // 0x32233c: 0x4615b302  mul.s       $f12, $f22, $f21
    ctx->pc = 0x32233cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x322340: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x322340u;
    SET_GPR_U32(ctx, 31, 0x322348u);
    ctx->pc = 0x322344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322340u;
    // 0x322344: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x322340u, 0x322348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322348u;
label_322348:
    // 0x322348: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x322348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x32234c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x32234Cu;
    SET_GPR_U32(ctx, 31, 0x322354u);
    ctx->pc = 0x322350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32234Cu;
    // 0x322350: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x32234Cu, 0x322354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322354u;
label_322354:
    // 0x322354: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x322354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x322358: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x322358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32235c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x32235cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x322360: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x322360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x322364: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x322364u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x322368: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x322368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32236c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x32236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x322370: 0x8e63bd48  lw          $v1, -0x42B8($s3)
    ctx->pc = 0x322370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    // 0x322374: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x322374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x322378: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x322378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x32237c: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x32237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322380: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x322380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x322384: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x322384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x322388: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x322388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32238c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x32238cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x322390: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x322390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322394: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x322394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x322398: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x322398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32239c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x32239cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3223a0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3223a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3223a4: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x3223a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3223a8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3223a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3223ac: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x3223acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3223b0: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x3223b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3223b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3223b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3223b8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3223b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3223bc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x3223bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3223c0: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x3223c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3223c4: 0x9043be10  lbu         $v1, -0x41F0($v0)
    ctx->pc = 0x3223c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBE10u));
    // 0x3223c8: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x3223c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3223cc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3223ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3223d0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x3223d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3223d4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3223D4u;
    {
        const bool branch_taken_0x3223d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3223D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223D4u;
        // 0x3223d8: 0xe7a2003c  swc1        $f2, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3223d4) {
            ctx->pc = 0x3223ECu;
            goto label_3223ec;
        }
    }
    ctx->pc = 0x3223DCu;
    // 0x3223dc: 0xc0c896a  jal         func_3225A8
    ctx->pc = 0x3223DCu;
    SET_GPR_U32(ctx, 31, 0x3223E4u);
    ctx->pc = 0x3223E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3223DCu;
    // 0x3223e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3225A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3225A8u, 0x3223DCu, 0x3223E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223E4u;
label_3223e4:
    // 0x3223e4: 0xc0d0590  jal         func_341640
    ctx->pc = 0x3223E4u;
    SET_GPR_U32(ctx, 31, 0x3223ECu);
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x3223E4u, 0x3223ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223ECu;
label_3223ec:
    // 0x3223ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3223ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3223f0: 0xc085d4e  jal         func_217538
    ctx->pc = 0x3223F0u;
    SET_GPR_U32(ctx, 31, 0x3223F8u);
    ctx->pc = 0x3223F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3223F0u;
    // 0x3223f4: 0x8c44be08  lw          $a0, -0x41F8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x3223F0u, 0x3223F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223F8u;
label_3223f8:
    // 0x3223f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3223f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3223fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3223FCu;
    {
        const bool branch_taken_0x3223fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223FCu;
        // 0x322400: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3223fc) {
            ctx->pc = 0x322414u;
            goto label_322414;
        }
    }
    ctx->pc = 0x322404u;
    // 0x322404: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x322404u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322408: 0xf88102b0  sqc2        $vf1, 0x2B0($a0)
    ctx->pc = 0x322408u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 688), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32240c: 0xc0d062a  jal         func_3418A8
    ctx->pc = 0x32240Cu;
    SET_GPR_U32(ctx, 31, 0x322414u);
    ctx->pc = 0x3418A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3418A8u, 0x32240Cu, 0x322414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322414u;
label_322414:
    // 0x322414: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x322414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x322418: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x322418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32241c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x32241cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x322420: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x322420u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x322424: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x322424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x322428: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x322428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x32242c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x32242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x322430: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x322430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x322434: 0x3e00008  jr          $ra
    ctx->pc = 0x322434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322434u;
        // 0x322438: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32243Cu;
    // 0x32243c: 0x0  nop
    ctx->pc = 0x32243cu;
    // NOP
    ctx->pc = 0x322440u;
}
