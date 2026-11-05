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

// Function: sub_002CC8B8
// Address: 0x2cc8b8 - 0x2cc940
void sub_002CC8B8_0x2cc8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC8B8_0x2cc8b8");
#endif

    switch (ctx->pc) {
        case 0x2cc934u: goto label_2cc934;
        default: break;
    }

    ctx->pc = 0x2cc8b8u;

    // 0x2cc8b8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2cc8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2cc8bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc8bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc8c0: 0x8c62b4a8  lw          $v0, -0x4B58($v1)
    ctx->pc = 0x2cc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cc8c4: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x2cc8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x2cc8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc8cc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2cc8ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2cc8d0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2cc8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cc8d4: 0x3c090058  lui         $t1, 0x58
    ctx->pc = 0x2cc8d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)88 << 16));
    // 0x2cc8d8: 0x8c4732f8  lw          $a3, 0x32F8($v0)
    ctx->pc = 0x2cc8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13048)));
    // 0x2cc8dc: 0x8c4332f4  lw          $v1, 0x32F4($v0)
    ctx->pc = 0x2cc8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13044)));
    // 0x2cc8e0: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x2cc8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2cc8e4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2cc8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2cc8e8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2cc8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2cc8ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cc8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cc8f0: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x2cc8f0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x2cc8f4: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x2cc8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2cc8f8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2cc8f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2cc8fc: 0x2463f800  addiu       $v1, $v1, -0x800
    ctx->pc = 0x2cc8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
    // 0x2cc900: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x2cc900u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2cc904: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x2cc904u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cc908: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x2cc908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x2cc90c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cc90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cc910: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2cc910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2cc914: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2cc914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cc918: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2cc918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2cc91c: 0x52c3a  dsrl        $a1, $a1, 16
    ctx->pc = 0x2cc91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x2cc920: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2cc920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2cc924: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2cc924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2cc928: 0x2524a608  addiu       $a0, $t1, -0x59F8
    ctx->pc = 0x2cc928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944264));
    // 0x2cc92c: 0xc0e3d48  jal         func_38F520
    ctx->pc = 0x2CC92Cu;
    SET_GPR_U32(ctx, 31, 0x2CC934u);
    ctx->pc = 0x2CC930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC92Cu;
    // 0x2cc930: 0x462825  or          $a1, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F520u, 0x2CC92Cu, 0x2CC934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC934u;
label_2cc934:
    // 0x2cc934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc938: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC938u;
        // 0x2cc93c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC940u;
}
