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

// Function: sub_00137F20
// Address: 0x137f20 - 0x137f80
void sub_00137F20_0x137f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137F20_0x137f20");
#endif

    switch (ctx->pc) {
        case 0x137f40u: goto label_137f40;
        case 0x137f54u: goto label_137f54;
        case 0x137f6cu: goto label_137f6c;
        default: break;
    }

    ctx->pc = 0x137f20u;

    // 0x137f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137f28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x137f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x137f2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x137f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137f34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x137f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f38: 0xc043a64  jal         func_10E990
    ctx->pc = 0x137F38u;
    SET_GPR_U32(ctx, 31, 0x137F40u);
    ctx->pc = 0x137F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F38u;
    // 0x137f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E990u, 0x137F38u, 0x137F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F40u;
label_137f40:
    // 0x137f40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137F40u;
    {
        const bool branch_taken_0x137f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F40u;
        // 0x137f44: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f40) {
            ctx->pc = 0x137F6Cu;
            goto label_137f6c;
        }
    }
    ctx->pc = 0x137F48u;
    // 0x137f48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f4c: 0xc047866  jal         func_11E198
    ctx->pc = 0x137F4Cu;
    SET_GPR_U32(ctx, 31, 0x137F54u);
    ctx->pc = 0x137F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F4Cu;
    // 0x137f50: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x137F4Cu, 0x137F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F54u;
label_137f54:
    // 0x137f54: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x137f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x137f58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x137f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f5c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x137f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x137f60: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x137f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f64: 0xc04668a  jal         func_119A28
    ctx->pc = 0x137F64u;
    SET_GPR_U32(ctx, 31, 0x137F6Cu);
    ctx->pc = 0x137F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F64u;
    // 0x137f68: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x137F64u, 0x137F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F6Cu;
label_137f6c:
    // 0x137f6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x137f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137f70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x137f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x137f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x137f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f78: 0x3e00008  jr          $ra
    ctx->pc = 0x137F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F78u;
        // 0x137f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137F80u;
}
