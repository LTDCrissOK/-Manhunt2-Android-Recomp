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

// Function: sub_002C64C0
// Address: 0x2c64c0 - 0x2c65c8
void sub_002C64C0_0x2c64c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C64C0_0x2c64c0");
#endif

    switch (ctx->pc) {
        case 0x2c650cu: goto label_2c650c;
        case 0x2c6518u: goto label_2c6518;
        case 0x2c6524u: goto label_2c6524;
        case 0x2c6530u: goto label_2c6530;
        case 0x2c653cu: goto label_2c653c;
        case 0x2c6548u: goto label_2c6548;
        default: break;
    }

    ctx->pc = 0x2c64c0u;

    // 0x2c64c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c64c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c64c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c64c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c64c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c64c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c64cc: 0xe7b70028  swc1        $f23, 0x28($sp)
    ctx->pc = 0x2c64ccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c64d0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2c64d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c64d4: 0x460065c2  mul.s       $f23, $f12, $f0
    ctx->pc = 0x2c64d4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c64d8: 0xe7b80030  swc1        $f24, 0x30($sp)
    ctx->pc = 0x2c64d8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c64dc: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2c64dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2c64e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c64e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c64e4: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x2c64e4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x2c64e8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2c64e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c64ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c64ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c64f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c64f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c64f4: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x2c64f4u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2c64f8: 0xe7b90038  swc1        $f25, 0x38($sp)
    ctx->pc = 0x2c64f8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c64fc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2c64fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2c6500: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2c6500u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6504: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2C6504u;
    SET_GPR_U32(ctx, 31, 0x2C650Cu);
    ctx->pc = 0x2C6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6504u;
    // 0x2c6508: 0xe7b50018  swc1        $f21, 0x18($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2C6504u, 0x2C650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C650Cu;
label_2c650c:
    // 0x2c650c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2c650cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6510: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2C6510u;
    SET_GPR_U32(ctx, 31, 0x2C6518u);
    ctx->pc = 0x2C6514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6510u;
    // 0x2c6514: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2C6510u, 0x2C6518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6518u;
label_2c6518:
    // 0x2c6518: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c6518u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2c651c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2C651Cu;
    SET_GPR_U32(ctx, 31, 0x2C6524u);
    ctx->pc = 0x2C6520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C651Cu;
    // 0x2c6520: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2C651Cu, 0x2C6524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6524u;
label_2c6524:
    // 0x2c6524: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x2c6524u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6528: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2C6528u;
    SET_GPR_U32(ctx, 31, 0x2C6530u);
    ctx->pc = 0x2C652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6528u;
    // 0x2c652c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2C6528u, 0x2C6530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6530u;
label_2c6530:
    // 0x2c6530: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2c6530u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6534: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2C6534u;
    SET_GPR_U32(ctx, 31, 0x2C653Cu);
    ctx->pc = 0x2C6538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6534u;
    // 0x2c6538: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2C6534u, 0x2C653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C653Cu;
label_2c653c:
    // 0x2c653c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c653cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6540: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2C6540u;
    SET_GPR_U32(ctx, 31, 0x2C6548u);
    ctx->pc = 0x2C6544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6540u;
    // 0x2c6544: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2C6540u, 0x2C6548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6548u;
label_2c6548:
    // 0x2c6548: 0x4619a942  mul.s       $f5, $f21, $f25
    ctx->pc = 0x2c6548u;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[25]);
    // 0x2c654c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c654cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c6550: 0x4600a182  mul.s       $f6, $f20, $f0
    ctx->pc = 0x2c6550u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c6554: 0xc7b80030  lwc1        $f24, 0x30($sp)
    ctx->pc = 0x2c6554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2c6558: 0x4615b082  mul.s       $f2, $f22, $f21
    ctx->pc = 0x2c6558u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x2c655c: 0x4614b8c2  mul.s       $f3, $f23, $f20
    ctx->pc = 0x2c655cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x2c6560: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x2c6560u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2c6564: 0x4615bd42  mul.s       $f21, $f23, $f21
    ctx->pc = 0x2c6564u;
    ctx->f[21] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x2c6568: 0x4605b842  mul.s       $f1, $f23, $f5
    ctx->pc = 0x2c6568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[5]);
    // 0x2c656c: 0x4606b102  mul.s       $f4, $f22, $f6
    ctx->pc = 0x2c656cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[6]);
    // 0x2c6570: 0x461918c2  mul.s       $f3, $f3, $f25
    ctx->pc = 0x2c6570u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[25]);
    // 0x2c6574: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2c6574u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2c6578: 0x4606bdc2  mul.s       $f23, $f23, $f6
    ctx->pc = 0x2c6578u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[6]);
    // 0x2c657c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c657cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c6580: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x2c6580u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x2c6584: 0x4605b582  mul.s       $f22, $f22, $f5
    ctx->pc = 0x2c6584u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[5]);
    // 0x2c6588: 0xc7b90038  lwc1        $f25, 0x38($sp)
    ctx->pc = 0x2c6588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2c658c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2c658cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c6590: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x2c6590u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2c6594: 0x4617b580  add.s       $f22, $f22, $f23
    ctx->pc = 0x2c6594u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x2c6598: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2c6598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c659c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2c659cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2c65a0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2c65a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c65a4: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2c65a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c65a8: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x2c65a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2c65ac: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2c65acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c65b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c65b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c65b4: 0xc7b70028  lwc1        $f23, 0x28($sp)
    ctx->pc = 0x2c65b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2c65b8: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x2c65b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c65bc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2c65bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c65c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C65C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65C0u;
        // 0x2c65c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C65C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C65C8u;
}
