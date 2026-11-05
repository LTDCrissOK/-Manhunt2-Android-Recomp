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

// Function: sub_00155F28
// Address: 0x155f28 - 0x155f70
void sub_00155F28_0x155f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155F28_0x155f28");
#endif

    switch (ctx->pc) {
        case 0x155f4cu: goto label_155f4c;
        default: break;
    }

    ctx->pc = 0x155f28u;

    // 0x155f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155f2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155f30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x155f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x155f34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f38: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x155f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x155f3c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x155F3Cu;
    {
        const bool branch_taken_0x155f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155f3c) {
            ctx->pc = 0x155F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155F3Cu;
            // 0x155f40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155F64u;
            goto label_155f64;
        }
    }
    ctx->pc = 0x155F44u;
    // 0x155f44: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x155F44u;
    SET_GPR_U32(ctx, 31, 0x155F4Cu);
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x155F44u, 0x155F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F4Cu;
label_155f4c:
    // 0x155f4c: 0xae000520  sw          $zero, 0x520($s0)
    ctx->pc = 0x155f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
    // 0x155f50: 0x7e000530  sq          $zero, 0x530($s0)
    ctx->pc = 0x155f50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1328), GPR_VEC(ctx, 0));
    // 0x155f54: 0xae000548  sw          $zero, 0x548($s0)
    ctx->pc = 0x155f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1352), GPR_U32(ctx, 0));
    // 0x155f58: 0xae000540  sw          $zero, 0x540($s0)
    ctx->pc = 0x155f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1344), GPR_U32(ctx, 0));
    // 0x155f5c: 0xae000544  sw          $zero, 0x544($s0)
    ctx->pc = 0x155f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1348), GPR_U32(ctx, 0));
    // 0x155f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155f64:
    // 0x155f64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x155f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155f68: 0x3e00008  jr          $ra
    ctx->pc = 0x155F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F68u;
        // 0x155f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155F70u;
}
