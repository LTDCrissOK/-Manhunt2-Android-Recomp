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

// Function: sub_001794C0
// Address: 0x1794c0 - 0x179530
void sub_001794C0_0x1794c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001794C0_0x1794c0");
#endif

    switch (ctx->pc) {
        case 0x1794e0u: goto label_1794e0;
        default: break;
    }

    ctx->pc = 0x1794c0u;

    // 0x1794c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1794c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794c4: 0x90820530  lbu         $v0, 0x530($a0)
    ctx->pc = 0x1794c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x1794c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1794C8u;
    {
        const bool branch_taken_0x1794c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794C8u;
        // 0x1794cc: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794c8) {
            ctx->pc = 0x179524u;
            goto label_179524;
        }
    }
    ctx->pc = 0x1794D0u;
    // 0x1794d0: 0x240b0028  addiu       $t3, $zero, 0x28
    ctx->pc = 0x1794d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1794d4: 0x240a0012  addiu       $t2, $zero, 0x12
    ctx->pc = 0x1794d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1794d8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1794d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1794dc: 0xeb1018  mult        $v0, $a3, $t3
    ctx->pc = 0x1794dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1794e0:
    // 0x1794e0: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x1794e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x1794e4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x1794e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1794e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1794e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1794ec: 0x106a0005  beq         $v1, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1794ECu;
    {
        const bool branch_taken_0x1794ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x1794F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794ECu;
        // 0x1794f0: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794ec) {
            ctx->pc = 0x179504u;
            goto label_179504;
        }
    }
    ctx->pc = 0x1794F4u;
    // 0x1794f4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1794f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1794f8: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1794F8u;
    {
        const bool branch_taken_0x1794f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1794FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794F8u;
        // 0x1794fc: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794f8) {
            ctx->pc = 0x179504u;
            goto label_179504;
        }
    }
    ctx->pc = 0x179500u;
    // 0x179500: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x179500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
label_179504:
    // 0x179504: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x179504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x179508: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x179508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17950c: 0x2ce30014  sltiu       $v1, $a3, 0x14
    ctx->pc = 0x17950cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x179510: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x179510u;
    {
        const bool branch_taken_0x179510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179510) {
            ctx->pc = 0x179524u;
            goto label_179524;
        }
    }
    ctx->pc = 0x179518u;
    // 0x179518: 0x90820530  lbu         $v0, 0x530($a0)
    ctx->pc = 0x179518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x17951c: 0x1502fff0  bne         $t0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x17951Cu;
    {
        const bool branch_taken_0x17951c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x179520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17951Cu;
        // 0x179520: 0xeb1018  mult        $v0, $a3, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17951c) {
            ctx->pc = 0x1794E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1794e0;
        }
    }
    ctx->pc = 0x179524u;
label_179524:
    // 0x179524: 0x3e00008  jr          $ra
    ctx->pc = 0x179524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17952Cu;
    // 0x17952c: 0x0  nop
    ctx->pc = 0x17952cu;
    // NOP
    ctx->pc = 0x179530u;
}
