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

// Function: sub_00145F90
// Address: 0x145f90 - 0x145fd0
void sub_00145F90_0x145f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145F90_0x145f90");
#endif

    switch (ctx->pc) {
        case 0x145fa4u: goto label_145fa4;
        case 0x145facu: goto label_145fac;
        default: break;
    }

    ctx->pc = 0x145f90u;

    // 0x145f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145f94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145f98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x145f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x145f9c: 0xc0519ea  jal         func_1467A8
    ctx->pc = 0x145F9Cu;
    SET_GPR_U32(ctx, 31, 0x145FA4u);
    ctx->pc = 0x145FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F9Cu;
    // 0x145fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1467A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1467A8u, 0x145F9Cu, 0x145FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FA4u;
label_145fa4:
    // 0x145fa4: 0xc04d6d2  jal         func_135B48
    ctx->pc = 0x145FA4u;
    SET_GPR_U32(ctx, 31, 0x145FACu);
    ctx->pc = 0x145FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FA4u;
    // 0x145fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135B48u, 0x145FA4u, 0x145FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FACu;
label_145fac:
    // 0x145fac: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x145facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x145fb0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x145fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x145fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145fb8: 0x9062078c  lbu         $v0, 0x78C($v1)
    ctx->pc = 0x145fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F078Cu));
    // 0x145fbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x145fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145fc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x145fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x145fc4: 0xa062078c  sb          $v0, 0x78C($v1)
    ctx->pc = 0x145fc4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F078Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F078Cu, _value); } while (0);
    // 0x145fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x145FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FC8u;
        // 0x145fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145FD0u;
}
