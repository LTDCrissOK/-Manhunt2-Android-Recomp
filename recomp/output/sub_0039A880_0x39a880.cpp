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

// Function: sub_0039A880
// Address: 0x39a880 - 0x39a8c0
void sub_0039A880_0x39a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A880_0x39a880");
#endif

    switch (ctx->pc) {
        case 0x39a89cu: goto label_39a89c;
        case 0x39a8a8u: goto label_39a8a8;
        default: break;
    }

    ctx->pc = 0x39a880u;

    // 0x39a880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39a884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39a884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39a888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a88c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39a88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39a890: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39a890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39a894: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x39A894u;
    SET_GPR_U32(ctx, 31, 0x39A89Cu);
    ctx->pc = 0x39A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A894u;
    // 0x39a898: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x39A894u, 0x39A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A89Cu;
label_39a89c:
    // 0x39a89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8a0: 0xc0e6a30  jal         func_39A8C0
    ctx->pc = 0x39A8A0u;
    SET_GPR_U32(ctx, 31, 0x39A8A8u);
    ctx->pc = 0x39A8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A8A0u;
    // 0x39a8a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A8C0u, 0x39A8A0u, 0x39A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A8A8u;
label_39a8a8:
    // 0x39a8a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39a8a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a8ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39a8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39a8b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39a8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a8b4: 0x80e6a78  j           func_39A9E0
    ctx->pc = 0x39A8B4u;
    ctx->pc = 0x39A8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A8B4u;
    // 0x39a8b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    sub_0039A9E0_0x39a9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x39A8BCu;
    // 0x39a8bc: 0x0  nop
    ctx->pc = 0x39a8bcu;
    // NOP
    ctx->pc = 0x39a8c0u;
}
