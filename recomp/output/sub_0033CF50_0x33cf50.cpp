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

// Function: sub_0033CF50
// Address: 0x33cf50 - 0x33cff0
void sub_0033CF50_0x33cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CF50_0x33cf50");
#endif

    switch (ctx->pc) {
        case 0x33cfa8u: goto label_33cfa8;
        default: break;
    }

    ctx->pc = 0x33cf50u;

    // 0x33cf50: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x33cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33cf54: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x33cf54u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x33cf58: 0x824818  mult        $t1, $a0, $v0
    ctx->pc = 0x33cf58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x33cf5c: 0x8d43c34c  lw          $v1, -0x3CB4($t2)
    ctx->pc = 0x33cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294951756)));
    // 0x33cf60: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33cf64: 0x1233021  addu        $a2, $t1, $v1
    ctx->pc = 0x33cf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x33cf68: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33cf6c: 0x1044001e  beq         $v0, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33CF6Cu;
    {
        const bool branch_taken_0x33cf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x33CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF6Cu;
        // 0x33cf70: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf6c) {
            ctx->pc = 0x33CFE8u;
            goto label_33cfe8;
        }
    }
    ctx->pc = 0x33CF74u;
    // 0x33cf74: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x33cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x33cf78: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x33cf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x33cf7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33cf7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cf80: 0x623818  mult        $a3, $v1, $v0
    ctx->pc = 0x33cf80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x33cf84: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x33cf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x33cf88: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x33cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x33cf8c: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x33cf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x33cf90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33cf94: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x33cf94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x33cf98: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x33CF98u;
    {
        const bool branch_taken_0x33cf98 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x33CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF98u;
        // 0x33cf9c: 0x82380b  movn        $a3, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf98) {
            ctx->pc = 0x33CFE8u;
            goto label_33cfe8;
        }
    }
    ctx->pc = 0x33CFA0u;
    // 0x33cfa0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x33cfa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x33cfa4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x33cfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_33cfa8:
    // 0x33cfa8: 0x90c40008  lbu         $a0, 0x8($a2)
    ctx->pc = 0x33cfa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x33cfac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33cfacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33cfb0: 0x90c20009  lbu         $v0, 0x9($a2)
    ctx->pc = 0x33cfb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x33cfb4: 0x90c3000a  lbu         $v1, 0xA($a2)
    ctx->pc = 0x33cfb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x33cfb8: 0xa0c40008  sb          $a0, 0x8($a2)
    ctx->pc = 0x33cfb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x33cfbc: 0xa0c3000a  sb          $v1, 0xA($a2)
    ctx->pc = 0x33cfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x33cfc0: 0xa0c20009  sb          $v0, 0x9($a2)
    ctx->pc = 0x33cfc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x33cfc4: 0xa0c7000b  sb          $a3, 0xB($a2)
    ctx->pc = 0x33cfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 7));
    // 0x33cfc8: 0x8d42c34c  lw          $v0, -0x3CB4($t2)
    ctx->pc = 0x33cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294951756)));
    // 0x33cfcc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x33cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x33cfd0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x33cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33cfd4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33cfd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33cfdc: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x33cfdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33cfe0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x33CFE0u;
    {
        const bool branch_taken_0x33cfe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFE0u;
        // 0x33cfe4: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cfe0) {
            ctx->pc = 0x33CFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33cfa8;
        }
    }
    ctx->pc = 0x33CFE8u;
label_33cfe8:
    // 0x33cfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x33CFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CFF0u;
}
