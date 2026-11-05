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

// Function: sub_00200DE8
// Address: 0x200de8 - 0x200e28
void sub_00200DE8_0x200de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200DE8_0x200de8");
#endif

    switch (ctx->pc) {
        case 0x200e08u: goto label_200e08;
        case 0x200e14u: goto label_200e14;
        default: break;
    }

    ctx->pc = 0x200de8u;

    // 0x200de8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200df0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200df8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x200dfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x200dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e00: 0xc081cda  jal         func_207368
    ctx->pc = 0x200E00u;
    SET_GPR_U32(ctx, 31, 0x200E08u);
    ctx->pc = 0x200E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E00u;
    // 0x200e04: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207368u, 0x200E00u, 0x200E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E08u;
label_200e08:
    // 0x200e08: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x200e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x200e0c: 0xc081cda  jal         func_207368
    ctx->pc = 0x200E0Cu;
    SET_GPR_U32(ctx, 31, 0x200E14u);
    ctx->pc = 0x200E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E0Cu;
    // 0x200e10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207368u, 0x200E0Cu, 0x200E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E14u;
label_200e14:
    // 0x200e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200e18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200e1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200e20: 0x3e00008  jr          $ra
    ctx->pc = 0x200E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E20u;
        // 0x200e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200E28u;
}
