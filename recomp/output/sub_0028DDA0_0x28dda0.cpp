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

// Function: sub_0028DDA0
// Address: 0x28dda0 - 0x28de08
void sub_0028DDA0_0x28dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DDA0_0x28dda0");
#endif

    switch (ctx->pc) {
        case 0x28ddc8u: goto label_28ddc8;
        default: break;
    }

    ctx->pc = 0x28dda0u;

    // 0x28dda0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x28dda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x28dda4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28dda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dda8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28dda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ddac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ddacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ddb0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x28ddb0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x28ddb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28ddb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28ddb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ddb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ddbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28ddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28ddc0: 0xc0f4902  jal         func_3D2408
    ctx->pc = 0x28DDC0u;
    SET_GPR_U32(ctx, 31, 0x28DDC8u);
    ctx->pc = 0x28DDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DDC0u;
    // 0x28ddc4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2408u, 0x28DDC0u, 0x28DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDC8u;
label_28ddc8:
    // 0x28ddc8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DDC8u;
    {
        const bool branch_taken_0x28ddc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDC8u;
        // 0x28ddcc: 0xfe020038  sd          $v0, 0x38($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddc8) {
            ctx->pc = 0x28DDE8u;
            goto label_28dde8;
        }
    }
    ctx->pc = 0x28DDD0u;
    // 0x28ddd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ddd4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x28ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x28ddd8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x28ddd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28dddc: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x28dddcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28dde0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28DDE0u;
    {
        const bool branch_taken_0x28dde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDE0u;
        // 0x28dde4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dde0) {
            ctx->pc = 0x28DDF8u;
            goto label_28ddf8;
        }
    }
    ctx->pc = 0x28DDE8u;
label_28dde8:
    // 0x28dde8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x28dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x28ddec: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x28ddecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ddf0: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x28ddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28ddf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ddf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ddf8:
    // 0x28ddf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28ddf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28ddfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28ddfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28de00: 0x3e00008  jr          $ra
    ctx->pc = 0x28DE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE00u;
        // 0x28de04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DE08u;
}
