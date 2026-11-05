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

// Function: sub_002C5520
// Address: 0x2c5520 - 0x2c55d0
void sub_002C5520_0x2c5520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5520_0x2c5520");
#endif

    switch (ctx->pc) {
        case 0x2c5564u: goto label_2c5564;
        case 0x2c5570u: goto label_2c5570;
        case 0x2c55a4u: goto label_2c55a4;
        default: break;
    }

    ctx->pc = 0x2c5520u;

    // 0x2c5520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c5520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c5524: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2c5524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2c5528: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2c5528u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2c552c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c552cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5530: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2c5530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c5534: 0x46016502  mul.s       $f20, $f12, $f1
    ctx->pc = 0x2c5534u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2c5538: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c5538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c553c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c553cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5540: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c5540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c5544: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c5544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c5548: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c5548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c554c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2c554cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c5550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c5558: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2c5558u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c555c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2C555Cu;
    SET_GPR_U32(ctx, 31, 0x2C5564u);
    ctx->pc = 0x2C5560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C555Cu;
    // 0x2c5560: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2C555Cu, 0x2C5564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5564u;
label_2c5564:
    // 0x2c5564: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c5564u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c5568: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2C5568u;
    SET_GPR_U32(ctx, 31, 0x2C5570u);
    ctx->pc = 0x2C556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5568u;
    // 0x2c556c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2C5568u, 0x2C5570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5570u;
label_2c5570:
    // 0x2c5570: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2c5570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5574: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c5574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5578: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2c5578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c557c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5580: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2c5580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5584: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c5584u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c5588: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c5588u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c558c: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x2c558cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c5590: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c5590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5594: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2c5594u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c5598: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2c5598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c559c: 0xc0b1972  jal         func_2C65C8
    ctx->pc = 0x2C559Cu;
    SET_GPR_U32(ctx, 31, 0x2C55A4u);
    ctx->pc = 0x2C55A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C559Cu;
    // 0x2c55a0: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x2C559Cu, 0x2C55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C55A4u;
label_2c55a4:
    // 0x2c55a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c55a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c55a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c55a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c55ac: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2c55acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2c55b0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2c55b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2c55b4: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2c55b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c55b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c55b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c55bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c55bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c55c0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2c55c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c55c4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2c55c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c55c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C55C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55C8u;
        // 0x2c55cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C55C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C55D0u;
}
