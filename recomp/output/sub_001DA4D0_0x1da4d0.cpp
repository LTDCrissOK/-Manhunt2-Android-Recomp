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

// Function: sub_001DA4D0
// Address: 0x1da4d0 - 0x1da540
void sub_001DA4D0_0x1da4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA4D0_0x1da4d0");
#endif

    switch (ctx->pc) {
        case 0x1da500u: goto label_1da500;
        case 0x1da520u: goto label_1da520;
        default: break;
    }

    ctx->pc = 0x1da4d0u;

    // 0x1da4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da4d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da4dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4e0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1da4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da4e4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1da4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1da4e8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA4E8u;
    {
        const bool branch_taken_0x1da4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da4e8) {
            ctx->pc = 0x1DA4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA4E8u;
            // 0x1da4ec: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA510u;
            goto label_1da510;
        }
    }
    ctx->pc = 0x1DA4F0u;
    // 0x1da4f0: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA4F0u;
    {
        const bool branch_taken_0x1da4f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da4f0) {
            ctx->pc = 0x1DA4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA4F0u;
            // 0x1da4f4: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA510u;
            goto label_1da510;
        }
    }
    ctx->pc = 0x1DA4F8u;
    // 0x1da4f8: 0xc07951c  jal         func_1E5470
    ctx->pc = 0x1DA4F8u;
    SET_GPR_U32(ctx, 31, 0x1DA500u);
    ctx->pc = 0x1E5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5470u, 0x1DA4F8u, 0x1DA500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA500u;
label_1da500:
    // 0x1da500: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DA500u;
    {
        const bool branch_taken_0x1da500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA500u;
        // 0x1da504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da500) {
            ctx->pc = 0x1DA530u;
            goto label_1da530;
        }
    }
    ctx->pc = 0x1DA508u;
    // 0x1da508: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1da508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da50c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1da50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1da510:
    // 0x1da510: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA510u;
    {
        const bool branch_taken_0x1da510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da510) {
            ctx->pc = 0x1DA514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA510u;
            // 0x1da514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA530u;
            goto label_1da530;
        }
    }
    ctx->pc = 0x1DA518u;
    // 0x1da518: 0xc0798ac  jal         func_1E62B0
    ctx->pc = 0x1DA518u;
    SET_GPR_U32(ctx, 31, 0x1DA520u);
    ctx->pc = 0x1E62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E62B0u, 0x1DA518u, 0x1DA520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA520u;
label_1da520:
    // 0x1da520: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1da520u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da524: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DA524u;
    {
        const bool branch_taken_0x1da524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA524u;
        // 0x1da528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da524) {
            ctx->pc = 0x1DA530u;
            goto label_1da530;
        }
    }
    ctx->pc = 0x1DA52Cu;
    // 0x1da52c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da530:
    // 0x1da530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da534: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da538: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA538u;
        // 0x1da53c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA540u;
}
