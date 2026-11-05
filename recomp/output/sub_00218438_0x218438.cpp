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

// Function: sub_00218438
// Address: 0x218438 - 0x2184a8
void sub_00218438_0x218438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218438_0x218438");
#endif

    switch (ctx->pc) {
        case 0x218460u: goto label_218460;
        case 0x218474u: goto label_218474;
        default: break;
    }

    ctx->pc = 0x218438u;

    // 0x218438: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x218438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21843c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x21843cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x218440: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x218440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x218444: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x218444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x218448: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x218448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x21844c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21844cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218450: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x218450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218454: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x218454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x218458: 0xc086084  jal         func_218210
    ctx->pc = 0x218458u;
    SET_GPR_U32(ctx, 31, 0x218460u);
    ctx->pc = 0x21845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218458u;
    // 0x21845c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218210u, 0x218458u, 0x218460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218460u;
label_218460:
    // 0x218460: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x218460u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218468: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21846c: 0xc086084  jal         func_218210
    ctx->pc = 0x21846Cu;
    SET_GPR_U32(ctx, 31, 0x218474u);
    ctx->pc = 0x218470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21846Cu;
    // 0x218470: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218210u, 0x21846Cu, 0x218474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218474u;
label_218474:
    // 0x218474: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x218474u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218478: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x218478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21847c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x21847cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218480: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x218480u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
    // 0x218484: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x218484u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x218488: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x218488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21848c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x21848cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x218490: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x218490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218494: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x218494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x218498: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x218498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x21849c: 0x3e00008  jr          $ra
    ctx->pc = 0x21849Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2184A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21849Cu;
        // 0x2184a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21849Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2184A4u;
    // 0x2184a4: 0x0  nop
    ctx->pc = 0x2184a4u;
    // NOP
    ctx->pc = 0x2184a8u;
}
