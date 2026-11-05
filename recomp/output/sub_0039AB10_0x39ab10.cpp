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

// Function: sub_0039AB10
// Address: 0x39ab10 - 0x39abf0
void sub_0039AB10_0x39ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AB10_0x39ab10");
#endif

    switch (ctx->pc) {
        case 0x39ab3cu: goto label_39ab3c;
        case 0x39ab58u: goto label_39ab58;
        default: break;
    }

    ctx->pc = 0x39ab10u;

    // 0x39ab10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39ab14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39ab14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ab18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ab1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39ab1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ab20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39AB20u;
    {
        const bool branch_taken_0x39ab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB20u;
        // 0x39ab24: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ab20) {
            ctx->pc = 0x39AB48u;
            goto label_39ab48;
        }
    }
    ctx->pc = 0x39AB28u;
    // 0x39ab28: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x39ab28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x39ab2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39ab30: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x39ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x39ab34: 0xc0e9540  jal         func_3A5500
    ctx->pc = 0x39AB34u;
    SET_GPR_U32(ctx, 31, 0x39AB3Cu);
    ctx->pc = 0x39AB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AB34u;
    // 0x39ab38: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5500u, 0x39AB34u, 0x39AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AB3Cu;
label_39ab3c:
    // 0x39ab3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39AB3Cu;
    {
        const bool branch_taken_0x39ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB3Cu;
        // 0x39ab40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ab3c) {
            ctx->pc = 0x39AB58u;
            goto label_39ab58;
        }
    }
    ctx->pc = 0x39AB44u;
    // 0x39ab44: 0x0  nop
    ctx->pc = 0x39ab44u;
    // NOP
label_39ab48:
    // 0x39ab48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ab48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ab4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39ab4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ab50: 0xc0e9540  jal         func_3A5500
    ctx->pc = 0x39AB50u;
    SET_GPR_U32(ctx, 31, 0x39AB58u);
    ctx->pc = 0x39AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AB50u;
    // 0x39ab54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5500u, 0x39AB50u, 0x39AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AB58u;
label_39ab58:
    // 0x39ab58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39ab58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ab5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ab5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ab60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39ab60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ab64: 0x3e00008  jr          $ra
    ctx->pc = 0x39AB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB64u;
        // 0x39ab68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AB6Cu;
    // 0x39ab6c: 0x0  nop
    ctx->pc = 0x39ab6cu;
    // NOP
    // 0x39ab70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ab74: 0x0  nop
    ctx->pc = 0x39ab74u;
    // NOP
    // 0x39ab78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ab78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ab7c: 0x0  nop
    ctx->pc = 0x39ab7cu;
    // NOP
    // 0x39ab80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ab84: 0x0  nop
    ctx->pc = 0x39ab84u;
    // NOP
    // 0x39ab88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ab88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ab8c: 0x0  nop
    ctx->pc = 0x39ab8cu;
    // NOP
    // 0x39ab90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ab94: 0x0  nop
    ctx->pc = 0x39ab94u;
    // NOP
    // 0x39ab98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ab98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ab9c: 0x0  nop
    ctx->pc = 0x39ab9cu;
    // NOP
    // 0x39aba0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x39aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39aba4: 0x0  nop
    ctx->pc = 0x39aba4u;
    // NOP
    // 0x39aba8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x39aba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39abac: 0x0  nop
    ctx->pc = 0x39abacu;
    // NOP
    // 0x39abb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x39abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39abb4: 0x0  nop
    ctx->pc = 0x39abb4u;
    // NOP
    // 0x39abb8: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x39abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x39abbc: 0x0  nop
    ctx->pc = 0x39abbcu;
    // NOP
    // 0x39abc0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x39abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x39abc4: 0x0  nop
    ctx->pc = 0x39abc4u;
    // NOP
    // 0x39abc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39abc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39abcc: 0x0  nop
    ctx->pc = 0x39abccu;
    // NOP
    // 0x39abd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39abd4: 0x0  nop
    ctx->pc = 0x39abd4u;
    // NOP
    // 0x39abd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39abd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39abdc: 0x0  nop
    ctx->pc = 0x39abdcu;
    // NOP
    // 0x39abe0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39abe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39abe4: 0x0  nop
    ctx->pc = 0x39abe4u;
    // NOP
    // 0x39abe8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39abe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39abec: 0x0  nop
    ctx->pc = 0x39abecu;
    // NOP
    ctx->pc = 0x39abf0u;
}
