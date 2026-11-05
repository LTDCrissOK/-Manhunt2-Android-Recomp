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

// Function: sub_0039C9E0
// Address: 0x39c9e0 - 0x39ca20
void sub_0039C9E0_0x39c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C9E0_0x39c9e0");
#endif

    switch (ctx->pc) {
        case 0x39c9fcu: goto label_39c9fc;
        case 0x39ca08u: goto label_39ca08;
        default: break;
    }

    ctx->pc = 0x39c9e0u;

    // 0x39c9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39c9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39c9e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39c9e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c9ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39c9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39c9f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39c9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39c9f4: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39C9F4u;
    SET_GPR_U32(ctx, 31, 0x39C9FCu);
    ctx->pc = 0x39C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C9F4u;
    // 0x39c9f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39C9F4u, 0x39C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C9FCu;
label_39c9fc:
    // 0x39c9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39c9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca00: 0xc0e7288  jal         func_39CA20
    ctx->pc = 0x39CA00u;
    SET_GPR_U32(ctx, 31, 0x39CA08u);
    ctx->pc = 0x39CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CA00u;
    // 0x39ca04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CA20u, 0x39CA00u, 0x39CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CA08u;
label_39ca08:
    // 0x39ca08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ca08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ca0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39ca0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ca10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39ca10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ca14: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39CA14u;
    ctx->pc = 0x39CA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CA14u;
    // 0x39ca18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39CA1Cu;
    // 0x39ca1c: 0x0  nop
    ctx->pc = 0x39ca1cu;
    // NOP
    ctx->pc = 0x39ca20u;
}
