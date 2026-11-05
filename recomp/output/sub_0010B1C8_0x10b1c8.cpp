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

// Function: sub_0010B1C8
// Address: 0x10b1c8 - 0x10b230
void sub_0010B1C8_0x10b1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B1C8_0x10b1c8");
#endif

    switch (ctx->pc) {
        case 0x10b1ecu: goto label_10b1ec;
        case 0x10b214u: goto label_10b214;
        default: break;
    }

    ctx->pc = 0x10b1c8u;

    // 0x10b1c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b1cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b1d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b1d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b1dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10b1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10b1e4: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B1E4u;
    SET_GPR_U32(ctx, 31, 0x10B1ECu);
    ctx->pc = 0x10B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1E4u;
    // 0x10b1e8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B1E4u, 0x10B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1ECu;
label_10b1ec:
    // 0x10b1ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b1ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1f0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b1f4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B1F4u;
    {
        const bool branch_taken_0x10b1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1F4u;
        // 0x10b1f8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1f4) {
            ctx->pc = 0x10B214u;
            goto label_10b214;
        }
    }
    ctx->pc = 0x10B1FCu;
    // 0x10b1fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b200: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b204: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10b204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b208: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b20c: 0xc0442e8  jal         func_110BA0
    ctx->pc = 0x10B20Cu;
    SET_GPR_U32(ctx, 31, 0x10B214u);
    ctx->pc = 0x10B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B20Cu;
    // 0x10b210: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110BA0u, 0x10B20Cu, 0x10B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B214u;
label_10b214:
    // 0x10b214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b21c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b21cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b220: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10b220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b224: 0x3e00008  jr          $ra
    ctx->pc = 0x10B224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B224u;
        // 0x10b228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B22Cu;
    // 0x10b22c: 0x0  nop
    ctx->pc = 0x10b22cu;
    // NOP
    ctx->pc = 0x10b230u;
}
