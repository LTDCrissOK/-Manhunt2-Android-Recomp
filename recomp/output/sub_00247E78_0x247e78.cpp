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

// Function: sub_00247E78
// Address: 0x247e78 - 0x248000
void sub_00247E78_0x247e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247E78_0x247e78");
#endif

    switch (ctx->pc) {
        case 0x247ea0u: goto label_247ea0;
        case 0x247eb4u: goto label_247eb4;
        case 0x247f50u: goto label_247f50;
        case 0x247f68u: goto label_247f68;
        case 0x247f88u: goto label_247f88;
        case 0x247fa4u: goto label_247fa4;
        case 0x247fb0u: goto label_247fb0;
        case 0x247fbcu: goto label_247fbc;
        case 0x247fc4u: goto label_247fc4;
        case 0x247fd0u: goto label_247fd0;
        case 0x247fd8u: goto label_247fd8;
        default: break;
    }

    ctx->pc = 0x247e78u;

    // 0x247e78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x247e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x247e7c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x247e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x247e80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x247e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247e84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x247e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247e88: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x247e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x247e8c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x247e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x247e90: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x247e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x247e94: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x247e94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x247e98: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x247E98u;
    SET_GPR_U32(ctx, 31, 0x247EA0u);
    ctx->pc = 0x247E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E98u;
    // 0x247e9c: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x247E98u, 0x247EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EA0u;
label_247ea0:
    // 0x247ea0: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x247ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x247ea4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x247ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ea8: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x247ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x247eac: 0xc0c3290  jal         func_30CA40
    ctx->pc = 0x247EACu;
    SET_GPR_U32(ctx, 31, 0x247EB4u);
    ctx->pc = 0x247EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247EACu;
    // 0x247eb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA40u, 0x247EACu, 0x247EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EB4u;
label_247eb4:
    // 0x247eb4: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x247eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x247eb8: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x247eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x247ebc: 0x24923cc0  addiu       $s2, $a0, 0x3CC0
    ctx->pc = 0x247ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 15552));
    // 0x247ec0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x247ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x247ec4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x247ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247ec8: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x247ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247ecc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x247eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x247ed0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x247ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x247ed4: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x247ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x247ed8: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x247ed8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x247edc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x247edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247ee0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x247ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x247ee4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x247ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247ee8: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x247ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x247eec: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x247eecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x247ef0: 0xf8813cc0  sqc2        $vf1, 0x3CC0($a0)
    ctx->pc = 0x247ef0u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4B3CC0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4B3CC0u, _value); } while (0);
    // 0x247ef4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x247ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247ef8: 0x3c013f65  lui         $at, 0x3F65
    ctx->pc = 0x247ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16229 << 16));
    // 0x247efc: 0x3421a1cb  ori         $at, $at, 0xA1CB
    ctx->pc = 0x247efcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41419);
    // 0x247f00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x247f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x247f04: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x247f04u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x247f08: 0xc6140374  lwc1        $f20, 0x374($s0)
    ctx->pc = 0x247f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x247f0c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x247f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x247f10: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x247f10u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x247f14: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x247f14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x247f18: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x247f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x247f1c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x247f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x247f20: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x247f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x247f24: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x247f24u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x247f28: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x247f28u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x247f2c: 0x4604255c  madd.s      $f21, $f4, $f4
    ctx->pc = 0x247f2cu;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x247f30: 0x46150544  c1          0x150544
    ctx->pc = 0x247f30u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x247f34: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x247f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x247f38: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x247f38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x247f3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f40: 0x0  nop
    ctx->pc = 0x247f40u;
    // NOP
    // 0x247f44: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x247f44u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x247f48: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x247F48u;
    SET_GPR_U32(ctx, 31, 0x247F50u);
    ctx->pc = 0x247F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F48u;
    // 0x247f4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x247F48u, 0x247F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F50u;
label_247f50:
    // 0x247f50: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x247f50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x247f54: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x247f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247f58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x247f58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x247f5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x247f5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247f60: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x247F60u;
    SET_GPR_U32(ctx, 31, 0x247F68u);
    ctx->pc = 0x247F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F60u;
    // 0x247f64: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x247F60u, 0x247F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F68u;
label_247f68:
    // 0x247f68: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x247f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x247f6c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x247f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247f70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247f78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x247f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247f7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x247f7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247f80: 0xc09568e  jal         func_255A38
    ctx->pc = 0x247F80u;
    SET_GPR_U32(ctx, 31, 0x247F88u);
    ctx->pc = 0x247F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F80u;
    // 0x247f84: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A38u, 0x247F80u, 0x247F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F88u;
label_247f88:
    // 0x247f88: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x247f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x247f8c: 0x24453cd0  addiu       $a1, $v0, 0x3CD0
    ctx->pc = 0x247f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15568));
    // 0x247f90: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x247f90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x247f94: 0xf8413cd0  sqc2        $vf1, 0x3CD0($v0)
    ctx->pc = 0x247f94u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4B3CD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4B3CD0u, _value); } while (0);
    // 0x247f98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247f9c: 0xc092b7a  jal         func_24ADE8
    ctx->pc = 0x247F9Cu;
    SET_GPR_U32(ctx, 31, 0x247FA4u);
    ctx->pc = 0x247FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F9Cu;
    // 0x247fa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ADE8u, 0x247F9Cu, 0x247FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FA4u;
label_247fa4:
    // 0x247fa4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x247fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x247fa8: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x247FA8u;
    SET_GPR_U32(ctx, 31, 0x247FB0u);
    ctx->pc = 0x247FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FA8u;
    // 0x247fac: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x247FA8u, 0x247FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FB0u;
label_247fb0:
    // 0x247fb0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x247fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x247fb4: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x247FB4u;
    SET_GPR_U32(ctx, 31, 0x247FBCu);
    ctx->pc = 0x247FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FB4u;
    // 0x247fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x247FB4u, 0x247FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FBCu;
label_247fbc:
    // 0x247fbc: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x247FBCu;
    SET_GPR_U32(ctx, 31, 0x247FC4u);
    ctx->pc = 0x247FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FBCu;
    // 0x247fc0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x247FBCu, 0x247FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FC4u;
label_247fc4:
    // 0x247fc4: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x247fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x247fc8: 0xc0757d2  jal         func_1D5F48
    ctx->pc = 0x247FC8u;
    SET_GPR_U32(ctx, 31, 0x247FD0u);
    ctx->pc = 0x247FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FC8u;
    // 0x247fcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x247FC8u, 0x247FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FD0u;
label_247fd0:
    // 0x247fd0: 0xc092000  jal         func_248000
    ctx->pc = 0x247FD0u;
    SET_GPR_U32(ctx, 31, 0x247FD8u);
    ctx->pc = 0x247FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FD0u;
    // 0x247fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248000u, 0x247FD0u, 0x247FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FD8u;
label_247fd8:
    // 0x247fd8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x247fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247fdc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x247fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247fe0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x247fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247fe4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x247fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x247fe8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x247fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x247fec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x247fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x247ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x247FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FF0u;
        // 0x247ff4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247FF8u;
    // 0x247ff8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x247ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x247ffc: 0x0  nop
    ctx->pc = 0x247ffcu;
    // NOP
    ctx->pc = 0x248000u;
}
