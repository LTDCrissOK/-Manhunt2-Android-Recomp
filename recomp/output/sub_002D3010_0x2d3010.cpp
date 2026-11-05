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

// Function: sub_002D3010
// Address: 0x2d3010 - 0x2d3068
void sub_002D3010_0x2d3010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3010_0x2d3010");
#endif

    switch (ctx->pc) {
        case 0x2d302cu: goto label_2d302c;
        case 0x2d304cu: goto label_2d304c;
        default: break;
    }

    ctx->pc = 0x2d3010u;

    // 0x2d3010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d301c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d3020: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d3020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2d3024: 0xc0b4c80  jal         func_2D3200
    ctx->pc = 0x2D3024u;
    SET_GPR_U32(ctx, 31, 0x2D302Cu);
    ctx->pc = 0x2D3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3024u;
    // 0x2d3028: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3200u, 0x2D3024u, 0x2D302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D302Cu;
label_2d302c:
    // 0x2d302c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3030: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d3030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d3034: 0x2463008e  addiu       $v1, $v1, 0x8E
    ctx->pc = 0x2d3034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 142));
    // 0x2d3038: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2d3038u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2d303c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d303cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d3040: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2d3040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2d3044: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2D3044u;
    SET_GPR_U32(ctx, 31, 0x2D304Cu);
    ctx->pc = 0x2D3048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3044u;
    // 0x2d3048: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2D3044u, 0x2D304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D304Cu;
label_2d304c:
    // 0x2d304c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2d304cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2d3050: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d3050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3054: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d3054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d305c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D305Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D305Cu;
        // 0x2d3060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D305Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3064u;
    // 0x2d3064: 0x0  nop
    ctx->pc = 0x2d3064u;
    // NOP
    ctx->pc = 0x2d3068u;
}
