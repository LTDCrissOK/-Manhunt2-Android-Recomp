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

// Function: sub_00363AA8
// Address: 0x363aa8 - 0x363b10
void sub_00363AA8_0x363aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363AA8_0x363aa8");
#endif

    switch (ctx->pc) {
        case 0x363ad0u: goto label_363ad0;
        case 0x363ae0u: goto label_363ae0;
        default: break;
    }

    ctx->pc = 0x363aa8u;

    // 0x363aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x363aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363ab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x363ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x363ab4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x363ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x363ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x363abc: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x363ABCu;
    {
        const bool branch_taken_0x363abc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x363AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363ABCu;
        // 0x363ac0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363abc) {
            ctx->pc = 0x363AC8u;
            goto label_363ac8;
        }
    }
    ctx->pc = 0x363AC4u;
    // 0x363ac4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x363ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_363ac8:
    // 0x363ac8: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x363AC8u;
    SET_GPR_U32(ctx, 31, 0x363AD0u);
    ctx->pc = 0x363ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363AC8u;
    // 0x363acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x363AC8u, 0x363AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363AD0u;
label_363ad0:
    // 0x363ad0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x363AD0u;
    {
        const bool branch_taken_0x363ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363AD0u;
        // 0x363ad4: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363ad0) {
            ctx->pc = 0x363AE4u;
            goto label_363ae4;
        }
    }
    ctx->pc = 0x363AD8u;
    // 0x363ad8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x363AD8u;
    SET_GPR_U32(ctx, 31, 0x363AE0u);
    ctx->pc = 0x363ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363AD8u;
    // 0x363adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x363AD8u, 0x363AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363AE0u;
label_363ae0:
    // 0x363ae0: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x363ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_363ae4:
    // 0x363ae4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x363ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x363ae8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x363ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x363aec: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x363aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x363af0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x363af0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363af4: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x363af4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x363af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363afc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x363afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x363b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x363b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363b04: 0x3e00008  jr          $ra
    ctx->pc = 0x363B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B04u;
        // 0x363b08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363B0Cu;
    // 0x363b0c: 0x0  nop
    ctx->pc = 0x363b0cu;
    // NOP
    ctx->pc = 0x363b10u;
}
