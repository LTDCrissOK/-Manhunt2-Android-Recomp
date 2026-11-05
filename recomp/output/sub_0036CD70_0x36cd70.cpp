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

// Function: sub_0036CD70
// Address: 0x36cd70 - 0x36cdf0
void sub_0036CD70_0x36cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CD70_0x36cd70");
#endif

    switch (ctx->pc) {
        case 0x36cd90u: goto label_36cd90;
        case 0x36cd98u: goto label_36cd98;
        case 0x36cda8u: goto label_36cda8;
        case 0x36cdb0u: goto label_36cdb0;
        default: break;
    }

    ctx->pc = 0x36cd70u;

    // 0x36cd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36cd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36cd74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36cd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36cd78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36cd7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36cd7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cd80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36cd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36cd84: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x36cd84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x36cd88: 0xc0dcea2  jal         func_373A88
    ctx->pc = 0x36CD88u;
    SET_GPR_U32(ctx, 31, 0x36CD90u);
    ctx->pc = 0x36CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CD88u;
    // 0x36cd8c: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A88u, 0x36CD88u, 0x36CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD90u;
label_36cd90:
    // 0x36cd90: 0xc082ecc  jal         func_20BB30
    ctx->pc = 0x36CD90u;
    SET_GPR_U32(ctx, 31, 0x36CD98u);
    ctx->pc = 0x20BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BB30u, 0x36CD90u, 0x36CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD98u;
label_36cd98:
    // 0x36cd98: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x36cd9c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36cd9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36cda0: 0xc0dc484  jal         func_371210
    ctx->pc = 0x36CDA0u;
    SET_GPR_U32(ctx, 31, 0x36CDA8u);
    ctx->pc = 0x36CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CDA0u;
    // 0x36cda4: 0x2484f910  addiu       $a0, $a0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371210u, 0x36CDA0u, 0x36CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CDA8u;
label_36cda8:
    // 0x36cda8: 0xc082ecc  jal         func_20BB30
    ctx->pc = 0x36CDA8u;
    SET_GPR_U32(ctx, 31, 0x36CDB0u);
    ctx->pc = 0x20BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BB30u, 0x36CDA8u, 0x36CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CDB0u;
label_36cdb0:
    // 0x36cdb0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x36cdb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x36cdb4: 0xc601f014  lwc1        $f1, -0xFEC($s0)
    ctx->pc = 0x36cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294963220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36cdb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x36cdb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cdbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36cdbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cdc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36cdc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cdc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36cdc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36cdc8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x36cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36cdcc: 0xe601f014  swc1        $f1, -0xFEC($s0)
    ctx->pc = 0x36cdccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294963220), bits); }
    // 0x36cdd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36cdd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x36CDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDD4u;
        // 0x36cdd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CDDCu;
    // 0x36cddc: 0x0  nop
    ctx->pc = 0x36cddcu;
    // NOP
    // 0x36cde0: 0xe44c0080  swc1        $f12, 0x80($v0)
    ctx->pc = 0x36cde0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x36cde4: 0x0  nop
    ctx->pc = 0x36cde4u;
    // NOP
    // 0x36cde8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36cdec: 0x0  nop
    ctx->pc = 0x36cdecu;
    // NOP
    ctx->pc = 0x36cdf0u;
}
