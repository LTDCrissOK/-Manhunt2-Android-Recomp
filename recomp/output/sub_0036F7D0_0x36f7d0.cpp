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

// Function: sub_0036F7D0
// Address: 0x36f7d0 - 0x36f810
void sub_0036F7D0_0x36f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F7D0_0x36f7d0");
#endif

    switch (ctx->pc) {
        case 0x36f800u: goto label_36f800;
        default: break;
    }

    ctx->pc = 0x36f7d0u;

    // 0x36f7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36f7d4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x36f7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7d8: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x36f7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x36f7dc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x36f7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x36f7e0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x36f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x36f7e4: 0x24c6f798  addiu       $a2, $a2, -0x868
    ctx->pc = 0x36f7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965144));
    // 0x36f7e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36f7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36f7ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36f7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7f0: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x36f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x36f7f4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x36f7f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7f8: 0xc0c9212  jal         func_324848
    ctx->pc = 0x36F7F8u;
    SET_GPR_U32(ctx, 31, 0x36F800u);
    ctx->pc = 0x36F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F7F8u;
    // 0x36f7fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324848u, 0x36F7F8u, 0x36F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F800u;
label_36f800:
    // 0x36f800: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36f800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f804: 0x3e00008  jr          $ra
    ctx->pc = 0x36F804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F804u;
        // 0x36f808: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F80Cu;
    // 0x36f80c: 0x0  nop
    ctx->pc = 0x36f80cu;
    // NOP
    ctx->pc = 0x36f810u;
}
