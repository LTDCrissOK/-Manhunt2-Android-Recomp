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

// Function: sub_0030B288
// Address: 0x30b288 - 0x30b638
void sub_0030B288_0x30b288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B288_0x30b288");
#endif

    switch (ctx->pc) {
        case 0x30b2ccu: goto label_30b2cc;
        case 0x30b2d8u: goto label_30b2d8;
        case 0x30b2e4u: goto label_30b2e4;
        case 0x30b3dcu: goto label_30b3dc;
        case 0x30b3f8u: goto label_30b3f8;
        case 0x30b528u: goto label_30b528;
        case 0x30b548u: goto label_30b548;
        case 0x30b580u: goto label_30b580;
        case 0x30b5a0u: goto label_30b5a0;
        case 0x30b5e8u: goto label_30b5e8;
        default: break;
    }

    ctx->pc = 0x30b288u;

    // 0x30b288: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x30b288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x30b28c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x30b28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x30b290: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x30b290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x30b294: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x30b294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x30b298: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30b298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b29c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30b29cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b2a0: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x30b2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x30b2a4: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x30b2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x30b2a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30b2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b2ac: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x30b2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x30b2b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30b2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b2b4: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x30b2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x30b2b8: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x30b2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30b2bc: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x30b2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x30b2c0: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x30b2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x30b2c4: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x30B2C4u;
    SET_GPR_U32(ctx, 31, 0x30B2CCu);
    ctx->pc = 0x30B2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2C4u;
    // 0x30b2c8: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x30B2C4u, 0x30B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2CCu;
label_30b2cc:
    // 0x30b2cc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x30b2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b2d0: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x30b2d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30b2d4: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x30b2d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b2d8:
    // 0x30b2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b2dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30B2DCu;
    SET_GPR_U32(ctx, 31, 0x30B2E4u);
    ctx->pc = 0x30B2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2DCu;
    // 0x30b2e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30B2DCu, 0x30B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2E4u;
label_30b2e4:
    // 0x30b2e4: 0x0  nop
    ctx->pc = 0x30b2e4u;
    // NOP
    // 0x30b2e8: 0x1635fffb  bne         $s1, $s5, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30B2E8u;
    {
        const bool branch_taken_0x30b2e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x30B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2E8u;
        // 0x30b2ec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2e8) {
            ctx->pc = 0x30B2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b2d8;
        }
    }
    ctx->pc = 0x30B2F0u;
    // 0x30b2f0: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x30b2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30b2f4: 0xc6440014  lwc1        $f4, 0x14($s2)
    ctx->pc = 0x30b2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30b2f8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x30b2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b2fc: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x30b2fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x30b300: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x30b300u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x30b304: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x30b304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30b308: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x30b308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x30b30c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x30b30cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30b310: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x30b310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30b314: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x30b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30b318: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x30b318u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x30b31c: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x30b31cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x30b320: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x30b320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30b324: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x30b324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x30b328: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x30b328u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30b32c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x30b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30b330: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x30b330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b334: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x30b334u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x30b338: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x30b338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x30b33c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x30b33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30b340: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x30b340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x30b344: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x30b344u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30b348: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x30b348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30b34c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x30b34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30b350: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x30b350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x30b354: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x30b354u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x30b358: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x30b358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x30b35c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x30b35cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30b360: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x30b360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30b364: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x30b364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b368: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x30b368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x30b36c: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x30b36cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x30b370: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x30b370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30b374: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x30b374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x30b378: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x30b378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30b37c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x30b37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30b380: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x30b380u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x30b384: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x30b384u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x30b388: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x30b388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30b38c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x30b38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x30b390: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x30b390u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30b394: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x30b394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30b398: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x30b398u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x30b39c: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x30b39cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x30b3a0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x30b3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30b3a4: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x30b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x30b3a8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x30b3a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30b3ac: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x30b3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30b3b0: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x30b3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x30b3b4: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x30b3b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x30b3b8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x30b3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30b3bc: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x30b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x30b3c0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x30b3c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30b3c4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x30b3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30b3c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30b3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b3cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30b3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b3d0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x30b3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30b3d4: 0xc0b1ace  jal         func_2C6B38
    ctx->pc = 0x30B3D4u;
    SET_GPR_U32(ctx, 31, 0x30B3DCu);
    ctx->pc = 0x30B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B3D4u;
    // 0x30b3d8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B38u, 0x30B3D4u, 0x30B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B3DCu;
label_30b3dc:
    // 0x30b3dc: 0xc66500f0  lwc1        $f5, 0xF0($s3)
    ctx->pc = 0x30b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30b3e0: 0x26680160  addiu       $t0, $s3, 0x160
    ctx->pc = 0x30b3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
    // 0x30b3e4: 0x26670170  addiu       $a3, $s3, 0x170
    ctx->pc = 0x30b3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
    // 0x30b3e8: 0x26660180  addiu       $a2, $s3, 0x180
    ctx->pc = 0x30b3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x30b3ec: 0x26650190  addiu       $a1, $s3, 0x190
    ctx->pc = 0x30b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
    // 0x30b3f0: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x30b3f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b3f4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x30b3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_30b3f8:
    // 0x30b3f8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30b3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b3fc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x30b3fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b400: 0x0  nop
    ctx->pc = 0x30b400u;
    // NOP
    // 0x30b404: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30B404u;
    {
        const bool branch_taken_0x30b404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B404u;
        // 0x30b408: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b404) {
            ctx->pc = 0x30B414u;
            goto label_30b414;
        }
    }
    ctx->pc = 0x30B40Cu;
    // 0x30b40c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b410: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x30b410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_30b414:
    // 0x30b414: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x30b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b418: 0xc66000f4  lwc1        $f0, 0xF4($s3)
    ctx->pc = 0x30b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b41c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30b41cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b420: 0x0  nop
    ctx->pc = 0x30b420u;
    // NOP
    // 0x30b424: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30B424u;
    {
        const bool branch_taken_0x30b424 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B424u;
        // 0x30b428: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b424) {
            ctx->pc = 0x30B434u;
            goto label_30b434;
        }
    }
    ctx->pc = 0x30B42Cu;
    // 0x30b42c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b430: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x30b430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_30b434:
    // 0x30b434: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x30b434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b438: 0xc6620160  lwc1        $f2, 0x160($s3)
    ctx->pc = 0x30b438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30b43c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b440: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x30b440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30b444: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30b444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30b448: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x30b448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30b44c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30b44cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30b450: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30b450u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30b454: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x30b454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b458: 0x0  nop
    ctx->pc = 0x30b458u;
    // NOP
    // 0x30b45c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30B45Cu;
    {
        const bool branch_taken_0x30b45c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B45Cu;
        // 0x30b460: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b45c) {
            ctx->pc = 0x30B46Cu;
            goto label_30b46c;
        }
    }
    ctx->pc = 0x30B464u;
    // 0x30b464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b468: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x30b468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_30b46c:
    // 0x30b46c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x30b46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b470: 0xc6630170  lwc1        $f3, 0x170($s3)
    ctx->pc = 0x30b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30b474: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30b474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b478: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x30b478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30b47c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x30b47cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x30b480: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x30b480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30b484: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30b484u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30b488: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x30b488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b48c: 0x0  nop
    ctx->pc = 0x30b48cu;
    // NOP
    // 0x30b490: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30B490u;
    {
        const bool branch_taken_0x30b490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B490u;
        // 0x30b494: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b490) {
            ctx->pc = 0x30B4A0u;
            goto label_30b4a0;
        }
    }
    ctx->pc = 0x30B498u;
    // 0x30b498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b49c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x30b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_30b4a0:
    // 0x30b4a0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x30b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b4a4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x30b4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30b4a8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30b4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b4ac: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x30b4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30b4b0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x30b4b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x30b4b4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x30b4b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30b4b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30b4b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30b4bc: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x30b4bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b4c0: 0x0  nop
    ctx->pc = 0x30b4c0u;
    // NOP
    // 0x30b4c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30B4C4u;
    {
        const bool branch_taken_0x30b4c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4C4u;
        // 0x30b4c8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4c4) {
            ctx->pc = 0x30B4D4u;
            goto label_30b4d4;
        }
    }
    ctx->pc = 0x30B4CCu;
    // 0x30b4cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b4d0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x30b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_30b4d4:
    // 0x30b4d4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x30b4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b4d8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x30b4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30b4dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30b4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b4e0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x30b4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30b4e4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x30b4e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x30b4e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x30b4e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30b4ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30b4ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30b4f0: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x30b4f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b4f4: 0x0  nop
    ctx->pc = 0x30b4f4u;
    // NOP
    // 0x30b4f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30B4F8u;
    {
        const bool branch_taken_0x30b4f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4F8u;
        // 0x30b4fc: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4f8) {
            ctx->pc = 0x30B508u;
            goto label_30b508;
        }
    }
    ctx->pc = 0x30B500u;
    // 0x30b500: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b504: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x30b504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_30b508:
    // 0x30b508: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x30b508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x30b50c: 0x481ffba  bgez        $a0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x30B50Cu;
    {
        const bool branch_taken_0x30b50c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x30B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B50Cu;
        // 0x30b510: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b50c) {
            ctx->pc = 0x30B3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b3f8;
        }
    }
    ctx->pc = 0x30B514u;
    // 0x30b514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30b514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b518: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x30b518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30b51c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30b51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b520: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x30b520u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b524: 0x0  nop
    ctx->pc = 0x30b524u;
    // NOP
label_30b528:
    // 0x30b528: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30b52c: 0x5446000e  bnel        $v0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x30B52Cu;
    {
        const bool branch_taken_0x30b52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x30b52c) {
            ctx->pc = 0x30B530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B52Cu;
            // 0x30b530: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B568u;
            goto label_30b568;
        }
    }
    ctx->pc = 0x30B534u;
    // 0x30b534: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x30b534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b538: 0x50a20032  beql        $a1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x30B538u;
    {
        const bool branch_taken_0x30b538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x30b538) {
            ctx->pc = 0x30B53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B538u;
            // 0x30b53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B604u;
            goto label_30b604;
        }
    }
    ctx->pc = 0x30B540u;
    // 0x30b540: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30b540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b544: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x30b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_30b548:
    // 0x30b548: 0x0  nop
    ctx->pc = 0x30b548u;
    // NOP
    // 0x30b54c: 0x0  nop
    ctx->pc = 0x30b54cu;
    // NOP
    // 0x30b550: 0x0  nop
    ctx->pc = 0x30b550u;
    // NOP
    // 0x30b554: 0x0  nop
    ctx->pc = 0x30b554u;
    // NOP
    // 0x30b558: 0x1482fffb  bne         $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30B558u;
    {
        const bool branch_taken_0x30b558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x30B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B558u;
        // 0x30b55c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b558) {
            ctx->pc = 0x30B548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b548;
        }
    }
    ctx->pc = 0x30B560u;
    // 0x30b560: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x30B560u;
    {
        const bool branch_taken_0x30b560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B560u;
        // 0x30b564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b560) {
            ctx->pc = 0x30B604u;
            goto label_30b604;
        }
    }
    ctx->pc = 0x30B568u;
label_30b568:
    // 0x30b568: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x30b568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x30b56c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x30B56Cu;
    {
        const bool branch_taken_0x30b56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B56Cu;
        // 0x30b570: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b56c) {
            ctx->pc = 0x30B528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b528;
        }
    }
    ctx->pc = 0x30B574u;
    // 0x30b574: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30b574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b578: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30b578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b57c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x30b57cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_30b580:
    // 0x30b580: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30b580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30b584: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30B584u;
    {
        const bool branch_taken_0x30b584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B584u;
        // 0x30b588: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b584) {
            ctx->pc = 0x30B5C0u;
            goto label_30b5c0;
        }
    }
    ctx->pc = 0x30B58Cu;
    // 0x30b58c: 0x50a2001d  beql        $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x30B58Cu;
    {
        const bool branch_taken_0x30b58c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x30b58c) {
            ctx->pc = 0x30B590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B58Cu;
            // 0x30b590: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B604u;
            goto label_30b604;
        }
    }
    ctx->pc = 0x30B594u;
    // 0x30b594: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30b594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b598: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x30b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x30b59c: 0x0  nop
    ctx->pc = 0x30b59cu;
    // NOP
label_30b5a0:
    // 0x30b5a0: 0x0  nop
    ctx->pc = 0x30b5a0u;
    // NOP
    // 0x30b5a4: 0x0  nop
    ctx->pc = 0x30b5a4u;
    // NOP
    // 0x30b5a8: 0x0  nop
    ctx->pc = 0x30b5a8u;
    // NOP
    // 0x30b5ac: 0x0  nop
    ctx->pc = 0x30b5acu;
    // NOP
    // 0x30b5b0: 0x1482fffb  bne         $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30B5B0u;
    {
        const bool branch_taken_0x30b5b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x30B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5B0u;
        // 0x30b5b4: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5b0) {
            ctx->pc = 0x30B5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b5a0;
        }
    }
    ctx->pc = 0x30B5B8u;
    // 0x30b5b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30B5B8u;
    {
        const bool branch_taken_0x30b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5B8u;
        // 0x30b5bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5b8) {
            ctx->pc = 0x30B604u;
            goto label_30b604;
        }
    }
    ctx->pc = 0x30B5C0u;
label_30b5c0:
    // 0x30b5c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30b5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30b5c4: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x30b5c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x30b5c8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x30B5C8u;
    {
        const bool branch_taken_0x30b5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5C8u;
        // 0x30b5cc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5c8) {
            ctx->pc = 0x30B580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b580;
        }
    }
    ctx->pc = 0x30B5D0u;
    // 0x30b5d0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x30b5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b5d4: 0x52c2000b  beql        $s6, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30B5D4u;
    {
        const bool branch_taken_0x30b5d4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x30b5d4) {
            ctx->pc = 0x30B5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B5D4u;
            // 0x30b5d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B604u;
            goto label_30b604;
        }
    }
    ctx->pc = 0x30B5DCu;
    // 0x30b5dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30b5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b5e0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x30b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x30b5e4: 0x0  nop
    ctx->pc = 0x30b5e4u;
    // NOP
label_30b5e8:
    // 0x30b5e8: 0x0  nop
    ctx->pc = 0x30b5e8u;
    // NOP
    // 0x30b5ec: 0x0  nop
    ctx->pc = 0x30b5ecu;
    // NOP
    // 0x30b5f0: 0x0  nop
    ctx->pc = 0x30b5f0u;
    // NOP
    // 0x30b5f4: 0x0  nop
    ctx->pc = 0x30b5f4u;
    // NOP
    // 0x30b5f8: 0x1482fffb  bne         $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30B5F8u;
    {
        const bool branch_taken_0x30b5f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x30B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5F8u;
        // 0x30b5fc: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5f8) {
            ctx->pc = 0x30B5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b5e8;
        }
    }
    ctx->pc = 0x30B600u;
    // 0x30b600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b604:
    // 0x30b604: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x30b604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30b608: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x30b608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30b60c: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x30b60cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30b610: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x30b610u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x30b614: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x30b614u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30b618: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x30b618u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x30b61c: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x30b61cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x30b620: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x30b620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30b624: 0x3e00008  jr          $ra
    ctx->pc = 0x30B624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B624u;
        // 0x30b628: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B62Cu;
    // 0x30b62c: 0x0  nop
    ctx->pc = 0x30b62cu;
    // NOP
    // 0x30b630: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b634: 0x0  nop
    ctx->pc = 0x30b634u;
    // NOP
    ctx->pc = 0x30b638u;
}
