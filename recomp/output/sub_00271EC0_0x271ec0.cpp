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

// Function: sub_00271EC0
// Address: 0x271ec0 - 0x2720a0
void sub_00271EC0_0x271ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271EC0_0x271ec0");
#endif

    switch (ctx->pc) {
        case 0x271eecu: goto label_271eec;
        case 0x271f00u: goto label_271f00;
        case 0x271f14u: goto label_271f14;
        case 0x271f28u: goto label_271f28;
        case 0x271f50u: goto label_271f50;
        case 0x271f64u: goto label_271f64;
        case 0x271f78u: goto label_271f78;
        case 0x271f8cu: goto label_271f8c;
        case 0x271fa0u: goto label_271fa0;
        case 0x271fecu: goto label_271fec;
        case 0x272000u: goto label_272000;
        case 0x272014u: goto label_272014;
        case 0x272028u: goto label_272028;
        case 0x27203cu: goto label_27203c;
        case 0x272088u: goto label_272088;
        default: break;
    }

    ctx->pc = 0x271ec0u;

    // 0x271ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x271ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x271ec4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x271ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x271ec8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x271ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ecc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x271eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x271ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x271ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ed4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271ed8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x271ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x271edc: 0x24a57f90  addiu       $a1, $a1, 0x7F90
    ctx->pc = 0x271edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32656));
    // 0x271ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ee4: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x271EE4u;
    SET_GPR_U32(ctx, 31, 0x271EECu);
    ctx->pc = 0x271EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271EE4u;
    // 0x271ee8: 0x26060224  addiu       $a2, $s0, 0x224 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x271EE4u, 0x271EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271EECu;
label_271eec:
    // 0x271eec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ef4: 0x24a57fa0  addiu       $a1, $a1, 0x7FA0
    ctx->pc = 0x271ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32672));
    // 0x271ef8: 0xc0b5e2c  jal         func_2D78B0
    ctx->pc = 0x271EF8u;
    SET_GPR_U32(ctx, 31, 0x271F00u);
    ctx->pc = 0x271EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271EF8u;
    // 0x271efc: 0x26060228  addiu       $a2, $s0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D78B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D78B0u, 0x271EF8u, 0x271F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F00u;
label_271f00:
    // 0x271f00: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271f04: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x271f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f08: 0x24a57fb8  addiu       $a1, $a1, 0x7FB8
    ctx->pc = 0x271f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32696));
    // 0x271f0c: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x271F0Cu;
    SET_GPR_U32(ctx, 31, 0x271F14u);
    ctx->pc = 0x271F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F0Cu;
    // 0x271f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x271F0Cu, 0x271F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F14u;
label_271f14:
    // 0x271f14: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271f18: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x271f18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x271f1c: 0x24a57fd8  addiu       $a1, $a1, 0x7FD8
    ctx->pc = 0x271f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32728));
    // 0x271f20: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x271F20u;
    SET_GPR_U32(ctx, 31, 0x271F28u);
    ctx->pc = 0x271F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F20u;
    // 0x271f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x271F20u, 0x271F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F28u;
label_271f28:
    // 0x271f28: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x271f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f2c: 0x26020230  addiu       $v0, $s0, 0x230
    ctx->pc = 0x271f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x271f30: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f38: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x271f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x271f3c: 0x24a57ff8  addiu       $a1, $a1, 0x7FF8
    ctx->pc = 0x271f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32760));
    // 0x271f40: 0x26060250  addiu       $a2, $s0, 0x250
    ctx->pc = 0x271f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x271f44: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x271f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f48: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x271F48u;
    SET_GPR_U32(ctx, 31, 0x271F50u);
    ctx->pc = 0x271F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F48u;
    // 0x271f4c: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x271F48u, 0x271F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F50u;
label_271f50:
    // 0x271f50: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x271f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x271f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f58: 0x24a58008  addiu       $a1, $a1, -0x7FF8
    ctx->pc = 0x271f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934536));
    // 0x271f5c: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x271F5Cu;
    SET_GPR_U32(ctx, 31, 0x271F64u);
    ctx->pc = 0x271F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F5Cu;
    // 0x271f60: 0x26060254  addiu       $a2, $s0, 0x254 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 596));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x271F5Cu, 0x271F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F64u;
label_271f64:
    // 0x271f64: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x271f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x271f68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f6c: 0x24a58018  addiu       $a1, $a1, -0x7FE8
    ctx->pc = 0x271f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934552));
    // 0x271f70: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x271F70u;
    SET_GPR_U32(ctx, 31, 0x271F78u);
    ctx->pc = 0x271F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F70u;
    // 0x271f74: 0x26060258  addiu       $a2, $s0, 0x258 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x271F70u, 0x271F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F78u;
label_271f78:
    // 0x271f78: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x271f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x271f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f80: 0x24a58028  addiu       $a1, $a1, -0x7FD8
    ctx->pc = 0x271f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934568));
    // 0x271f84: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x271F84u;
    SET_GPR_U32(ctx, 31, 0x271F8Cu);
    ctx->pc = 0x271F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F84u;
    // 0x271f88: 0x260602b0  addiu       $a2, $s0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x271F84u, 0x271F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F8Cu;
label_271f8c:
    // 0x271f8c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x271f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x271f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f94: 0x24a58038  addiu       $a1, $a1, -0x7FC8
    ctx->pc = 0x271f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934584));
    // 0x271f98: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x271F98u;
    SET_GPR_U32(ctx, 31, 0x271FA0u);
    ctx->pc = 0x271F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F98u;
    // 0x271f9c: 0x260602b4  addiu       $a2, $s0, 0x2B4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x271F98u, 0x271FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271FA0u;
label_271fa0:
    // 0x271fa0: 0xc60102b0  lwc1        $f1, 0x2B0($s0)
    ctx->pc = 0x271fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271fa4: 0x26020270  addiu       $v0, $s0, 0x270
    ctx->pc = 0x271fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x271fa8: 0xc60002b4  lwc1        $f0, 0x2B4($s0)
    ctx->pc = 0x271fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271fac: 0xe6010270  swc1        $f1, 0x270($s0)
    ctx->pc = 0x271facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x271fb0: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x271fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x271fb4: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x271fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x271fb8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x271fb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271fbc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x271fbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271fc0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x271fc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271fc4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x271fc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x271fc8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x271fc8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x271fcc: 0x4a0003bf  vwaitq
    ctx->pc = 0x271fccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x271fd0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x271fd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x271fd4: 0xfa010270  sqc2        $vf1, 0x270($s0)
    ctx->pc = 0x271fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271fd8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x271fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x271fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271fe0: 0x24a58048  addiu       $a1, $a1, -0x7FB8
    ctx->pc = 0x271fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934600));
    // 0x271fe4: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x271FE4u;
    SET_GPR_U32(ctx, 31, 0x271FECu);
    ctx->pc = 0x271FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271FE4u;
    // 0x271fe8: 0x26060280  addiu       $a2, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x271FE4u, 0x271FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271FECu;
label_271fec:
    // 0x271fec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x271fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x271ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ff4: 0x24a58058  addiu       $a1, $a1, -0x7FA8
    ctx->pc = 0x271ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934616));
    // 0x271ff8: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x271FF8u;
    SET_GPR_U32(ctx, 31, 0x272000u);
    ctx->pc = 0x271FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271FF8u;
    // 0x271ffc: 0x26060284  addiu       $a2, $s0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x271FF8u, 0x272000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272000u;
label_272000:
    // 0x272000: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x272000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x272004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272008: 0x24a58068  addiu       $a1, $a1, -0x7F98
    ctx->pc = 0x272008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934632));
    // 0x27200c: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x27200Cu;
    SET_GPR_U32(ctx, 31, 0x272014u);
    ctx->pc = 0x272010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27200Cu;
    // 0x272010: 0x26060288  addiu       $a2, $s0, 0x288 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x27200Cu, 0x272014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272014u;
label_272014:
    // 0x272014: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x272014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x272018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27201c: 0x24a58078  addiu       $a1, $a1, -0x7F88
    ctx->pc = 0x27201cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934648));
    // 0x272020: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x272020u;
    SET_GPR_U32(ctx, 31, 0x272028u);
    ctx->pc = 0x272024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272020u;
    // 0x272024: 0x260602b8  addiu       $a2, $s0, 0x2B8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x272020u, 0x272028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272028u;
label_272028:
    // 0x272028: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x272028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x27202c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27202cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272030: 0x24a58088  addiu       $a1, $a1, -0x7F78
    ctx->pc = 0x272030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934664));
    // 0x272034: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x272034u;
    SET_GPR_U32(ctx, 31, 0x27203Cu);
    ctx->pc = 0x272038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272034u;
    // 0x272038: 0x260602bc  addiu       $a2, $s0, 0x2BC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 700));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x272034u, 0x27203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27203Cu;
label_27203c:
    // 0x27203c: 0xc60102b8  lwc1        $f1, 0x2B8($s0)
    ctx->pc = 0x27203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272040: 0x260202a0  addiu       $v0, $s0, 0x2A0
    ctx->pc = 0x272040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x272044: 0xc60002bc  lwc1        $f0, 0x2BC($s0)
    ctx->pc = 0x272044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272048: 0xe60102a0  swc1        $f1, 0x2A0($s0)
    ctx->pc = 0x272048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    // 0x27204c: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x27204cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x272050: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x272050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x272054: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x272054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272058: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x272058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x27205c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x27205cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x272060: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x272060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x272064: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x272064u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x272068: 0x4a0003bf  vwaitq
    ctx->pc = 0x272068u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x27206c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x27206cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x272070: 0xfa0102a0  sqc2        $vf1, 0x2A0($s0)
    ctx->pc = 0x272070u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 672), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272074: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x272074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x272078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27207c: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x27207cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x272080: 0xc0b5e2c  jal         func_2D78B0
    ctx->pc = 0x272080u;
    SET_GPR_U32(ctx, 31, 0x272088u);
    ctx->pc = 0x272084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272080u;
    // 0x272084: 0x24a58098  addiu       $a1, $a1, -0x7F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D78B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D78B0u, 0x272080u, 0x272088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272088u;
label_272088:
    // 0x272088: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x272088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27208c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27208cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x272090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x272090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272094: 0x3e00008  jr          $ra
    ctx->pc = 0x272094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272094u;
        // 0x272098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27209Cu;
    // 0x27209c: 0x0  nop
    ctx->pc = 0x27209cu;
    // NOP
    ctx->pc = 0x2720a0u;
}
