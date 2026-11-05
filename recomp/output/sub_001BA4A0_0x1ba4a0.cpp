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

// Function: sub_001BA4A0
// Address: 0x1ba4a0 - 0x1ba548
void sub_001BA4A0_0x1ba4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA4A0_0x1ba4a0");
#endif

    switch (ctx->pc) {
        case 0x1ba4d4u: goto label_1ba4d4;
        default: break;
    }

    ctx->pc = 0x1ba4a0u;

    // 0x1ba4a0: 0x8c820424  lw          $v0, 0x424($a0)
    ctx->pc = 0x1ba4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1060)));
    // 0x1ba4a4: 0x10a20026  beq         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1BA4A4u;
    {
        const bool branch_taken_0x1ba4a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ba4a4) {
            ctx->pc = 0x1BA540u;
            goto label_1ba540;
        }
    }
    ctx->pc = 0x1BA4ACu;
    // 0x1ba4ac: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BA4ACu;
    {
        const bool branch_taken_0x1ba4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4ACu;
        // 0x1ba4b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4ac) {
            ctx->pc = 0x1BA53Cu;
            goto label_1ba53c;
        }
    }
    ctx->pc = 0x1BA4B4u;
    // 0x1ba4b4: 0x8c8803f4  lw          $t0, 0x3F4($a0)
    ctx->pc = 0x1ba4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1012)));
    // 0x1ba4b8: 0x8c82019c  lw          $v0, 0x19C($a0)
    ctx->pc = 0x1ba4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
    // 0x1ba4bc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1ba4bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba4c0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA4C0u;
    {
        const bool branch_taken_0x1ba4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1BA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4C0u;
        // 0x1ba4c4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4c0) {
            ctx->pc = 0x1BA4D0u;
            goto label_1ba4d0;
        }
    }
    ctx->pc = 0x1BA4C8u;
    // 0x1ba4c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BA4C8u;
    {
        const bool branch_taken_0x1ba4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4C8u;
        // 0x1ba4cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4c8) {
            ctx->pc = 0x1BA4F8u;
            goto label_1ba4f8;
        }
    }
    ctx->pc = 0x1BA4D0u;
label_1ba4d0:
    // 0x1ba4d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ba4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ba4d4:
    // 0x1ba4d4: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1ba4d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ba4d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA4D8u;
    {
        const bool branch_taken_0x1ba4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4D8u;
        // 0x1ba4dc: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4d8) {
            ctx->pc = 0x1BA4F8u;
            goto label_1ba4f8;
        }
    }
    ctx->pc = 0x1BA4E0u;
    // 0x1ba4e0: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x1ba4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ba4e4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1ba4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ba4e8: 0x8c43019c  lw          $v1, 0x19C($v0)
    ctx->pc = 0x1ba4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x1ba4ec: 0x5465fff9  bnel        $v1, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BA4ECu;
    {
        const bool branch_taken_0x1ba4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ba4ec) {
            ctx->pc = 0x1BA4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA4ECu;
            // 0x1ba4f0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA4D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba4d4;
        }
    }
    ctx->pc = 0x1BA4F4u;
    // 0x1ba4f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ba4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ba4f8:
    // 0x1ba4f8: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x1ba4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1ba4fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA4FCu;
    {
        const bool branch_taken_0x1ba4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4FCu;
        // 0x1ba500: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4fc) {
            ctx->pc = 0x1BA518u;
            goto label_1ba518;
        }
    }
    ctx->pc = 0x1BA504u;
    // 0x1ba504: 0x8c8303f8  lw          $v1, 0x3F8($a0)
    ctx->pc = 0x1ba504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1016)));
    // 0x1ba508: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BA508u;
    {
        const bool branch_taken_0x1ba508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA508u;
        // 0x1ba50c: 0xac8203f4  sw          $v0, 0x3F4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1012), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba508) {
            ctx->pc = 0x1BA53Cu;
            goto label_1ba53c;
        }
    }
    ctx->pc = 0x1BA510u;
    // 0x1ba510: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA510u;
    {
        const bool branch_taken_0x1ba510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA510u;
        // 0x1ba514: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba510) {
            ctx->pc = 0x1BA538u;
            goto label_1ba538;
        }
    }
    ctx->pc = 0x1BA518u;
label_1ba518:
    // 0x1ba518: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x1ba518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1ba51c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA51Cu;
    {
        const bool branch_taken_0x1ba51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba51c) {
            ctx->pc = 0x1BA520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA51Cu;
            // 0x1ba520: 0xac850424  sw          $a1, 0x424($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1060), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA540u;
            goto label_1ba540;
        }
    }
    ctx->pc = 0x1BA524u;
    // 0x1ba524: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA524u;
    {
        const bool branch_taken_0x1ba524 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA524u;
        // 0x1ba528: 0x2522ffff  addiu       $v0, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba524) {
            ctx->pc = 0x1BA530u;
            goto label_1ba530;
        }
    }
    ctx->pc = 0x1BA52Cu;
    // 0x1ba52c: 0xac8203f4  sw          $v0, 0x3F4($a0)
    ctx->pc = 0x1ba52cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1012), GPR_U32(ctx, 2));
label_1ba530:
    // 0x1ba530: 0x8c8203f8  lw          $v0, 0x3F8($a0)
    ctx->pc = 0x1ba530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1016)));
    // 0x1ba534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ba538:
    // 0x1ba538: 0xac8203f8  sw          $v0, 0x3F8($a0)
    ctx->pc = 0x1ba538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1016), GPR_U32(ctx, 2));
label_1ba53c:
    // 0x1ba53c: 0xac850424  sw          $a1, 0x424($a0)
    ctx->pc = 0x1ba53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1060), GPR_U32(ctx, 5));
label_1ba540:
    // 0x1ba540: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA548u;
}
