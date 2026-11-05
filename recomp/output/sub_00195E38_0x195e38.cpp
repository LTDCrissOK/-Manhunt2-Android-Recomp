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

// Function: sub_00195E38
// Address: 0x195e38 - 0x195fc8
void sub_00195E38_0x195e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195E38_0x195e38");
#endif

    switch (ctx->pc) {
        case 0x195ed4u: goto label_195ed4;
        case 0x195f34u: goto label_195f34;
        case 0x195f40u: goto label_195f40;
        case 0x195f48u: goto label_195f48;
        case 0x195f54u: goto label_195f54;
        case 0x195f5cu: goto label_195f5c;
        case 0x195f68u: goto label_195f68;
        case 0x195f84u: goto label_195f84;
        case 0x195f90u: goto label_195f90;
        case 0x195f9cu: goto label_195f9c;
        default: break;
    }

    ctx->pc = 0x195e38u;

    // 0x195e38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x195e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x195e3c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x195e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x195e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x195e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195e48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x195e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x195e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x195e50: 0x264a0030  addiu       $t2, $s2, 0x30
    ctx->pc = 0x195e50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x195e54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x195e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x195e58: 0x264b0050  addiu       $t3, $s2, 0x50
    ctx->pc = 0x195e58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x195e5c: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x195e5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x195e60: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x195e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e64: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x195e64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x195e68: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x195e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e6c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x195e6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x195e70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195e74: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x195e74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x195e78: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x195e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x195e7c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x195e7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e80: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x195e80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x195e84: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x195e84u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x195e88: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x195e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e8c: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x195e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x195e90: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x195e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e94: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x195e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x195e98: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x195e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x195e9c: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x195e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x195ea0: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x195ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x195ea4: 0xad430014  sw          $v1, 0x14($t2)
    ctx->pc = 0x195ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
    // 0x195ea8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x195ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195eac: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x195eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x195eb0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x195eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195eb4: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x195eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x195eb8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x195eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ebc: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x195ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x195ec0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x195ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x195ec4: 0xad620010  sw          $v0, 0x10($t3)
    ctx->pc = 0x195ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
    // 0x195ec8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x195ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x195ecc: 0xc061a12  jal         func_186848
    ctx->pc = 0x195ECCu;
    SET_GPR_U32(ctx, 31, 0x195ED4u);
    ctx->pc = 0x195ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195ECCu;
    // 0x195ed0: 0xad630014  sw          $v1, 0x14($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x195ECCu, 0x195ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195ED4u;
label_195ed4:
    // 0x195ed4: 0xc44101e0  lwc1        $f1, 0x1E0($v0)
    ctx->pc = 0x195ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195ed8: 0x26450070  addiu       $a1, $s2, 0x70
    ctx->pc = 0x195ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x195edc: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x195edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x195ee0: 0xe6410070  swc1        $f1, 0x70($s2)
    ctx->pc = 0x195ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x195ee4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x195ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ee8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x195ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x195eec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x195eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195ef0: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x195ef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x195ef4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x195ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x195ef8: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x195ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x195efc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x195efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x195f00: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x195f00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x195f04: 0xe6540090  swc1        $f20, 0x90($s2)
    ctx->pc = 0x195f04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
    // 0x195f08: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x195f08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
    // 0x195f0c: 0xae500094  sw          $s0, 0x94($s2)
    ctx->pc = 0x195f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 16));
    // 0x195f10: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x195F10u;
    {
        const bool branch_taken_0x195f10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F10u;
        // 0x195f14: 0xae4000b4  sw          $zero, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f10) {
            ctx->pc = 0x195F28u;
            goto label_195f28;
        }
    }
    ctx->pc = 0x195F18u;
    // 0x195f18: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x195f18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x195f1c: 0xfa4100a0  sqc2        $vf1, 0xA0($s2)
    ctx->pc = 0x195f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x195f20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195F20u;
    {
        const bool branch_taken_0x195f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195f20) {
            ctx->pc = 0x195F2Cu;
            goto label_195f2c;
        }
    }
    ctx->pc = 0x195F28u;
label_195f28:
    // 0x195f28: 0x7e4000a0  sq          $zero, 0xA0($s2)
    ctx->pc = 0x195f28u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 160), GPR_VEC(ctx, 0));
label_195f2c:
    // 0x195f2c: 0xc061a16  jal         func_186858
    ctx->pc = 0x195F2Cu;
    SET_GPR_U32(ctx, 31, 0x195F34u);
    ctx->pc = 0x195F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F2Cu;
    // 0x195f30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x195F2Cu, 0x195F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F34u;
label_195f34:
    // 0x195f34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f38: 0xc06ee66  jal         func_1BB998
    ctx->pc = 0x195F38u;
    SET_GPR_U32(ctx, 31, 0x195F40u);
    ctx->pc = 0x195F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F38u;
    // 0x195f3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x195F38u, 0x195F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F40u;
label_195f40:
    // 0x195f40: 0xc061a16  jal         func_186858
    ctx->pc = 0x195F40u;
    SET_GPR_U32(ctx, 31, 0x195F48u);
    ctx->pc = 0x195F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F40u;
    // 0x195f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x195F40u, 0x195F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F48u;
label_195f48:
    // 0x195f48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x195f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195f4c: 0xc06eebe  jal         func_1BBAF8
    ctx->pc = 0x195F4Cu;
    SET_GPR_U32(ctx, 31, 0x195F54u);
    ctx->pc = 0x195F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F4Cu;
    // 0x195f50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x195F4Cu, 0x195F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F54u;
label_195f54:
    // 0x195f54: 0xc061a16  jal         func_186858
    ctx->pc = 0x195F54u;
    SET_GPR_U32(ctx, 31, 0x195F5Cu);
    ctx->pc = 0x195F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F54u;
    // 0x195f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x195F54u, 0x195F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F5Cu;
label_195f5c:
    // 0x195f5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f60: 0xc061a16  jal         func_186858
    ctx->pc = 0x195F60u;
    SET_GPR_U32(ctx, 31, 0x195F68u);
    ctx->pc = 0x195F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F60u;
    // 0x195f64: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x195F60u, 0x195F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F68u;
label_195f68:
    // 0x195f68: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x195f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x195f6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195f70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f74: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x195f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x195f78: 0xe655001c  swc1        $f21, 0x1C($s2)
    ctx->pc = 0x195f78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x195f7c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x195F7Cu;
    SET_GPR_U32(ctx, 31, 0x195F84u);
    ctx->pc = 0x195F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F7Cu;
    // 0x195f80: 0xe6560020  swc1        $f22, 0x20($s2) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x195F7Cu, 0x195F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F84u;
label_195f84:
    // 0x195f84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f88: 0xc06cdea  jal         func_1B37A8
    ctx->pc = 0x195F88u;
    SET_GPR_U32(ctx, 31, 0x195F90u);
    ctx->pc = 0x195F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F88u;
    // 0x195f8c: 0x26450050  addiu       $a1, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x195F88u, 0x195F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F90u;
label_195f90:
    // 0x195f90: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x195f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x195f94: 0xc0659f6  jal         func_1967D8
    ctx->pc = 0x195F94u;
    SET_GPR_U32(ctx, 31, 0x195F9Cu);
    ctx->pc = 0x195F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F94u;
    // 0x195f98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967D8u, 0x195F94u, 0x195F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F9Cu;
label_195f9c:
    // 0x195f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195fa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x195fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195fa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x195fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195fa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x195fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x195fac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195fb0: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x195fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x195fb4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x195fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x195fb8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x195fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x195fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x195FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FBCu;
        // 0x195fc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195FC4u;
    // 0x195fc4: 0x0  nop
    ctx->pc = 0x195fc4u;
    // NOP
    ctx->pc = 0x195fc8u;
}
