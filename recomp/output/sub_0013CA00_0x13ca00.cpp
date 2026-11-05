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

// Function: sub_0013CA00
// Address: 0x13ca00 - 0x13ca50
void sub_0013CA00_0x13ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CA00_0x13ca00");
#endif

    switch (ctx->pc) {
        case 0x13ca00u: goto label_13ca00;
        case 0x13ca04u: goto label_13ca04;
        case 0x13ca08u: goto label_13ca08;
        case 0x13ca0cu: goto label_13ca0c;
        case 0x13ca10u: goto label_13ca10;
        case 0x13ca14u: goto label_13ca14;
        case 0x13ca18u: goto label_13ca18;
        case 0x13ca1cu: goto label_13ca1c;
        case 0x13ca20u: goto label_13ca20;
        case 0x13ca24u: goto label_13ca24;
        case 0x13ca28u: goto label_13ca28;
        case 0x13ca2cu: goto label_13ca2c;
        case 0x13ca30u: goto label_13ca30;
        case 0x13ca34u: goto label_13ca34;
        case 0x13ca38u: goto label_13ca38;
        case 0x13ca3cu: goto label_13ca3c;
        case 0x13ca40u: goto label_13ca40;
        case 0x13ca44u: goto label_13ca44;
        case 0x13ca48u: goto label_13ca48;
        case 0x13ca4cu: goto label_13ca4c;
        default: break;
    }

    ctx->pc = 0x13ca00u;

label_13ca00:
    // 0x13ca00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13ca04:
    // 0x13ca04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13ca08:
    // 0x13ca08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13ca08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ca0c:
    // 0x13ca0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13ca10:
    // 0x13ca10: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13ca14:
    // 0x13ca14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13ca18:
    // 0x13ca18: 0xc041d64  jal         func_107590
label_13ca1c:
    if (ctx->pc == 0x13CA1Cu) {
        ctx->pc = 0x13CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA18u;
        // 0x13ca1c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA20u;
        goto label_13ca20;
    }
    ctx->pc = 0x13CA18u;
    SET_GPR_U32(ctx, 31, 0x13CA20u);
    ctx->pc = 0x13CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA18u;
    // 0x13ca1c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107590u, 0x13CA18u, 0x13CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA20u;
label_13ca20:
    // 0x13ca20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ca20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ca24:
    // 0x13ca24: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13ca28:
    // 0x13ca28: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13ca2c:
    // 0x13ca2c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13ca30:
    // 0x13ca30: 0x40f809  jalr        $v0
label_13ca34:
    if (ctx->pc == 0x13CA34u) {
        ctx->pc = 0x13CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA30u;
        // 0x13ca34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA38u;
        goto label_13ca38;
    }
    ctx->pc = 0x13CA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CA38u);
        ctx->pc = 0x13CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA30u;
        // 0x13ca34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CA30u, 0x13CA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CA38u;
label_13ca38:
    // 0x13ca38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13ca38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13ca3c:
    // 0x13ca3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13ca3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13ca40:
    // 0x13ca40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ca40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ca44:
    // 0x13ca44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ca44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13ca48:
    // 0x13ca48: 0x3e00008  jr          $ra
label_13ca4c:
    if (ctx->pc == 0x13CA4Cu) {
        ctx->pc = 0x13CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA48u;
        // 0x13ca4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA50u;
        goto label_fallthrough_0x13ca48;
    }
    ctx->pc = 0x13CA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA48u;
        // 0x13ca4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13ca48:
    ctx->pc = 0x13CA50u;
}
