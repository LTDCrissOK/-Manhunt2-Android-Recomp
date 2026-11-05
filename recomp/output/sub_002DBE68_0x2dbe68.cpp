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

// Function: sub_002DBE68
// Address: 0x2dbe68 - 0x2dbee0
void sub_002DBE68_0x2dbe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBE68_0x2dbe68");
#endif

    switch (ctx->pc) {
        case 0x2dbe8cu: goto label_2dbe8c;
        case 0x2dbe98u: goto label_2dbe98;
        case 0x2dbec4u: goto label_2dbec4;
        default: break;
    }

    ctx->pc = 0x2dbe68u;

    // 0x2dbe68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbe6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dbe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dbe70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dbe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dbe74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dbe74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2dbe78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbe80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2dbe80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2dbe84: 0xc0aedbe  jal         func_2BB6F8
    ctx->pc = 0x2DBE84u;
    SET_GPR_U32(ctx, 31, 0x2DBE8Cu);
    ctx->pc = 0x2DBE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE84u;
    // 0x2dbe88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6F8u, 0x2DBE84u, 0x2DBE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE8Cu;
label_2dbe8c:
    // 0x2dbe8c: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x2dbe8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2dbe90: 0xc0aedbe  jal         func_2BB6F8
    ctx->pc = 0x2DBE90u;
    SET_GPR_U32(ctx, 31, 0x2DBE98u);
    ctx->pc = 0x2DBE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE90u;
    // 0x2dbe94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6F8u, 0x2DBE90u, 0x2DBE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE98u;
label_2dbe98:
    // 0x2dbe98: 0x2e100401  sltiu       $s0, $s0, 0x401
    ctx->pc = 0x2dbe98u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x2dbe9c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBE9Cu;
    {
        const bool branch_taken_0x2dbe9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE9Cu;
        // 0x2dbea0: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe9c) {
            ctx->pc = 0x2DBEB0u;
            goto label_2dbeb0;
        }
    }
    ctx->pc = 0x2DBEA4u;
    // 0x2dbea4: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x2dbea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x2dbea8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBEA8u;
    {
        const bool branch_taken_0x2dbea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEA8u;
        // 0x2dbeac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbea8) {
            ctx->pc = 0x2DBEB8u;
            goto label_2dbeb8;
        }
    }
    ctx->pc = 0x2DBEB0u;
label_2dbeb0:
    // 0x2dbeb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBEB0u;
    {
        const bool branch_taken_0x2dbeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEB0u;
        // 0x2dbeb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbeb0) {
            ctx->pc = 0x2DBEC8u;
            goto label_2dbec8;
        }
    }
    ctx->pc = 0x2DBEB8u;
label_2dbeb8:
    // 0x2dbeb8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2dbeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2dbebc: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2DBEBCu;
    SET_GPR_U32(ctx, 31, 0x2DBEC4u);
    ctx->pc = 0x2DBEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEBCu;
    // 0x2dbec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2DBEBCu, 0x2DBEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEC4u;
label_2dbec4:
    // 0x2dbec4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dbec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dbec8:
    // 0x2dbec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dbec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbecc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dbeccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dbed0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dbed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbed4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2dbed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dbed8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBED8u;
        // 0x2dbedc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBEE0u;
}
