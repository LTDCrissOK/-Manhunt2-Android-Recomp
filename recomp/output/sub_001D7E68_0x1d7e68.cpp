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

// Function: sub_001D7E68
// Address: 0x1d7e68 - 0x1d7eb0
void sub_001D7E68_0x1d7e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7E68_0x1d7e68");
#endif

    switch (ctx->pc) {
        case 0x1d7e8cu: goto label_1d7e8c;
        case 0x1d7e98u: goto label_1d7e98;
        case 0x1d7ea4u: goto label_1d7ea4;
        default: break;
    }

    ctx->pc = 0x1d7e68u;

    // 0x1d7e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7e6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d7e70: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D7E70u;
    {
        const bool branch_taken_0x1d7e70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D7E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E70u;
        // 0x1d7e74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e70) {
            ctx->pc = 0x1D7EA4u;
            goto label_1d7ea4;
        }
    }
    ctx->pc = 0x1D7E78u;
    // 0x1d7e78: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D7E78u;
    {
        const bool branch_taken_0x1d7e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E78u;
        // 0x1d7e7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e78) {
            ctx->pc = 0x1D7EA8u;
            goto label_1d7ea8;
        }
    }
    ctx->pc = 0x1D7E80u;
    // 0x1d7e80: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1d7e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1d7e84: 0xc09f05e  jal         func_27C178
    ctx->pc = 0x1D7E84u;
    SET_GPR_U32(ctx, 31, 0x1D7E8Cu);
    ctx->pc = 0x1D7E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E84u;
    // 0x1d7e88: 0x2484f300  addiu       $a0, $a0, -0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C178u, 0x1D7E84u, 0x1D7E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E8Cu;
label_1d7e8c:
    // 0x1d7e8c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1d7e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1d7e90: 0xc09dd7a  jal         func_2775E8
    ctx->pc = 0x1D7E90u;
    SET_GPR_U32(ctx, 31, 0x1D7E98u);
    ctx->pc = 0x1D7E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E90u;
    // 0x1d7e94: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2775E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2775E8u, 0x1D7E90u, 0x1D7E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E98u;
label_1d7e98:
    // 0x1d7e98: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1d7e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1d7e9c: 0xc0c333e  jal         func_30CCF8
    ctx->pc = 0x1D7E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D7EA4u);
    ctx->pc = 0x1D7EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E9Cu;
    // 0x1d7ea0: 0x2484ff68  addiu       $a0, $a0, -0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CCF8u, 0x1D7E9Cu, 0x1D7EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EA4u;
label_1d7ea4:
    // 0x1d7ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7ea8:
    // 0x1d7ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EA8u;
        // 0x1d7eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7EB0u;
}
