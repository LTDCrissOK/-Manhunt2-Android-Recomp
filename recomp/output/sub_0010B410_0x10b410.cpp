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

// Function: sub_0010B410
// Address: 0x10b410 - 0x10b468
void sub_0010B410_0x10b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B410_0x10b410");
#endif

    switch (ctx->pc) {
        case 0x10b424u: goto label_10b424;
        default: break;
    }

    ctx->pc = 0x10b410u;

    // 0x10b410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10b41c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B41Cu;
    SET_GPR_U32(ctx, 31, 0x10B424u);
    ctx->pc = 0x10B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B41Cu;
    // 0x10b420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B41Cu, 0x10B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B424u;
label_10b424:
    // 0x10b424: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b428: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b42c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B42Cu;
    {
        const bool branch_taken_0x10b42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B42Cu;
        // 0x10b430: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b42c) {
            ctx->pc = 0x10B43Cu;
            goto label_10b43c;
        }
    }
    ctx->pc = 0x10B434u;
    // 0x10b434: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10B434u;
    {
        const bool branch_taken_0x10b434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B434u;
        // 0x10b438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b434) {
            ctx->pc = 0x10B458u;
            goto label_10b458;
        }
    }
    ctx->pc = 0x10B43Cu;
label_10b43c:
    // 0x10b43c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b440: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b444: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x10b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b448: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B448u;
    {
        const bool branch_taken_0x10b448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b448) {
            ctx->pc = 0x10B44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B448u;
            // 0x10b44c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B458u;
            goto label_10b458;
        }
    }
    ctx->pc = 0x10B450u;
    // 0x10b450: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x10b450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x10b454: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10b454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10b458:
    // 0x10b458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b45c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10b45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b460: 0x3e00008  jr          $ra
    ctx->pc = 0x10B460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B460u;
        // 0x10b464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B468u;
}
