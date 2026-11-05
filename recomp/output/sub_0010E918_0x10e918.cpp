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

// Function: sub_0010E918
// Address: 0x10e918 - 0x10e950
void sub_0010E918_0x10e918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E918_0x10e918");
#endif

    switch (ctx->pc) {
        case 0x10e918u: goto label_10e918;
        case 0x10e91cu: goto label_10e91c;
        case 0x10e920u: goto label_10e920;
        case 0x10e924u: goto label_10e924;
        case 0x10e928u: goto label_10e928;
        case 0x10e92cu: goto label_10e92c;
        case 0x10e930u: goto label_10e930;
        case 0x10e934u: goto label_10e934;
        case 0x10e938u: goto label_10e938;
        case 0x10e93cu: goto label_10e93c;
        case 0x10e940u: goto label_10e940;
        case 0x10e944u: goto label_10e944;
        case 0x10e948u: goto label_10e948;
        case 0x10e94cu: goto label_10e94c;
        default: break;
    }

    ctx->pc = 0x10e918u;

label_10e918:
    // 0x10e918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e91c:
    // 0x10e91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e920:
    // 0x10e920: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e924:
    // 0x10e924: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_10e928:
    if (ctx->pc == 0x10E928u) {
        ctx->pc = 0x10E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E924u;
        // 0x10e928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E92Cu;
        goto label_10e92c;
    }
    ctx->pc = 0x10E924u;
    {
        const bool branch_taken_0x10e924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E924u;
        // 0x10e928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e924) {
            ctx->pc = 0x10E944u;
            goto label_10e944;
        }
    }
    ctx->pc = 0x10E92Cu;
label_10e92c:
    // 0x10e92c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e930:
    // 0x10e930: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x10e930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_10e934:
    // 0x10e934: 0x40f809  jalr        $v0
label_10e938:
    if (ctx->pc == 0x10E938u) {
        ctx->pc = 0x10E93Cu;
        goto label_10e93c;
    }
    ctx->pc = 0x10E934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E93Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E934u, 0x10E93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E93Cu;
label_10e93c:
    // 0x10e93c: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e940:
    if (ctx->pc == 0x10E940u) {
        ctx->pc = 0x10E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E93Cu;
        // 0x10e940: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E944u;
        goto label_10e944;
    }
    ctx->pc = 0x10E93Cu;
    {
        const bool branch_taken_0x10e93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E93Cu;
        // 0x10e940: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e93c) {
            ctx->pc = 0x10E948u;
            goto label_10e948;
        }
    }
    ctx->pc = 0x10E944u;
label_10e944:
    // 0x10e944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e948:
    // 0x10e948: 0x3e00008  jr          $ra
label_10e94c:
    if (ctx->pc == 0x10E94Cu) {
        ctx->pc = 0x10E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E948u;
        // 0x10e94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E950u;
        goto label_fallthrough_0x10e948;
    }
    ctx->pc = 0x10E948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E948u;
        // 0x10e94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e948:
    ctx->pc = 0x10E950u;
}
