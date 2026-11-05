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

// Function: sub_0035D978
// Address: 0x35d978 - 0x35d9b0
void sub_0035D978_0x35d978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D978_0x35d978");
#endif

    switch (ctx->pc) {
        case 0x35d978u: goto label_35d978;
        case 0x35d97cu: goto label_35d97c;
        case 0x35d980u: goto label_35d980;
        case 0x35d984u: goto label_35d984;
        case 0x35d988u: goto label_35d988;
        case 0x35d98cu: goto label_35d98c;
        case 0x35d990u: goto label_35d990;
        case 0x35d994u: goto label_35d994;
        case 0x35d998u: goto label_35d998;
        case 0x35d99cu: goto label_35d99c;
        case 0x35d9a0u: goto label_35d9a0;
        case 0x35d9a4u: goto label_35d9a4;
        case 0x35d9a8u: goto label_35d9a8;
        case 0x35d9acu: goto label_35d9ac;
        default: break;
    }

    ctx->pc = 0x35d978u;

label_35d978:
    // 0x35d978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_35d97c:
    // 0x35d97c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d980:
    // 0x35d980: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_35d984:
    // 0x35d984: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_35d988:
    // 0x35d988: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x35d988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_35d98c:
    // 0x35d98c: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x35d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_35d990:
    // 0x35d990: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x35d990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_35d994:
    // 0x35d994: 0x40f809  jalr        $v0
label_35d998:
    if (ctx->pc == 0x35D998u) {
        ctx->pc = 0x35D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D994u;
        // 0x35d998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35D99Cu;
        goto label_35d99c;
    }
    ctx->pc = 0x35D994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35D99Cu);
        ctx->pc = 0x35D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D994u;
        // 0x35d998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D994u, 0x35D99Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35D99Cu;
label_35d99c:
    // 0x35d99c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35d99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35d9a0:
    // 0x35d9a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35d9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_35d9a4:
    // 0x35d9a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d9a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35d9a8:
    // 0x35d9a8: 0x3e00008  jr          $ra
label_35d9ac:
    if (ctx->pc == 0x35D9ACu) {
        ctx->pc = 0x35D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9A8u;
        // 0x35d9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35D9B0u;
        goto label_fallthrough_0x35d9a8;
    }
    ctx->pc = 0x35D9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9A8u;
        // 0x35d9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35d9a8:
    ctx->pc = 0x35D9B0u;
}
