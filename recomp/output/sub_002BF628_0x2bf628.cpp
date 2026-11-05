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

// Function: sub_002BF628
// Address: 0x2bf628 - 0x2bf6c8
void sub_002BF628_0x2bf628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF628_0x2bf628");
#endif

    switch (ctx->pc) {
        case 0x2bf64cu: goto label_2bf64c;
        default: break;
    }

    ctx->pc = 0x2bf628u;

    // 0x2bf628: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bf628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bf62c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bf62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bf630: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bf630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bf634: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bf634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf638: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2bf638u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bf63c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bf63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf640: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2bf640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2bf644: 0xc0b0370  jal         func_2C0DC0
    ctx->pc = 0x2BF644u;
    SET_GPR_U32(ctx, 31, 0x2BF64Cu);
    ctx->pc = 0x2BF648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF644u;
    // 0x2bf648: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DC0u, 0x2BF644u, 0x2BF64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF64Cu;
label_2bf64c:
    // 0x2bf64c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bf64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bf650: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2bf650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bf654: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x2bf654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    // 0x2bf658: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x2bf658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bf65c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2bf65cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x574F50u));
    // 0x2bf660: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2bf660u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x574F4Cu));
    // 0x2bf664: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2bf664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf668: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2bf668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf66c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2bf66cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2bf670: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2bf670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf674: 0xc6040018  lwc1        $f4, 0x18($s0)
    ctx->pc = 0x2bf674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bf678: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2bf678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bf67c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2bf67cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2bf680: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2bf680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bf684: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bf684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bf688: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2bf688u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2bf68c: 0xe6030010  swc1        $f3, 0x10($s0)
    ctx->pc = 0x2bf68cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2bf690: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2bf690u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x574F4Cu));
    // 0x2bf694: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2bf694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf698: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bf698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bf69c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2bf69cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2bf6a0: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x2bf6a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2bf6a4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2bf6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x574F4Cu));
    // 0x2bf6a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bf6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf6ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bf6acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bf6b0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2bf6b0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2bf6b4: 0xe6040018  swc1        $f4, 0x18($s0)
    ctx->pc = 0x2bf6b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2bf6b8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bf6b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6BCu;
        // 0x2bf6c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF6C4u;
    // 0x2bf6c4: 0x0  nop
    ctx->pc = 0x2bf6c4u;
    // NOP
    ctx->pc = 0x2bf6c8u;
}
