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

// Function: sub_0022EFD0
// Address: 0x22efd0 - 0x22f008
void sub_0022EFD0_0x22efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EFD0_0x22efd0");
#endif

    switch (ctx->pc) {
        case 0x22efd0u: goto label_22efd0;
        case 0x22efd4u: goto label_22efd4;
        case 0x22efd8u: goto label_22efd8;
        case 0x22efdcu: goto label_22efdc;
        case 0x22efe0u: goto label_22efe0;
        case 0x22efe4u: goto label_22efe4;
        case 0x22efe8u: goto label_22efe8;
        case 0x22efecu: goto label_22efec;
        case 0x22eff0u: goto label_22eff0;
        case 0x22eff4u: goto label_22eff4;
        case 0x22eff8u: goto label_22eff8;
        case 0x22effcu: goto label_22effc;
        case 0x22f000u: goto label_22f000;
        case 0x22f004u: goto label_22f004;
        default: break;
    }

    ctx->pc = 0x22efd0u;

label_22efd0:
    // 0x22efd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22efd4:
    // 0x22efd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22efd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22efd8:
    // 0x22efd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22efdc:
    // 0x22efdc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x22efdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_22efe0:
    // 0x22efe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22efe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22efe4:
    // 0x22efe4: 0xc44c0374  lwc1        $f12, 0x374($v0)
    ctx->pc = 0x22efe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22efe8:
    // 0x22efe8: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x22efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_22efec:
    // 0x22efec: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x22efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_22eff0:
    // 0x22eff0: 0x40f809  jalr        $v0
label_22eff4:
    if (ctx->pc == 0x22EFF4u) {
        ctx->pc = 0x22EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFF0u;
        // 0x22eff4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EFF8u;
        goto label_22eff8;
    }
    ctx->pc = 0x22EFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22EFF8u);
        ctx->pc = 0x22EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFF0u;
        // 0x22eff4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EFF0u, 0x22EFF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EFF8u;
label_22eff8:
    // 0x22eff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22eff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22effc:
    // 0x22effc: 0x3e00008  jr          $ra
label_22f000:
    if (ctx->pc == 0x22F000u) {
        ctx->pc = 0x22F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFFCu;
        // 0x22f000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F004u;
        goto label_22f004;
    }
    ctx->pc = 0x22EFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFFCu;
        // 0x22f000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F004u;
label_22f004:
    // 0x22f004: 0x0  nop
    ctx->pc = 0x22f004u;
    // NOP
    ctx->pc = 0x22f008u;
}
