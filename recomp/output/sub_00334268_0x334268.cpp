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

// Function: sub_00334268
// Address: 0x334268 - 0x3342c8
void sub_00334268_0x334268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334268_0x334268");
#endif

    switch (ctx->pc) {
        case 0x3342a0u: goto label_3342a0;
        case 0x3342acu: goto label_3342ac;
        default: break;
    }

    ctx->pc = 0x334268u;

    // 0x334268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33426c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x33426cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x334270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334274: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x334274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334278: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x334278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33427c: 0x24506e70  addiu       $s0, $v0, 0x6E70
    ctx->pc = 0x33427cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x334280: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x334280u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B6E74u));
    // 0x334284: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x334284u;
    {
        const bool branch_taken_0x334284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334284u;
        // 0x334288: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334284) {
            ctx->pc = 0x334290u;
            goto label_334290;
        }
    }
    ctx->pc = 0x33428Cu;
    // 0x33428c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33428cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_334290:
    // 0x334290: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x334290u;
    {
        const bool branch_taken_0x334290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x334290) {
            ctx->pc = 0x334294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334290u;
            // 0x334294: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3342B0u;
            goto label_3342b0;
        }
    }
    ctx->pc = 0x334298u;
    // 0x334298: 0xc0c9c1c  jal         func_327070
    ctx->pc = 0x334298u;
    SET_GPR_U32(ctx, 31, 0x3342A0u);
    ctx->pc = 0x33429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334298u;
    // 0x33429c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327070u, 0x334298u, 0x3342A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342A0u;
label_3342a0:
    // 0x3342a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3342a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3342a4: 0xc0fba46  jal         func_3EE918
    ctx->pc = 0x3342A4u;
    SET_GPR_U32(ctx, 31, 0x3342ACu);
    ctx->pc = 0x3342A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3342A4u;
    // 0x3342a8: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE918u, 0x3342A4u, 0x3342ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342ACu;
label_3342ac:
    // 0x3342ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3342acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3342b0:
    // 0x3342b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3342b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3342b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3342B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3342B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342B4u;
        // 0x3342b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3342B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3342BCu;
    // 0x3342bc: 0x0  nop
    ctx->pc = 0x3342bcu;
    // NOP
    // 0x3342c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3342c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3342c4: 0x0  nop
    ctx->pc = 0x3342c4u;
    // NOP
    ctx->pc = 0x3342c8u;
}
