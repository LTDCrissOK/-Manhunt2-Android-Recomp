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

// Function: sub_00396608
// Address: 0x396608 - 0x396648
void sub_00396608_0x396608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396608_0x396608");
#endif

    switch (ctx->pc) {
        case 0x396624u: goto label_396624;
        case 0x396630u: goto label_396630;
        default: break;
    }

    ctx->pc = 0x396608u;

    // 0x396608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39660c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39660cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x396610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x396610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396614: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x396614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x396618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39661c: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39661Cu;
    SET_GPR_U32(ctx, 31, 0x396624u);
    ctx->pc = 0x396620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39661Cu;
    // 0x396620: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39661Cu, 0x396624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396624u;
label_396624:
    // 0x396624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x396624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396628: 0xc0e5992  jal         func_396648
    ctx->pc = 0x396628u;
    SET_GPR_U32(ctx, 31, 0x396630u);
    ctx->pc = 0x39662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396628u;
    // 0x39662c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396648u, 0x396628u, 0x396630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396630u;
label_396630:
    // 0x396630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x396634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39663c: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39663Cu;
    ctx->pc = 0x396640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39663Cu;
    // 0x396640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x396644u;
    // 0x396644: 0x0  nop
    ctx->pc = 0x396644u;
    // NOP
    ctx->pc = 0x396648u;
}
