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

// Function: sub_001352F8
// Address: 0x1352f8 - 0x135368
void sub_001352F8_0x1352f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001352F8_0x1352f8");
#endif

    switch (ctx->pc) {
        case 0x135310u: goto label_135310;
        default: break;
    }

    ctx->pc = 0x1352f8u;

    // 0x1352f8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1352f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1352fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1352fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135300: 0x24478ed0  addiu       $a3, $v0, -0x7130
    ctx->pc = 0x135300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x135304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x135304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135308: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x135308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13530c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13530cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_135310:
    // 0x135310: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x135310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x135314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135318: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x135318u;
    {
        const bool branch_taken_0x135318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135318u;
        // 0x13531c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135318) {
            ctx->pc = 0x135348u;
            goto label_135348;
        }
    }
    ctx->pc = 0x135320u;
    // 0x135320: 0x94420008  lhu         $v0, 0x8($v0)
    ctx->pc = 0x135320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x135324: 0x3842003f  xori        $v0, $v0, 0x3F
    ctx->pc = 0x135324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)63);
    // 0x135328: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x135328u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x13532c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13532Cu;
    {
        const bool branch_taken_0x13532c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x135330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13532Cu;
        // 0x135330: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13532c) {
            ctx->pc = 0x135348u;
            goto label_135348;
        }
    }
    ctx->pc = 0x135334u;
    // 0x135334: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x135334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135338: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x135338u;
    {
        const bool branch_taken_0x135338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135338u;
        // 0x13533c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135338) {
            ctx->pc = 0x13534Cu;
            goto label_13534c;
        }
    }
    ctx->pc = 0x135340u;
    // 0x135340: 0x3e00008  jr          $ra
    ctx->pc = 0x135340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135340u;
        // 0x135344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135348u;
label_135348:
    // 0x135348: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x135348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_13534c:
    // 0x13534c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x13534cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135350: 0x2c830004  sltiu       $v1, $a0, 0x4
    ctx->pc = 0x135350u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x135354: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x135354u;
    {
        const bool branch_taken_0x135354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135354u;
        // 0x135358: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135354) {
            ctx->pc = 0x135310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135310;
        }
    }
    ctx->pc = 0x13535Cu;
    // 0x13535c: 0x3e00008  jr          $ra
    ctx->pc = 0x13535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13535Cu;
        // 0x135360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13535Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135364u;
    // 0x135364: 0x0  nop
    ctx->pc = 0x135364u;
    // NOP
    ctx->pc = 0x135368u;
}
