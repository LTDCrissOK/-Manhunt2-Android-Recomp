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

// Function: sub_002C55D0
// Address: 0x2c55d0 - 0x2c5680
void sub_002C55D0_0x2c55d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C55D0_0x2c55d0");
#endif

    switch (ctx->pc) {
        case 0x2c5614u: goto label_2c5614;
        case 0x2c5620u: goto label_2c5620;
        case 0x2c5654u: goto label_2c5654;
        default: break;
    }

    ctx->pc = 0x2c55d0u;

    // 0x2c55d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c55d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c55d4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2c55d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2c55d8: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2c55d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2c55dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c55dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c55e0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2c55e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c55e4: 0x46016502  mul.s       $f20, $f12, $f1
    ctx->pc = 0x2c55e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2c55e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c55e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c55ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c55ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c55f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c55f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c55f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c55f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c55f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c55f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c55fc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2c55fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c5600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c5608: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2c5608u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c560c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2C560Cu;
    SET_GPR_U32(ctx, 31, 0x2C5614u);
    ctx->pc = 0x2C5610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C560Cu;
    // 0x2c5610: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2C560Cu, 0x2C5614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5614u;
label_2c5614:
    // 0x2c5614: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c5614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c5618: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2C5618u;
    SET_GPR_U32(ctx, 31, 0x2C5620u);
    ctx->pc = 0x2C561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5618u;
    // 0x2c561c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2C5618u, 0x2C5620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5620u;
label_2c5620:
    // 0x2c5620: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2c5620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5624: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c5624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5628: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2c5628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c562c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c562cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5630: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2c5630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5634: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c5634u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c5638: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c5638u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c563c: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x2c563cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c5640: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c5640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5644: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2c5644u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c5648: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2c5648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c564c: 0xc0b1972  jal         func_2C65C8
    ctx->pc = 0x2C564Cu;
    SET_GPR_U32(ctx, 31, 0x2C5654u);
    ctx->pc = 0x2C5650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C564Cu;
    // 0x2c5650: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x2C564Cu, 0x2C5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5654u;
label_2c5654:
    // 0x2c5654: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c5654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5658: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c5658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c565c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2c565cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2c5660: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2c5660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2c5664: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2c5664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c5668: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c5668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c566c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c566cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5670: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2c5670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c5674: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2c5674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c5678: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5678u;
        // 0x2c567c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5680u;
}
