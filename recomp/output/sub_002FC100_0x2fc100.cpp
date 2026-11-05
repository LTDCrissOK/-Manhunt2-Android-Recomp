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

// Function: sub_002FC100
// Address: 0x2fc100 - 0x2fc158
void sub_002FC100_0x2fc100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC100_0x2fc100");
#endif

    switch (ctx->pc) {
        case 0x2fc128u: goto label_2fc128;
        case 0x2fc13cu: goto label_2fc13c;
        case 0x2fc144u: goto label_2fc144;
        default: break;
    }

    ctx->pc = 0x2fc100u;

    // 0x2fc100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc108: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fc108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fc10c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc110: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc114: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2fc114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2fc118: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FC118u;
    {
        const bool branch_taken_0x2fc118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC118u;
        // 0x2fc11c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc118) {
            ctx->pc = 0x2FC144u;
            goto label_2fc144;
        }
    }
    ctx->pc = 0x2FC120u;
    // 0x2fc120: 0xc0aca06  jal         func_2B2818
    ctx->pc = 0x2FC120u;
    SET_GPR_U32(ctx, 31, 0x2FC128u);
    ctx->pc = 0x2B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2818u, 0x2FC120u, 0x2FC128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC128u;
label_2fc128:
    // 0x2fc128: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2fc128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc12c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fc130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc134: 0xc08db1e  jal         func_236C78
    ctx->pc = 0x2FC134u;
    SET_GPR_U32(ctx, 31, 0x2FC13Cu);
    ctx->pc = 0x2FC138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC134u;
    // 0x2fc138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x2FC134u, 0x2FC13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC13Cu;
label_2fc13c:
    // 0x2fc13c: 0xc0a2dbe  jal         func_28B6F8
    ctx->pc = 0x2FC13Cu;
    SET_GPR_U32(ctx, 31, 0x2FC144u);
    ctx->pc = 0x2FC140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC13Cu;
    // 0x2fc140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B6F8u, 0x2FC13Cu, 0x2FC144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC144u;
label_2fc144:
    // 0x2fc144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc14c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc150: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC150u;
        // 0x2fc154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC158u;
}
