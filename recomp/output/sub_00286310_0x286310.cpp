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

// Function: sub_00286310
// Address: 0x286310 - 0x2865e8
void sub_00286310_0x286310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286310_0x286310");
#endif

    switch (ctx->pc) {
        case 0x286368u: goto label_286368;
        case 0x286370u: goto label_286370;
        case 0x286378u: goto label_286378;
        case 0x28638cu: goto label_28638c;
        case 0x2863acu: goto label_2863ac;
        case 0x2863e0u: goto label_2863e0;
        case 0x2863f4u: goto label_2863f4;
        case 0x286428u: goto label_286428;
        case 0x286448u: goto label_286448;
        case 0x286458u: goto label_286458;
        case 0x28646cu: goto label_28646c;
        case 0x286480u: goto label_286480;
        case 0x286548u: goto label_286548;
        case 0x286558u: goto label_286558;
        case 0x286580u: goto label_286580;
        case 0x286590u: goto label_286590;
        case 0x2865b4u: goto label_2865b4;
        case 0x2865bcu: goto label_2865bc;
        default: break;
    }

    ctx->pc = 0x286310u;

    // 0x286310: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x286310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x286314: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x286314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x286318: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x286318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28631c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28631cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286320: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x286320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x286324: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x286324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x286328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28632c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x28632cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x286330: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x286330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286334: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x286334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x286338: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x286338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28633c: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x28633cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x286340: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x286340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x286344: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x286344u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x286348: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x286348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28634c: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x28634cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x286350: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x286350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286354: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x286354u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x286358: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x286358u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28635c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x28635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x286360: 0xc0a75c4  jal         func_29D710
    ctx->pc = 0x286360u;
    SET_GPR_U32(ctx, 31, 0x286368u);
    ctx->pc = 0x286364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286360u;
    // 0x286364: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D710u, 0x286360u, 0x286368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286368u;
label_286368:
    // 0x286368: 0xc0a75cc  jal         func_29D730
    ctx->pc = 0x286368u;
    SET_GPR_U32(ctx, 31, 0x286370u);
    ctx->pc = 0x28636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286368u;
    // 0x28636c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D730u, 0x286368u, 0x286370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286370u;
label_286370:
    // 0x286370: 0xc0a17de  jal         func_285F78
    ctx->pc = 0x286370u;
    SET_GPR_U32(ctx, 31, 0x286378u);
    ctx->pc = 0x285F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F78u, 0x286370u, 0x286378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286378u;
label_286378:
    // 0x286378: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x286378u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28637c: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x28637cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x286380: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x286380u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x286384: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x286384u;
    SET_GPR_U32(ctx, 31, 0x28638Cu);
    ctx->pc = 0x286388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286384u;
    // 0x286388: 0x93a70003  lbu         $a3, 0x3($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x286384u, 0x28638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28638Cu;
label_28638c:
    // 0x28638c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x28638cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x286390: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x286390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x286394: 0x8c6225a4  lw          $v0, 0x25A4($v1)
    ctx->pc = 0x286394u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C25A4u));
    // 0x286398: 0x14440013  bne         $v0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x286398u;
    {
        const bool branch_taken_0x286398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x28639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286398u;
        // 0x28639c: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286398) {
            ctx->pc = 0x2863E8u;
            goto label_2863e8;
        }
    }
    ctx->pc = 0x2863A0u;
    // 0x2863a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2863a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863a4: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x2863A4u;
    SET_GPR_U32(ctx, 31, 0x2863ACu);
    ctx->pc = 0x2863A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2863A4u;
    // 0x2863a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x2863A4u, 0x2863ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2863ACu;
label_2863ac:
    // 0x2863ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2863acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2863b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2863b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2863b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2863b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863b8: 0x3c013f67  lui         $at, 0x3F67
    ctx->pc = 0x2863b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16231 << 16));
    // 0x2863bc: 0x3421ae15  ori         $at, $at, 0xAE15
    ctx->pc = 0x2863bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44565);
    // 0x2863c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2863c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2863c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2863c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2863c8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2863c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2863cc: 0xc7ae0010  lwc1        $f14, 0x10($sp)
    ctx->pc = 0x2863ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2863d0: 0xc7af0014  lwc1        $f15, 0x14($sp)
    ctx->pc = 0x2863d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2863d4: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2863d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2863d8: 0xc09f662  jal         func_27D988
    ctx->pc = 0x2863D8u;
    SET_GPR_U32(ctx, 31, 0x2863E0u);
    ctx->pc = 0x2863DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2863D8u;
    // 0x2863dc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x2863D8u, 0x2863E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2863E0u;
label_2863e0:
    // 0x2863e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2863E0u;
    {
        const bool branch_taken_0x2863e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2863e0) {
            ctx->pc = 0x286428u;
            goto label_286428;
        }
    }
    ctx->pc = 0x2863E8u;
label_2863e8:
    // 0x2863e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2863e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863ec: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x2863ECu;
    SET_GPR_U32(ctx, 31, 0x2863F4u);
    ctx->pc = 0x2863F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2863ECu;
    // 0x2863f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x2863ECu, 0x2863F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2863F4u;
label_2863f4:
    // 0x2863f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2863f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2863f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2863f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2863fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2863fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286400: 0x3c013f5c  lui         $at, 0x3F5C
    ctx->pc = 0x286400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16220 << 16));
    // 0x286404: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x286404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x286408: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x286408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28640c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28640cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286410: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x286410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x286414: 0xc7ae0010  lwc1        $f14, 0x10($sp)
    ctx->pc = 0x286414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x286418: 0xc7af0014  lwc1        $f15, 0x14($sp)
    ctx->pc = 0x286418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28641c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x28641cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x286420: 0xc09f662  jal         func_27D988
    ctx->pc = 0x286420u;
    SET_GPR_U32(ctx, 31, 0x286428u);
    ctx->pc = 0x286424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286420u;
    // 0x286424: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x286420u, 0x286428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286428u;
label_286428:
    // 0x286428: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x286428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x28642c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x28642cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x286430: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x286430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286434: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x286434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x286438: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x286438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28643c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x28643cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x286440: 0xc0a75c4  jal         func_29D710
    ctx->pc = 0x286440u;
    SET_GPR_U32(ctx, 31, 0x286448u);
    ctx->pc = 0x286444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286440u;
    // 0x286444: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D710u, 0x286440u, 0x286448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286448u;
label_286448:
    // 0x286448: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x286448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28644c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28644cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286450: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x286450u;
    SET_GPR_U32(ctx, 31, 0x286458u);
    ctx->pc = 0x286454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286450u;
    // 0x286454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x286450u, 0x286458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286458u;
label_286458:
    // 0x286458: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x286458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28645c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28645cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x286460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x286460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286464: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x286464u;
    SET_GPR_U32(ctx, 31, 0x28646Cu);
    ctx->pc = 0x286468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286464u;
    // 0x286468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x286464u, 0x28646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28646Cu;
label_28646c:
    // 0x28646c: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x28646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x286470: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x286470u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x286474: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x286474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286478: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x286478u;
    SET_GPR_U32(ctx, 31, 0x286480u);
    ctx->pc = 0x28647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286478u;
    // 0x28647c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x286478u, 0x286480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286480u;
label_286480:
    // 0x286480: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x286480u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x286484: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x286484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x286488: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x286488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x28648c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28648cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x286490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x286494: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x286494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x286498: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x286498u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x28649c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x28649cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2864a0: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2864a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2864a4: 0x0  nop
    ctx->pc = 0x2864a4u;
    // NOP
    // 0x2864a8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2864A8u;
    {
        const bool branch_taken_0x2864a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2864ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864A8u;
        // 0x2864ac: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864a8) {
            ctx->pc = 0x2864F8u;
            goto label_2864f8;
        }
    }
    ctx->pc = 0x2864B0u;
    // 0x2864b0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2864b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2864b4: 0x0  nop
    ctx->pc = 0x2864b4u;
    // NOP
    // 0x2864b8: 0x0  nop
    ctx->pc = 0x2864b8u;
    // NOP
    // 0x2864bc: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2864bcu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x2864c0: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2864c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x2864c4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2864c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2864c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2864c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2864cc: 0x0  nop
    ctx->pc = 0x2864ccu;
    // NOP
    // 0x2864d0: 0x0  nop
    ctx->pc = 0x2864d0u;
    // NOP
    // 0x2864d4: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x2864d4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x2864d8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2864d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2864dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2864dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2864e0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2864e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2864e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2864e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2864e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2864e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2864ec: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2864ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2864f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2864F0u;
    {
        const bool branch_taken_0x2864f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864F0u;
        // 0x2864f4: 0xe7a1001c  swc1        $f1, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864f0) {
            ctx->pc = 0x28650Cu;
            goto label_28650c;
        }
    }
    ctx->pc = 0x2864F8u;
label_2864f8:
    // 0x2864f8: 0x46141041  sub.s       $f1, $f2, $f20
    ctx->pc = 0x2864f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x2864fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2864fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x286500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x286500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286504: 0x0  nop
    ctx->pc = 0x286504u;
    // NOP
    // 0x286508: 0x46000dc2  mul.s       $f23, $f1, $f0
    ctx->pc = 0x286508u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28650c:
    // 0x28650c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x28650cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x286510: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x286510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x286514: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x286514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x286518: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x286518u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x28651c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x28651cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x286520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286524: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x286524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x286528: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x286528u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x28652c: 0xc7af001c  lwc1        $f15, 0x1C($sp)
    ctx->pc = 0x28652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x286530: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x286530u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x286534: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x286534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x286538: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x286538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x28653c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x28653cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x286540: 0xc09f662  jal         func_27D988
    ctx->pc = 0x286540u;
    SET_GPR_U32(ctx, 31, 0x286548u);
    ctx->pc = 0x286544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286540u;
    // 0x286544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x286540u, 0x286548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286548u;
label_286548:
    // 0x286548: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x286548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28654c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286550: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x286550u;
    SET_GPR_U32(ctx, 31, 0x286558u);
    ctx->pc = 0x286554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286550u;
    // 0x286554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x286550u, 0x286558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286558u;
label_286558:
    // 0x286558: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x286558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x28655c: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x28655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x286560: 0xc7af001c  lwc1        $f15, 0x1C($sp)
    ctx->pc = 0x286560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x286564: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x286564u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x286568: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x286568u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x28656c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28656cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286570: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x286570u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x286574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x286574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286578: 0xc09f662  jal         func_27D988
    ctx->pc = 0x286578u;
    SET_GPR_U32(ctx, 31, 0x286580u);
    ctx->pc = 0x28657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286578u;
    // 0x28657c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x286578u, 0x286580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286580u;
label_286580:
    // 0x286580: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x286580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x286584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x286584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286588: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x286588u;
    SET_GPR_U32(ctx, 31, 0x286590u);
    ctx->pc = 0x28658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286588u;
    // 0x28658c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x286588u, 0x286590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286590u;
label_286590:
    // 0x286590: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x286590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x286594: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x286594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x286598: 0xc7af001c  lwc1        $f15, 0x1C($sp)
    ctx->pc = 0x286598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28659c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28659cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865a0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2865a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2865a4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x2865a4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x2865a8: 0x4600bb00  add.s       $f12, $f23, $f0
    ctx->pc = 0x2865a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x2865ac: 0xc09f662  jal         func_27D988
    ctx->pc = 0x2865ACu;
    SET_GPR_U32(ctx, 31, 0x2865B4u);
    ctx->pc = 0x2865B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865ACu;
    // 0x2865b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x2865ACu, 0x2865B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865B4u;
label_2865b4:
    // 0x2865b4: 0xc0a17ea  jal         func_285FA8
    ctx->pc = 0x2865B4u;
    SET_GPR_U32(ctx, 31, 0x2865BCu);
    ctx->pc = 0x285FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285FA8u, 0x2865B4u, 0x2865BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865BCu;
label_2865bc:
    // 0x2865bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2865bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2865c0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2865c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2865c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2865c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2865c8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2865c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2865cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2865ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2865d0: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x2865d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2865d4: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2865d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2865d8: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2865d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2865dc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2865dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2865e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2865E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2865E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865E0u;
        // 0x2865e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2865E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2865E8u;
}
