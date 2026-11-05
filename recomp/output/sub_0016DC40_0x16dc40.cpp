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

// Function: sub_0016DC40
// Address: 0x16dc40 - 0x16dcb0
void sub_0016DC40_0x16dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DC40_0x16dc40");
#endif

    switch (ctx->pc) {
        case 0x16dc54u: goto label_16dc54;
        case 0x16dc64u: goto label_16dc64;
        case 0x16dc6cu: goto label_16dc6c;
        case 0x16dc7cu: goto label_16dc7c;
        case 0x16dc8cu: goto label_16dc8c;
        case 0x16dc94u: goto label_16dc94;
        case 0x16dc9cu: goto label_16dc9c;
        default: break;
    }

    ctx->pc = 0x16dc40u;

    // 0x16dc40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16dc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16dc44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16dc48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16dc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16dc4c: 0xc05bd66  jal         func_16F598
    ctx->pc = 0x16DC4Cu;
    SET_GPR_U32(ctx, 31, 0x16DC54u);
    ctx->pc = 0x16DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC4Cu;
    // 0x16dc50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F598u, 0x16DC4Cu, 0x16DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC54u;
label_16dc54:
    // 0x16dc54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16DC54u;
    {
        const bool branch_taken_0x16dc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dc54) {
            ctx->pc = 0x16DC74u;
            goto label_16dc74;
        }
    }
    ctx->pc = 0x16DC5Cu;
    // 0x16dc5c: 0xc05b9fa  jal         func_16E7E8
    ctx->pc = 0x16DC5Cu;
    SET_GPR_U32(ctx, 31, 0x16DC64u);
    ctx->pc = 0x16DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC5Cu;
    // 0x16dc60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E7E8u, 0x16DC5Cu, 0x16DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC64u;
label_16dc64:
    // 0x16dc64: 0xc05b94a  jal         func_16E528
    ctx->pc = 0x16DC64u;
    SET_GPR_U32(ctx, 31, 0x16DC6Cu);
    ctx->pc = 0x16DC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC64u;
    // 0x16dc68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E528u, 0x16DC64u, 0x16DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC6Cu;
label_16dc6c:
    // 0x16dc6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16DC6Cu;
    {
        const bool branch_taken_0x16dc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC6Cu;
        // 0x16dc70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc6c) {
            ctx->pc = 0x16DCA0u;
            goto label_16dca0;
        }
    }
    ctx->pc = 0x16DC74u;
label_16dc74:
    // 0x16dc74: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x16DC74u;
    SET_GPR_U32(ctx, 31, 0x16DC7Cu);
    ctx->pc = 0x16DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC74u;
    // 0x16dc78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x16DC74u, 0x16DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC7Cu;
label_16dc7c:
    // 0x16dc7c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x16DC7Cu;
    {
        const bool branch_taken_0x16dc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dc7c) {
            ctx->pc = 0x16DC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DC7Cu;
            // 0x16dc80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DCA0u;
            goto label_16dca0;
        }
    }
    ctx->pc = 0x16DC84u;
    // 0x16dc84: 0xc05a618  jal         func_169860
    ctx->pc = 0x16DC84u;
    SET_GPR_U32(ctx, 31, 0x16DC8Cu);
    ctx->pc = 0x16DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC84u;
    // 0x16dc88: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16DC84u, 0x16DC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC8Cu;
label_16dc8c:
    // 0x16dc8c: 0xc05b9fa  jal         func_16E7E8
    ctx->pc = 0x16DC8Cu;
    SET_GPR_U32(ctx, 31, 0x16DC94u);
    ctx->pc = 0x16DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC8Cu;
    // 0x16dc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E7E8u, 0x16DC8Cu, 0x16DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC94u;
label_16dc94:
    // 0x16dc94: 0xc05b94a  jal         func_16E528
    ctx->pc = 0x16DC94u;
    SET_GPR_U32(ctx, 31, 0x16DC9Cu);
    ctx->pc = 0x16DC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC94u;
    // 0x16dc98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E528u, 0x16DC94u, 0x16DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC9Cu;
label_16dc9c:
    // 0x16dc9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16dc9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16dca0:
    // 0x16dca0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16dca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16dca4: 0x3e00008  jr          $ra
    ctx->pc = 0x16DCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCA4u;
        // 0x16dca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DCACu;
    // 0x16dcac: 0x0  nop
    ctx->pc = 0x16dcacu;
    // NOP
    ctx->pc = 0x16dcb0u;
}
