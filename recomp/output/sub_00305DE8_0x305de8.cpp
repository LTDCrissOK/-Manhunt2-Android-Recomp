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

// Function: sub_00305DE8
// Address: 0x305de8 - 0x305e28
void sub_00305DE8_0x305de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305DE8_0x305de8");
#endif

    switch (ctx->pc) {
        case 0x305de8u: goto label_305de8;
        case 0x305decu: goto label_305dec;
        case 0x305df0u: goto label_305df0;
        case 0x305df4u: goto label_305df4;
        case 0x305df8u: goto label_305df8;
        case 0x305dfcu: goto label_305dfc;
        case 0x305e00u: goto label_305e00;
        case 0x305e04u: goto label_305e04;
        case 0x305e08u: goto label_305e08;
        case 0x305e0cu: goto label_305e0c;
        case 0x305e10u: goto label_305e10;
        case 0x305e14u: goto label_305e14;
        case 0x305e18u: goto label_305e18;
        case 0x305e1cu: goto label_305e1c;
        case 0x305e20u: goto label_305e20;
        case 0x305e24u: goto label_305e24;
        default: break;
    }

    ctx->pc = 0x305de8u;

label_305de8:
    // 0x305de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_305dec:
    // 0x305dec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x305decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_305df0:
    // 0x305df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_305df4:
    // 0x305df4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x305df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_305df8:
    // 0x305df8: 0x8ca30334  lw          $v1, 0x334($a1)
    ctx->pc = 0x305df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
label_305dfc:
    // 0x305dfc: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x305dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
label_305e00:
    // 0x305e00: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_305e04:
    if (ctx->pc == 0x305E04u) {
        ctx->pc = 0x305E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E00u;
        // 0x305e04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E08u;
        goto label_305e08;
    }
    ctx->pc = 0x305E00u;
    {
        const bool branch_taken_0x305e00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x305E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E00u;
        // 0x305e04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e00) {
            ctx->pc = 0x305E1Cu;
            goto label_305e1c;
        }
    }
    ctx->pc = 0x305E08u;
label_305e08:
    // 0x305e08: 0x8ca30218  lw          $v1, 0x218($a1)
    ctx->pc = 0x305e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 536)));
label_305e0c:
    // 0x305e0c: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x305e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_305e10:
    // 0x305e10: 0x40f809  jalr        $v0
label_305e14:
    if (ctx->pc == 0x305E14u) {
        ctx->pc = 0x305E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E10u;
        // 0x305e14: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E18u;
        goto label_305e18;
    }
    ctx->pc = 0x305E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x305E18u);
        ctx->pc = 0x305E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E10u;
        // 0x305e14: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305E10u, 0x305E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x305E18u;
label_305e18:
    // 0x305e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_305e1c:
    // 0x305e1c: 0x3e00008  jr          $ra
label_305e20:
    if (ctx->pc == 0x305E20u) {
        ctx->pc = 0x305E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E1Cu;
        // 0x305e20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E24u;
        goto label_305e24;
    }
    ctx->pc = 0x305E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E1Cu;
        // 0x305e20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305E24u;
label_305e24:
    // 0x305e24: 0x0  nop
    ctx->pc = 0x305e24u;
    // NOP
    ctx->pc = 0x305e28u;
}
