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

// Function: sub_003DD5E8
// Address: 0x3dd5e8 - 0x3dd660
void sub_003DD5E8_0x3dd5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD5E8_0x3dd5e8");
#endif

    switch (ctx->pc) {
        case 0x3dd608u: goto label_3dd608;
        case 0x3dd644u: goto label_3dd644;
        default: break;
    }

    ctx->pc = 0x3dd5e8u;

    // 0x3dd5e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dd5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dd5ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3dd5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3dd5f0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3dd5f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3dd5f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dd5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd5f8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3dd5f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3dd5fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3dd5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3dd600: 0xc0f7598  jal         func_3DD660
    ctx->pc = 0x3DD600u;
    SET_GPR_U32(ctx, 31, 0x3DD608u);
    ctx->pc = 0x3DD604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD600u;
    // 0x3dd604: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD660u, 0x3DD600u, 0x3DD608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD608u;
label_3dd608:
    // 0x3dd608: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3dd608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3dd60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dd60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd610: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x3dd610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3dd614: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3dd614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd618: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3dd618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd61c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x3dd61cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x3dd620: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x3dd620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd624: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3dd624u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3dd628: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3dd628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3dd62c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3dd62cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3dd630: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3dd630u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3dd634: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3dd634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3dd638: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3dd638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3dd63c: 0xc0f7598  jal         func_3DD660
    ctx->pc = 0x3DD63Cu;
    SET_GPR_U32(ctx, 31, 0x3DD644u);
    ctx->pc = 0x3DD640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD63Cu;
    // 0x3dd640: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD660u, 0x3DD63Cu, 0x3DD644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD644u;
label_3dd644:
    // 0x3dd644: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3dd644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd648: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3dd648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dd64c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3dd64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd650: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3dd650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3dd654: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD654u;
        // 0x3dd658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD65Cu;
    // 0x3dd65c: 0x0  nop
    ctx->pc = 0x3dd65cu;
    // NOP
    ctx->pc = 0x3dd660u;
}
