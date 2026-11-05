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

// Function: sub_0037B2D0
// Address: 0x37b2d0 - 0x37b390
void sub_0037B2D0_0x37b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B2D0_0x37b2d0");
#endif

    switch (ctx->pc) {
        case 0x37b34cu: goto label_37b34c;
        default: break;
    }

    ctx->pc = 0x37b2d0u;

    // 0x37b2d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37b2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37b2d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x37b2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x37b2d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37b2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b2dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37b2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37b2e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x37b2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37b2e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b2e8: 0xe7b70028  swc1        $f23, 0x28($sp)
    ctx->pc = 0x37b2e8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x37b2ec: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x37b2ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x37b2f0: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x37b2f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x37b2f4: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x37b2f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x37b2f8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x37b2f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x37b2fc: 0x46166540  add.s       $f21, $f12, $f22
    ctx->pc = 0x37b2fcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
    // 0x37b300: 0xe7b90038  swc1        $f25, 0x38($sp)
    ctx->pc = 0x37b300u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x37b304: 0x460cb581  sub.s       $f22, $f22, $f12
    ctx->pc = 0x37b304u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
    // 0x37b308: 0xe7b80030  swc1        $f24, 0x30($sp)
    ctx->pc = 0x37b308u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x37b30c: 0xc4b80008  lwc1        $f24, 0x8($a1)
    ctx->pc = 0x37b30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x37b310: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x37b310u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x37b314: 0xc4b9000c  lwc1        $f25, 0xC($a1)
    ctx->pc = 0x37b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x37b318: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x37b318u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x37b31c: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x37b31cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x37b320: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x37b320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37b324: 0x4600cdc2  mul.s       $f23, $f25, $f0
    ctx->pc = 0x37b324u;
    ctx->f[23] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x37b328: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x37b328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37b32c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x37b32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x37b330: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x37b330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37b334: 0x460ec500  add.s       $f20, $f24, $f14
    ctx->pc = 0x37b334u;
    ctx->f[20] = FPU_ADD_S(ctx->f[24], ctx->f[14]);
    // 0x37b338: 0x460fbdc0  add.s       $f23, $f23, $f15
    ctx->pc = 0x37b338u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[15]);
    // 0x37b33c: 0x4602ce42  mul.s       $f25, $f25, $f2
    ctx->pc = 0x37b33cu;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[2]);
    // 0x37b340: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x37b340u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x37b344: 0xc0dec2c  jal         func_37B0B0
    ctx->pc = 0x37B344u;
    SET_GPR_U32(ctx, 31, 0x37B34Cu);
    ctx->pc = 0x37B348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B344u;
    // 0x37b348: 0x4603bdc0  add.s       $f23, $f23, $f3 (Delay Slot)
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0B0u, 0x37B344u, 0x37B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B34Cu;
label_37b34c:
    // 0x37b34c: 0xe6150038  swc1        $f21, 0x38($s0)
    ctx->pc = 0x37b34cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x37b350: 0xe6180000  swc1        $f24, 0x0($s0)
    ctx->pc = 0x37b350u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x37b354: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x37b354u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x37b358: 0xe6190014  swc1        $f25, 0x14($s0)
    ctx->pc = 0x37b358u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x37b35c: 0xe6170034  swc1        $f23, 0x34($s0)
    ctx->pc = 0x37b35cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x37b360: 0xe6160028  swc1        $f22, 0x28($s0)
    ctx->pc = 0x37b360u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x37b364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37b364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b368: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37b368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37b36c: 0xc7b90038  lwc1        $f25, 0x38($sp)
    ctx->pc = 0x37b36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x37b370: 0xc7b80030  lwc1        $f24, 0x30($sp)
    ctx->pc = 0x37b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x37b374: 0xc7b70028  lwc1        $f23, 0x28($sp)
    ctx->pc = 0x37b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x37b378: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x37b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x37b37c: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x37b37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37b380: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x37b380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37b384: 0x3e00008  jr          $ra
    ctx->pc = 0x37B384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B384u;
        // 0x37b388: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B38Cu;
    // 0x37b38c: 0x0  nop
    ctx->pc = 0x37b38cu;
    // NOP
    ctx->pc = 0x37b390u;
}
