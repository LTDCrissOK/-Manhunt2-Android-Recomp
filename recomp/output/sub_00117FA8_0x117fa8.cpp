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

// Function: sub_00117FA8
// Address: 0x117fa8 - 0x117fdc
void sub_00117FA8_0x117fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117FA8_0x117fa8");
#endif

    switch (ctx->pc) {
        case 0x117fa8u: goto label_117fa8;
        case 0x117facu: goto label_117fac;
        case 0x117fb0u: goto label_117fb0;
        case 0x117fb4u: goto label_117fb4;
        case 0x117fb8u: goto label_117fb8;
        case 0x117fbcu: goto label_117fbc;
        case 0x117fc0u: goto label_117fc0;
        case 0x117fc4u: goto label_117fc4;
        case 0x117fc8u: goto label_117fc8;
        case 0x117fccu: goto label_117fcc;
        case 0x117fd0u: goto label_117fd0;
        case 0x117fd4u: goto label_117fd4;
        case 0x117fd8u: goto label_117fd8;
        default: break;
    }

    ctx->pc = 0x117fa8u;

label_117fa8:
    // 0x117fa8: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_117fac:
    if (ctx->pc == 0x117FACu) {
        ctx->pc = 0x117FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FA8u;
        // 0x117fac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117FB0u;
        goto label_117fb0;
    }
    ctx->pc = 0x117FA8u;
    {
        const bool branch_taken_0x117fa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x117FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FA8u;
        // 0x117fac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fa8) {
            ctx->pc = 0x117FFCu;
            return;
        }
    }
    ctx->pc = 0x117FB0u;
label_117fb0:
    // 0x117fb0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x117fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_117fb4:
    // 0x117fb4: 0x2444fffc  addiu       $a0, $v0, -0x4
    ctx->pc = 0x117fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_117fb8:
    // 0x117fb8: 0x2c830013  sltiu       $v1, $a0, 0x13
    ctx->pc = 0x117fb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_117fbc:
    // 0x117fbc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_117fc0:
    if (ctx->pc == 0x117FC0u) {
        ctx->pc = 0x117FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FBCu;
        // 0x117fc0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117FC4u;
        goto label_117fc4;
    }
    ctx->pc = 0x117FBCu;
    {
        const bool branch_taken_0x117fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FBCu;
        // 0x117fc0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fbc) {
            ctx->pc = 0x117FFCu;
            return;
        }
    }
    ctx->pc = 0x117FC4u;
label_117fc4:
    // 0x117fc4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x117fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_117fc8:
    // 0x117fc8: 0x2442b100  addiu       $v0, $v0, -0x4F00
    ctx->pc = 0x117fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947072));
label_117fcc:
    // 0x117fcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x117fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_117fd0:
    // 0x117fd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x117fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_117fd4:
    // 0x117fd4: 0x800008  jr          $a0
label_117fd8:
    if (ctx->pc == 0x117FD8u) {
        ctx->pc = 0x117FDCu;
        goto label_fallthrough_0x117fd4;
    }
    ctx->pc = 0x117FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117FD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x117fd4:
    ctx->pc = 0x117FDCu;
}
