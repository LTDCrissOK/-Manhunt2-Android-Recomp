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

// Function: sub_00108258
// Address: 0x108258 - 0x108288
void sub_00108258_0x108258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108258_0x108258");
#endif

    switch (ctx->pc) {
        case 0x108258u: goto label_108258;
        case 0x10825cu: goto label_10825c;
        case 0x108260u: goto label_108260;
        case 0x108264u: goto label_108264;
        case 0x108268u: goto label_108268;
        case 0x10826cu: goto label_10826c;
        case 0x108270u: goto label_108270;
        case 0x108274u: goto label_108274;
        case 0x108278u: goto label_108278;
        case 0x10827cu: goto label_10827c;
        case 0x108280u: goto label_108280;
        case 0x108284u: goto label_108284;
        default: break;
    }

    ctx->pc = 0x108258u;

label_108258:
    // 0x108258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10825c:
    // 0x10825c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10825cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108260:
    // 0x108260: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_108264:
    if (ctx->pc == 0x108264u) {
        ctx->pc = 0x108264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108260u;
        // 0x108264: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108268u;
        goto label_108268;
    }
    ctx->pc = 0x108260u;
    {
        const bool branch_taken_0x108260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108260u;
        // 0x108264: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108260) {
            ctx->pc = 0x108278u;
            goto label_108278;
        }
    }
    ctx->pc = 0x108268u;
label_108268:
    // 0x108268: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x108268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_10826c:
    // 0x10826c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x10826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_108270:
    // 0x108270: 0x40f809  jalr        $v0
label_108274:
    if (ctx->pc == 0x108274u) {
        ctx->pc = 0x108274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108270u;
        // 0x108274: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108278u;
        goto label_108278;
    }
    ctx->pc = 0x108270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108278u);
        ctx->pc = 0x108274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108270u;
        // 0x108274: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108270u, 0x108278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108278u;
label_108278:
    // 0x108278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10827c:
    // 0x10827c: 0x3e00008  jr          $ra
label_108280:
    if (ctx->pc == 0x108280u) {
        ctx->pc = 0x108280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10827Cu;
        // 0x108280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108284u;
        goto label_108284;
    }
    ctx->pc = 0x10827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10827Cu;
        // 0x108280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10827Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108284u;
label_108284:
    // 0x108284: 0x0  nop
    ctx->pc = 0x108284u;
    // NOP
    ctx->pc = 0x108288u;
}
