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

// Function: sub_002A6E00
// Address: 0x2a6e00 - 0x2a6e64
void sub_002A6E00_0x2a6e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6E00_0x2a6e00");
#endif

    switch (ctx->pc) {
        case 0x2a6e3cu: goto label_2a6e3c;
        case 0x2a6e4cu: goto label_2a6e4c;
        case 0x2a6e5cu: goto label_2a6e5c;
        default: break;
    }

    ctx->pc = 0x2a6e00u;

    // 0x2a6e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a6e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a6e08: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a6e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a6e0c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2a6e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2a6e10: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A6E10u;
    {
        const bool branch_taken_0x2a6e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E10u;
        // 0x2a6e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e10) {
            ctx->pc = 0x2A6E78u;
            return;
        }
    }
    ctx->pc = 0x2A6E18u;
    // 0x2a6e18: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2a6e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2a6e1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a6e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a6e20: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x2a6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x2a6e24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6e28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a6e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6e2c: 0x800008  jr          $a0
    ctx->pc = 0x2A6E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6E34u: goto label_2a6e34;
            case 0x2A6E44u: goto label_2a6e44;
            case 0x2A6E54u: goto label_2a6e54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6E2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A6E34u;
label_2a6e34:
    // 0x2a6e34: 0xc0a969e  jal         func_2A5A78
    ctx->pc = 0x2A6E34u;
    SET_GPR_U32(ctx, 31, 0x2A6E3Cu);
    ctx->pc = 0x2A5A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5A78u, 0x2A6E34u, 0x2A6E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E3Cu;
label_2a6e3c:
    // 0x2a6e3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A6E3Cu;
    {
        const bool branch_taken_0x2a6e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E3Cu;
        // 0x2a6e40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e3c) {
            ctx->pc = 0x2A6E78u;
            return;
        }
    }
    ctx->pc = 0x2A6E44u;
label_2a6e44:
    // 0x2a6e44: 0xc0a969a  jal         func_2A5A68
    ctx->pc = 0x2A6E44u;
    SET_GPR_U32(ctx, 31, 0x2A6E4Cu);
    ctx->pc = 0x2A5A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5A68u, 0x2A6E44u, 0x2A6E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E4Cu;
label_2a6e4c:
    // 0x2a6e4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A6E4Cu;
    {
        const bool branch_taken_0x2a6e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E4Cu;
        // 0x2a6e50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e4c) {
            ctx->pc = 0x2A6E78u;
            return;
        }
    }
    ctx->pc = 0x2A6E54u;
label_2a6e54:
    // 0x2a6e54: 0xc0a9696  jal         func_2A5A58
    ctx->pc = 0x2A6E54u;
    SET_GPR_U32(ctx, 31, 0x2A6E5Cu);
    ctx->pc = 0x2A5A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5A58u, 0x2A6E54u, 0x2A6E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E5Cu;
label_2a6e5c:
    // 0x2a6e5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6E5Cu;
    {
        const bool branch_taken_0x2a6e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E5Cu;
        // 0x2a6e60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e5c) {
            ctx->pc = 0x2A6E78u;
            return;
        }
    }
    ctx->pc = 0x2A6E64u;
}
