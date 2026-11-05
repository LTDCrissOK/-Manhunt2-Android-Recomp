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

// Function: sub_00373110
// Address: 0x373110 - 0x373198
void sub_00373110_0x373110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373110_0x373110");
#endif

    ctx->pc = 0x373110u;

    // 0x373110: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x373110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x373114: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x373114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x373118: 0x8c43ccc0  lw          $v1, -0x3340($v0)
    ctx->pc = 0x373118u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCCC0u));
    // 0x37311c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37311cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373120: 0x8465005a  lh          $a1, 0x5A($v1)
    ctx->pc = 0x373120u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
    // 0x373124: 0x8464005e  lh          $a0, 0x5E($v1)
    ctx->pc = 0x373124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x373128: 0x24a6003f  addiu       $a2, $a1, 0x3F
    ctx->pc = 0x373128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x37312c: 0x24a2007e  addiu       $v0, $a1, 0x7E
    ctx->pc = 0x37312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
    // 0x373130: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x373130u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x373134: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x373134u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x373138: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x373138u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x37313c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x37313cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x373140: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x373140u;
    {
        const bool branch_taken_0x373140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x373144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373140u;
        // 0x373144: 0x22983  sra         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373140) {
            ctx->pc = 0x373160u;
            goto label_373160;
        }
    }
    ctx->pc = 0x373148u;
    // 0x373148: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x373148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x37314c: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x37314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x373150: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x373150u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x373154: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x373154u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x373158: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x373158u;
    {
        const bool branch_taken_0x373158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373158u;
        // 0x37315c: 0x31983  sra         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373158) {
            ctx->pc = 0x373178u;
            goto label_373178;
        }
    }
    ctx->pc = 0x373160u;
label_373160:
    // 0x373160: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x373160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x373164: 0x2463003e  addiu       $v1, $v1, 0x3E
    ctx->pc = 0x373164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x373168: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x373168u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x37316c: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x37316cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x373170: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x373170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x373174: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x373174u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_373178:
    // 0x373178: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x373178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37317c: 0x8d03ccc0  lw          $v1, -0x3340($t0)
    ctx->pc = 0x37317cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294954176)));
    // 0x373180: 0x8464004c  lh          $a0, 0x4C($v1)
    ctx->pc = 0x373180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x373184: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x373184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x373188: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x373188u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37318c: 0x3e00008  jr          $ra
    ctx->pc = 0x37318Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37318Cu;
        // 0x373190: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37318Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373194u;
    // 0x373194: 0x0  nop
    ctx->pc = 0x373194u;
    // NOP
    ctx->pc = 0x373198u;
}
