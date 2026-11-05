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

// Function: sub_0010B9E0
// Address: 0x10b9e0 - 0x10ba50
void sub_0010B9E0_0x10b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B9E0_0x10b9e0");
#endif

    switch (ctx->pc) {
        case 0x10b9fcu: goto label_10b9fc;
        case 0x10ba28u: goto label_10ba28;
        default: break;
    }

    ctx->pc = 0x10b9e0u;

    // 0x10b9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b9e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b9e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b9ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b9f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b9f4: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B9F4u;
    SET_GPR_U32(ctx, 31, 0x10B9FCu);
    ctx->pc = 0x10B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B9F4u;
    // 0x10b9f8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B9F4u, 0x10B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B9FCu;
label_10b9fc:
    // 0x10b9fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b9fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba00: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10ba04: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10BA04u;
    {
        const bool branch_taken_0x10ba04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA04u;
        // 0x10ba08: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba04) {
            ctx->pc = 0x10BA34u;
            goto label_10ba34;
        }
    }
    ctx->pc = 0x10BA0Cu;
    // 0x10ba0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10ba10: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10ba14: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x10ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10ba18: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BA18u;
    {
        const bool branch_taken_0x10ba18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA18u;
        // 0x10ba1c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba18) {
            ctx->pc = 0x10BA34u;
            goto label_10ba34;
        }
    }
    ctx->pc = 0x10BA20u;
    // 0x10ba20: 0xc047866  jal         func_11E198
    ctx->pc = 0x10BA20u;
    SET_GPR_U32(ctx, 31, 0x10BA28u);
    ctx->pc = 0x10BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA20u;
    // 0x10ba24: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x10BA20u, 0x10BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BA28u;
label_10ba28:
    // 0x10ba28: 0xa05102e0  sb          $s1, 0x2E0($v0)
    ctx->pc = 0x10ba28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 736), (uint8_t)GPR_U32(ctx, 17));
    // 0x10ba2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10BA2Cu;
    {
        const bool branch_taken_0x10ba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA2Cu;
        // 0x10ba30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba2c) {
            ctx->pc = 0x10BA38u;
            goto label_10ba38;
        }
    }
    ctx->pc = 0x10BA34u;
label_10ba34:
    // 0x10ba34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10ba38:
    // 0x10ba38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ba38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ba3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ba3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ba40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ba44: 0x3e00008  jr          $ra
    ctx->pc = 0x10BA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA44u;
        // 0x10ba48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BA4Cu;
    // 0x10ba4c: 0x0  nop
    ctx->pc = 0x10ba4cu;
    // NOP
    ctx->pc = 0x10ba50u;
}
