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

// Function: sub_0016B5D0
// Address: 0x16b5d0 - 0x16b618
void sub_0016B5D0_0x16b5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B5D0_0x16b5d0");
#endif

    switch (ctx->pc) {
        case 0x16b5ecu: goto label_16b5ec;
        case 0x16b604u: goto label_16b604;
        default: break;
    }

    ctx->pc = 0x16b5d0u;

    // 0x16b5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b5d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b5d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16b5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b5dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b5e4: 0xc05adc6  jal         func_16B718
    ctx->pc = 0x16B5E4u;
    SET_GPR_U32(ctx, 31, 0x16B5ECu);
    ctx->pc = 0x16B5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B5E4u;
    // 0x16b5e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B718u, 0x16B5E4u, 0x16B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B5ECu;
label_16b5ec:
    // 0x16b5ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b5f0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B5F0u;
    {
        const bool branch_taken_0x16b5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16b5f0) {
            ctx->pc = 0x16B5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B5F0u;
            // 0x16b5f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B608u;
            goto label_16b608;
        }
    }
    ctx->pc = 0x16B5F8u;
    // 0x16b5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5fc: 0xc05adbc  jal         func_16B6F0
    ctx->pc = 0x16B5FCu;
    SET_GPR_U32(ctx, 31, 0x16B604u);
    ctx->pc = 0x16B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B5FCu;
    // 0x16b600: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B6F0u, 0x16B5FCu, 0x16B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B604u;
label_16b604:
    // 0x16b604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b608:
    // 0x16b608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16b608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b60c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b610: 0x3e00008  jr          $ra
    ctx->pc = 0x16B610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B610u;
        // 0x16b614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B618u;
}
