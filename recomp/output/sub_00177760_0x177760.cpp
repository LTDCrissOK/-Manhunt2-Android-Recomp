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

// Function: sub_00177760
// Address: 0x177760 - 0x1777a0
void sub_00177760_0x177760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177760_0x177760");
#endif

    switch (ctx->pc) {
        case 0x17777cu: goto label_17777c;
        case 0x17778cu: goto label_17778c;
        default: break;
    }

    ctx->pc = 0x177760u;

    // 0x177760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177768: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17776c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17776cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177770: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177774: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x177774u;
    SET_GPR_U32(ctx, 31, 0x17777Cu);
    ctx->pc = 0x177778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177774u;
    // 0x177778: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x177774u, 0x17777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17777Cu;
label_17777c:
    // 0x17777c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17777cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177780: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x177780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177784: 0xc05e4ae  jal         func_1792B8
    ctx->pc = 0x177784u;
    SET_GPR_U32(ctx, 31, 0x17778Cu);
    ctx->pc = 0x177788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177784u;
    // 0x177788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1792B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1792B8u, 0x177784u, 0x17778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17778Cu;
label_17778c:
    // 0x17778c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17778cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177798: 0x3e00008  jr          $ra
    ctx->pc = 0x177798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177798u;
        // 0x17779c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1777A0u;
}
