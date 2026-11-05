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

// Function: sub_0012B5B8
// Address: 0x12b5b8 - 0x12b610
void sub_0012B5B8_0x12b5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B5B8_0x12b5b8");
#endif

    switch (ctx->pc) {
        case 0x12b5e0u: goto label_12b5e0;
        case 0x12b5ecu: goto label_12b5ec;
        default: break;
    }

    ctx->pc = 0x12b5b8u;

    // 0x12b5b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b5bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b5c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b5c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12b5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b5c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12b5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12b5cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12b5ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b5d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12b5d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b5d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12b5d8: 0xc04b1ba  jal         func_12C6E8
    ctx->pc = 0x12B5D8u;
    SET_GPR_U32(ctx, 31, 0x12B5E0u);
    ctx->pc = 0x12B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5D8u;
    // 0x12b5dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C6E8u, 0x12B5D8u, 0x12B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5E0u;
label_12b5e0:
    // 0x12b5e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12b5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b5e4: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12B5E4u;
    SET_GPR_U32(ctx, 31, 0x12B5ECu);
    ctx->pc = 0x12B5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5E4u;
    // 0x12b5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12B5E4u, 0x12B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5ECu;
label_12b5ec:
    // 0x12b5ec: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x12b5ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x12b5f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12b5f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b5f4: 0xa2220085  sb          $v0, 0x85($s1)
    ctx->pc = 0x12b5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 133), (uint8_t)GPR_U32(ctx, 2));
    // 0x12b5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b5fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b600: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12b600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b604: 0x3e00008  jr          $ra
    ctx->pc = 0x12B604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B604u;
        // 0x12b608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B60Cu;
    // 0x12b60c: 0x0  nop
    ctx->pc = 0x12b60cu;
    // NOP
    ctx->pc = 0x12b610u;
}
