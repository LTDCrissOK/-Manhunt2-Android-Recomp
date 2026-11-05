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

// Function: sub_00135F18
// Address: 0x135f18 - 0x135f50
void sub_00135F18_0x135f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135F18_0x135f18");
#endif

    switch (ctx->pc) {
        case 0x135f34u: goto label_135f34;
        case 0x135f44u: goto label_135f44;
        default: break;
    }

    ctx->pc = 0x135f18u;

    // 0x135f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135f1c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x135f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135f24: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x135F24u;
    {
        const bool branch_taken_0x135f24 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x135F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F24u;
        // 0x135f28: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f24) {
            ctx->pc = 0x135F3Cu;
            goto label_135f3c;
        }
    }
    ctx->pc = 0x135F2Cu;
    // 0x135f2c: 0xc04d7a4  jal         func_135E90
    ctx->pc = 0x135F2Cu;
    SET_GPR_U32(ctx, 31, 0x135F34u);
    ctx->pc = 0x135F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F2Cu;
    // 0x135f30: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135E90u, 0x135F2Cu, 0x135F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F34u;
label_135f34:
    // 0x135f34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x135F34u;
    {
        const bool branch_taken_0x135f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F34u;
        // 0x135f38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f34) {
            ctx->pc = 0x135F48u;
            goto label_135f48;
        }
    }
    ctx->pc = 0x135F3Cu;
label_135f3c:
    // 0x135f3c: 0xc04d788  jal         func_135E20
    ctx->pc = 0x135F3Cu;
    SET_GPR_U32(ctx, 31, 0x135F44u);
    ctx->pc = 0x135F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F3Cu;
    // 0x135f40: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135E20u, 0x135F3Cu, 0x135F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F44u;
label_135f44:
    // 0x135f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135f48:
    // 0x135f48: 0x3e00008  jr          $ra
    ctx->pc = 0x135F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F48u;
        // 0x135f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135F50u;
}
