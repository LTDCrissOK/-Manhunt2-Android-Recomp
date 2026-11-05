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

// Function: sub_00141CF0
// Address: 0x141cf0 - 0x141d48
void sub_00141CF0_0x141cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141CF0_0x141cf0");
#endif

    switch (ctx->pc) {
        case 0x141d08u: goto label_141d08;
        case 0x141d14u: goto label_141d14;
        case 0x141d24u: goto label_141d24;
        case 0x141d34u: goto label_141d34;
        default: break;
    }

    ctx->pc = 0x141cf0u;

    // 0x141cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141cf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d00: 0xc050a9c  jal         func_142A70
    ctx->pc = 0x141D00u;
    SET_GPR_U32(ctx, 31, 0x141D08u);
    ctx->pc = 0x141D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D00u;
    // 0x141d04: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142A70u, 0x141D00u, 0x141D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D08u;
label_141d08:
    // 0x141d08: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x141d08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x141d0c: 0xc04deee  jal         func_137BB8
    ctx->pc = 0x141D0Cu;
    SET_GPR_U32(ctx, 31, 0x141D14u);
    ctx->pc = 0x141D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D0Cu;
    // 0x141d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137BB8u, 0x141D0Cu, 0x141D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D14u;
label_141d14:
    // 0x141d14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141D14u;
    {
        const bool branch_taken_0x141d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141d14) {
            ctx->pc = 0x141D2Cu;
            goto label_141d2c;
        }
    }
    ctx->pc = 0x141D1Cu;
    // 0x141d1c: 0xc050a08  jal         func_142820
    ctx->pc = 0x141D1Cu;
    SET_GPR_U32(ctx, 31, 0x141D24u);
    ctx->pc = 0x141D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D1Cu;
    // 0x141d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142820u, 0x141D1Cu, 0x141D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D24u;
label_141d24:
    // 0x141d24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x141D24u;
    {
        const bool branch_taken_0x141d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D24u;
        // 0x141d28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141d24) {
            ctx->pc = 0x141D38u;
            goto label_141d38;
        }
    }
    ctx->pc = 0x141D2Cu;
label_141d2c:
    // 0x141d2c: 0xc05095c  jal         func_142570
    ctx->pc = 0x141D2Cu;
    SET_GPR_U32(ctx, 31, 0x141D34u);
    ctx->pc = 0x141D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D2Cu;
    // 0x141d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142570u, 0x141D2Cu, 0x141D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D34u;
label_141d34:
    // 0x141d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141d38:
    // 0x141d38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x141D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D3Cu;
        // 0x141d40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141D44u;
    // 0x141d44: 0x0  nop
    ctx->pc = 0x141d44u;
    // NOP
    ctx->pc = 0x141d48u;
}
