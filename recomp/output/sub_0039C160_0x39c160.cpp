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

// Function: sub_0039C160
// Address: 0x39c160 - 0x39c1a0
void sub_0039C160_0x39c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C160_0x39c160");
#endif

    switch (ctx->pc) {
        case 0x39c17cu: goto label_39c17c;
        case 0x39c188u: goto label_39c188;
        default: break;
    }

    ctx->pc = 0x39c160u;

    // 0x39c160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39c164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39c168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c16c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39c16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39c170: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39c170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39c174: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39C174u;
    SET_GPR_U32(ctx, 31, 0x39C17Cu);
    ctx->pc = 0x39C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C174u;
    // 0x39c178: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39C174u, 0x39C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C17Cu;
label_39c17c:
    // 0x39c17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39c17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c180: 0xc0e7068  jal         func_39C1A0
    ctx->pc = 0x39C180u;
    SET_GPR_U32(ctx, 31, 0x39C188u);
    ctx->pc = 0x39C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C180u;
    // 0x39c184: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C1A0u, 0x39C180u, 0x39C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C188u;
label_39c188:
    // 0x39c188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c18c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39c18cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39c190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39c190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c194: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39C194u;
    ctx->pc = 0x39C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C194u;
    // 0x39c198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39C19Cu;
    // 0x39c19c: 0x0  nop
    ctx->pc = 0x39c19cu;
    // NOP
    ctx->pc = 0x39c1a0u;
}
