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

// Function: sub_0039C718
// Address: 0x39c718 - 0x39c758
void sub_0039C718_0x39c718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C718_0x39c718");
#endif

    switch (ctx->pc) {
        case 0x39c734u: goto label_39c734;
        case 0x39c740u: goto label_39c740;
        default: break;
    }

    ctx->pc = 0x39c718u;

    // 0x39c718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39c718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39c71c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39c71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39c720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c724: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39c728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39c728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39c72c: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39C72Cu;
    SET_GPR_U32(ctx, 31, 0x39C734u);
    ctx->pc = 0x39C730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C72Cu;
    // 0x39c730: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39C72Cu, 0x39C734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C734u;
label_39c734:
    // 0x39c734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39c734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c738: 0xc0e71d6  jal         func_39C758
    ctx->pc = 0x39C738u;
    SET_GPR_U32(ctx, 31, 0x39C740u);
    ctx->pc = 0x39C73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C738u;
    // 0x39c73c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C758u, 0x39C738u, 0x39C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C740u;
label_39c740:
    // 0x39c740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c744: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39c744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39c748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39c748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c74c: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39C74Cu;
    ctx->pc = 0x39C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C74Cu;
    // 0x39c750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39C754u;
    // 0x39c754: 0x0  nop
    ctx->pc = 0x39c754u;
    // NOP
    ctx->pc = 0x39c758u;
}
