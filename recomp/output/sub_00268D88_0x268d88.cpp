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

// Function: sub_00268D88
// Address: 0x268d88 - 0x268e08
void sub_00268D88_0x268d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268D88_0x268d88");
#endif

    switch (ctx->pc) {
        case 0x268db8u: goto label_268db8;
        case 0x268ddcu: goto label_268ddc;
        default: break;
    }

    ctx->pc = 0x268d88u;

    // 0x268d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x268d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x268d8c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x268d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x268d90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x268d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x268d94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x268d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x268d98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x268d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d9c: 0x8c629dbc  lw          $v0, -0x6244($v1)
    ctx->pc = 0x268d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9DBCu));
    // 0x268da0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x268da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x268da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x268da8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x268DA8u;
    {
        const bool branch_taken_0x268da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DA8u;
        // 0x268dac: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268da8) {
            ctx->pc = 0x268DF0u;
            goto label_268df0;
        }
    }
    ctx->pc = 0x268DB0u;
    // 0x268db0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x268db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x268db4: 0x2451ae30  addiu       $s1, $v0, -0x51D0
    ctx->pc = 0x268db4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946352));
label_268db8:
    // 0x268db8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x268db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x268dbc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x268DBCu;
    {
        const bool branch_taken_0x268dbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DBCu;
        // 0x268dc0: 0x8e429dbc  lw          $v0, -0x6244($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dbc) {
            ctx->pc = 0x268DE0u;
            goto label_268de0;
        }
    }
    ctx->pc = 0x268DC4u;
    // 0x268dc4: 0x8ca50220  lw          $a1, 0x220($a1)
    ctx->pc = 0x268dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x268dc8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x268dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x268dcc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x268DCCu;
    {
        const bool branch_taken_0x268dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x268dcc) {
            ctx->pc = 0x268DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268DCCu;
            // 0x268dd0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268DE4u;
            goto label_268de4;
        }
    }
    ctx->pc = 0x268DD4u;
    // 0x268dd4: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x268DD4u;
    SET_GPR_U32(ctx, 31, 0x268DDCu);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x268DD4u, 0x268DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DDCu;
label_268ddc:
    // 0x268ddc: 0x8e429dbc  lw          $v0, -0x6244($s2)
    ctx->pc = 0x268ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942140)));
label_268de0:
    // 0x268de0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x268de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_268de4:
    // 0x268de4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x268de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x268de8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x268DE8u;
    {
        const bool branch_taken_0x268de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DE8u;
        // 0x268dec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268de8) {
            ctx->pc = 0x268DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268db8;
        }
    }
    ctx->pc = 0x268DF0u;
label_268df0:
    // 0x268df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x268df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268df4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x268df4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x268df8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x268df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268dfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x268dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x268e00: 0x3e00008  jr          $ra
    ctx->pc = 0x268E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E00u;
        // 0x268e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268E08u;
}
