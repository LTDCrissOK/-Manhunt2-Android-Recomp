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

// Function: sub_001EF258
// Address: 0x1ef258 - 0x1ef2a0
void sub_001EF258_0x1ef258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF258_0x1ef258");
#endif

    switch (ctx->pc) {
        case 0x1ef26cu: goto label_1ef26c;
        case 0x1ef274u: goto label_1ef274;
        case 0x1ef27cu: goto label_1ef27c;
        case 0x1ef284u: goto label_1ef284;
        default: break;
    }

    ctx->pc = 0x1ef258u;

    // 0x1ef258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef25c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef260: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ef260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ef264: 0xc07c234  jal         func_1F08D0
    ctx->pc = 0x1EF264u;
    SET_GPR_U32(ctx, 31, 0x1EF26Cu);
    ctx->pc = 0x1EF268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF264u;
    // 0x1ef268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F08D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F08D0u, 0x1EF264u, 0x1EF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF26Cu;
label_1ef26c:
    // 0x1ef26c: 0xc07c3fe  jal         func_1F0FF8
    ctx->pc = 0x1EF26Cu;
    SET_GPR_U32(ctx, 31, 0x1EF274u);
    ctx->pc = 0x1EF270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF26Cu;
    // 0x1ef270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0FF8u, 0x1EF26Cu, 0x1EF274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF274u;
label_1ef274:
    // 0x1ef274: 0xc07c388  jal         func_1F0E20
    ctx->pc = 0x1EF274u;
    SET_GPR_U32(ctx, 31, 0x1EF27Cu);
    ctx->pc = 0x1EF278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF274u;
    // 0x1ef278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0E20u, 0x1EF274u, 0x1EF27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF27Cu;
label_1ef27c:
    // 0x1ef27c: 0xc07f336  jal         func_1FCCD8
    ctx->pc = 0x1EF27Cu;
    SET_GPR_U32(ctx, 31, 0x1EF284u);
    ctx->pc = 0x1EF280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF27Cu;
    // 0x1ef280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCCD8u, 0x1EF27Cu, 0x1EF284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF284u;
label_1ef284:
    // 0x1ef284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef288: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ef288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef28c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF28Cu;
        // 0x1ef290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF294u;
    // 0x1ef294: 0x0  nop
    ctx->pc = 0x1ef294u;
    // NOP
    // 0x1ef298: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ef298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ef29c: 0x0  nop
    ctx->pc = 0x1ef29cu;
    // NOP
    ctx->pc = 0x1ef2a0u;
}
