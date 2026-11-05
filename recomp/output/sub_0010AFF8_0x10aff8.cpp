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

// Function: sub_0010AFF8
// Address: 0x10aff8 - 0x10b0a8
void sub_0010AFF8_0x10aff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AFF8_0x10aff8");
#endif

    switch (ctx->pc) {
        case 0x10b03cu: goto label_10b03c;
        case 0x10b078u: goto label_10b078;
        default: break;
    }

    ctx->pc = 0x10aff8u;

    // 0x10aff8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10aff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10affc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10affcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10b000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10b000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10b004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b008: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10b008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10b00c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10b00cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b010: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10b010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10b014: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10b014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b018: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10b018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10b01c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x10b01cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b020: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x10b020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x10b024: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x10b024u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b028: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x10b028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x10b02c: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x10b02cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b030: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10b030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10b034: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B034u;
    SET_GPR_U32(ctx, 31, 0x10B03Cu);
    ctx->pc = 0x10B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B034u;
    // 0x10b038: 0x160b02d  daddu       $s6, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B034u, 0x10B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B03Cu;
label_10b03c:
    // 0x10b03c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b03cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b040: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b044: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10B044u;
    {
        const bool branch_taken_0x10b044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B044u;
        // 0x10b048: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b044) {
            ctx->pc = 0x10B078u;
            goto label_10b078;
        }
    }
    ctx->pc = 0x10B04Cu;
    // 0x10b04c: 0x8fab0080  lw          $t3, 0x80($sp)
    ctx->pc = 0x10b04cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10b050: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b054: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b058: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b05c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10b05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b060: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x10b060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b064: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x10b064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b068: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b06c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x10b06cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b070: 0xc0442ca  jal         func_110B28
    ctx->pc = 0x10B070u;
    SET_GPR_U32(ctx, 31, 0x10B078u);
    ctx->pc = 0x10B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B070u;
    // 0x10b074: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B28u, 0x10B070u, 0x10B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B078u;
label_10b078:
    // 0x10b078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10b078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b07c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10b07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10b080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b084: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10b084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b088: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10b088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b08c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10b08cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b090: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x10b090u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b094: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10b094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b098: 0x3e00008  jr          $ra
    ctx->pc = 0x10B098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B098u;
        // 0x10b09c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B0A0u;
    // 0x10b0a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10b0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10b0a4: 0x0  nop
    ctx->pc = 0x10b0a4u;
    // NOP
    ctx->pc = 0x10b0a8u;
}
