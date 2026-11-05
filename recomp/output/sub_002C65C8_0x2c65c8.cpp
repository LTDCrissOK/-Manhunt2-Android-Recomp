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

// Function: sub_002C65C8
// Address: 0x2c65c8 - 0x2c6678
void sub_002C65C8_0x2c65c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C65C8_0x2c65c8");
#endif

    ctx->pc = 0x2c65c8u;

    // 0x2c65c8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2c65c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c65cc: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2c65ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c65d0: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2c65d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c65d4: 0x46010a80  add.s       $f10, $f1, $f1
    ctx->pc = 0x2c65d4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2c65d8: 0x46031900  add.s       $f4, $f3, $f3
    ctx->pc = 0x2c65d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2c65dc: 0xc486000c  lwc1        $f6, 0xC($a0)
    ctx->pc = 0x2c65dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c65e0: 0x46021000  add.s       $f0, $f2, $f2
    ctx->pc = 0x2c65e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2c65e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c65e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c65e8: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2c65e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2c65ec: 0x460a09c2  mul.s       $f7, $f1, $f10
    ctx->pc = 0x2c65ecu;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x2c65f0: 0x46041942  mul.s       $f5, $f3, $f4
    ctx->pc = 0x2c65f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c65f4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c65f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c65f8: 0x46003302  mul.s       $f12, $f6, $f0
    ctx->pc = 0x2c65f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2c65fc: 0x46053a00  add.s       $f8, $f7, $f5
    ctx->pc = 0x2c65fcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x2c6600: 0x46000a42  mul.s       $f9, $f1, $f0
    ctx->pc = 0x2c6600u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6604: 0x460a3282  mul.s       $f10, $f6, $f10
    ctx->pc = 0x2c6604u;
    ctx->f[10] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x2c6608: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c6608u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c660c: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x2c660cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x2c6610: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2c6610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2c6614: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2c6614u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2c6618: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x2c6618u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x2c661c: 0x46064801  sub.s       $f0, $f9, $f6
    ctx->pc = 0x2c661cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x2c6620: 0x460c0880  add.s       $f2, $f1, $f12
    ctx->pc = 0x2c6620u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2c6624: 0x460a1900  add.s       $f4, $f3, $f10
    ctx->pc = 0x2c6624u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x2c6628: 0x46085a01  sub.s       $f8, $f11, $f8
    ctx->pc = 0x2c6628u;
    ctx->f[8] = FPU_SUB_S(ctx->f[11], ctx->f[8]);
    // 0x2c662c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2c662cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2c6630: 0x46055941  sub.s       $f5, $f11, $f5
    ctx->pc = 0x2c6630u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x2c6634: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x2c6634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2c6638: 0x46075ac1  sub.s       $f11, $f11, $f7
    ctx->pc = 0x2c6638u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[7]);
    // 0x2c663c: 0xe4a40018  swc1        $f4, 0x18($a1)
    ctx->pc = 0x2c663cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2c6640: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x2c6640u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2c6644: 0xe4a80028  swc1        $f8, 0x28($a1)
    ctx->pc = 0x2c6644u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x2c6648: 0x46064a40  add.s       $f9, $f9, $f6
    ctx->pc = 0x2c6648u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
    // 0x2c664c: 0xe4a50000  swc1        $f5, 0x0($a1)
    ctx->pc = 0x2c664cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2c6650: 0x460a18c1  sub.s       $f3, $f3, $f10
    ctx->pc = 0x2c6650u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[10]);
    // 0x2c6654: 0xe4ab0014  swc1        $f11, 0x14($a1)
    ctx->pc = 0x2c6654u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2c6658: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x2c6658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2c665c: 0xe4a90020  swc1        $f9, 0x20($a1)
    ctx->pc = 0x2c665cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x2c6660: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6660u;
        // 0x2c6664: 0xe4a30024  swc1        $f3, 0x24($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6668u;
    // 0x2c6668: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2c6668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c666c: 0x0  nop
    ctx->pc = 0x2c666cu;
    // NOP
    // 0x2c6670: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c6670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c6674: 0x0  nop
    ctx->pc = 0x2c6674u;
    // NOP
    ctx->pc = 0x2c6678u;
}
