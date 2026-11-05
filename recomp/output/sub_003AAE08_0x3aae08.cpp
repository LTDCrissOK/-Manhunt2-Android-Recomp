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

// Function: sub_003AAE08
// Address: 0x3aae08 - 0x3aae68
void sub_003AAE08_0x3aae08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAE08_0x3aae08");
#endif

    switch (ctx->pc) {
        case 0x3aae34u: goto label_3aae34;
        case 0x3aae48u: goto label_3aae48;
        default: break;
    }

    ctx->pc = 0x3aae08u;

    // 0x3aae08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3aae08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3aae0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aae0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aae10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aae10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aae14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3aae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3aae18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3aae18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aae1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3aae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3aae20: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3aae20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aae24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3aae24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3aae28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3aae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3aae2c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AAE2Cu;
    SET_GPR_U32(ctx, 31, 0x3AAE34u);
    ctx->pc = 0x3AAE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAE2Cu;
    // 0x3aae30: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AAE2Cu, 0x3AAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAE34u;
label_3aae34:
    // 0x3aae34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aae38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3aae38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aae3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3aae3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aae40: 0xc0eab9a  jal         func_3AAE68
    ctx->pc = 0x3AAE40u;
    SET_GPR_U32(ctx, 31, 0x3AAE48u);
    ctx->pc = 0x3AAE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAE40u;
    // 0x3aae44: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AAE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAE68u, 0x3AAE40u, 0x3AAE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAE48u;
label_3aae48:
    // 0x3aae48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aae48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aae4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3aae4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aae50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3aae50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aae54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3aae54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3aae58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3aae58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aae5c: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AAE5Cu;
    ctx->pc = 0x3AAE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAE5Cu;
    // 0x3aae60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AAE64u;
    // 0x3aae64: 0x0  nop
    ctx->pc = 0x3aae64u;
    // NOP
    ctx->pc = 0x3aae68u;
}
