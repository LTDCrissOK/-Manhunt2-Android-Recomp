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

// Function: sub_00107BF0
// Address: 0x107bf0 - 0x107c20
void sub_00107BF0_0x107bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107BF0_0x107bf0");
#endif

    switch (ctx->pc) {
        case 0x107bf0u: goto label_107bf0;
        case 0x107bf4u: goto label_107bf4;
        case 0x107bf8u: goto label_107bf8;
        case 0x107bfcu: goto label_107bfc;
        case 0x107c00u: goto label_107c00;
        case 0x107c04u: goto label_107c04;
        case 0x107c08u: goto label_107c08;
        case 0x107c0cu: goto label_107c0c;
        case 0x107c10u: goto label_107c10;
        case 0x107c14u: goto label_107c14;
        case 0x107c18u: goto label_107c18;
        case 0x107c1cu: goto label_107c1c;
        default: break;
    }

    ctx->pc = 0x107bf0u;

label_107bf0:
    // 0x107bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107bf4:
    // 0x107bf4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107bf8:
    // 0x107bf8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107bfc:
    if (ctx->pc == 0x107BFCu) {
        ctx->pc = 0x107BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BF8u;
        // 0x107bfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C00u;
        goto label_107c00;
    }
    ctx->pc = 0x107BF8u;
    {
        const bool branch_taken_0x107bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BF8u;
        // 0x107bfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bf8) {
            ctx->pc = 0x107C10u;
            goto label_107c10;
        }
    }
    ctx->pc = 0x107C00u;
label_107c00:
    // 0x107c00: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107c04:
    // 0x107c04: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107c08:
    // 0x107c08: 0x40f809  jalr        $v0
label_107c0c:
    if (ctx->pc == 0x107C0Cu) {
        ctx->pc = 0x107C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C08u;
        // 0x107c0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C10u;
        goto label_107c10;
    }
    ctx->pc = 0x107C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107C10u);
        ctx->pc = 0x107C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C08u;
        // 0x107c0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C08u, 0x107C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107C10u;
label_107c10:
    // 0x107c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107c14:
    // 0x107c14: 0x3e00008  jr          $ra
label_107c18:
    if (ctx->pc == 0x107C18u) {
        ctx->pc = 0x107C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C14u;
        // 0x107c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C1Cu;
        goto label_107c1c;
    }
    ctx->pc = 0x107C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C14u;
        // 0x107c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107C1Cu;
label_107c1c:
    // 0x107c1c: 0x0  nop
    ctx->pc = 0x107c1cu;
    // NOP
    ctx->pc = 0x107c20u;
}
