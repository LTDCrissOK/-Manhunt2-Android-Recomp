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

// Function: sub_002201E8
// Address: 0x2201e8 - 0x220228
void sub_002201E8_0x2201e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002201E8_0x2201e8");
#endif

    switch (ctx->pc) {
        case 0x22020cu: goto label_22020c;
        default: break;
    }

    ctx->pc = 0x2201e8u;

    // 0x2201e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2201e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2201ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2201ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2201f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2201f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2201f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2201f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201f8: 0x8e021400  lw          $v0, 0x1400($s0)
    ctx->pc = 0x2201f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5120)));
    // 0x2201fc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2201FCu;
    {
        const bool branch_taken_0x2201fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2201fc) {
            ctx->pc = 0x220200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2201FCu;
            // 0x220200: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220218u;
            goto label_220218;
        }
    }
    ctx->pc = 0x220204u;
    // 0x220204: 0xc087026  jal         func_21C098
    ctx->pc = 0x220204u;
    SET_GPR_U32(ctx, 31, 0x22020Cu);
    ctx->pc = 0x21C098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C098u, 0x220204u, 0x22020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22020Cu;
label_22020c:
    // 0x22020c: 0xae021400  sw          $v0, 0x1400($s0)
    ctx->pc = 0x22020cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5120), GPR_U32(ctx, 2));
    // 0x220210: 0x8e021400  lw          $v0, 0x1400($s0)
    ctx->pc = 0x220210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5120)));
    // 0x220214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_220218:
    // 0x220218: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x220218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22021c: 0x3e00008  jr          $ra
    ctx->pc = 0x22021Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22021Cu;
        // 0x220220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22021Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220224u;
    // 0x220224: 0x0  nop
    ctx->pc = 0x220224u;
    // NOP
    ctx->pc = 0x220228u;
}
