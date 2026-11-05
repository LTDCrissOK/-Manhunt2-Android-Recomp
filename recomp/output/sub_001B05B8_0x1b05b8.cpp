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

// Function: sub_001B05B8
// Address: 0x1b05b8 - 0x1b061c
void sub_001B05B8_0x1b05b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B05B8_0x1b05b8");
#endif

    switch (ctx->pc) {
        case 0x1b05ccu: goto label_1b05cc;
        default: break;
    }

    ctx->pc = 0x1b05b8u;

    // 0x1b05b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b05b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b05bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b05bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b05c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b05c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b05c4: 0xc06c4f4  jal         func_1B13D0
    ctx->pc = 0x1B05C4u;
    SET_GPR_U32(ctx, 31, 0x1B05CCu);
    ctx->pc = 0x1B05C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B05C4u;
    // 0x1b05c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B13D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B13D0u, 0x1B05C4u, 0x1B05CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B05CCu;
label_1b05cc:
    // 0x1b05cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b05ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b05d0: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1b05d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1b05d4: 0x8e0700d4  lw          $a3, 0xD4($s0)
    ctx->pc = 0x1b05d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1b05d8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x1b05d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x1b05dc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1b05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b05e0: 0x24634dd0  addiu       $v1, $v1, 0x4DD0
    ctx->pc = 0x1b05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19920));
    // 0x1b05e4: 0x2ce50007  sltiu       $a1, $a3, 0x7
    ctx->pc = 0x1b05e4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1b05e8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1b05e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b05ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1b05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b05f0: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B05F0u;
    {
        const bool branch_taken_0x1b05f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05F0u;
        // 0x1b05f4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05f0) {
            ctx->pc = 0x1B062Cu;
            return;
        }
    }
    ctx->pc = 0x1B05F8u;
    // 0x1b05f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b05f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1b05fc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1b05fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1b0600: 0x2442b180  addiu       $v0, $v0, -0x4E80
    ctx->pc = 0x1b0600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947200));
    // 0x1b0604: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b0604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0608: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b0608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b060c: 0x800008  jr          $a0
    ctx->pc = 0x1B060Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0614u: goto label_1b0614;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B060Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B0614u;
label_1b0614:
    // 0x1b0614: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0614u;
    {
        const bool branch_taken_0x1b0614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0614u;
        // 0x1b0618: 0xc4c00000  lwc1        $f0, 0x0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0614) {
            ctx->pc = 0x1B0630u;
            return;
        }
    }
    ctx->pc = 0x1B061Cu;
}
