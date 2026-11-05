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

// Function: sub_00152A40
// Address: 0x152a40 - 0x152a90
void sub_00152A40_0x152a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152A40_0x152a40");
#endif

    switch (ctx->pc) {
        case 0x152a5cu: goto label_152a5c;
        case 0x152a64u: goto label_152a64;
        case 0x152a78u: goto label_152a78;
        default: break;
    }

    ctx->pc = 0x152a40u;

    // 0x152a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152a48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x152a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x152a50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152a54: 0xc054b2e  jal         func_152CB8
    ctx->pc = 0x152A54u;
    SET_GPR_U32(ctx, 31, 0x152A5Cu);
    ctx->pc = 0x152A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A54u;
    // 0x152a58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152CB8u, 0x152A54u, 0x152A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A5Cu;
label_152a5c:
    // 0x152a5c: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x152A5Cu;
    SET_GPR_U32(ctx, 31, 0x152A64u);
    ctx->pc = 0x152A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A5Cu;
    // 0x152a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x152A5Cu, 0x152A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A64u;
label_152a64:
    // 0x152a64: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x152a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x152a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152a6c: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x152a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x152a70: 0xc04d89a  jal         func_136268
    ctx->pc = 0x152A70u;
    SET_GPR_U32(ctx, 31, 0x152A78u);
    ctx->pc = 0x152A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A70u;
    // 0x152a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x152A70u, 0x152A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A78u;
label_152a78:
    // 0x152a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x152a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x152a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152a84: 0x3e00008  jr          $ra
    ctx->pc = 0x152A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A84u;
        // 0x152a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152A8Cu;
    // 0x152a8c: 0x0  nop
    ctx->pc = 0x152a8cu;
    // NOP
    ctx->pc = 0x152a90u;
}
