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

// Function: sub_0010AD48
// Address: 0x10ad48 - 0x10ad90
void sub_0010AD48_0x10ad48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AD48_0x10ad48");
#endif

    switch (ctx->pc) {
        case 0x10ad5cu: goto label_10ad5c;
        default: break;
    }

    ctx->pc = 0x10ad48u;

    // 0x10ad48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ad48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ad4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ad4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ad50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10ad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10ad54: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10AD54u;
    SET_GPR_U32(ctx, 31, 0x10AD5Cu);
    ctx->pc = 0x10AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD54u;
    // 0x10ad58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10AD54u, 0x10AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD5Cu;
label_10ad5c:
    // 0x10ad5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ad60: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10ad60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10ad64: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10ad68: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x10ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10ad6c: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x10ad70: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10AD70u;
    {
        const bool branch_taken_0x10ad70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ad70) {
            ctx->pc = 0x10AD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AD70u;
            // 0x10ad74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AD80u;
            goto label_10ad80;
        }
    }
    ctx->pc = 0x10AD78u;
    // 0x10ad78: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x10ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x10ad7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10ad7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10ad80:
    // 0x10ad80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ad80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ad84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10ad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ad88: 0x3e00008  jr          $ra
    ctx->pc = 0x10AD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD88u;
        // 0x10ad8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AD90u;
}
