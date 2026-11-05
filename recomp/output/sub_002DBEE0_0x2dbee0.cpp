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

// Function: sub_002DBEE0
// Address: 0x2dbee0 - 0x2dbf60
void sub_002DBEE0_0x2dbee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBEE0_0x2dbee0");
#endif

    switch (ctx->pc) {
        case 0x2dbf0cu: goto label_2dbf0c;
        case 0x2dbf2cu: goto label_2dbf2c;
        default: break;
    }

    ctx->pc = 0x2dbee0u;

    // 0x2dbee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dbee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dbee4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dbee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dbee8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2dbee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2dbeec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dbeecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbef0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbef4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dbef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbef8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2dbef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbefc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dbefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dbf00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dbf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dbf04: 0xc0aedbe  jal         func_2BB6F8
    ctx->pc = 0x2DBF04u;
    SET_GPR_U32(ctx, 31, 0x2DBF0Cu);
    ctx->pc = 0x2DBF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF04u;
    // 0x2dbf08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6F8u, 0x2DBF04u, 0x2DBF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF0Cu;
label_2dbf0c:
    // 0x2dbf0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dbf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf10: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x2dbf10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dbf14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dbf14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dbf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf1c: 0x203880a  movz        $s1, $s0, $v1
    ctx->pc = 0x2dbf1cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    // 0x2dbf20: 0x119040  sll         $s2, $s1, 1
    ctx->pc = 0x2dbf20u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2dbf24: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2DBF24u;
    SET_GPR_U32(ctx, 31, 0x2DBF2Cu);
    ctx->pc = 0x2DBF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF24u;
    // 0x2dbf28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2DBF24u, 0x2DBF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF2Cu;
label_2dbf2c:
    // 0x2dbf2c: 0x230802a  slt         $s0, $s1, $s0
    ctx->pc = 0x2dbf2cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dbf30: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DBF30u;
    {
        const bool branch_taken_0x2dbf30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF30u;
        // 0x2dbf34: 0x2531021  addu        $v0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf30) {
            ctx->pc = 0x2DBF3Cu;
            goto label_2dbf3c;
        }
    }
    ctx->pc = 0x2DBF38u;
    // 0x2dbf38: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2dbf38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_2dbf3c:
    // 0x2dbf3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dbf3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dbf40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbf44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dbf44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dbf48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dbf48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbf4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2dbf4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dbf50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dbf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbf54: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF54u;
        // 0x2dbf58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBF5Cu;
    // 0x2dbf5c: 0x0  nop
    ctx->pc = 0x2dbf5cu;
    // NOP
    ctx->pc = 0x2dbf60u;
}
