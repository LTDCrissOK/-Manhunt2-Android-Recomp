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

// Function: sub_0039A820
// Address: 0x39a820 - 0x39a860
void sub_0039A820_0x39a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A820_0x39a820");
#endif

    switch (ctx->pc) {
        case 0x39a83cu: goto label_39a83c;
        case 0x39a848u: goto label_39a848;
        default: break;
    }

    ctx->pc = 0x39a820u;

    // 0x39a820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39a824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39a824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39a828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a82c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39a82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39a830: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39a830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39a834: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x39A834u;
    SET_GPR_U32(ctx, 31, 0x39A83Cu);
    ctx->pc = 0x39A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A834u;
    // 0x39a838: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x39A834u, 0x39A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A83Cu;
label_39a83c:
    // 0x39a83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a840: 0xc0e6a18  jal         func_39A860
    ctx->pc = 0x39A840u;
    SET_GPR_U32(ctx, 31, 0x39A848u);
    ctx->pc = 0x39A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A840u;
    // 0x39a844: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A860u, 0x39A840u, 0x39A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A848u;
label_39a848:
    // 0x39a848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39a848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a84c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39a84cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39a850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39a850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a854: 0x80e6a78  j           func_39A9E0
    ctx->pc = 0x39A854u;
    ctx->pc = 0x39A858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A854u;
    // 0x39a858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    sub_0039A9E0_0x39a9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x39A85Cu;
    // 0x39a85c: 0x0  nop
    ctx->pc = 0x39a85cu;
    // NOP
    ctx->pc = 0x39a860u;
}
