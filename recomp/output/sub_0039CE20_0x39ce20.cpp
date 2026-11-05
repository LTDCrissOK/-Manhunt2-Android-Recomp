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

// Function: sub_0039CE20
// Address: 0x39ce20 - 0x39ce70
void sub_0039CE20_0x39ce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CE20_0x39ce20");
#endif

    switch (ctx->pc) {
        case 0x39ce44u: goto label_39ce44;
        case 0x39ce54u: goto label_39ce54;
        default: break;
    }

    ctx->pc = 0x39ce20u;

    // 0x39ce20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ce20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ce24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ce28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ce28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ce2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39ce2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39ce30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39ce30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ce34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39ce34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39ce38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x39ce3c: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39CE3Cu;
    SET_GPR_U32(ctx, 31, 0x39CE44u);
    ctx->pc = 0x39CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE3Cu;
    // 0x39ce40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39CE3Cu, 0x39CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE44u;
label_39ce44:
    // 0x39ce44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ce44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ce48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39ce48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ce4c: 0xc0e739c  jal         func_39CE70
    ctx->pc = 0x39CE4Cu;
    SET_GPR_U32(ctx, 31, 0x39CE54u);
    ctx->pc = 0x39CE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE4Cu;
    // 0x39ce50: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CE70u, 0x39CE4Cu, 0x39CE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE54u;
label_39ce54:
    // 0x39ce54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ce54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ce58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39ce58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ce5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39ce5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ce60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39ce60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39ce64: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39CE64u;
    ctx->pc = 0x39CE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE64u;
    // 0x39ce68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39CE6Cu;
    // 0x39ce6c: 0x0  nop
    ctx->pc = 0x39ce6cu;
    // NOP
    ctx->pc = 0x39ce70u;
}
