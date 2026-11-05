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

// Function: sub_00344B38
// Address: 0x344b38 - 0x344be0
void sub_00344B38_0x344b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344B38_0x344b38");
#endif

    switch (ctx->pc) {
        case 0x344b58u: goto label_344b58;
        case 0x344b60u: goto label_344b60;
        case 0x344bccu: goto label_344bcc;
        default: break;
    }

    ctx->pc = 0x344b38u;

    // 0x344b38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x344b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x344b3c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x344b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x344b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b44: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x344b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x344b48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x344b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b4c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x344b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x344b50: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344B50u;
    SET_GPR_U32(ctx, 31, 0x344B58u);
    ctx->pc = 0x344B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B50u;
    // 0x344b54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344B50u, 0x344B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B58u;
label_344b58:
    // 0x344b58: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344B58u;
    SET_GPR_U32(ctx, 31, 0x344B60u);
    ctx->pc = 0x344B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B58u;
    // 0x344b5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344B58u, 0x344B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B60u;
label_344b60:
    // 0x344b60: 0xc6020070  lwc1        $f2, 0x70($s0)
    ctx->pc = 0x344b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344b64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x344b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b68: 0xc6030074  lwc1        $f3, 0x74($s0)
    ctx->pc = 0x344b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344b6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x344b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b70: 0xc6040078  lwc1        $f4, 0x78($s0)
    ctx->pc = 0x344b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x344b74: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x344b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x344b78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x344b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x344b7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x344b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x344b80: 0xc6050058  lwc1        $f5, 0x58($s0)
    ctx->pc = 0x344b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x344b84: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x344b84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x344b88: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x344b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344b8c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x344b8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x344b90: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x344b90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x344b94: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x344b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344b98: 0x46020180  add.s       $f6, $f0, $f2
    ctx->pc = 0x344b98u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x344b9c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x344b9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x344ba0: 0x460309c0  add.s       $f7, $f1, $f3
    ctx->pc = 0x344ba0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x344ba4: 0x46042a00  add.s       $f8, $f5, $f4
    ctx->pc = 0x344ba4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x344ba8: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x344ba8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x344bac: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x344bacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x344bb0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x344bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x344bb4: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x344bb4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x344bb8: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x344bb8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x344bbc: 0xe7a80018  swc1        $f8, 0x18($sp)
    ctx->pc = 0x344bbcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x344bc0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x344bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x344bc4: 0xc0d1678  jal         func_3459E0
    ctx->pc = 0x344BC4u;
    SET_GPR_U32(ctx, 31, 0x344BCCu);
    ctx->pc = 0x344BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344BC4u;
    // 0x344bc8: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3459E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3459E0u, 0x344BC4u, 0x344BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BCCu;
label_344bcc:
    // 0x344bcc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x344bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344bd0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x344bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344bd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x344bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x344bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x344BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BD8u;
        // 0x344bdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344BE0u;
}
