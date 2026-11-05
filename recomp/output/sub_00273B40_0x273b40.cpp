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

// Function: sub_00273B40
// Address: 0x273b40 - 0x273be0
void sub_00273B40_0x273b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273B40_0x273b40");
#endif

    switch (ctx->pc) {
        case 0x273bacu: goto label_273bac;
        case 0x273bc8u: goto label_273bc8;
        default: break;
    }

    ctx->pc = 0x273b40u;

    // 0x273b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x273b44: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x273b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x273b48: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x273b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x273b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x273b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b50: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x273b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x273b54: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x273b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x273b58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x273b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273b5c: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x273b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x273b60: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x273b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b64: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x273b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x273b68: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x273b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x273b6c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x273b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x273b70: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x273b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b74: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x273b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273b78: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x273b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x273b7c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x273b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273b80: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x273b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x273b84: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x273b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b88: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x273b88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x273b8c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x273b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x273b90: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x273b90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x273b94: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x273b94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x273b98: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x273b98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x273b9c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x273b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273ba0: 0xfa010310  sqc2        $vf1, 0x310($s0)
    ctx->pc = 0x273ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 784), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x273ba4: 0xc09d05e  jal         func_274178
    ctx->pc = 0x273BA4u;
    SET_GPR_U32(ctx, 31, 0x273BACu);
    ctx->pc = 0x273BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273BA4u;
    // 0x273ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274178u, 0x273BA4u, 0x273BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273BACu;
label_273bac:
    // 0x273bac: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x273bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273bb4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x273bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x273bb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273bbc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x273bbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x273bc0: 0xc0848ca  jal         func_212328
    ctx->pc = 0x273BC0u;
    SET_GPR_U32(ctx, 31, 0x273BC8u);
    ctx->pc = 0x273BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273BC0u;
    // 0x273bc4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212328u, 0x273BC0u, 0x273BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273BC8u;
label_273bc8:
    // 0x273bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273bcc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x273bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x273bd0: 0xa2020372  sb          $v0, 0x372($s0)
    ctx->pc = 0x273bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 882), (uint8_t)GPR_U32(ctx, 2));
    // 0x273bd4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x273bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x273BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BD8u;
        // 0x273bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273BE0u;
}
