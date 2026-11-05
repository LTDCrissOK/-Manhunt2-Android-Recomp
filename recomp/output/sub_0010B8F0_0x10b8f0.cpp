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

// Function: sub_0010B8F0
// Address: 0x10b8f0 - 0x10b958
void sub_0010B8F0_0x10b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B8F0_0x10b8f0");
#endif

    switch (ctx->pc) {
        case 0x10b90cu: goto label_10b90c;
        default: break;
    }

    ctx->pc = 0x10b8f0u;

    // 0x10b8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b8f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b8f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b904: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B904u;
    SET_GPR_U32(ctx, 31, 0x10B90Cu);
    ctx->pc = 0x10B908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B904u;
    // 0x10b908: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B904u, 0x10B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B90Cu;
label_10b90c:
    // 0x10b90c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b90cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b910: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b914: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B914u;
    {
        const bool branch_taken_0x10b914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B914u;
        // 0x10b918: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b914) {
            ctx->pc = 0x10B93Cu;
            goto label_10b93c;
        }
    }
    ctx->pc = 0x10B91Cu;
    // 0x10b91c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b920: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b924: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x10b924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b928: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B928u;
    {
        const bool branch_taken_0x10b928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b928) {
            ctx->pc = 0x10B92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B928u;
            // 0x10b92c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B940u;
            goto label_10b940;
        }
    }
    ctx->pc = 0x10B930u;
    // 0x10b930: 0xac5100c0  sw          $s1, 0xC0($v0)
    ctx->pc = 0x10b930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 17));
    // 0x10b934: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B934u;
    {
        const bool branch_taken_0x10b934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B934u;
        // 0x10b938: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b934) {
            ctx->pc = 0x10B940u;
            goto label_10b940;
        }
    }
    ctx->pc = 0x10B93Cu;
label_10b93c:
    // 0x10b93c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b940:
    // 0x10b940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b94c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B94Cu;
        // 0x10b950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B954u;
    // 0x10b954: 0x0  nop
    ctx->pc = 0x10b954u;
    // NOP
    ctx->pc = 0x10b958u;
}
