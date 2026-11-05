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

// Function: sub_001D27F8
// Address: 0x1d27f8 - 0x1d2868
void sub_001D27F8_0x1d27f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D27F8_0x1d27f8");
#endif

    ctx->pc = 0x1d27f8u;

    // 0x1d27f8: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D27F8u;
    {
        const bool branch_taken_0x1d27f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27F8u;
        // 0x1d27fc: 0xac850094  sw          $a1, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27f8) {
            ctx->pc = 0x1D2850u;
            goto label_1d2850;
        }
    }
    ctx->pc = 0x1D2800u;
    // 0x1d2800: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d2800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d2804: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1d2804u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
    // 0x1d2808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d280c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D280Cu;
    {
        const bool branch_taken_0x1d280c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D280Cu;
        // 0x1d2810: 0x90820090  lbu         $v0, 0x90($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d280c) {
            ctx->pc = 0x1D281Cu;
            goto label_1d281c;
        }
    }
    ctx->pc = 0x1D2814u;
    // 0x1d2814: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2814u;
    {
        const bool branch_taken_0x1d2814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2814u;
        // 0x1d2818: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2814) {
            ctx->pc = 0x1D2820u;
            goto label_1d2820;
        }
    }
    ctx->pc = 0x1D281Cu;
label_1d281c:
    // 0x1d281c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x1d281cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_1d2820:
    // 0x1d2820: 0xa0820090  sb          $v0, 0x90($a0)
    ctx->pc = 0x1d2820u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 144), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d2824: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d2824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d2828: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1d2828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x1d282c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d2830: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2830u;
    {
        const bool branch_taken_0x1d2830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2830u;
        // 0x1d2834: 0x90820090  lbu         $v0, 0x90($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2830) {
            ctx->pc = 0x1D2844u;
            goto label_1d2844;
        }
    }
    ctx->pc = 0x1D2838u;
    // 0x1d2838: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1d2838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d283c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D283Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D283Cu;
        // 0x1d2840: 0xa0820090  sb          $v0, 0x90($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D283Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2844u;
label_1d2844:
    // 0x1d2844: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x1d2844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x1d2848: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2848u;
        // 0x1d284c: 0xa0820090  sb          $v0, 0x90($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2850u;
label_1d2850:
    // 0x1d2850: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x1d2850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1d2854: 0x304200f9  andi        $v0, $v0, 0xF9
    ctx->pc = 0x1d2854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)249);
    // 0x1d2858: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2858u;
        // 0x1d285c: 0xa0820090  sb          $v0, 0x90($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2860u;
    // 0x1d2860: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1d2860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d2864: 0x0  nop
    ctx->pc = 0x1d2864u;
    // NOP
    ctx->pc = 0x1d2868u;
}
