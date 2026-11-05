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

// Function: sub_00175D98
// Address: 0x175d98 - 0x175df0
void sub_00175D98_0x175d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175D98_0x175d98");
#endif

    switch (ctx->pc) {
        case 0x175dacu: goto label_175dac;
        case 0x175dbcu: goto label_175dbc;
        case 0x175dccu: goto label_175dcc;
        case 0x175dd4u: goto label_175dd4;
        case 0x175ddcu: goto label_175ddc;
        default: break;
    }

    ctx->pc = 0x175d98u;

    // 0x175d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175da0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175da4: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x175DA4u;
    SET_GPR_U32(ctx, 31, 0x175DACu);
    ctx->pc = 0x175DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175DA4u;
    // 0x175da8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x175DA4u, 0x175DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DACu;
label_175dac:
    // 0x175dac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175DACu;
    {
        const bool branch_taken_0x175dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175dac) {
            ctx->pc = 0x175DC4u;
            goto label_175dc4;
        }
    }
    ctx->pc = 0x175DB4u;
    // 0x175db4: 0xc04f8ec  jal         func_13E3B0
    ctx->pc = 0x175DB4u;
    SET_GPR_U32(ctx, 31, 0x175DBCu);
    ctx->pc = 0x175DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175DB4u;
    // 0x175db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3B0u, 0x175DB4u, 0x175DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DBCu;
label_175dbc:
    // 0x175dbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x175DBCu;
    {
        const bool branch_taken_0x175dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175DBCu;
        // 0x175dc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175dbc) {
            ctx->pc = 0x175DE0u;
            goto label_175de0;
        }
    }
    ctx->pc = 0x175DC4u;
label_175dc4:
    // 0x175dc4: 0xc05d832  jal         func_1760C8
    ctx->pc = 0x175DC4u;
    SET_GPR_U32(ctx, 31, 0x175DCCu);
    ctx->pc = 0x175DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175DC4u;
    // 0x175dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1760C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1760C8u, 0x175DC4u, 0x175DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DCCu;
label_175dcc:
    // 0x175dcc: 0xc05d884  jal         func_176210
    ctx->pc = 0x175DCCu;
    SET_GPR_U32(ctx, 31, 0x175DD4u);
    ctx->pc = 0x175DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175DCCu;
    // 0x175dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176210u, 0x175DCCu, 0x175DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DD4u;
label_175dd4:
    // 0x175dd4: 0xc05d8e4  jal         func_176390
    ctx->pc = 0x175DD4u;
    SET_GPR_U32(ctx, 31, 0x175DDCu);
    ctx->pc = 0x175DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175DD4u;
    // 0x175dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176390u, 0x175DD4u, 0x175DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DDCu;
label_175ddc:
    // 0x175ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175de0:
    // 0x175de0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175de4: 0x3e00008  jr          $ra
    ctx->pc = 0x175DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175DE4u;
        // 0x175de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175DECu;
    // 0x175dec: 0x0  nop
    ctx->pc = 0x175decu;
    // NOP
    ctx->pc = 0x175df0u;
}
