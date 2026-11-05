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

// Function: sub_0025AA30
// Address: 0x25aa30 - 0x25aaa0
void sub_0025AA30_0x25aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AA30_0x25aa30");
#endif

    switch (ctx->pc) {
        case 0x25aa78u: goto label_25aa78;
        default: break;
    }

    ctx->pc = 0x25aa30u;

    // 0x25aa30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25aa34: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x25aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x25aa38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25aa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25aa3c: 0x8c629a58  lw          $v0, -0x65A8($v1)
    ctx->pc = 0x25aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9A58u));
    // 0x25aa40: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x25aa40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa44: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25AA44u;
    {
        const bool branch_taken_0x25aa44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA44u;
        // 0x25aa48: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa44) {
            ctx->pc = 0x25AA84u;
            goto label_25aa84;
        }
    }
    ctx->pc = 0x25AA4Cu;
    // 0x25aa4c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x25aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x25aa50: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x25aa50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25aa54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AA54u;
    {
        const bool branch_taken_0x25aa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aa54) {
            ctx->pc = 0x25AA64u;
            goto label_25aa64;
        }
    }
    ctx->pc = 0x25AA5Cu;
    // 0x25aa5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25AA5Cu;
    {
        const bool branch_taken_0x25aa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA5Cu;
        // 0x25aa60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa5c) {
            ctx->pc = 0x25AA84u;
            goto label_25aa84;
        }
    }
    ctx->pc = 0x25AA64u;
label_25aa64:
    // 0x25aa64: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25AA64u;
    {
        const bool branch_taken_0x25aa64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x25aa64) {
            ctx->pc = 0x25AA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AA64u;
            // 0x25aa68: 0xae059a58  sw          $a1, -0x65A8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4294941272), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AA88u;
            goto label_25aa88;
        }
    }
    ctx->pc = 0x25AA6Cu;
    // 0x25aa6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25aa70: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x25AA70u;
    SET_GPR_U32(ctx, 31, 0x25AA78u);
    ctx->pc = 0x25AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AA70u;
    // 0x25aa74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x25AA70u, 0x25AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AA78u;
label_25aa78:
    // 0x25aa78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x25aa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25aa7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25aa80: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x25aa80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_25aa84:
    // 0x25aa84: 0xae059a58  sw          $a1, -0x65A8($s0)
    ctx->pc = 0x25aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941272), GPR_U32(ctx, 5));
label_25aa88:
    // 0x25aa88: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x25aa88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25aa8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25aa90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25aa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25aa94: 0x3e00008  jr          $ra
    ctx->pc = 0x25AA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA94u;
        // 0x25aa98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AA9Cu;
    // 0x25aa9c: 0x0  nop
    ctx->pc = 0x25aa9cu;
    // NOP
    ctx->pc = 0x25aaa0u;
}
