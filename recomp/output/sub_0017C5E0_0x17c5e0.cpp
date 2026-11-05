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

// Function: sub_0017C5E0
// Address: 0x17c5e0 - 0x17c650
void sub_0017C5E0_0x17c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C5E0_0x17c5e0");
#endif

    switch (ctx->pc) {
        case 0x17c630u: goto label_17c630;
        case 0x17c640u: goto label_17c640;
        default: break;
    }

    ctx->pc = 0x17c5e0u;

    // 0x17c5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c5e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x17c5e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c5ec: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x17c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x17c5f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17C5F0u;
    {
        const bool branch_taken_0x17c5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5F0u;
        // 0x17c5f4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5f0) {
            ctx->pc = 0x17C640u;
            goto label_17c640;
        }
    }
    ctx->pc = 0x17C5F8u;
    // 0x17c5f8: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17C5F8u;
    {
        const bool branch_taken_0x17c5f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5F8u;
        // 0x17c5fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5f8) {
            ctx->pc = 0x17C644u;
            goto label_17c644;
        }
    }
    ctx->pc = 0x17C600u;
    // 0x17c600: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x17c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x17c604: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x17c604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17c608: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17C608u;
    {
        const bool branch_taken_0x17c608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c608) {
            ctx->pc = 0x17C644u;
            goto label_17c644;
        }
    }
    ctx->pc = 0x17C610u;
    // 0x17c610: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x17c610u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17c614: 0xf8610050  sqc2        $vf1, 0x50($v1)
    ctx->pc = 0x17c614u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17c618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c61c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17c620: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x17c620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17c624: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x17c624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x17c628: 0xc047866  jal         func_11E198
    ctx->pc = 0x17C628u;
    SET_GPR_U32(ctx, 31, 0x17C630u);
    ctx->pc = 0x17C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C628u;
    // 0x17c62c: 0xac620060  sw          $v0, 0x60($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x17C628u, 0x17C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C630u;
label_17c630:
    // 0x17c630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C630u;
    {
        const bool branch_taken_0x17c630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C630u;
        // 0x17c634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c630) {
            ctx->pc = 0x17C640u;
            goto label_17c640;
        }
    }
    ctx->pc = 0x17C638u;
    // 0x17c638: 0xc0cda26  jal         func_336898
    ctx->pc = 0x17C638u;
    SET_GPR_U32(ctx, 31, 0x17C640u);
    ctx->pc = 0x17C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C638u;
    // 0x17c63c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x17C638u, 0x17C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C640u;
label_17c640:
    // 0x17c640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c644:
    // 0x17c644: 0x3e00008  jr          $ra
    ctx->pc = 0x17C644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C644u;
        // 0x17c648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C64Cu;
    // 0x17c64c: 0x0  nop
    ctx->pc = 0x17c64cu;
    // NOP
    ctx->pc = 0x17c650u;
}
