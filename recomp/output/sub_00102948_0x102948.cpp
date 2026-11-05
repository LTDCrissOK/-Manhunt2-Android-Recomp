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

// Function: sub_00102948
// Address: 0x102948 - 0x102980
void sub_00102948_0x102948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102948_0x102948");
#endif

    switch (ctx->pc) {
        case 0x102960u: goto label_102960;
        case 0x10296cu: goto label_10296c;
        default: break;
    }

    ctx->pc = 0x102948u;

    // 0x102948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10294c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10294cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x102950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102954: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x102954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x102958: 0xc041cfe  jal         func_1073F8
    ctx->pc = 0x102958u;
    SET_GPR_U32(ctx, 31, 0x102960u);
    ctx->pc = 0x10295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102958u;
    // 0x10295c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1073F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073F8u, 0x102958u, 0x102960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102960u;
label_102960:
    // 0x102960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x102960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102964: 0xc040078  jal         func_1001E0
    ctx->pc = 0x102964u;
    SET_GPR_U32(ctx, 31, 0x10296Cu);
    ctx->pc = 0x102968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102964u;
    // 0x102968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001E0u, 0x102964u, 0x10296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10296Cu;
label_10296c:
    // 0x10296c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10296cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102970: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x102970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102978: 0x3e00008  jr          $ra
    ctx->pc = 0x102978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102978u;
        // 0x10297c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102980u;
}
