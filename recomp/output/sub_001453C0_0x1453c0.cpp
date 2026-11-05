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

// Function: sub_001453C0
// Address: 0x1453c0 - 0x145400
void sub_001453C0_0x1453c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001453C0_0x1453c0");
#endif

    switch (ctx->pc) {
        case 0x1453e4u: goto label_1453e4;
        default: break;
    }

    ctx->pc = 0x1453c0u;

    // 0x1453c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1453c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1453c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1453c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1453c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1453c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1453cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1453ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1453d0: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x1453d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x1453d4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1453D4u;
    {
        const bool branch_taken_0x1453d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1453d4) {
            ctx->pc = 0x1453D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1453D4u;
            // 0x1453d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1453F4u;
            goto label_1453f4;
        }
    }
    ctx->pc = 0x1453DCu;
    // 0x1453dc: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x1453DCu;
    SET_GPR_U32(ctx, 31, 0x1453E4u);
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x1453DCu, 0x1453E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1453E4u;
label_1453e4:
    // 0x1453e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1453e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1453e8: 0xae000520  sw          $zero, 0x520($s0)
    ctx->pc = 0x1453e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
    // 0x1453ec: 0xae020524  sw          $v0, 0x524($s0)
    ctx->pc = 0x1453ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 2));
    // 0x1453f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1453f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1453f4:
    // 0x1453f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1453f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1453f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1453F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1453FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453F8u;
        // 0x1453fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1453F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145400u;
}
