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

// Function: sub_00159D00
// Address: 0x159d00 - 0x159d60
void sub_00159D00_0x159d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159D00_0x159d00");
#endif

    switch (ctx->pc) {
        case 0x159d1cu: goto label_159d1c;
        case 0x159d24u: goto label_159d24;
        case 0x159d30u: goto label_159d30;
        case 0x159d40u: goto label_159d40;
        case 0x159d48u: goto label_159d48;
        default: break;
    }

    ctx->pc = 0x159d00u;

    // 0x159d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x159d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x159d10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x159d14: 0xc056834  jal         func_15A0D0
    ctx->pc = 0x159D14u;
    SET_GPR_U32(ctx, 31, 0x159D1Cu);
    ctx->pc = 0x159D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D14u;
    // 0x159d18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0D0u, 0x159D14u, 0x159D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D1Cu;
label_159d1c:
    // 0x159d1c: 0xc04f032  jal         func_13C0C8
    ctx->pc = 0x159D1Cu;
    SET_GPR_U32(ctx, 31, 0x159D24u);
    ctx->pc = 0x159D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D1Cu;
    // 0x159d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0C8u, 0x159D1Cu, 0x159D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D24u;
label_159d24:
    // 0x159d24: 0xae110214  sw          $s1, 0x214($s0)
    ctx->pc = 0x159d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 17));
    // 0x159d28: 0xc04f320  jal         func_13CC80
    ctx->pc = 0x159D28u;
    SET_GPR_U32(ctx, 31, 0x159D30u);
    ctx->pc = 0x159D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D28u;
    // 0x159d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC80u, 0x159D28u, 0x159D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D30u;
label_159d30:
    // 0x159d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d38: 0xc04f0c8  jal         func_13C320
    ctx->pc = 0x159D38u;
    SET_GPR_U32(ctx, 31, 0x159D40u);
    ctx->pc = 0x159D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D38u;
    // 0x159d3c: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C320u, 0x159D38u, 0x159D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D40u;
label_159d40:
    // 0x159d40: 0xc056b82  jal         func_15AE08
    ctx->pc = 0x159D40u;
    SET_GPR_U32(ctx, 31, 0x159D48u);
    ctx->pc = 0x159D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D40u;
    // 0x159d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AE08u, 0x159D40u, 0x159D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D48u;
label_159d48:
    // 0x159d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159d4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x159d4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159d50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159d54: 0x3e00008  jr          $ra
    ctx->pc = 0x159D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D54u;
        // 0x159d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159D5Cu;
    // 0x159d5c: 0x0  nop
    ctx->pc = 0x159d5cu;
    // NOP
    ctx->pc = 0x159d60u;
}
