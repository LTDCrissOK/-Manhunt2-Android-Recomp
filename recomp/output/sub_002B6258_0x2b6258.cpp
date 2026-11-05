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

// Function: sub_002B6258
// Address: 0x2b6258 - 0x2b62a8
void sub_002B6258_0x2b6258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6258_0x2b6258");
#endif

    switch (ctx->pc) {
        case 0x2b626cu: goto label_2b626c;
        case 0x2b6274u: goto label_2b6274;
        default: break;
    }

    ctx->pc = 0x2b6258u;

    // 0x2b6258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b625c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b625cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6260: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b6260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b6264: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B6264u;
    SET_GPR_U32(ctx, 31, 0x2B626Cu);
    ctx->pc = 0x2B6268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6264u;
    // 0x2b6268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B6264u, 0x2B626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B626Cu;
label_2b626c:
    // 0x2b626c: 0xc0ace7c  jal         func_2B39F0
    ctx->pc = 0x2B626Cu;
    SET_GPR_U32(ctx, 31, 0x2B6274u);
    ctx->pc = 0x2B6270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B626Cu;
    // 0x2b6270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B39F0u, 0x2B626Cu, 0x2B6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6274u;
label_2b6274:
    // 0x2b6274: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b6274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b627c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B627Cu;
    {
        const bool branch_taken_0x2b627c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B627Cu;
        // 0x2b6280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b627c) {
            ctx->pc = 0x2B6290u;
            goto label_2b6290;
        }
    }
    ctx->pc = 0x2B6284u;
    // 0x2b6284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b6284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6288: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6288u;
    {
        const bool branch_taken_0x2b6288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6288u;
        // 0x2b628c: 0xae035914  sw          $v1, 0x5914($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 22804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6288) {
            ctx->pc = 0x2B6298u;
            goto label_2b6298;
        }
    }
    ctx->pc = 0x2B6290u;
label_2b6290:
    // 0x2b6290: 0xae035914  sw          $v1, 0x5914($s0)
    ctx->pc = 0x2b6290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22804), GPR_U32(ctx, 3));
    // 0x2b6294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6298:
    // 0x2b6298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b629c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b629cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b62a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B62A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62A0u;
        // 0x2b62a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B62A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B62A8u;
}
