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

// Function: sub_00259990
// Address: 0x259990 - 0x259a70
void sub_00259990_0x259990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259990_0x259990");
#endif

    switch (ctx->pc) {
        case 0x2599b4u: goto label_2599b4;
        case 0x2599c0u: goto label_2599c0;
        case 0x2599d0u: goto label_2599d0;
        default: break;
    }

    ctx->pc = 0x259990u;

    // 0x259990: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x259990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x259994: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x259994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x259998: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x259998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x25999c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25999cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2599a0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2599a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2599a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2599a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2599a8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2599a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2599ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2599ACu;
    SET_GPR_U32(ctx, 31, 0x2599B4u);
    ctx->pc = 0x2599B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2599ACu;
    // 0x2599b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2599ACu, 0x2599B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599B4u;
label_2599b4:
    // 0x2599b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2599b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2599b8: 0xc09663a  jal         func_2598E8
    ctx->pc = 0x2599B8u;
    SET_GPR_U32(ctx, 31, 0x2599C0u);
    ctx->pc = 0x2599BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2599B8u;
    // 0x2599bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2598E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2598E8u, 0x2599B8u, 0x2599C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599C0u;
label_2599c0:
    // 0x2599c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2599c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2599c4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2599c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2599c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2599C8u;
    SET_GPR_U32(ctx, 31, 0x2599D0u);
    ctx->pc = 0x2599CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2599C8u;
    // 0x2599cc: 0xc4549928  lwc1        $f20, -0x66D8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2599C8u, 0x2599D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599D0u;
label_2599d0:
    // 0x2599d0: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2599d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2599d4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2599d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2599d8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2599d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2599dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2599dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2599e0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2599e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2599e4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2599e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2599e8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2599e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2599ec: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2599ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2599f0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2599f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2599f4: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2599f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2599f8: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2599f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2599fc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2599fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x259a00: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x259a00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x259a04: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x259a04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x259a08: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x259a08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x259a0c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x259a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259a10: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x259a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259a14: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x259a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x259a18: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x259a18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259a1c: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x259a1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x259a20: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x259a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x259a24: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x259a24u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x259a28: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x259a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259a2c: 0xe6220030  swc1        $f2, 0x30($s1)
    ctx->pc = 0x259a2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x259a30: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x259a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x259a34: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x259a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259a38: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x259a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x259a3c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x259a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259a40: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x259a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x259a44: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x259a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259a48: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x259a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x259a4c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x259a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x259a50: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x259a50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259a54: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x259a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259a58: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x259a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x259a5c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x259a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259a60: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x259a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259a64: 0x3e00008  jr          $ra
    ctx->pc = 0x259A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A64u;
        // 0x259a68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259A6Cu;
    // 0x259a6c: 0x0  nop
    ctx->pc = 0x259a6cu;
    // NOP
    ctx->pc = 0x259a70u;
}
