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

// Function: sub_0025C050
// Address: 0x25c050 - 0x25c320
void sub_0025C050_0x25c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C050_0x25c050");
#endif

    switch (ctx->pc) {
        case 0x25c0c4u: goto label_25c0c4;
        case 0x25c0ccu: goto label_25c0cc;
        case 0x25c2bcu: goto label_25c2bc;
        case 0x25c2d4u: goto label_25c2d4;
        case 0x25c2e0u: goto label_25c2e0;
        default: break;
    }

    ctx->pc = 0x25c050u;

    // 0x25c050: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x25c050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x25c054: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x25c054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x25c058: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x25c058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x25c05c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c060: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x25c060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x25c064: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x25c064u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x25c068: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x25c068u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x25c06c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x25c06cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25c070: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x25C070u;
    {
        const bool branch_taken_0x25c070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C070u;
        // 0x25c074: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c070) {
            ctx->pc = 0x25C304u;
            goto label_25c304;
        }
    }
    ctx->pc = 0x25C078u;
    // 0x25c078: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x25c078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c07c: 0xc4552b30  lwc1        $f21, 0x2B30($v0)
    ctx->pc = 0x25c07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25c080: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x25c080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25c084: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25c084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25c088: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25c088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25c08c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x25c08cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c090: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25c090u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25c094: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x25c094u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25c098: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x25c098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25c09c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c0a0: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x25c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x25c0a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c0a8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x25c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25c0ac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x25c0acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c0b0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x25c0b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c0b4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25c0b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25c0b8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x25c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25c0bc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25C0BCu;
    SET_GPR_U32(ctx, 31, 0x25C0C4u);
    ctx->pc = 0x25C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C0BCu;
    // 0x25c0c0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25C0BCu, 0x25C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0C4u;
label_25c0c4:
    // 0x25c0c4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25C0C4u;
    SET_GPR_U32(ctx, 31, 0x25C0CCu);
    ctx->pc = 0x25C0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C0C4u;
    // 0x25c0c8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25C0C4u, 0x25C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0CCu;
label_25c0cc:
    // 0x25c0cc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x25c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x25c0d0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25c0d4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x25c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x25c0d8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x25c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x25c0dc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x25c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x25c0e0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x25c0e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25c0e4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x25c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x25c0e8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x25c0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x25c0ec: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x25c0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x25c0f0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x25c0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x25c0f4: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x25c0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x25c0f8: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x25c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x25c0fc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x25c0fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c100: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x25c100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25c104: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25c104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25c108: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x25c108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x25c10c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x25c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x25c110: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x25c110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x25c114: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x25c114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x25c118: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x25c118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c11c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x25c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25c120: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x25c120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x25c124: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x25c124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x25c128: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c12c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x25c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x25c130: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x25c130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x25c134: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x25c134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x25c138: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x25c138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x25c13c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x25c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x25c140: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x25c140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x25c144: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25c144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c148: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x25c148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x25c14c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c150: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x25c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25c154: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x25c154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c158: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x25c158u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c15c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25c15cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25c160: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x25c160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25c164: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x25c164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c168: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x25c168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25c16c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x25c16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c170: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x25c170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c174: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x25c174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c178: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x25c178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x25c17c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x25c17cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x25c180: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x25c180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x25c184: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x25c184u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x25c188: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x25c188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25c18c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x25c18cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c190: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25c190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25c194: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x25c194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25c198: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x25c198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c19c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25c1a0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x25c1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c1a4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x25c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25c1a8: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x25c1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c1ac: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x25c1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c1b0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x25c1b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25c1b4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x25c1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x25c1b8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x25c1b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x25c1bc: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x25c1bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x25c1c0: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x25c1c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x25c1c4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x25c1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x25c1c8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x25c1c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c1cc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x25c1ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c1d0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25c1d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25c1d4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x25c1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25c1d8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x25c1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c1dc: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x25c1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c1e0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x25c1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25c1e4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x25c1e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x25c1e8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x25c1e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x25c1ec: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x25c1ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x25c1f0: 0x0  nop
    ctx->pc = 0x25c1f0u;
    // NOP
    // 0x25c1f4: 0x0  nop
    ctx->pc = 0x25c1f4u;
    // NOP
    // 0x25c1f8: 0x46000044  c1          0x44
    ctx->pc = 0x25c1f8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x25c1fc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x25c1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x25c200: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x25c200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25c204: 0x0  nop
    ctx->pc = 0x25c204u;
    // NOP
    // 0x25c208: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x25c208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c20c: 0x0  nop
    ctx->pc = 0x25c20cu;
    // NOP
    // 0x25c210: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x25C210u;
    {
        const bool branch_taken_0x25c210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C210u;
        // 0x25c214: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c210) {
            ctx->pc = 0x25C23Cu;
            goto label_25c23c;
        }
    }
    ctx->pc = 0x25C218u;
    // 0x25c218: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c21c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c220: 0x0  nop
    ctx->pc = 0x25c220u;
    // NOP
    // 0x25c224: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25c224u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x25c228: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25c228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25c22c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x25c22cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25c230: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25c230u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25c234: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x25c234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25c238: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x25c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_25c23c:
    // 0x25c23c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x25c23cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25c240: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x25c240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x25c244: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x25c244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c248: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x25c248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c24c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25c24cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25c250: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x25c250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25c254: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x25c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c258: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x25c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c25c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x25c25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25c260: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x25c260u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x25c264: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x25c264u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x25c268: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x25c268u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x25c26c: 0x0  nop
    ctx->pc = 0x25c26cu;
    // NOP
    // 0x25c270: 0x0  nop
    ctx->pc = 0x25c270u;
    // NOP
    // 0x25c274: 0x46000044  c1          0x44
    ctx->pc = 0x25c274u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x25c278: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x25c278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x25c27c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x25c27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c280: 0x0  nop
    ctx->pc = 0x25c280u;
    // NOP
    // 0x25c284: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x25C284u;
    {
        const bool branch_taken_0x25c284 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C284u;
        // 0x25c288: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c284) {
            ctx->pc = 0x25C2B0u;
            goto label_25c2b0;
        }
    }
    ctx->pc = 0x25C28Cu;
    // 0x25c28c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c294: 0x0  nop
    ctx->pc = 0x25c294u;
    // NOP
    // 0x25c298: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25c298u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x25c29c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25c29cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25c2a0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x25c2a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25c2a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25c2a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25c2a8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x25c2a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25c2ac: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x25c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_25c2b0:
    // 0x25c2b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x25c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25c2b4: 0xc07788a  jal         func_1DE228
    ctx->pc = 0x25C2B4u;
    SET_GPR_U32(ctx, 31, 0x25C2BCu);
    ctx->pc = 0x25C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C2B4u;
    // 0x25c2b8: 0x24050210  addiu       $a1, $zero, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x25C2B4u, 0x25C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C2BCu;
label_25c2bc:
    // 0x25c2bc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C2BCu;
    {
        const bool branch_taken_0x25c2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c2bc) {
            ctx->pc = 0x25C2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C2BCu;
            // 0x25c2c0: 0xc6000020  lwc1        $f0, 0x20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C2E4u;
            goto label_25c2e4;
        }
    }
    ctx->pc = 0x25C2C4u;
    // 0x25c2c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c2c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25c2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c2cc: 0xc08d78e  jal         func_235E38
    ctx->pc = 0x25C2CCu;
    SET_GPR_U32(ctx, 31, 0x25C2D4u);
    ctx->pc = 0x25C2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C2CCu;
    // 0x25c2d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235E38u, 0x25C2CCu, 0x25C2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C2D4u;
label_25c2d4:
    // 0x25c2d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c2d8: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x25C2D8u;
    SET_GPR_U32(ctx, 31, 0x25C2E0u);
    ctx->pc = 0x25C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C2D8u;
    // 0x25c2dc: 0x8c4400c4  lw          $a0, 0xC4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x25C2D8u, 0x25C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C2E0u;
label_25c2e0:
    // 0x25c2e0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x25c2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c2e4:
    // 0x25c2e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c2e8: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x25c2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x25c2ec: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x25c2ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c2f0: 0x0  nop
    ctx->pc = 0x25c2f0u;
    // NOP
    // 0x25c2f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25C2F4u;
    {
        const bool branch_taken_0x25c2f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C2F4u;
        // 0x25c2f8: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c2f4) {
            ctx->pc = 0x25C300u;
            goto label_25c300;
        }
    }
    ctx->pc = 0x25C2FCu;
    // 0x25c2fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25c2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c300:
    // 0x25c300: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x25c300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_25c304:
    // 0x25c304: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x25c304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25c308: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x25c308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x25c30c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x25c30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25c310: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x25c310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25c314: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x25c314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25c318: 0x3e00008  jr          $ra
    ctx->pc = 0x25C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C318u;
        // 0x25c31c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C320u;
}
