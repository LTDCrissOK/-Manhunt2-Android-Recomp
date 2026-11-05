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

// Function: sub_00119278
// Address: 0x119278 - 0x1192d8
void sub_00119278_0x119278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119278_0x119278");
#endif

    switch (ctx->pc) {
        case 0x1192d0u: goto label_1192d0;
        default: break;
    }

    ctx->pc = 0x119278u;

    // 0x119278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11927c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x11927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x119280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119284: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x119284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x119288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11928c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x11928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x119290: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x119290u;
    {
        const bool branch_taken_0x119290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x119294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119290u;
        // 0x119294: 0x2c620018  sltiu       $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119290) {
            ctx->pc = 0x1192ECu;
            return;
        }
    }
    ctx->pc = 0x119298u;
    // 0x119298: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x119298u;
    {
        const bool branch_taken_0x119298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119298u;
        // 0x11929c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119298) {
            ctx->pc = 0x1192E4u;
            return;
        }
    }
    ctx->pc = 0x1192A0u;
    // 0x1192a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1192a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1192a4: 0x2442b6b0  addiu       $v0, $v0, -0x4950
    ctx->pc = 0x1192a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
    // 0x1192a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1192a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1192ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1192acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1192b0: 0x800008  jr          $a0
    ctx->pc = 0x1192B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1192B8u: goto label_1192b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1192B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1192B8u;
label_1192b8:
    // 0x1192b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1192b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1192bc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1192bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1192c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1192C0u;
    {
        const bool branch_taken_0x1192c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1192c0) {
            ctx->pc = 0x1192D8u;
            return;
        }
    }
    ctx->pc = 0x1192C8u;
    // 0x1192c8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1192C8u;
    SET_GPR_U32(ctx, 31, 0x1192D0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1192C8u, 0x1192D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192D0u;
label_1192d0:
    // 0x1192d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1192d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1192d4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1192d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x1192d8u;
}
