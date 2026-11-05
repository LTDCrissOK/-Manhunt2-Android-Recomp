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

// Function: sub_00259B00
// Address: 0x259b00 - 0x25a190
void sub_00259B00_0x259b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259B00_0x259b00");
#endif

    switch (ctx->pc) {
        case 0x259b48u: goto label_259b48;
        case 0x259b50u: goto label_259b50;
        case 0x259b7cu: goto label_259b7c;
        case 0x259bb0u: goto label_259bb0;
        case 0x259bc4u: goto label_259bc4;
        case 0x259c58u: goto label_259c58;
        case 0x259c6cu: goto label_259c6c;
        case 0x259c88u: goto label_259c88;
        case 0x259cacu: goto label_259cac;
        case 0x259d10u: goto label_259d10;
        case 0x259d84u: goto label_259d84;
        case 0x259e04u: goto label_259e04;
        case 0x259e74u: goto label_259e74;
        case 0x259ed4u: goto label_259ed4;
        case 0x259f38u: goto label_259f38;
        case 0x259f44u: goto label_259f44;
        case 0x259f5cu: goto label_259f5c;
        case 0x259f74u: goto label_259f74;
        case 0x259f7cu: goto label_259f7c;
        case 0x25a084u: goto label_25a084;
        case 0x25a0e0u: goto label_25a0e0;
        case 0x25a0fcu: goto label_25a0fc;
        case 0x25a128u: goto label_25a128;
        case 0x25a144u: goto label_25a144;
        default: break;
    }

    ctx->pc = 0x259b00u;

    // 0x259b00: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x259b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x259b04: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x259b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x259b08: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x259b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x259b0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x259b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b10: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x259b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x259b14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x259b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x259b18: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x259b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x259b1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x259b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b20: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x259b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x259b24: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x259b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x259b28: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x259b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x259b2c: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x259b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x259b30: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x259b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x259b34: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x259b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x259b38: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x259b38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x259b3c: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x259b3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x259b40: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x259B40u;
    SET_GPR_U32(ctx, 31, 0x259B48u);
    ctx->pc = 0x259B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B40u;
    // 0x259b44: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x259B40u, 0x259B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B48u;
label_259b48:
    // 0x259b48: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x259B48u;
    SET_GPR_U32(ctx, 31, 0x259B50u);
    ctx->pc = 0x259B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B48u;
    // 0x259b4c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x259B48u, 0x259B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B50u;
label_259b50:
    // 0x259b50: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x259b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x259b54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x259b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259b58: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x259b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259b5c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x259b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x259b60: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x259b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x259b64: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x259b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x259b68: 0x24755b40  addiu       $s5, $v1, 0x5B40
    ctx->pc = 0x259b68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
    // 0x259b6c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x259b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x259b70: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x259b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x259b74: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x259B74u;
    SET_GPR_U32(ctx, 31, 0x259B7Cu);
    ctx->pc = 0x259B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B74u;
    // 0x259b78: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x259B74u, 0x259B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B7Cu;
label_259b7c:
    // 0x259b7c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x259b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x259b80: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x259b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x259b84: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x259b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x259b88: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x259B88u;
    {
        const bool branch_taken_0x259b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x259b88) {
            ctx->pc = 0x259B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259B88u;
            // 0x259b8c: 0x8e430104  lw          $v1, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259BCCu;
            goto label_259bcc;
        }
    }
    ctx->pc = 0x259B90u;
    // 0x259b90: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x259b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x259b94: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x259b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x259b98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x259b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x259b9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259ba0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x259ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x259ba4: 0x8c4500d4  lw          $a1, 0xD4($v0)
    ctx->pc = 0x259ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x259ba8: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x259BA8u;
    SET_GPR_U32(ctx, 31, 0x259BB0u);
    ctx->pc = 0x259BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259BA8u;
    // 0x259bac: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x259BA8u, 0x259BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259BB0u;
label_259bb0:
    // 0x259bb0: 0x8e500220  lw          $s0, 0x220($s2)
    ctx->pc = 0x259bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x259bb4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x259bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x259bb8: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x259bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x259bbc: 0xc049548  jal         func_125520
    ctx->pc = 0x259BBCu;
    SET_GPR_U32(ctx, 31, 0x259BC4u);
    ctx->pc = 0x259BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259BBCu;
    // 0x259bc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125520u, 0x259BBCu, 0x259BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259BC4u;
label_259bc4:
    // 0x259bc4: 0xae000390  sw          $zero, 0x390($s0)
    ctx->pc = 0x259bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 0));
    // 0x259bc8: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x259bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_259bcc:
    // 0x259bcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x259bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259bd0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x259bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x259bd4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x259bd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259bd8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x259bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x259bdc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x259bdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x259be0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x259be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259be4: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x259be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x259be8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x259be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x259bec: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x259becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259bf0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x259bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259bf4: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x259bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259bf8: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x259bf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x259bfc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x259bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x259c00: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x259c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x259c04: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x259c04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x259c08: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x259c08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259c0c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x259c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259c10: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x259c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x259c14: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x259c14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259c18: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x259c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x259c1c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x259c1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x259c20: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x259c20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x259c24: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x259c24u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x259c28: 0x4a0003bf  vwaitq
    ctx->pc = 0x259c28u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x259c2c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x259c2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x259c30: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x259c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259c34: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x259c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c38: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x259c38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x259c3c: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x259c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x259c40: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x259c40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x259c44: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x259c44u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x259c48: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x259c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259c4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x259c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x259c50: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x259C50u;
    SET_GPR_U32(ctx, 31, 0x259C58u);
    ctx->pc = 0x259C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C50u;
    // 0x259c54: 0x3c1e0100  lui         $fp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x259C50u, 0x259C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C58u;
label_259c58:
    // 0x259c58: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x259c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x259c5c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x259c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x259c60: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x259c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x259c64: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x259C64u;
    SET_GPR_U32(ctx, 31, 0x259C6Cu);
    ctx->pc = 0x259C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C64u;
    // 0x259c68: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x259C64u, 0x259C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C6Cu;
label_259c6c:
    // 0x259c6c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x259c6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c70: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x259c70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x259c74: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x259c74u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x259c78: 0x27b70060  addiu       $s7, $sp, 0x60
    ctx->pc = 0x259c78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x259c7c: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x259c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c80: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x259c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x259c84: 0x0  nop
    ctx->pc = 0x259c84u;
    // NOP
label_259c88:
    // 0x259c88: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x259c88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259c8c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x259c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259c90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x259c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x259c94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259c98: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x259c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x259c9c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x259c9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x259ca0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x259ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x259ca4: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x259CA4u;
    SET_GPR_U32(ctx, 31, 0x259CACu);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x259CA4u, 0x259CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259CACu;
label_259cac:
    // 0x259cac: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x259cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x259cb0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x259cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x259cb4: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x259cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259cb8: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x259cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259cbc: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x259cbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x259cc0: 0xc6a4000c  lwc1        $f4, 0xC($s5)
    ctx->pc = 0x259cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x259cc4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x259cc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x259cc8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x259cc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x259ccc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x259cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x259cd0: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x259cd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x259cd4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x259cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x259cd8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x259cd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x259cdc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x259cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x259ce0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x259ce0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x259ce4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x259ce4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259ce8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x259ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x259cec: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x259cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259cf0: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x259cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
    // 0x259cf4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x259cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x259cf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259cfc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x259cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x259d00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x259d00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x259d04: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x259d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x259d08: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x259D08u;
    SET_GPR_U32(ctx, 31, 0x259D10u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x259D08u, 0x259D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D10u;
label_259d10:
    // 0x259d10: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x259d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x259d14: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x259d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x259d18: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x259d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259d1c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x259d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259d20: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x259d20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x259d24: 0xc7a4004c  lwc1        $f4, 0x4C($sp)
    ctx->pc = 0x259d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x259d28: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x259d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x259d2c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x259d2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x259d30: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x259d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x259d34: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x259d34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x259d38: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x259d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x259d3c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x259d3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x259d40: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x259d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x259d44: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x259d44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x259d48: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x259d48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x259d4c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x259d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x259d50: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x259d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259d54: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x259d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x259d58: 0xc4409930  lwc1        $f0, -0x66D0($v0)
    ctx->pc = 0x259d58u;
    { uint32_t bits = FAST_READ32(0x3F9930u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259d5c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x259d5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x259d60: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x259d60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x259d64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x259d64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x259d68: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x259d68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x259d6c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x259d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259d70: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x259d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x259d74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x259D74u;
    {
        const bool branch_taken_0x259d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D74u;
        // 0x259d78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d74) {
            ctx->pc = 0x259D8Cu;
            goto label_259d8c;
        }
    }
    ctx->pc = 0x259D7Cu;
    // 0x259d7c: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x259D7Cu;
    SET_GPR_U32(ctx, 31, 0x259D84u);
    ctx->pc = 0x259D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259D7Cu;
    // 0x259d80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x259D7Cu, 0x259D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D84u;
label_259d84:
    // 0x259d84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x259D84u;
    {
        const bool branch_taken_0x259d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D84u;
        // 0x259d88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d84) {
            ctx->pc = 0x259D90u;
            goto label_259d90;
        }
    }
    ctx->pc = 0x259D8Cu;
label_259d8c:
    // 0x259d8c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x259d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_259d90:
    // 0x259d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259d94: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x259D94u;
    {
        const bool branch_taken_0x259d94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x259D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D94u;
        // 0x259d98: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d94) {
            ctx->pc = 0x259DE4u;
            goto label_259de4;
        }
    }
    ctx->pc = 0x259D9Cu;
    // 0x259d9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x259D9Cu;
    {
        const bool branch_taken_0x259d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D9Cu;
        // 0x259da0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d9c) {
            ctx->pc = 0x259DB4u;
            goto label_259db4;
        }
    }
    ctx->pc = 0x259DA4u;
    // 0x259da4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x259DA4u;
    {
        const bool branch_taken_0x259da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DA4u;
        // 0x259da8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259da4) {
            ctx->pc = 0x259DCCu;
            goto label_259dcc;
        }
    }
    ctx->pc = 0x259DACu;
    // 0x259dac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x259DACu;
    {
        const bool branch_taken_0x259dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DACu;
        // 0x259db0: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259dac) {
            ctx->pc = 0x259E28u;
            goto label_259e28;
        }
    }
    ctx->pc = 0x259DB4u;
label_259db4:
    // 0x259db4: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x259DB4u;
    {
        const bool branch_taken_0x259db4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x259DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DB4u;
        // 0x259db8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259db4) {
            ctx->pc = 0x259E0Cu;
            goto label_259e0c;
        }
    }
    ctx->pc = 0x259DBCu;
    // 0x259dbc: 0x12250017  beq         $s1, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x259DBCu;
    {
        const bool branch_taken_0x259dbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x259DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DBCu;
        // 0x259dc0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259dbc) {
            ctx->pc = 0x259E1Cu;
            goto label_259e1c;
        }
    }
    ctx->pc = 0x259DC4u;
    // 0x259dc4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x259DC4u;
    {
        const bool branch_taken_0x259dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DC4u;
        // 0x259dc8: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259dc4) {
            ctx->pc = 0x259E28u;
            goto label_259e28;
        }
    }
    ctx->pc = 0x259DCCu;
label_259dcc:
    // 0x259dcc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x259dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x259dd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259dd4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x259dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x259dd8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x259dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x259ddc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x259DDCu;
    {
        const bool branch_taken_0x259ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DDCu;
        // 0x259de0: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ddc) {
            ctx->pc = 0x259DFCu;
            goto label_259dfc;
        }
    }
    ctx->pc = 0x259DE4u;
label_259de4:
    // 0x259de4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x259de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x259de8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x259de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x259dec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259df0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x259df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x259df4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x259df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x259df8: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x259df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_259dfc:
    // 0x259dfc: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x259DFCu;
    SET_GPR_U32(ctx, 31, 0x259E04u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x259DFCu, 0x259E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E04u;
label_259e04:
    // 0x259e04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x259E04u;
    {
        const bool branch_taken_0x259e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E04u;
        // 0x259e08: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e04) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259E0Cu;
label_259e0c:
    // 0x259e0c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x259e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x259e10: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x259e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x259e14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x259E14u;
    {
        const bool branch_taken_0x259e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E14u;
        // 0x259e18: 0xafa500f0  sw          $a1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e14) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259E1Cu;
label_259e1c:
    // 0x259e1c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x259e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x259e20: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x259e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_259e24:
    // 0x259e24: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x259e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_259e28:
    // 0x259e28: 0xa3a00051  sb          $zero, 0x51($sp)
    ctx->pc = 0x259e28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x259e2c: 0x5e1026  xor         $v0, $v0, $fp
    ctx->pc = 0x259e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 30));
    // 0x259e30: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x259e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x259e34: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x259e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x259e38: 0xa3a00050  sb          $zero, 0x50($sp)
    ctx->pc = 0x259e38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x259e3c: 0xa3a20052  sb          $v0, 0x52($sp)
    ctx->pc = 0x259e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 82), (uint8_t)GPR_U32(ctx, 2));
    // 0x259e40: 0x8e440220  lw          $a0, 0x220($s2)
    ctx->pc = 0x259e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x259e44: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x259e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x259e48: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x259e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x259e4c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x259e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x259e50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x259e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x259e54: 0xa3a20051  sb          $v0, 0x51($sp)
    ctx->pc = 0x259e54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 2));
    // 0x259e58: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x259e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x259e5c: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x259e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x259e60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x259e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x259e64: 0x16230019  bne         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x259E64u;
    {
        const bool branch_taken_0x259e64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x259e64) {
            ctx->pc = 0x259ECCu;
            goto label_259ecc;
        }
    }
    ctx->pc = 0x259E6Cu;
    // 0x259e6c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x259E6Cu;
    SET_GPR_U32(ctx, 31, 0x259E74u);
    ctx->pc = 0x259E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E6Cu;
    // 0x259e70: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x259E6Cu, 0x259E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E74u;
label_259e74:
    // 0x259e74: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x259e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x259e78: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x259e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x259e7c: 0x24a5ac40  addiu       $a1, $a1, -0x53C0
    ctx->pc = 0x259e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945856));
    // 0x259e80: 0x3c013be5  lui         $at, 0x3BE5
    ctx->pc = 0x259e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15333 << 16));
    // 0x259e84: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x259e84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x259e88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259e8c: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x259e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6BAC4Cu));
    // 0x259e90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x259e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e94: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x259e94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259e98: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x259e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x259e9c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x259e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x259ea0: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x259ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x259ea4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x259ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x259ea8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x259ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x259eac: 0x25080070  addiu       $t0, $t0, 0x70
    ctx->pc = 0x259eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x259eb0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x259eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x259eb4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x259eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x259eb8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x259eb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ebc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x259ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x259ec0: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x259ec0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259ec4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x259EC4u;
    {
        const bool branch_taken_0x259ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EC4u;
        // 0x259ec8: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ec4) {
            ctx->pc = 0x259F30u;
            goto label_259f30;
        }
    }
    ctx->pc = 0x259ECCu;
label_259ecc:
    // 0x259ecc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x259ECCu;
    SET_GPR_U32(ctx, 31, 0x259ED4u);
    ctx->pc = 0x259ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259ECCu;
    // 0x259ed0: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x259ECCu, 0x259ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259ED4u;
label_259ed4:
    // 0x259ed4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x259ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x259ed8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x259ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x259edc: 0x24a5ac40  addiu       $a1, $a1, -0x53C0
    ctx->pc = 0x259edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945856));
    // 0x259ee0: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x259ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x259ee4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x259ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x259ee8: 0x3c013cd4  lui         $at, 0x3CD4
    ctx->pc = 0x259ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15572 << 16));
    // 0x259eec: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x259eecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x259ef0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259ef4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x259ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x259ef8: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x259ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x259efc: 0x24a5a190  addiu       $a1, $a1, -0x5E70
    ctx->pc = 0x259efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943120));
    // 0x259f00: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x259f00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259f04: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x259f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x259f08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x259f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f0c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x259f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x259f10: 0x25080070  addiu       $t0, $t0, 0x70
    ctx->pc = 0x259f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x259f14: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x259f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x259f18: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x259f18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x259f1c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x259f1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f20: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x259f20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259f24: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x259f24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x259f28: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x259f28u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x259f2c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x259f2cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_259f30:
    // 0x259f30: 0xc0d1d7e  jal         func_3475F8
    ctx->pc = 0x259F30u;
    SET_GPR_U32(ctx, 31, 0x259F38u);
    ctx->pc = 0x259F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F30u;
    // 0x259f34: 0x4600ac06  mov.s       $f16, $f21 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3475F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3475F8u, 0x259F30u, 0x259F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F38u;
label_259f38:
    // 0x259f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f3c: 0xc0d438a  jal         func_350E28
    ctx->pc = 0x259F3Cu;
    SET_GPR_U32(ctx, 31, 0x259F44u);
    ctx->pc = 0x259F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F3Cu;
    // 0x259f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E28u, 0x259F3Cu, 0x259F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F44u;
label_259f44:
    // 0x259f44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x259F44u;
    {
        const bool branch_taken_0x259f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F44u;
        // 0x259f48: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f44) {
            ctx->pc = 0x259F60u;
            goto label_259f60;
        }
    }
    ctx->pc = 0x259F4Cu;
    // 0x259f4c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259F4Cu;
    {
        const bool branch_taken_0x259f4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F4Cu;
        // 0x259f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f4c) {
            ctx->pc = 0x259F60u;
            goto label_259f60;
        }
    }
    ctx->pc = 0x259F54u;
    // 0x259f54: 0xc0d1e40  jal         func_347900
    ctx->pc = 0x259F54u;
    SET_GPR_U32(ctx, 31, 0x259F5Cu);
    ctx->pc = 0x259F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F54u;
    // 0x259f58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x259F54u, 0x259F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F5Cu;
label_259f5c:
    // 0x259f5c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x259f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_259f60:
    // 0x259f60: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x259f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x259f64: 0x50400078  beql        $v0, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x259F64u;
    {
        const bool branch_taken_0x259f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259f64) {
            ctx->pc = 0x259F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259F64u;
            // 0x259f68: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A148u;
            goto label_25a148;
        }
    }
    ctx->pc = 0x259F6Cu;
    // 0x259f6c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x259F6Cu;
    SET_GPR_U32(ctx, 31, 0x259F74u);
    ctx->pc = 0x259F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F6Cu;
    // 0x259f70: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x259F6Cu, 0x259F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F74u;
label_259f74:
    // 0x259f74: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x259F74u;
    SET_GPR_U32(ctx, 31, 0x259F7Cu);
    ctx->pc = 0x259F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F74u;
    // 0x259f78: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x259F74u, 0x259F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F7Cu;
label_259f7c:
    // 0x259f7c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x259f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259f80: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x259f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x259f84: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x259f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x259f88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x259f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259f8c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x259f8cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x259f90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x259f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259f94: 0x0  nop
    ctx->pc = 0x259f94u;
    // NOP
    // 0x259f98: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x259F98u;
    {
        const bool branch_taken_0x259f98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F98u;
        // 0x259f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f98) {
            ctx->pc = 0x259FCCu;
            goto label_259fcc;
        }
    }
    ctx->pc = 0x259FA0u;
    // 0x259fa0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x259fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259fa4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x259fa4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x259fa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x259fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259fac: 0x0  nop
    ctx->pc = 0x259facu;
    // NOP
    // 0x259fb0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x259FB0u;
    {
        const bool branch_taken_0x259fb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FB0u;
        // 0x259fb4: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259fb0) {
            ctx->pc = 0x259FCCu;
            goto label_259fcc;
        }
    }
    ctx->pc = 0x259FB8u;
    // 0x259fb8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x259fb8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x259fbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x259fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259fc0: 0x0  nop
    ctx->pc = 0x259fc0u;
    // NOP
    // 0x259fc4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x259FC4u;
    {
        const bool branch_taken_0x259fc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x259fc4) {
            ctx->pc = 0x259FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259FC4u;
            // 0x259fc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259FCCu;
            goto label_259fcc;
        }
    }
    ctx->pc = 0x259FCCu;
label_259fcc:
    // 0x259fcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x259FCCu;
    {
        const bool branch_taken_0x259fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259fcc) {
            ctx->pc = 0x259FE4u;
            goto label_259fe4;
        }
    }
    ctx->pc = 0x259FD4u;
    // 0x259fd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x259fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x259fd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x259fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259fdc: 0x0  nop
    ctx->pc = 0x259fdcu;
    // NOP
    // 0x259fe0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x259fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_259fe4:
    // 0x259fe4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x259fe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x259fe8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x259fe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x259fec: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x259fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x259ff0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x259ff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x259ff4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x259ff4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x259ff8: 0x4a0003bf  vwaitq
    ctx->pc = 0x259ff8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x259ffc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x259ffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25a000: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x25a000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25a004: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x25a004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x25a008: 0x24425b50  addiu       $v0, $v0, 0x5B50
    ctx->pc = 0x25a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23376));
    // 0x25a00c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x25a00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25a010: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x25a010u;
    { uint32_t bits = FAST_READ32(0x575B50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25a014: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x25a014u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x25a018: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x25a018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25a01c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x25a01cu;
    { uint32_t bits = FAST_READ32(0x575B54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25a020: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x25a020u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x25a024: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x25a024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25a028: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x25a028u;
    { uint32_t bits = FAST_READ32(0x575B58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25a02c: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x25a02cu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x25a030: 0x46166834  c.lt.s      $f13, $f22
    ctx->pc = 0x25a030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25a034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25a038: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a03c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25A03Cu;
    {
        const bool branch_taken_0x25a03c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a03c) {
            ctx->pc = 0x25A054u;
            goto label_25a054;
        }
    }
    ctx->pc = 0x25A044u;
    // 0x25a044: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x25a044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x25a048: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25a048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x25a04c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25A04Cu;
    {
        const bool branch_taken_0x25a04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A04Cu;
        // 0x25a050: 0x460d6802  mul.s       $f0, $f13, $f13 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a04c) {
            ctx->pc = 0x25A068u;
            goto label_25a068;
        }
    }
    ctx->pc = 0x25A054u;
label_25a054:
    // 0x25a054: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x25a054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a058: 0x0  nop
    ctx->pc = 0x25a058u;
    // NOP
    // 0x25a05c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25A05Cu;
    {
        const bool branch_taken_0x25a05c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a05c) {
            ctx->pc = 0x25A060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A05Cu;
            // 0x25a060: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A064u;
            goto label_25a064;
        }
    }
    ctx->pc = 0x25A064u;
label_25a064:
    // 0x25a064: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x25a064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_25a068:
    // 0x25a068: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25a068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25a06c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25a06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a070: 0x0  nop
    ctx->pc = 0x25a070u;
    // NOP
    // 0x25a074: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x25a074u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x25a078: 0x460c0304  c1          0xC0304
    ctx->pc = 0x25a078u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x25a07c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x25A07Cu;
    SET_GPR_U32(ctx, 31, 0x25A084u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x25A07Cu, 0x25A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A084u;
label_25a084:
    // 0x25a084: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x25a084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x25a088: 0x24635b50  addiu       $v1, $v1, 0x5B50
    ctx->pc = 0x25a088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23376));
    // 0x25a08c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x25a08cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x25a090: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x25a090u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x575B50u));
    // 0x25a094: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x25a094u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x25a098: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x25a098u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25a09c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x25a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25a0a0: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x25a0a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x25a0a4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x25a0a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25a0a8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x25a0a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25a0ac: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x25a0acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25a0b0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x25a0b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x25a0b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x25a0b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25a0b8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x25a0b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25a0bc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x25a0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25a0c0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x25a0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x25a0c4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x25a0c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x25a0c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25a0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a0cc: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x25a0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25a0d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0d4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x25a0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0d8: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x25A0D8u;
    SET_GPR_U32(ctx, 31, 0x25A0E0u);
    ctx->pc = 0x25A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0D8u;
    // 0x25a0dc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x25A0D8u, 0x25A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0E0u;
label_25a0e0:
    // 0x25a0e0: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x25a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x25a0e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a0e8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x25a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25a0ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x25a0ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a0f0: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x25a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25a0f4: 0xc083fd0  jal         func_20FF40
    ctx->pc = 0x25A0F4u;
    SET_GPR_U32(ctx, 31, 0x25A0FCu);
    ctx->pc = 0x25A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0F4u;
    // 0x25a0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FF40u, 0x25A0F4u, 0x25A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0FCu;
label_25a0fc:
    // 0x25a0fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25a0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a100: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25a100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a104: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25A104u;
    {
        const bool branch_taken_0x25a104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A104u;
        // 0x25a108: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a104) {
            ctx->pc = 0x25A144u;
            goto label_25a144;
        }
    }
    ctx->pc = 0x25A10Cu;
    // 0x25a10c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25a10cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25a110: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x25a110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    // 0x25a114: 0x24a55618  addiu       $a1, $a1, 0x5618
    ctx->pc = 0x25a114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22040));
    // 0x25a118: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25a118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a11c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25a11cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a120: 0xc0b0a1c  jal         func_2C2870
    ctx->pc = 0x25A120u;
    SET_GPR_U32(ctx, 31, 0x25A128u);
    ctx->pc = 0x25A124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A120u;
    // 0x25a124: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2870u, 0x25A120u, 0x25A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A128u;
label_25a128:
    // 0x25a128: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25a128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a12c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A12Cu;
    {
        const bool branch_taken_0x25a12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A12Cu;
        // 0x25a130: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a12c) {
            ctx->pc = 0x25A144u;
            goto label_25a144;
        }
    }
    ctx->pc = 0x25A134u;
    // 0x25a134: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x25a134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a138: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25a13c: 0xc0b0ef2  jal         func_2C3BC8
    ctx->pc = 0x25A13Cu;
    SET_GPR_U32(ctx, 31, 0x25A144u);
    ctx->pc = 0x25A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A13Cu;
    // 0x25a140: 0xac4301d8  sw          $v1, 0x1D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x25A13Cu, 0x25A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A144u;
label_25a144:
    // 0x25a144: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x25a144u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_25a148:
    // 0x25a148: 0x2a82000d  slti        $v0, $s4, 0xD
    ctx->pc = 0x25a148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x25a14c: 0x5440fece  bnel        $v0, $zero, . + 4 + (-0x132 << 2)
    ctx->pc = 0x25A14Cu;
    {
        const bool branch_taken_0x25a14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a14c) {
            ctx->pc = 0x25A150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A14Cu;
            // 0x25a150: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259c88;
        }
    }
    ctx->pc = 0x25A154u;
    // 0x25a154: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x25a154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25a158: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x25a158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25a15c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x25a15cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x25a160: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x25a160u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x25a164: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x25a164u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25a168: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x25a168u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25a16c: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x25a16cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25a170: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x25a170u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25a174: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x25a174u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x25a178: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x25a178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x25a17c: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x25a17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25a180: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x25a180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25a184: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x25a184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a188: 0x3e00008  jr          $ra
    ctx->pc = 0x25A188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A188u;
        // 0x25a18c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A190u;
}
