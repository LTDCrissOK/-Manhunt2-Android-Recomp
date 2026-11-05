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

// Function: sub_00107EC0
// Address: 0x107ec0 - 0x107ef0
void sub_00107EC0_0x107ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107EC0_0x107ec0");
#endif

    switch (ctx->pc) {
        case 0x107ec0u: goto label_107ec0;
        case 0x107ec4u: goto label_107ec4;
        case 0x107ec8u: goto label_107ec8;
        case 0x107eccu: goto label_107ecc;
        case 0x107ed0u: goto label_107ed0;
        case 0x107ed4u: goto label_107ed4;
        case 0x107ed8u: goto label_107ed8;
        case 0x107edcu: goto label_107edc;
        case 0x107ee0u: goto label_107ee0;
        case 0x107ee4u: goto label_107ee4;
        case 0x107ee8u: goto label_107ee8;
        case 0x107eecu: goto label_107eec;
        default: break;
    }

    ctx->pc = 0x107ec0u;

label_107ec0:
    // 0x107ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107ec4:
    // 0x107ec4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107ec8:
    // 0x107ec8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107ecc:
    if (ctx->pc == 0x107ECCu) {
        ctx->pc = 0x107ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EC8u;
        // 0x107ecc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107ED0u;
        goto label_107ed0;
    }
    ctx->pc = 0x107EC8u;
    {
        const bool branch_taken_0x107ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EC8u;
        // 0x107ecc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ec8) {
            ctx->pc = 0x107EE0u;
            goto label_107ee0;
        }
    }
    ctx->pc = 0x107ED0u;
label_107ed0:
    // 0x107ed0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107ed4:
    // 0x107ed4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107ed8:
    // 0x107ed8: 0x40f809  jalr        $v0
label_107edc:
    if (ctx->pc == 0x107EDCu) {
        ctx->pc = 0x107EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107ED8u;
        // 0x107edc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107EE0u;
        goto label_107ee0;
    }
    ctx->pc = 0x107ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107EE0u);
        ctx->pc = 0x107EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107ED8u;
        // 0x107edc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107ED8u, 0x107EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107EE0u;
label_107ee0:
    // 0x107ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107ee4:
    // 0x107ee4: 0x3e00008  jr          $ra
label_107ee8:
    if (ctx->pc == 0x107EE8u) {
        ctx->pc = 0x107EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EE4u;
        // 0x107ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107EECu;
        goto label_107eec;
    }
    ctx->pc = 0x107EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EE4u;
        // 0x107ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107EECu;
label_107eec:
    // 0x107eec: 0x0  nop
    ctx->pc = 0x107eecu;
    // NOP
    ctx->pc = 0x107ef0u;
}
