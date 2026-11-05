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

// Function: sub_00399E00
// Address: 0x399e00 - 0x399e50
void sub_00399E00_0x399e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399E00_0x399e00");
#endif

    switch (ctx->pc) {
        case 0x399e24u: goto label_399e24;
        case 0x399e34u: goto label_399e34;
        default: break;
    }

    ctx->pc = 0x399e00u;

    // 0x399e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x399e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x399e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399e08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x399e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x399e10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x399e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x399e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x399e18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x399e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x399e1c: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x399E1Cu;
    SET_GPR_U32(ctx, 31, 0x399E24u);
    ctx->pc = 0x399E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399E1Cu;
    // 0x399e20: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x399E1Cu, 0x399E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399E24u;
label_399e24:
    // 0x399e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x399e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e2c: 0xc0e6794  jal         func_399E50
    ctx->pc = 0x399E2Cu;
    SET_GPR_U32(ctx, 31, 0x399E34u);
    ctx->pc = 0x399E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399E2Cu;
    // 0x399e30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E50u, 0x399E2Cu, 0x399E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399E34u;
label_399e34:
    // 0x399e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399e38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x399e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399e3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x399e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399e40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x399e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x399e44: 0x80e6a78  j           func_39A9E0
    ctx->pc = 0x399E44u;
    ctx->pc = 0x399E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399E44u;
    // 0x399e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    sub_0039A9E0_0x39a9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x399E4Cu;
    // 0x399e4c: 0x0  nop
    ctx->pc = 0x399e4cu;
    // NOP
    ctx->pc = 0x399e50u;
}
