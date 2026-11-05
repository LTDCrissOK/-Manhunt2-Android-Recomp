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

// Function: sub_0018FA68
// Address: 0x18fa68 - 0x18faa0
void sub_0018FA68_0x18fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FA68_0x18fa68");
#endif

    switch (ctx->pc) {
        case 0x18fa68u: goto label_18fa68;
        case 0x18fa6cu: goto label_18fa6c;
        case 0x18fa70u: goto label_18fa70;
        case 0x18fa74u: goto label_18fa74;
        case 0x18fa78u: goto label_18fa78;
        case 0x18fa7cu: goto label_18fa7c;
        case 0x18fa80u: goto label_18fa80;
        case 0x18fa84u: goto label_18fa84;
        case 0x18fa88u: goto label_18fa88;
        case 0x18fa8cu: goto label_18fa8c;
        case 0x18fa90u: goto label_18fa90;
        case 0x18fa94u: goto label_18fa94;
        case 0x18fa98u: goto label_18fa98;
        case 0x18fa9cu: goto label_18fa9c;
        default: break;
    }

    ctx->pc = 0x18fa68u;

label_18fa68:
    // 0x18fa68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18fa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18fa6c:
    // 0x18fa6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18fa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18fa70:
    // 0x18fa70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18fa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18fa74:
    // 0x18fa74: 0xc061a12  jal         func_186848
label_18fa78:
    if (ctx->pc == 0x18FA78u) {
        ctx->pc = 0x18FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA74u;
        // 0x18fa78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA7Cu;
        goto label_18fa7c;
    }
    ctx->pc = 0x18FA74u;
    SET_GPR_U32(ctx, 31, 0x18FA7Cu);
    ctx->pc = 0x18FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FA74u;
    // 0x18fa78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18FA74u, 0x18FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FA7Cu;
label_18fa7c:
    // 0x18fa7c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18fa80:
    // 0x18fa80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18fa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fa84:
    // 0x18fa84: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18fa88:
    // 0x18fa88: 0x40f809  jalr        $v0
label_18fa8c:
    if (ctx->pc == 0x18FA8Cu) {
        ctx->pc = 0x18FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA88u;
        // 0x18fa8c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA90u;
        goto label_18fa90;
    }
    ctx->pc = 0x18FA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FA90u);
        ctx->pc = 0x18FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA88u;
        // 0x18fa8c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FA88u, 0x18FA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FA90u;
label_18fa90:
    // 0x18fa90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18fa90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fa94:
    // 0x18fa94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18fa94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18fa98:
    // 0x18fa98: 0x3e00008  jr          $ra
label_18fa9c:
    if (ctx->pc == 0x18FA9Cu) {
        ctx->pc = 0x18FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA98u;
        // 0x18fa9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAA0u;
        goto label_fallthrough_0x18fa98;
    }
    ctx->pc = 0x18FA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA98u;
        // 0x18fa9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18fa98:
    ctx->pc = 0x18FAA0u;
}
