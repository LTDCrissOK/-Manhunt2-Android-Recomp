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

// Function: sub_00108010
// Address: 0x108010 - 0x108040
void sub_00108010_0x108010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108010_0x108010");
#endif

    switch (ctx->pc) {
        case 0x108010u: goto label_108010;
        case 0x108014u: goto label_108014;
        case 0x108018u: goto label_108018;
        case 0x10801cu: goto label_10801c;
        case 0x108020u: goto label_108020;
        case 0x108024u: goto label_108024;
        case 0x108028u: goto label_108028;
        case 0x10802cu: goto label_10802c;
        case 0x108030u: goto label_108030;
        case 0x108034u: goto label_108034;
        case 0x108038u: goto label_108038;
        case 0x10803cu: goto label_10803c;
        default: break;
    }

    ctx->pc = 0x108010u;

label_108010:
    // 0x108010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_108014:
    // 0x108014: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108018:
    // 0x108018: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_10801c:
    if (ctx->pc == 0x10801Cu) {
        ctx->pc = 0x10801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108018u;
        // 0x10801c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108020u;
        goto label_108020;
    }
    ctx->pc = 0x108018u;
    {
        const bool branch_taken_0x108018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108018u;
        // 0x10801c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108018) {
            ctx->pc = 0x108030u;
            goto label_108030;
        }
    }
    ctx->pc = 0x108020u;
label_108020:
    // 0x108020: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x108020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_108024:
    // 0x108024: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x108024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_108028:
    // 0x108028: 0x40f809  jalr        $v0
label_10802c:
    if (ctx->pc == 0x10802Cu) {
        ctx->pc = 0x10802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108028u;
        // 0x10802c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108030u;
        goto label_108030;
    }
    ctx->pc = 0x108028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108030u);
        ctx->pc = 0x10802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108028u;
        // 0x10802c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108028u, 0x108030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108030u;
label_108030:
    // 0x108030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108034:
    // 0x108034: 0x3e00008  jr          $ra
label_108038:
    if (ctx->pc == 0x108038u) {
        ctx->pc = 0x108038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108034u;
        // 0x108038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10803Cu;
        goto label_10803c;
    }
    ctx->pc = 0x108034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108034u;
        // 0x108038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10803Cu;
label_10803c:
    // 0x10803c: 0x0  nop
    ctx->pc = 0x10803cu;
    // NOP
    ctx->pc = 0x108040u;
}
