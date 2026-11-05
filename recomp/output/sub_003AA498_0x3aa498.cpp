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

// Function: sub_003AA498
// Address: 0x3aa498 - 0x3aa4e0
void sub_003AA498_0x3aa498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA498_0x3aa498");
#endif

    switch (ctx->pc) {
        case 0x3aa498u: goto label_3aa498;
        case 0x3aa49cu: goto label_3aa49c;
        case 0x3aa4a0u: goto label_3aa4a0;
        case 0x3aa4a4u: goto label_3aa4a4;
        case 0x3aa4a8u: goto label_3aa4a8;
        case 0x3aa4acu: goto label_3aa4ac;
        case 0x3aa4b0u: goto label_3aa4b0;
        case 0x3aa4b4u: goto label_3aa4b4;
        case 0x3aa4b8u: goto label_3aa4b8;
        case 0x3aa4bcu: goto label_3aa4bc;
        case 0x3aa4c0u: goto label_3aa4c0;
        case 0x3aa4c4u: goto label_3aa4c4;
        case 0x3aa4c8u: goto label_3aa4c8;
        case 0x3aa4ccu: goto label_3aa4cc;
        case 0x3aa4d0u: goto label_3aa4d0;
        case 0x3aa4d4u: goto label_3aa4d4;
        case 0x3aa4d8u: goto label_3aa4d8;
        case 0x3aa4dcu: goto label_3aa4dc;
        default: break;
    }

    ctx->pc = 0x3aa498u;

label_3aa498:
    // 0x3aa498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3aa49c:
    // 0x3aa49c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aa4a0:
    // 0x3aa4a0: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_3aa4a4:
    if (ctx->pc == 0x3AA4A4u) {
        ctx->pc = 0x3AA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4A0u;
        // 0x3aa4a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA4A8u;
        goto label_3aa4a8;
    }
    ctx->pc = 0x3AA4A0u;
    {
        const bool branch_taken_0x3aa4a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4A0u;
        // 0x3aa4a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4a0) {
            ctx->pc = 0x3AA4B0u;
            goto label_3aa4b0;
        }
    }
    ctx->pc = 0x3AA4A8u;
label_3aa4a8:
    // 0x3aa4a8: 0x1000000a  b           . + 4 + (0xA << 2)
label_3aa4ac:
    if (ctx->pc == 0x3AA4ACu) {
        ctx->pc = 0x3AA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4A8u;
        // 0x3aa4ac: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA4B0u;
        goto label_3aa4b0;
    }
    ctx->pc = 0x3AA4A8u;
    {
        const bool branch_taken_0x3aa4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4A8u;
        // 0x3aa4ac: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4a8) {
            ctx->pc = 0x3AA4D4u;
            goto label_3aa4d4;
        }
    }
    ctx->pc = 0x3AA4B0u;
label_3aa4b0:
    // 0x3aa4b0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_3aa4b4:
    if (ctx->pc == 0x3AA4B4u) {
        ctx->pc = 0x3AA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4B0u;
        // 0x3aa4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA4B8u;
        goto label_3aa4b8;
    }
    ctx->pc = 0x3AA4B0u;
    {
        const bool branch_taken_0x3aa4b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4B0u;
        // 0x3aa4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4b0) {
            ctx->pc = 0x3AA4D4u;
            goto label_3aa4d4;
        }
    }
    ctx->pc = 0x3AA4B8u;
label_3aa4b8:
    // 0x3aa4b8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x3aa4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3aa4bc:
    // 0x3aa4bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3aa4c0:
    if (ctx->pc == 0x3AA4C0u) {
        ctx->pc = 0x3AA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4BCu;
        // 0x3aa4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA4C4u;
        goto label_3aa4c4;
    }
    ctx->pc = 0x3AA4BCu;
    {
        const bool branch_taken_0x3aa4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa4bc) {
            ctx->pc = 0x3AA4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA4BCu;
            // 0x3aa4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA4D4u;
            goto label_3aa4d4;
        }
    }
    ctx->pc = 0x3AA4C4u;
label_3aa4c4:
    // 0x3aa4c4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x3aa4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3aa4c8:
    // 0x3aa4c8: 0x40f809  jalr        $v0
label_3aa4cc:
    if (ctx->pc == 0x3AA4CCu) {
        ctx->pc = 0x3AA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4C8u;
        // 0x3aa4cc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA4D0u;
        goto label_3aa4d0;
    }
    ctx->pc = 0x3AA4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA4D0u);
        ctx->pc = 0x3AA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4C8u;
        // 0x3aa4cc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA4C8u, 0x3AA4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA4D0u;
label_3aa4d0:
    // 0x3aa4d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aa4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aa4d4:
    // 0x3aa4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa4d8:
    // 0x3aa4d8: 0x3e00008  jr          $ra
label_3aa4dc:
    if (ctx->pc == 0x3AA4DCu) {
        ctx->pc = 0x3AA4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4D8u;
        // 0x3aa4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA4E0u;
        goto label_fallthrough_0x3aa4d8;
    }
    ctx->pc = 0x3AA4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4D8u;
        // 0x3aa4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3aa4d8:
    ctx->pc = 0x3AA4E0u;
}
