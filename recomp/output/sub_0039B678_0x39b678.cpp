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

// Function: sub_0039B678
// Address: 0x39b678 - 0x39b6b8
void sub_0039B678_0x39b678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B678_0x39b678");
#endif

    switch (ctx->pc) {
        case 0x39b694u: goto label_39b694;
        case 0x39b6a0u: goto label_39b6a0;
        default: break;
    }

    ctx->pc = 0x39b678u;

    // 0x39b678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39b67c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39b680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39b688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39b688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39b68c: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39B68Cu;
    SET_GPR_U32(ctx, 31, 0x39B694u);
    ctx->pc = 0x39B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B68Cu;
    // 0x39b690: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39B68Cu, 0x39B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B694u;
label_39b694:
    // 0x39b694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b698: 0xc0e6dae  jal         func_39B6B8
    ctx->pc = 0x39B698u;
    SET_GPR_U32(ctx, 31, 0x39B6A0u);
    ctx->pc = 0x39B69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B698u;
    // 0x39b69c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B6B8u, 0x39B698u, 0x39B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B6A0u;
label_39b6a0:
    // 0x39b6a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b6a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b6a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b6a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b6a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b6ac: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39B6ACu;
    ctx->pc = 0x39B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B6ACu;
    // 0x39b6b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39B6B4u;
    // 0x39b6b4: 0x0  nop
    ctx->pc = 0x39b6b4u;
    // NOP
    ctx->pc = 0x39b6b8u;
}
