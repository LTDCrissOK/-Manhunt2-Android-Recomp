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

// Function: sub_002AB738
// Address: 0x2ab738 - 0x2ab798
void sub_002AB738_0x2ab738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB738_0x2ab738");
#endif

    switch (ctx->pc) {
        case 0x2ab75cu: goto label_2ab75c;
        case 0x2ab768u: goto label_2ab768;
        case 0x2ab770u: goto label_2ab770;
        default: break;
    }

    ctx->pc = 0x2ab738u;

    // 0x2ab738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab73c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab744: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ab744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ab748: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ab748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2ab74c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2ab74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2ab750: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ab750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ab754: 0xc0ab35e  jal         func_2ACD78
    ctx->pc = 0x2AB754u;
    SET_GPR_U32(ctx, 31, 0x2AB75Cu);
    ctx->pc = 0x2AB758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB754u;
    // 0x2ab758: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD78u, 0x2AB754u, 0x2AB75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB75Cu;
label_2ab75c:
    // 0x2ab75c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2ab75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2ab760: 0xc0ab35e  jal         func_2ACD78
    ctx->pc = 0x2AB760u;
    SET_GPR_U32(ctx, 31, 0x2AB768u);
    ctx->pc = 0x2AB764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB760u;
    // 0x2ab764: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD78u, 0x2AB760u, 0x2AB768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB768u;
label_2ab768:
    // 0x2ab768: 0xc0aae68  jal         func_2AB9A0
    ctx->pc = 0x2AB768u;
    SET_GPR_U32(ctx, 31, 0x2AB770u);
    ctx->pc = 0x2AB76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB768u;
    // 0x2ab76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB9A0u, 0x2AB768u, 0x2AB770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB770u;
label_2ab770:
    // 0x2ab770: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ab770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab774: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ab774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab77c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB77Cu;
        // 0x2ab780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB784u;
    // 0x2ab784: 0x0  nop
    ctx->pc = 0x2ab784u;
    // NOP
    // 0x2ab788: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab78c: 0x0  nop
    ctx->pc = 0x2ab78cu;
    // NOP
    // 0x2ab790: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab794: 0x0  nop
    ctx->pc = 0x2ab794u;
    // NOP
    ctx->pc = 0x2ab798u;
}
