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

// Function: sub_001EAEA8
// Address: 0x1eaea8 - 0x1eaf48
void sub_001EAEA8_0x1eaea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAEA8_0x1eaea8");
#endif

    switch (ctx->pc) {
        case 0x1eaee8u: goto label_1eaee8;
        case 0x1eaefcu: goto label_1eaefc;
        case 0x1eaf0cu: goto label_1eaf0c;
        default: break;
    }

    ctx->pc = 0x1eaea8u;

    // 0x1eaea8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eaea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eaeac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eaeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eaeb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eaeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1eaeb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eaeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaeb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1eaeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1eaebc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1eaebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaec0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1eaec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1eaec4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eaec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaec8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eaec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eaecc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1eaeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1eaed0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1eaed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1eaed4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1eaed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eaed8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EAED8u;
    {
        const bool branch_taken_0x1eaed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAED8u;
        // 0x1eaedc: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaed8) {
            ctx->pc = 0x1EAF20u;
            goto label_1eaf20;
        }
    }
    ctx->pc = 0x1EAEE0u;
    // 0x1eaee0: 0x3c150049  lui         $s5, 0x49
    ctx->pc = 0x1eaee0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)73 << 16));
    // 0x1eaee4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eaee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eaee8:
    // 0x1eaee8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eaee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eaeec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1eaeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaef0: 0x26a60400  addiu       $a2, $s5, 0x400
    ctx->pc = 0x1eaef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1024));
    // 0x1eaef4: 0xc07a98e  jal         func_1EA638
    ctx->pc = 0x1EAEF4u;
    SET_GPR_U32(ctx, 31, 0x1EAEFCu);
    ctx->pc = 0x1EAEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAEF4u;
    // 0x1eaef8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA638u, 0x1EAEF4u, 0x1EAEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAEFCu;
label_1eaefc:
    // 0x1eaefc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAEFCu;
    {
        const bool branch_taken_0x1eaefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaefc) {
            ctx->pc = 0x1EAF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAEFCu;
            // 0x1eaf00: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAF10u;
            goto label_1eaf10;
        }
    }
    ctx->pc = 0x1EAF04u;
    // 0x1eaf04: 0xc07aad2  jal         func_1EAB48
    ctx->pc = 0x1EAF04u;
    SET_GPR_U32(ctx, 31, 0x1EAF0Cu);
    ctx->pc = 0x1EAF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAF04u;
    // 0x1eaf08: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAB48u, 0x1EAF04u, 0x1EAF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF0Cu;
label_1eaf0c:
    // 0x1eaf0c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1eaf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1eaf10:
    // 0x1eaf10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1eaf10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1eaf14: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1eaf14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1eaf18: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1EAF18u;
    {
        const bool branch_taken_0x1eaf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF18u;
        // 0x1eaf1c: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf18) {
            ctx->pc = 0x1EAEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eaee8;
        }
    }
    ctx->pc = 0x1EAF20u;
label_1eaf20:
    // 0x1eaf20: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1eaf20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaf24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eaf24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eaf28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eaf28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eaf2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eaf2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaf30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eaf30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eaf34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1eaf34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eaf38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1eaf38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eaf3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eaf3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eaf40: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF40u;
        // 0x1eaf44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAF48u;
}
