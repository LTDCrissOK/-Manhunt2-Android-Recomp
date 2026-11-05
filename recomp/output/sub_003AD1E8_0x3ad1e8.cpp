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

// Function: sub_003AD1E8
// Address: 0x3ad1e8 - 0x3ad228
void sub_003AD1E8_0x3ad1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD1E8_0x3ad1e8");
#endif

    switch (ctx->pc) {
        case 0x3ad20cu: goto label_3ad20c;
        default: break;
    }

    ctx->pc = 0x3ad1e8u;

    // 0x3ad1e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ad1ec: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ad1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3ad1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ad1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ad1f4: 0x24503304  addiu       $s0, $v0, 0x3304
    ctx->pc = 0x3ad1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13060));
    // 0x3ad1f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ad1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x423304u));
    // 0x3ad1fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD1FCu;
    {
        const bool branch_taken_0x3ad1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD1FCu;
        // 0x3ad200: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad1fc) {
            ctx->pc = 0x3AD20Cu;
            goto label_3ad20c;
        }
    }
    ctx->pc = 0x3AD204u;
    // 0x3ad204: 0xc0eb450  jal         func_3AD140
    ctx->pc = 0x3AD204u;
    SET_GPR_U32(ctx, 31, 0x3AD20Cu);
    ctx->pc = 0x3AD140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD140u, 0x3AD204u, 0x3AD20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD20Cu;
label_3ad20c:
    // 0x3ad20c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ad20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ad210: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ad210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ad214: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ad214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ad218: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3ad218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3ad21c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ad21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad220: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD220u;
        // 0x3ad224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD228u;
}
