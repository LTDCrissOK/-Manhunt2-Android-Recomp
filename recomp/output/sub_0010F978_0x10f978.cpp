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

// Function: sub_0010F978
// Address: 0x10f978 - 0x10f9d8
void sub_0010F978_0x10f978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F978_0x10f978");
#endif

    switch (ctx->pc) {
        case 0x10f994u: goto label_10f994;
        default: break;
    }

    ctx->pc = 0x10f978u;

    // 0x10f978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f97c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10f97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10f980: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10f984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f98c: 0xc0450fc  jal         func_1143F0
    ctx->pc = 0x10F98Cu;
    SET_GPR_U32(ctx, 31, 0x10F994u);
    ctx->pc = 0x10F990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F98Cu;
    // 0x10f990: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1143F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1143F0u, 0x10F98Cu, 0x10F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F994u;
label_10f994:
    // 0x10f994: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F994u;
    {
        const bool branch_taken_0x10f994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F994u;
        // 0x10f998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f994) {
            ctx->pc = 0x10F9ACu;
            goto label_10f9ac;
        }
    }
    ctx->pc = 0x10F99Cu;
    // 0x10f99c: 0x8e2201f4  lw          $v0, 0x1F4($s1)
    ctx->pc = 0x10f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x10f9a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10f9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10f9a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10F9A4u;
    {
        const bool branch_taken_0x10f9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9A4u;
        // 0x10f9a8: 0xae2201f4  sw          $v0, 0x1F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9a4) {
            ctx->pc = 0x10F9C4u;
            goto label_10f9c4;
        }
    }
    ctx->pc = 0x10F9ACu;
label_10f9ac:
    // 0x10f9ac: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x10f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x10f9b0: 0x8e2301f4  lw          $v1, 0x1F4($s1)
    ctx->pc = 0x10f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x10f9b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10f9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10f9b8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x10f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10f9bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10f9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10f9c0: 0xae2301f4  sw          $v1, 0x1F4($s1)
    ctx->pc = 0x10f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 3));
label_10f9c4:
    // 0x10f9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f9c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f9cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10F9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9D0u;
        // 0x10f9d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F9D8u;
}
