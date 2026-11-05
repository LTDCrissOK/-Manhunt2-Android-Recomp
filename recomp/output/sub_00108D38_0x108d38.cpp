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

// Function: sub_00108D38
// Address: 0x108d38 - 0x108da0
void sub_00108D38_0x108d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108D38_0x108d38");
#endif

    switch (ctx->pc) {
        case 0x108d64u: goto label_108d64;
        case 0x108d7cu: goto label_108d7c;
        case 0x108d88u: goto label_108d88;
        default: break;
    }

    ctx->pc = 0x108d38u;

    // 0x108d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108d40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x108d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108d44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x108d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x108d4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x108d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x108d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x108d54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x108d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x108d58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x108d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d5c: 0xc046164  jal         func_118590
    ctx->pc = 0x108D5Cu;
    SET_GPR_U32(ctx, 31, 0x108D64u);
    ctx->pc = 0x108D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D5Cu;
    // 0x108d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x108D5Cu, 0x108D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D64u;
label_108d64:
    // 0x108d64: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x108d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x108d68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x108D68u;
    {
        const bool branch_taken_0x108d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D68u;
        // 0x108d6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d68) {
            ctx->pc = 0x108D74u;
            goto label_108d74;
        }
    }
    ctx->pc = 0x108D70u;
    // 0x108d70: 0x92050051  lbu         $a1, 0x51($s0)
    ctx->pc = 0x108d70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
label_108d74:
    // 0x108d74: 0xc045656  jal         func_115958
    ctx->pc = 0x108D74u;
    SET_GPR_U32(ctx, 31, 0x108D7Cu);
    ctx->pc = 0x108D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D74u;
    // 0x108d78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115958u, 0x108D74u, 0x108D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D7Cu;
label_108d7c:
    // 0x108d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d80: 0xc0461e8  jal         func_1187A0
    ctx->pc = 0x108D80u;
    SET_GPR_U32(ctx, 31, 0x108D88u);
    ctx->pc = 0x108D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D80u;
    // 0x108d84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x108D80u, 0x108D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D88u;
label_108d88:
    // 0x108d88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108d8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108d90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x108d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108d94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x108d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108d98: 0x3e00008  jr          $ra
    ctx->pc = 0x108D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D98u;
        // 0x108d9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108DA0u;
}
