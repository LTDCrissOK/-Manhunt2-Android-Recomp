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

// Function: sub_003E8178
// Address: 0x3e8178 - 0x3e81c0
void sub_003E8178_0x3e8178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8178_0x3e8178");
#endif

    switch (ctx->pc) {
        case 0x3e819cu: goto label_3e819c;
        case 0x3e81a8u: goto label_3e81a8;
        default: break;
    }

    ctx->pc = 0x3e8178u;

    // 0x3e8178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e817c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e8180: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e8180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e8184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e8184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8188: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e8188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e818c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e818cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e8190: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e8190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e8194: 0xc0b0220  jal         func_2C0880
    ctx->pc = 0x3E8194u;
    SET_GPR_U32(ctx, 31, 0x3E819Cu);
    ctx->pc = 0x3E8198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8194u;
    // 0x3e8198: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0880u, 0x3E8194u, 0x3E819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E819Cu;
label_3e819c:
    // 0x3e819c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e819cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e81a0: 0xc0af77e  jal         func_2BDDF8
    ctx->pc = 0x3E81A0u;
    SET_GPR_U32(ctx, 31, 0x3E81A8u);
    ctx->pc = 0x3E81A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E81A0u;
    // 0x3e81a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDF8u, 0x3E81A0u, 0x3E81A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E81A8u;
label_3e81a8:
    // 0x3e81a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e81a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e81ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e81acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e81b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e81b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e81b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E81B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81B4u;
        // 0x3e81b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E81B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E81BCu;
    // 0x3e81bc: 0x0  nop
    ctx->pc = 0x3e81bcu;
    // NOP
    ctx->pc = 0x3e81c0u;
}
