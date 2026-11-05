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

// Function: sub_00399360
// Address: 0x399360 - 0x3993a8
void sub_00399360_0x399360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399360_0x399360");
#endif

    switch (ctx->pc) {
        case 0x399398u: goto label_399398;
        default: break;
    }

    ctx->pc = 0x399360u;

    // 0x399360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399364: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x399364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x399368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39936c: 0x24429ce0  addiu       $v0, $v0, -0x6320
    ctx->pc = 0x39936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941920));
    // 0x399370: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x399370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399374: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x399374u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x409CE0u));
    // 0x399378: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x399378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39937c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39937Cu;
    {
        const bool branch_taken_0x39937c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x399380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39937Cu;
        // 0x399380: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39937c) {
            ctx->pc = 0x399398u;
            goto label_399398;
        }
    }
    ctx->pc = 0x399384u;
    // 0x399384: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x399384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x399388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x399388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39938c: 0x24849d00  addiu       $a0, $a0, -0x6300
    ctx->pc = 0x39938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
    // 0x399390: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x399390u;
    SET_GPR_U32(ctx, 31, 0x399398u);
    ctx->pc = 0x399394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399390u;
    // 0x399394: 0x24061040  addiu       $a2, $zero, 0x1040 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x399390u, 0x399398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399398u;
label_399398:
    // 0x399398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x399398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39939c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3993a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3993A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3993A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993A0u;
        // 0x3993a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3993A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3993A8u;
}
