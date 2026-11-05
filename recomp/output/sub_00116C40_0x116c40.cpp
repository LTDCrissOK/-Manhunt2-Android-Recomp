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

// Function: sub_00116C40
// Address: 0x116c40 - 0x116cb0
void sub_00116C40_0x116c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116C40_0x116c40");
#endif

    switch (ctx->pc) {
        case 0x116c58u: goto label_116c58;
        case 0x116c74u: goto label_116c74;
        case 0x116c84u: goto label_116c84;
        default: break;
    }

    ctx->pc = 0x116c40u;

    // 0x116c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116c48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x116c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116c4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116c50: 0xc08951c  jal         func_225470
    ctx->pc = 0x116C50u;
    SET_GPR_U32(ctx, 31, 0x116C58u);
    ctx->pc = 0x116C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C50u;
    // 0x116c54: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x116C50u, 0x116C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C58u;
label_116c58:
    // 0x116c58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c5c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116C5Cu;
    {
        const bool branch_taken_0x116c5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x116C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C5Cu;
        // 0x116c60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c5c) {
            ctx->pc = 0x116C6Cu;
            goto label_116c6c;
        }
    }
    ctx->pc = 0x116C64u;
    // 0x116c64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x116C64u;
    {
        const bool branch_taken_0x116c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C64u;
        // 0x116c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c64) {
            ctx->pc = 0x116C98u;
            goto label_116c98;
        }
    }
    ctx->pc = 0x116C6Cu;
label_116c6c:
    // 0x116c6c: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x116C6Cu;
    SET_GPR_U32(ctx, 31, 0x116C74u);
    ctx->pc = 0x116C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C6Cu;
    // 0x116c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x116C6Cu, 0x116C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C74u;
label_116c74:
    // 0x116c74: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x116C74u;
    {
        const bool branch_taken_0x116c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116c74) {
            ctx->pc = 0x116C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116C74u;
            // 0x116c78: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116C94u;
            goto label_116c94;
        }
    }
    ctx->pc = 0x116C7Cu;
    // 0x116c7c: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x116C7Cu;
    SET_GPR_U32(ctx, 31, 0x116C84u);
    ctx->pc = 0x116C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C7Cu;
    // 0x116c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x116C7Cu, 0x116C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C84u;
label_116c84:
    // 0x116c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116c88: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116C88u;
    {
        const bool branch_taken_0x116c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x116C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C88u;
        // 0x116c8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c88) {
            ctx->pc = 0x116C98u;
            goto label_116c98;
        }
    }
    ctx->pc = 0x116C90u;
    // 0x116c90: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x116c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116c94:
    // 0x116c94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x116c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116c98:
    // 0x116c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116c9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116ca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x116CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CA4u;
        // 0x116ca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116CACu;
    // 0x116cac: 0x0  nop
    ctx->pc = 0x116cacu;
    // NOP
    ctx->pc = 0x116cb0u;
}
