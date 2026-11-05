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

// Function: sub_001EAFA8
// Address: 0x1eafa8 - 0x1eaff8
void sub_001EAFA8_0x1eafa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAFA8_0x1eafa8");
#endif

    switch (ctx->pc) {
        case 0x1eafecu: goto label_1eafec;
        default: break;
    }

    ctx->pc = 0x1eafa8u;

    // 0x1eafa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eafa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eafac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1eafacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eafb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eafb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eafb4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1eafb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eafb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1eafb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1eafbc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1eafbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1eafc0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1eafc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1eafc4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1eafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1eafc8: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x1eafc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x1eafcc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1eafccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eafd0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1eafd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1eafd4: 0xa0430040  sb          $v1, 0x40($v0)
    ctx->pc = 0x1eafd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eafd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1eafd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eafdc: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x1eafdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eafe0: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1eafe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1eafe4: 0xc07abfe  jal         func_1EAFF8
    ctx->pc = 0x1EAFE4u;
    SET_GPR_U32(ctx, 31, 0x1EAFECu);
    ctx->pc = 0x1EAFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAFE4u;
    // 0x1eafe8: 0xa0400039  sb          $zero, 0x39($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 57), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFF8u, 0x1EAFE4u, 0x1EAFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAFECu;
label_1eafec:
    // 0x1eafec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eafecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eaff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFF0u;
        // 0x1eaff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAFF8u;
}
