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

// Function: sub_0025A568
// Address: 0x25a568 - 0x25a5f8
void sub_0025A568_0x25a568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A568_0x25a568");
#endif

    ctx->pc = 0x25a568u;

    // 0x25a568: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x25a568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x25a56c: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25A56Cu;
    {
        const bool branch_taken_0x25a56c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A56Cu;
        // 0x25a570: 0x28a20084  slti        $v0, $a1, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)132) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a56c) {
            ctx->pc = 0x25A5E8u;
            goto label_25a5e8;
        }
    }
    ctx->pc = 0x25A574u;
    // 0x25a574: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25A574u;
    {
        const bool branch_taken_0x25a574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A574u;
        // 0x25a578: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a574) {
            ctx->pc = 0x25A5B0u;
            goto label_25a5b0;
        }
    }
    ctx->pc = 0x25A57Cu;
    // 0x25a57c: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x25A57Cu;
    {
        const bool branch_taken_0x25a57c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A57Cu;
        // 0x25a580: 0x28a20070  slti        $v0, $a1, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)112) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a57c) {
            ctx->pc = 0x25A5E8u;
            goto label_25a5e8;
        }
    }
    ctx->pc = 0x25A584u;
    // 0x25a584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A584u;
    {
        const bool branch_taken_0x25a584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A584u;
        // 0x25a588: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a584) {
            ctx->pc = 0x25A59Cu;
            goto label_25a59c;
        }
    }
    ctx->pc = 0x25A58Cu;
    // 0x25a58c: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25A58Cu;
    {
        const bool branch_taken_0x25a58c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A58Cu;
        // 0x25a590: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a58c) {
            ctx->pc = 0x25A5E0u;
            goto label_25a5e0;
        }
    }
    ctx->pc = 0x25A594u;
    // 0x25a594: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x25A594u;
    {
        const bool branch_taken_0x25a594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a594) {
            ctx->pc = 0x25A5F0u;
            goto label_25a5f0;
        }
    }
    ctx->pc = 0x25A59Cu;
label_25a59c:
    // 0x25a59c: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x25a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x25a5a0: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25A5A0u;
    {
        const bool branch_taken_0x25a5a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5A0u;
        // 0x25a5a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5a0) {
            ctx->pc = 0x25A5E0u;
            goto label_25a5e0;
        }
    }
    ctx->pc = 0x25A5A8u;
    // 0x25a5a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25A5A8u;
    {
        const bool branch_taken_0x25a5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a5a8) {
            ctx->pc = 0x25A5F0u;
            goto label_25a5f0;
        }
    }
    ctx->pc = 0x25A5B0u;
label_25a5b0:
    // 0x25a5b0: 0x24020097  addiu       $v0, $zero, 0x97
    ctx->pc = 0x25a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x25a5b4: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25A5B4u;
    {
        const bool branch_taken_0x25a5b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5B4u;
        // 0x25a5b8: 0x28a20098  slti        $v0, $a1, 0x98 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)152) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5b4) {
            ctx->pc = 0x25A5E8u;
            goto label_25a5e8;
        }
    }
    ctx->pc = 0x25A5BCu;
    // 0x25a5bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A5BCu;
    {
        const bool branch_taken_0x25a5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5BCu;
        // 0x25a5c0: 0x2402008d  addiu       $v0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5bc) {
            ctx->pc = 0x25A5D4u;
            goto label_25a5d4;
        }
    }
    ctx->pc = 0x25A5C4u;
    // 0x25a5c4: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25A5C4u;
    {
        const bool branch_taken_0x25a5c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5C4u;
        // 0x25a5c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5c4) {
            ctx->pc = 0x25A5E0u;
            goto label_25a5e0;
        }
    }
    ctx->pc = 0x25A5CCu;
    // 0x25a5cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25A5CCu;
    {
        const bool branch_taken_0x25a5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a5cc) {
            ctx->pc = 0x25A5F0u;
            goto label_25a5f0;
        }
    }
    ctx->pc = 0x25A5D4u;
label_25a5d4:
    // 0x25a5d4: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x25a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x25a5d8: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A5D8u;
    {
        const bool branch_taken_0x25a5d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x25A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5D8u;
        // 0x25a5dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5d8) {
            ctx->pc = 0x25A5F0u;
            goto label_25a5f0;
        }
    }
    ctx->pc = 0x25A5E0u;
label_25a5e0:
    // 0x25a5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5E0u;
        // 0x25a5e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A5E8u;
label_25a5e8:
    // 0x25a5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x25A5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5E8u;
        // 0x25a5ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A5F0u;
label_25a5f0:
    // 0x25a5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A5F8u;
}
