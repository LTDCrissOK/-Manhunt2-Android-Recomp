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

// Function: sub_00178FD8
// Address: 0x178fd8 - 0x179008
void sub_00178FD8_0x178fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178FD8_0x178fd8");
#endif

    switch (ctx->pc) {
        case 0x178fecu: goto label_178fec;
        default: break;
    }

    ctx->pc = 0x178fd8u;

    // 0x178fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178fdc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x178FDCu;
    {
        const bool branch_taken_0x178fdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x178FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FDCu;
        // 0x178fe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178fdc) {
            ctx->pc = 0x178FF8u;
            goto label_178ff8;
        }
    }
    ctx->pc = 0x178FE4u;
    // 0x178fe4: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x178FE4u;
    SET_GPR_U32(ctx, 31, 0x178FECu);
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x178FE4u, 0x178FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178FECu;
label_178fec:
    // 0x178fec: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x178fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x178ff0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x178FF0u;
    {
        const bool branch_taken_0x178ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FF0u;
        // 0x178ff4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ff0) {
            ctx->pc = 0x178FFCu;
            goto label_178ffc;
        }
    }
    ctx->pc = 0x178FF8u;
label_178ff8:
    // 0x178ff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178ffc:
    // 0x178ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179000: 0x3e00008  jr          $ra
    ctx->pc = 0x179000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179000u;
        // 0x179004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179008u;
}
