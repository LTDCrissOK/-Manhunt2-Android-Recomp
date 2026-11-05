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

// Function: sub_0012BA10
// Address: 0x12ba10 - 0x12ba80
void sub_0012BA10_0x12ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BA10_0x12ba10");
#endif

    switch (ctx->pc) {
        case 0x12ba34u: goto label_12ba34;
        case 0x12ba5cu: goto label_12ba5c;
        default: break;
    }

    ctx->pc = 0x12ba10u;

    // 0x12ba10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ba14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ba18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ba1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ba1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12ba20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12ba24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12ba24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12ba2c: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12BA2Cu;
    SET_GPR_U32(ctx, 31, 0x12BA34u);
    ctx->pc = 0x12BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA2Cu;
    // 0x12ba30: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12BA2Cu, 0x12BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA34u;
label_12ba34:
    // 0x12ba34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12ba34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba38: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12ba3c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BA3Cu;
    {
        const bool branch_taken_0x12ba3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA3Cu;
        // 0x12ba40: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba3c) {
            ctx->pc = 0x12BA64u;
            goto label_12ba64;
        }
    }
    ctx->pc = 0x12BA44u;
    // 0x12ba44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ba44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12ba4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12ba4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba50: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x12ba50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12ba54: 0xc04b060  jal         func_12C180
    ctx->pc = 0x12BA54u;
    SET_GPR_U32(ctx, 31, 0x12BA5Cu);
    ctx->pc = 0x12BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA54u;
    // 0x12ba58: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C180u, 0x12BA54u, 0x12BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA5Cu;
label_12ba5c:
    // 0x12ba5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12BA5Cu;
    {
        const bool branch_taken_0x12ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA5Cu;
        // 0x12ba60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba5c) {
            ctx->pc = 0x12BA6Cu;
            goto label_12ba6c;
        }
    }
    ctx->pc = 0x12BA64u;
label_12ba64:
    // 0x12ba64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12ba64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ba68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ba6c:
    // 0x12ba6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ba6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ba70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12ba70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ba74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12ba74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba78: 0x3e00008  jr          $ra
    ctx->pc = 0x12BA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA78u;
        // 0x12ba7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BA80u;
}
