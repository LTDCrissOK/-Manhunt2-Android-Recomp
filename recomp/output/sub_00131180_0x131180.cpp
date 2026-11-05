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

// Function: sub_00131180
// Address: 0x131180 - 0x131200
void sub_00131180_0x131180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131180_0x131180");
#endif

    switch (ctx->pc) {
        case 0x1311acu: goto label_1311ac;
        case 0x1311c0u: goto label_1311c0;
        default: break;
    }

    ctx->pc = 0x131180u;

    // 0x131180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x131188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13118c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13118cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131190: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131194: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x131194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x131198: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x131198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x13119c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13119Cu;
    {
        const bool branch_taken_0x13119c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1311A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13119Cu;
        // 0x1311a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13119c) {
            ctx->pc = 0x1311E8u;
            goto label_1311e8;
        }
    }
    ctx->pc = 0x1311A4u;
    // 0x1311a4: 0xc045f12  jal         func_117C48
    ctx->pc = 0x1311A4u;
    SET_GPR_U32(ctx, 31, 0x1311ACu);
    ctx->pc = 0x117C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C48u, 0x1311A4u, 0x1311ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311ACu;
label_1311ac:
    // 0x1311ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1311acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311b0: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1311B0u;
    {
        const bool branch_taken_0x1311b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1311b0) {
            ctx->pc = 0x1311B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1311B0u;
            // 0x1311b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1311ECu;
            goto label_1311ec;
        }
    }
    ctx->pc = 0x1311B8u;
    // 0x1311b8: 0xc043920  jal         func_10E480
    ctx->pc = 0x1311B8u;
    SET_GPR_U32(ctx, 31, 0x1311C0u);
    ctx->pc = 0x1311BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1311B8u;
    // 0x1311bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x1311B8u, 0x1311C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311C0u;
label_1311c0:
    // 0x1311c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1311c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311c4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1311C4u;
    {
        const bool branch_taken_0x1311c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1311C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311C4u;
        // 0x1311c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311c4) {
            ctx->pc = 0x1311ECu;
            goto label_1311ec;
        }
    }
    ctx->pc = 0x1311CCu;
    // 0x1311cc: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x1311ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
    // 0x1311d0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1311d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1311d4: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x1311d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x1311d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1311d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1311dc: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x1311dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
    // 0x1311e0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1311e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1311e4: 0xf8811010  sqc2        $vf1, 0x1010($a0)
    ctx->pc = 0x1311e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 4112), _mm_castps_si128(ctx->vu0_vf[1]));
label_1311e8:
    // 0x1311e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1311e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1311ec:
    // 0x1311ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1311ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1311f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1311f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1311f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1311F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1311F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311F4u;
        // 0x1311f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1311F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1311FCu;
    // 0x1311fc: 0x0  nop
    ctx->pc = 0x1311fcu;
    // NOP
    ctx->pc = 0x131200u;
}
