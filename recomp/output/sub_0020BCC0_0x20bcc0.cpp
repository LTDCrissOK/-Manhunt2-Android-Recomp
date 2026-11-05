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

// Function: sub_0020BCC0
// Address: 0x20bcc0 - 0x20bd40
void sub_0020BCC0_0x20bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BCC0_0x20bcc0");
#endif

    switch (ctx->pc) {
        case 0x20bcf0u: goto label_20bcf0;
        case 0x20bd0cu: goto label_20bd0c;
        case 0x20bd1cu: goto label_20bd1c;
        case 0x20bd24u: goto label_20bd24;
        default: break;
    }

    ctx->pc = 0x20bcc0u;

    // 0x20bcc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20bcc4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x20bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x20bcc8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x20bcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x20bccc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20bcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bcd0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20bcd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bcd4: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x20bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x20bcd8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x20bcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x20bcdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bce0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bce4: 0x240601ff  addiu       $a2, $zero, 0x1FF
    ctx->pc = 0x20bce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x20bce8: 0xc0f3872  jal         func_3CE1C8
    ctx->pc = 0x20BCE8u;
    SET_GPR_U32(ctx, 31, 0x20BCF0u);
    ctx->pc = 0x20BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCE8u;
    // 0x20bcec: 0x3c11004a  lui         $s1, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)74 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE1C8u, 0x20BCE8u, 0x20BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCF0u;
label_20bcf0:
    // 0x20bcf0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20BCF0u;
    {
        const bool branch_taken_0x20bcf0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCF0u;
        // 0x20bcf4: 0xae22e4a0  sw          $v0, -0x1B60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294960288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bcf0) {
            ctx->pc = 0x20BD0Cu;
            goto label_20bd0c;
        }
    }
    ctx->pc = 0x20BCF8u;
    // 0x20bcf8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20bcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20bcfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20bcfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd00: 0x24a50f30  addiu       $a1, $a1, 0xF30
    ctx->pc = 0x20bd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3888));
    // 0x20bd04: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x20BD04u;
    SET_GPR_U32(ctx, 31, 0x20BD0Cu);
    ctx->pc = 0x20BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD04u;
    // 0x20bd08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x20BD04u, 0x20BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD0Cu;
label_20bd0c:
    // 0x20bd0c: 0x8e24e4a0  lw          $a0, -0x1B60($s1)
    ctx->pc = 0x20bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960288)));
    // 0x20bd10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20bd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd14: 0xc0f3a04  jal         func_3CE810
    ctx->pc = 0x20BD14u;
    SET_GPR_U32(ctx, 31, 0x20BD1Cu);
    ctx->pc = 0x20BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD14u;
    // 0x20bd18: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE810u, 0x20BD14u, 0x20BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD1Cu;
label_20bd1c:
    // 0x20bd1c: 0xc0f3916  jal         func_3CE458
    ctx->pc = 0x20BD1Cu;
    SET_GPR_U32(ctx, 31, 0x20BD24u);
    ctx->pc = 0x20BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD1Cu;
    // 0x20bd20: 0x8e24e4a0  lw          $a0, -0x1B60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE458u, 0x20BD1Cu, 0x20BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD24u;
label_20bd24:
    // 0x20bd24: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x20bd24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20bd28: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x20bd28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20bd2c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x20bd2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20bd30: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x20bd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20bd34: 0x3e00008  jr          $ra
    ctx->pc = 0x20BD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD34u;
        // 0x20bd38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BD3Cu;
    // 0x20bd3c: 0x0  nop
    ctx->pc = 0x20bd3cu;
    // NOP
    ctx->pc = 0x20bd40u;
}
