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

// Function: sub_002C4298
// Address: 0x2c4298 - 0x2c4300
void sub_002C4298_0x2c4298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4298_0x2c4298");
#endif

    switch (ctx->pc) {
        case 0x2c42f0u: goto label_2c42f0;
        default: break;
    }

    ctx->pc = 0x2c4298u;

    // 0x2c4298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c429c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c429cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c42a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c42a4: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x2c42a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2c42a8: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2C42A8u;
    {
        const bool branch_taken_0x2c42a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C42ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42A8u;
        // 0x2c42ac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42a8) {
            ctx->pc = 0x2C42E8u;
            goto label_2c42e8;
        }
    }
    ctx->pc = 0x2C42B0u;
    // 0x2c42b0: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x2c42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2c42b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c42b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c42b8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2c42b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c42bc: 0x24e30020  addiu       $v1, $a3, 0x20
    ctx->pc = 0x2c42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2c42c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2c42c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c42c4: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x2c42c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c42c8: 0x24e20030  addiu       $v0, $a3, 0x30
    ctx->pc = 0x2c42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2c42cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c42ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c42d0: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x2c42d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c42d4: 0x24e30040  addiu       $v1, $a3, 0x40
    ctx->pc = 0x2c42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x2c42d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2c42d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c42dc: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x2c42dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c42e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C42E0u;
    {
        const bool branch_taken_0x2c42e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42E0u;
        // 0x2c42e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42e0) {
            ctx->pc = 0x2C42F4u;
            goto label_2c42f4;
        }
    }
    ctx->pc = 0x2C42E8u;
label_2c42e8:
    // 0x2c42e8: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2C42E8u;
    SET_GPR_U32(ctx, 31, 0x2C42F0u);
    ctx->pc = 0x2C42ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C42E8u;
    // 0x2c42ec: 0x24e50010  addiu       $a1, $a3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2C42E8u, 0x2C42F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42F0u;
label_2c42f0:
    // 0x2c42f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c42f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c42f4:
    // 0x2c42f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C42F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42F4u;
        // 0x2c42f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C42F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C42FCu;
    // 0x2c42fc: 0x0  nop
    ctx->pc = 0x2c42fcu;
    // NOP
    ctx->pc = 0x2c4300u;
}
