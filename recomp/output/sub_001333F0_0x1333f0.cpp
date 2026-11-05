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

// Function: sub_001333F0
// Address: 0x1333f0 - 0x133430
void sub_001333F0_0x1333f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001333F0_0x1333f0");
#endif

    switch (ctx->pc) {
        case 0x133410u: goto label_133410;
        case 0x133424u: goto label_133424;
        default: break;
    }

    ctx->pc = 0x1333f0u;

    // 0x1333f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1333f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1333f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1333f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1333f8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1333F8u;
    {
        const bool branch_taken_0x1333f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1333FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333F8u;
        // 0x1333fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1333f8) {
            ctx->pc = 0x133424u;
            goto label_133424;
        }
    }
    ctx->pc = 0x133400u;
    // 0x133400: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x133400u;
    {
        const bool branch_taken_0x133400 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x133404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133400u;
        // 0x133404: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133400) {
            ctx->pc = 0x133428u;
            goto label_133428;
        }
    }
    ctx->pc = 0x133408u;
    // 0x133408: 0xc0456a8  jal         func_115AA0
    ctx->pc = 0x133408u;
    SET_GPR_U32(ctx, 31, 0x133410u);
    ctx->pc = 0x115AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AA0u, 0x133408u, 0x133410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133410u;
label_133410:
    // 0x133410: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133410u;
    {
        const bool branch_taken_0x133410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133410u;
        // 0x133414: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133410) {
            ctx->pc = 0x133424u;
            goto label_133424;
        }
    }
    ctx->pc = 0x133418u;
    // 0x133418: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x133418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13341c: 0xc04b2a6  jal         func_12CA98
    ctx->pc = 0x13341Cu;
    SET_GPR_U32(ctx, 31, 0x133424u);
    ctx->pc = 0x133420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13341Cu;
    // 0x133420: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA98u, 0x13341Cu, 0x133424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133424u;
label_133424:
    // 0x133424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133428:
    // 0x133428: 0x3e00008  jr          $ra
    ctx->pc = 0x133428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133428u;
        // 0x13342c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133430u;
}
