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

// Function: sub_00128500
// Address: 0x128500 - 0x128588
void sub_00128500_0x128500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128500_0x128500");
#endif

    switch (ctx->pc) {
        case 0x128520u: goto label_128520;
        default: break;
    }

    ctx->pc = 0x128500u;

    // 0x128500: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x128500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128504: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x128504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x128508: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x128508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12850c: 0x90e20f90  lbu         $v0, 0xF90($a3)
    ctx->pc = 0x12850cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3984)));
    // 0x128510: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x128510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x128514: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x128514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128518: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x128518u;
    {
        const bool branch_taken_0x128518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128518u;
        // 0x12851c: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128518) {
            ctx->pc = 0x12856Cu;
            goto label_12856c;
        }
    }
    ctx->pc = 0x128520u;
label_128520:
    // 0x128520: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x128520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x128524: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x128524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x128528: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x128528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12852c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x12852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x128530: 0x24420e90  addiu       $v0, $v0, 0xE90
    ctx->pc = 0x128530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3728));
    // 0x128534: 0x24630e90  addiu       $v1, $v1, 0xE90
    ctx->pc = 0x128534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3728));
    // 0x128538: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x128538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12853c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x128540: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x128540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x128544: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x128544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128548: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x128548u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12854c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x12854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x128550: 0x90e20f90  lbu         $v0, 0xF90($a3)
    ctx->pc = 0x128550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3984)));
    // 0x128554: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x128554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x128558: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x128558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12855c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x12855cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128560: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x128560u;
    {
        const bool branch_taken_0x128560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128560u;
        // 0x128564: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128560) {
            ctx->pc = 0x128520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128520;
        }
    }
    ctx->pc = 0x128568u;
    // 0x128568: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x128568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_12856c:
    // 0x12856c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x12856cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x128570: 0xac600e90  sw          $zero, 0xE90($v1)
    ctx->pc = 0x128570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3728), GPR_U32(ctx, 0));
    // 0x128574: 0x7c600ea0  sq          $zero, 0xEA0($v1)
    ctx->pc = 0x128574u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 3744), GPR_VEC(ctx, 0));
    // 0x128578: 0x90e20f90  lbu         $v0, 0xF90($a3)
    ctx->pc = 0x128578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3984)));
    // 0x12857c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12857cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x128580: 0x3e00008  jr          $ra
    ctx->pc = 0x128580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128580u;
        // 0x128584: 0xa0e20f90  sb          $v0, 0xF90($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3984), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128588u;
}
