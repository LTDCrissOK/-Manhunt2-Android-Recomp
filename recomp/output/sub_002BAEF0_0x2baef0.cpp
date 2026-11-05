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

// Function: sub_002BAEF0
// Address: 0x2baef0 - 0x2baf58
void sub_002BAEF0_0x2baef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAEF0_0x2baef0");
#endif

    switch (ctx->pc) {
        case 0x2baf0cu: goto label_2baf0c;
        case 0x2baf14u: goto label_2baf14;
        case 0x2baf38u: goto label_2baf38;
        default: break;
    }

    ctx->pc = 0x2baef0u;

    // 0x2baef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2baef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2baef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2baef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2baef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2baef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2baefc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2baefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2baf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2baf04: 0xc0aebee  jal         func_2BAFB8
    ctx->pc = 0x2BAF04u;
    SET_GPR_U32(ctx, 31, 0x2BAF0Cu);
    ctx->pc = 0x2BAF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF04u;
    // 0x2baf08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFB8u, 0x2BAF04u, 0x2BAF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF0Cu;
label_2baf0c:
    // 0x2baf0c: 0xc0aed8a  jal         func_2BB628
    ctx->pc = 0x2BAF0Cu;
    SET_GPR_U32(ctx, 31, 0x2BAF14u);
    ctx->pc = 0x2BAF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF0Cu;
    // 0x2baf10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB628u, 0x2BAF0Cu, 0x2BAF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF14u;
label_2baf14:
    // 0x2baf14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2baf14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf18: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAF18u;
    {
        const bool branch_taken_0x2baf18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baf18) {
            ctx->pc = 0x2BAF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAF18u;
            // 0x2baf1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAF30u;
            goto label_2baf30;
        }
    }
    ctx->pc = 0x2BAF20u;
    // 0x2baf20: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2baf20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2baf24: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BAF24u;
    {
        const bool branch_taken_0x2baf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2baf24) {
            ctx->pc = 0x2BAF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAF24u;
            // 0x2baf28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAF40u;
            goto label_2baf40;
        }
    }
    ctx->pc = 0x2BAF2Cu;
    // 0x2baf2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2baf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2baf30:
    // 0x2baf30: 0xc0aebb8  jal         func_2BAEE0
    ctx->pc = 0x2BAF30u;
    SET_GPR_U32(ctx, 31, 0x2BAF38u);
    ctx->pc = 0x2BAF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF30u;
    // 0x2baf34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAEE0u, 0x2BAF30u, 0x2BAF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF38u;
label_2baf38:
    // 0x2baf38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2baf38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2baf3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2baf40:
    // 0x2baf40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2baf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2baf44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baf48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2baf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2baf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF4Cu;
        // 0x2baf50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAF54u;
    // 0x2baf54: 0x0  nop
    ctx->pc = 0x2baf54u;
    // NOP
    ctx->pc = 0x2baf58u;
}
