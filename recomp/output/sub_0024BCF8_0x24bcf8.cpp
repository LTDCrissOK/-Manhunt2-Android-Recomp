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

// Function: sub_0024BCF8
// Address: 0x24bcf8 - 0x24bd40
void sub_0024BCF8_0x24bcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BCF8_0x24bcf8");
#endif

    switch (ctx->pc) {
        case 0x24bcf8u: goto label_24bcf8;
        case 0x24bcfcu: goto label_24bcfc;
        case 0x24bd00u: goto label_24bd00;
        case 0x24bd04u: goto label_24bd04;
        case 0x24bd08u: goto label_24bd08;
        case 0x24bd0cu: goto label_24bd0c;
        case 0x24bd10u: goto label_24bd10;
        case 0x24bd14u: goto label_24bd14;
        case 0x24bd18u: goto label_24bd18;
        case 0x24bd1cu: goto label_24bd1c;
        case 0x24bd20u: goto label_24bd20;
        case 0x24bd24u: goto label_24bd24;
        case 0x24bd28u: goto label_24bd28;
        case 0x24bd2cu: goto label_24bd2c;
        case 0x24bd30u: goto label_24bd30;
        case 0x24bd34u: goto label_24bd34;
        case 0x24bd38u: goto label_24bd38;
        case 0x24bd3cu: goto label_24bd3c;
        default: break;
    }

    ctx->pc = 0x24bcf8u;

label_24bcf8:
    // 0x24bcf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24bcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24bcfc:
    // 0x24bcfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24bd00:
    // 0x24bd00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24bd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_24bd04:
    // 0x24bd04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24bd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24bd08:
    // 0x24bd08: 0xc0b815a  jal         func_2E0568
label_24bd0c:
    if (ctx->pc == 0x24BD0Cu) {
        ctx->pc = 0x24BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD08u;
        // 0x24bd0c: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD10u;
        goto label_24bd10;
    }
    ctx->pc = 0x24BD08u;
    SET_GPR_U32(ctx, 31, 0x24BD10u);
    ctx->pc = 0x24BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD08u;
    // 0x24bd0c: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0568u, 0x24BD08u, 0x24BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD10u;
label_24bd10:
    // 0x24bd10: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x24bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_24bd14:
    // 0x24bd14: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x24bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_24bd18:
    // 0x24bd18: 0x40f809  jalr        $v0
label_24bd1c:
    if (ctx->pc == 0x24BD1Cu) {
        ctx->pc = 0x24BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD18u;
        // 0x24bd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD20u;
        goto label_24bd20;
    }
    ctx->pc = 0x24BD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24BD20u);
        ctx->pc = 0x24BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD18u;
        // 0x24bd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BD18u, 0x24BD20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BD20u;
label_24bd20:
    // 0x24bd20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24bd24:
    // 0x24bd24: 0xc09309e  jal         func_24C278
label_24bd28:
    if (ctx->pc == 0x24BD28u) {
        ctx->pc = 0x24BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD24u;
        // 0x24bd28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD2Cu;
        goto label_24bd2c;
    }
    ctx->pc = 0x24BD24u;
    SET_GPR_U32(ctx, 31, 0x24BD2Cu);
    ctx->pc = 0x24BD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD24u;
    // 0x24bd28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C278u, 0x24BD24u, 0x24BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD2Cu;
label_24bd2c:
    // 0x24bd2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bd2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24bd30:
    // 0x24bd30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24bd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24bd34:
    // 0x24bd34: 0x3e00008  jr          $ra
label_24bd38:
    if (ctx->pc == 0x24BD38u) {
        ctx->pc = 0x24BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD34u;
        // 0x24bd38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD3Cu;
        goto label_24bd3c;
    }
    ctx->pc = 0x24BD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD34u;
        // 0x24bd38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BD3Cu;
label_24bd3c:
    // 0x24bd3c: 0x0  nop
    ctx->pc = 0x24bd3cu;
    // NOP
    ctx->pc = 0x24bd40u;
}
