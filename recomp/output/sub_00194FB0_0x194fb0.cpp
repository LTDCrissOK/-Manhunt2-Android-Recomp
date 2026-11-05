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

// Function: sub_00194FB0
// Address: 0x194fb0 - 0x1950b0
void sub_00194FB0_0x194fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194FB0_0x194fb0");
#endif

    switch (ctx->pc) {
        case 0x194fb0u: goto label_194fb0;
        case 0x194fb4u: goto label_194fb4;
        case 0x194fb8u: goto label_194fb8;
        case 0x194fbcu: goto label_194fbc;
        case 0x194fc0u: goto label_194fc0;
        case 0x194fc4u: goto label_194fc4;
        case 0x194fc8u: goto label_194fc8;
        case 0x194fccu: goto label_194fcc;
        case 0x194fd0u: goto label_194fd0;
        case 0x194fd4u: goto label_194fd4;
        case 0x194fd8u: goto label_194fd8;
        case 0x194fdcu: goto label_194fdc;
        case 0x194fe0u: goto label_194fe0;
        case 0x194fe4u: goto label_194fe4;
        case 0x194fe8u: goto label_194fe8;
        case 0x194fecu: goto label_194fec;
        case 0x194ff0u: goto label_194ff0;
        case 0x194ff4u: goto label_194ff4;
        case 0x194ff8u: goto label_194ff8;
        case 0x194ffcu: goto label_194ffc;
        case 0x195000u: goto label_195000;
        case 0x195004u: goto label_195004;
        case 0x195008u: goto label_195008;
        case 0x19500cu: goto label_19500c;
        case 0x195010u: goto label_195010;
        case 0x195014u: goto label_195014;
        case 0x195018u: goto label_195018;
        case 0x19501cu: goto label_19501c;
        case 0x195020u: goto label_195020;
        case 0x195024u: goto label_195024;
        case 0x195028u: goto label_195028;
        case 0x19502cu: goto label_19502c;
        case 0x195030u: goto label_195030;
        case 0x195034u: goto label_195034;
        case 0x195038u: goto label_195038;
        case 0x19503cu: goto label_19503c;
        case 0x195040u: goto label_195040;
        case 0x195044u: goto label_195044;
        case 0x195048u: goto label_195048;
        case 0x19504cu: goto label_19504c;
        case 0x195050u: goto label_195050;
        case 0x195054u: goto label_195054;
        case 0x195058u: goto label_195058;
        case 0x19505cu: goto label_19505c;
        case 0x195060u: goto label_195060;
        case 0x195064u: goto label_195064;
        case 0x195068u: goto label_195068;
        case 0x19506cu: goto label_19506c;
        case 0x195070u: goto label_195070;
        case 0x195074u: goto label_195074;
        case 0x195078u: goto label_195078;
        case 0x19507cu: goto label_19507c;
        case 0x195080u: goto label_195080;
        case 0x195084u: goto label_195084;
        case 0x195088u: goto label_195088;
        case 0x19508cu: goto label_19508c;
        case 0x195090u: goto label_195090;
        case 0x195094u: goto label_195094;
        case 0x195098u: goto label_195098;
        case 0x19509cu: goto label_19509c;
        case 0x1950a0u: goto label_1950a0;
        case 0x1950a4u: goto label_1950a4;
        case 0x1950a8u: goto label_1950a8;
        case 0x1950acu: goto label_1950ac;
        default: break;
    }

    ctx->pc = 0x194fb0u;

label_194fb0:
    // 0x194fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_194fb4:
    // 0x194fb4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x194fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_194fb8:
    // 0x194fb8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x194fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_194fbc:
    // 0x194fbc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x194fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_194fc0:
    // 0x194fc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194fc4:
    // 0x194fc4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x194fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_194fc8:
    // 0x194fc8: 0x50430036  beql        $v0, $v1, . + 4 + (0x36 << 2)
label_194fcc:
    if (ctx->pc == 0x194FCCu) {
        ctx->pc = 0x194FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FC8u;
        // 0x194fcc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FD0u;
        goto label_194fd0;
    }
    ctx->pc = 0x194FC8u;
    {
        const bool branch_taken_0x194fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x194fc8) {
            ctx->pc = 0x194FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194FC8u;
            // 0x194fcc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1950A4u;
            goto label_1950a4;
        }
    }
    ctx->pc = 0x194FD0u;
label_194fd0:
    // 0x194fd0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x194fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_194fd4:
    // 0x194fd4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_194fd8:
    if (ctx->pc == 0x194FD8u) {
        ctx->pc = 0x194FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FD4u;
        // 0x194fd8: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FDCu;
        goto label_194fdc;
    }
    ctx->pc = 0x194FD4u;
    {
        const bool branch_taken_0x194fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FD4u;
        // 0x194fd8: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fd4) {
            ctx->pc = 0x194FECu;
            goto label_194fec;
        }
    }
    ctx->pc = 0x194FDCu;
label_194fdc:
    // 0x194fdc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x194fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_194fe0:
    // 0x194fe0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x194fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_194fe4:
    // 0x194fe4: 0x40f809  jalr        $v0
label_194fe8:
    if (ctx->pc == 0x194FE8u) {
        ctx->pc = 0x194FECu;
        goto label_194fec;
    }
    ctx->pc = 0x194FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194FECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194FE4u, 0x194FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194FECu;
label_194fec:
    // 0x194fec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x194fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_194ff0:
    // 0x194ff0: 0xc061a12  jal         func_186848
label_194ff4:
    if (ctx->pc == 0x194FF4u) {
        ctx->pc = 0x194FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FF0u;
        // 0x194ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FF8u;
        goto label_194ff8;
    }
    ctx->pc = 0x194FF0u;
    SET_GPR_U32(ctx, 31, 0x194FF8u);
    ctx->pc = 0x194FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194FF0u;
    // 0x194ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194FF0u, 0x194FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194FF8u;
label_194ff8:
    // 0x194ff8: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x194ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_194ffc:
    // 0x194ffc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x194ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_195000:
    // 0x195000: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x195000u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_195004:
    // 0x195004: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x195004u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_195008:
    // 0x195008: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x195008u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19500c:
    // 0x19500c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x19500cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_195010:
    // 0x195010: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x195010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_195014:
    // 0x195014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195018:
    // 0x195018: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x195018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19501c:
    // 0x19501c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x19501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_195020:
    // 0x195020: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x195020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_195024:
    // 0x195024: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x195024u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_195028:
    // 0x195028: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x195028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19502c:
    // 0x19502c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x19502cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_195030:
    // 0x195030: 0xc061a12  jal         func_186848
label_195034:
    if (ctx->pc == 0x195034u) {
        ctx->pc = 0x195034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195030u;
        // 0x195034: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x195038u;
        goto label_195038;
    }
    ctx->pc = 0x195030u;
    SET_GPR_U32(ctx, 31, 0x195038u);
    ctx->pc = 0x195034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195030u;
    // 0x195034: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x195030u, 0x195038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195038u;
label_195038:
    // 0x195038: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x195038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19503c:
    // 0x19503c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19503cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195040:
    // 0x195040: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x195040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_195044:
    // 0x195044: 0x40f809  jalr        $v0
label_195048:
    if (ctx->pc == 0x195048u) {
        ctx->pc = 0x195048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195044u;
        // 0x195048: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19504Cu;
        goto label_19504c;
    }
    ctx->pc = 0x195044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19504Cu);
        ctx->pc = 0x195048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195044u;
        // 0x195048: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195044u, 0x19504Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19504Cu;
label_19504c:
    // 0x19504c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x19504cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_195050:
    // 0x195050: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x195050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
label_195054:
    // 0x195054: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_195058:
    if (ctx->pc == 0x195058u) {
        ctx->pc = 0x195058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195054u;
        // 0x195058: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19505Cu;
        goto label_19505c;
    }
    ctx->pc = 0x195054u;
    {
        const bool branch_taken_0x195054 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x195058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195054u;
        // 0x195058: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195054) {
            ctx->pc = 0x195070u;
            goto label_195070;
        }
    }
    ctx->pc = 0x19505Cu;
label_19505c:
    // 0x19505c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_195060:
    // 0x195060: 0x0  nop
    ctx->pc = 0x195060u;
    // NOP
label_195064:
    // 0x195064: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_195068:
    // 0x195068: 0x10000007  b           . + 4 + (0x7 << 2)
label_19506c:
    if (ctx->pc == 0x19506Cu) {
        ctx->pc = 0x195070u;
        goto label_195070;
    }
    ctx->pc = 0x195068u;
    {
        const bool branch_taken_0x195068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195068) {
            ctx->pc = 0x195088u;
            goto label_195088;
        }
    }
    ctx->pc = 0x195070u;
label_195070:
    // 0x195070: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x195070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_195074:
    // 0x195074: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_195078:
    // 0x195078: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x195078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19507c:
    // 0x19507c: 0x0  nop
    ctx->pc = 0x19507cu;
    // NOP
label_195080:
    // 0x195080: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_195084:
    // 0x195084: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x195084u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_195088:
    // 0x195088: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x195088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19508c:
    // 0x19508c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19508cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_195090:
    // 0x195090: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195094:
    // 0x195094: 0x0  nop
    ctx->pc = 0x195094u;
    // NOP
label_195098:
    // 0x195098: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x195098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19509c:
    // 0x19509c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x19509cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_1950a0:
    // 0x1950a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1950a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1950a4:
    // 0x1950a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1950a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1950a8:
    // 0x1950a8: 0x3e00008  jr          $ra
label_1950ac:
    if (ctx->pc == 0x1950ACu) {
        ctx->pc = 0x1950ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950A8u;
        // 0x1950ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1950B0u;
        goto label_fallthrough_0x1950a8;
    }
    ctx->pc = 0x1950A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1950ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950A8u;
        // 0x1950ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1950A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1950a8:
    ctx->pc = 0x1950B0u;
}
