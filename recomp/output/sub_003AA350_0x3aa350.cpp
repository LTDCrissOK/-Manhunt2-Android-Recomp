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

// Function: sub_003AA350
// Address: 0x3aa350 - 0x3aa3a0
void sub_003AA350_0x3aa350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA350_0x3aa350");
#endif

    switch (ctx->pc) {
        case 0x3aa374u: goto label_3aa374;
        case 0x3aa384u: goto label_3aa384;
        default: break;
    }

    ctx->pc = 0x3aa350u;

    // 0x3aa350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aa350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3aa354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aa358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aa358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa35c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3aa35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3aa360: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3aa360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa364: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3aa364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3aa368: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3aa368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3aa36c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AA36Cu;
    SET_GPR_U32(ctx, 31, 0x3AA374u);
    ctx->pc = 0x3AA370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA36Cu;
    // 0x3aa370: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AA36Cu, 0x3AA374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA374u;
label_3aa374:
    // 0x3aa374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa378: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3aa378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa37c: 0xc0ea8e8  jal         func_3AA3A0
    ctx->pc = 0x3AA37Cu;
    SET_GPR_U32(ctx, 31, 0x3AA384u);
    ctx->pc = 0x3AA380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA37Cu;
    // 0x3aa380: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3A0u, 0x3AA37Cu, 0x3AA384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA384u;
label_3aa384:
    // 0x3aa384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3aa388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa38c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3aa38cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aa390: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3aa390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3aa394: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AA394u;
    ctx->pc = 0x3AA398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA394u;
    // 0x3aa398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA39Cu;
    // 0x3aa39c: 0x0  nop
    ctx->pc = 0x3aa39cu;
    // NOP
    ctx->pc = 0x3aa3a0u;
}
