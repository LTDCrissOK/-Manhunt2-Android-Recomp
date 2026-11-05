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

// Function: sub_0030C740
// Address: 0x30c740 - 0x30c7a0
void sub_0030C740_0x30c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C740_0x30c740");
#endif

    switch (ctx->pc) {
        case 0x30c758u: goto label_30c758;
        case 0x30c764u: goto label_30c764;
        case 0x30c77cu: goto label_30c77c;
        case 0x30c784u: goto label_30c784;
        default: break;
    }

    ctx->pc = 0x30c740u;

    // 0x30c740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30c744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30c748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c74c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30c74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30c750: 0xc0c31e8  jal         func_30C7A0
    ctx->pc = 0x30C750u;
    SET_GPR_U32(ctx, 31, 0x30C758u);
    ctx->pc = 0x30C754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C750u;
    // 0x30c754: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C7A0u, 0x30C750u, 0x30C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C758u;
label_30c758:
    // 0x30c758: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30c758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30c75c: 0xc0c4946  jal         func_312518
    ctx->pc = 0x30C75Cu;
    SET_GPR_U32(ctx, 31, 0x30C764u);
    ctx->pc = 0x30C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C75Cu;
    // 0x30c760: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312518u, 0x30C75Cu, 0x30C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C764u;
label_30c764:
    // 0x30c764: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30c764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30c768: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30c768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c76c: 0x24a5c630  addiu       $a1, $a1, -0x39D0
    ctx->pc = 0x30c76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952496));
    // 0x30c770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30c770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c774: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30C774u;
    SET_GPR_U32(ctx, 31, 0x30C77Cu);
    ctx->pc = 0x30C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C774u;
    // 0x30c778: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30C774u, 0x30C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C77Cu;
label_30c77c:
    // 0x30c77c: 0xc0c4970  jal         func_3125C0
    ctx->pc = 0x30C77Cu;
    SET_GPR_U32(ctx, 31, 0x30C784u);
    ctx->pc = 0x30C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C77Cu;
    // 0x30c780: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3125C0u, 0x30C77Cu, 0x30C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C784u;
label_30c784:
    // 0x30c784: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30c784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30c788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c78c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c790: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30c790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c794: 0x3e00008  jr          $ra
    ctx->pc = 0x30C794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C794u;
        // 0x30c798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C79Cu;
    // 0x30c79c: 0x0  nop
    ctx->pc = 0x30c79cu;
    // NOP
    ctx->pc = 0x30c7a0u;
}
