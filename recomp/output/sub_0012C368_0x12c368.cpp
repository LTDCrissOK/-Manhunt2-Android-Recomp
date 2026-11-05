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

// Function: sub_0012C368
// Address: 0x12c368 - 0x12c3c0
void sub_0012C368_0x12c368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C368_0x12c368");
#endif

    switch (ctx->pc) {
        case 0x12c38cu: goto label_12c38c;
        case 0x12c39cu: goto label_12c39c;
        default: break;
    }

    ctx->pc = 0x12c368u;

    // 0x12c368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c36c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c370: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c374: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12c374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c378: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c37c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12c37cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c380: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12c380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12c384: 0xc04b100  jal         func_12C400
    ctx->pc = 0x12C384u;
    SET_GPR_U32(ctx, 31, 0x12C38Cu);
    ctx->pc = 0x12C388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C384u;
    // 0x12c388: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C400u, 0x12C384u, 0x12C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C38Cu;
label_12c38c:
    // 0x12c38c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c390: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12c390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c394: 0xc04b104  jal         func_12C410
    ctx->pc = 0x12C394u;
    SET_GPR_U32(ctx, 31, 0x12C39Cu);
    ctx->pc = 0x12C398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C394u;
    // 0x12c398: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C410u, 0x12C394u, 0x12C39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C39Cu;
label_12c39c:
    // 0x12c39c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x12c39cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x12c3a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c3a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c3a4: 0xa2020085  sb          $v0, 0x85($s0)
    ctx->pc = 0x12c3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c3a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c3a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c3ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c3acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c3b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12c3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3B4u;
        // 0x12c3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C3BCu;
    // 0x12c3bc: 0x0  nop
    ctx->pc = 0x12c3bcu;
    // NOP
    ctx->pc = 0x12c3c0u;
}
