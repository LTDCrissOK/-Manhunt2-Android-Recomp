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

// Function: sub_00107F50
// Address: 0x107f50 - 0x107f80
void sub_00107F50_0x107f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107F50_0x107f50");
#endif

    switch (ctx->pc) {
        case 0x107f50u: goto label_107f50;
        case 0x107f54u: goto label_107f54;
        case 0x107f58u: goto label_107f58;
        case 0x107f5cu: goto label_107f5c;
        case 0x107f60u: goto label_107f60;
        case 0x107f64u: goto label_107f64;
        case 0x107f68u: goto label_107f68;
        case 0x107f6cu: goto label_107f6c;
        case 0x107f70u: goto label_107f70;
        case 0x107f74u: goto label_107f74;
        case 0x107f78u: goto label_107f78;
        case 0x107f7cu: goto label_107f7c;
        default: break;
    }

    ctx->pc = 0x107f50u;

label_107f50:
    // 0x107f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107f54:
    // 0x107f54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107f58:
    // 0x107f58: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107f5c:
    if (ctx->pc == 0x107F5Cu) {
        ctx->pc = 0x107F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F58u;
        // 0x107f5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107F60u;
        goto label_107f60;
    }
    ctx->pc = 0x107F58u;
    {
        const bool branch_taken_0x107f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F58u;
        // 0x107f5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f58) {
            ctx->pc = 0x107F70u;
            goto label_107f70;
        }
    }
    ctx->pc = 0x107F60u;
label_107f60:
    // 0x107f60: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107f64:
    // 0x107f64: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107f68:
    // 0x107f68: 0x40f809  jalr        $v0
label_107f6c:
    if (ctx->pc == 0x107F6Cu) {
        ctx->pc = 0x107F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F68u;
        // 0x107f6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107F70u;
        goto label_107f70;
    }
    ctx->pc = 0x107F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107F70u);
        ctx->pc = 0x107F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F68u;
        // 0x107f6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107F68u, 0x107F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107F70u;
label_107f70:
    // 0x107f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107f74:
    // 0x107f74: 0x3e00008  jr          $ra
label_107f78:
    if (ctx->pc == 0x107F78u) {
        ctx->pc = 0x107F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F74u;
        // 0x107f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107F7Cu;
        goto label_107f7c;
    }
    ctx->pc = 0x107F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F74u;
        // 0x107f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107F7Cu;
label_107f7c:
    // 0x107f7c: 0x0  nop
    ctx->pc = 0x107f7cu;
    // NOP
    ctx->pc = 0x107f80u;
}
