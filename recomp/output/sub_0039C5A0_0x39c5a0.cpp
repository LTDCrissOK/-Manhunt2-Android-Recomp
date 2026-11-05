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

// Function: sub_0039C5A0
// Address: 0x39c5a0 - 0x39c5e0
void sub_0039C5A0_0x39c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C5A0_0x39c5a0");
#endif

    switch (ctx->pc) {
        case 0x39c5bcu: goto label_39c5bc;
        case 0x39c5c8u: goto label_39c5c8;
        default: break;
    }

    ctx->pc = 0x39c5a0u;

    // 0x39c5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39c5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39c5a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39c5a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c5ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39c5b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39c5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39c5b4: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39C5B4u;
    SET_GPR_U32(ctx, 31, 0x39C5BCu);
    ctx->pc = 0x39C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C5B4u;
    // 0x39c5b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39C5B4u, 0x39C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C5BCu;
label_39c5bc:
    // 0x39c5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39c5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c5c0: 0xc0e7178  jal         func_39C5E0
    ctx->pc = 0x39C5C0u;
    SET_GPR_U32(ctx, 31, 0x39C5C8u);
    ctx->pc = 0x39C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C5C0u;
    // 0x39c5c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C5E0u, 0x39C5C0u, 0x39C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C5C8u;
label_39c5c8:
    // 0x39c5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c5cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39c5ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39c5d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39c5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c5d4: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39C5D4u;
    ctx->pc = 0x39C5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C5D4u;
    // 0x39c5d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39C5DCu;
    // 0x39c5dc: 0x0  nop
    ctx->pc = 0x39c5dcu;
    // NOP
    ctx->pc = 0x39c5e0u;
}
