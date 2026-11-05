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

// Function: sub_0011DD78
// Address: 0x11dd78 - 0x11dde0
void sub_0011DD78_0x11dd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DD78_0x11dd78");
#endif

    switch (ctx->pc) {
        case 0x11dd9cu: goto label_11dd9c;
        case 0x11ddacu: goto label_11ddac;
        default: break;
    }

    ctx->pc = 0x11dd78u;

    // 0x11dd78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11dd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11dd7c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x11dd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11dd80: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11dd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11dd84: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x11dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x11dd88: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11dd8c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11DD8Cu;
    {
        const bool branch_taken_0x11dd8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD8Cu;
        // 0x11dd90: 0x24830108  addiu       $v1, $a0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd8c) {
            ctx->pc = 0x11DDB4u;
            goto label_11ddb4;
        }
    }
    ctx->pc = 0x11DD94u;
    // 0x11dd94: 0xc0478ce  jal         func_11E338
    ctx->pc = 0x11DD94u;
    SET_GPR_U32(ctx, 31, 0x11DD9Cu);
    ctx->pc = 0x11DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD94u;
    // 0x11dd98: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E338u, 0x11DD94u, 0x11DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD9Cu;
label_11dd9c:
    // 0x11dd9c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11dd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11dda0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11dda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dda4: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x11DDA4u;
    SET_GPR_U32(ctx, 31, 0x11DDACu);
    ctx->pc = 0x11DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDA4u;
    // 0x11dda8: 0x24a5c388  addiu       $a1, $a1, -0x3C78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x11DDA4u, 0x11DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDACu;
label_11ddac:
    // 0x11ddac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11DDACu;
    {
        const bool branch_taken_0x11ddac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDACu;
        // 0x11ddb0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ddac) {
            ctx->pc = 0x11DDD8u;
            goto label_11ddd8;
        }
    }
    ctx->pc = 0x11DDB4u;
label_11ddb4:
    // 0x11ddb4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x11ddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x11ddb8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x11ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11ddbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ddc0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DDC0u;
    {
        const bool branch_taken_0x11ddc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ddc0) {
            ctx->pc = 0x11DDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DDC0u;
            // 0x11ddc4: 0xac4001d4  sw          $zero, 0x1D4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 468), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DDC8u;
            goto label_11ddc8;
        }
    }
    ctx->pc = 0x11DDC8u;
label_11ddc8:
    // 0x11ddc8: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x11ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11ddcc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x11ddd0: 0xac40020c  sw          $zero, 0x20C($v0)
    ctx->pc = 0x11ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 524), GPR_U32(ctx, 0));
    // 0x11ddd4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11ddd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_11ddd8:
    // 0x11ddd8: 0x3e00008  jr          $ra
    ctx->pc = 0x11DDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDD8u;
        // 0x11dddc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DDE0u;
}
