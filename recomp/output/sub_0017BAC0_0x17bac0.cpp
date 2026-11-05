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

// Function: sub_0017BAC0
// Address: 0x17bac0 - 0x17bb20
void sub_0017BAC0_0x17bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BAC0_0x17bac0");
#endif

    switch (ctx->pc) {
        case 0x17bb04u: goto label_17bb04;
        case 0x17bb14u: goto label_17bb14;
        default: break;
    }

    ctx->pc = 0x17bac0u;

    // 0x17bac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bac8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x17bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x17bacc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x17baccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17bad0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17BAD0u;
    {
        const bool branch_taken_0x17bad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAD0u;
        // 0x17bad4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bad0) {
            ctx->pc = 0x17BAF0u;
            goto label_17baf0;
        }
    }
    ctx->pc = 0x17BAD8u;
    // 0x17bad8: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17BAD8u;
    {
        const bool branch_taken_0x17bad8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x17bad8) {
            ctx->pc = 0x17BB0Cu;
            goto label_17bb0c;
        }
    }
    ctx->pc = 0x17BAE0u;
    // 0x17bae0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BAE0u;
    {
        const bool branch_taken_0x17bae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAE0u;
        // 0x17bae4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bae0) {
            ctx->pc = 0x17BAFCu;
            goto label_17bafc;
        }
    }
    ctx->pc = 0x17BAE8u;
    // 0x17bae8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17BAE8u;
    {
        const bool branch_taken_0x17bae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bae8) {
            ctx->pc = 0x17BB18u;
            goto label_17bb18;
        }
    }
    ctx->pc = 0x17BAF0u;
label_17baf0:
    // 0x17baf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17baf4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BAF4u;
    {
        const bool branch_taken_0x17baf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAF4u;
        // 0x17baf8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17baf4) {
            ctx->pc = 0x17BB18u;
            goto label_17bb18;
        }
    }
    ctx->pc = 0x17BAFCu;
label_17bafc:
    // 0x17bafc: 0xc04398a  jal         func_10E628
    ctx->pc = 0x17BAFCu;
    SET_GPR_U32(ctx, 31, 0x17BB04u);
    ctx->pc = 0x17BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BAFCu;
    // 0x17bb00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x17BAFCu, 0x17BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB04u;
label_17bb04:
    // 0x17bb04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17BB04u;
    {
        const bool branch_taken_0x17bb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB04u;
        // 0x17bb08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb04) {
            ctx->pc = 0x17BB18u;
            goto label_17bb18;
        }
    }
    ctx->pc = 0x17BB0Cu;
label_17bb0c:
    // 0x17bb0c: 0xc04398a  jal         func_10E628
    ctx->pc = 0x17BB0Cu;
    SET_GPR_U32(ctx, 31, 0x17BB14u);
    ctx->pc = 0x17BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB0Cu;
    // 0x17bb10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x17BB0Cu, 0x17BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB14u;
label_17bb14:
    // 0x17bb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17bb18:
    // 0x17bb18: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB18u;
        // 0x17bb1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB20u;
}
