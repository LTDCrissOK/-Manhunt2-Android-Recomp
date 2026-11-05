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

// Function: sub_0025FCB8
// Address: 0x25fcb8 - 0x25fd48
void sub_0025FCB8_0x25fcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FCB8_0x25fcb8");
#endif

    switch (ctx->pc) {
        case 0x25fcc8u: goto label_25fcc8;
        default: break;
    }

    ctx->pc = 0x25fcb8u;

    // 0x25fcb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fcbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fcc0: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x25FCC0u;
    SET_GPR_U32(ctx, 31, 0x25FCC8u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x25FCC0u, 0x25FCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FCC8u;
label_25fcc8:
    // 0x25fcc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25fcc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fccc: 0x2862002e  slti        $v0, $v1, 0x2E
    ctx->pc = 0x25fcccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x25fcd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25FCD0u;
    {
        const bool branch_taken_0x25fcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCD0u;
        // 0x25fcd4: 0x2862002c  slti        $v0, $v1, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)44) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fcd0) {
            ctx->pc = 0x25FCF8u;
            goto label_25fcf8;
        }
    }
    ctx->pc = 0x25FCD8u;
    // 0x25fcd8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25FCD8u;
    {
        const bool branch_taken_0x25fcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCD8u;
        // 0x25fcdc: 0x2862002a  slti        $v0, $v1, 0x2A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)42) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fcd8) {
            ctx->pc = 0x25FD30u;
            goto label_25fd30;
        }
    }
    ctx->pc = 0x25FCE0u;
    // 0x25fce0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25FCE0u;
    {
        const bool branch_taken_0x25fce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCE0u;
        // 0x25fce4: 0x28620028  slti        $v0, $v1, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fce0) {
            ctx->pc = 0x25FD38u;
            goto label_25fd38;
        }
    }
    ctx->pc = 0x25FCE8u;
    // 0x25fce8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25FCE8u;
    {
        const bool branch_taken_0x25fce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCE8u;
        // 0x25fcec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fce8) {
            ctx->pc = 0x25FD3Cu;
            goto label_25fd3c;
        }
    }
    ctx->pc = 0x25FCF0u;
    // 0x25fcf0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25FCF0u;
    {
        const bool branch_taken_0x25fcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCF0u;
        // 0x25fcf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fcf0) {
            ctx->pc = 0x25FD3Cu;
            goto label_25fd3c;
        }
    }
    ctx->pc = 0x25FCF8u;
label_25fcf8:
    // 0x25fcf8: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x25fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x25fcfc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25FCFCu;
    {
        const bool branch_taken_0x25fcfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCFCu;
        // 0x25fd00: 0x28620034  slti        $v0, $v1, 0x34 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)52) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fcfc) {
            ctx->pc = 0x25FD30u;
            goto label_25fd30;
        }
    }
    ctx->pc = 0x25FD04u;
    // 0x25fd04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FD04u;
    {
        const bool branch_taken_0x25fd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD04u;
        // 0x25fd08: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd04) {
            ctx->pc = 0x25FD1Cu;
            goto label_25fd1c;
        }
    }
    ctx->pc = 0x25FD0Cu;
    // 0x25fd0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25FD0Cu;
    {
        const bool branch_taken_0x25fd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD0Cu;
        // 0x25fd10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd0c) {
            ctx->pc = 0x25FD30u;
            goto label_25fd30;
        }
    }
    ctx->pc = 0x25FD14u;
    // 0x25fd14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25FD14u;
    {
        const bool branch_taken_0x25fd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD14u;
        // 0x25fd18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd14) {
            ctx->pc = 0x25FD40u;
            goto label_25fd40;
        }
    }
    ctx->pc = 0x25FD1Cu;
label_25fd1c:
    // 0x25fd1c: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x25fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x25fd20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FD20u;
    {
        const bool branch_taken_0x25fd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD20u;
        // 0x25fd24: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd20) {
            ctx->pc = 0x25FD30u;
            goto label_25fd30;
        }
    }
    ctx->pc = 0x25FD28u;
    // 0x25fd28: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FD28u;
    {
        const bool branch_taken_0x25fd28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD28u;
        // 0x25fd2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd28) {
            ctx->pc = 0x25FD3Cu;
            goto label_25fd3c;
        }
    }
    ctx->pc = 0x25FD30u;
label_25fd30:
    // 0x25fd30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25FD30u;
    {
        const bool branch_taken_0x25fd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD30u;
        // 0x25fd34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd30) {
            ctx->pc = 0x25FD3Cu;
            goto label_25fd3c;
        }
    }
    ctx->pc = 0x25FD38u;
label_25fd38:
    // 0x25fd38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25fd38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fd3c:
    // 0x25fd3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fd40:
    // 0x25fd40: 0x3e00008  jr          $ra
    ctx->pc = 0x25FD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD40u;
        // 0x25fd44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FD48u;
}
