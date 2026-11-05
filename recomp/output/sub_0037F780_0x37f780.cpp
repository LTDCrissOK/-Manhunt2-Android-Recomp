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

// Function: sub_0037F780
// Address: 0x37f780 - 0x37f7d8
void sub_0037F780_0x37f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F780_0x37f780");
#endif

    switch (ctx->pc) {
        case 0x37f7a8u: goto label_37f7a8;
        case 0x37f7c4u: goto label_37f7c4;
        default: break;
    }

    ctx->pc = 0x37f780u;

    // 0x37f780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37f780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37f784: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x37f784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37f788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37f78c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37f78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37f790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37f790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f794: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x37f798: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x37f798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f79c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x37f79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x37f7a0: 0xc0ded4a  jal         func_37B528
    ctx->pc = 0x37F7A0u;
    SET_GPR_U32(ctx, 31, 0x37F7A8u);
    ctx->pc = 0x37F7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F7A0u;
    // 0x37f7a4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B528u, 0x37F7A0u, 0x37F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F7A8u;
label_37f7a8:
    // 0x37f7a8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x37f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x37f7ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37f7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f7b0: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x37f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x37f7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37f7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37f7b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37f7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37f7bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x37f7bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f7c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x37f7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_37f7c4:
    // 0x37f7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x37F7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F7C4u;
        // 0x37f7c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F7CCu;
    // 0x37f7cc: 0x0  nop
    ctx->pc = 0x37f7ccu;
    // NOP
    // 0x37f7d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37f7d4: 0x0  nop
    ctx->pc = 0x37f7d4u;
    // NOP
    ctx->pc = 0x37f7d8u;
}
