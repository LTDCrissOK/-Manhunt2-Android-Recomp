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

// Function: sub_00399E60
// Address: 0x399e60 - 0x399ea0
void sub_00399E60_0x399e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399E60_0x399e60");
#endif

    switch (ctx->pc) {
        case 0x399e7cu: goto label_399e7c;
        case 0x399e88u: goto label_399e88;
        default: break;
    }

    ctx->pc = 0x399e60u;

    // 0x399e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x399e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x399e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x399e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x399e70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x399e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x399e74: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x399E74u;
    SET_GPR_U32(ctx, 31, 0x399E7Cu);
    ctx->pc = 0x399E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399E74u;
    // 0x399e78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x399E74u, 0x399E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399E7Cu;
label_399e7c:
    // 0x399e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e80: 0xc0e67a8  jal         func_399EA0
    ctx->pc = 0x399E80u;
    SET_GPR_U32(ctx, 31, 0x399E88u);
    ctx->pc = 0x399E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399E80u;
    // 0x399e84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399EA0u, 0x399E80u, 0x399E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399E88u;
label_399e88:
    // 0x399e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399e8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x399e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x399e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399e94: 0x80e6a78  j           func_39A9E0
    ctx->pc = 0x399E94u;
    ctx->pc = 0x399E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399E94u;
    // 0x399e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    sub_0039A9E0_0x39a9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x399E9Cu;
    // 0x399e9c: 0x0  nop
    ctx->pc = 0x399e9cu;
    // NOP
    ctx->pc = 0x399ea0u;
}
