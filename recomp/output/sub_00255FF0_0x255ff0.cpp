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

// Function: sub_00255FF0
// Address: 0x255ff0 - 0x256050
void sub_00255FF0_0x255ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255FF0_0x255ff0");
#endif

    switch (ctx->pc) {
        case 0x256024u: goto label_256024;
        case 0x256034u: goto label_256034;
        default: break;
    }

    ctx->pc = 0x255ff0u;

    // 0x255ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x255ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x255ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x255ff8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x255ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x255ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x255ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256000: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x256000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x256004: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x256004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256008: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x256008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x25600c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25600Cu;
    {
        const bool branch_taken_0x25600c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x256010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25600Cu;
        // 0x256010: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25600c) {
            ctx->pc = 0x256024u;
            goto label_256024;
        }
    }
    ctx->pc = 0x256014u;
    // 0x256014: 0x8e040ff8  lw          $a0, 0xFF8($s0)
    ctx->pc = 0x256014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x256018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x256018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25601c: 0xc072818  jal         func_1CA060
    ctx->pc = 0x25601Cu;
    SET_GPR_U32(ctx, 31, 0x256024u);
    ctx->pc = 0x256020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25601Cu;
    // 0x256020: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA060u, 0x25601Cu, 0x256024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256024u;
label_256024:
    // 0x256024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256028: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x256028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25602c: 0xc08d9a6  jal         func_236698
    ctx->pc = 0x25602Cu;
    SET_GPR_U32(ctx, 31, 0x256034u);
    ctx->pc = 0x256030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25602Cu;
    // 0x256030: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236698u, 0x25602Cu, 0x256034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256034u;
label_256034:
    // 0x256034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x256038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25603c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25603cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256040: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x256040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x256044: 0x3e00008  jr          $ra
    ctx->pc = 0x256044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256044u;
        // 0x256048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25604Cu;
    // 0x25604c: 0x0  nop
    ctx->pc = 0x25604cu;
    // NOP
    ctx->pc = 0x256050u;
}
