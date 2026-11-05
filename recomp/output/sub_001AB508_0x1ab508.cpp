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

// Function: sub_001AB508
// Address: 0x1ab508 - 0x1ab550
void sub_001AB508_0x1ab508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB508_0x1ab508");
#endif

    switch (ctx->pc) {
        case 0x1ab524u: goto label_1ab524;
        default: break;
    }

    ctx->pc = 0x1ab508u;

    // 0x1ab508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab50c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab518: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ab518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ab51c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB51Cu;
    SET_GPR_U32(ctx, 31, 0x1AB524u);
    ctx->pc = 0x1AB520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB51Cu;
    // 0x1ab520: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB51Cu, 0x1AB524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB524u;
label_1ab524:
    // 0x1ab524: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1ab524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1ab528: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1ab528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1ab52c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB52Cu;
    {
        const bool branch_taken_0x1ab52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab52c) {
            ctx->pc = 0x1AB530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB52Cu;
            // 0x1ab530: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB540u;
            goto label_1ab540;
        }
    }
    ctx->pc = 0x1AB534u;
    // 0x1ab534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab538: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1ab538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x1ab53c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab540:
    // 0x1ab540: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab544: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB544u;
        // 0x1ab548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB54Cu;
    // 0x1ab54c: 0x0  nop
    ctx->pc = 0x1ab54cu;
    // NOP
    ctx->pc = 0x1ab550u;
}
