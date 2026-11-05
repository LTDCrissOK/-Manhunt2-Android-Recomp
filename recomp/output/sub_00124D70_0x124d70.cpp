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

// Function: sub_00124D70
// Address: 0x124d70 - 0x124de0
void sub_00124D70_0x124d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124D70_0x124d70");
#endif

    switch (ctx->pc) {
        case 0x124d98u: goto label_124d98;
        case 0x124da8u: goto label_124da8;
        case 0x124dbcu: goto label_124dbc;
        default: break;
    }

    ctx->pc = 0x124d70u;

    // 0x124d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124d78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124d7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124d84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x124d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x124d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x124d8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x124d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d90: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124D90u;
    SET_GPR_U32(ctx, 31, 0x124D98u);
    ctx->pc = 0x124D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D90u;
    // 0x124d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124D90u, 0x124D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D98u;
label_124d98:
    // 0x124d98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x124D98u;
    {
        const bool branch_taken_0x124d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D98u;
        // 0x124d9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d98) {
            ctx->pc = 0x124DC8u;
            goto label_124dc8;
        }
    }
    ctx->pc = 0x124DA0u;
    // 0x124da0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124DA0u;
    SET_GPR_U32(ctx, 31, 0x124DA8u);
    ctx->pc = 0x124DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DA0u;
    // 0x124da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124DA0u, 0x124DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DA8u;
label_124da8:
    // 0x124da8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124DA8u;
    {
        const bool branch_taken_0x124da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DA8u;
        // 0x124dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124da8) {
            ctx->pc = 0x124DC4u;
            goto label_124dc4;
        }
    }
    ctx->pc = 0x124DB0u;
    // 0x124db0: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x124db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x124db4: 0xc042d38  jal         func_10B4E0
    ctx->pc = 0x124DB4u;
    SET_GPR_U32(ctx, 31, 0x124DBCu);
    ctx->pc = 0x124DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DB4u;
    // 0x124db8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B4E0u, 0x124DB4u, 0x124DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DBCu;
label_124dbc:
    // 0x124dbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124DBCu;
    {
        const bool branch_taken_0x124dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DBCu;
        // 0x124dc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124dbc) {
            ctx->pc = 0x124DCCu;
            goto label_124dcc;
        }
    }
    ctx->pc = 0x124DC4u;
label_124dc4:
    // 0x124dc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124dc8:
    // 0x124dc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124dcc:
    // 0x124dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124dd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124dd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x124dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x124DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DD8u;
        // 0x124ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124DE0u;
}
