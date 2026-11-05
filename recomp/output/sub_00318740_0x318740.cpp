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

// Function: sub_00318740
// Address: 0x318740 - 0x3187a0
void sub_00318740_0x318740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318740_0x318740");
#endif

    switch (ctx->pc) {
        case 0x31877cu: goto label_31877c;
        case 0x318784u: goto label_318784;
        case 0x31878cu: goto label_31878c;
        default: break;
    }

    ctx->pc = 0x318740u;

    // 0x318740: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x318740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x318744: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x318744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x318748: 0x24435870  addiu       $v1, $v0, 0x5870
    ctx->pc = 0x318748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x31874c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x318750: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x318750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x318754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x318754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318758: 0x9062027c  lbu         $v0, 0x27C($v1)
    ctx->pc = 0x318758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x595AECu));
    // 0x31875c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x31875cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x318760: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x318760u;
    {
        const bool branch_taken_0x318760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318760u;
        // 0x318764: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318760) {
            ctx->pc = 0x31878Cu;
            goto label_31878c;
        }
    }
    ctx->pc = 0x318768u;
    // 0x318768: 0x906203d7  lbu         $v0, 0x3D7($v1)
    ctx->pc = 0x318768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 983)));
    // 0x31876c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x31876Cu;
    {
        const bool branch_taken_0x31876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31876c) {
            ctx->pc = 0x318770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31876Cu;
            // 0x318770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318790u;
            goto label_318790;
        }
    }
    ctx->pc = 0x318774u;
    // 0x318774: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x318774u;
    SET_GPR_U32(ctx, 31, 0x31877Cu);
    ctx->pc = 0x318778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318774u;
    // 0x318778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x318774u, 0x31877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31877Cu;
label_31877c:
    // 0x31877c: 0xc0db23c  jal         func_36C8F0
    ctx->pc = 0x31877Cu;
    SET_GPR_U32(ctx, 31, 0x318784u);
    ctx->pc = 0x318780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31877Cu;
    // 0x318780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C8F0u, 0x31877Cu, 0x318784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318784u;
label_318784:
    // 0x318784: 0xc0c2bb8  jal         func_30AEE0
    ctx->pc = 0x318784u;
    SET_GPR_U32(ctx, 31, 0x31878Cu);
    ctx->pc = 0x318788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318784u;
    // 0x318788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x318784u, 0x31878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31878Cu;
label_31878c:
    // 0x31878c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31878cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_318790:
    // 0x318790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x318790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x318794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x318794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318798: 0x3e00008  jr          $ra
    ctx->pc = 0x318798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318798u;
        // 0x31879c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3187A0u;
}
