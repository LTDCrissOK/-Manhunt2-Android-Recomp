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

// Function: sub_003D1160
// Address: 0x3d1160 - 0x3d11e0
void sub_003D1160_0x3d1160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1160_0x3d1160");
#endif

    switch (ctx->pc) {
        case 0x3d11bcu: goto label_3d11bc;
        default: break;
    }

    ctx->pc = 0x3d1160u;

    // 0x3d1160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d1160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d1164: 0x3c0208ca  lui         $v0, 0x8CA
    ctx->pc = 0x3d1164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2250 << 16));
    // 0x3d1168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d1168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d116c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d116cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1170: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d1170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d1174: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3d1174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1178: 0x72020019  multu1      $zero, $s0, $v0
    ctx->pc = 0x3d1178u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3d117c: 0x820019  multu       $a0, $v0
    ctx->pc = 0x3d117cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3d1180: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x3d1180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x3d1184: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x3d1184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x3d1188: 0x70008010  mfhi1       $s0
    ctx->pc = 0x3d1188u;
    SET_GPR_U64(ctx, 16, ctx->hi1);
    // 0x3d118c: 0x3012  mflo        $a2
    ctx->pc = 0x3d118cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3d1190: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3d1190u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3d1194: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3d1194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3d1198: 0x2010  mfhi        $a0
    ctx->pc = 0x3d1198u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3d119c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3d119cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3d11a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3d11a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3d11a4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3d11a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3d11a8: 0x70003012  mflo1       $a2
    ctx->pc = 0x3d11a8u;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x3d11ac: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3d11acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3d11b0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3d11b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3d11b4: 0xc0f4b9e  jal         func_3D2E78
    ctx->pc = 0x3D11B4u;
    SET_GPR_U32(ctx, 31, 0x3D11BCu);
    ctx->pc = 0x3D11B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D11B4u;
    // 0x3d11b8: 0x2068025  or          $s0, $s0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E78u, 0x3D11B4u, 0x3D11BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D11BCu;
label_3d11bc:
    // 0x3d11bc: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x3d11bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3d11c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d11c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d11c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d11c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d11c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D11C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D11C8u;
        // 0x3d11cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D11C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D11D0u;
    // 0x3d11d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3d11d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3d11d4: 0x0  nop
    ctx->pc = 0x3d11d4u;
    // NOP
    // 0x3d11d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3d11d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3d11dc: 0x0  nop
    ctx->pc = 0x3d11dcu;
    // NOP
    ctx->pc = 0x3d11e0u;
}
