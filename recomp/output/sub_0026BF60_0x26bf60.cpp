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

// Function: sub_0026BF60
// Address: 0x26bf60 - 0x26bfc8
void sub_0026BF60_0x26bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BF60_0x26bf60");
#endif

    switch (ctx->pc) {
        case 0x26bf78u: goto label_26bf78;
        case 0x26bf8cu: goto label_26bf8c;
        case 0x26bfa4u: goto label_26bfa4;
        case 0x26bfb4u: goto label_26bfb4;
        default: break;
    }

    ctx->pc = 0x26bf60u;

    // 0x26bf60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bf64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26bf68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26bf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x26bf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x26bf70: 0xc0b5ec8  jal         func_2D7B20
    ctx->pc = 0x26BF70u;
    SET_GPR_U32(ctx, 31, 0x26BF78u);
    ctx->pc = 0x26BF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF70u;
    // 0x26bf74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B20u, 0x26BF70u, 0x26BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF78u;
label_26bf78:
    // 0x26bf78: 0x8e060254  lw          $a2, 0x254($s0)
    ctx->pc = 0x26bf78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x26bf7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26bf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26bf80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf84: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x26BF84u;
    SET_GPR_U32(ctx, 31, 0x26BF8Cu);
    ctx->pc = 0x26BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF84u;
    // 0x26bf88: 0x24a57bb8  addiu       $a1, $a1, 0x7BB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x26BF84u, 0x26BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF8Cu;
label_26bf8c:
    // 0x26bf8c: 0xc60c0274  lwc1        $f12, 0x274($s0)
    ctx->pc = 0x26bf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26bf90: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26bf90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26bf94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26bf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26bf98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf9c: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x26BF9Cu;
    SET_GPR_U32(ctx, 31, 0x26BFA4u);
    ctx->pc = 0x26BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF9Cu;
    // 0x26bfa0: 0x24a57bc0  addiu       $a1, $a1, 0x7BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x26BF9Cu, 0x26BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFA4u;
label_26bfa4:
    // 0x26bfa4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26bfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26bfa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26bfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfac: 0xc0b5ecc  jal         func_2D7B30
    ctx->pc = 0x26BFACu;
    SET_GPR_U32(ctx, 31, 0x26BFB4u);
    ctx->pc = 0x26BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFACu;
    // 0x26bfb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B30u, 0x26BFACu, 0x26BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFB4u;
label_26bfb4:
    // 0x26bfb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26bfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x26bfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26bfbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26bfbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x26BFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFC0u;
        // 0x26bfc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BFC8u;
}
