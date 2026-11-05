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

// Function: sub_00133D70
// Address: 0x133d70 - 0x133dc0
void sub_00133D70_0x133d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133D70_0x133d70");
#endif

    switch (ctx->pc) {
        case 0x133d70u: goto label_133d70;
        case 0x133d74u: goto label_133d74;
        case 0x133d78u: goto label_133d78;
        case 0x133d7cu: goto label_133d7c;
        case 0x133d80u: goto label_133d80;
        case 0x133d84u: goto label_133d84;
        case 0x133d88u: goto label_133d88;
        case 0x133d8cu: goto label_133d8c;
        case 0x133d90u: goto label_133d90;
        case 0x133d94u: goto label_133d94;
        case 0x133d98u: goto label_133d98;
        case 0x133d9cu: goto label_133d9c;
        case 0x133da0u: goto label_133da0;
        case 0x133da4u: goto label_133da4;
        case 0x133da8u: goto label_133da8;
        case 0x133dacu: goto label_133dac;
        case 0x133db0u: goto label_133db0;
        case 0x133db4u: goto label_133db4;
        case 0x133db8u: goto label_133db8;
        case 0x133dbcu: goto label_133dbc;
        default: break;
    }

    ctx->pc = 0x133d70u;

label_133d70:
    // 0x133d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_133d74:
    // 0x133d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_133d78:
    // 0x133d78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_133d7c:
    // 0x133d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133d80:
    // 0x133d80: 0xc04bb34  jal         func_12ECD0
label_133d84:
    if (ctx->pc == 0x133D84u) {
        ctx->pc = 0x133D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D80u;
        // 0x133d84: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D88u;
        goto label_133d88;
    }
    ctx->pc = 0x133D80u;
    SET_GPR_U32(ctx, 31, 0x133D88u);
    ctx->pc = 0x133D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D80u;
    // 0x133d84: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ECD0u, 0x133D80u, 0x133D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D88u;
label_133d88:
    // 0x133d88: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x133d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_133d8c:
    // 0x133d8c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x133d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_133d90:
    // 0x133d90: 0x40f809  jalr        $v0
label_133d94:
    if (ctx->pc == 0x133D94u) {
        ctx->pc = 0x133D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D90u;
        // 0x133d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D98u;
        goto label_133d98;
    }
    ctx->pc = 0x133D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133D98u);
        ctx->pc = 0x133D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D90u;
        // 0x133d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133D90u, 0x133D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133D98u;
label_133d98:
    // 0x133d98: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_133d9c:
    if (ctx->pc == 0x133D9Cu) {
        ctx->pc = 0x133D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D98u;
        // 0x133d9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DA0u;
        goto label_133da0;
    }
    ctx->pc = 0x133D98u;
    {
        const bool branch_taken_0x133d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133d98) {
            ctx->pc = 0x133D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133D98u;
            // 0x133d9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133DB4u;
            goto label_133db4;
        }
    }
    ctx->pc = 0x133DA0u;
label_133da0:
    // 0x133da0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x133da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_133da4:
    // 0x133da4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x133da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_133da8:
    // 0x133da8: 0x40f809  jalr        $v0
label_133dac:
    if (ctx->pc == 0x133DACu) {
        ctx->pc = 0x133DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DA8u;
        // 0x133dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DB0u;
        goto label_133db0;
    }
    ctx->pc = 0x133DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133DB0u);
        ctx->pc = 0x133DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DA8u;
        // 0x133dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133DA8u, 0x133DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133DB0u;
label_133db0:
    // 0x133db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133db4:
    // 0x133db4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_133db8:
    // 0x133db8: 0x3e00008  jr          $ra
label_133dbc:
    if (ctx->pc == 0x133DBCu) {
        ctx->pc = 0x133DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DB8u;
        // 0x133dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DC0u;
        goto label_fallthrough_0x133db8;
    }
    ctx->pc = 0x133DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DB8u;
        // 0x133dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x133db8:
    ctx->pc = 0x133DC0u;
}
