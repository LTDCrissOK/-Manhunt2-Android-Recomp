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

// Function: sub_00156498
// Address: 0x156498 - 0x1564e0
void sub_00156498_0x156498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156498_0x156498");
#endif

    switch (ctx->pc) {
        case 0x1564b8u: goto label_1564b8;
        case 0x1564c4u: goto label_1564c4;
        default: break;
    }

    ctx->pc = 0x156498u;

    // 0x156498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15649c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15649cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1564a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1564a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1564a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1564a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1564a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1564acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1564b0: 0xc046002  jal         func_118008
    ctx->pc = 0x1564B0u;
    SET_GPR_U32(ctx, 31, 0x1564B8u);
    ctx->pc = 0x1564B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564B0u;
    // 0x1564b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x1564B0u, 0x1564B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564B8u;
label_1564b8:
    // 0x1564b8: 0xae220544  sw          $v0, 0x544($s1)
    ctx->pc = 0x1564b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1348), GPR_U32(ctx, 2));
    // 0x1564bc: 0xc046086  jal         func_118218
    ctx->pc = 0x1564BCu;
    SET_GPR_U32(ctx, 31, 0x1564C4u);
    ctx->pc = 0x1564C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564BCu;
    // 0x1564c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x1564BCu, 0x1564C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564C4u;
label_1564c4:
    // 0x1564c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1564c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1564c8: 0xfa210530  sqc2        $vf1, 0x530($s1)
    ctx->pc = 0x1564c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1328), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1564cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1564ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1564d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1564d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1564d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1564d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1564d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1564D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1564DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564D8u;
        // 0x1564dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1564D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1564E0u;
}
