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

// Function: sub_00177F10
// Address: 0x177f10 - 0x177f80
void sub_00177F10_0x177f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177F10_0x177f10");
#endif

    switch (ctx->pc) {
        case 0x177f30u: goto label_177f30;
        case 0x177f58u: goto label_177f58;
        default: break;
    }

    ctx->pc = 0x177f10u;

    // 0x177f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177f14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177f18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x177f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177f28: 0xc05e1b4  jal         func_1786D0
    ctx->pc = 0x177F28u;
    SET_GPR_U32(ctx, 31, 0x177F30u);
    ctx->pc = 0x177F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F28u;
    // 0x177f2c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1786D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1786D0u, 0x177F28u, 0x177F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F30u;
label_177f30:
    // 0x177f30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x177f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f34: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x177f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x177f38: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x177F38u;
    {
        const bool branch_taken_0x177f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x177F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F38u;
        // 0x177f3c: 0x52100  sll         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f38) {
            ctx->pc = 0x177F68u;
            goto label_177f68;
        }
    }
    ctx->pc = 0x177F40u;
    // 0x177f40: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x177f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x177f44: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x177f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x177f48: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x177F48u;
    {
        const bool branch_taken_0x177f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x177F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F48u;
        // 0x177f4c: 0x901821  addu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f48) {
            ctx->pc = 0x177F60u;
            goto label_177f60;
        }
    }
    ctx->pc = 0x177F50u;
    // 0x177f50: 0xc05e16c  jal         func_1785B0
    ctx->pc = 0x177F50u;
    SET_GPR_U32(ctx, 31, 0x177F58u);
    ctx->pc = 0x177F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F50u;
    // 0x177f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1785B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1785B0u, 0x177F50u, 0x177F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F58u;
label_177f58:
    // 0x177f58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x177F58u;
    {
        const bool branch_taken_0x177f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F58u;
        // 0x177f5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f58) {
            ctx->pc = 0x177F6Cu;
            goto label_177f6c;
        }
    }
    ctx->pc = 0x177F60u;
label_177f60:
    // 0x177f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177f64: 0xac620168  sw          $v0, 0x168($v1)
    ctx->pc = 0x177f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 360), GPR_U32(ctx, 2));
label_177f68:
    // 0x177f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177f6c:
    // 0x177f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177f74: 0x3e00008  jr          $ra
    ctx->pc = 0x177F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F74u;
        // 0x177f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177F7Cu;
    // 0x177f7c: 0x0  nop
    ctx->pc = 0x177f7cu;
    // NOP
    ctx->pc = 0x177f80u;
}
