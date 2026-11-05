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

// Function: sub_00373F48
// Address: 0x373f48 - 0x3741d8
void sub_00373F48_0x373f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373F48_0x373f48");
#endif

    switch (ctx->pc) {
        case 0x373fe0u: goto label_373fe0;
        case 0x373ffcu: goto label_373ffc;
        case 0x37400cu: goto label_37400c;
        case 0x374024u: goto label_374024;
        case 0x374038u: goto label_374038;
        case 0x374048u: goto label_374048;
        case 0x37405cu: goto label_37405c;
        case 0x374070u: goto label_374070;
        case 0x374080u: goto label_374080;
        case 0x374094u: goto label_374094;
        case 0x3740a8u: goto label_3740a8;
        case 0x3740b8u: goto label_3740b8;
        case 0x3740ccu: goto label_3740cc;
        case 0x3740e8u: goto label_3740e8;
        case 0x3740f8u: goto label_3740f8;
        case 0x37410cu: goto label_37410c;
        case 0x374120u: goto label_374120;
        case 0x374130u: goto label_374130;
        case 0x374138u: goto label_374138;
        default: break;
    }

    ctx->pc = 0x373f48u;

    // 0x373f48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x373f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x373f4c: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x373f4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x373f50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f54: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x373f54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x373f58: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x373f58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x373f5c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x373f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x373f60: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x373f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x373f64: 0xe7ba00a0  swc1        $f26, 0xA0($sp)
    ctx->pc = 0x373f64u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x373f68: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x373f68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
    // 0x373f6c: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x373f6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x373f70: 0x46006e86  mov.s       $f26, $f13
    ctx->pc = 0x373f70u;
    ctx->f[26] = FPU_MOV_S(ctx->f[13]);
    // 0x373f74: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x373f74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x373f78: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x373f78u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x373f7c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x373f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x373f80: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x373f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x373f84: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x373f84u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x373f88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x373f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x373f8c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x373f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x373f90: 0x26525c80  addiu       $s2, $s2, 0x5C80
    ctx->pc = 0x373f90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 23680));
    // 0x373f94: 0xe7b90098  swc1        $f25, 0x98($sp)
    ctx->pc = 0x373f94u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x373f98: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x373f98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x373f9c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x373f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x373fa0: 0x46007e46  mov.s       $f25, $f15
    ctx->pc = 0x373fa0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[15]);
    // 0x373fa4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x373fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x373fa8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x373fa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x373fac: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x373facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x373fb0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x373fb0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x373fb4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x373fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x373fb8: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x373fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x373fbc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x373fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x373fc0: 0x26540020  addiu       $s4, $s2, 0x20
    ctx->pc = 0x373fc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x373fc4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x373fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x373fc8: 0x26550030  addiu       $s5, $s2, 0x30
    ctx->pc = 0x373fc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x373fcc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x373fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x373fd0: 0x3c160065  lui         $s6, 0x65
    ctx->pc = 0x373fd0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)101 << 16));
    // 0x373fd4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x373fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x373fd8: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373FD8u;
    SET_GPR_U32(ctx, 31, 0x373FE0u);
    ctx->pc = 0x373FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FD8u;
    // 0x373fdc: 0x26570040  addiu       $s7, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373FD8u, 0x373FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FE0u;
label_373fe0:
    // 0x373fe0: 0x26d35bc0  addiu       $s3, $s6, 0x5BC0
    ctx->pc = 0x373fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 23488));
    // 0x373fe4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x373fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373fe8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373fe8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373fec: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x373fecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x373ff0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x373ff0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x373ff4: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373FF4u;
    SET_GPR_U32(ctx, 31, 0x373FFCu);
    ctx->pc = 0x373FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FF4u;
    // 0x373ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373FF4u, 0x373FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FFCu;
label_373ffc:
    // 0x373ffc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x373ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374000: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x374000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374004: 0xc0dedb4  jal         func_37B6D0
    ctx->pc = 0x374004u;
    SET_GPR_U32(ctx, 31, 0x37400Cu);
    ctx->pc = 0x374008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374004u;
    // 0x374008: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6D0u, 0x374004u, 0x37400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37400Cu;
label_37400c:
    // 0x37400c: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x37400cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x374010: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x374010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374014: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x374014u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x374018: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x374018u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x37401c: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x37401Cu;
    SET_GPR_U32(ctx, 31, 0x374024u);
    ctx->pc = 0x374020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37401Cu;
    // 0x374020: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x37401Cu, 0x374024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374024u;
label_374024:
    // 0x374024: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x374024u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x374028: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x374028u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x37402c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x37402cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x374030: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x374030u;
    SET_GPR_U32(ctx, 31, 0x374038u);
    ctx->pc = 0x374034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374030u;
    // 0x374034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x374030u, 0x374038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374038u;
label_374038:
    // 0x374038: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x374038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37403c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37403cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374040: 0xc0dedb4  jal         func_37B6D0
    ctx->pc = 0x374040u;
    SET_GPR_U32(ctx, 31, 0x374048u);
    ctx->pc = 0x374044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374040u;
    // 0x374044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6D0u, 0x374040u, 0x374048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374048u;
label_374048:
    // 0x374048: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x374048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37404c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37404cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x374050: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x374050u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x374054: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x374054u;
    SET_GPR_U32(ctx, 31, 0x37405Cu);
    ctx->pc = 0x374058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374054u;
    // 0x374058: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x374054u, 0x37405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37405Cu;
label_37405c:
    // 0x37405c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37405cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x374060: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x374060u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x374064: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x374064u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x374068: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x374068u;
    SET_GPR_U32(ctx, 31, 0x374070u);
    ctx->pc = 0x37406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374068u;
    // 0x37406c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x374068u, 0x374070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374070u;
label_374070:
    // 0x374070: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x374070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374074: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x374074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374078: 0xc0dedb4  jal         func_37B6D0
    ctx->pc = 0x374078u;
    SET_GPR_U32(ctx, 31, 0x374080u);
    ctx->pc = 0x37407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374078u;
    // 0x37407c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6D0u, 0x374078u, 0x374080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374080u;
label_374080:
    // 0x374080: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x374080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374084: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x374084u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x374088: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x374088u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x37408c: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x37408Cu;
    SET_GPR_U32(ctx, 31, 0x374094u);
    ctx->pc = 0x374090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37408Cu;
    // 0x374090: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x37408Cu, 0x374094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374094u;
label_374094:
    // 0x374094: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x374094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x374098: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x374098u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x37409c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x37409cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x3740a0: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x3740A0u;
    SET_GPR_U32(ctx, 31, 0x3740A8u);
    ctx->pc = 0x3740A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3740A0u;
    // 0x3740a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x3740A0u, 0x3740A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3740A8u;
label_3740a8:
    // 0x3740a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3740a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3740ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3740acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3740b0: 0xc0dedb4  jal         func_37B6D0
    ctx->pc = 0x3740B0u;
    SET_GPR_U32(ctx, 31, 0x3740B8u);
    ctx->pc = 0x3740B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3740B0u;
    // 0x3740b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6D0u, 0x3740B0u, 0x3740B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3740B8u;
label_3740b8:
    // 0x3740b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3740b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3740bc: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3740bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x3740c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3740c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3740c4: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x3740C4u;
    SET_GPR_U32(ctx, 31, 0x3740CCu);
    ctx->pc = 0x3740C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3740C4u;
    // 0x3740c8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x3740C4u, 0x3740CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3740CCu;
label_3740cc:
    // 0x3740cc: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x3740ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x3740d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3740d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3740d4: 0x26106028  addiu       $s0, $s0, 0x6028
    ctx->pc = 0x3740d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24616));
    // 0x3740d8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3740d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3740dc: 0xc60e000c  lwc1        $f14, 0xC($s0)
    ctx->pc = 0x3740dcu;
    { uint32_t bits = FAST_READ32(0x6C6034u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3740e0: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x3740E0u;
    SET_GPR_U32(ctx, 31, 0x3740E8u);
    ctx->pc = 0x3740E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3740E0u;
    // 0x3740e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x3740E0u, 0x3740E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3740E8u;
label_3740e8:
    // 0x3740e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3740e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3740ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3740ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3740f0: 0xc0dedb4  jal         func_37B6D0
    ctx->pc = 0x3740F0u;
    SET_GPR_U32(ctx, 31, 0x3740F8u);
    ctx->pc = 0x3740F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3740F0u;
    // 0x3740f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6D0u, 0x3740F0u, 0x3740F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3740F8u;
label_3740f8:
    // 0x3740f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3740f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3740fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3740fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x374100: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x374100u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x374104: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x374104u;
    SET_GPR_U32(ctx, 31, 0x37410Cu);
    ctx->pc = 0x374108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374104u;
    // 0x374108: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x374104u, 0x37410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37410Cu;
label_37410c:
    // 0x37410c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37410cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x374110: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x374110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x374114: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x374114u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x374118: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x374118u;
    SET_GPR_U32(ctx, 31, 0x374120u);
    ctx->pc = 0x37411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374118u;
    // 0x37411c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x374118u, 0x374120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374120u;
label_374120:
    // 0x374120: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x374120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374124: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x374124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374128: 0xc0dedb4  jal         func_37B6D0
    ctx->pc = 0x374128u;
    SET_GPR_U32(ctx, 31, 0x374130u);
    ctx->pc = 0x37412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374128u;
    // 0x37412c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6D0u, 0x374128u, 0x374130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374130u;
label_374130:
    // 0x374130: 0xc0dec2c  jal         func_37B0B0
    ctx->pc = 0x374130u;
    SET_GPR_U32(ctx, 31, 0x374138u);
    ctx->pc = 0x374134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374130u;
    // 0x374134: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0B0u, 0x374130u, 0x374138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374138u;
label_374138:
    // 0x374138: 0x4618ce41  sub.s       $f25, $f25, $f24
    ctx->pc = 0x374138u;
    ctx->f[25] = FPU_SUB_S(ctx->f[25], ctx->f[24]);
    // 0x37413c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x37413cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x374140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x374140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374144: 0x4600bdc7  neg.s       $f23, $f23
    ctx->pc = 0x374144u;
    ctx->f[23] = FPU_NEG_S(ctx->f[23]);
    // 0x374148: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x374148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x37414c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x37414cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x374150: 0x8c83cd00  lw          $v1, -0x3300($a0)
    ctx->pc = 0x374150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x374154: 0x0  nop
    ctx->pc = 0x374154u;
    // NOP
    // 0x374158: 0x0  nop
    ctx->pc = 0x374158u;
    // NOP
    // 0x37415c: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x37415cu;
    { if (ctx->f[25] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[25]); }
    // 0x374160: 0x8ca2cd34  lw          $v0, -0x32CC($a1)
    ctx->pc = 0x374160u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD34u));
    // 0x374164: 0x461abe82  mul.s       $f26, $f23, $f26
    ctx->pc = 0x374164u;
    ctx->f[26] = FPU_MUL_S(ctx->f[23], ctx->f[26]);
    // 0x374168: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x374168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x37416c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x37416cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x374170: 0xe6d75bc0  swc1        $f23, 0x5BC0($s6)
    ctx->pc = 0x374170u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 23488), bits); }
    // 0x374174: 0xac83cd00  sw          $v1, -0x3300($a0)
    ctx->pc = 0x374174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FCD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD00u, _value); } while (0);
    // 0x374178: 0xaca2cd34  sw          $v0, -0x32CC($a1)
    ctx->pc = 0x374178u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCD34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD34u, _value); } while (0);
    // 0x37417c: 0xe67a0014  swc1        $f26, 0x14($s3)
    ctx->pc = 0x37417cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x374180: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x374180u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x374184: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x374184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x374188: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x374188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37418c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x37418cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x374190: 0x4618ad41  sub.s       $f21, $f21, $f24
    ctx->pc = 0x374190u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[24]);
    // 0x374194: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x374194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374198: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x374198u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37419c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x37419cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3741a0: 0xe675003c  swc1        $f21, 0x3C($s3)
    ctx->pc = 0x3741a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x3741a4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3741a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3741a8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x3741a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3741ac: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x3741acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3741b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3741b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3741b4: 0xc7ba00a0  lwc1        $f26, 0xA0($sp)
    ctx->pc = 0x3741b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x3741b8: 0xc7b90098  lwc1        $f25, 0x98($sp)
    ctx->pc = 0x3741b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3741bc: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x3741bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3741c0: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x3741c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3741c4: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x3741c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3741c8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x3741c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3741cc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3741ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3741d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3741D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3741D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3741D0u;
        // 0x3741d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3741D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3741D8u;
}
