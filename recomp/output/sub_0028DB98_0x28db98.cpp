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

// Function: sub_0028DB98
// Address: 0x28db98 - 0x28dc08
void sub_0028DB98_0x28db98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DB98_0x28db98");
#endif

    switch (ctx->pc) {
        case 0x28dba8u: goto label_28dba8;
        case 0x28dbd8u: goto label_28dbd8;
        default: break;
    }

    ctx->pc = 0x28db98u;

    // 0x28db98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28db98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28db9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28db9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dba0: 0x2443ca10  addiu       $v1, $v0, -0x35F0
    ctx->pc = 0x28dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x28dba4: 0x0  nop
    ctx->pc = 0x28dba4u;
    // NOP
label_28dba8:
    // 0x28dba8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28dbac: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DBACu;
    {
        const bool branch_taken_0x28dbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x28DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBACu;
        // 0x28dbb0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbac) {
            ctx->pc = 0x28DBBCu;
            goto label_28dbbc;
        }
    }
    ctx->pc = 0x28DBB4u;
    // 0x28dbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x28DBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBB4u;
        // 0x28dbb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DBBCu;
label_28dbbc:
    // 0x28dbbc: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x28dbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x28dbc0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28DBC0u;
    {
        const bool branch_taken_0x28dbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBC0u;
        // 0x28dbc4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbc0) {
            ctx->pc = 0x28DBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dba8;
        }
    }
    ctx->pc = 0x28DBC8u;
    // 0x28dbc8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28dbcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28dbccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbd0: 0x2443ca10  addiu       $v1, $v0, -0x35F0
    ctx->pc = 0x28dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x28dbd4: 0x0  nop
    ctx->pc = 0x28dbd4u;
    // NOP
label_28dbd8:
    // 0x28dbd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28dbdc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DBDCu;
    {
        const bool branch_taken_0x28dbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBDCu;
        // 0x28dbe0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbdc) {
            ctx->pc = 0x28DBF4u;
            goto label_28dbf4;
        }
    }
    ctx->pc = 0x28DBE4u;
    // 0x28dbe4: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x28dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
    // 0x28dbe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dbec: 0x3e00008  jr          $ra
    ctx->pc = 0x28DBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBECu;
        // 0x28dbf0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DBF4u;
label_28dbf4:
    // 0x28dbf4: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x28dbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x28dbf8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x28DBF8u;
    {
        const bool branch_taken_0x28dbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBF8u;
        // 0x28dbfc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbf8) {
            ctx->pc = 0x28DBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dbd8;
        }
    }
    ctx->pc = 0x28DC00u;
    // 0x28dc00: 0x3e00008  jr          $ra
    ctx->pc = 0x28DC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC00u;
        // 0x28dc04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DC08u;
}
