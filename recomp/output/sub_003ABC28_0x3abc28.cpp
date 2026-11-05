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

// Function: sub_003ABC28
// Address: 0x3abc28 - 0x3abc88
void sub_003ABC28_0x3abc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABC28_0x3abc28");
#endif

    switch (ctx->pc) {
        case 0x3abc54u: goto label_3abc54;
        case 0x3abc68u: goto label_3abc68;
        default: break;
    }

    ctx->pc = 0x3abc28u;

    // 0x3abc28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3abc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3abc2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3abc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3abc30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3abc30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abc34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3abc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3abc38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3abc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abc3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3abc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3abc40: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3abc40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abc44: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3abc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3abc48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3abc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3abc4c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3ABC4Cu;
    SET_GPR_U32(ctx, 31, 0x3ABC54u);
    ctx->pc = 0x3ABC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC4Cu;
    // 0x3abc50: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3ABC4Cu, 0x3ABC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABC54u;
label_3abc54:
    // 0x3abc54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3abc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abc58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3abc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abc5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3abc5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abc60: 0xc0eaf22  jal         func_3ABC88
    ctx->pc = 0x3ABC60u;
    SET_GPR_U32(ctx, 31, 0x3ABC68u);
    ctx->pc = 0x3ABC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC60u;
    // 0x3abc64: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABC88u, 0x3ABC60u, 0x3ABC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABC68u;
label_3abc68:
    // 0x3abc68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3abc68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3abc6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3abc6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3abc70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3abc70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3abc74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3abc74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3abc78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3abc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3abc7c: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3ABC7Cu;
    ctx->pc = 0x3ABC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC7Cu;
    // 0x3abc80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3ABC84u;
    // 0x3abc84: 0x0  nop
    ctx->pc = 0x3abc84u;
    // NOP
    ctx->pc = 0x3abc88u;
}
