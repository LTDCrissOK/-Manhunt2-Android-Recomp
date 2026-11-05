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

// Function: sub_00396598
// Address: 0x396598 - 0x3965d8
void sub_00396598_0x396598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396598_0x396598");
#endif

    switch (ctx->pc) {
        case 0x3965b4u: goto label_3965b4;
        case 0x3965c0u: goto label_3965c0;
        default: break;
    }

    ctx->pc = 0x396598u;

    // 0x396598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39659c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3965a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3965a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3965a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3965a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3965a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3965a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3965ac: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x3965ACu;
    SET_GPR_U32(ctx, 31, 0x3965B4u);
    ctx->pc = 0x3965B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965ACu;
    // 0x3965b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x3965ACu, 0x3965B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3965B4u;
label_3965b4:
    // 0x3965b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3965b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3965b8: 0xc0e5976  jal         func_3965D8
    ctx->pc = 0x3965B8u;
    SET_GPR_U32(ctx, 31, 0x3965C0u);
    ctx->pc = 0x3965BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965B8u;
    // 0x3965bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3965D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3965D8u, 0x3965B8u, 0x3965C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3965C0u;
label_3965c0:
    // 0x3965c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3965c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3965c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3965c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3965c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3965c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3965cc: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x3965CCu;
    ctx->pc = 0x3965D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965CCu;
    // 0x3965d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x3965D4u;
    // 0x3965d4: 0x0  nop
    ctx->pc = 0x3965d4u;
    // NOP
    ctx->pc = 0x3965d8u;
}
